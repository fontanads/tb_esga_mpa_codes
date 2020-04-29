
close all; 
clear all;
clc;

addpath('./tempR','./results/','./funcs_2020/export_fig/')

addpath('~/Seafile/SCMA_2020_TB_ESGA_MPA/tempR','~/Seafile/SCMA_2020_TB_ESGA_MPA/results/')
% addpath('D:/Seafile/SCMA_2020_TB_ESGA_MPA/tempR','D:/Seafile/SCMA_2020_TB_ESGA_MPA/results/')

lnwdt=1.25;
mrkrsz = 7;

%% SELECT metric

error_metric_strs = {'Symbol', 'Bit', 'Frame'};
user_SER_BER_FER= [0 0 1]; % ou exclusivo, selecionar apenas uma posicao

%%

if sum(user_SER_BER_FER)>1, error('choose only one metric'),end
error_metric_str = error_metric_strs{user_SER_BER_FER>0};


%% Load results

filename_str = sprintf('SCMA_TB_ESGA_Many_Rx_%sErrorRate_r0_r1_Nr=3_Nr=4.pdf',error_metric_str);

%%

% ---------------- Result 1 ---------------- %
% result(1).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_0_[05-02-2020][10-12-11]_Temp.mat';
result(1).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_0_[13-03-2020][22-33-35]_Temp.mat';
load(result(1).file,'EbN0dB','current_FER','current_BER','current_SER');
result(1).x = EbN0dB;
result(1).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(1).label = 'TB-ESGA $r=0$ ($N_r=3$)';
result(1).marker = 'o';
result(1).linestyle = '--';
result(1).color = [0 0 255]/255;
% ---------------- Result 1 ---------------- %

 

% ---------------- Result 2 ---------------- %
% result(3).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_100_[04-02-2020][09-25-26].mat';
result(2).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_100_[13-03-2020][22-33-03]_Temp.mat';
load(result(2).file,'EbN0dB','current_FER','current_BER','current_SER');
result(2).x = EbN0dB;
result(2).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(2).label = 'TB-ESGA $r=1$ ($N_r=3$)';
result(2).marker = 'o';
result(2).linestyle = '-';
result(2).color = [0 0 255]/255;
% ---------------- Result 2 ---------------- %



% ---------------- Result 3 ---------------- %
% result(4).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_100_[28-02-2020][13-01-48]_Temp';
result(3).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_100_[13-03-2020][22-34-23]_Temp.mat';
load(result(3).file,'EbN0dB','current_FER','current_BER','current_SER');
result(3).x = EbN0dB;
result(3).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(3).label = '\hspace{6pt}AS-MPA $r=1$ ($N_r=3$)';
result(3).marker = 'p';
result(3).linestyle = '-';
result(3).color = [40 175 255]/255;
% ---------------- Result 3 ---------------- %


% ---------------- Result 1 ---------------- %
% result(1).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_0_[05-02-2020][10-12-40]_Temp.mat';
result(4).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_0_[13-03-2020][22-35-28]_Temp.mat';
load(result(4).file,'EbN0dB','current_FER','current_BER','current_SER');
result(4).x = EbN0dB;
result(4).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(4).label = 'TB-ESGA $r=0$ ($N_r=4$)';
result(4).marker = 's';
result(4).linestyle = '--';
result(4).color = [255 0 0]/255;
% ---------------- Result 1 ---------------- %



% ---------------- Result 2 ---------------- %
% result(3).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_100_[04-02-2020][09-27-39]_Temp.mat';
result(5).file =  '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_100_[13-03-2020][22-35-55]_Temp.mat';
load(result(5).file,'EbN0dB','current_FER','current_BER','current_SER');
result(5).x = EbN0dB;
result(5).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(5).label = 'TB-ESGA $r=1$ ($N_r=4$)';
result(5).marker = 's';
result(5).linestyle = '-';
result(5).color = [255 0 0]/255;
% ---------------- Result 2 ---------------- %



% ---------------- Result 3 ---------------- %
% result(4).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_100_[29-02-2020][06-52-06]';
result(6).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_100_[13-03-2020][22-34-54]_Temp.mat';
load(result(6).file,'EbN0dB','current_FER','current_BER','current_SER');
result(6).x = EbN0dB;
result(6).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(6).label = '\hspace{6pt}AS-MPA $r=1$ ($N_r=4$)';
result(6).marker = 'h';
result(6).linestyle = '-';
result(6).color = [255 0 150]/255;
% ---------------- Result 3 ---------------- %


%%
figure(1);
clf

for n=[1:6]
    semilogy(result(n).x,result(n).y,'DisplayName',result(n).label,'Marker',result(n).marker,'color',result(n).color,'LineWidth',lnwdt,'LineStyle',result(n).linestyle,'MarkerSize',mrkrsz)
    if n==1, hold on, end
end

xlabel('$E_b/N_0$ (dB)','FontSize',15,'Interpreter','latex')
ylabel(sprintf('%s Error rate',error_metric_str),'FontSize',15,'Interpreter','latex')
set(gca,'TickLabelInterpreter', 'latex','fontsize',14,'linewidth',1.2);
legend show; set(legend,'interpreter','latex','location','northeast','fontsize',12);
grid on

axis([10 18 5e-6 5e-1])
% axis([10 22 5e-8 1e-0])

%%


export_fig(sprintf('./plots/%s',filename_str),'-transparent','-native'); % '-append'









%%