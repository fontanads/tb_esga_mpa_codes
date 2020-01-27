function [ldpc] = CCSDS_LDPC_params(N,Tf)
%CCSDS_LDPC_params returns the parameters of the LDPC codes :: CCSDS Uplink (short block-length) Rate 1/2
%   
%   Codes taken from 'CCSDS Uplink (Short): SHORT BLOCK LENGTH LDPC
%   CODES FOR TC SYNCHRONIZATION AND CHANNEL CODING", April 2015: 
%   CCSDS 231.1-O-1'. 
%   

    switch N
        case 128
            sparse_H = load('./H_matrices/ccsds128.mat','H');  
        case 256
            sparse_H = load('./H_matrices/ccsds256.mat','H'); 
        case 512
            sparse_H = load('./H_matrices/ccsds512.mat','H'); 
        otherwise
            error('\n\n Unknown LDPC code. \n');
    end

    % matriz H (full)
    ldpc.H = full(sparse_H.H)>0;
    
    % message length
    ldpc.K = size(ldpc.H,2)-size(ldpc.H,1);
    
    % codeword length
    ldpc.N = size(ldpc.H,2);
    
    % reading parity check matrix degrees
    H_sum_1 = sum(ldpc.H,1); ldpc.dv_mean = mean(H_sum_1); ldpc.dv_min = min(H_sum_1); ldpc.dv_max = max(H_sum_1);
    H_sum_2 = sum(ldpc.H,2); ldpc.dc_mean = mean(H_sum_2); ldpc.dc_min = min(H_sum_2); ldpc.dc_max = max(H_sum_2); 
    
    
    % creates encoder and decoder objects using MATLAB package comm
    ldpc.encode = comm.LDPCEncoder('ParityCheckMatrix',sparse(ldpc.H));
    ldpc.decode =         comm.LDPCDecoder('ParityCheckMatrix',sparse(ldpc.H),'MaximumIterationCount',Tf, 'DecisionMethod','Soft decision','OutputValue','Whole codeword',  'IterationTerminationCondition','Maximum iteration count');
    ldpc.output_message = comm.LDPCDecoder('ParityCheckMatrix',sparse(ldpc.H),'MaximumIterationCount',Tf, 'DecisionMethod','Soft decision','OutputValue','Information part','IterationTerminationCondition','Maximum iteration count');

    % ID forfilenames
    ldpc.ID = '[CCSDS_LDPC]'; %  CCSDS Uplink (Short):


end

