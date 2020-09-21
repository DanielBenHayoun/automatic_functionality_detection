
/* WARNING: Possible PIC construction at 0x00102f22: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00103219: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00102e0f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010321e) */
/* WARNING: Removing unreachable block (ram,0x00102f27) */
/* WARNING: Removing unreachable block (ram,0x00102e14) */

ulong copy_fd(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  char *extraout_RDX;
  char *extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong uVar9;
  undefined8 extraout_RDX_02;
  byte **ppbVar10;
  char *unaff_RBX;
  char *unaff_RBP;
  uint uVar11;
  undefined *puVar12;
  byte *pbVar13;
  char *pcVar14;
  char *unaff_R12;
  char *pcVar15;
  byte *pbVar16;
  char *unaff_R13;
  ulong uVar17;
  char *unaff_R14;
  char *pcVar18;
  char *unaff_R15;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  byte *pbStack33408;
  undefined *puStack33400;
  byte *apbStack33392 [5];
  undefined *puStack33352;
  undefined *puStack33344;
  undefined *puStack33336;
  undefined *puStack33328;
  undefined *puStack33320;
  undefined8 uStack33312;
  undefined8 uStack33304;
  undefined8 uStack33288;
  ulong uStack33272;
  char *pcStack33264;
  ulong uStack33256;
  code *pcStack33248;
  char *pcStack33232;
  ulong uStack33224;
  long lStack33216;
  char acStack33208 [8200];
  long lStack25008;
  char *pcStack24992;
  char *pcStack24984;
  char *pcStack24976;
  char *pcStack24968;
  char *pcStack24960;
  char *pcStack24952;
  char *pcStack24936;
  char *pcStack24928;
  char acStack24920 [8200];
  ulong uStack16720;
  char *pcStack16704;
  char *pcStack16696;
  char *pcStack16688;
  char *pcStack16680;
  char *pcStack16672;
  char *pcStack16664;
  undefined auStack16656 [24];
  uint uStack16632;
  char acStack16513 [8201];
  long lStack8312;
  char *pcStack8296;
  char *pcStack8288;
  char *pcStack8280;
  char *pcStack8272;
  char acStack8248 [8200];
  long lStack48;
  
  bVar21 = 0;
  pcStack8288 = acStack8248;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (char *)0x0) {
    unaff_R12 = (char *)((ulong)param_1 & 0xffffffff);
    unaff_R13 = (char *)0x2000;
    unaff_RBX = param_2;
    do {
      while( true ) {
        pcVar8 = (char *)0x2000;
        if (unaff_RBX < (char *)0x2001) {
          pcVar8 = unaff_RBX;
        }
        param_2 = acStack8248;
        param_1 = unaff_R12;
        pcVar8 = (char *)safe_read(unaff_R12,acStack8248,pcVar8);
        if (pcVar8 == (char *)0xffffffffffffffff) {
          uVar5 = 1;
          goto code_r0x00102c98;
        }
        unaff_RBX = unaff_RBX + -(long)pcVar8;
        if ((pcVar8 == (char *)0x0) && (unaff_RBX != (char *)0x0)) {
          uVar5 = 2;
          pcStack8288 = acStack8248;
          goto code_r0x00102c98;
        }
        if (pcVar8 == (char *)0x0) break;
        param_1 = acStack8248;
        xwrite_stdout_part_6();
        unaff_RBP = acStack8248;
        param_2 = pcVar8;
        if (unaff_RBX == (char *)0x0) goto code_r0x00102c96;
      }
      unaff_RBP = acStack8248;
    } while (unaff_RBX != (char *)0x0);
  }
code_r0x00102c96:
  uVar5 = 0;
  pcStack8288 = unaff_RBP;
