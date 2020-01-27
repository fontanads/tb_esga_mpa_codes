function [ sys ] = system_strings(  )
%system_strings Returns a struct with strings about the system running this
%code. 
%   Detailed explanation goes here

[~,PC_str] = system('hostname'); PC_str=PC_str(1:end-1); sys.PC_str =['[' PC_str ']'];
sys.release_str = sprintf('%s','[',version('-release'),']');

[~, tempstr] = system('ver'); sys.PC_version=tempstr(2:end-1);
if isunix
    % Code to run on Linux platform
    sys.OS_str = 'Linux';
elseif ispc
    % Code to run on Windows platform
    sys.OS_str = 'Windows';
else
    error('Platform not supported')
end


switch sys.release_str
    case '[2018a]'
        sys.date_str = ['[' datestr(datetime('now'),'dd-mm-yyyy][HH-MM-ss') ']'];

    otherwise
        c = clock; timestamp = sprintf('%s',num2str(c(4)),'-',num2str(c(5)),'-',num2str(round(c(6))));
        sys.date_str = ['[' date '][' timestamp ']'];
end


sys.dir_str = './results/';
sys.dir_str_temp = './tempR/';


end

