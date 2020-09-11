  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 92;
      section.data(92)  = dumData; %prealloc
      
	  ;% rtP.G
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.R_lin
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 9;
	
	  ;% rtP.V_c
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 18;
	
	  ;% rtP.beta_c_init
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 19;
	
	  ;% rtP.beta_c_slope
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 20;
	
	  ;% rtP.eta0
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 21;
	
	  ;% rtP.eta_d
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 27;
	
	  ;% rtP.nu0
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 30;
	
	  ;% rtP.SupplyShip_Axc
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 36;
	
	  ;% rtP.SupplyShip_Ayc
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 37;
	
	  ;% rtP.SupplyShip_Bv
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 38;
	
	  ;% rtP.SupplyShip_CX
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 74;
	
	  ;% rtP.SupplyShip_CY_2D
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 75;
	
	  ;% rtP.Crossflowdragandsurgeresistance_Lpp
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 76;
	
	  ;% rtP.Crossflowdragandsurgeresistance_N
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 77;
	
	  ;% rtP.SupplyShip_rho
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 78;
	
	  ;% rtP.BandLimitedWhiteNoise1_seed
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 79;
	
	  ;% rtP.beta_c_start
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 80;
	
	  ;% rtP.Dp11_A
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 81;
	
	  ;% rtP.Dp11_B
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 86;
	
	  ;% rtP.Dp11_C
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 87;
	
	  ;% rtP.Dp11_InitialCondition
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 89;
	
	  ;% rtP.Dp13_InitialCondition
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 90;
	
	  ;% rtP.Dp15_InitialCondition
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 91;
	
	  ;% rtP.Dp22_A
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 92;
	
	  ;% rtP.Dp22_B
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 97;
	
	  ;% rtP.Dp22_C
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 98;
	
	  ;% rtP.Dp22_InitialCondition
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 100;
	
	  ;% rtP.Dp24_A
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 101;
	
	  ;% rtP.Dp24_B
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 106;
	
	  ;% rtP.Dp24_C
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 107;
	
	  ;% rtP.Dp24_InitialCondition
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 109;
	
	  ;% rtP.Dp26_A
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 110;
	
	  ;% rtP.Dp26_B
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 115;
	
	  ;% rtP.Dp26_C
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 116;
	
	  ;% rtP.Dp26_InitialCondition
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 118;
	
	  ;% rtP.Dp31_InitialCondition
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 119;
	
	  ;% rtP.Dp33_A
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 120;
	
	  ;% rtP.Dp33_B
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 125;
	
	  ;% rtP.Dp33_C
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 126;
	
	  ;% rtP.Dp33_InitialCondition
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 128;
	
	  ;% rtP.Dp35_A
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 129;
	
	  ;% rtP.Dp35_B
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 136;
	
	  ;% rtP.Dp35_C
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 137;
	
	  ;% rtP.Dp35_InitialCondition
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 140;
	
	  ;% rtP.Dp42_A
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 141;
	
	  ;% rtP.Dp42_B
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 146;
	
	  ;% rtP.Dp42_C
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 147;
	
	  ;% rtP.Dp42_InitialCondition
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 149;
	
	  ;% rtP.Dp44_A
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 150;
	
	  ;% rtP.Dp44_B
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 157;
	
	  ;% rtP.Dp44_C
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 158;
	
	  ;% rtP.Dp44_InitialCondition
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 161;
	
	  ;% rtP.Dp46_A
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 162;
	
	  ;% rtP.Dp46_B
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 167;
	
	  ;% rtP.Dp46_C
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 168;
	
	  ;% rtP.Dp46_InitialCondition
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 170;
	
	  ;% rtP.Dp51_InitialCondition
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 171;
	
	  ;% rtP.Dp53_A
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 172;
	
	  ;% rtP.Dp53_B
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 179;
	
	  ;% rtP.Dp53_C
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 180;
	
	  ;% rtP.Dp53_InitialCondition
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 183;
	
	  ;% rtP.Dp55_A
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 184;
	
	  ;% rtP.Dp55_B
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 189;
	
	  ;% rtP.Dp55_C
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 190;
	
	  ;% rtP.Dp55_InitialCondition
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 192;
	
	  ;% rtP.Dp62_A
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 193;
	
	  ;% rtP.Dp62_B
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 198;
	
	  ;% rtP.Dp62_C
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 199;
	
	  ;% rtP.Dp62_InitialCondition
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 201;
	
	  ;% rtP.Dp64_A
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 202;
	
	  ;% rtP.Dp64_B
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 207;
	
	  ;% rtP.Dp64_C
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 208;
	
	  ;% rtP.Dp64_InitialCondition
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 210;
	
	  ;% rtP.Dp66_A
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 211;
	
	  ;% rtP.Dp66_B
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 216;
	
	  ;% rtP.Dp66_C
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 217;
	
	  ;% rtP.Dp66_InitialCondition
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 219;
	
	  ;% rtP.Step_Y0
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 220;
	
	  ;% rtP.Gain_Gain
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 221;
	
	  ;% rtP.DiscreteTimeIntegrator_gainval
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 222;
	
	  ;% rtP.DiscreteTimeIntegrator_IC
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 223;
	
	  ;% rtP.WhiteNoise_Mean
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 224;
	
	  ;% rtP.WhiteNoise_StdDev
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 225;
	
	  ;% rtP.Output_Gain
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 226;
	
	  ;% rtP.Constant_Value
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 227;
	
	  ;% rtP.Constant_Value_fw51n42egt
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 228;
	
	  ;% rtP.Inversinertiamatrix_Value
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 229;
	
	  ;% rtP.Springstiffness_Value
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 265;
	
	  ;% rtP.zero_Value
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 301;
	
	  ;% rtP.zero_Value_o3iat31z52
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 302;
	
	  ;% rtP.mu_Value
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 303;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% rtP.bdwcdarwenp.Gain_Gain
	  section.data(1).logicalSrcIdx = 92;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.bdwcdarwenp.sum1_Y0
	  section.data(2).logicalSrcIdx = 93;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.bdwcdarwenp.sum2_Y0
	  section.data(3).logicalSrcIdx = 94;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.bdwcdarwenp.memory1_InitialCondition
	  section.data(4).logicalSrcIdx = 95;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.bdwcdarwenp.memory2_InitialCondition
	  section.data(5).logicalSrcIdx = 96;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.bdwcdarwenp.constant_Value
	  section.data(6).logicalSrcIdx = 97;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtP.bdwcdarwenp.Gain_Gain_o3s3j5h3ft
	  section.data(7).logicalSrcIdx = 98;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtP.bdwcdarwenp.Gain1_Gain
	  section.data(8).logicalSrcIdx = 99;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtP.bdwcdarwenp.Gain3_Gain
	  section.data(9).logicalSrcIdx = 100;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtP.bdwcdarwenp.constant_Value_n0uspjx54b
	  section.data(10).logicalSrcIdx = 101;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtP.bdwcdarwenp.Gain2_Gain
	  section.data(11).logicalSrcIdx = 102;
	  section.data(11).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 49;
      section.data(49)  = dumData; %prealloc
      
	  ;% rtB.eyfdy2t5x1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.l2iqrs2nbh
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
	  ;% rtB.hq4v1e1yae
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 12;
	
	  ;% rtB.pcs2pp45fo
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 15;
	
	  ;% rtB.fa2stxbhb0
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 18;
	
	  ;% rtB.o3jaks1eee
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 21;
	
	  ;% rtB.grbtklkxda
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 30;
	
	  ;% rtB.o10bsyiomx
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 33;
	
	  ;% rtB.izv5omkblp
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 42;
	
	  ;% rtB.lmdobn5aep
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 45;
	
	  ;% rtB.fw0vyzudba
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 51;
	
	  ;% rtB.cyc13fqmmo
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 57;
	
	  ;% rtB.moxmiqckfn
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 58;
	
	  ;% rtB.dbl53vnwnq
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 59;
	
	  ;% rtB.pmub5rdfqu
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 60;
	
	  ;% rtB.ntop2pii3x
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 61;
	
	  ;% rtB.gcwyfffljw
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 62;
	
	  ;% rtB.jc15bf2b1r
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 63;
	
	  ;% rtB.lmhr1f3hhk
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 64;
	
	  ;% rtB.m3z5343lqq
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 65;
	
	  ;% rtB.dw0khhkd0f
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 66;
	
	  ;% rtB.avmbzarjiw
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 67;
	
	  ;% rtB.dl3utd3has
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 68;
	
	  ;% rtB.a2jiqc4vey
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 69;
	
	  ;% rtB.bjfbpes1uj
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 70;
	
	  ;% rtB.bvkkzlqdoi
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 71;
	
	  ;% rtB.jpfuhtxja2
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 72;
	
	  ;% rtB.aln2uzt2sr
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 73;
	
	  ;% rtB.ni43zkggls
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 74;
	
	  ;% rtB.oxozd1afbi
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 75;
	
	  ;% rtB.p2vsafjmwz
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 76;
	
	  ;% rtB.pebitregos
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 77;
	
	  ;% rtB.ezdbxqhlsl
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 78;
	
	  ;% rtB.nkmpf1n313
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 79;
	
	  ;% rtB.fbffvcuqox
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 80;
	
	  ;% rtB.be1kifopti
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 81;
	
	  ;% rtB.nhei3mcnmc
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 87;
	
	  ;% rtB.bdpfaxqtv2
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 93;
	
	  ;% rtB.plwkdpaywv
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 99;
	
	  ;% rtB.mziecawzxm
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 105;
	
	  ;% rtB.dw3elub15t
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 111;
	
	  ;% rtB.dspxnfnwii
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 117;
	
	  ;% rtB.l5roy5rkzb
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 123;
	
	  ;% rtB.h3ui2oob11
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 129;
	
	  ;% rtB.hmw44ztk02
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 130;
	
	  ;% rtB.csvpktcy51
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 131;
	
	  ;% rtB.oph1t2ks2g
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 132;
	
	  ;% rtB.caw3xk1bjs
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 133;
	
	  ;% rtB.jo550mlvio
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 134;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% rtB.bdwcdarwenp.bourn4xv5q
	  section.data(1).logicalSrcIdx = 49;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.bdwcdarwenp.d3tiskdffc
	  section.data(2).logicalSrcIdx = 50;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.bdwcdarwenp.duhk1jh2i1
	  section.data(3).logicalSrcIdx = 51;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.bdwcdarwenp.mxrux4ihsx
	  section.data(4).logicalSrcIdx = 52;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.bdwcdarwenp.hdbgbqxayx
	  section.data(5).logicalSrcIdx = 53;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.bdwcdarwenp.dgphkvmqeh
	  section.data(6).logicalSrcIdx = 54;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.bdwcdarwenp.j20fgtacge
	  section.data(7).logicalSrcIdx = 55;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.bdwcdarwenp.p1cu1ax1ff
	  section.data(8).logicalSrcIdx = 56;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.bdwcdarwenp.ez31cs5rtz
	  section.data(9).logicalSrcIdx = 57;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.bdwcdarwenp.fknvz1n3iu
	  section.data(10).logicalSrcIdx = 58;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.mww113xbqz
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.d50w50b4ui
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.pthpifwmvx.AQHandles
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.nd0y5uiq53.AQHandles
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ijtjgrpnih.LoggedData
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.mnc0lo1s5x
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.a5sfck4gtw
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.bdwcdarwenp.phb310slul
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.bdwcdarwenp.n2ku52vvqx
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.bdwcdarwenp.hbyemn4gsg
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.bdwcdarwenp.owtswlfij5
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.bdwcdarwenp.bz4vnsg0h3
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.bdwcdarwenp.gb150kixey
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.bdwcdarwenp.m0e0aqbsup
	  section.data(4).logicalSrcIdx = 13;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1101951116;
  targMap.checksum1 = 1049419619;
  targMap.checksum2 = 1328342996;
  targMap.checksum3 = 3503844675;

