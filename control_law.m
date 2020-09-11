% PID:
kp = 5000;
kd = 200;
ki = 1;
n = 3;
Kp = eye(n)*kp;
Kp(3,3) = 0;
Kd = eye(n)*kd;
Ki = eye(n)*ki;