code_r0x00102c98:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
  func_0x001015d0();
  lStack8312 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack33264 = pcStack8288;
  pcVar8 = param_1;
  pcVar15 = unaff_R12;
  pcStack8296 = unaff_RBX;
  pcStack8280 = unaff_R12;
  pcStack8272 = unaff_R13;
  if (extraout_RDX == (char *)0x0) {
code_r0x00102d9c:
    if (lStack8312 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
    pcStack16664 = &UNK_00102e67;
    func_0x001015d0();
    uStack16720 = *(ulong *)(in_FS_OFFSET + 0x28);
    pcVar14 = pcVar8;
    pcVar18 = unaff_R14;
    pcStack16704 = unaff_RBX;
    pcStack16696 = pcStack33264;
    pcStack16688 = pcVar15;
    pcStack16680 = unaff_R13;
    pcStack16672 = unaff_R14;
    pcStack16664 = unaff_R15;
    if (extraout_RDX_00 != (char *)0x0) {
      pcVar18 = (char *)((ulong)param_2 & 0xffffffff);
      pcStack33264 = extraout_RDX_00;
      pcVar15 = (char *)0x2000;
      do {
        if (pcStack33264 < pcVar15) {
          pcVar15 = pcStack33264;
        }
        pcStack24928 = &UNK_00102ee2;
        param_2 = acStack24920;
        pcVar14 = pcVar18;
        unaff_RBX = (char *)safe_read(pcVar18,acStack24920,pcVar15);
        if (unaff_RBX == (char *)0xffffffffffffffff) {
          pcStack24928 = &UNK_00102ef8;
          uVar5 = quotearg_style(4,pcVar8);
          pcStack24928 = &UNK_00102f0e;
          uVar6 = func_0x001015a0(0,&UNK_0010687f,5);
          pcStack24928 = &UNK_00102f16;
          puVar4 = (uint *)func_0x00101520();
          uVar7 = (ulong)*puVar4;
          pcStack24928 = &UNK_00102f27;
          goto code_r0x00101770;
        }
        unaff_R13 = acStack24920;
        unaff_R15 = pcVar8;
        if (unaff_RBX == (char *)0x0) break;
        pcStack24928 = &UNK_00102ec8;
        param_2 = unaff_RBX;
        pcVar14 = acStack24920;
        xwrite_stdout_part_6();
        pcStack33264 = pcStack33264 + -(long)unaff_RBX;
        unaff_R13 = acStack24920;
      } while (pcStack33264 != (char *)0x0);
    }
    uVar7 = uStack16720 ^ *(ulong *)(in_FS_OFFSET + 0x28);
    if (uVar7 == 0) {
      return 1;
    }
    pcStack24928 = &UNK_00102f5f;
    func_0x001015d0();
    uVar11 = (uint)param_2;
    pcStack24936 = unaff_RBX;
    pcStack24928 = pcStack33264;
    if ((int)pcVar14 == 1) {
      pcStack24952 = &UNK_00102fc2;
      uVar5 = quotearg_style(4);
      puVar12 = &UNK_0010687f;
    }
    else {
      if ((int)pcVar14 != 2) {
        pcStack24952 = &UNK_00102fd8;
        func_0x00101510();
        pcVar8 = (char *)(ulong)uVar11;
        lVar3 = param_5 - uVar7;
        lStack25008 = *(long *)(in_FS_OFFSET + 0x28);
        uVar9 = (ulong)((int)lVar3 + ((uint)(lVar3 >> 0x5f) >> 0x13) & 0x1fff) -
                ((ulong)(lVar3 >> 0x3f) >> 0x33);
        uVar17 = 0x2000;
        if (uVar9 != 0) {
          uVar17 = uVar9;
        }
        uStack33256 = param_5 - uVar17;
        pcStack33248 = (code *)&UNK_00103054;
        pcStack33232 = pcVar14;
        uStack33224 = uVar7;
        pcStack24992 = unaff_RBX;
        pcStack24984 = pcStack33264;
        pcStack24976 = pcVar15;
        pcStack24968 = unaff_R13;
        pcStack24960 = pcVar18;
        pcStack24952 = unaff_R15;
        lVar3 = elseek(pcVar8,uStack33256,0,pcVar14);
        uStack33272 = extraout_RDX_01;
        if (lVar3 < 0) {
code_r0x00103138:
          uVar7 = 0;
        }
        else {
          pcStack33264 = acStack33208;
          pcVar8 = (char *)(ulong)uVar11;
          pcStack33248 = (code *)&UNK_00103070;
          lVar3 = safe_read(pcVar8,pcStack33264,uVar17);
          if (lVar3 == -1) {
code_r0x001031e0:
            pcStack33248 = (code *)&UNK_001031ef;
            uVar5 = quotearg_style(4,pcStack33232);
            pcStack33248 = (code *)&UNK_00103205;
            uVar6 = func_0x001015a0(0,&UNK_0010687f,5);
            pcStack33248 = (code *)&UNK_0010320d;
            puVar4 = (uint *)func_0x00101520();
            uVar7 = (ulong)*puVar4;
            pcStack33248 = (code *)&UNK_0010321e;
            goto code_r0x00101770;
          }
          uVar7 = extraout_RDX_01;
          if ((extraout_RDX_01 != 0) && (lVar3 != 0)) {
            uVar7 = extraout_RDX_01 - (*(char *)((long)&lStack33216 + lVar3 + 7) != line_end);
          }
          do {
            if (lVar3 != 0) {
              uVar17 = (ulong)(uint)(int)line_end;
              do {
                if (extraout_RDX_01 == 0) {
                  lVar3 = lVar3 + -1;
                  uStack33272 = uStack33224;
                }
                else {
                  pcStack33248 = (code *)&UNK_001030ec;
                  pcVar8 = pcStack33264;
                  lVar3 = func_0x00101780(pcStack33264,uVar17,lVar3);
                  if (lVar3 == 0) break;
                  lVar3 = lVar3 - (long)pcStack33264;
                  uStack33272 = uStack33224;
                }
                uStack33224 = uStack33272;
                if (uVar7 == 0) {
                  if ((long)uStack33272 < (long)uStack33256) {
                    pcVar8 = (char *)(ulong)uVar11;
                    pcStack33248 = (code *)&UNK_00103244;
                    lStack33216 = lVar3;
                    lVar3 = elseek(pcVar8,uStack33272,0,pcStack33232);
                    if (lVar3 < 0) goto code_r0x00103138;
                    pcStack33248 = (code *)&UNK_0010325b;
                    uVar1 = copy_fd((ulong)uVar11,uStack33256 - uStack33272);
                    lVar3 = lStack33216;
                    if (uVar1 != 0) {
                      pcVar8 = (char *)(ulong)uVar1;
                      pcStack33248 = (code *)&UNK_00103274;
                      diagnose_copy_fd_failure(pcVar8,pcStack33232);
                      uVar7 = 0;
                      goto code_r0x0010313a;
                    }
                  }
                  uStack33272 = lVar3 + 1;
                  if (uStack33272 != 0) {
                    pcStack33248 = (code *)&UNK_001031db;
                    xwrite_stdout_part_6(pcStack33264,uStack33272);
                  }
                  pcVar8 = (char *)(ulong)uVar11;
                  pcStack33248 = (code *)&UNK_0010312b;
                  uVar7 = elseek(pcVar8,uStack33256 + uStack33272,0,pcStack33232);
                  uVar7 = ~uVar7 >> 0x3f;
                  goto code_r0x0010313a;
                }
                uVar7 = uVar7 - 1;
              } while (lVar3 != 0);
            }
            if (uStack33256 == uStack33224) break;
            uStack33256 = uStack33256 - 0x2000;
            pcVar8 = (char *)(ulong)uVar11;
            pcStack33248 = (code *)&UNK_00103188;
            lVar3 = elseek(pcVar8,uStack33256,0,pcStack33232);
            uStack33272 = extraout_RDX_01;
            if (lVar3 < 0) goto code_r0x00103138;
            pcVar8 = (char *)(ulong)uVar11;
            pcStack33248 = (code *)&UNK_0010319d;
            lVar3 = safe_read(pcVar8,pcStack33264,0x2000);
            if (lVar3 == -1) goto code_r0x001031e0;
          } while (lVar3 != 0);
          uVar7 = 1;
          uStack33272 = extraout_RDX_01;
        }
code_r0x0010313a:
        if (lStack25008 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar7;
        }
        pcStack33248 = usage;
        func_0x001015d0();
        puVar12 = program_name;
        uVar5 = 5;
        uStack33288 = *(undefined8 *)(in_FS_OFFSET + 0x28);
        pcStack33248 = (code *)uVar17;
        if ((int)pcVar8 == 0) goto code_r0x001032dd;
        uVar5 = func_0x001015a0(0,&UNK_00106a90,5);
        func_0x001017e0(stderr,1,uVar5,puVar12);
        do {
          func_0x001017c0((ulong)pcVar8 & 0xffffffff);
          uVar5 = extraout_RDX_02;
code_r0x001032dd:
          uVar5 = func_0x001015a0(0,&UNK_00106ab8,uVar5);
          func_0x00101760(1,uVar5,puVar12);
          uVar5 = func_0x001015a0(0,&UNK_00106ae0,5);
          func_0x00101760(1,uVar5,10);
          uVar5 = stdout;
          uVar6 = func_0x001015a0(0,&UNK_00106b68,5);
          func_0x001016a0(uVar6,uVar5);
          uVar5 = stdout;
          uVar6 = func_0x001015a0(0,&UNK_00106ba0,5);
          func_0x001016a0(uVar6,uVar5);
          uVar5 = func_0x001015a0(0,&UNK_00106bf0,5);
          func_0x00101760(1,uVar5,10);
          uVar5 = stdout;
          uVar6 = func_0x001015a0(0,&UNK_00106d80,5);
          func_0x001016a0(uVar6,uVar5);
          uVar5 = stdout;
          uVar6 = func_0x001015a0(0,&UNK_00106e08,5);
          func_0x001016a0(uVar6,uVar5);
          uVar5 = stdout;
          uVar6 = func_0x001015a0(0,&UNK_00106e48,5);
          func_0x001016a0(uVar6,uVar5);
          uVar5 = stdout;
          uVar6 = func_0x001015a0(0,&UNK_00106e78,5);
          func_0x001016a0(uVar6,uVar5);
          uVar5 = stdout;
          uVar6 = func_0x001015a0(0,&UNK_00106eb0,5);
          func_0x001016a0(uVar6,uVar5);
          uStack33312 = 0;
          uStack33304 = 0;
          pbStack33408 = &UNK_001068b2;
          apbStack33392[4] = &UNK_001068f3;
          puStack33400 = &UNK_001068b4;
          puStack33344 = &UNK_001068fd;
          apbStack33392[0] = &UNK_0010692c;
          puStack33328 = &UNK_00106907;
          apbStack33392[1] = &UNK_001068c4;
          apbStack33392[2] = &UNK_001068da;
          apbStack33392[3] = &UNK_001068e4;
          puStack33352 = &UNK_001068e4;
          puStack33336 = &UNK_001068e4;
          puStack33320 = &UNK_001068e4;
          ppbVar10 = &pbStack33408;
          do {
            ppbVar10 = ppbVar10;
            ppbVar10 = ppbVar10 + 2;
            pbVar16 = *ppbVar10;
            bVar19 = false;
            bVar20 = pbVar16 == (byte *)0x0;
            if (bVar20) break;
            lVar3 = 5;
            pbVar13 = &UNK_001068ad;
            do {
              if (lVar3 == 0) break;
              lVar3 = lVar3 + -1;
              bVar19 = *pbVar13 < *pbVar16;
              bVar20 = *pbVar13 == *pbVar16;
              pbVar13 = pbVar13 + (ulong)bVar21 * -2 + 1;
              pbVar16 = pbVar16 + (ulong)bVar21 * -2 + 1;
            } while (bVar20);
          } while ((!bVar19 && !bVar20) != bVar19);
          pbVar16 = ppbVar10[3];
          if (pbVar16 == (byte *)0x0) {
            uVar5 = func_0x001015a0(0,&UNK_00106911,5);
            func_0x00101760(1,uVar5,&UNK_00106928,&UNK_00106f88);
            lVar3 = func_0x00101750(5,0);
            if ((lVar3 != 0) && (iVar2 = func_0x00101530(lVar3,&UNK_00106936,3), iVar2 != 0)) {
              pbVar16 = &UNK_001068ad;
              goto code_r0x00103678;
            }
            pbVar16 = &UNK_001068ad;
            puVar12 = &UNK_001068ce;
            uVar5 = func_0x001015a0(0,&UNK_0010693a,5);
            func_0x00101760(1,uVar5,&UNK_00106f88,&UNK_001068ad);
          }
          else {
            uVar5 = func_0x001015a0(0,&UNK_00106911,5);
            func_0x00101760(1,uVar5,&UNK_00106928,&UNK_00106f88);
            lVar3 = func_0x00101750(5,0);
            if ((lVar3 != 0) && (iVar2 = func_0x00101530(lVar3,&UNK_00106936,3), iVar2 != 0)) {
code_r0x00103678:
              uVar5 = stdout;
              uVar6 = func_0x001015a0(0,&UNK_00106fb0,5);
              func_0x001016a0(uVar6,uVar5);
            }
            uVar5 = func_0x001015a0(0,&UNK_0010693a,5);
            func_0x00101760(1,uVar5,&UNK_00106f88,&UNK_001068ad);
            puVar12 = &UNK_00107621;
            if (pbVar16 == &UNK_001068ad) {
              puVar12 = &UNK_001068ce;
            }
          }
          uVar5 = func_0x001015a0(0,&UNK_00106ff8,5);
          func_0x00101760(1,uVar5,pbVar16,puVar12);
        } while( true );
      }
      pcStack24952 = &UNK_00102f7f;
      uVar5 = quotearg_n_style_colon(0,3,param_2);
      puVar12 = &UNK_00106890;
    }
    pcStack24952 = &UNK_00102f95;
    uVar6 = func_0x001015a0(0,puVar12,5);
    pcStack24952 = &UNK_00102f9d;
    puVar4 = (uint *)func_0x00101520();
    uVar7 = (ulong)*puVar4;
  }
  else {
    pcStack33264 = acStack16513 + 1;
    unaff_R15 = acStack16513;
    pcVar15 = (char *)((ulong)param_2 & 0xffffffff);
    unaff_R14 = extraout_RDX;
    while( true ) {
      pcStack16664 = &UNK_00102d36;
      param_2 = pcStack33264;
      pcVar8 = pcVar15;
      pcVar14 = (char *)safe_read(pcVar15,pcStack33264,0x2000);
      if (pcVar14 == (char *)0xffffffffffffffff) break;
      unaff_R13 = param_1;
      if (pcVar14 == (char *)0x0) goto code_r0x00102d9c;
      unaff_RBX = (char *)0x0;
      do {
        unaff_RBX = unaff_RBX + 1;
        if ((unaff_R15[(long)unaff_RBX] == line_end) &&
           (unaff_R14 = unaff_R14 + -1, unaff_R14 == (char *)0x0)) {
          unaff_R14 = unaff_RBX + -(long)pcVar14;
          pcStack16664 = &UNK_00102d83;
          lVar3 = func_0x00101620(pcVar15,unaff_R14,1);
          if (lVar3 < 0) {
            pcStack16664 = &UNK_00102e32;
            iVar2 = func_0x00101710(1,pcVar15,auStack16656);
            if ((iVar2 != 0) || ((uStack16632 & 0xf000) == 0x8000)) {
              pcStack16664 = &UNK_00102e5d;
              elseek(pcVar15,unaff_R14,1,param_1);
            }
          }
          pcStack16664 = &UNK_00102d97;
          param_2 = unaff_RBX;
          pcVar8 = pcStack33264;
          xwrite_stdout_part_6();
          goto code_r0x00102d9c;
        }
      } while (pcVar14 != unaff_RBX);
      pcStack16664 = &UNK_00102dd3;
      xwrite_stdout_part_6(pcStack33264,pcVar14);
    }
    pcStack16664 = &UNK_00102de5;
    uVar5 = quotearg_style(4,param_1);
    pcStack16664 = &UNK_00102dfb;
    uVar6 = func_0x001015a0(0,&UNK_0010687f,5);
    pcStack16664 = &UNK_00102e03;
    puVar4 = (uint *)func_0x00101520();
    uVar7 = (ulong)*puVar4;
    pcStack16664 = &UNK_00102e14;
  }
code_r0x00101770:
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)PTR_error_00309f78)(0,uVar7,uVar6,uVar5);
  return uVar5;
}

