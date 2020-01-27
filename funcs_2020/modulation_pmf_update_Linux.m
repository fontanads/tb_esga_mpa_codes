function [a_priori_probabilities] = modulation_pmf_update_Linux(soft_bits_MPA_input,codewords_binary_labels)
%modulation_pmf_update Update the a priori symbol probabilities using
%soft-bits from the FEC.
%   Detailed explanation goes here
 
%% read dimensions
[J,kb,Ns] = size(soft_bits_MPA_input);
M = 2^kb;

%% buffers
a_priori_probabilities = zeros(J,M,Ns);
eps = 1e-50; % to avoid log(0)

%%
for j=1:J   % for each user
   for ns=1:Ns % for each packet
       
       LLR_j = squeeze(soft_bits_MPA_input(j,:,ns)); % read the input LLRs of packet ns (kb values corresponding to the bit LLRs of the ns-th symbol)
       
       P0 = exp(LLR_j)./(1+exp(LLR_j)); % probability of each of the kb bits being 0 (vector with 1, ..., kb entries) 
       P1 = 1-P0;                       % probability of each of the kb bits being 1 (vector with 1, ..., kb entries) 
       
       P_label = zeros(1,kb); % initialize
       
       for m=1:M  % for each symbol of the codebook
            P1_idx = codewords_binary_labels(m,:);   % logic label of symbol m (vector with kb entries, being the binary label of the symbol) :: locate 1's of the label
            P0_idx = ~codewords_binary_labels(m,:);  % invert the logic label of symbol m :: locate 0's of the label
            
            P_label(P1_idx) = P1(P1_idx); % @ the position of 1's, input the probability of being 1
            P_label(P0_idx) = P0(P0_idx); % @ the position of 0's, input the probability of being 0
            
            a_priori_probabilities(j,m,ns) = sum(log(P_label+eps)); % proability of symbol = product of the probabilities of each bit of the label (calculated in LLR domain is a sum)
        end % end m
        
        % pmf normalization
        a_priori_probabilities(j,:,ns) = a_priori_probabilities(j,:,ns) - max(a_priori_probabilities(j,:,ns)); % remove maximum value (almost normalizes)
        cte_norm = log(sum(exp(a_priori_probabilities(j,:,ns))));                                              % checks sum of probabilities and move back to LLR domain
        a_priori_probabilities(j,:,ns) = a_priori_probabilities(j,:,ns) - cte_norm;                            % divide by sum of probabilities (LLR domain: subtract)
       
   end
end


end

