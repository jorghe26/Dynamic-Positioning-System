clc
clear all;

init;

V_c = 0.5;
beta_c_init = 3*pi/4; % Going towards south-east
beta_c_slope = 0;

eta_d = [0 0 0; 0 0 0];

lqr_error;

visualizeShip;