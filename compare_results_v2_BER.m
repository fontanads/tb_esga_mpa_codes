
% close all; 
clear all;
clc;

addpath('./tempR','./results/','./funcs_2020/export_fig/')

% addpath('~/Seafile/SCMA_2020_TB_ESGA_MPA/tempR','~/Seafile/SCMA_2020_TB_ESGA_MPA/results/')
% addpath('D:/Seafile/SCMA_2020_TB_ESGA_MPA/tempR','D:/Seafile/SCMA_2020_TB_ESGA_MPA/results/')

lnwdt=1.25;
mrkrsz = 7;

%% SELECT metric

error_metric_strs = {'Symbol', 'Bit', 'Frame'};
user_SER_BER_FER= [0 1 0]; % ou exclusivo, selecionar apenas uma posicao

%%

if sum(user_SER_BER_FER)>1, error('choose only one metric'),end
error_metric_str = error_metric_strs{user_SER_BER_FER>0};


%% Load results

filename_str = sprintf('SCMA_TB_ESGA_Many_Rx_%sErrorRate_r0_r1.png',error_metric_str);

%%



% ---------------- Result 1 ---------------- %
result(1).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr1_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_0_[05-02-2020][10-08-05]_Temp.mat';
load(result(1).file,'EbN0dB','current_FER','current_BER','current_SER');
result(1).x = EbN0dB;
result(1).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(1).label = '$N_r=1$, $r=0$';
result(1).marker = 'o';
result(1).linestyle = '--';
result(1).color = [0 0 255]/255;
% ---------------- Result 1 ---------------- %


% ---------------- Result 2 ---------------- %
% result(2).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr2_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_0_[05-02-2020][10-11-47]_Temp.mat';
result(2).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr2_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_0_[13-03-2020][22-30-51]_Temp.mat';
load(result(2).file,'EbN0dB','current_FER','current_BER','current_SER');
result(2).x = EbN0dB;
result(2).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(2).label = '$N_r=2$, $r=0$';
result(2).marker = 's';
result(2).linestyle = '--';
result(2).color = [255 0 0]/255;
% ---------------- Result 2 ---------------- %


% ---------------- Result 3 ---------------- %

% result(3).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_0_[05-02-2020][10-12-11]_Temp.mat';
result(3).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_0_[13-03-2020][22-33-35]_Temp.mat';
load(result(3).file,'EbN0dB','current_FER','current_BER','current_SER');
result(3).x = EbN0dB;
result(3).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(3).label = '$N_r=3$, $r=0$';
result(3).marker = 'p';
result(3).linestyle = '--';
result(3).color = [120 165 50]/255;
% ---------------- Result 3 ---------------- %


% ---------------- Result 4 ---------------- %
% result(4).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_0_[05-02-2020][10-12-40]_Temp.mat';
result(4).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_0_[13-03-2020][22-35-28]_Temp.mat';
load(result(4).file,'EbN0dB','current_FER','current_BER','current_SER');
result(4).x = EbN0dB;
result(4).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(4).label = '$N_r=4$, $r=0$';
result(4).marker = 'd';
result(4).linestyle = '--';
result(4).color = [180 120 150]/255;
% ---------------- Result 4 ---------------- %


% ---------------- Result 1 ---------------- %
result(5).file = '[Inspiron-5548]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr1_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_100_[04-02-2020][09-13-05]_Temp.mat';
load(result(5).file,'EbN0dB','current_FER','current_BER','current_SER');
result(5).x = EbN0dB;
result(5).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(5).label = '$N_r=1$, $r=1$';
result(5).marker = 'o';
result(5).linestyle = '-';
result(5).color = [0 0 255]/255;
% ---------------- Result 1 ---------------- %


% ---------------- Result 2 ---------------- %
% result(6).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr2_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_100_[04-02-2020][09-23-52]_Temp.mat';
result(6).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr2_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_100_[13-03-2020][22-31-24]_Temp.mat';
load(result(6).file,'EbN0dB','current_FER','current_BER','current_SER');
result(6).x = EbN0dB;
result(6).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(6).label = '$N_r=2$, $r=1$';
result(6).marker = 's';
result(6).linestyle = '-';
result(6).color = [255 0 0]/255;
% ---------------- Result 2 ---------------- %


% ---------------- Result 3 ---------------- %

