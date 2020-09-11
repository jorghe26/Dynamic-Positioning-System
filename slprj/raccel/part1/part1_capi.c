#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "part1_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "part1.h"
#include "part1_capi.h"
#include "part1_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"part1/Current (North - East)/Add" ) , TARGET_STRING ( "Udot" ) , 0 , 0 , 0 ,
0 , 0 } , { 1 , 0 , TARGET_STRING ( "part1/Current (North - East)/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"part1/DP Controller (Hjemmesnekk)/Gain matrix" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"part1/DP Controller (Hjemmesnekk)/Gain matrix1" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"part1/DP Controller (Hjemmesnekk)/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 1 } , { 5 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance" ) , TARGET_STRING (
"" ) , 1 , 0 , 0 , 0 , 2 } , { 7 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance" ) , TARGET_STRING (
"" ) , 2 , 0 , 0 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"part1/Supply Ship/Integrator1 " ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1
} , { 9 , 0 , TARGET_STRING ( "part1/Supply Ship/Integrator2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"part1/Supply Ship/Bv*nu_r" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } ,
{ 11 , 0 , TARGET_STRING ( "part1/Supply Ship/G*eta" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"part1/Supply Ship/Minv*tau" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } ,
{ 13 , 0 , TARGET_STRING ( "part1/Supply Ship/Sum" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 1 } , { 14 , 0 , TARGET_STRING ( "part1/Supply Ship/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"part1/Supply Ship/Sum2" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , {
16 , 0 , TARGET_STRING ( "part1/Supply Ship/Sum3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 1 } , { 17 , 0 , TARGET_STRING ( "part1/Supply Ship/Sum5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"part1/Supply Ship/Sum6" ) , TARGET_STRING ( "nu_r" ) , 0 , 0 , 2 , 0 , 1 } ,
{ 19 , 0 , TARGET_STRING (
"part1/Current (North - East)/North-East current/zero" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 20 , 0 , TARGET_STRING (
"part1/Current (North - East)/North-East current/Product" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"part1/Current (North - East)/North-East current/Product1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"part1/Current (North - East)/beta_c/Step" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 2 } , { 23 , 0 , TARGET_STRING (
"part1/Supply Ship/6 DOF transformation/Product" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"part1/Supply Ship/6 DOF transformation/Product1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 1 } , { 25 , 3 , TARGET_STRING (
 "part1/Supply Ship/Cross-flow drag and surge resistance/Cross-flow drag trapezoidal integration"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 26 , 3 , TARGET_STRING (
 "part1/Supply Ship/Cross-flow drag and surge resistance/Cross-flow drag trapezoidal integration"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 4 } , { 27 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/Abs1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 28 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/Gain3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 29 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/Product5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 30 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/Product7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 31 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/Product8" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 32 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/dx" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 3 } , { 33 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/dx1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 34 , 4 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/dx2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 35 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(1,1)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 36 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(1,3)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 37 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(1,5)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 38 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,2)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 39 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,4)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 40 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,6)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,1)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 42 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,3)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,5)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,2)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,4)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,6)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 47 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,1)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,3)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,5)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 50 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,2)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 51 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,4)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 52 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,6)" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 53 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Sum" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 1 } , { 54 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Sum1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 55 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Sum2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 56 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Sum3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 57 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Sum4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 58 , 0 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Sum5" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 59 , 3 , TARGET_STRING (
 "part1/Supply Ship/Cross-flow drag and surge resistance/Cross-flow drag trapezoidal integration/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 60 , 3 , TARGET_STRING (
 "part1/Supply Ship/Cross-flow drag and surge resistance/Cross-flow drag trapezoidal integration/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 61 , TARGET_STRING ( "part1/Supply Ship" ) ,
TARGET_STRING ( "rho" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING (
"part1/Supply Ship" ) , TARGET_STRING ( "Axc" ) , 0 , 0 , 0 } , { 63 ,
TARGET_STRING ( "part1/Supply Ship" ) , TARGET_STRING ( "Ayc" ) , 0 , 0 , 0 }
, { 64 , TARGET_STRING ( "part1/Supply Ship" ) , TARGET_STRING ( "CX" ) , 0 ,
0 , 0 } , { 65 , TARGET_STRING ( "part1/Supply Ship" ) , TARGET_STRING (
"CY_2D" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING ( "part1/Supply Ship" ) ,
TARGET_STRING ( "Bv" ) , 0 , 3 , 0 } , { 67 , TARGET_STRING (
"part1/Current (North - East)/Band-Limited White Noise1" ) , TARGET_STRING (
"seed" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING (
"part1/Current (North - East)/beta_c" ) , TARGET_STRING ( "start" ) , 0 , 0 ,
0 } , { 69 , TARGET_STRING ( "part1/Current (North - East)/mu" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING (
"part1/Current (North - East)/Discrete-Time Integrator" ) , TARGET_STRING (
"gainval" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING (
"part1/Current (North - East)/Discrete-Time Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance" ) , TARGET_STRING (
"N" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance" ) , TARGET_STRING (
"Lpp" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"part1/Supply Ship/Invers inertia matrix" ) , TARGET_STRING ( "Value" ) , 0 ,
3 , 0 } , { 75 , TARGET_STRING ( "part1/Supply Ship/Spring stiffness" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 76 , TARGET_STRING (
"part1/Supply Ship/zero" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 77 ,
TARGET_STRING (
"part1/Current (North - East)/Band-Limited White Noise1/Output" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
"part1/Current (North - East)/Band-Limited White Noise1/White Noise" ) ,
TARGET_STRING ( "Mean" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
"part1/Current (North - East)/Band-Limited White Noise1/White Noise" ) ,
TARGET_STRING ( "StdDev" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
"part1/Current (North - East)/North-East current/zero" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
"part1/Current (North - East)/North-East current/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
"part1/Current (North - East)/beta_c/Step" ) , TARGET_STRING ( "Before" ) , 0
, 0 , 0 } , { 83 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
"part1/Supply Ship/Cross-flow drag and surge resistance/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(1,1)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 89 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(1,1)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 90 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(1,1)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 91 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(1,1)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(1,3)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(1,5)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,2)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 95 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,2)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 96 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,2)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 97 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,2)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,4)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 99 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,4)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 100 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,4)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 101 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,4)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,6)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 103 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,6)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 104 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,6)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 105 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(2,6)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,1)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 107 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,3)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 108 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,3)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 109 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,3)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 110 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,3)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 111 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,5)" ) , TARGET_STRING ( "A" ) ,
0 , 6 , 0 } , { 112 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,5)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 113 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,5)" ) , TARGET_STRING ( "C" ) ,
0 , 1 , 0 } , { 114 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(3,5)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,2)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 116 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,2)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 117 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,2)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 118 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,2)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 119 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,4)" ) , TARGET_STRING ( "A" ) ,
0 , 6 , 0 } , { 120 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,4)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 121 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,4)" ) , TARGET_STRING ( "C" ) ,
0 , 1 , 0 } , { 122 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,4)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 123 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,6)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 124 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,6)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 125 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,6)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 126 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(4,6)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,1)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,3)" ) , TARGET_STRING ( "A" ) ,
0 , 6 , 0 } , { 129 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,3)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 130 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,3)" ) , TARGET_STRING ( "C" ) ,
0 , 1 , 0 } , { 131 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,3)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 132 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,5)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 133 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,5)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 134 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,5)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 135 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(5,5)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 136 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,2)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 137 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,2)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 138 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,2)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 139 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,2)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 140 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,4)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 141 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,4)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 142 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,4)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 143 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,4)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 144 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,6)" ) , TARGET_STRING ( "A" ) ,
0 , 4 , 0 } , { 145 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,6)" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 0 } , { 146 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,6)" ) , TARGET_STRING ( "C" ) ,
0 , 5 , 0 } , { 147 , TARGET_STRING (
"part1/Supply Ship/Fluid memory effetcs/Dp(6,6)" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 148 , TARGET_STRING (
 "part1/Supply Ship/6 DOF transformation/Euler angles to attitude transformation matrix/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 149 , TARGET_STRING (
 "part1/Supply Ship/6 DOF transformation/Euler angles to attitude transformation matrix/Constant "
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 150 , TARGET_STRING (
 "part1/Supply Ship/Cross-flow drag and surge resistance/Cross-flow drag trapezoidal integration/sum1"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 151 , TARGET_STRING (
 "part1/Supply Ship/Cross-flow drag and surge resistance/Cross-flow drag trapezoidal integration/sum2"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 152 , TARGET_STRING (
 "part1/Supply Ship/Cross-flow drag and surge resistance/Cross-flow drag trapezoidal integration/constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 153 , TARGET_STRING (
 "part1/Supply Ship/Cross-flow drag and surge resistance/Cross-flow drag trapezoidal integration/memory1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 154 ,
TARGET_STRING (
 "part1/Supply Ship/Cross-flow drag and surge resistance/Cross-flow drag trapezoidal integration/memory2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 155 ,
TARGET_STRING (
 "part1/Supply Ship/Cross-flow drag and surge resistance/Cross-flow drag trapezoidal integration/multiply with 0.5/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { {
156 , TARGET_STRING ( "G" ) , 0 , 7 , 0 } , { 157 , TARGET_STRING ( "R_lin" )
, 0 , 7 , 0 } , { 158 , TARGET_STRING ( "V_c" ) , 0 , 0 , 0 } , { 159 ,
TARGET_STRING ( "beta_c_init" ) , 0 , 0 , 0 } , { 160 , TARGET_STRING (
"beta_c_slope" ) , 0 , 0 , 0 } , { 161 , TARGET_STRING ( "eta0" ) , 0 , 2 , 0
} , { 162 , TARGET_STRING ( "eta_d" ) , 0 , 8 , 0 } , { 163 , TARGET_STRING (
"nu0" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . caw3xk1bjs , & rtB . hmw44ztk02 ,
& rtB . fa2stxbhb0 [ 0 ] , & rtB . pcs2pp45fo [ 0 ] , & rtB . hq4v1e1yae [ 0
] , & rtB . bdwcdarwenp . mxrux4ihsx , & rtB . bdwcdarwenp . hdbgbqxayx , &
rtB . bdwcdarwenp . dgphkvmqeh , & rtB . eyfdy2t5x1 [ 0 ] , & rtB .
l2iqrs2nbh [ 0 ] , & rtB . fw0vyzudba [ 0 ] , & rtB . be1kifopti [ 0 ] , &
rtB . dspxnfnwii [ 0 ] , & rtB . dw3elub15t [ 0 ] , & rtB . nhei3mcnmc [ 0 ]
, & rtB . mziecawzxm [ 0 ] , & rtB . bdpfaxqtv2 [ 0 ] , & rtB . plwkdpaywv [
0 ] , & rtB . lmdobn5aep [ 0 ] , & rtB . jo550mlvio , & rtB . csvpktcy51 , &
rtB . oph1t2ks2g , & rtB . h3ui2oob11 , & rtB . grbtklkxda [ 0 ] , & rtB .
izv5omkblp [ 0 ] , & rtB . bdwcdarwenp . ez31cs5rtz , & rtB . bdwcdarwenp .
fknvz1n3iu , & rtB . bdwcdarwenp . bourn4xv5q , & rtB . bdwcdarwenp .
mxrux4ihsx , & rtB . bdwcdarwenp . p1cu1ax1ff , & rtB . bdwcdarwenp .
d3tiskdffc , & rtB . bdwcdarwenp . duhk1jh2i1 , & rtB . bdwcdarwenp .
j20fgtacge , & rtB . bdwcdarwenp . hdbgbqxayx , & rtB . bdwcdarwenp .
dgphkvmqeh , & rtB . cyc13fqmmo , & rtB . moxmiqckfn , & rtB . dbl53vnwnq , &
rtB . pmub5rdfqu , & rtB . ntop2pii3x , & rtB . gcwyfffljw , & rtB .
jc15bf2b1r , & rtB . lmhr1f3hhk , & rtB . m3z5343lqq , & rtB . dw0khhkd0f , &
rtB . avmbzarjiw , & rtB . dl3utd3has , & rtB . a2jiqc4vey , & rtB .
bjfbpes1uj , & rtB . bvkkzlqdoi , & rtB . jpfuhtxja2 , & rtB . aln2uzt2sr , &
rtB . ni43zkggls , & rtB . oxozd1afbi , & rtB . p2vsafjmwz , & rtB .
pebitregos , & rtB . ezdbxqhlsl , & rtB . nkmpf1n313 , & rtB . fbffvcuqox , &
rtB . bdwcdarwenp . ez31cs5rtz , & rtB . bdwcdarwenp . fknvz1n3iu , & rtP .
SupplyShip_rho , & rtP . SupplyShip_Axc , & rtP . SupplyShip_Ayc , & rtP .
SupplyShip_CX , & rtP . SupplyShip_CY_2D , & rtP . SupplyShip_Bv [ 0 ] , &
rtP . BandLimitedWhiteNoise1_seed , & rtP . beta_c_start , & rtP . mu_Value ,
& rtP . DiscreteTimeIntegrator_gainval , & rtP . DiscreteTimeIntegrator_IC ,
& rtP . Crossflowdragandsurgeresistance_N , & rtP .
Crossflowdragandsurgeresistance_Lpp , & rtP . Inversinertiamatrix_Value [ 0 ]
, & rtP . Springstiffness_Value [ 0 ] , & rtP . zero_Value , & rtP .
Output_Gain , & rtP . WhiteNoise_Mean , & rtP . WhiteNoise_StdDev , & rtP .
zero_Value_o3iat31z52 , & rtP . Gain_Gain , & rtP . Step_Y0 , & rtP .
bdwcdarwenp . constant_Value_n0uspjx54b , & rtP . bdwcdarwenp .
Gain_Gain_o3s3j5h3ft , & rtP . bdwcdarwenp . Gain1_Gain , & rtP . bdwcdarwenp
. Gain2_Gain , & rtP . bdwcdarwenp . Gain3_Gain , & rtP . Dp11_A [ 0 ] , &
rtP . Dp11_B , & rtP . Dp11_C [ 0 ] , & rtP . Dp11_InitialCondition , & rtP .
Dp13_InitialCondition , & rtP . Dp15_InitialCondition , & rtP . Dp22_A [ 0 ]
, & rtP . Dp22_B , & rtP . Dp22_C [ 0 ] , & rtP . Dp22_InitialCondition , &
rtP . Dp24_A [ 0 ] , & rtP . Dp24_B , & rtP . Dp24_C [ 0 ] , & rtP .
Dp24_InitialCondition , & rtP . Dp26_A [ 0 ] , & rtP . Dp26_B , & rtP .
Dp26_C [ 0 ] , & rtP . Dp26_InitialCondition , & rtP . Dp31_InitialCondition
, & rtP . Dp33_A [ 0 ] , & rtP . Dp33_B , & rtP . Dp33_C [ 0 ] , & rtP .
Dp33_InitialCondition , & rtP . Dp35_A [ 0 ] , & rtP . Dp35_B , & rtP .
Dp35_C [ 0 ] , & rtP . Dp35_InitialCondition , & rtP . Dp42_A [ 0 ] , & rtP .
Dp42_B , & rtP . Dp42_C [ 0 ] , & rtP . Dp42_InitialCondition , & rtP .
Dp44_A [ 0 ] , & rtP . Dp44_B , & rtP . Dp44_C [ 0 ] , & rtP .
Dp44_InitialCondition , & rtP . Dp46_A [ 0 ] , & rtP . Dp46_B , & rtP .
Dp46_C [ 0 ] , & rtP . Dp46_InitialCondition , & rtP . Dp51_InitialCondition
, & rtP . Dp53_A [ 0 ] , & rtP . Dp53_B , & rtP . Dp53_C [ 0 ] , & rtP .
Dp53_InitialCondition , & rtP . Dp55_A [ 0 ] , & rtP . Dp55_B , & rtP .
Dp55_C [ 0 ] , & rtP . Dp55_InitialCondition , & rtP . Dp62_A [ 0 ] , & rtP .
Dp62_B , & rtP . Dp62_C [ 0 ] , & rtP . Dp62_InitialCondition , & rtP .
Dp64_A [ 0 ] , & rtP . Dp64_B , & rtP . Dp64_C [ 0 ] , & rtP .
Dp64_InitialCondition , & rtP . Dp66_A [ 0 ] , & rtP . Dp66_B , & rtP .
Dp66_C [ 0 ] , & rtP . Dp66_InitialCondition , & rtP . Constant_Value , & rtP
. Constant_Value_fw51n42egt , & rtP . bdwcdarwenp . sum1_Y0 , & rtP .
bdwcdarwenp . sum2_Y0 , & rtP . bdwcdarwenp . constant_Value , & rtP .
bdwcdarwenp . memory1_InitialCondition , & rtP . bdwcdarwenp .
memory2_InitialCondition , & rtP . bdwcdarwenp . Gain_Gain , & rtP . G [ 0 ]
, & rtP . R_lin [ 0 ] , & rtP . V_c , & rtP . beta_c_init , & rtP .
beta_c_slope , & rtP . eta0 [ 0 ] , & rtP . eta_d [ 0 ] , & rtP . nu0 [ 0 ] ,
} ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 16 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] =
{ 1 , 1 , 3 , 1 , 6 , 1 , 6 , 6 , 5 , 1 , 2 , 1 , 7 , 1 , 3 , 3 , 1 , 3 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.1 , 0.0 , 1.0 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 2 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 0 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 2 ] , 1 , 0 } , { ( NULL ) , ( NULL ) , 3 , 0 } , { (
NULL ) , ( NULL ) , - 1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 61 , ( NULL ) , 0 , ( NULL ) , 0 } , {
rtBlockParameters , 95 , rtModelParameters , 8 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 1101951116U , 1049419619U , 1328342996U ,
3503844675U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
part1_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void part1_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void part1_host_InitializeDataMapInfo ( part1_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
