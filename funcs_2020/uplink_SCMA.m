function [y, X, SCMA_Symbols] = uplink_SCMA(J,K,N,Ns,Nr,F,C,all_symbols,H)
%uplink_SCMA Maps integers to N-dim symbols of M-ary Codebook C.
%   all_symbols: J x Ns matrix of integers between 0, ..., M-1
%   F: K x J binary matrix (type double)
%   H: K x J x Nr  matrix of fading coefficients

SCMA_Symbols = zeros(J,N,Ns)+1i*zeros(J,N,Ns); % cj for each packet ns=1,...,Ns
X = zeros(K,J,Ns) +1i*zeros(K,J,Ns);            % sparse version of SCMA_Symbols K x J x Ns
y = zeros(K,Nr,Ns)+1i*zeros(K,Nr,Ns);           % received signal K  x Nr x Ns

for ns=1:Ns % for each packet
    for j = 1:J % for each user
        m_id = all_symbols(j,ns) + 1;                   % index transformation 0, ..., M-1   plus one
        ns_th_symbol_user_j = C(:,m_id);                % draw symbol from codebook for user j
        SCMA_Symbols(j,:,ns) = ns_th_symbol_user_j;     % assing N-dim symbol to user j in packet ns
        
        % Linear Spreading 
        Tj = diag( F(:,j) ); 
        Tj(:,~any(Tj,1))=[];                            % spreading matrix
        X(:,j,ns) = Tj*ns_th_symbol_user_j;             % assign K-dim sparse symbol to user j in packet ns
        
        % Transmission over fading channel
        for nr=1:Nr   % for each Rx antenna
            hj = H(:,j,nr);                           % fading channel vector of user j @ Rx antena nr (K rows, subcarriers)
            y(:,nr,ns) = y(:,nr,ns) + X(:,j,ns).*hj;  % received signal (superpose with previous)
        end
            
    end
end


end