% result(7).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_100_[04-02-2020][09-25-26]_Temp.mat';
result(7).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr3_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_100_[13-03-2020][22-33-03]_Temp.mat';
load(result(7).file,'EbN0dB','current_FER','current_BER','current_SER');
result(7).x = EbN0dB;
result(7).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(7).label = '$N_r=3$, $r=1$';
result(7).marker = 'p';
result(7).linestyle = '-';
result(7).color = [120 165 50]/255;
% ---------------- Result 3 ---------------- %


% ---------------- Result 4 ---------------- %
% result(8).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_10_to_22_MinErr_50_To3_Tm1_5_Tm2_1_100r_100_[04-02-2020][09-27-39]_Temp.mat';
result(8).file = '[XPS-8930]_J6_K4_M4_q4_N2_LDPC_n128_Rx_Nr4_EbN0dB_10_to_22_MinErr_100_To3_Tm1_5_Tm2_1_100r_100_[13-03-2020][22-35-55]_Temp.mat';
load(result(8).file,'EbN0dB','current_FER','current_BER','current_SER');
result(8).x = EbN0dB;
result(8).y = user_SER_BER_FER(1)*current_SER + user_SER_BER_FER(2)*current_BER + user_SER_BER_FER(3)*current_FER;
result(8).label = '$N_r=4$, $r=1$';
result(8).marker = 'd';
result(8).linestyle = '-';
result(8).color = [180 120 150]/255;
% ---------------- Result 4 ---------------- %

%%
figure(1);
clf

for n=1:length(result)
    semilogy(result(n).x,result(n).y,'DisplayName',result(n).label,'Marker',result(n).marker,'color',result(n).color,'LineWidth',lnwdt,'LineStyle',result(n).linestyle,'MarkerSize',mrkrsz)
    if n==1, hold on, end
end

xlabel('$E_b/N_0$ (dB)','FontSize',15,'Interpreter','latex')
ylabel(sprintf('%s Error rate',error_metric_str),'FontSize',15,'Interpreter','latex')
set(gca,'TickLabelInterpreter', 'latex','fontsize',14,'linewidth',1.2);
legend show; set(legend,'interpreter','latex','location','best','fontsize',14);
grid on

% axis([0 22 1e-5 1e0])
axis([10 22 1e-7 3e-2])

%%

hPlots = flip(findall(gcf,'Type','Line')); % flipped, because the lines our found in reverse order of appearance.
legend_str = {'$N_r=1$','$N_r=2$','$N_r=3$','$N_r=4$'};
legend(hPlots(end-3:end), legend_str(:), 'Fontsize',14,'Location', 'northeast', 'Orientation','Vertical'); 
% location, southoutside


%% 
% drawArrow = @(x,y) quiver( x(1),y(1),x(2)-x(1),y(2)-y(1),'-<b','LineWidth',2,...
% 'ShowArrowHead','on','MaxHeadSize',105,'autoscale','off');    
% 
arr_len = [.12 .12 .26 .37]; 
ang_arr = [90 90 90 90];
origin_x = [0.825 .585  .32  0.215];
origin_y = [0.49  .3775 .38 .34];
back_color =[0,100, 250; 
             250,0,100;
             100,250,0;
             255,150,180];

offset_y = [0 0 -arr_len(3)-0.06 -arr_len(4)-.06];
offset_x = [0 0 -0.015 -0.03];
for n=1:4
    X1 = [origin_x(n) origin_x(n)+arr_len(n)*cos(ang_arr(n)*pi/180)];
    Y1 = [origin_y(n) origin_y(n)+arr_len(n)*sin(ang_arr(n)*pi/180)];

    dim = [X1(2)-.05+offset_x(n) Y1(2)+0.001+offset_y(n) 11e-2 5e-2];  % [x y w h]
    
    annotation('arrow',X1,Y1,'Color',result(n).color,'LineWidth',2);
    str = '$r:0\to 1$';
    annotation('textbox',dim,'String',str, 'FontSize',10, ...
    'BackgroundColor',back_color(n,:)/255,'FaceAlpha',.2, ...
    'FitBoxToText','off','Interpreter','latex','LineStyle','none','Color',result(n).color);
end
%%

export_fig(sprintf('./plots/%s',filename_str),'-transparent','-native','-r600'); % '-append'


%%