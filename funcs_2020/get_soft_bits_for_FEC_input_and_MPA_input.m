function [soft_bits_FEC_input, soft_bits_FEC_output, soft_bits_extrinsic_MPA_new_input, soft_bits_message] = ...
        get_soft_bits_for_FEC_input_and_MPA_input(soft_bits_MPA_output,soft_bits_MPA_input, ...
                                                            intrlvrIndices,message_length,codeword_length,decoder,decoder_final,LLR_clip_value,a_FF,a_FB,last_outer_loop_flag)
%get_soft_bits_for_FEC_input Summary of this function goes here
%   Detailed explanation goes here

%% read dimensions
[J,kb,Ns] = size(soft_bits_MPA_output);
Nz = length(intrlvrIndices)-codeword_length;

%% BUFFERS
soft_bits_FEC_input  = zeros(J,codeword_length);   % initialization of the soft bits @ the input of the FEC
soft_bits_FEC_output = zeros(J,codeword_length);   % initialization of the soft bits @ the output of the FEC
soft_bits_extrinsic_MPA_new_input= zeros(J,kb,Ns); % initialization of the soft bits @ the input of the MPA (next iteration)
soft_bits_message = zeros(J,message_length);       % initialization of the soft bits of the message bits (used only @ the last outer loop)

%%
intrlvd_soft_bits_FEC_input = a_FF*(soft_bits_MPA_output - soft_bits_MPA_input); % extrinsic LLRs after MPA (still interleaved)
for j = 1:J % for each user
    intrlvd_soft_bits_j = squeeze(intrlvd_soft_bits_FEC_input(j,:,:));      % bit-interleaved codeword LLRs of user j
    intrlvd_soft_bits_j = intrlvd_soft_bits_j(:)';                          % reshape from kb x Ns to Ns*kb (== LDPC.N+Nz)
    deintrlvd_soft_bits_j = deintrlv(intrlvd_soft_bits_j,intrlvrIndices);   % deinterleave codeword LLRs of user j
    soft_bits_FEC_input(j,:) = deintrlvd_soft_bits_j(1:codeword_length);    % remove padding zeros (not relevant for the FEC) :: results is the input LLRs of user j
    
    if last_outer_loop_flag
        soft_bits_message(j,:) = step(decoder_final, soft_bits_FEC_input(j,:).').';
    else
        soft_bits_FEC_output(j,:) = step(decoder,soft_bits_FEC_input(j,:)')';                  % LDPC decoder returns output Soft Bits
        soft_bits_extrinsic_j = a_FB*(soft_bits_FEC_output(j,:) - soft_bits_FEC_input(j,:));   % extrinsic LLRs of decode: FEC Output - FEC Input
        deintrlvd_soft_bits_j = [soft_bits_extrinsic_j Inf*ones(1,Nz)];                        % padding LLRs corresponding to padded zeros
        intrlvd_soft_bits_j = intrlv(deintrlvd_soft_bits_j,intrlvrIndices);                    % re-interleave the LLRs before feedback to MPA
        soft_bits_extrinsic_MPA_new_input(j,:,:) = reshape(intrlvd_soft_bits_j,kb,Ns);         % reshape as kb x Ns for the MPA input
        
        soft_bits_extrinsic_MPA_new_input(j,:,:) = LLR_saturation(soft_bits_extrinsic_MPA_new_input(j,:,:),LLR_clip_value); % clipping the LLRs before feedback
    end
end

end

