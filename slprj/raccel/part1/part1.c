#include "rt_logging_mmi.h"
#include "part1_capi.h"
#include <math.h>
#include "part1.h"
#include "part1_private.h"
#include "part1_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.1 (R2020a) 18-Nov-2019" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\part1\\part1_Jpattern.mat" ; const int_T gblNumRootInportBlks
= 0 ; const int_T gblNumModelInputs = 0 ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern void *
gblAperiodicPartitionHitTimes ; const int_T gblInportDataTypeIdx [ ] = { - 1
} ; const int_T gblInportDims [ ] = { - 1 } ; const int_T gblInportComplex [
] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1 } ; const int_T
gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1
, 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes ( const char *
inportFileName , int * matFileFormat ) { return rt_RapidReadInportsMatFile (
inportFileName , matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void pnuqtei0qb ( bd1yohmayu * localB , dvdyadl50v * localDW ,
orlbr1ek4o * localP ) { localDW -> phb310slul = localP ->
memory1_InitialCondition ; localDW -> n2ku52vvqx = localP ->
memory2_InitialCondition ; localB -> ez31cs5rtz = localP -> sum1_Y0 ; localB
-> fknvz1n3iu = localP -> sum2_Y0 ; } void dpii4cggnx ( dvdyadl50v * localDW
) { localDW -> bz4vnsg0h3 = - 1 ; } void bdwcdarwen ( SimStruct * rtS_i ,
const real_T a42ahzfzxv [ 6 ] , bd1yohmayu * localB , dvdyadl50v * localDW ,
orlbr1ek4o * localP , real_T rtp_Lpp , real_T rtp_CD , real_T rtp_N , real_T
rtp_rho_w , real_T rtp_Ay ) { real_T cix0mzhnup ; int32_T tmp ; int32_T i ;
real_T dxnnjdhc4g ; int8_T rtPrevAction ; int8_T rtAction ; if (
ssIsMajorTimeStep ( rtS_i ) ) { localDW -> hbyemn4gsg = ( a42ahzfzxv [ 0 ] >=
0.0 ) ; } localB -> bourn4xv5q = localDW -> hbyemn4gsg > 0 ? a42ahzfzxv [ 0 ]
: - a42ahzfzxv [ 0 ] ; if ( ssIsSampleHit ( rtS_i , 1 , 0 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; localDW -> phb310slul
= localP -> memory1_InitialCondition ; localDW -> n2ku52vvqx = localP ->
memory2_InitialCondition ; if ( rtp_N < 2.147483648E+9 ) { if ( rtp_N >= -
2.147483648E+9 ) { tmp = ( int32_T ) rtp_N ; } else { tmp = MIN_int32_T ; } }
else if ( rtp_N >= 2.147483648E+9 ) { tmp = MAX_int32_T ; } else { tmp = 0 ;
} if ( tmp > 2147483646 ) { tmp = 2147483646 ; } else { if ( tmp < 0 ) { tmp
= 0 ; } } for ( i = 1 ; i <= tmp ; i ++ ) { cix0mzhnup = ( ( real_T ) i -
localP -> constant_Value ) * localB -> j20fgtacge - rtp_Lpp / 2.0 ;
dxnnjdhc4g = a42ahzfzxv [ 5 ] * cix0mzhnup ; dxnnjdhc4g += a42ahzfzxv [ 1 ] ;
dxnnjdhc4g = muDoubleScalarAbs ( dxnnjdhc4g ) * dxnnjdhc4g * localB ->
j20fgtacge ; rtPrevAction = localDW -> bz4vnsg0h3 ; rtAction = ( int8_T ) ( (
i != 1 ) && ( ! ( i == rtp_N ) ) ) ; localDW -> bz4vnsg0h3 = rtAction ; if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; break ; } } if (
rtAction == 0 ) { if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS_i , 1 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } } dxnnjdhc4g *=
localP -> Gain_Gain ; localDW -> m0e0aqbsup = 4 ; } else { if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS_i , 1 ) != ssGetTStart ( rtS_i ) )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } } localDW ->
gb150kixey = 4 ; } localB -> ez31cs5rtz = localDW -> phb310slul + dxnnjdhc4g
; localB -> fknvz1n3iu = dxnnjdhc4g * cix0mzhnup + localDW -> n2ku52vvqx ;
localDW -> phb310slul = localB -> ez31cs5rtz ; localDW -> n2ku52vvqx = localB
-> fknvz1n3iu ; if ( ssIsMajorTimeStep ( rtS_i ) ) { srUpdateBC ( localDW ->
owtswlfij5 ) ; } } cix0mzhnup = localP -> Gain_Gain_o3s3j5h3ft * localB ->
fknvz1n3iu ; dxnnjdhc4g = localP -> Gain1_Gain * localB -> ez31cs5rtz ; }
localB -> d3tiskdffc = localB -> bourn4xv5q * a42ahzfzxv [ 0 ] ; localB ->
duhk1jh2i1 = localB -> d3tiskdffc * localB -> p1cu1ax1ff ; localB ->
mxrux4ihsx = localP -> Gain3_Gain * localB -> duhk1jh2i1 ; if ( ssIsSampleHit
( rtS_i , 1 , 0 ) ) { localB -> hdbgbqxayx = dxnnjdhc4g * rtp_rho_w * (
rtp_Ay / rtp_Lpp ) * rtp_CD ; localB -> dgphkvmqeh = cix0mzhnup * rtp_rho_w *
( rtp_Ay / rtp_Lpp ) * rtp_CD ; } } void bdwcdarwenTID3 ( bd1yohmayu * localB
, orlbr1ek4o * localP , real_T rtp_Lpp , real_T rtp_N , real_T rtp_Cx ,
real_T rtp_Ax , real_T rtp_rho_w ) { localB -> j20fgtacge = 1.0 / ( rtp_N -
localP -> constant_Value_n0uspjx54b ) * rtp_Lpp ; localB -> p1cu1ax1ff =
localP -> Gain2_Gain * rtp_Ax * rtp_Cx * rtp_rho_w ; } void nv4ywpeauv (
const real_T a42ahzfzxv [ 6 ] , ltnqgn3c4v * localZCSV ) { localZCSV ->
dz3iprwq04 = a42ahzfzxv [ 0 ] ; } real_T rt_urand_Upu32_Yd_f_pw_snf (
uint32_T * u ) { uint32_T lo ; uint32_T hi ; lo = * u % 127773U * 16807U ; hi
= * u / 127773U * 2836U ; if ( lo < hi ) { * u = 2147483647U - ( hi - lo ) ;
} else { * u = lo - hi ; } return ( real_T ) * u * 4.6566128752457969E-10 ; }
real_T rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) { real_T y ; real_T sr ;
real_T si ; do { sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = 2.0
* rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = sr * sr + si * si ; } while (
si > 1.0 ) ; y = muDoubleScalarSqrt ( - 2.0 * muDoubleScalarLog ( si ) / si )
* sr ; return y ; } void MdlInitialize ( void ) { uint32_T tseed ; int32_T t
; int32_T i ; real_T tmp ; for ( i = 0 ; i < 6 ; i ++ ) { rtX . cmbsppmgxt [
i ] = rtP . nu0 [ i ] ; rtX . fouxeyz2rv [ i ] = rtP . eta0 [ i ] ; } rtX .
o5an0su3zl [ 0 ] = rtP . Dp11_InitialCondition ; rtX . o5an0su3zl [ 1 ] = rtP
. Dp11_InitialCondition ; rtX . o5an0su3zl [ 2 ] = rtP .
Dp11_InitialCondition ; rtX . flavwhfri3 = rtP . Dp13_InitialCondition ; rtX
. iep0nbptkv = rtP . Dp15_InitialCondition ; rtX . ifcdyywemj [ 0 ] = rtP .
Dp22_InitialCondition ; rtX . es40z54msj [ 0 ] = rtP . Dp24_InitialCondition
; rtX . iqmcpbftvp [ 0 ] = rtP . Dp26_InitialCondition ; rtX . ifcdyywemj [ 1
] = rtP . Dp22_InitialCondition ; rtX . es40z54msj [ 1 ] = rtP .
Dp24_InitialCondition ; rtX . iqmcpbftvp [ 1 ] = rtP . Dp26_InitialCondition
; rtX . ifcdyywemj [ 2 ] = rtP . Dp22_InitialCondition ; rtX . es40z54msj [ 2
] = rtP . Dp24_InitialCondition ; rtX . iqmcpbftvp [ 2 ] = rtP .
Dp26_InitialCondition ; rtX . nfkzrq1gig = rtP . Dp31_InitialCondition ; rtX
. edhm3foaf3 [ 0 ] = rtP . Dp33_InitialCondition ; rtX . edhm3foaf3 [ 1 ] =
rtP . Dp33_InitialCondition ; rtX . edhm3foaf3 [ 2 ] = rtP .
Dp33_InitialCondition ; rtX . iw2jmng4cz [ 0 ] = rtP . Dp35_InitialCondition
; rtX . iw2jmng4cz [ 1 ] = rtP . Dp35_InitialCondition ; rtX . iw2jmng4cz [ 2
] = rtP . Dp35_InitialCondition ; rtX . iw2jmng4cz [ 3 ] = rtP .
Dp35_InitialCondition ; rtX . ad2gbmw2vr [ 0 ] = rtP . Dp42_InitialCondition
; rtX . ad2gbmw2vr [ 1 ] = rtP . Dp42_InitialCondition ; rtX . ad2gbmw2vr [ 2
] = rtP . Dp42_InitialCondition ; rtX . mutv5jqun2 [ 0 ] = rtP .
Dp44_InitialCondition ; rtX . mutv5jqun2 [ 1 ] = rtP . Dp44_InitialCondition
; rtX . mutv5jqun2 [ 2 ] = rtP . Dp44_InitialCondition ; rtX . mutv5jqun2 [ 3
] = rtP . Dp44_InitialCondition ; rtX . gbl4eoeduk [ 0 ] = rtP .
Dp46_InitialCondition ; rtX . gbl4eoeduk [ 1 ] = rtP . Dp46_InitialCondition
; rtX . gbl4eoeduk [ 2 ] = rtP . Dp46_InitialCondition ; rtX . l2v51ndnpb =
rtP . Dp51_InitialCondition ; rtX . hlzbbhwjfh [ 0 ] = rtP .
Dp53_InitialCondition ; rtX . hlzbbhwjfh [ 1 ] = rtP . Dp53_InitialCondition
; rtX . hlzbbhwjfh [ 2 ] = rtP . Dp53_InitialCondition ; rtX . hlzbbhwjfh [ 3
] = rtP . Dp53_InitialCondition ; rtX . kjjqbhtfg1 [ 0 ] = rtP .
Dp55_InitialCondition ; rtX . hvxjp4vkgi [ 0 ] = rtP . Dp62_InitialCondition
; rtX . ho3iy0oyl1 [ 0 ] = rtP . Dp64_InitialCondition ; rtX . hkbbfnxh4k [ 0
] = rtP . Dp66_InitialCondition ; rtX . kjjqbhtfg1 [ 1 ] = rtP .
Dp55_InitialCondition ; rtX . hvxjp4vkgi [ 1 ] = rtP . Dp62_InitialCondition
; rtX . ho3iy0oyl1 [ 1 ] = rtP . Dp64_InitialCondition ; rtX . hkbbfnxh4k [ 1
] = rtP . Dp66_InitialCondition ; rtX . kjjqbhtfg1 [ 2 ] = rtP .
Dp55_InitialCondition ; rtX . hvxjp4vkgi [ 2 ] = rtP . Dp62_InitialCondition
; rtX . ho3iy0oyl1 [ 2 ] = rtP . Dp64_InitialCondition ; rtX . hkbbfnxh4k [ 2
] = rtP . Dp66_InitialCondition ; rtDW . mww113xbqz = rtP .
DiscreteTimeIntegrator_IC ; tmp = muDoubleScalarFloor ( rtP .
BandLimitedWhiteNoise1_seed ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; i = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i <<
16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
mnc0lo1s5x = tseed ; rtDW . d50w50b4ui = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW
. mnc0lo1s5x ) * rtP . WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; pnuqtei0qb
( & rtB . bdwcdarwenp , & rtDW . bdwcdarwenp , & rtP . bdwcdarwenp ) ; } void
MdlStart ( void ) { { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ;
void * r2 = ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const int
maxErrorBufferSize = 16384 ; char errMsgCreatingOSigstreamManager [ 16384 ] ;
bool errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } { void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
! slioCatalogue || ! rtwIsLoggingToFile ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"nu" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "nu" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "part1/Selector1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "nu" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . pthpifwmvx . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ebe1af50-2222-4740-bc53-88ab92f5386e" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW
. pthpifwmvx . AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . pthpifwmvx
. AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime
( rtDW . pthpifwmvx . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . pthpifwmvx . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . pthpifwmvx . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } rtDW . pthpifwmvx . SlioLTF = ( NULL ) ; {
void * treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; void * slioCatalogue = rt_slioCatalogue
( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 3 } ; rtwAddLeafNode (
0 , "nu" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , ""
, "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 , "nu"
, "" , rt_dataMapInfo . mmi . InstanceMap . fullPath , "part1/Selector1" , 1
, 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue
( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap .
fullPath , "part1/Selector1" , 1 , "nu" ) ; } if ( rtwLoggingOverride (
signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS ( rtS ) -> mdlInfo ->
rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . pthpifwmvx . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwIsLoggingToFile ( slioCatalogue ) ) { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "eta" ) ; sdiLabelU origSigName
= sdiGetLabelFromChars ( "eta" ) ; sdiLabelU propName = sdiGetLabelFromChars
( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "part1/Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "eta" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. nd0y5uiq53 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"3be83dd9-cec8-4688-a913-0fc8fdf89f4b" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . nd0y5uiq53 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . nd0y5uiq53 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . nd0y5uiq53 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . nd0y5uiq53 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . nd0y5uiq53 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
nd0y5uiq53 . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; void
* slioCatalogue = rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr (
rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue ( rt_dataMapInfo . mmi .
InstanceMap . fullPath ) ; if ( slioCatalogue && rtwIsLoggingToFile (
slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ; { int_T sigDimsArray
[ 1 ] = { 3 } ; rtwAddLeafNode ( 0 , "eta" , "linear" , 0 , ( unsigned int *
) sigDimsArray , 1 , "double" , "" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1
, 1 , 0 , 1 , "eta" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"part1/Selector" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , ( NULL ) , 0 ) ; if
( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi .
InstanceMap . fullPath , "part1/Selector" , 1 , "eta" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . nd0y5uiq53 . SlioLTF = accessor ;
} } } } dpii4cggnx ( & rtDW . bdwcdarwenp ) ; MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { real_T iloxih1h14 [ 3 ] ; real_T bxoxis0kw3 [ 3 ]
; real_T i4fdnspakj [ 3 ] ; real_T k0vuxkxkfh ; real_T fnc4n2mci5 ; int32_T i
; real_T opme0dss3d [ 6 ] ; real_T opme0dss3d_p [ 6 ] ; int32_T i_p ; real_T
g0fzsyujtr ; srClearBC ( rtDW . bdwcdarwenp . m0e0aqbsup ) ; srClearBC ( rtDW
. bdwcdarwenp . gb150kixey ) ; srClearBC ( rtDW . bdwcdarwenp . owtswlfij5 )
; for ( i = 0 ; i < 6 ; i ++ ) { rtB . eyfdy2t5x1 [ i ] = rtX . cmbsppmgxt [
i ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { iloxih1h14 [ 0 ] = rtB .
eyfdy2t5x1 [ 0 ] ; iloxih1h14 [ 1 ] = rtB . eyfdy2t5x1 [ 1 ] ; iloxih1h14 [ 2
] = rtB . eyfdy2t5x1 [ 5 ] ; { if ( ( rtDW . pthpifwmvx . AQHandles || rtDW .
pthpifwmvx . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . pthpifwmvx . AQHandles , rtDW . pthpifwmvx . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & iloxih1h14 [ 0 ] + 0 ) ; } } } for (
i = 0 ; i < 6 ; i ++ ) { rtB . l2iqrs2nbh [ i ] = rtX . fouxeyz2rv [ i ] ; }
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { iloxih1h14 [ 0 ] = rtB . l2iqrs2nbh [
0 ] ; iloxih1h14 [ 1 ] = rtB . l2iqrs2nbh [ 1 ] ; iloxih1h14 [ 2 ] = rtB .
l2iqrs2nbh [ 5 ] ; { if ( ( rtDW . nd0y5uiq53 . AQHandles || rtDW .
nd0y5uiq53 . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . nd0y5uiq53 . AQHandles , rtDW . nd0y5uiq53 . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & iloxih1h14 [ 0 ] + 0 ) ; } } } rtB .
hq4v1e1yae [ 0 ] = rtP . eta_d [ 0 ] - rtB . l2iqrs2nbh [ 0 ] ; rtB .
hq4v1e1yae [ 1 ] = rtP . eta_d [ 1 ] - rtB . l2iqrs2nbh [ 1 ] ; rtB .
hq4v1e1yae [ 2 ] = rtP . eta_d [ 2 ] - rtB . l2iqrs2nbh [ 5 ] ; for ( i = 0 ;
i < 3 ; i ++ ) { rtB . pcs2pp45fo [ i ] = 0.0 ; rtB . pcs2pp45fo [ i ] += rtP
. R_lin [ i ] * rtB . hq4v1e1yae [ 0 ] ; rtB . pcs2pp45fo [ i ] += rtP .
R_lin [ i + 3 ] * rtB . hq4v1e1yae [ 1 ] ; rtB . pcs2pp45fo [ i ] += rtP .
R_lin [ i + 6 ] * rtB . hq4v1e1yae [ 2 ] ; } for ( i = 0 ; i < 3 ; i ++ ) {
rtB . fa2stxbhb0 [ i ] = 0.0 ; rtB . fa2stxbhb0 [ i ] += rtP . G [ i ] * rtB
. pcs2pp45fo [ 0 ] ; rtB . fa2stxbhb0 [ i ] += rtP . G [ i + 3 ] * rtB .
pcs2pp45fo [ 1 ] ; rtB . fa2stxbhb0 [ i ] += rtP . G [ i + 6 ] * rtB .
pcs2pp45fo [ 2 ] ; k0vuxkxkfh = muDoubleScalarSin ( rtB . l2iqrs2nbh [ i + 3
] ) ; g0fzsyujtr = muDoubleScalarCos ( rtB . l2iqrs2nbh [ i + 3 ] ) ;
opme0dss3d [ i ] = k0vuxkxkfh ; opme0dss3d [ i + 3 ] = g0fzsyujtr ;
opme0dss3d_p [ i ] = k0vuxkxkfh ; opme0dss3d_p [ i + 3 ] = g0fzsyujtr ;
i4fdnspakj [ i ] = k0vuxkxkfh ; bxoxis0kw3 [ i ] = g0fzsyujtr ; } rtB .
o3jaks1eee [ 0 ] = opme0dss3d [ 5 ] * opme0dss3d_p [ 4 ] ; rtB . o3jaks1eee [
1 ] = i4fdnspakj [ 2 ] * bxoxis0kw3 [ 1 ] ; rtB . o3jaks1eee [ 2 ] = -
i4fdnspakj [ 1 ] ; rtB . o3jaks1eee [ 3 ] = bxoxis0kw3 [ 2 ] * i4fdnspakj [ 1
] * i4fdnspakj [ 0 ] - i4fdnspakj [ 2 ] * bxoxis0kw3 [ 0 ] ; rtB . o3jaks1eee
[ 4 ] = i4fdnspakj [ 2 ] * i4fdnspakj [ 1 ] * i4fdnspakj [ 0 ] + bxoxis0kw3 [
2 ] * bxoxis0kw3 [ 0 ] ; rtB . o3jaks1eee [ 5 ] = bxoxis0kw3 [ 1 ] *
i4fdnspakj [ 0 ] ; rtB . o3jaks1eee [ 6 ] = bxoxis0kw3 [ 0 ] * i4fdnspakj [ 1
] * bxoxis0kw3 [ 2 ] + i4fdnspakj [ 2 ] * i4fdnspakj [ 0 ] ; rtB . o3jaks1eee
[ 7 ] = i4fdnspakj [ 2 ] * i4fdnspakj [ 1 ] * bxoxis0kw3 [ 0 ] - bxoxis0kw3 [
2 ] * i4fdnspakj [ 0 ] ; rtB . o3jaks1eee [ 8 ] = bxoxis0kw3 [ 1 ] *
bxoxis0kw3 [ 0 ] ; rtB . o10bsyiomx [ 0 ] = rtP . Constant_Value ; rtB .
o10bsyiomx [ 1 ] = rtP . Constant_Value_fw51n42egt ; rtB . o10bsyiomx [ 2 ] =
rtP . Constant_Value_fw51n42egt ; rtB . o10bsyiomx [ 3 ] = muDoubleScalarSin
( rtB . l2iqrs2nbh [ 3 ] ) * muDoubleScalarTan ( rtB . l2iqrs2nbh [ 4 ] ) ;
rtB . o10bsyiomx [ 4 ] = muDoubleScalarCos ( rtB . l2iqrs2nbh [ 3 ] ) ; rtB .
o10bsyiomx [ 5 ] = muDoubleScalarSin ( rtB . l2iqrs2nbh [ 3 ] ) /
muDoubleScalarCos ( rtB . l2iqrs2nbh [ 4 ] ) ; rtB . o10bsyiomx [ 6 ] =
muDoubleScalarCos ( rtB . l2iqrs2nbh [ 3 ] ) * muDoubleScalarTan ( rtB .
l2iqrs2nbh [ 4 ] ) ; rtB . o10bsyiomx [ 7 ] = - muDoubleScalarSin ( rtB .
l2iqrs2nbh [ 3 ] ) ; rtB . o10bsyiomx [ 8 ] = muDoubleScalarCos ( rtB .
l2iqrs2nbh [ 3 ] ) / muDoubleScalarCos ( rtB . l2iqrs2nbh [ 4 ] ) ; for ( i =
0 ; i < 3 ; i ++ ) { rtB . grbtklkxda [ i ] = 0.0 ; rtB . izv5omkblp [ i ] =
0.0 ; rtB . grbtklkxda [ i ] += rtB . o3jaks1eee [ i ] * rtB . eyfdy2t5x1 [ 0
] ; rtB . izv5omkblp [ i ] += rtB . o10bsyiomx [ i ] * rtB . eyfdy2t5x1 [ 3 ]
; rtB . grbtklkxda [ i ] += rtB . o3jaks1eee [ i + 3 ] * rtB . eyfdy2t5x1 [ 1
] ; rtB . izv5omkblp [ i ] += rtB . o10bsyiomx [ i + 3 ] * rtB . eyfdy2t5x1 [
4 ] ; rtB . grbtklkxda [ i ] += rtB . o3jaks1eee [ i + 6 ] * rtB . eyfdy2t5x1
[ 2 ] ; rtB . izv5omkblp [ i ] += rtB . o10bsyiomx [ i + 6 ] * rtB .
eyfdy2t5x1 [ 5 ] ; } for ( i = 0 ; i < 6 ; i ++ ) { rtB . lmdobn5aep [ i ] =
rtB . eyfdy2t5x1 [ i ] ; } for ( i = 0 ; i < 6 ; i ++ ) { rtB . fw0vyzudba [
i ] = 0.0 ; for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { rtB . fw0vyzudba [ i ] +=
rtP . SupplyShip_Bv [ 6 * i_p + i ] * rtB . lmdobn5aep [ i_p ] ; } }
bdwcdarwen ( rtS , rtB . lmdobn5aep , & rtB . bdwcdarwenp , & rtDW .
bdwcdarwenp , & rtP . bdwcdarwenp , rtP . Crossflowdragandsurgeresistance_Lpp
, rtP . SupplyShip_CY_2D , rtP . Crossflowdragandsurgeresistance_N , rtP .
SupplyShip_rho , rtP . SupplyShip_Ayc ) ; rtB . cyc13fqmmo = 0.0 ; rtB .
cyc13fqmmo += rtP . Dp11_C [ 0 ] * rtX . o5an0su3zl [ 0 ] ; rtB . cyc13fqmmo
+= rtP . Dp11_C [ 1 ] * rtX . o5an0su3zl [ 1 ] ; rtB . moxmiqckfn = 0.0 ; rtB
. dbl53vnwnq = 0.0 ; rtB . pmub5rdfqu = 0.0 ; rtB . pmub5rdfqu += rtP .
Dp22_C [ 0 ] * rtX . ifcdyywemj [ 0 ] ; rtB . pmub5rdfqu += rtP . Dp22_C [ 1
] * rtX . ifcdyywemj [ 1 ] ; rtB . ntop2pii3x = 0.0 ; rtB . ntop2pii3x += rtP
. Dp24_C [ 0 ] * rtX . es40z54msj [ 0 ] ; rtB . ntop2pii3x += rtP . Dp24_C [
1 ] * rtX . es40z54msj [ 1 ] ; rtB . gcwyfffljw = 0.0 ; rtB . gcwyfffljw +=
rtP . Dp26_C [ 0 ] * rtX . iqmcpbftvp [ 0 ] ; rtB . gcwyfffljw += rtP .
Dp26_C [ 1 ] * rtX . iqmcpbftvp [ 1 ] ; rtB . jc15bf2b1r = 0.0 ; rtB .
lmhr1f3hhk = 0.0 ; rtB . lmhr1f3hhk += rtP . Dp33_C [ 0 ] * rtX . edhm3foaf3
[ 0 ] ; rtB . lmhr1f3hhk += rtP . Dp33_C [ 1 ] * rtX . edhm3foaf3 [ 1 ] ; rtB
. m3z5343lqq = 0.0 ; rtB . m3z5343lqq += rtP . Dp35_C [ 0 ] * rtX .
iw2jmng4cz [ 0 ] ; rtB . m3z5343lqq += rtP . Dp35_C [ 1 ] * rtX . iw2jmng4cz
[ 1 ] ; rtB . m3z5343lqq += rtP . Dp35_C [ 2 ] * rtX . iw2jmng4cz [ 2 ] ; rtB
. dw0khhkd0f = 0.0 ; rtB . dw0khhkd0f += rtP . Dp42_C [ 0 ] * rtX .
ad2gbmw2vr [ 0 ] ; rtB . dw0khhkd0f += rtP . Dp42_C [ 1 ] * rtX . ad2gbmw2vr
[ 1 ] ; rtB . avmbzarjiw = 0.0 ; rtB . avmbzarjiw += rtP . Dp44_C [ 0 ] * rtX
. mutv5jqun2 [ 0 ] ; rtB . avmbzarjiw += rtP . Dp44_C [ 1 ] * rtX .
mutv5jqun2 [ 1 ] ; rtB . avmbzarjiw += rtP . Dp44_C [ 2 ] * rtX . mutv5jqun2
[ 2 ] ; rtB . dl3utd3has = 0.0 ; rtB . dl3utd3has += rtP . Dp46_C [ 0 ] * rtX
. gbl4eoeduk [ 0 ] ; rtB . dl3utd3has += rtP . Dp46_C [ 1 ] * rtX .
gbl4eoeduk [ 1 ] ; rtB . a2jiqc4vey = 0.0 ; rtB . bjfbpes1uj = 0.0 ; rtB .
bjfbpes1uj += rtP . Dp53_C [ 0 ] * rtX . hlzbbhwjfh [ 0 ] ; rtB . bjfbpes1uj
+= rtP . Dp53_C [ 1 ] * rtX . hlzbbhwjfh [ 1 ] ; rtB . bjfbpes1uj += rtP .
Dp53_C [ 2 ] * rtX . hlzbbhwjfh [ 2 ] ; rtB . bvkkzlqdoi = 0.0 ; rtB .
bvkkzlqdoi += rtP . Dp55_C [ 0 ] * rtX . kjjqbhtfg1 [ 0 ] ; rtB . bvkkzlqdoi
+= rtP . Dp55_C [ 1 ] * rtX . kjjqbhtfg1 [ 1 ] ; rtB . jpfuhtxja2 = 0.0 ; rtB
. jpfuhtxja2 += rtP . Dp62_C [ 0 ] * rtX . hvxjp4vkgi [ 0 ] ; rtB .
jpfuhtxja2 += rtP . Dp62_C [ 1 ] * rtX . hvxjp4vkgi [ 1 ] ; rtB . aln2uzt2sr
= 0.0 ; rtB . aln2uzt2sr += rtP . Dp64_C [ 0 ] * rtX . ho3iy0oyl1 [ 0 ] ; rtB
. aln2uzt2sr += rtP . Dp64_C [ 1 ] * rtX . ho3iy0oyl1 [ 1 ] ; rtB .
ni43zkggls = 0.0 ; rtB . ni43zkggls += rtP . Dp66_C [ 0 ] * rtX . hkbbfnxh4k
[ 0 ] ; rtB . ni43zkggls += rtP . Dp66_C [ 1 ] * rtX . hkbbfnxh4k [ 1 ] ; rtB
. oxozd1afbi = ( rtB . pmub5rdfqu + rtB . ntop2pii3x ) + rtB . gcwyfffljw ;
rtB . p2vsafjmwz = ( rtB . jc15bf2b1r + rtB . lmhr1f3hhk ) + rtB . m3z5343lqq
; rtB . pebitregos = ( rtB . cyc13fqmmo + rtB . moxmiqckfn ) + rtB .
dbl53vnwnq ; rtB . ezdbxqhlsl = ( rtB . dw0khhkd0f + rtB . avmbzarjiw ) + rtB
. dl3utd3has ; rtB . nkmpf1n313 = ( rtB . a2jiqc4vey + rtB . bjfbpes1uj ) +
rtB . bvkkzlqdoi ; rtB . fbffvcuqox = ( rtB . jpfuhtxja2 + rtB . aln2uzt2sr )
+ rtB . ni43zkggls ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . be1kifopti [ i ] =
0.0 ; for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { rtB . be1kifopti [ i ] += rtP .
Springstiffness_Value [ 6 * i_p + i ] * rtB . l2iqrs2nbh [ i_p ] ; } } rtB .
nhei3mcnmc [ 0 ] = rtB . fa2stxbhb0 [ 0 ] - rtB . be1kifopti [ 0 ] ; rtB .
nhei3mcnmc [ 1 ] = rtB . fa2stxbhb0 [ 1 ] - rtB . be1kifopti [ 1 ] ; rtB .
nhei3mcnmc [ 2 ] = 0.0 - rtB . be1kifopti [ 2 ] ; rtB . nhei3mcnmc [ 3 ] =
0.0 - rtB . be1kifopti [ 3 ] ; rtB . nhei3mcnmc [ 4 ] = 0.0 - rtB .
be1kifopti [ 4 ] ; rtB . nhei3mcnmc [ 5 ] = rtB . fa2stxbhb0 [ 2 ] - rtB .
be1kifopti [ 5 ] ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . bdpfaxqtv2 [ i ] =
rtB . nhei3mcnmc [ i ] ; } rtB . plwkdpaywv [ 0 ] = rtB . bdpfaxqtv2 [ 0 ] +
rtB . bdwcdarwenp . mxrux4ihsx ; rtB . plwkdpaywv [ 1 ] = rtB . bdpfaxqtv2 [
1 ] + rtB . bdwcdarwenp . hdbgbqxayx ; rtB . plwkdpaywv [ 2 ] = rtB .
bdpfaxqtv2 [ 2 ] + rtP . zero_Value ; rtB . plwkdpaywv [ 3 ] = rtB .
bdpfaxqtv2 [ 3 ] + rtP . zero_Value ; rtB . plwkdpaywv [ 4 ] = rtB .
bdpfaxqtv2 [ 4 ] + rtP . zero_Value ; rtB . plwkdpaywv [ 5 ] = rtB .
bdpfaxqtv2 [ 5 ] + rtB . bdwcdarwenp . dgphkvmqeh ; for ( i = 0 ; i < 6 ; i
++ ) { rtB . mziecawzxm [ i ] = rtB . plwkdpaywv [ i ] - rtB . fw0vyzudba [ i
] ; } rtB . dw3elub15t [ 0 ] = rtB . mziecawzxm [ 0 ] - rtB . pebitregos ;
rtB . dw3elub15t [ 1 ] = rtB . mziecawzxm [ 1 ] - rtB . oxozd1afbi ; rtB .
dw3elub15t [ 2 ] = rtB . mziecawzxm [ 2 ] - rtB . p2vsafjmwz ; rtB .
dw3elub15t [ 3 ] = rtB . mziecawzxm [ 3 ] - rtB . ezdbxqhlsl ; rtB .
dw3elub15t [ 4 ] = rtB . mziecawzxm [ 4 ] - rtB . nkmpf1n313 ; rtB .
dw3elub15t [ 5 ] = rtB . mziecawzxm [ 5 ] - rtB . fbffvcuqox ; for ( i = 0 ;
i < 6 ; i ++ ) { rtB . dspxnfnwii [ i ] = 0.0 ; for ( i_p = 0 ; i_p < 6 ; i_p
++ ) { rtB . dspxnfnwii [ i ] += rtP . Inversinertiamatrix_Value [ 6 * i_p +
i ] * rtB . dw3elub15t [ i_p ] ; } } rtB . l5roy5rkzb [ 0 ] = rtB .
grbtklkxda [ 0 ] ; rtB . l5roy5rkzb [ 3 ] = rtB . izv5omkblp [ 0 ] ; rtB .
l5roy5rkzb [ 1 ] = rtB . grbtklkxda [ 1 ] ; rtB . l5roy5rkzb [ 4 ] = rtB .
izv5omkblp [ 1 ] ; rtB . l5roy5rkzb [ 2 ] = rtB . grbtklkxda [ 2 ] ; rtB .
l5roy5rkzb [ 5 ] = rtB . izv5omkblp [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { rtDW . a5sfck4gtw = ( ssGetTaskTime ( rtS , 1 ) >= rtP . beta_c_start )
; if ( rtDW . a5sfck4gtw == 1 ) { rtB . h3ui2oob11 = rtP . beta_c_slope ; }
else { rtB . h3ui2oob11 = rtP . Step_Y0 ; } } k0vuxkxkfh = ( ( ssGetT ( rtS )
- rtP . beta_c_start ) * rtB . h3ui2oob11 + rtP . beta_c_init ) * rtP .
Gain_Gain ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { fnc4n2mci5 = rtDW .
mww113xbqz ; rtB . hmw44ztk02 = rtP . V_c + rtDW . mww113xbqz ; } rtB .
csvpktcy51 = muDoubleScalarCos ( k0vuxkxkfh ) * rtB . hmw44ztk02 ; rtB .
oph1t2ks2g = muDoubleScalarSin ( k0vuxkxkfh ) * rtB . hmw44ztk02 ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . caw3xk1bjs = rtP . Output_Gain * rtDW
. d50w50b4ui - rtP . mu_Value * fnc4n2mci5 ; } UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID3 ( int_T tid ) { bdwcdarwenTID3 ( & rtB . bdwcdarwenp , &
rtP . bdwcdarwenp , rtP . Crossflowdragandsurgeresistance_Lpp , rtP .
Crossflowdragandsurgeresistance_N , rtP . SupplyShip_CX , rtP .
SupplyShip_Axc , rtP . SupplyShip_rho ) ; rtB . jo550mlvio = rtP .
zero_Value_o3iat31z52 ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T
tid ) { if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . mww113xbqz += rtP .
DiscreteTimeIntegrator_gainval * rtB . caw3xk1bjs ; rtDW . d50w50b4ui =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . mnc0lo1s5x ) * rtP . WhiteNoise_StdDev
+ rtP . WhiteNoise_Mean ; } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
int32_T i ; XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; for (
i = 0 ; i < 6 ; i ++ ) { _rtXdot -> cmbsppmgxt [ i ] = rtB . dspxnfnwii [ i ]
; _rtXdot -> fouxeyz2rv [ i ] = rtB . l5roy5rkzb [ i ] ; } _rtXdot ->
o5an0su3zl [ 0 ] = 0.0 ; _rtXdot -> o5an0su3zl [ 1 ] = 0.0 ; _rtXdot ->
o5an0su3zl [ 2 ] = 0.0 ; _rtXdot -> o5an0su3zl [ 0 ] += rtP . Dp11_A [ 0 ] *
rtX . o5an0su3zl [ 0 ] ; _rtXdot -> o5an0su3zl [ 0 ] += rtP . Dp11_A [ 1 ] *
rtX . o5an0su3zl [ 1 ] ; _rtXdot -> o5an0su3zl [ 0 ] += rtP . Dp11_A [ 2 ] *
rtX . o5an0su3zl [ 2 ] ; _rtXdot -> o5an0su3zl [ 1 ] += rtP . Dp11_A [ 3 ] *
rtX . o5an0su3zl [ 0 ] ; _rtXdot -> o5an0su3zl [ 2 ] += rtP . Dp11_A [ 4 ] *
rtX . o5an0su3zl [ 1 ] ; _rtXdot -> o5an0su3zl [ 0 ] += rtP . Dp11_B * rtB .
lmdobn5aep [ 0 ] ; _rtXdot -> flavwhfri3 = 0.0 ; _rtXdot -> iep0nbptkv = 0.0
; _rtXdot -> ifcdyywemj [ 0 ] = 0.0 ; _rtXdot -> es40z54msj [ 0 ] = 0.0 ;
_rtXdot -> iqmcpbftvp [ 0 ] = 0.0 ; _rtXdot -> ifcdyywemj [ 1 ] = 0.0 ;
_rtXdot -> es40z54msj [ 1 ] = 0.0 ; _rtXdot -> iqmcpbftvp [ 1 ] = 0.0 ;
_rtXdot -> ifcdyywemj [ 2 ] = 0.0 ; _rtXdot -> es40z54msj [ 2 ] = 0.0 ;
_rtXdot -> iqmcpbftvp [ 2 ] = 0.0 ; _rtXdot -> ifcdyywemj [ 0 ] += rtP .
Dp22_A [ 0 ] * rtX . ifcdyywemj [ 0 ] ; _rtXdot -> ifcdyywemj [ 0 ] += rtP .
Dp22_A [ 1 ] * rtX . ifcdyywemj [ 1 ] ; _rtXdot -> ifcdyywemj [ 0 ] += rtP .
Dp22_A [ 2 ] * rtX . ifcdyywemj [ 2 ] ; _rtXdot -> ifcdyywemj [ 1 ] += rtP .
Dp22_A [ 3 ] * rtX . ifcdyywemj [ 0 ] ; _rtXdot -> ifcdyywemj [ 2 ] += rtP .
Dp22_A [ 4 ] * rtX . ifcdyywemj [ 1 ] ; _rtXdot -> ifcdyywemj [ 0 ] += rtP .
Dp22_B * rtB . lmdobn5aep [ 1 ] ; _rtXdot -> es40z54msj [ 0 ] += rtP . Dp24_A
[ 0 ] * rtX . es40z54msj [ 0 ] ; _rtXdot -> es40z54msj [ 0 ] += rtP . Dp24_A
[ 1 ] * rtX . es40z54msj [ 1 ] ; _rtXdot -> es40z54msj [ 0 ] += rtP . Dp24_A
[ 2 ] * rtX . es40z54msj [ 2 ] ; _rtXdot -> es40z54msj [ 1 ] += rtP . Dp24_A
[ 3 ] * rtX . es40z54msj [ 0 ] ; _rtXdot -> es40z54msj [ 2 ] += rtP . Dp24_A
[ 4 ] * rtX . es40z54msj [ 1 ] ; _rtXdot -> es40z54msj [ 0 ] += rtP . Dp24_B
* rtB . lmdobn5aep [ 3 ] ; _rtXdot -> iqmcpbftvp [ 0 ] += rtP . Dp26_A [ 0 ]
* rtX . iqmcpbftvp [ 0 ] ; _rtXdot -> iqmcpbftvp [ 0 ] += rtP . Dp26_A [ 1 ]
* rtX . iqmcpbftvp [ 1 ] ; _rtXdot -> iqmcpbftvp [ 0 ] += rtP . Dp26_A [ 2 ]
* rtX . iqmcpbftvp [ 2 ] ; _rtXdot -> iqmcpbftvp [ 1 ] += rtP . Dp26_A [ 3 ]
* rtX . iqmcpbftvp [ 0 ] ; _rtXdot -> iqmcpbftvp [ 2 ] += rtP . Dp26_A [ 4 ]
* rtX . iqmcpbftvp [ 1 ] ; _rtXdot -> iqmcpbftvp [ 0 ] += rtP . Dp26_B * rtB
. lmdobn5aep [ 5 ] ; _rtXdot -> nfkzrq1gig = 0.0 ; _rtXdot -> edhm3foaf3 [ 0
] = 0.0 ; _rtXdot -> edhm3foaf3 [ 1 ] = 0.0 ; _rtXdot -> edhm3foaf3 [ 2 ] =
0.0 ; _rtXdot -> edhm3foaf3 [ 0 ] += rtP . Dp33_A [ 0 ] * rtX . edhm3foaf3 [
0 ] ; _rtXdot -> edhm3foaf3 [ 0 ] += rtP . Dp33_A [ 1 ] * rtX . edhm3foaf3 [
1 ] ; _rtXdot -> edhm3foaf3 [ 0 ] += rtP . Dp33_A [ 2 ] * rtX . edhm3foaf3 [
2 ] ; _rtXdot -> edhm3foaf3 [ 1 ] += rtP . Dp33_A [ 3 ] * rtX . edhm3foaf3 [
0 ] ; _rtXdot -> edhm3foaf3 [ 2 ] += rtP . Dp33_A [ 4 ] * rtX . edhm3foaf3 [
1 ] ; _rtXdot -> edhm3foaf3 [ 0 ] += rtP . Dp33_B * rtB . lmdobn5aep [ 2 ] ;
_rtXdot -> iw2jmng4cz [ 0 ] = 0.0 ; _rtXdot -> iw2jmng4cz [ 1 ] = 0.0 ;
_rtXdot -> iw2jmng4cz [ 2 ] = 0.0 ; _rtXdot -> iw2jmng4cz [ 3 ] = 0.0 ;
_rtXdot -> iw2jmng4cz [ 0 ] += rtP . Dp35_A [ 0 ] * rtX . iw2jmng4cz [ 0 ] ;
_rtXdot -> iw2jmng4cz [ 0 ] += rtP . Dp35_A [ 1 ] * rtX . iw2jmng4cz [ 1 ] ;
_rtXdot -> iw2jmng4cz [ 0 ] += rtP . Dp35_A [ 2 ] * rtX . iw2jmng4cz [ 2 ] ;
_rtXdot -> iw2jmng4cz [ 0 ] += rtP . Dp35_A [ 3 ] * rtX . iw2jmng4cz [ 3 ] ;
_rtXdot -> iw2jmng4cz [ 1 ] += rtP . Dp35_A [ 4 ] * rtX . iw2jmng4cz [ 0 ] ;
_rtXdot -> iw2jmng4cz [ 2 ] += rtP . Dp35_A [ 5 ] * rtX . iw2jmng4cz [ 1 ] ;
_rtXdot -> iw2jmng4cz [ 3 ] += rtP . Dp35_A [ 6 ] * rtX . iw2jmng4cz [ 2 ] ;
_rtXdot -> iw2jmng4cz [ 0 ] += rtP . Dp35_B * rtB . lmdobn5aep [ 4 ] ;
_rtXdot -> ad2gbmw2vr [ 0 ] = 0.0 ; _rtXdot -> ad2gbmw2vr [ 1 ] = 0.0 ;
_rtXdot -> ad2gbmw2vr [ 2 ] = 0.0 ; _rtXdot -> ad2gbmw2vr [ 0 ] += rtP .
Dp42_A [ 0 ] * rtX . ad2gbmw2vr [ 0 ] ; _rtXdot -> ad2gbmw2vr [ 0 ] += rtP .
Dp42_A [ 1 ] * rtX . ad2gbmw2vr [ 1 ] ; _rtXdot -> ad2gbmw2vr [ 0 ] += rtP .
Dp42_A [ 2 ] * rtX . ad2gbmw2vr [ 2 ] ; _rtXdot -> ad2gbmw2vr [ 1 ] += rtP .
Dp42_A [ 3 ] * rtX . ad2gbmw2vr [ 0 ] ; _rtXdot -> ad2gbmw2vr [ 2 ] += rtP .
Dp42_A [ 4 ] * rtX . ad2gbmw2vr [ 1 ] ; _rtXdot -> ad2gbmw2vr [ 0 ] += rtP .
Dp42_B * rtB . lmdobn5aep [ 1 ] ; _rtXdot -> mutv5jqun2 [ 0 ] = 0.0 ; _rtXdot
-> mutv5jqun2 [ 1 ] = 0.0 ; _rtXdot -> mutv5jqun2 [ 2 ] = 0.0 ; _rtXdot ->
mutv5jqun2 [ 3 ] = 0.0 ; _rtXdot -> mutv5jqun2 [ 0 ] += rtP . Dp44_A [ 0 ] *
rtX . mutv5jqun2 [ 0 ] ; _rtXdot -> mutv5jqun2 [ 0 ] += rtP . Dp44_A [ 1 ] *
rtX . mutv5jqun2 [ 1 ] ; _rtXdot -> mutv5jqun2 [ 0 ] += rtP . Dp44_A [ 2 ] *
rtX . mutv5jqun2 [ 2 ] ; _rtXdot -> mutv5jqun2 [ 0 ] += rtP . Dp44_A [ 3 ] *
rtX . mutv5jqun2 [ 3 ] ; _rtXdot -> mutv5jqun2 [ 1 ] += rtP . Dp44_A [ 4 ] *
rtX . mutv5jqun2 [ 0 ] ; _rtXdot -> mutv5jqun2 [ 2 ] += rtP . Dp44_A [ 5 ] *
rtX . mutv5jqun2 [ 1 ] ; _rtXdot -> mutv5jqun2 [ 3 ] += rtP . Dp44_A [ 6 ] *
rtX . mutv5jqun2 [ 2 ] ; _rtXdot -> mutv5jqun2 [ 0 ] += rtP . Dp44_B * rtB .
lmdobn5aep [ 3 ] ; _rtXdot -> gbl4eoeduk [ 0 ] = 0.0 ; _rtXdot -> gbl4eoeduk
[ 1 ] = 0.0 ; _rtXdot -> gbl4eoeduk [ 2 ] = 0.0 ; _rtXdot -> gbl4eoeduk [ 0 ]
+= rtP . Dp46_A [ 0 ] * rtX . gbl4eoeduk [ 0 ] ; _rtXdot -> gbl4eoeduk [ 0 ]
+= rtP . Dp46_A [ 1 ] * rtX . gbl4eoeduk [ 1 ] ; _rtXdot -> gbl4eoeduk [ 0 ]
+= rtP . Dp46_A [ 2 ] * rtX . gbl4eoeduk [ 2 ] ; _rtXdot -> gbl4eoeduk [ 1 ]
+= rtP . Dp46_A [ 3 ] * rtX . gbl4eoeduk [ 0 ] ; _rtXdot -> gbl4eoeduk [ 2 ]
+= rtP . Dp46_A [ 4 ] * rtX . gbl4eoeduk [ 1 ] ; _rtXdot -> gbl4eoeduk [ 0 ]
+= rtP . Dp46_B * rtB . lmdobn5aep [ 5 ] ; _rtXdot -> l2v51ndnpb = 0.0 ;
_rtXdot -> hlzbbhwjfh [ 0 ] = 0.0 ; _rtXdot -> hlzbbhwjfh [ 1 ] = 0.0 ;
_rtXdot -> hlzbbhwjfh [ 2 ] = 0.0 ; _rtXdot -> hlzbbhwjfh [ 3 ] = 0.0 ;
_rtXdot -> hlzbbhwjfh [ 0 ] += rtP . Dp53_A [ 0 ] * rtX . hlzbbhwjfh [ 0 ] ;
_rtXdot -> hlzbbhwjfh [ 0 ] += rtP . Dp53_A [ 1 ] * rtX . hlzbbhwjfh [ 1 ] ;
_rtXdot -> hlzbbhwjfh [ 0 ] += rtP . Dp53_A [ 2 ] * rtX . hlzbbhwjfh [ 2 ] ;
_rtXdot -> hlzbbhwjfh [ 0 ] += rtP . Dp53_A [ 3 ] * rtX . hlzbbhwjfh [ 3 ] ;
_rtXdot -> hlzbbhwjfh [ 1 ] += rtP . Dp53_A [ 4 ] * rtX . hlzbbhwjfh [ 0 ] ;
_rtXdot -> hlzbbhwjfh [ 2 ] += rtP . Dp53_A [ 5 ] * rtX . hlzbbhwjfh [ 1 ] ;
_rtXdot -> hlzbbhwjfh [ 3 ] += rtP . Dp53_A [ 6 ] * rtX . hlzbbhwjfh [ 2 ] ;
_rtXdot -> hlzbbhwjfh [ 0 ] += rtP . Dp53_B * rtB . lmdobn5aep [ 2 ] ;
_rtXdot -> kjjqbhtfg1 [ 0 ] = 0.0 ; _rtXdot -> hvxjp4vkgi [ 0 ] = 0.0 ;
_rtXdot -> ho3iy0oyl1 [ 0 ] = 0.0 ; _rtXdot -> hkbbfnxh4k [ 0 ] = 0.0 ;
_rtXdot -> kjjqbhtfg1 [ 1 ] = 0.0 ; _rtXdot -> hvxjp4vkgi [ 1 ] = 0.0 ;
_rtXdot -> ho3iy0oyl1 [ 1 ] = 0.0 ; _rtXdot -> hkbbfnxh4k [ 1 ] = 0.0 ;
_rtXdot -> kjjqbhtfg1 [ 2 ] = 0.0 ; _rtXdot -> hvxjp4vkgi [ 2 ] = 0.0 ;
_rtXdot -> ho3iy0oyl1 [ 2 ] = 0.0 ; _rtXdot -> hkbbfnxh4k [ 2 ] = 0.0 ;
_rtXdot -> kjjqbhtfg1 [ 0 ] += rtP . Dp55_A [ 0 ] * rtX . kjjqbhtfg1 [ 0 ] ;
_rtXdot -> kjjqbhtfg1 [ 0 ] += rtP . Dp55_A [ 1 ] * rtX . kjjqbhtfg1 [ 1 ] ;
_rtXdot -> kjjqbhtfg1 [ 0 ] += rtP . Dp55_A [ 2 ] * rtX . kjjqbhtfg1 [ 2 ] ;
_rtXdot -> kjjqbhtfg1 [ 1 ] += rtP . Dp55_A [ 3 ] * rtX . kjjqbhtfg1 [ 0 ] ;
_rtXdot -> kjjqbhtfg1 [ 2 ] += rtP . Dp55_A [ 4 ] * rtX . kjjqbhtfg1 [ 1 ] ;
_rtXdot -> kjjqbhtfg1 [ 0 ] += rtP . Dp55_B * rtB . lmdobn5aep [ 4 ] ;
_rtXdot -> hvxjp4vkgi [ 0 ] += rtP . Dp62_A [ 0 ] * rtX . hvxjp4vkgi [ 0 ] ;
_rtXdot -> hvxjp4vkgi [ 0 ] += rtP . Dp62_A [ 1 ] * rtX . hvxjp4vkgi [ 1 ] ;
_rtXdot -> hvxjp4vkgi [ 0 ] += rtP . Dp62_A [ 2 ] * rtX . hvxjp4vkgi [ 2 ] ;
_rtXdot -> hvxjp4vkgi [ 1 ] += rtP . Dp62_A [ 3 ] * rtX . hvxjp4vkgi [ 0 ] ;
_rtXdot -> hvxjp4vkgi [ 2 ] += rtP . Dp62_A [ 4 ] * rtX . hvxjp4vkgi [ 1 ] ;
_rtXdot -> hvxjp4vkgi [ 0 ] += rtP . Dp62_B * rtB . lmdobn5aep [ 1 ] ;
_rtXdot -> ho3iy0oyl1 [ 0 ] += rtP . Dp64_A [ 0 ] * rtX . ho3iy0oyl1 [ 0 ] ;
_rtXdot -> ho3iy0oyl1 [ 0 ] += rtP . Dp64_A [ 1 ] * rtX . ho3iy0oyl1 [ 1 ] ;
_rtXdot -> ho3iy0oyl1 [ 0 ] += rtP . Dp64_A [ 2 ] * rtX . ho3iy0oyl1 [ 2 ] ;
_rtXdot -> ho3iy0oyl1 [ 1 ] += rtP . Dp64_A [ 3 ] * rtX . ho3iy0oyl1 [ 0 ] ;
_rtXdot -> ho3iy0oyl1 [ 2 ] += rtP . Dp64_A [ 4 ] * rtX . ho3iy0oyl1 [ 1 ] ;
_rtXdot -> ho3iy0oyl1 [ 0 ] += rtP . Dp64_B * rtB . lmdobn5aep [ 3 ] ;
_rtXdot -> hkbbfnxh4k [ 0 ] += rtP . Dp66_A [ 0 ] * rtX . hkbbfnxh4k [ 0 ] ;
_rtXdot -> hkbbfnxh4k [ 0 ] += rtP . Dp66_A [ 1 ] * rtX . hkbbfnxh4k [ 1 ] ;
_rtXdot -> hkbbfnxh4k [ 0 ] += rtP . Dp66_A [ 2 ] * rtX . hkbbfnxh4k [ 2 ] ;
_rtXdot -> hkbbfnxh4k [ 1 ] += rtP . Dp66_A [ 3 ] * rtX . hkbbfnxh4k [ 0 ] ;
_rtXdot -> hkbbfnxh4k [ 2 ] += rtP . Dp66_A [ 4 ] * rtX . hkbbfnxh4k [ 1 ] ;
_rtXdot -> hkbbfnxh4k [ 0 ] += rtP . Dp66_B * rtB . lmdobn5aep [ 5 ] ; } void
MdlProjection ( void ) { } void MdlZeroCrossings ( void ) { ZCV * _rtZCSV ;
_rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; nv4ywpeauv ( rtB
. lmdobn5aep , & _rtZCSV -> bdwcdarwenp ) ; _rtZCSV -> chuyhum0fk = ssGetT (
rtS ) - rtP . beta_c_start ; } void MdlTerminate ( void ) { { if ( rtDW .
pthpifwmvx . AQHandles ) { sdiTerminateStreaming ( & rtDW . pthpifwmvx .
AQHandles ) ; } if ( rtDW . pthpifwmvx . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . pthpifwmvx . SlioLTF ) ; } } { if ( rtDW
. nd0y5uiq53 . AQHandles ) { sdiTerminateStreaming ( & rtDW . nd0y5uiq53 .
AQHandles ) ; } if ( rtDW . nd0y5uiq53 . SlioLTF ) {
rtwDestructAccessorPointer ( rtDW . nd0y5uiq53 . SlioLTF ) ; } } if (
rt_slioCatalogue ( ) != ( NULL ) ) { void * * slioCatalogueAddr =
rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 61 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
3 ) ; ssSetNumBlocks ( rtS , 137 ) ; ssSetNumBlockIO ( rtS , 59 ) ;
ssSetNumBlockParams ( rtS , 315 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.1 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 1101951116U ) ;
ssSetChecksumVal ( rtS , 1 , 1049419619U ) ; ssSetChecksumVal ( rtS , 2 ,
1328342996U ) ; ssSetChecksumVal ( rtS , 3 , 3503844675U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
part1_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS , true
) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2
) ; ssSetModelName ( rtS , "part1" ) ; ssSetPath ( rtS , "part1" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 100.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 6 , 6 , 3 , 1 , 1 , 3 , 3 , 3 , 1 , 3 , 4 , 3 ,
4 , 3 , 1 , 4 , 3 , 3 , 3 , 3 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 6 , 6 , 3 , 1 , 1 , 3 , 3 , 3 , 1 , 3 , 4 ,
3 , 4 , 3 , 1 , 4 , 3 , 3 , 3 , 3 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "DSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = { "part1/Supply Ship/Integrator1 " ,
"part1/Supply Ship/Integrator2" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(1,1)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(1,3)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(1,5)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(2,2)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(2,4)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(2,6)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(3,1)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(3,3)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(3,5)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(4,2)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(4,4)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(4,6)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(5,1)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(5,3)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(5,5)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(6,2)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(6,4)" ,
"part1/Supply Ship/Fluid memory effetcs/Dp(6,6)" ,
"part1/Current (North - East)/Discrete-Time\nIntegrator" } ; static const
char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "DSTATE" } ;
static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 21 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 21 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . cmbsppmgxt [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . fouxeyz2rv [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . o5an0su3zl [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . flavwhfri3 ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . iep0nbptkv ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . ifcdyywemj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . es40z54msj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . iqmcpbftvp [ 0 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . nfkzrq1gig ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . edhm3foaf3 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . iw2jmng4cz [ 0 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . ad2gbmw2vr [ 0 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . mutv5jqun2 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . gbl4eoeduk [ 0 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . l2v51ndnpb ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . hlzbbhwjfh [ 0 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . kjjqbhtfg1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . hvxjp4vkgi [ 0 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . ho3iy0oyl1 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . hkbbfnxh4k [ 0 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtDW . mww113xbqz ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 61 ] ;
static real_T absTol [ 61 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ;
static uint8_T absTolControl [ 61 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 61 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 61 ] ; static uint8_T zcAttributes [ 2 ] = {
( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL ) } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 2 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
bdwcdarwenp . dgphkvmqeh ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char *
) ( & rtB . bdwcdarwenp . hdbgbqxayx ) , ( NULL ) } } ; { int i ; for ( i = 0
; i < 61 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.1 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
2 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 2 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 2 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 1101951116U ) ; ssSetChecksumVal ( rtS , 1 ,
1049419619U ) ; ssSetChecksumVal ( rtS , 2 , 1328342996U ) ; ssSetChecksumVal
( rtS , 3 , 3503844675U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 5 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = ( sysRanDType * ) &
rtDW . bdwcdarwenp . m0e0aqbsup ; systemRan [ 2 ] = ( sysRanDType * ) & rtDW
. bdwcdarwenp . gb150kixey ; systemRan [ 3 ] = ( sysRanDType * ) & rtDW .
bdwcdarwenp . owtswlfij5 ; systemRan [ 4 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
