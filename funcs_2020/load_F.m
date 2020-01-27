function [F,F_int] = load_F(J,K,N)
%load_SCMA_F_matrix Reads the directory of designed matrices and return the
%one who fits the parameters of J, K and N.

%   Detailed explanation goes here


directory = './F_matrices/';                                                % Full path of the directory to be searched in
filesAndFolders = dir(directory);                                           % Returns all the files and folders in the directory
filesInDir = filesAndFolders(~([filesAndFolders.isdir]));                   % Returns only the files in the directory                    
stringToBeFound = sprintf('[J=%d][K=%d][N=%d]',J,K,N);                      % Specify the string you would like to be searched for
NumOfFiles = length(filesInDir);

for i = 1:NumOfFiles  
    if ~isempty(strfind(filesInDir(i).name,stringToBeFound))
         load(strcat(directory,filesInDir(i).name),'F');
         break
    elseif i==NumOfFiles
        error('\n ## ERROR: no matrix for this parameters. Please design your matrix prior to simulation. \n\n')
    end    
end

F_int = zeros(size(F));
for j = 1:J
    F_int(F(:,j)>0,j) = 1:N;
end
% F_int






end

