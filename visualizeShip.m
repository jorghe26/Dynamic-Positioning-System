
eta = logsout{1}.Values.Data();

nu_b = logsout{2}.Values.Data();


figure(5)
plot(eta(:,1),eta(:,2))
%eta_n = % We can use MSS function: eta_n = Rzyx(phi, theta, psi)*eta

t = logsout{1}.Values.Time();

N = length(t);
x_d = zeros(1,N);
x_d(1,:) = xd_n; 
y_d = zeros(1,N);
y_d(1,:) = yd_n;
psi_d = zeros(1,N);
psi_d(1,:) = psid_n;

% plot(eta(:,1),eta(:,2))
figure(1)
plot(t,x_d)
hold on
plot(t, eta(:,1))
legend('x','x_d')
xlabel('t [s]')
ylabel('x^n')
figure(2)
plot(t,y_d)
hold on
plot(t, eta(:,2))
legend('y','y_d')
xlabel('t [s]')
ylabel('y^n')

figure(3)
plot(t,psi_d)
hold on
plot(t, eta(:,3))
legend('psi','psi_d')
xlabel('t [s]')
ylabel('y^n')

hold off

