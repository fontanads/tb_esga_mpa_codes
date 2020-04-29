
clear all; close all; clc;

addpath('./funcs_2020/');

sys = system_strings();

rng(1)

%% 

EbN0dB = 10:2:22;                                                            % EbN0 [dB] points to simulate
Pe = 1e-4;                                                                  % acceptable probability of error
min_num_of_errors = 100;                                                      % desired number of frame errors per point
iter_cnt_saving_threshold = 100;                                              % saving temp mat files every #x iterations
print_frequency = 10;                                                        % frequency of iterations to print simulation status

%%
% SCMA parameters
load_factor = 1.5;                    % \beta: load factor of SCMA J/K
num_of_subcarriers = 4;               % K: number of shared resources
modulation_spectral_eficiency = 2;    % kb = log2(M): bits/symbol 
spreading_degree = 2;                 % N: number of complex dimensions of each symbol
alphabet_size = 4;                    % q: number of unique complex projections in each complex dimension
code_rate = 1/2;

% LDPC Parameters
codeword_length = 128;                    % codeword legnth of LDPC code (available: 128, 256, 512)
Num_iters_LDPC_Belief_Propagation = 10;   % number of inner belief propagation iterations @ the LDPC decoder

% Rx Parameters
Nr=4;                                     % Number of Rx antennas @ base station

To = 3;                                   % number of outer loops during iterative detection and decoding 
Tm_first = 5;                             % number of inner MPA iterations of the SCMA modulation detector (first outer loop)
Tm_after = 1;                             % number of inner MPA iterations of the SCMA modulation detector (second outer loop and on)

r_th = 1.0;                              % r: threshold parameter for TB-ESGA-MPA (0 <= r <= 1), where 0 corresponds to original MPA and 1 corresponds to full Gaussian Approx.

LLR_clip_value = 20;                      % LLR saturation value for the extrinsic LLRs @ the input of the SCMA MPA (applied after: FEC decoding + extrinsic=in-out + re-interleaving)
a_FF = 1.;                                % scaling value to multiply extrinsic LLRs fed forward to the FEC
a_FB = 1.;                                % scaling value to multiply extrinsic LLRs fed back to the SCMA MPA

%% SNR and Noise Variance

SNRdB =  EbN0dB + 10*log10(modulation_spectral_eficiency*code_rate);        % calculate SNRdB according to EbN0, balancing according to CM SE
SNR = 10.^(SNRdB/10);                                                       %  SNR = Px / Pn
varnoise = (1/2)*(1./SNR);                                                  % Pn (noise power) --> complex noise variance per real-dimension


%% SCMA: automatic parameters
num_of_users = round(load_factor*num_of_subcarriers);  % J
load_factor = num_of_users/num_of_subcarriers;         % beta = J/K
modulation_size = 2^modulation_spectral_eficiency;     % M = 2^k

%% LDPC: automatic parameters
LDPC = CCSDS_LDPC_params(codeword_length,Num_iters_LDPC_Belief_Propagation); % Rate 1/2 CCSDS Uplink (Short): SHORT BLOCK LENGTH LDPC CODES FOR TC SYNCHRONIZATION AND CHANNEL CODING", April 2015: CCSDS 231.1-O-1

%% Assign params to variables of simpler names
[J, K, Beta] = deal(num_of_users, num_of_subcarriers, load_factor);
[M,N,q,kb] = deal(modulation_size, spreading_degree, alphabet_size,modulation_spectral_eficiency);


%% Load resource allocation matrix F and load SCMA mother-codebook C
[F,F_int] = load_F(J,K,N); 
% F: a K x J matrix with entries being 0 or 1
% F_int: a K x J matrix where the N non-null entries of each column are 1, ..., N

[C, C_ID, C_perms, Aq ] = load_codebook(M,q,N);
% C_ID: the name of the loaded codebook
% C: a matrix with M columns and N rows, where each column is a modulation symbol with N-complex dimensions
% C_perms: a matrix with M columns and N rows, where each entry is an integer between 1 and q and each row is a permutation sequence over this q-ary alphabet
% Aq: the alphabet of unique complex-projections corresponding to the "field" labels 1, ..., q

