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
    
    I =  eye(3,3);
    
    A_thr = -1/100*eye(3,3);


    A = [ zeros(3,3)         I     zeros(3,3)
          zeros(3,3)    -inv(M)*D      inv(M)
          zeros(3,3)    zeros(3,3)       A_thr];
      
    B = [zeros(3,3); zeros(3,3);  A_thr];
    
    C = [I; zeros(3,3); zeros(3,3)]';
    
    Aa = [zeros(3,3)        C
          zeros(9,3)        A ];
    Ba = [zeros(3,3); B];
    
    n_obs = rank(obsv(A,C));
    n_ctr = rank(ctrb(Aa,Ba));
    
    %LQR
    Q1 = diag([8E10, 8E10, 15E13]); %put penalty on position and heading: eta 
    Q2 = diag([1000, 1000, 1000]); %put penalty on velocity ν
    Q3 = diag([1, 1, 1]); %put penalty on actuator dynamics τ
    Q = eye(9,9);
    Q(1:3,1:3) = Q1;
    Q(4:6,4:6) = Q2;
    Q(7:9,7:9) = Q3;
    Qi = diag([8E10, 8E10, 15E13]);
    Qa = [Qi            zeros(3,9)
          zeros(9,3)         Q    ];
    
    R = eye(3,3);
    K = lqr(Aa,Ba,Qa,R);
    Ki = K(1:3,1:3);
    Kp = K(1:3,4:6);
    Kd = K(1:3,10:12); 
    sim('part1',2000);