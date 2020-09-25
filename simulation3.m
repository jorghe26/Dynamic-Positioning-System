close all;
clc
clear;

init;

V_c = 0;
beta_c_init = 0; % Going towards south-east
beta_c_slope = 0;

eta_d = [0 0 0; 10 10 3*pi/2];

lqr_error;
visualizeShip;