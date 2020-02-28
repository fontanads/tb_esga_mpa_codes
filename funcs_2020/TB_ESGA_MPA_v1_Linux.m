function [soft_bits, hard_symbols] = TB_ESGA_MPA_v1_Linux(y_all,F,F_int,C,C_perms, Aq, codewords_binary_labels, H, Tm,r_th,a_priori_beliefs, varnoise, edge_subset)
%TB_ESGA_MPA_Many_Rx_v0 Summary of this function goes here
%   v1 test for best selection of combined channel gains


%%
eps_val_num=1e-50; % avoid log(0)
eps_val_den=1e-50; % avoid division by zero

%%
% a_priori_beliefs: J x M x Ns matrix with a priory beliefs of each symbol
% other variables: defined in main_file

%% read dimensions
[K,J] = size(F);
[~, Nr, Ns] = size(y_all);
[N,M] = size(C);
q = length(Aq);
kb = log2(M);

%% buffers
soft_bits = zeros(J,kb,Ns);
hard_symbols = zeros(J, Ns);

%-------------------------------------------------------------------------------------------
%% MPA starts HERE
%-------------------------------------------------------------------------------------------

%% Ns runs of the MPA
for ns=1:Ns % for each packet
    
    %% initialize the messages of packet ns
    mess_from_FN_to_VN = zeros(K,J,M);
    mess_from_VN_to_FN = zeros(J,K,M);
    
    for j=1:J % for each user
        vphi_j = find(F(:,j)'); % subcarrier set associated with user j
        %for k = vphi_j % this type of loop does not work when using C-Coder for Mex files
        for k1=1:length(vphi_j) % for each subcarrier of user j
            k=vphi_j(k1);       % actual index of subcarrier
            mess_from_VN_to_FN(j,k,:) = a_priori_beliefs(j,:,ns); % read a priori log-PMF of symbols in packet ns
        end
    end
    
    y = y_all(:,:,ns); % current received signal in packet ns (matrix size: K x Nr :: "subcarriers" x "Rx antennas")
    
    
    %% MPA iterations for fixed packet ns
    for t=1:Tm % iterations 1, ..., Tm of the MPA

        %% FNs message update
        for k=1:K % for every FN
            phi_k = find(F(k,:)); % user indexes spreading over FN k
            %for j = phi_k % for every VN connected to FN k
            for j1=1:length(phi_k)
                j=phi_k(j1); % actual VN index
                phi_k_except_j = setdiff(phi_k,j); % VNs connected to FN k except VN j
                
                
                antennas_to_mix = edge_subset(j,k).best_subset;
                y_mixed = sum(y(k,antennas_to_mix));
                
                if length(antennas_to_mix)==1
                    hk_sum = reshape(squeeze(H(k,:,antennas_to_mix)),J,1);
                else
                    hk_sum = sum(squeeze(H(k,:,antennas_to_mix)),2);
                end
                
                
                for q_id = 1:q % reading all possible Projections of the codebook of user_j @ (resource k)
                    
                    max_temp_0 = -Inf; % initial result of max^star operation
                    
                    [strong_users, weak_users] = find_strong_and_weak_users();     % identify strong and weak users w.r.t. channel gain of user j in (FN k, Rx antenna nr)
                    [adapt_mean, adapt_var] = gaussian_approximation(weak_users);  % Gaussian approx. of weak-users inteference (get mean and variance to modify effective noise)
                        
                    pdf_exp_cte = -1*(1/2)*(1/(adapt_var + varnoise));     % scaling factor in the exponent of the Gaussian pdf :: (the 1/2 constant does not matter too much)
                    pdf_scaling_cte = (1/2/pi/sqrt(varnoise + adapt_var)); % scaling factor of the Gaussina pdf :: (the 2*pi constant does not matter too much)
                    
                    yk_fix = y_mixed - hk_sum(j)*Aq(q_id) - adapt_mean;    % received sample - channel*fixed_projection_of_user_j - effective_noise_mean

                        
                        % This part here is a trick to implement a counter
                        % that goes like this:
                        % (1, 1, ..., 1)
                        % (...)
                        % (q, 1, ..., 1)
                        % (1, 2, ..., 1)
                        % (...)
                        % (q, q, ..., q)
                        length_of_each_counter = q*ones(1,length(strong_users)); 
                        counter = ones(1,length(strong_users));
                        
                        %Actual
                        for marginal_prob_idx_cnt=1:prod(length_of_each_counter) % begin interference marginalization: 
                            % tests all possible combinations of projections for the strong users
                            % the combination that maximizes p(y | xj, interference) dominates the probability that x_j = Aq(q_id) 

                            interference_projections = get_interference_projections(counter); 
                            h_strong_users = hk_sum(strong_users);
                            interference = (reshape(h_strong_users,1,length(h_strong_users))*interference_projections);

                            % get the sum of the LLR-beliefs of the current projections of the VNs in the interference marginalization
                            prob_extrinsic_info = get_extrinsic_info_probability(); 
                            
                            % channel observation contribution of p(y | xj, interference)
                            f_y_given_X_h = log(pdf_scaling_cte) + pdf_exp_cte*(abs(yk_fix-interference)^2);
                            
                            % Add extrinsic information to channel observation
                            prob_q_jk = f_y_given_X_h + prob_extrinsic_info; 

                            % apply max^star operation to implement log(sum(exp(a1,a2,...,aN)))
                            max_temp_0 = max(max_temp_0,prob_q_jk) + log(1+exp(-abs(max_temp_0-prob_q_jk)));

                            % update q-ary counter
                            counter = update_cartesian_counter(counter);
                            
                        end % fim da marginalização sobre a interferência
                     
                    % extrapolate probability of projection Aq(q_id) to the probability of all codebook symbols of user j with this projection in FN k
                    codeword_labels = find(C_perms(F_int(k,j),:) == q_id);  % which of the M codewords of the codebook has the projection label q_id?
                    mess_from_FN_to_VN(k,j,codeword_labels) = max_temp_0;   % replicate probability
                
                end % end loop over projections Aq for user j @ k
                
                % PMF normalization
                mess_from_FN_to_VN(k,j,:) = mess_from_FN_to_VN(k,j,:) - max(mess_from_FN_to_VN(k,j,:)); % remove maximum value (almost normalizes)
                cte_norm = log(sum(exp(mess_from_FN_to_VN(k,j,:))));                                    % checks sum of probabilities and move back to LLR domain
                mess_from_FN_to_VN(k,j,:) = mess_from_FN_to_VN(k,j,:) - cte_norm;                       % divide by sum of probabilities (LLR domain: subtract)
                
            end % end VN loop
        end % end FN loop

        
        %% VNs message update
        for j=1:J % for every VN
            vphi_j = find(F(:,j))'; % resource indexes associated with VN j
            %for k = vphi_j % for every FN connected to VN j
            for k1=1:length(vphi_j)
                k=vphi_j(k1); % actual FN index
                
                if t~=Tm % before last iteration, exclude FN k
                    vphi_j_except_k = setdiff(vphi_j,k);
                else % at last iteration, include everyone
                    vphi_j_except_k = vphi_j;
                end
                
                for m=1:M % for every codeword 
                    p_xj_m = a_priori_beliefs(j,m,ns);                      % a priori probability of m-th symbol 
                    mess_from_VN_to_FN(j,k,m) = p_xj_m + sum(mess_from_FN_to_VN(vphi_j_except_k,j,m)); % sum of LLR-messages from FNs + a priori probability
                end % end codeword loop
               
                % PMF normalization
                mess_from_VN_to_FN(j,k,:) = mess_from_VN_to_FN(j,k,:) - max(mess_from_VN_to_FN(j,k,:)); % remove maximum value (almost normalizes)
                cte_norm = log(sum(exp(mess_from_VN_to_FN(j,k,:))));                                    % checks sum of probabilities and move back to LLR domain
                mess_from_VN_to_FN(j,k,:) = mess_from_VN_to_FN(j,k,:) - cte_norm;                       % divide by sum of probabilities (LLR domain: subtract)
            end % end FN loop
            
            if t==Tm % @ last iteration, get LLRs
                 pmf = squeeze(mess_from_VN_to_FN(j,vphi_j(1),:));          % a posteriori probabilities (after MPA) of symbols of user j
                 soft_bits(j,:,ns) =  get_LLRs(pmf);                        % convert symbol probability to bit probability of each bit label
                 [~, temp_max] = max(pmf);                                  % get symbol ID with maximum log-probability
                 hard_symbols(j,ns) = temp_max(1);                          % hard decision on symbol
            end
            
        end % end VN loop
        
    end % end MPA iterations for fixer packet index
end % end packet index

%-------------------------------------------------------------------------------------------
%% MPA ends HERE
%-------------------------------------------------------------------------------------------

%-------------------------------------------------------------------------------------------
%% HELPER FUNCTIONS start HERE
%-------------------------------------------------------------------------------------------
    %% Fix user j, Find strong and weak users @ FN k 
    function [strong_users, weak_users] = find_strong_and_weak_users()
        
%         h_kj = squeeze(H(k,j,nr));       % channel fading of user j in FN k @ Rx antenna nr
        
        dummy_zero_j = ones(1,J); dummy_zero_j(j)=0;
        channel_gains = (abs(hk_sum.').^2);
        hk_gain_sparse = channel_gains.*dummy_zero_j.*F(k,:); % channel fadings of all users in FN k (if VN not in FN k, fading = 0) @ Rx Antenna nr
        [h_k_ref, user_ref] = max(hk_gain_sparse);
        
        
        strong_users = intersect( find( (hk_gain_sparse) >= (r_th * h_k_ref)  ) ,phi_k_except_j); % users in FN k (except j) that satisfy threshold "r_th * abs(h_kj)^2" are included in strong_users
        weak_users = setdiff(phi_k_except_j,strong_users); % remaining users are considered weak interference
    end

    %% Gaussian approximation on weak users
    function [adapt_mean, adapt_var] = gaussian_approximation(weak_users) % given the weak users indexes,
        
        adapt_mean= 0+0i; % initialize effective noise mean
        adapt_var = 0;    % initialize increment of noise variance
        
        if ~isempty(weak_users) % if there is any weak user
            %for user = weak_users
            for uu=1:length(weak_users) % for each weak user 
                user=weak_users(uu);    % actual weak user index 
                [mean_u, var_u] = get_mean_and_var(user); % take expecation of user projection h_kj_nr * E[ X(k,u) ] and |h_kj_nr|^2 * var[ X(k,u) ]
                adapt_mean  = adapt_mean + mean_u; % increment GA mean
                adapt_var   = adapt_var + var_u;   % increment GA variance
            end
        end
        
    end


    %% Get mean and variance of codebook from "user" @ subcarrier k 
    function [mean_u, var_u] = get_mean_and_var(user) % get expecation of "user" projection E[X(k,u)] and E[|X(k,u)|^2]
        
        Expect_over_x_kj = 0 + 0i; 
        Expect_over_squared_norm_x_kj = 0;
        
        h_kj_nr = hk_sum(user); % fading coefficient of user 
        for mm=1:M
            xj = spread_symbol(user, mm);
            x_kk_ee_me = xj(k);
            p_x_kjm = exp(mess_from_VN_to_FN(user,k,mm));
            Expect_over_x_kj = Expect_over_x_kj + p_x_kjm*x_kk_ee_me;
            Expect_over_squared_norm_x_kj = Expect_over_squared_norm_x_kj + (norm(x_kk_ee_me)^2)*p_x_kjm;
        end
        mean_u = h_kj_nr*Expect_over_x_kj;
        var_u  = (norm(h_kj_nr)^2)*(Expect_over_squared_norm_x_kj-(norm(Expect_over_x_kj)^2));
    end


    %% N-dim symbol to K-dim symbol
    function xj = spread_symbol(user, sym_index)
        cj = C(:,sym_index);        % draw N-dim. symbol from N-dim. mother-codebook

        Tj = diag( F(:,user) );     % diagonal matrix from user column in F
        Tj(:,~any(Tj,1))=[];        % remove zero-columns and get spreading matrix
        
        xj = Tj*cj;                 % assign K-dim sparse symbol to user j in packet ns
    end

    
    %% Update Count Cartesiano
    
    function counter = update_cartesian_counter(counter)
        
        % incrementa iterativamente os indices de um produto cartesiano para obter todas as combinacoes
        for n=1:length(counter)
            if n==1
                counter(n) = mod(counter(n) + 1,length_of_each_counter(n)+1);            
            else
                if ~mod(marginal_prob_idx_cnt,prod(length_of_each_counter(1:n-1)))
                    counter(n) = mod(counter(n) + 1,length_of_each_counter(n)+1);
                end
            end
            if counter(n)==0
                counter(n)=1; 
            end
        end % fim incremento cartesiano

    end

    %% Get projections of interference being tested
    function interference_projections = get_interference_projections(counter) 
        interference_projections = Aq(counter);
    end

    %% Get the probability of the current interference being tested
    function prob_extrinsic_info = get_extrinsic_info_probability()
        prob_extrinsic_info = 0;
        %for u = strong_users
        for uu=1:length(strong_users)
            u = strong_users(uu);
            projection_index =  counter(u(1)*ones(size(strong_users)) == strong_users);
            permutation_row = C_perms(F_int(k,u),:); % M columns
            codeword_labels = find(permutation_row == projection_index(1)*ones(1,M));
            prob_of_projection = log(sum(exp(mess_from_VN_to_FN(u,k,codeword_labels))) + eps_val_num);
            prob_extrinsic_info = prob_extrinsic_info + prob_of_projection;
        end
    end
    
    %% Get LLRs (Soft bits) @ last iteration when updating VNs for the last time
    
    function soft_bits = get_LLRs(pmf)
        
        soft_bits = zeros(1,kb);
        hard_bits = zeros(1,kb);
        
        for n=1:kb % for each bit
            
            prob_set_b0 = exp(pmf(~codewords_binary_labels(:,n)));   % for the n-th bits, locate symbols indexes with bit_n = 0 :: get a posteriori probability of these symbols
            prob_set_b1 = exp(pmf(codewords_binary_labels(:,n)==1)); % for the n-th bits, locate symbols indexes with bit_n = 1 :: get a posteriori probability of these symbols
            
            % LLR = log( LR ), where LR= (Prob. bit_n==0) / (Prob.bit_n==1) :: (Prob. bit_n==b) is the sum of symbol a posteriori probabilities where (bit_n==b)
            soft_bits(n) = log((sum(prob_set_b0) + eps_val_num )/(sum(prob_set_b1) + eps_val_den ));  
            
            % hard decision on bit_n (not used)
            hard_bits(n) = sign(soft_bits(n))<0;
                
        end % end bit loop
    end

%-------------------------------------------------------------------------------------------
%% HELPER FUNCTIONS end HERE
%-------------------------------------------------------------------------------------------

end % end Functions

