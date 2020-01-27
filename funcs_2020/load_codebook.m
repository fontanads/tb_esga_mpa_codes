function [ C, Codebook_ID, C_perms, Aq ]  = load_codebook( M, q, N, codebook_type)
%load_codebook Reads the directory of designed codeboks and returns the
% one who fits the parameters of M, q and N. A string for a specific
% codebook type can be input as an optional parameter.

    directory = './codebooks/';                                                 % Full path of the directory to be searched in
                       

    % Specify the string you would like to be searched for
    switch nargin
        case 4
            stringToBeFound = strcat(codebook_type,sprintf('[M=%d][N=%d][q=%d]',M,N,q)); % specific type of codebook
        case 3
            stringToBeFound = sprintf('[M=%d][N=%d][q=%d]',M,N,q);          % First occurence of codebook with these parameters
        otherwise
            error('Not Enough Input Arguments');
    end
    
    [C, Codebook_ID] = find_codebook_in_dir(stringToBeFound);
    
    

    %% Energy Normalization
    C = normalize_codebook_average_energy(C);
    
    trace(C'*C)
 
    %% Get Permutations
    [C_perms, Aq] = get_permutations(C);
    
    %% HELPER FUNCTIONS 
    
    %% finding file in directory
    function [C, C_ID] = find_codebook_in_dir(stringToBeFound)
        
        filesAndFolders = dir(directory);                                           % Returns all the files and folders in the directory
        filesInDir = filesAndFolders(~([filesAndFolders.isdir]));                   % Returns only the files in the directory 
        NumOfFiles = length(filesInDir);
        for i = 1:NumOfFiles  
            if ~isempty(strfind(filesInDir(i).name,stringToBeFound))
                 load(strcat(directory,filesInDir(i).name),'Codebook');
                 C = Codebook;
                 C_ID = filesInDir(i).name; % name of loaded codebook
                break
            elseif i==NumOfFiles
                error('\n ## ERROR: no Codebook for this parameters. Please design your Codebook prior to simulation. \n ## Searched codebook: %s \n\n',stringToBeFound)
            end    
        end
        
    end
    
    
    %% Normalizing Codebook's Energy
    
    function [ Codebook_normalized ] = normalize_codebook_average_energy( Codebook )
        %normalize_codebook_average_energy Method to Normalize the Energy
        %of a given codebook.
        %   Note that non-uniform distributions of the alphabet may result
        %   in different power allocation over the N complex-dimensions and
        %   between the M codewords. However, the average over the M 
        %   codewords will always be 1.

        M_len=size(Codebook,2);
        %--------------------------------------------------------------------------
        % Remove dither
        %--------------------------------------------------------------------------
        Cmean = zeros(size(Codebook,1),1);
        for m=1:M_len
            Cmean = Cmean + (1/M_len)*Codebook(:,m);
        end
        Codebook = Codebook-Cmean;
        %--------------------------------------------------------------------------

        %--------------------------------------------------------------------------
        % % Normalizing average codebook energy
        Ec=trace(Codebook'*Codebook)/M_len;   
        Codebook_normalized=Codebook/sqrt(Ec);
        %--------------------------------------------------------------------------

        %--------------------------------------------------------------------------
        % Normalizing codebook by max norm (in case there is unbalanced norm
        % between codewords

        % Problem: projections of j over k will change depending o the codeword
        % (MPA needs to rescale for each codeword during the algorithm)

        % Max_norm = 0;
        % for m=1:M_len
        %     xm = Codebook_normalized(:,m);
        %     xm_norm = norm(xm);
        %     
        %     Codebook_normalized(:,m) = Codebook_normalized(:,m)/xm_norm;
        %     
        %     
        %     
        % %     if xm_norm > Max_norm
        % %         Max_norm = xm_norm;
        % %     end
        %     
        % end

        % Codebook_normalized = Codebook_normalized/Max_norm; % this is used to avoid saving scaling factors for each column of the codebook in the q-MPA 
        %--------------------------------------------------------------------------


    end

    %% Get Codebook Permutations of Alphabet
    function [C_perms, Aq] = get_permutations(C)
         %get_permutations assumes that the same alphabet is used for all the
         %  dimensions and returns the permutations of each dimension.
         
        C_round = round(C,5); % to avoid numerical issues
        
        [Aq,~,C_perm_vec] = unique(C_round);  % extracts unique alphabet Aq and the permutation vector (entries 1, ..., q)
        
        
        C_perms = reshape(C_perm_vec,size(C_round));
    end

end

