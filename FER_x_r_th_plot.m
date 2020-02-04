
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
user_SER_BER_FER= [0 0 1]; % ou exclusivo, selecionar apenas uma posição

%%

if sum(user_SER_BER_FER)>1, error('choose only one metric'),end
error_metric_str = error_metric_strs{user_SER_BER_FER>0};


%% Load results

filename_str = sprintf('SCMA_TB_ESGA_Many_Rx_%sErrorRate.pdf',error_metric_str);

%%

r_100 = '[ZenBook-S-UX391UA]_J20_K12_M8_q3_N3_LDPC_n128_Rx_Nr4_EbN0dB_15_to_15_MinErr_50_To3_Tm1_5_Tm2_1_100r_100_[26-01-2020][11-53-05].mat';
load(r_100,'EbN0dB','current_FER','current_BER','current_SER');
y_r100 = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
 

r_90 = '[lcs-cluster02]_J20_K12_M8_q3_N3_LDPC_n128_Rx_Nr4_EbN0dB_15_to_15_MinErr_50_To3_Tm1_5_Tm2_1_100r_90_[26-01-2020][12-09-49].mat';
load(r_90,'EbN0dB','current_FER','current_BER','current_SER');
y_r90 = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;

r_80 = '[ZenBook-S-UX391UA]_J20_K12_M8_q3_N3_LDPC_n128_Rx_Nr4_EbN0dB_15_to_15_MinErr_50_To3_Tm1_5_Tm2_1_100r_80_[26-01-2020][12-21-49].mat';
load(r_80,'EbN0dB','current_FER','current_BER','current_SER');
y_r80 = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;

r_70 = '[lcs-cluster02]_J20_K12_M8_q3_N3_LDPC_n128_Rx_Nr4_EbN0dB_15_to_15_MinErr_50_To3_Tm1_5_Tm2_1_100r_70_[26-01-2020][12-20-59].mat';
load(r_70,'EbN0dB','current_FER','current_BER','current_SER');
y_r70 = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;


r_60 = '[ZenBook-S-UX391UA]_J20_K12_M8_q3_N3_LDPC_n128_Rx_Nr4_EbN0dB_15_to_15_MinErr_50_To3_Tm1_5_Tm2_1_100r_60_[26-01-2020][12-56-49].mat';
load(r_60,'EbN0dB','current_FER','current_BER','current_SER');
y_r60 = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;

r_50 = '[lcs-cluster02]_J20_K12_M8_q3_N3_LDPC_n128_Rx_Nr4_EbN0dB_15_to_15_MinErr_50_To3_Tm1_5_Tm2_1_100r_50_[26-01-2020][12-57-09].mat';
load(r_50,'EbN0dB','current_FER','current_BER','current_SER');
y_r50 = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;

r_40 = '[lcs-cluster02]_J20_K12_M8_q3_N3_LDPC_n128_Rx_Nr4_EbN0dB_15_to_15_MinErr_50_To3_Tm1_5_Tm2_1_100r_40_[26-01-2020][12-57-34].mat';
load(r_40,'EbN0dB','current_FER','current_BER','current_SER');
y_r40 = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;

r_30 = '[ZenBook-S-UX391UA]_J20_K12_M8_q3_N3_LDPC_n128_Rx_Nr4_EbN0dB_15_to_15_MinErr_50_To3_Tm1_5_Tm2_1_100r_30_[26-01-2020][17-11-12]_Temp.mat';
load(r_30,'EbN0dB','current_FER','current_BER','current_SER');
y_r30 = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;

r_20 = '[lcs-cluster02]_J20_K12_M8_q3_N3_LDPC_n128_Rx_Nr4_EbN0dB_15_to_15_MinErr_50_To3_Tm1_5_Tm2_1_100r_20_[26-01-2020][17-11-29]_Temp.mat';
load(r_20,'EbN0dB','current_FER','current_BER','current_SER');
y_r20 = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;


r_10 = '[lcs-cluster02]_J20_K12_M8_q3_N3_LDPC_n128_Rx_Nr4_EbN0dB_15_to_15_MinErr_50_To3_Tm1_5_Tm2_1_100r_10_[26-01-2020][17-11-43]_Temp.mat';
load(r_10,'EbN0dB','current_FER','current_BER','current_SER');
y_r10 = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;




%%
r = [0.1:0.1:1];
y = [y_r10,y_r20,y_r30,y_r40,y_r50,y_r60,y_r70,y_r80,y_r90 y_r100];

%%
figure(1);
clf

semilogy(r,y,'Marker','o','color',[0 0 0]/255,'LineWidth',lnwdt,'MarkerSize',mrkrsz)
 
xlabel('$r$ threshold parameter','FontSize',15,'Interpreter','latex')
ylabel(sprintf('%s Error rate',error_metric_str),'FontSize',15,'Interpreter','latex')
set(gca,'TickLabelInterpreter', 'latex','fontsize',14,'linewidth',1.2);
legend show; set(legend,'interpreter','latex','location','best','fontsize',14);
grid on

axis([0 1 1e-3 1e0])
axis([0 1 5e-8 1e0])

%%


% export_fig(sprintf('./plots/%s',filename_str),'-transparent','-native'); % '-append'









%%