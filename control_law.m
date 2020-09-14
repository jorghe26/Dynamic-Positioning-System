%PID:
% 1. Specify the bandwidth: wb > 0
% 2. Specify the relative damping ratio:  zeta > 0
% 3. Compute the natural frequency:
% 4. Compute the P gain: 5. Compute the D gain: 6. Compute the I gain:
% ωb > 0 ζ > 0
% 1
% Kd = 2ζωnm − d
% Ki = ωn Kp 10

zeta = 0.8;
wb = 1/15;
wn = wb/(sqrt(1 - 2*zeta^2 + sqrt(4*zeta^4 - 4*zeta^2 + 2)));
mass = 6000e3;

Kp = diag([2E5,2E5,8E7]);
Ki = diag([0.9E3,0.5E3,1.25E5]);
Kd = diag([2E6,2E6,1.5E9]);
