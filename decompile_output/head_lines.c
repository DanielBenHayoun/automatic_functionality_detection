
/* WARNING: Possible PIC construction at 0x00102f22: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00103219: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00102e0f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010321e) */
/* WARNING: Removing unreachable block (ram,0x00102f27) */
/* WARNING: Removing unreachable block (ram,0x00102e14) */

ulong head_lines(char *param_1,char *param_2,char *param_3,undefined8 param_4,long param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar9;
  undefined8 extraout_RDX_01;
  byte **ppbVar10;
  char *unaff_RBX;
  char *unaff_RBP;
  uint uVar11;
  undefined *puVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  char *unaff_R12;
  char *pcVar16;
  byte *pbVar17;
  char *unaff_R13;
  ulong uVar18;
  char *unaff_R14;
  char *pcVar19;
  char *unaff_R15;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  byte *pbStack25160;
  undefined *puStack25152;
  byte *apbStack25144 [5];
  undefined *puStack25104;
  undefined *puStack25096;
  undefined *puStack25088;
  undefined *puStack25080;
  undefined *puStack25072;
  undefined8 uStack25064;
  undefined8 uStack25056;
  undefined8 uStack25040;
  ulong uStack25024;
  char *pcStack25016;
  ulong uStack25008;
  code *pcStack25000;
  char *pcStack24984;
  ulong uStack24976;
  long lStack24968;
  char acStack24960 [8200];
  long lStack16760;
  char *pcStack16744;
  char *pcStack16736;
  char *pcStack16728;
  char *pcStack16720;
  char *pcStack16712;
  char *pcStack16704;
  char *pcStack16688;
  char *pcStack16680;
  char acStack16672 [8200];
  ulong uStack8472;
  char *pcStack8456;
  char *pcStack8448;
  char *pcStack8440;
  char *pcStack8432;
  char *pcStack8424;
  char *pcStack8416;
  undefined auStack8408 [24];
  uint uStack8384;
  char acStack8265 [8201];
  long lStack64;
  
  bVar22 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar14 = param_1;
  if (param_3 == (char *)0x0) {
code_r0x00102d9c:
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
    pcStack8416 = &UNK_00102e67;
    func_0x001015d0();
    uStack8472 = *(ulong *)(in_FS_OFFSET + 0x28);
    pcVar15 = pcVar14;
    pcVar19 = unaff_R14;
    pcStack8456 = unaff_RBX;
    pcStack8448 = unaff_RBP;
    pcStack8440 = unaff_R12;
    pcStack8432 = unaff_R13;
    pcStack8424 = unaff_R14;
    pcStack8416 = unaff_R15;
    if (extraout_RDX != (char *)0x0) {
      pcVar19 = (char *)((ulong)param_2 & 0xffffffff);
      pcVar1 = extraout_RDX;
      pcVar16 = (char *)0x2000;
      do {
        unaff_RBP = pcVar1;
        unaff_R12 = pcVar16;
        if (unaff_RBP < pcVar16) {
          unaff_R12 = unaff_RBP;
        }
        pcStack16680 = &UNK_00102ee2;
        param_2 = acStack16672;
        pcVar15 = pcVar19;
        unaff_RBX = (char *)safe_read(pcVar19,acStack16672,unaff_R12);
        if (unaff_RBX == (char *)0xffffffffffffffff) {
          pcStack16680 = &UNK_00102ef8;
          uVar6 = quotearg_style(4,pcVar14);
          pcStack16680 = &UNK_00102f0e;
          uVar7 = func_0x001015a0(0,&UNK_0010687f,5);
          pcStack16680 = &UNK_00102f16;
          puVar5 = (uint *)func_0x00101520();
          uVar8 = (ulong)*puVar5;
          pcStack16680 = &UNK_00102f27;
          goto code_r0x00101770;
        }
        unaff_R13 = acStack16672;
        unaff_R15 = pcVar14;
        if (unaff_RBX == (char *)0x0) break;
        pcStack16680 = &UNK_00102ec8;
        param_2 = unaff_RBX;
        pcVar15 = acStack16672;
        xwrite_stdout_part_6();
        unaff_RBP = unaff_RBP + -(long)unaff_RBX;
        pcVar1 = unaff_RBP;
        pcVar16 = unaff_R12;
        unaff_R13 = acStack16672;
      } while (unaff_RBP != (char *)0x0);
    }
    uVar8 = uStack8472 ^ *(ulong *)(in_FS_OFFSET + 0x28);
    if (uVar8 == 0) {
      return 1;
    }
    pcStack16680 = &UNK_00102f5f;
    func_0x001015d0();
    uVar11 = (uint)param_2;
    pcStack16688 = unaff_RBX;
    pcStack16680 = unaff_RBP;
    if ((int)pcVar15 == 1) {
      pcStack16704 = &UNK_00102fc2;
      uVar6 = quotearg_style(4);
      puVar12 = &UNK_0010687f;
    }
    else {
      if ((int)pcVar15 != 2) {
        pcStack16704 = &UNK_00102fd8;
        func_0x00101510();
        pcVar14 = (char *)(ulong)uVar11;
        lVar4 = param_5 - uVar8;
        lStack16760 = *(long *)(in_FS_OFFSET + 0x28);
        uVar9 = (ulong)((int)lVar4 + ((uint)(lVar4 >> 0x5f) >> 0x13) & 0x1fff) -
                ((ulong)(lVar4 >> 0x3f) >> 0x33);
        uVar18 = 0x2000;
        if (uVar9 != 0) {
          uVar18 = uVar9;
        }
        uStack25008 = param_5 - uVar18;
        pcStack25000 = (code *)&UNK_00103054;
        pcStack24984 = pcVar15;
        uStack24976 = uVar8;
        pcStack16744 = unaff_RBX;
        pcStack16736 = unaff_RBP;
        pcStack16728 = unaff_R12;
        pcStack16720 = unaff_R13;
        pcStack16712 = pcVar19;
        pcStack16704 = unaff_R15;
        lVar4 = elseek(pcVar14,uStack25008,0,pcVar15);
        uStack25024 = extraout_RDX_00;
        if (lVar4 < 0) {
code_r0x00103138:
          uVar8 = 0;
        }
        else {
          unaff_RBP = acStack24960;
          pcVar14 = (char *)(ulong)uVar11;
          pcStack25000 = (code *)&UNK_00103070;
          lVar4 = safe_read(pcVar14,unaff_RBP,uVar18);
          if (lVar4 == -1) {
code_r0x001031e0:
            pcStack25000 = (code *)&UNK_001031ef;
            uVar6 = quotearg_style(4,pcStack24984);
            pcStack25000 = (code *)&UNK_00103205;
            uVar7 = func_0x001015a0(0,&UNK_0010687f,5);
            pcStack25000 = (code *)&UNK_0010320d;
            puVar5 = (uint *)func_0x00101520();
            uVar8 = (ulong)*puVar5;
            pcStack25000 = (code *)&UNK_0010321e;
            goto code_r0x00101770;
          }
          uVar8 = extraout_RDX_00;
          if ((extraout_RDX_00 != 0) && (lVar4 != 0)) {
            uVar8 = extraout_RDX_00 - (*(char *)((long)&lStack24968 + lVar4 + 7) != line_end);
          }
          do {
            if (lVar4 != 0) {
              uVar18 = (ulong)(uint)(int)line_end;
              do {
                if (extraout_RDX_00 == 0) {
                  lVar4 = lVar4 + -1;
                  uStack25024 = uStack24976;
                }
                else {
                  pcStack25000 = (code *)&UNK_001030ec;
                  pcVar14 = unaff_RBP;
                  lVar4 = func_0x00101780(unaff_RBP,uVar18,lVar4);
                  if (lVar4 == 0) break;
                  lVar4 = lVar4 - (long)unaff_RBP;
                  uStack25024 = uStack24976;
                }
                uStack24976 = uStack25024;
                if (uVar8 == 0) {
                  if ((long)uStack25024 < (long)uStack25008) {
                    pcVar14 = (char *)(ulong)uVar11;
                    pcStack25000 = (code *)&UNK_00103244;
                    lStack24968 = lVar4;
                    lVar4 = elseek(pcVar14,uStack25024,0,pcStack24984);
                    if (lVar4 < 0) goto code_r0x00103138;
                    pcStack25000 = (code *)&UNK_0010325b;
                    uVar2 = copy_fd((ulong)uVar11,uStack25008 - uStack25024);
                    lVar4 = lStack24968;
                    if (uVar2 != 0) {
                      pcVar14 = (char *)(ulong)uVar2;
                      pcStack25000 = (code *)&UNK_00103274;
                      diagnose_copy_fd_failure(pcVar14,pcStack24984);
                      uVar8 = 0;
                      goto code_r0x0010313a;
                    }
                  }
                  uStack25024 = lVar4 + 1;
                  if (uStack25024 != 0) {
                    pcStack25000 = (code *)&UNK_001031db;
                    xwrite_stdout_part_6(unaff_RBP,uStack25024);
                  }
                  pcVar14 = (char *)(ulong)uVar11;
                  pcStack25000 = (code *)&UNK_0010312b;
                  uVar8 = elseek(pcVar14,uStack25008 + uStack25024,0,pcStack24984);
                  uVar8 = ~uVar8 >> 0x3f;
                  goto code_r0x0010313a;
                }
                uVar8 = uVar8 - 1;
              } while (lVar4 != 0);
            }
            if (uStack25008 == uStack24976) break;
            uStack25008 = uStack25008 - 0x2000;
            pcVar14 = (char *)(ulong)uVar11;
            pcStack25000 = (code *)&UNK_00103188;
            lVar4 = elseek(pcVar14,uStack25008,0,pcStack24984);
            uStack25024 = extraout_RDX_00;
            if (lVar4 < 0) goto code_r0x00103138;
            pcVar14 = (char *)(ulong)uVar11;
            pcStack25000 = (code *)&UNK_0010319d;
            lVar4 = safe_read(pcVar14,unaff_RBP,0x2000);
            if (lVar4 == -1) goto code_r0x001031e0;
          } while (lVar4 != 0);
          uVar8 = 1;
          uStack25024 = extraout_RDX_00;
        }
code_r0x0010313a:
        if (lStack16760 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar8;
        }
        pcStack25000 = usage;
        func_0x001015d0();
        puVar12 = program_name;
        uVar6 = 5;
        uStack25040 = *(undefined8 *)(in_FS_OFFSET + 0x28);
        pcStack25016 = unaff_RBP;
        pcStack25000 = (code *)uVar18;
        if ((int)pcVar14 == 0) goto code_r0x001032dd;
        uVar6 = func_0x001015a0(0,&UNK_00106a90,5);
        func_0x001017e0(stderr,1,uVar6,puVar12);
        do {
          func_0x001017c0((ulong)pcVar14 & 0xffffffff);
          uVar6 = extraout_RDX_01;
code_r0x001032dd:
          uVar6 = func_0x001015a0(0,&UNK_00106ab8,uVar6);
          func_0x00101760(1,uVar6,puVar12);
          uVar6 = func_0x001015a0(0,&UNK_00106ae0,5);
          func_0x00101760(1,uVar6,10);
          uVar6 = stdout;
          uVar7 = func_0x001015a0(0,&UNK_00106b68,5);
          func_0x001016a0(uVar7,uVar6);
          uVar6 = stdout;
          uVar7 = func_0x001015a0(0,&UNK_00106ba0,5);
          func_0x001016a0(uVar7,uVar6);
          uVar6 = func_0x001015a0(0,&UNK_00106bf0,5);
          func_0x00101760(1,uVar6,10);
          uVar6 = stdout;
          uVar7 = func_0x001015a0(0,&UNK_00106d80,5);
          func_0x001016a0(uVar7,uVar6);
          uVar6 = stdout;
          uVar7 = func_0x001015a0(0,&UNK_00106e08,5);
          func_0x001016a0(uVar7,uVar6);
          uVar6 = stdout;
          uVar7 = func_0x001015a0(0,&UNK_00106e48,5);
          func_0x001016a0(uVar7,uVar6);
          uVar6 = stdout;
          uVar7 = func_0x001015a0(0,&UNK_00106e78,5);
          func_0x001016a0(uVar7,uVar6);
          uVar6 = stdout;
          uVar7 = func_0x001015a0(0,&UNK_00106eb0,5);
          func_0x001016a0(uVar7,uVar6);
          uStack25064 = 0;
          uStack25056 = 0;
          pbStack25160 = &UNK_001068b2;
          apbStack25144[4] = &UNK_001068f3;
          puStack25152 = &UNK_001068b4;
          puStack25096 = &UNK_001068fd;
          apbStack25144[0] = &UNK_0010692c;
          puStack25080 = &UNK_00106907;
          apbStack25144[1] = &UNK_001068c4;
          apbStack25144[2] = &UNK_001068da;
          apbStack25144[3] = &UNK_001068e4;
          puStack25104 = &UNK_001068e4;
          puStack25088 = &UNK_001068e4;
          puStack25072 = &UNK_001068e4;
          ppbVar10 = &pbStack25160;
          do {
            ppbVar10 = ppbVar10;
            ppbVar10 = ppbVar10 + 2;
            pbVar17 = *ppbVar10;
            bVar20 = false;
            bVar21 = pbVar17 == (byte *)0x0;
            if (bVar21) break;
            lVar4 = 5;
            pbVar13 = &UNK_001068ad;
            do {
              if (lVar4 == 0) break;
              lVar4 = lVar4 + -1;
              bVar20 = *pbVar13 < *pbVar17;
              bVar21 = *pbVar13 == *pbVar17;
              pbVar13 = pbVar13 + (ulong)bVar22 * -2 + 1;
              pbVar17 = pbVar17 + (ulong)bVar22 * -2 + 1;
            } while (bVar21);
          } while ((!bVar20 && !bVar21) != bVar20);
          pbVar17 = ppbVar10[3];
          if (pbVar17 == (byte *)0x0) {
            uVar6 = func_0x001015a0(0,&UNK_00106911,5);
            func_0x00101760(1,uVar6,&UNK_00106928,&UNK_00106f88);
            lVar4 = func_0x00101750(5,0);
            if ((lVar4 != 0) && (iVar3 = func_0x00101530(lVar4,&UNK_00106936,3), iVar3 != 0)) {
              pbVar17 = &UNK_001068ad;
              goto code_r0x00103678;
            }
            pbVar17 = &UNK_001068ad;
            puVar12 = &UNK_001068ce;
            uVar6 = func_0x001015a0(0,&UNK_0010693a,5);
            func_0x00101760(1,uVar6,&UNK_00106f88,&UNK_001068ad);
          }
          else {
            uVar6 = func_0x001015a0(0,&UNK_00106911,5);
            func_0x00101760(1,uVar6,&UNK_00106928,&UNK_00106f88);
            lVar4 = func_0x00101750(5,0);
            if ((lVar4 != 0) && (iVar3 = func_0x00101530(lVar4,&UNK_00106936,3), iVar3 != 0)) {
code_r0x00103678:
              uVar6 = stdout;
              uVar7 = func_0x001015a0(0,&UNK_00106fb0,5);
              func_0x001016a0(uVar7,uVar6);
            }
            uVar6 = func_0x001015a0(0,&UNK_0010693a,5);
            func_0x00101760(1,uVar6,&UNK_00106f88,&UNK_001068ad);
            puVar12 = &UNK_00107621;
            if (pbVar17 == &UNK_001068ad) {
              puVar12 = &UNK_001068ce;
            }
          }
          uVar6 = func_0x001015a0(0,&UNK_00106ff8,5);
          func_0x00101760(1,uVar6,pbVar17,puVar12);
        } while( true );
      }
      pcStack16704 = &UNK_00102f7f;
      uVar6 = quotearg_n_style_colon(0,3,param_2);
      puVar12 = &UNK_00106890;
    }
    pcStack16704 = &UNK_00102f95;
    uVar7 = func_0x001015a0(0,puVar12,5);
    pcStack16704 = &UNK_00102f9d;
    puVar5 = (uint *)func_0x00101520();
    uVar8 = (ulong)*puVar5;
  }
  else {
    unaff_RBP = acStack8265 + 1;
    unaff_R15 = acStack8265;
    unaff_R12 = (char *)((ulong)param_2 & 0xffffffff);
    unaff_R14 = param_3;
    while( true ) {
      pcStack8416 = &UNK_00102d36;
      param_2 = unaff_RBP;
      pcVar14 = unaff_R12;
      pcVar15 = (char *)safe_read(unaff_R12,unaff_RBP,0x2000);
      if (pcVar15 == (char *)0xffffffffffffffff) break;
      unaff_R13 = param_1;
      if (pcVar15 == (char *)0x0) goto code_r0x00102d9c;
      unaff_RBX = (char *)0x0;
      do {
        unaff_RBX = unaff_RBX + 1;
        if ((unaff_R15[(long)unaff_RBX] == line_end) &&
           (unaff_R14 = unaff_R14 + -1, unaff_R14 == (char *)0x0)) {
          unaff_R14 = unaff_RBX + -(long)pcVar15;
          pcStack8416 = &UNK_00102d83;
          lVar4 = func_0x00101620(unaff_R12,unaff_R14,1);
          if (lVar4 < 0) {
            pcStack8416 = &UNK_00102e32;
            iVar3 = func_0x00101710(1,unaff_R12,auStack8408);
            if ((iVar3 != 0) || ((uStack8384 & 0xf000) == 0x8000)) {
              pcStack8416 = &UNK_00102e5d;
              elseek(unaff_R12,unaff_R14,1,param_1);
            }
          }
          pcStack8416 = &UNK_00102d97;
          param_2 = unaff_RBX;
          pcVar14 = unaff_RBP;
          xwrite_stdout_part_6();
          goto code_r0x00102d9c;
        }
      } while (pcVar15 != unaff_RBX);
      pcStack8416 = &UNK_00102dd3;
      xwrite_stdout_part_6(unaff_RBP,pcVar15);
    }
    pcStack8416 = &UNK_00102de5;
    uVar6 = quotearg_style(4,param_1);
    pcStack8416 = &UNK_00102dfb;
    uVar7 = func_0x001015a0(0,&UNK_0010687f,5);
    pcStack8416 = &UNK_00102e03;
    puVar5 = (uint *)func_0x00101520();
    uVar8 = (ulong)*puVar5;
    pcStack8416 = &UNK_00102e14;
  }
code_r0x00101770:
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)PTR_error_00309f78)(0,uVar8,uVar7,uVar6);
  return uVar6;
}

