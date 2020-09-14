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

G = [1E4,0,0;
     0,1E4,0;
     0, 0 ,1E4];
 
R_lin = [cos(psid_n),-sin(psid_n),0;
         sin(psid_n),cos(psid_n),0;
         0          ,0          ,1];

gui;