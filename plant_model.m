% Supply ship model: Length L = 76 m
% copied from supply.m

% Normalization variables
L    =  76.2;           % length of ship (m)
g    =  9.8;            % acceleration of gravity (m/s^2)
mass = 6000e3;          % mass (kg)

T    = diag([1 1 1/L]);
Tinv = diag([1 1 L]);

% Model matricses
Mbis = [1.1274         0          0
             0    1.8902    -0.0744
             0   -0.0744     0.1278];

Dbis = [0.0358        0        0
             0        0.1183  -0.0124
             0       -0.0041   0.0308];
 
 
 Rz =  R_z_psi(psi_n);

  
 M = (mass*Tinv^2)*(T*Mbis*Tinv);
 D = (mass*Tinv^2)*(sqrt(g/L)*T*Dbis*Tinv);
 
 A = [ zeros(3,3)         Rz
       zeros(3,3) -inv(M)*D ];
 
 B = [zeros(3,3); inv(M) ];