
close all; 
clear all;
clc;

addpath('./tempR','./results/','./funcs_2020/export_fig/')

lnwdt=1.25;
mrkrsz = 7;

%% SELECT metric

error_metric_strs = {'Symbol', 'Bit', 'Frame'};
user_SER_BER_FER= [0 1 0]; % ou exclusivo, selecionar apenas uma posição

%%

if sum(user_SER_BER_FER)>1, error('choose only one metric'),end
error_metric_str = error_metric_strs{user_SER_BER_FER>0};


%% Load results

filename_str = sprintf('SCMA_TB_ESGA_Many_Rx_%sErrorRate.pdf',error_metric_str);

%%

% ---------------- Result 1 ---------------- %
result(1).file = ' .mat';
load(result(1).file,'EbN0dB','current_FER','current_BER','current_SER');
result(1).x = EbN0dB;
result(1).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(1).label = '$N_r=1$';
result(1).marker = 'o';
result(1).color = [0 0 255]/255;
% ---------------- Result 1 ---------------- %


% ---------------- Result 2 ---------------- %
% result(2).file = '.mat';
% load(result(2).file,'EbN0dB','current_FER','current_BER','current_SER');
% result(2).x = EbN0dB;
% result(2).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
% result(2).label = '$N_r=2$';
% result(2).marker = 's';
% result(2).color = [255 0 0]/255;
% ---------------- Result 2 ---------------- %


% ---------------- Result 3 ---------------- %

% result(3).file = '[ZenBook-S-UX391UA]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_0_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_0_[23-01-2020][19-54-20]_Temp.mat';
% load(result(3).file,'EbN0dB','current_FER','current_BER','current_SER');
% result(3).x = EbN0dB;
% result(3).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
% result(3).label = '$N_r=3$';
% result(3).marker = 'p';
% result(3).color = [120 200 50]/255;
% ---------------- Result 3 ---------------- %


% ---------------- Result 4 ---------------- %
% result(4).file = '[ZenBook-S-UX391UA]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_0_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_0_[23-01-2020][19-54-34]_Temp.mat';
% load(result(4).file,'EbN0dB','current_FER','current_BER','current_SER');
% result(4).x = EbN0dB;
% result(4).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
% result(4).label = '$N_r=4$';
% result(4).marker = 'd';
% result(4).color = [180 120 150]/255;
% ---------------- Result 4 ---------------- %

%%
figure(1);
clf

for n=1:length(result)
    semilogy(result(n).x,result(n).y,'DisplayName',result(n).label,'Marker',result(n).marker,'color',result(n).color,'LineWidth',lnwdt,'MarkerSize',mrkrsz)
    if n==1, hold on, end
end

xlabel('$E_b/N_0$ (dB)','FontSize',15,'Interpreter','latex')
ylabel(sprintf('%s Error rate',error_metric_str),'FontSize',15,'Interpreter','latex')
set(gca,'TickLabelInterpreter', 'latex','fontsize',14,'linewidth',1.2);
legend show; set(legend,'interpreter','latex','location','best','fontsize',14);
grid on

axis([0 20 1e-3 1e0])
axis([0 20 5e-7 1e0])

%%


% export_fig(sprintf('./plots/%s',filename_str),'-transparent','-native'); % '-append'









%%