#include "part1.h"
#include "part1_private.h"
P rtP = { { 10000.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 0.0 , 0.0 , 0.0 , 10000.0 }
, { 1.0 , 0.0 , 0.0 , - 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 1.0 } , 0.5 , - 90.0 ,
- 0.09 , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , { 10.0 , 100.0 , 0.0 } , {
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 103.68000540000001 , 447.12001620000007
, { 264860.98251977918 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 881642.3 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.6199161855727741E+7 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 3.3774376E+8 } , 1.0 , 0.69954741847648816 ,
82.800003 , 20.0 , 1025.0 , 23361.0 , 0.0 , { - 2.803534112044181 , -
2.4913370604226879 , - 1.3591165955404703 , 1.0 , 1.0 } , 1.0 , {
2.4301522274724822E+6 , 1.1811705853614281E+6 } , 0.0 , 0.0 , 0.0 , { -
2.8035341120461497 , - 2.4913370604244549 , - 1.3591165955417825 , 1.0 , 1.0
} , 1.0 , { 8.0892435676888572E+6 , 3.9317605094712768E+6 } , 0.0 , { -
2.1279533753552129 , - 1.6763465497833379 , - 0.79735717403571438 , 1.0 , 1.0
} , 1.0 , { 7.213247755334951E+6 , 3.1704922230335996E+6 } , 0.0 , { -
2.3909846976783733 , - 2.3765923942783789 , - 1.3929645739177876 , 1.0 , 1.0
} , 1.0 , { 4.0515106770565078E+7 , 2.10803106478689E+7 } , 0.0 , 0.0 , { -
1.6649830467089266 , - 0.79395447827940269 , - 0.068806034473705688 , 1.0 ,
1.0 } , 1.0 , { 9.7978784292570371E+6 , 3.3834015103671271E+6 } , 0.0 , { -
2.5444698845414546 , - 2.9972928612877139 , - 0.85506413219364419 , -
0.05167249379482422 , 1.0 , 1.0 , 1.0 } , 1.0 , { 1.2603027637923893E+8 ,
1.3605149348914912E+8 , 1.88375526617956E+7 } , 0.0 , { - 2.1279533753552129
, - 1.6763465497833379 , - 0.79735717403571438 , 1.0 , 1.0 } , 1.0 , {
7.213247755334951E+6 , 3.1704922230335996E+6 } , 0.0 , { - 4.2947228567989084
, - 5.3684379233323156 , - 3.3787066309739484 , - 0.797806883048279 , 1.0 ,
1.0 , 1.0 } , 1.0 , { 9.8038745552047551E+7 , 7.6971319015268E+7 ,
1.8355164689501107E+7 } , 0.0 , { - 3.0157554932713029 , - 3.1993548727070666
, - 1.847293741867754 , 1.0 , 1.0 } , 1.0 , { - 2.3109324277060261E+8 , -
1.2490270870237756E+8 } , 0.0 , 0.0 , { - 2.5444698845414546 , -
2.9972928612877139 , - 0.85506413219364419 , - 0.05167249379482422 , 1.0 ,
1.0 , 1.0 } , 1.0 , { 1.2603027637923893E+8 , 1.3605149348914912E+8 ,
1.88375526617956E+7 } , 0.0 , { - 2.3149486690793903 , - 1.0594346623877582 ,
- 0.087381523148481952 , 1.0 , 1.0 } , 1.0 , { 7.4886705801147175E+9 ,
2.0307186968218789E+9 } , 0.0 , { - 2.3909846976783733 , - 2.3765923942783789
, - 1.3929645739177876 , 1.0 , 1.0 } , 1.0 , { 4.0515106770565078E+7 ,
2.10803106478689E+7 } , 0.0 , { - 3.0157554932713029 , - 3.1993548727070666 ,
- 1.847293741867754 , 1.0 , 1.0 } , 1.0 , { - 2.3109324277060261E+8 , -
1.2490270870237756E+8 } , 0.0 , { - 2.7410628694457428 , - 2.7294454967237516
, - 1.5434927863568197 , 1.0 , 1.0 } , 1.0 , { 3.125812649645545E+9 ,
1.6145357956955855E+9 } , 0.0 , 0.0 , 0.017453292519943295 , 0.1 , 0.0 , 0.0
, 1.0 , 0.070710678118654752 , 1.0 , 0.0 , { 1.4690053746876147E-7 , 0.0 , -
4.8180009592214244E-10 , 0.0 , 1.8427800367678206E-10 , 0.0 , 0.0 ,
1.3291241933627674E-7 , 0.0 , - 4.152391057368617E-9 , 0.0 ,
2.2461185612640643E-11 , - 4.8180009592214244E-10 , 0.0 ,
5.755014152022931E-8 , 0.0 , - 3.9714920529310617E-10 , 0.0 , 0.0 , -
4.152391057368617E-9 , 0.0 , 2.8964882301736963E-9 , 0.0 ,
4.8718802883020507E-11 , 1.8427800367678206E-10 , 0.0 , -
3.9714920529310617E-10 , 0.0 , 1.5190088863133132E-10 , 0.0 , 0.0 ,
2.2461185612640643E-11 , 0.0 , 4.8718802883020507E-11 , 0.0 ,
2.8099979955902821E-10 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.3910359E+7 , 0.0 , 7.0729128E+7 , 0.0 ,
0.0 , 0.0 , 0.0 , 1.3379735E+8 , 0.0 , 0.0 , 0.0 , 0.0 , 7.0729128E+7 , 0.0 ,
6.467778E+9 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.01 ,
{ 0.5 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , - 0.5 , - 0.5 , - 1.0 , 1.0 , 0.5 } } ;