function [intrlvrIndices,DeintrlvrIndices] = get_interleaver_indexes(N)
%get_interleaver_indexes Retorna sequências de entrelaçamento e de
% desentrelaçamento.
 
    if and(N >=40, N<=5114)
        intrlvrIndices = get_UMTS_interleaver(N);                           % interleaver padrâo UMTS (tamanho máximo de 5114)
        DeintrlvrIndices(intrlvrIndices) = 1:N;
    else
        intrlvrIndices = randperm(N);                                       % interleaver aleatório        
        DeintrlvrIndices(intrlvrIndices) = 1:N;
    end


end

