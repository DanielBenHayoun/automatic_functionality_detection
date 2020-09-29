
/* WARNING: Could not reconcile some variable overlaps */

undefined8 ****
mbsstr(undefined8 ****param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4,
      undefined8 ****param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 ****ppppuVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  long lVar14;
  byte bVar15;
  uint uVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined *puVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****unaff_RBP;
  char *pcVar20;
  undefined1 *unaff_R13;
  undefined8 ****unaff_R14;
  undefined4 *unaff_R15;
  undefined *puVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined8 ****ppppuStack4800;
  ulong uStack4792;
  undefined *puStack4784;
  ulong uStack4776;
  ulong uStack4768;
  undefined8 ****ppppuStack4752;
  undefined8 ****ppppuStack4744;
  undefined8 ****ppppuStack4736;
  undefined8 ****ppppuStack4728;
  undefined8 ****ppppuStack4720;
  undefined8 ****ppppuStack4712;
  undefined8 ****ppppuStack4696;
  undefined8 ****ppppuStack4688;
  undefined1 *puStack4680;
  undefined8 ****ppppuStack4672;
  undefined8 ****ppppuStack4664;
  undefined8 ****ppppuStack4656;
  undefined8 ****ppppuStack4648;
  undefined8 ****ppppuStack4640;
  undefined8 ****ppppuStack4632;
  undefined8 **appuStack4624 [513];
  long lStack520;
  undefined *puStack504;
  undefined8 ****ppppuStack496;
  undefined8 ****ppppuStack488;
  undefined1 *puStack480;
  undefined8 ****ppppuStack472;
  undefined4 *puStack464;
  undefined8 ****ppppuStack456;
  undefined8 ****ppppuStack448;
  undefined8 uStack440;
  undefined8 ****ppppuStack432;
  undefined *puStack424;
  undefined8 ****ppppuStack416;
  undefined8 ****ppppuStack400;
  undefined auStack392 [4];
  undefined8 ***pppuStack388;
  undefined uStack380;
  undefined8 ****ppppuStack376;
  undefined8 ****ppppuStack368;
  char cStack360;
  uint auStack356 [7];
  char acStack328 [4];
  undefined8 uStack324;
  char cStack316;
  undefined8 ****ppppuStack312;
  long lStack304;
  char cStack296;
  uint uStack292;
  undefined4 uStack264;
  undefined8 uStack260;
  undefined4 uStack252;
  undefined8 ****ppppuStack248;
  undefined8 ****ppppuStack240;
  undefined4 uStack232;
  uint uStack228;
  undefined8 uStack224;
  undefined auStack216 [16];
  undefined4 uStack200;
  undefined4 uStack196;
  undefined4 uStack192;
  undefined4 uStack188;
  undefined8 ****ppppuStack184;
  undefined8 ****ppppuStack176;
  undefined4 uStack168;
  uint uStack164;
  undefined4 uStack160;
  undefined4 uStack156;
  undefined4 uStack152;
  undefined4 uStack148;
  undefined4 uStack144;
  undefined4 uStack140;
  char acStack136 [12];
  undefined uStack124;
  undefined8 ****ppppuStack120;
  undefined8 ****ppppuStack112;
  char cStack104;
  uint uStack100;
  ulong uStack64;
  
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack464 = (undefined4 *)&UNK_001098e4;
  ppppuStack4656 = param_1;
  ppppuStack448 = param_2;
  uVar7 = func_0x001016d0();
  ppppuVar10 = param_1;
  if (uVar7 < 2) {
    bVar5 = *(byte *)ppppuStack448;
    unaff_R15 = (undefined4 *)(ulong)bVar5;
    if (bVar5 != 0) {
      bVar15 = *(byte *)param_1;
      if (bVar15 != 0) {
        uStack440 = &ppppuStack400;
        unaff_R13 = (undefined1 *)0x0;
        ppppuVar17 = (undefined8 ****)0x0;
        param_5 = (undefined8 ****)0x0;
        uVar7 = 1;
        unaff_RBP = ppppuStack448;
        do {
          unaff_R13 = unaff_R13 + 1;
          unaff_R14 = (undefined8 ****)((long)param_1 + 1);
          if (bVar15 == bVar5) {
            ppppuVar10 = param_1;
            if (*(char *)((long)ppppuStack448 + 1) == '\0') goto code_r0x00109a36;
            if (*(char *)unaff_R14 == '\0') break;
            ppppuVar19 = (undefined8 ****)((long)ppppuVar17 + 2);
            if (*(char *)((long)ppppuStack448 + 1) == *(char *)unaff_R14) {
              do {
                cVar2 = *(char *)((long)((long)ppppuStack448 + -(long)ppppuVar17) + (long)ppppuVar19
                                 );
                if (cVar2 == '\0') goto code_r0x00109a36;
                cVar1 = *(char *)((long)(-(long)ppppuVar17 + (long)param_1) + (long)ppppuVar19);
                if (cVar1 == '\0') goto code_r0x0010a0b0;
                ppppuVar19 = (undefined8 ****)((long)ppppuVar19 + 1);
              } while (cVar2 == cVar1);
            }
          }
          else {
            ppppuVar19 = (undefined8 ****)((long)ppppuVar17 + 1);
            if (*(char *)((long)param_1 + 1) == '\0') break;
          }
          ppppuVar17 = ppppuVar19;
          bVar15 = (undefined1 *)0x9 < unaff_R13 & (byte)uVar7;
          if ((bVar15 != 0) &&
             (uVar7 = (ulong)bVar15, (undefined8 ****)((long)unaff_R13 * 5) <= ppppuVar17)) {
            ppppuStack456 =
                 (undefined8 ****)((ulong)ppppuStack456 & 0xffffffffffffff00 | (ulong)bVar15);
            if (unaff_RBP != (undefined8 ****)0x0) {
              puStack464 = (undefined4 *)&UNK_00109985;
              lVar8 = func_0x00101770();
              unaff_RBP = (undefined8 ****)((long)unaff_RBP + lVar8);
              uVar7 = (ulong)ppppuStack456 & 0xff;
              param_5 = ppppuVar17;
              if (*(char *)unaff_RBP != '\0') goto code_r0x00109a62;
            }
            unaff_RBP = ppppuStack448;
            puStack464 = (undefined4 *)&UNK_001099aa;
            ppppuStack456 = param_5;
            uVar9 = func_0x001016e0(ppppuStack448);
            puStack464 = (undefined4 *)&UNK_001099bd;
            uVar7 = knuth_morris_pratt(unaff_R14,unaff_RBP,uVar9,uStack440);
            ppppuVar10 = ppppuStack400;
            param_5 = ppppuStack456;
            if ((char)uVar7 != '\0') goto code_r0x00109a36;
            unaff_RBP = (undefined8 ****)0x0;
            param_5 = ppppuStack456;
          }
code_r0x00109a62:
          bVar15 = *(byte *)unaff_R14;
          param_1 = unaff_R14;
        } while( true );
      }
code_r0x0010a0b0:
      ppppuVar10 = (undefined8 ****)0x0;
    }
code_r0x00109a36:
    puStack504 = (undefined *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
    if (puStack504 == (undefined *)0x0) {
      return ppppuVar10;
    }
    puStack464 = (undefined4 *)&UNK_0010a995;
    func_0x001016f0();
  }
  else {
    unaff_R13 = is_basic_table;
    uVar16 = SEXT14(*(char *)param_2);
    puStack504 = auStack392;
    auStack392[0] = 0;
    pppuStack388 = (undefined8 ***)0x0;
    uStack380 = 0;
    unaff_RBP = (undefined8 ****)&pppuStack388;
    ppppuStack376 = param_2;
    if ((*(uint *)(is_basic_table + (ulong)(uVar16 >> 5 & 7) * 4) >> (uVar16 & 0x1f) & 1) != 0) {
      ppppuStack368 = (undefined8 ****)0x1;
      cStack360 = '\x01';
      auStack356[0] = uVar16;
code_r0x00109a2b:
      uStack380 = 1;
      if (auStack356[0] != 0) {
code_r0x00109a8b:
        uStack380 = 1;
        uStack264 = uStack264 & 0xffffff00;
        unaff_R14 = (undefined8 ****)0x0;
        puStack504 = (undefined *)0x0;
        acStack328[0] = '\0';
        uStack324 = 0;
        cStack316 = '\0';
        unaff_RBP = (undefined8 ****)acStack136;
        ppppuStack312 = ppppuStack448;
        ppppuStack416 = &ppppuStack400;
        uStack260 = 0;
        uStack252 = uStack252 & 0xffffff00;
        unaff_R15 = &uStack200;
        puStack424 = (undefined *)0x0;
        uStack440 = (undefined8 ****)CONCAT71(uStack440._1_7_,1);
        ppppuStack248 = param_1;
code_r0x00109b18:
        if ((*(uint *)(is_basic_table + (ulong)(*(byte *)ppppuStack248 >> 5) * 4) >>
             ((uint)*(byte *)ppppuStack248 & 0x1f) & 1) == 0) {
          ppppuStack456 = (undefined8 ****)&uStack264;
          puStack464 = (undefined4 *)&UNK_0010a2a9;
          iVar6 = func_0x00101920(&uStack260);
          if (iVar6 == 0) goto code_r0x0010a968;
          uStack264 = CONCAT31(uStack264._1_3_,1);
          goto code_r0x00109e2f;
        }
        ppppuStack240 = (undefined8 ****)0x1;
        uStack228 = SEXT14(*(char *)ppppuStack248);
        uStack232 = CONCAT31(uStack232._1_3_,1);
        uStack252 = CONCAT31(uStack252._1_3_,1);
code_r0x00109b5f:
        if (uStack228 != 0) {
          uStack440._0_1_ = (undefined8 ****)0x9 < unaff_R14 & (byte)uStack440;
          if ((byte)uStack440 == 0) goto code_r0x0010a987;
          if ((undefined *)((long)unaff_R14 * 5) <= puStack504) goto code_r0x0010a2c0;
          puVar18 = puStack504 + 1;
          uStack440 = (undefined8 ****)
                      ((ulong)uStack440 & 0xffffffffffffff00 | (ulong)(byte)uStack440);
code_r0x00109b94:
          do {
            if (cStack360 == '\0') goto code_r0x0010a111;
            ppppuVar10 = ppppuStack240;
            puStack504 = puVar18;
            if (uStack228 != auStack356[0]) goto code_r0x00109e01;
code_r0x00109bb0:
            uStack188 = uStack252;
            uVar9 = uStack260;
            uStack200 = uStack264;
            puStack4680 = (undefined1 *)((long)unaff_RBP + 4);
            acStack136[0] = '\0';
            *(undefined8 *)((long)unaff_RBP + 4) = 0;
            uStack196 = (undefined4)uVar9;
            uStack192 = (undefined4)((ulong)uVar9 >> 0x20);
            uStack124 = 0;
            uStack188 = uStack188 & 0xffffff00;
            ppppuStack176 = ppppuStack240;
            ppppuStack184 = (undefined8 ****)((long)ppppuStack248 + (long)ppppuStack240);
            uVar16 = SEXT14(*(char *)ppppuStack448);
            ppppuStack120 = ppppuStack448;
            uStack168 = uStack232;
            uStack164 = uStack228;
            uStack160 = (undefined4)uStack224;
            uStack156 = (undefined4)((ulong)uStack224 >> 0x20);
            uStack152 = SUB164(auStack216,0);
            uStack148 = SUB164(auStack216 >> 0x20,0);
            uStack144 = SUB164(auStack216 >> 0x40,0);
            uStack140 = SUB164(auStack216 >> 0x60,0);
            if ((*(uint *)(is_basic_table + (ulong)(uVar16 >> 5 & 7) * 4) >> (uVar16 & 0x1f) & 1) !=
                0) {
              ppppuStack112 = (undefined8 ****)0x1;
              cStack104 = '\x01';
              uStack100 = uVar16;
              goto code_r0x00109c71;
            }
            puStack464 = (undefined4 *)&UNK_0010a5e5;
            ppppuStack432 = (undefined8 ****)puStack4680;
            iVar6 = func_0x00101920(SUB168(auStack216,0),puStack4680);
            if (iVar6 != 0) {
              acStack136[0] = '\x01';
              puStack464 = (undefined4 *)&UNK_0010a5fa;
              uVar9 = func_0x001016d0();
              ppppuStack456 = ppppuStack120;
              puStack464 = (undefined4 *)&UNK_0010a611;
              uVar9 = strnlen1(ppppuStack120,uVar9);
              ppppuStack4656 = (undefined8 ****)((long)unaff_RBP + 0x24);
              puStack464 = (undefined4 *)&UNK_0010a629;
              puStack4680 = (undefined1 *)ppppuStack432;
              param_5 = ppppuStack456;
              ppppuStack112 = (undefined8 ****)rpl_mbrtowc(ppppuStack4656,ppppuStack456,uVar9);
              if (ppppuStack112 == (undefined8 ****)0xffffffffffffffff) {
                ppppuStack112 = (undefined8 ****)0x1;
                cStack104 = '\0';
                goto code_r0x00109c80;
              }
              if (ppppuStack112 == (undefined8 ****)0xfffffffffffffffe) {
                puStack464 = (undefined4 *)&UNK_0010a8c6;
                ppppuStack4656 = ppppuStack120;
                ppppuStack112 = (undefined8 ****)func_0x001016e0();
                cStack104 = '\0';
                goto code_r0x00109c80;
              }
              if (ppppuStack112 != (undefined8 ****)0x0) goto code_r0x0010a680;
              ppppuStack112 = (undefined8 ****)0x1;
              if (*(char *)ppppuStack120 == '\0') {
                if (uStack100 == 0) goto code_r0x0010a680;
code_r0x0010a672:
                puStack464 = (undefined4 *)&UNK_0010a677;
                mbuiter_multi_next_part_0();
code_r0x0010a680:
                ppppuStack4656 = (undefined8 ****)((long)unaff_RBP + 4);
                cStack104 = '\x01';
                puStack464 = (undefined4 *)&UNK_0010a691;
                iVar6 = func_0x00101920();
                if (iVar6 != 0) {
                  acStack136[0] = '\0';
                }
code_r0x00109c71:
                uStack124 = 1;
                ppppuStack4648 = (undefined8 ****)(ulong)uStack100;
                if (uStack100 != 0) {
code_r0x00109c80:
                  ppppuStack120 = (undefined8 ****)((long)ppppuStack120 + (long)ppppuStack112);
                  do {
                    uStack124 = 0;
                    puStack504 = puStack504 + 1;
                    if (acStack136[0] == '\0') {
                      if ((*(uint *)(is_basic_table + (ulong)(*(byte *)ppppuStack120 >> 5) * 4) >>
                           ((uint)*(byte *)ppppuStack120 & 0x1f) & 1) == 0) {
                        puStack464 = (undefined4 *)&UNK_00109ef9;
                        iVar6 = func_0x00101920((long)unaff_RBP + 4);
                        if (iVar6 != 0) {
                          acStack136[0] = '\x01';
                          goto code_r0x00109f09;
                        }
                        goto code_r0x0010a968;
                      }
                      ppppuStack112 = (undefined8 ****)0x1;
                      uStack100 = SEXT14(*(char *)ppppuStack120);
                      cStack104 = '\x01';
joined_r0x00109fbb:
                      if (uStack100 == 0) {
                        uStack124 = 1;
                        ppppuVar10 = ppppuStack248;
                        goto code_r0x00109a36;
                      }
                    }
                    else {
code_r0x00109f09:
                      puStack464 = (undefined4 *)&UNK_00109f0e;
                      uVar9 = func_0x001016d0();
                      ppppuStack456 = ppppuStack120;
                      puStack464 = (undefined4 *)&UNK_00109f25;
                      uVar9 = strnlen1(ppppuStack120,uVar9);
                      ppppuStack4656 = (undefined8 ****)((long)unaff_RBP + 0x24);
                      puStack464 = (undefined4 *)&UNK_00109f3c;
                      param_5 = ppppuStack456;
                      ppppuStack112 =
                           (undefined8 ****)rpl_mbrtowc(ppppuStack4656,ppppuStack456,uVar9);
                      if (ppppuStack112 == (undefined8 ****)0xffffffffffffffff) {
                        ppppuStack112 = (undefined8 ****)0x1;
                        cStack104 = '\0';
                      }
                      else {
                        if (ppppuStack112 != (undefined8 ****)0xfffffffffffffffe) {
                          if (ppppuStack112 == (undefined8 ****)0x0) {
                            ppppuStack112 = (undefined8 ****)0x1;
                            if (*(char *)ppppuStack120 != '\0') goto code_r0x0010a995;
                            puStack4680 = (undefined1 *)(ulong)uStack100;
                            if (uStack100 != 0) goto code_r0x0010a672;
                          }
                          ppppuStack4656 = (undefined8 ****)((long)unaff_RBP + 4);
                          cStack104 = '\x01';
                          puStack464 = (undefined4 *)&UNK_00109f9a;
                          iVar6 = func_0x00101920();
                          if (iVar6 != 0) {
                            acStack136[0] = '\0';
                          }
                          goto joined_r0x00109fbb;
                        }
                        puStack464 = (undefined4 *)&UNK_0010a1ad;
                        ppppuStack4656 = ppppuStack120;
                        ppppuStack112 = (undefined8 ****)func_0x001016e0();
                        cStack104 = '\0';
                      }
                    }
                    uStack124 = 1;
                    if ((char)uStack188 == '\0') {
                      if ((char)uStack200 == '\0') {
                        if ((*(uint *)(is_basic_table + (ulong)(*(byte *)ppppuStack184 >> 5) * 4) >>
                             ((uint)*(byte *)ppppuStack184 & 0x1f) & 1) != 0) {
                          ppppuStack176 = (undefined8 ****)0x1;
                          uStack164 = SEXT14(*(char *)ppppuStack184);
                          uStack168 = CONCAT31(uStack168._1_3_,1);
                          uStack188 = CONCAT31(uStack188._1_3_,1);
                          goto code_r0x00109cfd;
                        }
                        puStack464 = (undefined4 *)&UNK_00109fe1;
                        iVar6 = func_0x00101920(unaff_R15 + 1);
                        if (iVar6 == 0) goto code_r0x0010a968;
                        uStack200 = CONCAT31(uStack200._1_3_,1);
                      }
                      puStack464 = (undefined4 *)&UNK_00109ff6;
                      uVar9 = func_0x001016d0();
                      ppppuStack456 = ppppuStack184;
                      puStack464 = (undefined4 *)&UNK_0010a00d;
                      uVar9 = strnlen1(ppppuStack184,uVar9);
                      puStack4680 = (undefined1 *)(unaff_R15 + 1);
                      ppppuStack4656 = (undefined8 ****)(unaff_R15 + 9);
                      puStack464 = (undefined4 *)&UNK_0010a024;
                      param_5 = ppppuStack456;
                      ppppuStack176 =
                           (undefined8 ****)rpl_mbrtowc(ppppuStack4656,ppppuStack456,uVar9);
                      if (ppppuStack176 == (undefined8 ****)0xffffffffffffffff) {
                        ppppuStack176 = (undefined8 ****)0x1;
                        uStack168 = (uint)uStack168._1_3_ << 8;
                        uStack188 = CONCAT31(uStack188._1_3_,1);
                      }
                      else {
                        if (ppppuStack176 != (undefined8 ****)0xfffffffffffffffe) {
                          if (ppppuStack176 == (undefined8 ****)0x0) {
                            ppppuStack176 = (undefined8 ****)0x1;
                            if (*(char *)ppppuStack184 != '\0') goto code_r0x0010a995;
                            if (uStack164 != 0) goto code_r0x0010a672;
                          }
                          ppppuStack4656 = (undefined8 ****)(unaff_R15 + 1);
                          uStack168 = CONCAT31(uStack168._1_3_,1);
                          puStack464 = (undefined4 *)&UNK_0010a082;
                          iVar6 = func_0x00101920();
                          if (iVar6 == 0) {
                            uStack188 = CONCAT31(uStack188._1_3_,1);
                            goto code_r0x00109cfd;
                          }
                          uStack200 = uStack200 & 0xffffff00;
                          uStack188 = CONCAT31(uStack188._1_3_,1);
                          if (uStack164 != 0) goto code_r0x00109d0c;
                          goto code_r0x0010a0b0;
                        }
                        puStack464 = (undefined4 *)&UNK_0010a1ed;
                        ppppuStack4656 = ppppuStack184;
                        ppppuStack176 = (undefined8 ****)func_0x001016e0();
                        uStack168 = uStack168 & 0xffffff00;
                        uStack188 = CONCAT31(uStack188._1_3_,1);
                      }
code_r0x00109de3:
                      ppppuVar10 = ppppuStack240;
                      if (ppppuStack176 != ppppuStack112) goto code_r0x00109e01;
                      puStack464 = (undefined4 *)&UNK_0010a0d5;
                      ppppuStack4656 = ppppuStack184;
                      iVar6 = func_0x00101790();
                      bVar22 = iVar6 != 0;
                    }
                    else {
                      if ((char)uStack168 == '\0') goto code_r0x00109de3;
code_r0x00109cfd:
                      if (uStack164 == 0) goto code_r0x0010a0b0;
code_r0x00109d0c:
                      if (cStack104 == '\0') goto code_r0x00109de3;
                      bVar22 = uStack100 != uStack164;
                    }
                    ppppuVar10 = ppppuStack240;
                    if (bVar22) goto code_r0x00109e01;
                    ppppuStack184 = (undefined8 ****)((long)ppppuStack184 + (long)ppppuStack176);
                    ppppuStack120 = (undefined8 ****)((long)ppppuStack120 + (long)ppppuStack112);
                    uStack188 = uStack188 & 0xffffff00;
                  } while( true );
                }
                goto code_r0x0010a9b4;
              }
              goto code_r0x0010a995;
            }
code_r0x0010a968:
            ppppuStack4656 = (undefined8 ****)&UNK_0010e9b4;
            puStack464 = (undefined4 *)&UNK_0010a987;
            func_0x00101750(&UNK_0010e9b4,&UNK_0010e994,0x96,__PRETTY_FUNCTION___5056);
code_r0x0010a987:
            puVar18 = puStack504 + 1;
          } while( true );
        }
        goto code_r0x0010a0b0;
      }
      goto code_r0x00109a36;
    }
    puStack464 = (undefined4 *)&UNK_0010a6b8;
    iVar6 = func_0x00101920(unaff_RBP);
    if (iVar6 == 0) goto code_r0x0010a968;
    auStack392[0] = 1;
    puStack464 = (undefined4 *)&UNK_0010a6ca;
    uVar9 = func_0x001016d0();
    unaff_R14 = ppppuStack376;
    puStack464 = (undefined4 *)&UNK_0010a6da;
    uVar9 = strnlen1(ppppuStack376,uVar9);
    ppppuStack4656 = (undefined8 ****)auStack356;
    puStack464 = (undefined4 *)&UNK_0010a6ec;
    puStack4680 = (undefined1 *)unaff_RBP;
    ppppuStack368 = (undefined8 ****)rpl_mbrtowc(ppppuStack4656,unaff_R14,uVar9);
    if (ppppuStack368 == (undefined8 ****)0xffffffffffffffff) {
      ppppuStack368 = (undefined8 ****)0x1;
      cStack360 = '\0';
      goto code_r0x00109a8b;
    }
    if (ppppuStack368 == (undefined8 ****)0xfffffffffffffffe) {
      puStack464 = (undefined4 *)&UNK_0010a8e5;
      ppppuStack4656 = ppppuStack376;
      ppppuStack368 = (undefined8 ****)func_0x001016e0();
      cStack360 = '\0';
      goto code_r0x00109a8b;
    }
    if (ppppuStack368 != (undefined8 ****)0x0) {
code_r0x0010a72d:
      ppppuStack4656 = (undefined8 ****)&pppuStack388;
      cStack360 = '\x01';
      puStack464 = (undefined4 *)&UNK_0010a73b;
      iVar6 = func_0x00101920();
      if (iVar6 != 0) {
        auStack392[0] = 0;
      }
      goto code_r0x00109a2b;
    }
    ppppuStack368 = (undefined8 ****)0x1;
    if (*(char *)ppppuStack376 == '\0') {
      if (auStack356[0] != 0) goto code_r0x0010a672;
      goto code_r0x0010a72d;
    }
  }
code_r0x0010a995:
  puStack4680 = __PRETTY_FUNCTION___5056;
  ppppuStack4648 = (undefined8 ****)&UNK_0010e994;
  ppppuStack4656 = (undefined8 ****)&UNK_0010e9cb;
  puStack464 = (undefined4 *)&UNK_0010a9b4;
  func_0x00101750(&UNK_0010e9cb,&UNK_0010e994,0xb2);
code_r0x0010a9b4:
  puStack464 = (undefined4 *)&UNK_0010a9b9;
  func_0x00101600();
  lStack520 = *(long *)(in_FS_OFFSET + 0x28);
  ppppuStack4712 = (undefined8 ****)&UNK_0010aa0d;
  ppppuStack4688 = param_5;
  ppppuStack4664 = ppppuStack4656;
  ppppuStack496 = unaff_RBP;
  ppppuStack488 = param_1;
  puStack480 = unaff_R13;
  ppppuStack472 = unaff_R14;
  puStack464 = unaff_R15;
  func_0x00101650(extraout_RDX,0,0,0,0);
  ppppuVar10 = (undefined8 ****)0x0;
  ppppuStack4720 = (undefined8 ****)appuStack4624;
  ppppuStack4736 = &ppppuStack4632;
  ppppuStack4744 = &ppppuStack4640;
  ppppuStack4728 = ppppuStack4648;
  if (ppppuStack4648 != (undefined8 ****)0x0) {
    ppppuStack4696 = &ppppuStack4656;
    ppppuStack4672 = ppppuStack4648;
    do {
      ppppuStack4632 = (undefined8 ****)0x1000;
      ppppuStack4712 = (undefined8 ****)&UNK_0010aa8b;
      ppppuVar17 = ppppuStack4696;
      ppppuStack4800 = extraout_RDX;
      ppppuStack4640 = ppppuStack4720;
      lVar8 = func_0x00101650(extraout_RDX,ppppuStack4696,&ppppuStack4648,ppppuStack4744,
                              ppppuStack4736);
      if (lVar8 == -1) {
        ppppuStack4712 = (undefined8 ****)&UNK_0010aa96;
        piVar11 = (int *)func_0x00101610();
        if (*piVar11 != 7) {
          ppppuStack4728 = ppppuStack4672;
          if (*piVar11 != 0x16) goto code_r0x0010ac69;
          break;
        }
      }
      ppppuVar10 = (undefined8 ****)
                   ((long)ppppuVar10 + (long)((long)ppppuStack4640 - (long)ppppuStack4720));
      ppppuStack4728 = ppppuStack4672;
    } while (ppppuStack4648 != (undefined8 ****)0x0);
  }
  ppppuVar17 = (undefined8 ****)0x0;
  ppppuStack4632 = (undefined8 ****)0x1000;
  ppppuStack4712 = (undefined8 ****)&UNK_0010aacb;
  ppppuStack4800 = extraout_RDX;
  ppppuStack4640 = ppppuStack4720;
  lVar8 = func_0x00101650(extraout_RDX,0,0,ppppuStack4744,ppppuStack4736);
  if (lVar8 == -1) {
code_r0x0010ac69:
    ppppuStack4752 = (undefined8 ****)0xffffffff;
code_r0x0010abd4:
    if (lStack520 == *(long *)(in_FS_OFFSET + 0x28)) {
      return ppppuStack4752;
    }
  }
  else {
    ppppuVar19 = (undefined8 ****)
                 ((long)((long)ppppuStack4640 - (long)ppppuStack4720) + (long)ppppuVar10);
    ppppuStack4696 = ppppuVar19;
    if (ppppuVar19 == (undefined8 ****)0x0) {
      ppppuStack4752 = (undefined8 ****)0x0;
      *ppppuStack4688 = (undefined8 ***)0x0;
      goto code_r0x0010abd4;
    }
    ppppuStack4672 = *(undefined8 *****)puStack4680;
    if ((ppppuStack4672 == (undefined8 ****)0x0) || (*ppppuStack4688 < ppppuVar19)) {
      ppppuStack4712 = (undefined8 ****)&UNK_0010ab16;
      ppppuStack4672 = (undefined8 ****)func_0x00101810();
      if (ppppuStack4672 == (undefined8 ****)0x0) {
        ppppuStack4712 = (undefined8 ****)&UNK_0010ac63;
        puVar12 = (undefined4 *)func_0x00101610();
        *puVar12 = 0xc;
        ppppuStack4800 = ppppuVar19;
        goto code_r0x0010ac69;
      }
    }
    ppppuVar10 = &ppppuStack4648;
    ppppuStack4712 = (undefined8 ****)&UNK_0010ab3a;
    func_0x00101650(extraout_RDX,0,0,0,0);
    ppppuStack4720 = &ppppuStack4656;
    ppppuStack4656 = ppppuStack4664;
    ppppuStack4640 = ppppuStack4672;
    ppppuStack4632 = ppppuStack4696;
    ppppuStack4648 = ppppuStack4728;
    do {
      ppppuStack4728 = ppppuStack4648;
      if (ppppuStack4648 == (undefined8 ****)0x0) goto code_r0x0010ab90;
      ppppuStack4712 = (undefined8 ****)&UNK_0010ab7c;
      ppppuVar17 = ppppuStack4720;
      ppppuStack4800 = extraout_RDX;
      lVar8 = func_0x00101650(extraout_RDX,ppppuStack4720,ppppuVar10,ppppuStack4744,ppppuStack4736);
    } while (lVar8 != -1);
    ppppuStack4712 = (undefined8 ****)&UNK_0010ac25;
    piVar11 = (int *)func_0x00101610();
    if (*piVar11 != 0x16) {
code_r0x0010ac2e:
      ppppuVar10 = ppppuStack4672;
      ppppuStack4752 = (undefined8 ****)0xffffffff;
      if (*(undefined8 *****)puStack4680 != ppppuStack4672) {
        ppppuStack4712 = (undefined8 ****)&UNK_0010ac47;
        ppppuStack4744 = (undefined8 ****)func_0x00101610();
        uVar16 = *(uint *)ppppuStack4744;
        ppppuStack4736 = (undefined8 ****)(ulong)uVar16;
        ppppuStack4712 = (undefined8 ****)&UNK_0010ac55;
        ppppuStack4800 = ppppuVar10;
        func_0x001015f0();
        *(uint *)ppppuStack4744 = uVar16;
      }
      goto code_r0x0010abd4;
    }
code_r0x0010ab90:
    ppppuVar17 = (undefined8 ****)0x0;
    ppppuStack4712 = (undefined8 ****)&UNK_0010aba2;
    ppppuStack4800 = extraout_RDX;
    lVar8 = func_0x00101650(extraout_RDX,0,0,ppppuStack4744,ppppuStack4736);
    if (lVar8 == -1) goto code_r0x0010ac2e;
    if (ppppuStack4632 == (undefined8 ****)0x0) {
      ppppuStack4752 = (undefined8 ****)0x0;
      *(undefined8 *****)puStack4680 = ppppuStack4672;
      *(undefined8 *****)ppppuStack4688 = ppppuStack4696;
      ppppuVar17 = ppppuStack4672;
      ppppuStack4800 = ppppuStack4696;
      goto code_r0x0010abd4;
    }
    ppppuStack4712 = (undefined8 ****)&UNK_0010ac78;
    func_0x00101600();
    ppppuStack4752 = extraout_RDX;
  }
  ppppuStack4712 = (undefined8 ****)&UNK_0010ac7d;
  func_0x001016f0();
  uStack4768 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppppuVar19 = ppppuVar17;
  ppppuStack4712 = ppppuVar10;
  uStack4792 = func_0x001016e0();
  uVar7 = uStack4792 << 4;
  if (0xfffffff < uStack4792) {
    uVar7 = uStack4792;
  }
  puVar18 = (undefined *)func_0x00101810((undefined8 ****)(uVar7 + 1));
  if (puVar18 == (undefined *)0x0) {
    puVar12 = (undefined4 *)func_0x00101610();
    *puVar12 = 0xc;
  }
  else {
    func_0x00101650(ppppuVar17,0,0,0,0);
    ppppuVar10 = (undefined8 ****)(uVar7 + 1);
    puStack4784 = puVar18;
    uStack4776 = uVar7;
    while (ppppuVar19 = &ppppuStack4800,
          lVar8 = func_0x00101650(ppppuVar17,&ppppuStack4800,&uStack4792,&puStack4784,&uStack4776),
          lVar8 == -1) {
      piVar11 = (int *)func_0x00101610();
      if (*piVar11 == 0x16) break;
      if (*piVar11 != 7) goto code_r0x0010ae6e;
      ppppuVar4 = (undefined8 ****)((long)ppppuVar10 * 2);
      puVar21 = puStack4784 + -(long)puVar18;
      if ((ppppuVar4 <= ppppuVar10) ||
         (ppppuVar19 = ppppuVar4, puVar13 = (undefined *)func_0x00101850(puVar18),
         puVar13 == (undefined *)0x0)) {
        *piVar11 = 0xc;
        goto code_r0x0010ae6e;
      }
      puStack4784 = puVar13 + (long)puVar21;
      uStack4776 = (long)ppppuVar4 + (-1 - (long)puVar21);
      puVar18 = puVar13;
      ppppuVar10 = ppppuVar4;
    }
code_r0x0010ae16:
    ppppuVar19 = (undefined8 ****)0x0;
    lVar8 = func_0x00101650(ppppuVar17,0,0,&puStack4784,&uStack4776);
    if (lVar8 != -1) goto code_r0x0010ae35;
    piVar11 = (int *)func_0x00101610();
    if (*piVar11 != 7) goto code_r0x0010ae6e;
    ppppuVar4 = (undefined8 ****)((long)ppppuVar10 * 2);
    puVar21 = puStack4784 + -(long)puVar18;
    if ((ppppuVar10 < ppppuVar4) &&
       (ppppuVar19 = ppppuVar4, puVar13 = (undefined *)func_0x00101850(puVar18),
       puVar13 != (undefined *)0x0)) {
      puStack4784 = puVar13 + (long)puVar21;
      uStack4776 = (long)ppppuVar4 + (-1 - (long)puVar21);
      puVar18 = puVar13;
      ppppuVar10 = ppppuVar4;
      goto code_r0x0010ae16;
    }
    *piVar11 = 0xc;
code_r0x0010ae6e:
    func_0x001015f0(puVar18);
    puVar18 = (undefined *)0x0;
  }
code_r0x0010ae78:
  pcVar20 = (char *)(uStack4768 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (pcVar20 == (char *)0x0) {
    return (undefined8 ****)puVar18;
  }
  func_0x001016f0();
  if ((*pcVar20 == '\0') || (iVar6 = c_strcasecmp(ppppuVar19,extraout_RDX_00), iVar6 == 0)) {
    lVar8 = func_0x00101910(pcVar20);
    if (lVar8 == 0) {
      puVar12 = (undefined4 *)func_0x00101610();
      *puVar12 = 0xc;
      return (undefined8 ****)0;
    }
  }
  else {
    lVar14 = func_0x00101950(extraout_RDX_00,ppppuVar19);
    if (lVar14 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = str_cd_iconv(pcVar20,lVar14);
      if (lVar8 == 0) {
        puVar12 = (undefined4 *)func_0x00101610();
        uVar3 = *puVar12;
        func_0x00101880(lVar14);
        *puVar12 = uVar3;
      }
      else {
        iVar6 = func_0x00101880(lVar14);
        if (iVar6 < 0) {
          puVar12 = (undefined4 *)func_0x00101610();
          uVar3 = *puVar12;
          func_0x001015f0(lVar8);
          lVar8 = 0;
          *puVar12 = uVar3;
        }
      }
    }
  }
  return (undefined8 ****)lVar8;
code_r0x00109e01:
  ppppuStack248 = (undefined8 ****)((long)ppppuStack248 + (long)ppppuVar10);
  unaff_R14 = (undefined8 ****)((long)unaff_R14 + 1);
  uStack252 = uStack252 & 0xffffff00;
  if ((char)uStack264 == '\0') goto code_r0x00109b18;
  ppppuStack456 = (undefined8 ****)&uStack264;
code_r0x00109e2f:
  puStack464 = (undefined4 *)&UNK_00109e34;
  uVar9 = func_0x001016d0();
  ppppuStack432 = ppppuStack248;
  puStack464 = (undefined4 *)&UNK_00109e4c;
  uVar9 = strnlen1(ppppuStack248,uVar9);
  puStack4680 = (undefined1 *)((long)ppppuStack456 + 4);
  ppppuStack4656 = (undefined8 ****)((long)ppppuStack456 + 0x24);
  puStack464 = (undefined4 *)&UNK_00109e68;
  param_5 = ppppuStack432;
  ppppuStack240 = (undefined8 ****)rpl_mbrtowc(ppppuStack4656,ppppuStack432,uVar9);
  if (ppppuStack240 == (undefined8 ****)0xffffffffffffffff) {
    ppppuStack240 = (undefined8 ****)0x1;
    uStack232 = (uint)uStack232._1_3_;
  }
  else {
    if (ppppuStack240 != (undefined8 ****)0xfffffffffffffffe) goto code_r0x00109e84;
    puStack464 = (undefined4 *)&UNK_0010a5b5;
    ppppuStack4656 = ppppuStack248;
    ppppuStack240 = (undefined8 ****)func_0x001016e0();
    uStack232 = uStack232 >> 8;
  }
  uStack232 = uStack232 << 8;
  uStack252 = CONCAT31(uStack252._1_3_,1);
  uStack440._0_1_ = (undefined8 ****)0x9 < unaff_R14 & (byte)uStack440;
  if ((byte)uStack440 == 0) {
    puVar18 = puStack504 + 1;
    goto code_r0x0010a111;
  }
  if (puStack504 < (undefined *)((long)unaff_R14 * 5)) {
    puVar18 = puStack504 + 1;
    uStack440 = (undefined8 ****)((ulong)uStack440 & 0xffffffffffffff00 | (ulong)(byte)uStack440);
    goto code_r0x0010a111;
  }
code_r0x0010a2c0:
  ppppuStack456 = (undefined8 ****)(puStack504 + -(long)puStack424);
  if (ppppuStack456 == (undefined8 ****)0x0) {
    if (cStack316 == '\0') goto code_r0x0010a518;
    if (cStack296 != '\0') {
code_r0x0010a56d:
      param_5 = (undefined8 ****)(ulong)uStack292;
      if (uStack292 == 0) goto code_r0x0010a37b;
    }
code_r0x0010a57e:
    uStack440 = (undefined8 ****)CONCAT71(uStack440._1_7_,1);
  }
  else {
    if (cStack316 == '\0') goto code_r0x0010a30b;
    if (cStack296 != '\0') goto code_r0x0010a35c;
code_r0x0010a2e8:
    do {
      ppppuStack312 = (undefined8 ****)((long)ppppuStack312 + lStack304);
      ppppuStack456 = (undefined8 ****)((long)ppppuStack456 + -1);
      cStack316 = '\0';
      if (ppppuStack456 == (undefined8 ****)0x0) goto code_r0x0010a518;
code_r0x0010a30b:
      if (acStack328[0] == '\0') {
        if ((*(uint *)(is_basic_table + (ulong)(*(byte *)ppppuStack312 >> 5) * 4) >>
             ((uint)*(byte *)ppppuStack312 & 0x1f) & 1) == 0) {
          uStack440 = (undefined8 ****)acStack328;
          puStack464 = (undefined4 *)&UNK_0010a3ca;
          iVar6 = func_0x00101920(&uStack324);
          if (iVar6 != 0) {
            acStack328[0] = '\x01';
            goto code_r0x0010a3da;
          }
          goto code_r0x0010a968;
        }
        lStack304 = 1;
        uStack292 = SEXT14(*(char *)ppppuStack312);
        cStack296 = '\x01';
        cStack316 = '\x01';
      }
      else {
        uStack440 = (undefined8 ****)acStack328;
code_r0x0010a3da:
        puStack464 = (undefined4 *)&UNK_0010a3df;
        uVar9 = func_0x001016d0();
        ppppuStack432 = ppppuStack312;
        puStack464 = (undefined4 *)&UNK_0010a3f7;
        uVar9 = strnlen1(ppppuStack312,uVar9);
        puStack4680 = (undefined1 *)((long)uStack440 + 4);
        ppppuStack4656 = (undefined8 ****)((long)uStack440 + 0x24);
        puStack464 = (undefined4 *)&UNK_0010a414;
        param_5 = ppppuStack432;
        lStack304 = rpl_mbrtowc(ppppuStack4656,ppppuStack432,uVar9);
        if (lStack304 == -1) {
          lStack304 = 1;
          cStack296 = '\0';
          goto code_r0x0010a2e8;
        }
        if (lStack304 == -2) {
          puStack464 = (undefined4 *)&UNK_0010a4fd;
          ppppuStack4656 = ppppuStack312;
          lStack304 = func_0x001016e0();
          cStack296 = '\0';
          goto code_r0x0010a2e8;
        }
        if (lStack304 == 0) {
          lStack304 = 1;
          if (*(char *)ppppuStack312 != '\0') goto code_r0x0010a995;
          if (uStack292 != 0) goto code_r0x0010a672;
        }
        cStack296 = '\x01';
        ppppuStack4656 = (undefined8 ****)((long)uStack440 + 4);
        puStack464 = (undefined4 *)&UNK_0010a479;
        iVar6 = func_0x00101920();
        if (iVar6 == 0) {
          cStack316 = '\x01';
        }
        else {
          acStack328[0] = '\0';
          cStack316 = '\x01';
        }
      }
code_r0x0010a35c:
    } while (uStack292 != 0);
    if (cStack316 == '\0') {
code_r0x0010a518:
      if (acStack328[0] == '\0') {
        if ((*(uint *)(is_basic_table + (ulong)(*(byte *)ppppuStack312 >> 5) * 4) >>
             ((uint)*(byte *)ppppuStack312 & 0x1f) & 1) != 0) {
          lStack304 = 1;
          uStack292 = SEXT14(*(char *)ppppuStack312);
          cStack296 = '\x01';
          cStack316 = '\x01';
          goto code_r0x0010a56d;
        }
        uStack440 = (undefined8 ****)acStack328;
        puStack464 = (undefined4 *)&UNK_0010a859;
        iVar6 = func_0x00101920(&uStack324);
        if (iVar6 == 0) goto code_r0x0010a968;
        acStack328[0] = '\x01';
      }
      else {
        uStack440 = (undefined8 ****)acStack328;
      }
      puStack464 = (undefined4 *)&UNK_0010a78a;
      uVar9 = func_0x001016d0();
      ppppuStack456 = ppppuStack312;
      puStack464 = (undefined4 *)&UNK_0010a7a1;
      uVar9 = strnlen1(ppppuStack312,uVar9);
      puStack4680 = (undefined1 *)((long)uStack440 + 4);
      ppppuStack4656 = (undefined8 ****)((long)uStack440 + 0x24);
      puStack464 = (undefined4 *)&UNK_0010a7bd;
      param_5 = ppppuStack456;
      lStack304 = rpl_mbrtowc(ppppuStack4656,ppppuStack456,uVar9);
      if (lStack304 != -1) {
        if (lStack304 == -2) {
          puStack464 = (undefined4 *)&UNK_0010a892;
          ppppuStack4656 = ppppuStack312;
          lStack304 = func_0x001016e0();
          cStack296 = '\0';
          cStack316 = '\x01';
          goto code_r0x0010a57e;
        }
        if (lStack304 == 0) {
          lStack304 = 1;
          if (*(char *)ppppuStack312 != '\0') goto code_r0x0010a995;
          if (uStack292 != 0) goto code_r0x0010a672;
        }
        cStack296 = '\x01';
        ppppuStack4656 = (undefined8 ****)((long)uStack440 + 4);
        puStack464 = (undefined4 *)&UNK_0010a822;
        iVar6 = func_0x00101920();
        if (iVar6 == 0) {
          cStack316 = '\x01';
        }
        else {
          acStack328[0] = '\0';
          cStack316 = '\x01';
        }
        goto code_r0x0010a56d;
      }
      lStack304 = 1;
      cStack296 = '\0';
      cStack316 = '\x01';
      goto code_r0x0010a57e;
    }
code_r0x0010a37b:
    puStack464 = (undefined4 *)&UNK_0010a38d;
    ppppuStack4656 = param_1;
    bVar5 = knuth_morris_pratt_multibyte(param_1,ppppuStack448,ppppuStack416);
    uStack440 = (undefined8 ****)((ulong)uStack440 & 0xffffffffffffff00 | (ulong)bVar5);
    ppppuVar10 = ppppuStack400;
    if (bVar5 != 0) goto code_r0x00109a36;
  }
  puVar18 = puStack504 + 1;
  puStack424 = puStack504;
  if ((char)uStack232 != '\0') goto code_r0x00109b94;
code_r0x0010a111:
  ppppuVar10 = ppppuStack240;
  puStack504 = puVar18;
  if (ppppuStack240 == ppppuStack368) {
    ppppuStack456 = ppppuStack240;
    puStack464 = (undefined4 *)&UNK_0010a13d;
    ppppuStack4656 = ppppuStack248;
    iVar6 = func_0x00101790(ppppuStack248,ppppuStack376,ppppuStack240);
    ppppuVar10 = ppppuStack456;
    if (iVar6 == 0) goto code_r0x00109bb0;
  }
  goto code_r0x00109e01;
code_r0x00109e84:
  if (ppppuStack240 == (undefined8 ****)0x0) {
    ppppuStack240 = (undefined8 ****)0x1;
    if (*(char *)ppppuStack248 != '\0') goto code_r0x0010a995;
    if (uStack228 != 0) goto code_r0x0010a672;
  }
  uStack232 = CONCAT31(uStack232._1_3_,1);
  ppppuStack4656 = (undefined8 ****)((long)ppppuStack456 + 4);
  puStack464 = (undefined4 *)&UNK_00109eca;
  iVar6 = func_0x00101920();
  if (iVar6 == 0) {
    uStack252 = CONCAT31(uStack252._1_3_,1);
  }
  else {
    uStack264 = uStack264 & 0xffffff00;
    uStack252 = CONCAT31(uStack252._1_3_,1);
  }
  goto code_r0x00109b5f;
code_r0x0010ae35:
  puVar21 = puStack4784 + 1;
  *puStack4784 = 0;
  ppppuVar19 = (undefined8 ****)(puVar21 + -(long)puVar18);
  puStack4784 = puVar21;
  if ((ppppuVar19 < ppppuVar10) &&
     (puVar21 = (undefined *)func_0x00101850(puVar18), puVar21 != (undefined *)0x0)) {
    puVar18 = puVar21;
  }
  goto code_r0x0010ae78;
}

