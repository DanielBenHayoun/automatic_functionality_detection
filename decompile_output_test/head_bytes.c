
/* WARNING: Possible PIC construction at 0x00102f22: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00103219: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00102f27) */
/* WARNING: Removing unreachable block (ram,0x0010321e) */

ulong head_bytes(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                long param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong extraout_RDX;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_RDX_00;
  byte **ppbVar9;
  undefined *unaff_RBX;
  undefined *unaff_RBP;
  uint uVar10;
  undefined *puVar11;
  byte *pbVar12;
  undefined *puVar13;
  undefined *unaff_R12;
  byte *pbVar14;
  undefined *unaff_R13;
  ulong uVar15;
  undefined *unaff_R14;
  undefined *unaff_R15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  byte *pbStack16752;
  undefined *puStack16744;
  byte *apbStack16736 [5];
  undefined *puStack16696;
  undefined *puStack16688;
  undefined *puStack16680;
  undefined *puStack16672;
  undefined *puStack16664;
  undefined8 uStack16656;
  undefined8 uStack16648;
  undefined8 uStack16632;
  ulong uStack16616;
  undefined *puStack16608;
  ulong uStack16600;
  code *pcStack16592;
  undefined *puStack16576;
  ulong uStack16568;
  long lStack16560;
  undefined auStack16552 [8200];
  long lStack8352;
  undefined *puStack8336;
  undefined *puStack8328;
  undefined *puStack8320;
  undefined *puStack8312;
  undefined *puStack8304;
  undefined *puStack8296;
  undefined *puStack8280;
  undefined *puStack8272;
  undefined auStack8264 [8200];
  ulong uStack64;
  
  bVar18 = 0;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar11 = param_1;
  if (param_3 != (undefined *)0x0) {
    unaff_R14 = (undefined *)((ulong)param_2 & 0xffffffff);
    unaff_R12 = (undefined *)0x2000;
    unaff_RBP = param_3;
    do {
      if (unaff_RBP < unaff_R12) {
        unaff_R12 = unaff_RBP;
      }
      puStack8272 = &UNK_00102ee2;
      param_2 = auStack8264;
      puVar11 = unaff_R14;
      unaff_RBX = (undefined *)safe_read(unaff_R14,auStack8264,unaff_R12);
      if (unaff_RBX == (undefined *)0xffffffffffffffff) {
        puStack8272 = &UNK_00102ef8;
        uVar3 = quotearg_style(4,param_1);
        puStack8272 = &UNK_00102f0e;
        uVar4 = func_0x001015a0(0,&UNK_0010687f,5);
        puStack8272 = &UNK_00102f16;
        puVar5 = (uint *)func_0x00101520();
        uVar6 = (ulong)*puVar5;
        puStack8272 = &UNK_00102f27;
        goto code_r0x00101770;
      }
      unaff_R13 = auStack8264;
      unaff_R15 = param_1;
      if (unaff_RBX == (undefined *)0x0) break;
      puStack8272 = &UNK_00102ec8;
      param_2 = unaff_RBX;
      puVar11 = auStack8264;
      xwrite_stdout_part_6();
      unaff_RBP = unaff_RBP + -(long)unaff_RBX;
      unaff_R13 = auStack8264;
    } while (unaff_RBP != (undefined *)0x0);
  }
  uVar6 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar6 == 0) {
    return 1;
  }
  puStack8272 = &UNK_00102f5f;
  func_0x001015d0();
  uVar10 = (uint)param_2;
  puStack8280 = unaff_RBX;
  puStack8272 = unaff_RBP;
  if ((int)puVar11 == 1) {
    puStack8296 = &UNK_00102fc2;
    uVar3 = quotearg_style(4);
    puVar11 = &UNK_0010687f;
  }
  else {
    if ((int)puVar11 != 2) {
      puStack8296 = &UNK_00102fd8;
      func_0x00101510();
      puVar13 = (undefined *)(ulong)uVar10;
      lVar7 = param_5 - uVar6;
      lStack8352 = *(long *)(in_FS_OFFSET + 0x28);
      uVar8 = (ulong)((int)lVar7 + ((uint)(lVar7 >> 0x5f) >> 0x13) & 0x1fff) -
              ((ulong)(lVar7 >> 0x3f) >> 0x33);
      uVar15 = 0x2000;
      if (uVar8 != 0) {
        uVar15 = uVar8;
      }
      uStack16600 = param_5 - uVar15;
      pcStack16592 = (code *)&UNK_00103054;
      puStack16576 = puVar11;
      uStack16568 = uVar6;
      puStack8336 = unaff_RBX;
      puStack8328 = unaff_RBP;
      puStack8320 = unaff_R12;
      puStack8312 = unaff_R13;
      puStack8304 = unaff_R14;
      puStack8296 = unaff_R15;
      lVar7 = elseek(puVar13,uStack16600,0,puVar11);
      uStack16616 = extraout_RDX;
      if (lVar7 < 0) {
code_r0x00103138:
        uVar6 = 0;
code_r0x0010313a:
        if (lStack8352 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar6;
        }
        pcStack16592 = usage;
        func_0x001015d0();
        puVar11 = program_name;
        uVar3 = 5;
        uStack16632 = *(undefined8 *)(in_FS_OFFSET + 0x28);
        puStack16608 = unaff_RBP;
        pcStack16592 = (code *)uVar15;
        if ((int)puVar13 == 0) goto code_r0x001032dd;
        uVar3 = func_0x001015a0(0,&UNK_00106a90,5);
        func_0x001017e0(stderr,1,uVar3,puVar11);
        do {
          func_0x001017c0((ulong)puVar13 & 0xffffffff);
          uVar3 = extraout_RDX_00;
code_r0x001032dd:
          uVar3 = func_0x001015a0(0,&UNK_00106ab8,uVar3);
          func_0x00101760(1,uVar3,puVar11);
          uVar3 = func_0x001015a0(0,&UNK_00106ae0,5);
          func_0x00101760(1,uVar3,10);
          uVar3 = stdout;
          uVar4 = func_0x001015a0(0,&UNK_00106b68,5);
          func_0x001016a0(uVar4,uVar3);
          uVar3 = stdout;
          uVar4 = func_0x001015a0(0,&UNK_00106ba0,5);
          func_0x001016a0(uVar4,uVar3);
          uVar3 = func_0x001015a0(0,&UNK_00106bf0,5);
          func_0x00101760(1,uVar3,10);
          uVar3 = stdout;
          uVar4 = func_0x001015a0(0,&UNK_00106d80,5);
          func_0x001016a0(uVar4,uVar3);
          uVar3 = stdout;
          uVar4 = func_0x001015a0(0,&UNK_00106e08,5);
          func_0x001016a0(uVar4,uVar3);
          uVar3 = stdout;
          uVar4 = func_0x001015a0(0,&UNK_00106e48,5);
          func_0x001016a0(uVar4,uVar3);
          uVar3 = stdout;
          uVar4 = func_0x001015a0(0,&UNK_00106e78,5);
          func_0x001016a0(uVar4,uVar3);
          uVar3 = stdout;
          uVar4 = func_0x001015a0(0,&UNK_00106eb0,5);
          func_0x001016a0(uVar4,uVar3);
          uStack16656 = 0;
          uStack16648 = 0;
          pbStack16752 = &UNK_001068b2;
          apbStack16736[4] = &UNK_001068f3;
          puStack16744 = &UNK_001068b4;
          puStack16688 = &UNK_001068fd;
          apbStack16736[0] = &UNK_0010692c;
          puStack16672 = &UNK_00106907;
          apbStack16736[1] = &UNK_001068c4;
          apbStack16736[2] = &UNK_001068da;
          apbStack16736[3] = &UNK_001068e4;
          puStack16696 = &UNK_001068e4;
          puStack16680 = &UNK_001068e4;
          puStack16664 = &UNK_001068e4;
          ppbVar9 = &pbStack16752;
          do {
            ppbVar9 = ppbVar9;
            ppbVar9 = ppbVar9 + 2;
            pbVar14 = *ppbVar9;
            bVar16 = false;
            bVar17 = pbVar14 == (byte *)0x0;
            if (bVar17) break;
            lVar7 = 5;
            pbVar12 = &UNK_001068ad;
            do {
              if (lVar7 == 0) break;
              lVar7 = lVar7 + -1;
              bVar16 = *pbVar12 < *pbVar14;
              bVar17 = *pbVar12 == *pbVar14;
              pbVar12 = pbVar12 + (ulong)bVar18 * -2 + 1;
              pbVar14 = pbVar14 + (ulong)bVar18 * -2 + 1;
            } while (bVar17);
          } while ((!bVar16 && !bVar17) != bVar16);
          pbVar14 = ppbVar9[3];
          if (pbVar14 == (byte *)0x0) {
            uVar3 = func_0x001015a0(0,&UNK_00106911,5);
            func_0x00101760(1,uVar3,&UNK_00106928,&UNK_00106f88);
            lVar7 = func_0x00101750(5,0);
            if ((lVar7 != 0) && (iVar2 = func_0x00101530(lVar7,&UNK_00106936,3), iVar2 != 0)) {
              pbVar14 = &UNK_001068ad;
              goto code_r0x00103678;
            }
            pbVar14 = &UNK_001068ad;
            puVar11 = &UNK_001068ce;
            uVar3 = func_0x001015a0(0,&UNK_0010693a,5);
            func_0x00101760(1,uVar3,&UNK_00106f88,&UNK_001068ad);
          }
          else {
            uVar3 = func_0x001015a0(0,&UNK_00106911,5);
            func_0x00101760(1,uVar3,&UNK_00106928,&UNK_00106f88);
            lVar7 = func_0x00101750(5,0);
            if ((lVar7 != 0) && (iVar2 = func_0x00101530(lVar7,&UNK_00106936,3), iVar2 != 0)) {
code_r0x00103678:
              uVar3 = stdout;
              uVar4 = func_0x001015a0(0,&UNK_00106fb0,5);
              func_0x001016a0(uVar4,uVar3);
            }
            uVar3 = func_0x001015a0(0,&UNK_0010693a,5);
            func_0x00101760(1,uVar3,&UNK_00106f88,&UNK_001068ad);
            puVar11 = &UNK_00107621;
            if (pbVar14 == &UNK_001068ad) {
              puVar11 = &UNK_001068ce;
            }
          }
          uVar3 = func_0x001015a0(0,&UNK_00106ff8,5);
          func_0x00101760(1,uVar3,pbVar14,puVar11);
        } while( true );
      }
      unaff_RBP = auStack16552;
      puVar13 = (undefined *)(ulong)uVar10;
      pcStack16592 = (code *)&UNK_00103070;
      lVar7 = safe_read(puVar13,unaff_RBP,uVar15);
      if (lVar7 != -1) {
        uVar6 = extraout_RDX;
        if ((extraout_RDX != 0) && (lVar7 != 0)) {
          uVar6 = extraout_RDX - (*(char *)((long)&lStack16560 + lVar7 + 7) != line_end);
        }
        do {
          if (lVar7 != 0) {
            uVar15 = (ulong)(uint)(int)line_end;
            do {
              if (extraout_RDX == 0) {
                lVar7 = lVar7 + -1;
                uStack16616 = uStack16568;
              }
              else {
                pcStack16592 = (code *)&UNK_001030ec;
                puVar13 = unaff_RBP;
                lVar7 = func_0x00101780(unaff_RBP,uVar15,lVar7);
                if (lVar7 == 0) break;
                lVar7 = lVar7 - (long)unaff_RBP;
                uStack16616 = uStack16568;
              }
              uStack16568 = uStack16616;
              if (uVar6 == 0) {
                if ((long)uStack16616 < (long)uStack16600) {
                  puVar13 = (undefined *)(ulong)uVar10;
                  pcStack16592 = (code *)&UNK_00103244;
                  lStack16560 = lVar7;
                  lVar7 = elseek(puVar13,uStack16616,0,puStack16576);
                  if (lVar7 < 0) goto code_r0x00103138;
                  pcStack16592 = (code *)&UNK_0010325b;
                  uVar1 = copy_fd((ulong)uVar10,uStack16600 - uStack16616);
                  lVar7 = lStack16560;
                  if (uVar1 != 0) {
                    puVar13 = (undefined *)(ulong)uVar1;
                    pcStack16592 = (code *)&UNK_00103274;
                    diagnose_copy_fd_failure(puVar13,puStack16576);
                    uVar6 = 0;
                    goto code_r0x0010313a;
                  }
                }
                uStack16616 = lVar7 + 1;
                if (uStack16616 != 0) {
                  pcStack16592 = (code *)&UNK_001031db;
                  xwrite_stdout_part_6(unaff_RBP,uStack16616);
                }
                puVar13 = (undefined *)(ulong)uVar10;
                pcStack16592 = (code *)&UNK_0010312b;
                uVar6 = elseek(puVar13,uStack16600 + uStack16616,0,puStack16576);
                uVar6 = ~uVar6 >> 0x3f;
                goto code_r0x0010313a;
              }
              uVar6 = uVar6 - 1;
            } while (lVar7 != 0);
          }
          if (uStack16600 == uStack16568) break;
          uStack16600 = uStack16600 - 0x2000;
          puVar13 = (undefined *)(ulong)uVar10;
          pcStack16592 = (code *)&UNK_00103188;
          lVar7 = elseek(puVar13,uStack16600,0,puStack16576);
          uStack16616 = extraout_RDX;
          if (lVar7 < 0) goto code_r0x00103138;
          puVar13 = (undefined *)(ulong)uVar10;
          pcStack16592 = (code *)&UNK_0010319d;
          lVar7 = safe_read(puVar13,unaff_RBP,0x2000);
          if (lVar7 == -1) goto code_r0x001031e0;
        } while (lVar7 != 0);
        uVar6 = 1;
        uStack16616 = extraout_RDX;
        goto code_r0x0010313a;
      }
code_r0x001031e0:
      pcStack16592 = (code *)&UNK_001031ef;
      uVar3 = quotearg_style(4,puStack16576);
      pcStack16592 = (code *)&UNK_00103205;
      uVar4 = func_0x001015a0(0,&UNK_0010687f,5);
      pcStack16592 = (code *)&UNK_0010320d;
      puVar5 = (uint *)func_0x00101520();
      uVar6 = (ulong)*puVar5;
      pcStack16592 = (code *)&UNK_0010321e;
      goto code_r0x00101770;
    }
    puStack8296 = &UNK_00102f7f;
    uVar3 = quotearg_n_style_colon(0,3,param_2);
    puVar11 = &UNK_00106890;
  }
  puStack8296 = &UNK_00102f95;
  uVar4 = func_0x001015a0(0,puVar11,5);
  puStack8296 = &UNK_00102f9d;
  puVar5 = (uint *)func_0x00101520();
  uVar6 = (ulong)*puVar5;
code_r0x00101770:
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)PTR_error_00309f78)(0,uVar6,uVar4,uVar3);
  return uVar3;
}

