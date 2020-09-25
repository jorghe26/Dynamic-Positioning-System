close all;
clc
clear;

init;

V_c = 5;
beta_c_init = 0; % Going towards south-east
beta_c_slope = 0;

eta_d = [0 0 0; 50 0 0; 50 -50 0; 50 -50 -pi/4; 0 -50 -pi/4; 0 0 0];

lqr_error;
visualizeShip;