codewords_binary_labels = (dec2bin((1:M) -1) -'0')>0;   % binary labeling of the codebook in natural order

% interleaver 
[Nz,Ns] = zero_padding_length(kb, LDPC.N);
intrlvrIndices = get_interleaver_indexes(LDPC.N + Nz);
zero_padding_positions = get_zero_padding_positions(intrlvrIndices,LDPC.N);


%% Buffers
max_iters = min_num_of_errors/(Pe);                                         % maximum allowed number of iterations per each EbN0 point


iter_cnt = zeros(size(EbN0dB));                                             % iteration counters (vector, one counter for each EbN0)

erros_frame = zeros(size(EbN0dB));                                          % one frame error: if any of the message bits of any user is wrongly decoded
erros_bit = zeros(size(EbN0dB));                                            % each message bit wrongly decoded
erros_bit_uncoded = zeros(size(EbN0dB));                                    % measured @ the output of the SCMA's MPA, each coded bit wrongly hard-detected
erros_sym = zeros(size(EbN0dB));                                            % measured @ the output of the SCMA's MPA, each SCMA symbol wrongly hard-detected

FER = zeros(size(EbN0dB));                                                  % frame error rate
BER = zeros(size(EbN0dB));                                                  % bit error rate (information bits, after decoder)
BER_uncoded = zeros(size(EbN0dB));                                          % bit error rate (coded bits, after SCMA's MPA hard decision)
SER = zeros(size(EbN0dB));                                                  % symbol error rate (SCMA symbols, after SCMA's MPA hard decision)

current_BER = BER;
current_FER = FER;
current_BER_uncoded = BER_uncoded;
current_SER = SER;

soft_bits_MPA_input_initialization = initialize_soft_bits_FEC_output(J,LDPC.N,Nz,Ns,kb,zero_padding_positions); % initializes a priori LLRs for the MPA input in the first iteration




 for j=1:J % for every user
     varphi_j = find(F(:,j)); % FNs connected to user j
     for k = varphi_j         % for every FN k connected to j
         edge_empty(j,k) = struct('best_subset',[]);
     end
 end


%% filename to save
filename_raw = sprintf('%s_J%d_K%d_M%d_q%d_N%d_LDPC_n%d_Rx_Nr%d_EbN0dB_%d_to_%d_MinErr_%d_To%d_Tm1_%d_Tm2_%d_100r_%d_%s',...
                        sys.PC_str,J,K,M,q,N,LDPC.N,Nr,EbN0dB(1),EbN0dB(end),min_num_of_errors,To,Tm_first,Tm_after,100*r_th,sys.date_str);

temp_save_filename = sprintf('%s%s_Temp.mat',sys.dir_str_temp,filename_raw);
save_filename = sprintf('%s%s.mat',sys.dir_str,filename_raw);
                    
%% MAIN LOOP
for EbN0_val = EbN0dB
    
    logic_idx = EbN0_val==EbN0dB; % logic index: it is 1 exactly in the position of the current EbN0 value
    noise_var = varnoise(logic_idx); % noise power corresponding to the current EbN0 value, assuming that transmit power is P=1
    
    while ( erros_frame(logic_idx) < min_num_of_errors ) && ( iter_cnt(logic_idx) <  max_iters ) % it breaks the loop when it reaches (minimum num. of frame errors) or (max. number of iterations per point)
        
        tic
        iter_cnt(logic_idx) =  iter_cnt(logic_idx) + 1;                     % increments the number of transmissions for the current EbN0 point

        %% User Transmitters: generating the messages and codewords
        
        all_messages = randi([0,1],J,LDPC.K);                               % J (rows) binary messages  with message-length of K (columns) bits 

        % Encoder (independent for each user):
        % --- binary messages are encoded with LDPC encoder
        % --- codewords are bit-interleaved (and may be zero-padded if necessary)
        % --- bit-interleaved codewords are broken into Ns packets of kb bits
        % --- each of the Ns packets maps to an SCMA symbol (only the integer label 0, ..., M-1)
        [all_codewords, all_codewords_interleaved, all_symbols_binary, all_symbols] = encode_messages(all_messages,kb,Ns,Nz,LDPC,intrlvrIndices);
        
        % all_codewords: J x LDPC.N (each row is a codeword)
        % all_codewords_interleaved: J x LDPC.N (each row is a binary codeword bit-interleaved with the permutation in intrlvrIndices
        % all_symbols_binary: J x kb x Ns, the binary representation of all SCMA symbols to transmit the codeword (corresponds to Ns uplinks of J SCMA symbols with the correponding kb-length binary labels)
        % all_symbols: J x Ns, the rows are the sequences of symbols (integer labels 0, ..., M-1) of each corresponding user
        
        %%  Fading Channels
        
        H = sqrt(1/2)*(randn(K,J,Nr)+1i*randn(K,J,Nr));                     % K x J x Nr uncorrelated flat-fading channel (block channel, constant during Ns SCMA uplinks)

        edge = edge_empty;
        % Check best channel combinations in the Graph
        for j=1:J % for every user
            varphi_j = find(F(:,j))'; % FNs connected to user j
            for k = varphi_j         % for every FN k connected to j
                interference_users = setdiff(find(F(k,:)),j);
                SINR_factor = 0;
                for num_Rx=1:Nr      % for every cardinality of antenna
                    subsets = nchoosek(1:Nr,num_Rx);
                    for num_subset = 1:size(subsets,1) % for every subset of num_Rx antennas
                        hj_sum = sum(H(k,j,subsets(num_subset,:)));
                        h_interference_sum = sum(squeeze(H(k,interference_users,subsets(num_subset,:))),2);
                        
                        SINR_factor_subset = norm(hj_sum)/norm(h_interference_sum);
                        if SINR_factor_subset > SINR_factor
                            SINR_factor = SINR_factor_subset;
                            edge(j,k).best_subset = subsets(num_subset,:);
                        end
                        
                    end
                end
            end
        end
        
        
        %% SCMA modulation and Uplink to Base-station
        % For each of the Ns packets:
        % -- each user selects the corresponding N-dim codeword from the codebook
        % -- the codewords are spread over K-resources using spreading signatures of the columns in F
        % -- K-dim (sparse) codewords are faded by the small-scale channel coefficients and superposed (in each Rx antenna) at the base station
        
        switch sys.OS_str
            case 'Linux'
%                 [y, X, SCMA_Symbols] = uplink_SCMA_Linux(J,K,N,Ns,Nr,F,C,all_symbols,H);    % y is K x Nr x Ns
                [y, X, SCMA_Symbols] = uplink_SCMA_Linux_mex(J,K,N,Ns,Nr,F,C,all_symbols,H);    % y is K x Nr x Ns
            case 'Windows'
%                 [y, X, SCMA_Symbols] = uplink_SCMA(J,K,N,Ns,Nr,F,C,all_symbols,H);    % y is K x Nr x Ns
                [y, X, SCMA_Symbols] = uplink_SCMA_mex(J,K,N,Ns,Nr,F,C,all_symbols,H);    % y is K x Nr x Ns
            otherwise
                error('Operational System not supported.')
        end
        
        %% Adding noise in each packet, subcarrier and Rx antenna 
        noise = sqrt(noise_var)*(randn(K,Nr,Ns)+1i*randn(K,Nr,Ns));         % AWGN
        y = y + noise;                                                      % Rx signal
        
        %% Iterative Detection and Decoding

        soft_bits_MPA_input = soft_bits_MPA_input_initialization;   % initialize soft-bits for the input of the MPA        
        for t = 1:To                % for each turbo iteration
            %% Detection with MPA
            
%             soft_bits_MPA_input_temp = soft_bits_MPA_input;               % uncomment this line if you wish to visualize LLRs with TRACK_LLR script
            
            switch sys.OS_str
                case 'Linux'
%                     [a_priori_beliefs] = modulation_pmf_update_Linux(soft_bits_MPA_input,codewords_binary_labels);
                    [a_priori_beliefs] = modulation_pmf_update_Linux_mex(soft_bits_MPA_input,codewords_binary_labels);
                 case 'Windows'
%                      [a_priori_beliefs] = modulation_pmf_update(soft_bits_MPA_input,codewords_binary_labels);
                     [a_priori_beliefs] = modulation_pmf_update_mex(soft_bits_MPA_input,codewords_binary_labels); 
                 otherwise
                    error('Operational System not supported.')
            end

            % -- select the number of inner MPA iterations
            Tm = Tm_first*(t==1) + Tm_after*(t>1); % when t=1, Tm=Tm_first :: when t>1, Tm=Tm_after
            
            % -- run MPA and get soft bits (LLRs) of the coded bits of each user 
            switch sys.OS_str
                case 'Linux'
%                     [soft_bits_MPA_output, hard_symbols] = TB_ESGA_MPA_v1_Linux(y,F,F_int,C,C_perms, Aq, codewords_binary_labels, H, Tm_first,r_th,a_priori_beliefs, 2*noise_var,edge);
                    [soft_bits_MPA_output, hard_symbols] = TB_ESGA_MPA_v1_Linux_mex(y,F,F_int,C,C_perms, Aq, codewords_binary_labels, H, Tm,r_th,a_priori_beliefs, 2*noise_var,edge);
                 case 'Windows'
%                      [soft_bits_MPA_output, hard_symbols] = TB_ESGA_MPA_v1(y,F,F_int,C,C_perms, Aq, codewords_binary_labels, H, Tm_first,r_th,a_priori_beliefs, 2*noise_var, edge);
                     [soft_bits_MPA_output, hard_symbols] = TB_ESGA_MPA_v1_mex(y,F,F_int,C,C_perms, Aq, codewords_binary_labels, H, Tm,r_th,a_priori_beliefs, 2*noise_var, edge);
                 otherwise
                    error('Operational System not supported.')
            end

            hard_bits_MPA_output = sign(soft_bits_MPA_output)<0;
                        
            %% Decoding with FEC-decoder, using soft bits from the modulation detector
            
            % -- get extrinsic LLRs and deinterleave the soft bits  
            % -- run LDPC decoder and get soft bits of the codewords
            % -- in the last outer loop, the LDPC decoder makes a hard-decision and outputs the decoded messages
            [soft_bits_FEC_input, soft_bits_FEC_output, soft_bits_MPA_input, soft_bits_message] = ...
            get_soft_bits_for_FEC_input_and_MPA_input(soft_bits_MPA_output,soft_bits_MPA_input, intrlvrIndices,...
                                                      LDPC.K, LDPC.N, LDPC.decode, LDPC.output_message, LLR_clip_value, a_FF,a_FB, t==To);
            
            %%
%             TRACK_LLRs_2020
        
        end
        
        % decoded messages (hard decision on soft bits)
        all_messages_decoded = sign(soft_bits_message)<0; 

        %% updating number of errors 
        
        current_symbol_errors = sum(hard_symbols(:)~=(1+all_symbols(:)));
        current_uncoded_bit_errors = sum(xor(all_symbols_binary(:),hard_bits_MPA_output(:)));
        current_information_bit_errors = sum(xor(all_messages(:),all_messages_decoded(:)));        
        current_frame_errors           = double( current_information_bit_errors > 0 );
   
        erros_bit(logic_idx)   = erros_bit(logic_idx)   + current_information_bit_errors;
        erros_frame(logic_idx) = erros_frame(logic_idx) + current_frame_errors;
        erros_bit_uncoded(logic_idx) = erros_bit_uncoded(logic_idx) + current_uncoded_bit_errors;
        erros_sym(logic_idx) = erros_sym(logic_idx) + current_symbol_errors;
        
        current_BER(logic_idx) = erros_bit(logic_idx)  /(iter_cnt(logic_idx)*J*LDPC.K);
        current_FER(logic_idx) = erros_frame(logic_idx)/(iter_cnt(logic_idx));
        current_BER_uncoded(logic_idx) = erros_bit_uncoded(logic_idx)  /(iter_cnt(logic_idx)*J*(LDPC.N+Nz));
        current_SER(logic_idx) = erros_sym(logic_idx)/(iter_cnt(logic_idx)*J*Ns);
        
        %% print loop information
        
        iter_time = toc;
        if(~mod(sum(iter_cnt(1:find(logic_idx))),print_frequency))
            clc
            fprintf(' \n')
            fprintf(' # Coded SCMA (J,K,M,q,N) = (%d,%d,%d,%d,%d) \n',J,K,M,q,N)
            fprintf(' # Num. Rx Antennas = %d \n',Nr)
            fprintf(' # LDPC block length %d, num. channel uses Ns=%d \n',LDPC.N,Ns)
            fprintf(' # Turbo ID (To, Tm1, Tm2) = (%d, %d, %d), TB-ESGA r=%.2f  \n',To,Tm_first,Tm_after,r_th)
            fprintf(' \n')
            fprintf(' # EbN0 [dB]: %.2f (%d/%d) \n',EbN0_val,find(logic_idx),length(EbN0dB))
            fprintf(' # Frame Errors: (%d/%d) max: %d \n', erros_frame(logic_idx),iter_cnt(logic_idx),min_num_of_errors)
            fprintf(' # Bit Errors: (%d/%d) \n', erros_bit(logic_idx),iter_cnt(logic_idx)*J*LDPC.K)
            fprintf(' # Bit Errors MPA: (%d/%d) \n', erros_bit_uncoded(logic_idx),iter_cnt(logic_idx)*J*(LDPC.N+Nz))
            fprintf(' # Symbol Errors MPA: (%d/%d) \n', erros_sym(logic_idx),iter_cnt(logic_idx)*J*Ns)
            fprintf(' # Iterations: (%d/%d) \n',iter_cnt(logic_idx),max_iters)
            fprintf(' # Iteration cost (s): %.4f \n', iter_time); 
        end
        
        %% temporary save
        if(~mod(sum(iter_cnt(1:find(logic_idx))),iter_cnt_saving_threshold))
             save(temp_save_filename);           
        end
        
    end
    
    %% error rate metrics
    
    BER(logic_idx)          = erros_bit(logic_idx)/(iter_cnt(logic_idx)*J*LDPC.K);
    FER(logic_idx)          = erros_frame(logic_idx)/(iter_cnt(logic_idx));
    BER_uncoded(logic_idx)  = erros_bit_uncoded(logic_idx)  /(iter_cnt(logic_idx)*J*(LDPC.N+Nz));
    SER(logic_idx)          = erros_sym(logic_idx)/(iter_cnt(logic_idx)*J*Ns);
    
end

%%


%% Saving Simulation Data
save(save_filename);  

%%
figure(1)
clf;

semilogy(EbN0dB,FER,'-ok','DisplayName','FER'); hold on
semilogy(EbN0dB,BER,'--sb','DisplayName','BER')
semilogy(EbN0dB,BER_uncoded,'--pr','DisplayName','BER MPA')
semilogy(EbN0dB,SER,'--dm','DisplayName','SER')

grid on
xlabel('$E_b/N_0$ (dB)','FontSize',15,'Interpreter','latex')
ylabel('Error Rate','FontSize',15,'Interpreter','latex')
set(gca,'TickLabelInterpreter', 'latex','fontsize',14,'linewidth',1.2);
legend show; set(legend,'interpreter','latex','location','best','fontsize',14);

axis([0 60 1e-6 1])
%%
