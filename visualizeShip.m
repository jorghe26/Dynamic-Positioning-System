current = logsout{1}.Values.Data();

tau_b = logsout{2}.Values.Data();

eta_d = logsout{3}.Values.Data();

eta = logsout{4}.Values.Data();

nu = logsout{5}.Values.Data();


t = logsout{1}.Values.Time();

x_d = eta_d(:,1);
y_d = eta_d(:,2);
psi_d = eta_d(:,3);

x = eta(:,1);
y = eta(:,2);
psi = eta(:,3);

u = nu(:,1);
v = nu(:,2);
r = nu(:,3);

X = tau_b(:,1);
Y = tau_b(:,2);
N = tau_b(:,6);

% from north to south
current_north = current(:,1);
% from east to west
current_east = current(:,2);

% plot(eta(:,1),eta(:,2))
figure(1)
plot(t,x_d)
hold on
plot(t, eta(:,1))
legend('x','x_d')
xlabel('t [s]')
ylabel('x^n')
hold off

figure(2)
plot(t,y_d)
hold on
plot(t, eta(:,2))
legend('y','y_d')
xlabel('t [s]')
ylabel('y^n')
hold off

figure(3)
plot(t,psi_d)
hold on
plot(t, eta(:,3))
legend('\psi_d','\psi')
xlabel('t [s]')
ylabel('[rad]')
hold off

figure(4)
subplot(3,1,1)
plot(t,X,'r')
hold on
legend('X')
xlabel('t [s]')
ylabel('[N]')

subplot(3,1,2)
plot(t,Y,'b')
hold on
legend('Y')
xlabel('t [s]')
ylabel('[N]')

subplot(3,1,3)
plot(t,N,'g')
hold on
legend('N')
xlabel('t [s]')
ylabel('[Nm]')

hold off

figure(5)
plot(y,x);
hold on
legend('Horizontal position')
xlabel('East [m]')
ylabel('North [m]')
hold off

figure(6)
subplot(3,1,1)
plot(t,u,'r')
hold on
legend('$\dot{x}$', 'Interpreter','latex')
xlabel('t [s]')
ylabel('[m/s]')

subplot(3,1,2)
plot(t,v,'b')
hold on
legend('$\dot{y}$', 'Interpreter','latex')
xlabel('t [s]')
ylabel('[m/s]')

subplot(3,1,3)
plot(t,r,'g')
hold on
legend('$\dot{\psi}$','Interpreter','latex')
xlabel('t [s]')
ylabel('[rad/s]')

hold off

figure(7)
short_eta = eta(1:30:end,:);
sin_eta=sin(short_eta(:,3))./sqrt(cos(short_eta(:,3)).^2+sin(short_eta(:,3)).^2);
cos_eta=cos(short_eta(:,3))./sqrt(cos(short_eta(:,3)).^2+sin(short_eta(:,3)).^2);
quiver(short_eta(:,2),short_eta(:,1),sin(short_eta(:,3)),cos(short_eta(:,3)))
hold on 
title('Position and heading of ship')
legend('Ship','Interpreter','latex')
xlabel('East [m]')
ylabel('North [m]')
hold off

figure(8)
subplot(2,1,1)
plot(t, current_north)
hold on
legend('current from north')
xlabel('t [s]')
ylabel('[m/s]')
hold off

subplot(2,1,2)
plot(t, current_east)
hold on
legend('current from east')
xlabel('t [s]')
ylabel('[m/s]')
hold off
