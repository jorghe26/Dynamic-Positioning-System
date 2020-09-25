close all;
clc
clear;

init;

V_c = 0.5;
beta_c_init = pi; % Going towards south-east
beta_c_slope = (3*pi/2) /2000;

eta_d = [0 0 0; 0 0 0];

lqr_error;
visualizeShip;