function soft_bits_FEC_output = initialize_soft_bits_FEC_output(J,N,Nz,Ns,kb,zero_padding_positions)
%soft_bits_FEC_output Summary of this function goes here
%   Detailed explanation goes here

    soft_bits_FEC_output = zeros(J,kb,Ns);
    init_soft_bits_intrlvd = log(ones(J,N+Nz)); % first outer loop
    for j=1:J
        init_soft_bits_intrlvd(j,zero_padding_positions) = Inf;
        soft_bits_FEC_output(j,:,:) = reshape(init_soft_bits_intrlvd(j,:)>0,kb,Ns);
    end


end

