function  zero_padding_positions = get_zero_padding_positions(intrlvrIndices,N)
%get_zero_padding_positions Summary of this function goes here
%   Detailed explanation goes here

    [~ , I] = sort(intrlvrIndices); 
    zero_padding_positions = intrlvrIndices(I(N+1:end));


end

