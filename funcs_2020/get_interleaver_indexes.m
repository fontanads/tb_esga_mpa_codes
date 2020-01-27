function [intrlvrIndices,DeintrlvrIndices] = get_interleaver_indexes(N)
%get_interleaver_indexes Retorna sequ�ncias de entrela�amento e de
% desentrela�amento.
 
    if and(N >=40, N<=5114)
        intrlvrIndices = get_UMTS_interleaver(N);                           % interleaver padr�o UMTS (tamanho m�ximo de 5114)
        DeintrlvrIndices(intrlvrIndices) = 1:N;
    else
        intrlvrIndices = randperm(N);                                       % interleaver aleat�rio        
        DeintrlvrIndices(intrlvrIndices) = 1:N;
    end


end

