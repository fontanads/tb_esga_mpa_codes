function [all_codewords, all_codewords_interleaved, all_symbols_binary, all_symbols] = encode_messages(messages,kb,Ns,Nz,LDPC,intrlvrIndices)
%UNTITLED6 Summary of this function goes here
%   Detailed explanation goes here
 
J = size(messages,1);
all_codewords = zeros(J, LDPC.N);
all_codewords_interleaved = zeros(J, LDPC.N + Nz);
all_symbols_binary = zeros(J,kb,Ns) > 0; % J x Ns x kb
all_symbols = zeros(J,Ns);
for j = 1: J
    message_j = messages(j,:);
    codeword_j = step(LDPC.encode, message_j')';
    intrlvd_codeword_j = intrlv([codeword_j zeros(1,Nz)],intrlvrIndices); % deintrlvd = deintrlv(data,intrlvrIndices)
    all_codewords(j,:) = codeword_j;
    all_codewords_interleaved(j,:) = intrlvd_codeword_j;
    all_symbols_binary(j,:,:) = reshape(intrlvd_codeword_j>0,kb,Ns); 
    all_symbols(j,:) = bi2de(squeeze(all_symbols_binary(j,:,:))','left-msb');
end

end

