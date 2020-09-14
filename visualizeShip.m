%Assumed that measurements are in BODY, need to check this
eta_n = logsout{2}.Values.Data();

nu_b = logsout{3}.Values.Data();

tau_b = logsout{1}.Values.Data();

% eta_n = % We can use MSS function: eta_n = Rzyx(phi, theta, psi)*eta_b

t = logsout{1}.Values.Time();

N = length(t);
% Assume reference in NED and we want controller to have it in BODY
x_d = zeros(1,N);
x_d(1,:) = xd_n; 
y_d = zeros(1,N);
y_d(1,:) = yd_n;
psi_d = zeros(1,N);
psi_d(1,:) = psid_n;

x_n = eta_n(:,1);
y_n = eta_n(:,2);
psi_n = eta_n(:,3);

u_b = nu_b(:,1);
v_b = nu_b(:,2);
r_b = nu_b(:,3);

X = tau_b(:,1);
Y = tau_b(:,2);
N = tau_b(:,6);

% plot(eta(:,1),eta(:,2))
figure(1)
plot(t,x_d)
hold on
plot(t, x_n)
legend('x_d','x')
xlabel('t [s]')
ylabel('x^n')
hold off

figure(2)
plot(t,y_d)
hold on
plot(t, y_n)
legend('y_d','y')
xlabel('t [s]')
ylabel('y^n')
hold off

figure(3)
plot(t,psi_d)
hold on
plot(t, psi_n)
legend('psi_d','psi')
xlabel('t [s]')
ylabel('psi^n')
hold off

figure(4)
plot(eta_n(:,2),eta_n(:,1))
%legend('y_n','x_n')
xlabel('east')
ylabel('north')
hold off

figure(5)
subplot(3,1,1)
plot(t,X)
hold on
legend('X')
xlabel('t [s]')
ylabel('[N]')

subplot(3,1,2)
plot(t,Y)
hold on
legend('Y')
xlabel('t [s]')
ylabel('[N]')

subplot(3,1,3)
plot(t,N)
hold on
legend('N')
xlabel('t [s]')
ylabel('[Nm]')

hold off
