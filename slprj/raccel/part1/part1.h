#ifndef RTW_HEADER_part1_h_
#define RTW_HEADER_part1_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef part1_COMMON_INCLUDES_
#define part1_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "part1_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME part1
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (59) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (61)   
#elif NCSTATES != 61
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T bourn4xv5q ; real_T d3tiskdffc ; real_T duhk1jh2i1 ;
real_T mxrux4ihsx ; real_T hdbgbqxayx ; real_T dgphkvmqeh ; real_T j20fgtacge
; real_T p1cu1ax1ff ; real_T ez31cs5rtz ; real_T fknvz1n3iu ; } bd1yohmayu ;
typedef struct { real_T phb310slul ; real_T n2ku52vvqx ; int_T hbyemn4gsg ;
int8_T owtswlfij5 ; int8_T bz4vnsg0h3 ; int8_T gb150kixey ; int8_T m0e0aqbsup
; } dvdyadl50v ; typedef struct { real_T dz3iprwq04 ; } ltnqgn3c4v ; typedef
struct { real_T eyfdy2t5x1 [ 6 ] ; real_T l2iqrs2nbh [ 6 ] ; real_T
hq4v1e1yae [ 3 ] ; real_T pcs2pp45fo [ 3 ] ; real_T fa2stxbhb0 [ 3 ] ; real_T
o3jaks1eee [ 9 ] ; real_T grbtklkxda [ 3 ] ; real_T o10bsyiomx [ 9 ] ; real_T
izv5omkblp [ 3 ] ; real_T lmdobn5aep [ 6 ] ; real_T fw0vyzudba [ 6 ] ; real_T
cyc13fqmmo ; real_T moxmiqckfn ; real_T dbl53vnwnq ; real_T pmub5rdfqu ;
real_T ntop2pii3x ; real_T gcwyfffljw ; real_T jc15bf2b1r ; real_T lmhr1f3hhk
; real_T m3z5343lqq ; real_T dw0khhkd0f ; real_T avmbzarjiw ; real_T
dl3utd3has ; real_T a2jiqc4vey ; real_T bjfbpes1uj ; real_T bvkkzlqdoi ;
real_T jpfuhtxja2 ; real_T aln2uzt2sr ; real_T ni43zkggls ; real_T oxozd1afbi
; real_T p2vsafjmwz ; real_T pebitregos ; real_T ezdbxqhlsl ; real_T
nkmpf1n313 ; real_T fbffvcuqox ; real_T be1kifopti [ 6 ] ; real_T nhei3mcnmc
[ 6 ] ; real_T bdpfaxqtv2 [ 6 ] ; real_T plwkdpaywv [ 6 ] ; real_T mziecawzxm
[ 6 ] ; real_T dw3elub15t [ 6 ] ; real_T dspxnfnwii [ 6 ] ; real_T l5roy5rkzb
[ 6 ] ; real_T h3ui2oob11 ; real_T hmw44ztk02 ; real_T csvpktcy51 ; real_T
oph1t2ks2g ; real_T caw3xk1bjs ; real_T jo550mlvio ; bd1yohmayu bdwcdarwenp ;
} B ; typedef struct { real_T mww113xbqz ; real_T d50w50b4ui ; struct { void
* AQHandles ; void * SlioLTF ; } pthpifwmvx ; struct { void * AQHandles ;
void * SlioLTF ; } nd0y5uiq53 ; struct { void * LoggedData [ 2 ] ; }
ijtjgrpnih ; uint32_T mnc0lo1s5x ; int_T a5sfck4gtw ; dvdyadl50v bdwcdarwenp
; } DW ; typedef struct { real_T cmbsppmgxt [ 6 ] ; real_T fouxeyz2rv [ 6 ] ;
real_T o5an0su3zl [ 3 ] ; real_T flavwhfri3 ; real_T iep0nbptkv ; real_T
ifcdyywemj [ 3 ] ; real_T es40z54msj [ 3 ] ; real_T iqmcpbftvp [ 3 ] ; real_T
nfkzrq1gig ; real_T edhm3foaf3 [ 3 ] ; real_T iw2jmng4cz [ 4 ] ; real_T
ad2gbmw2vr [ 3 ] ; real_T mutv5jqun2 [ 4 ] ; real_T gbl4eoeduk [ 3 ] ; real_T
l2v51ndnpb ; real_T hlzbbhwjfh [ 4 ] ; real_T kjjqbhtfg1 [ 3 ] ; real_T
hvxjp4vkgi [ 3 ] ; real_T ho3iy0oyl1 [ 3 ] ; real_T hkbbfnxh4k [ 3 ] ; } X ;
typedef struct { real_T cmbsppmgxt [ 6 ] ; real_T fouxeyz2rv [ 6 ] ; real_T
o5an0su3zl [ 3 ] ; real_T flavwhfri3 ; real_T iep0nbptkv ; real_T ifcdyywemj
[ 3 ] ; real_T es40z54msj [ 3 ] ; real_T iqmcpbftvp [ 3 ] ; real_T nfkzrq1gig
; real_T edhm3foaf3 [ 3 ] ; real_T iw2jmng4cz [ 4 ] ; real_T ad2gbmw2vr [ 3 ]
; real_T mutv5jqun2 [ 4 ] ; real_T gbl4eoeduk [ 3 ] ; real_T l2v51ndnpb ;
real_T hlzbbhwjfh [ 4 ] ; real_T kjjqbhtfg1 [ 3 ] ; real_T hvxjp4vkgi [ 3 ] ;
real_T ho3iy0oyl1 [ 3 ] ; real_T hkbbfnxh4k [ 3 ] ; } XDot ; typedef struct {
boolean_T cmbsppmgxt [ 6 ] ; boolean_T fouxeyz2rv [ 6 ] ; boolean_T
o5an0su3zl [ 3 ] ; boolean_T flavwhfri3 ; boolean_T iep0nbptkv ; boolean_T
ifcdyywemj [ 3 ] ; boolean_T es40z54msj [ 3 ] ; boolean_T iqmcpbftvp [ 3 ] ;
boolean_T nfkzrq1gig ; boolean_T edhm3foaf3 [ 3 ] ; boolean_T iw2jmng4cz [ 4
] ; boolean_T ad2gbmw2vr [ 3 ] ; boolean_T mutv5jqun2 [ 4 ] ; boolean_T
gbl4eoeduk [ 3 ] ; boolean_T l2v51ndnpb ; boolean_T hlzbbhwjfh [ 4 ] ;
boolean_T kjjqbhtfg1 [ 3 ] ; boolean_T hvxjp4vkgi [ 3 ] ; boolean_T
ho3iy0oyl1 [ 3 ] ; boolean_T hkbbfnxh4k [ 3 ] ; } XDis ; typedef struct {
real_T cmbsppmgxt [ 6 ] ; real_T fouxeyz2rv [ 6 ] ; real_T o5an0su3zl [ 3 ] ;
real_T flavwhfri3 ; real_T iep0nbptkv ; real_T ifcdyywemj [ 3 ] ; real_T
es40z54msj [ 3 ] ; real_T iqmcpbftvp [ 3 ] ; real_T nfkzrq1gig ; real_T
edhm3foaf3 [ 3 ] ; real_T iw2jmng4cz [ 4 ] ; real_T ad2gbmw2vr [ 3 ] ; real_T
mutv5jqun2 [ 4 ] ; real_T gbl4eoeduk [ 3 ] ; real_T l2v51ndnpb ; real_T
hlzbbhwjfh [ 4 ] ; real_T kjjqbhtfg1 [ 3 ] ; real_T hvxjp4vkgi [ 3 ] ; real_T
ho3iy0oyl1 [ 3 ] ; real_T hkbbfnxh4k [ 3 ] ; } CStateAbsTol ; typedef struct
{ real_T cmbsppmgxt [ 6 ] ; real_T fouxeyz2rv [ 6 ] ; real_T o5an0su3zl [ 3 ]
; real_T flavwhfri3 ; real_T iep0nbptkv ; real_T ifcdyywemj [ 3 ] ; real_T
es40z54msj [ 3 ] ; real_T iqmcpbftvp [ 3 ] ; real_T nfkzrq1gig ; real_T
edhm3foaf3 [ 3 ] ; real_T iw2jmng4cz [ 4 ] ; real_T ad2gbmw2vr [ 3 ] ; real_T
mutv5jqun2 [ 4 ] ; real_T gbl4eoeduk [ 3 ] ; real_T l2v51ndnpb ; real_T
hlzbbhwjfh [ 4 ] ; real_T kjjqbhtfg1 [ 3 ] ; real_T hvxjp4vkgi [ 3 ] ; real_T
ho3iy0oyl1 [ 3 ] ; real_T hkbbfnxh4k [ 3 ] ; } CXPtMin ; typedef struct {
real_T cmbsppmgxt [ 6 ] ; real_T fouxeyz2rv [ 6 ] ; real_T o5an0su3zl [ 3 ] ;
real_T flavwhfri3 ; real_T iep0nbptkv ; real_T ifcdyywemj [ 3 ] ; real_T
es40z54msj [ 3 ] ; real_T iqmcpbftvp [ 3 ] ; real_T nfkzrq1gig ; real_T
edhm3foaf3 [ 3 ] ; real_T iw2jmng4cz [ 4 ] ; real_T ad2gbmw2vr [ 3 ] ; real_T
mutv5jqun2 [ 4 ] ; real_T gbl4eoeduk [ 3 ] ; real_T l2v51ndnpb ; real_T
hlzbbhwjfh [ 4 ] ; real_T kjjqbhtfg1 [ 3 ] ; real_T hvxjp4vkgi [ 3 ] ; real_T
ho3iy0oyl1 [ 3 ] ; real_T hkbbfnxh4k [ 3 ] ; } CXPtMax ; typedef struct {
real_T chuyhum0fk ; ltnqgn3c4v bdwcdarwenp ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct orlbr1ek4o_ { real_T
Gain_Gain ; real_T sum1_Y0 ; real_T sum2_Y0 ; real_T memory1_InitialCondition
; real_T memory2_InitialCondition ; real_T constant_Value ; real_T
Gain_Gain_o3s3j5h3ft ; real_T Gain1_Gain ; real_T Gain3_Gain ; real_T
constant_Value_n0uspjx54b ; real_T Gain2_Gain ; } ; struct P_ { real_T G [ 9
] ; real_T R_lin [ 9 ] ; real_T V_c ; real_T beta_c_init ; real_T
beta_c_slope ; real_T eta0 [ 6 ] ; real_T eta_d [ 3 ] ; real_T nu0 [ 6 ] ;
real_T SupplyShip_Axc ; real_T SupplyShip_Ayc ; real_T SupplyShip_Bv [ 36 ] ;
real_T SupplyShip_CX ; real_T SupplyShip_CY_2D ; real_T
Crossflowdragandsurgeresistance_Lpp ; real_T
Crossflowdragandsurgeresistance_N ; real_T SupplyShip_rho ; real_T
BandLimitedWhiteNoise1_seed ; real_T beta_c_start ; real_T Dp11_A [ 5 ] ;
real_T Dp11_B ; real_T Dp11_C [ 2 ] ; real_T Dp11_InitialCondition ; real_T
Dp13_InitialCondition ; real_T Dp15_InitialCondition ; real_T Dp22_A [ 5 ] ;
real_T Dp22_B ; real_T Dp22_C [ 2 ] ; real_T Dp22_InitialCondition ; real_T
Dp24_A [ 5 ] ; real_T Dp24_B ; real_T Dp24_C [ 2 ] ; real_T
Dp24_InitialCondition ; real_T Dp26_A [ 5 ] ; real_T Dp26_B ; real_T Dp26_C [
2 ] ; real_T Dp26_InitialCondition ; real_T Dp31_InitialCondition ; real_T
Dp33_A [ 5 ] ; real_T Dp33_B ; real_T Dp33_C [ 2 ] ; real_T
Dp33_InitialCondition ; real_T Dp35_A [ 7 ] ; real_T Dp35_B ; real_T Dp35_C [
3 ] ; real_T Dp35_InitialCondition ; real_T Dp42_A [ 5 ] ; real_T Dp42_B ;
real_T Dp42_C [ 2 ] ; real_T Dp42_InitialCondition ; real_T Dp44_A [ 7 ] ;
real_T Dp44_B ; real_T Dp44_C [ 3 ] ; real_T Dp44_InitialCondition ; real_T
Dp46_A [ 5 ] ; real_T Dp46_B ; real_T Dp46_C [ 2 ] ; real_T
Dp46_InitialCondition ; real_T Dp51_InitialCondition ; real_T Dp53_A [ 7 ] ;
real_T Dp53_B ; real_T Dp53_C [ 3 ] ; real_T Dp53_InitialCondition ; real_T
Dp55_A [ 5 ] ; real_T Dp55_B ; real_T Dp55_C [ 2 ] ; real_T
Dp55_InitialCondition ; real_T Dp62_A [ 5 ] ; real_T Dp62_B ; real_T Dp62_C [
2 ] ; real_T Dp62_InitialCondition ; real_T Dp64_A [ 5 ] ; real_T Dp64_B ;
real_T Dp64_C [ 2 ] ; real_T Dp64_InitialCondition ; real_T Dp66_A [ 5 ] ;
real_T Dp66_B ; real_T Dp66_C [ 2 ] ; real_T Dp66_InitialCondition ; real_T
Step_Y0 ; real_T Gain_Gain ; real_T DiscreteTimeIntegrator_gainval ; real_T
DiscreteTimeIntegrator_IC ; real_T WhiteNoise_Mean ; real_T WhiteNoise_StdDev
; real_T Output_Gain ; real_T Constant_Value ; real_T
Constant_Value_fw51n42egt ; real_T Inversinertiamatrix_Value [ 36 ] ; real_T
Springstiffness_Value [ 36 ] ; real_T zero_Value ; real_T
zero_Value_o3iat31z52 ; real_T mu_Value ; orlbr1ek4o bdwcdarwenp ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
part1_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ; extern const
int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern const int_T
gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ; extern const
char * gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern
const int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
