%copied from supply.m
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
 

  
    M = (mass*Tinv^2)*(T*Mbis*Tinv);
    D = (mass*Tinv^2)*(sqrt(g/L)*T*Dbis*Tinv);
    
    Rz =  eye(3,3);
    
    A_thr = -1/100*eye(3,3);


    A = [ zeros(3,3)         Rz     zeros(3,3)
          zeros(3,3)    -inv(M)*D      inv(M)
          zeros(3,3)    zeros(3,3)       A_thr];
      
    B = [zeros(3,3); zeros(3,3);  A_thr];
    
    C = [eye(3,3); zeros(3,3); zeros(3,3)]';
    
    n_obs = rank(obsv(A,C));
    n_ctr = rank(ctrb(A,B));
    
    %LQR
    Q1 = diag([5E8, 5E8, 10E9]); %put penalty on position and heading: eta 
    Q2 = diag([1000, 1000, 1000]); %put penalty on velocity ν
    Q3 = diag([1, 1, 1]); %put penalty on actuator dynamics τ
    Q = eye(9,9);
    Q(1:3,1:3) = Q1;
    Q(4:6,4:6) = Q2;
    Q(7:9,7:9) = Q3;
    
    R = 0.001*eye(3,3);
%     R(3,3) = 0.001;
    K = lqr(A,B,Q,R);
    K1 = K(1:3,1:6);
    F = inv(C*inv(B*K-A)*B); 