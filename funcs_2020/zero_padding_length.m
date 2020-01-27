function [Nz,Nsyms] = zero_padding_length(kb,N_LDPC)
%zero_padding_length Returns the number of zeros to pad the messages. 
%   This is used because the number of symbols with kb bits must be
%   integer. However, it may be that the codeword length is not a multiple
%   of kb.

    Nsyms = N_LDPC/kb;
    
    num_of_missing_bits = rem(Nsyms,kb);
    Indicador_Nsyms_multiplo_de_kb = num_of_missing_bits~=0; % é 1 se Nsyms for multiplo de kb, senão é zero
    
    if rem(Nsyms,1) % se existe resto (não é inteiro)
        Nsyms = Nsyms + (kb - num_of_missing_bits )*( Indicador_Nsyms_multiplo_de_kb );
        Nz = Nsyms*kb-N_LDPC;
    else
        Nz = 0;
    end
 
end

