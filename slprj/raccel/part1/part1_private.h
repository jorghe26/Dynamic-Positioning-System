#ifndef RTW_HEADER_part1_private_h_
#define RTW_HEADER_part1_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "part1.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
extern real_T rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern real_T
rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern void pnuqtei0qb (
bd1yohmayu * localB , dvdyadl50v * localDW , orlbr1ek4o * localP ) ; extern
void dpii4cggnx ( dvdyadl50v * localDW ) ; extern void nv4ywpeauv ( const
real_T a42ahzfzxv [ 6 ] , ltnqgn3c4v * localZCSV ) ; extern void bdwcdarwen (
SimStruct * rtS_i , const real_T a42ahzfzxv [ 6 ] , bd1yohmayu * localB ,
dvdyadl50v * localDW , orlbr1ek4o * localP , real_T rtp_Lpp , real_T rtp_CD ,
real_T rtp_N , real_T rtp_rho_w , real_T rtp_Ay ) ; extern void
bdwcdarwenTID3 ( bd1yohmayu * localB , orlbr1ek4o * localP , real_T rtp_Lpp ,
real_T rtp_N , real_T rtp_Cx , real_T rtp_Ax , real_T rtp_rho_w ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
