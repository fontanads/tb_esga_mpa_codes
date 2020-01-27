function [LLR] = LLR_saturation(LLR,A_qntzr)
%LLR_saturation Summary of this function goes here
%   Detailed explanation goes here

LLR(LLR<-A_qntzr) = -A_qntzr;                             % saturando LLR - 
LLR(LLR>+A_qntzr) = +A_qntzr;                             % saturando LLR +      


end

