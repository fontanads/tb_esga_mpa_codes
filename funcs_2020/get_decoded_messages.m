function [decoded_messages] = get_decoded_messages(decoder,soft_bits_input,mesage_length)
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here

    [J,~] = size(soft_bits_input);
    
    decoded_messages = zeros(J,mesage_length);
    
    for j=1:J
        decoded_messages(j,:) = step(decoder,soft_bits_input(j,:).').';
    end

end

