%Assumed that measurements are in BODY, need to check this
eta_n = logsout{1}.Values.Data();

nu_b = logsout{2}.Values.Data();

% eta_n = % We can use MSS function: eta_n = Rzyx(phi, theta, psi)*eta_b

t = logsout{1}.Values.Time();

N = length(t);
% Assume reference in NED and we want controller to have it in BODY
x_d = zeros(1,N);
x_d(1,:) = xd_n; 
y_d = zeros(1,N);
y_d(1,:) = yd_n;
psi_d = zeros(1,N);

% plot(eta(:,1),eta(:,2))
figure(1)
plot(t,x_d)
hold on
plot(t, eta_n(:,1))
legend('x_d','x')
xlabel('t [s]')
ylabel('x^n')

figure(2)
plot(t,y_d)
hold on
plot(t, eta_n(:,2))
legend('y_d','y')
xlabel('t [s]')
ylabel('y^n')

figure(3)
plot(t,psi_d)
hold on
plot(t, eta_n(:,3))
legend('psi_d','psi')
xlabel('t [s]')
ylabel('psi^n')

hold off

