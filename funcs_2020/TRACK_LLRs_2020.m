
%%
ns_track=1;
bit_id_track = 1:30; % 8
user_track=1;

%%

MPA_in(t,:) = reshape(squeeze(soft_bits_MPA_input_temp(user_track,:,:)),1,Ns*kb);
MPA_out(t,:) = reshape(squeeze(soft_bits_MPA_output(user_track,:,:)),1,Ns*kb);
FEC_in(t,:) = soft_bits_FEC_input(user_track,:);
FEC_out(t,:) = soft_bits_FEC_output(user_track,:);


%%
figure(10);
clf

    %%
    subplot(2,2,1)
    plot(1:t, MPA_in(1:t,bit_id_track),'-o')
    set(title('MPA Input'),'interpreter','latex')
    grid on;
    axis([0 10 get(gca,'Ylim')])

    subplot(2,2,2)
    plot(1:t, MPA_out(1:t,bit_id_track),'-o')
    set(title('MPA Output'),'interpreter','latex')
    grid on;
    axis([0 10 get(gca,'Ylim')])

    %%
    subplot(2,2,3)
    plot(1:t, FEC_in(1:t,bit_id_track),'-o')
    set(title('FEC Input'),'interpreter','latex')
    grid on;
    axis([0 10 get(gca,'Ylim')])

    subplot(2,2,4)
    plot(1:t, FEC_out(1:t,bit_id_track),'-o')
    set(title('FEC Output'),'interpreter','latex')
    grid on;
    axis([0 10 get(gca,'Ylim')])

    pause(.5)