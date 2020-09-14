%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% init()                                                                  %
%                                                                         %              
% Set initial parameters for part1.slx and part2.slx                      %
%                                                                         %
% Created:      2018.07.12	Jon Bj�rn�                                    %
%                                                                         %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear all;

load('supply.mat');
load('supplyABC.mat');
load('thrusters_sup.mat')
    
% Initial position x, y, z, phi, theta, psi
eta0 = [0,0,0,0,0,0]';
% Initial velocity u, v, w, p, q, r
nu0 = [0,0,0,0,0,0]';

% Velocity multidude 
V_c = 0.5;
% Slope for phi change (Should include runtime instead of 1000)
% beta_c_init = 0 when current is initially moving against north
% beta_c_slope is positive right when looking at north, meaning 
% N -> E -> S -> W
beta_c_slope = 0;
beta_c_init = 0;

% Desired position x,y, psi in NED
xd_n = 100;
yd_n = -200;
psid_n = 0;
eta_d = [50 30 0; 50 -50 0; 50 -50 pi/4; 0 -50 pi/4; 0 0 0];

Kp = diag([2E5,2E5,8E7]);
Ki = diag([0.09E3,0.5E3,1.25E5]);
Kd = diag([2E6,2E6,1.5E9]);


gui;