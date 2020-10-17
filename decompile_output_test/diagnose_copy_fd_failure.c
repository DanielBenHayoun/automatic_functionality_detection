
/* WARNING: Possible PIC construction at 0x00103219: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010321e) */

ulong diagnose_copy_fd_failure
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  long extraout_RDX;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_RDX_00;
  byte **ppbVar8;
  undefined *puVar9;
  undefined *unaff_RBP;
  uint uVar10;
  undefined *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  byte *pbStack8488;
  undefined *puStack8480;
  byte *apbStack8472 [5];
  undefined *puStack8432;
  undefined *puStack8424;
  undefined *puStack8416;
  undefined *puStack8408;
  undefined *puStack8400;
  undefined8 uStack8392;
  undefined8 uStack8384;
  undefined8 uStack8368;
  long lStack8352;
  undefined *puStack8344;
  long lStack8336;
  code *pcStack8328;
  undefined8 uStack8312;
  long lStack8304;
  long lStack8296;
  undefined auStack8288 [8200];
  long lStack88;
  
  uVar10 = (uint)param_2;
  bVar18 = 0;
  if ((int)param_1 == 1) {
    uVar3 = quotearg_style(4);
    puVar11 = &UNK_0010687f;
  }
  else {
    if ((int)param_1 != 2) {
      func_0x00101510();
      puVar11 = (undefined *)(ulong)uVar10;
      lVar6 = param_5 - param_4;
      lStack88 = *(long *)(in_FS_OFFSET + 0x28);
      uVar7 = (ulong)((int)lVar6 + ((uint)(lVar6 >> 0x5f) >> 0x13) & 0x1fff) -
              ((ulong)(lVar6 >> 0x3f) >> 0x33);
      uVar14 = 0x2000;
      if (uVar7 != 0) {
        uVar14 = uVar7;
      }
      lStack8336 = param_5 - uVar14;
      pcStack8328 = (code *)&UNK_00103054;
      uStack8312 = param_1;
      lStack8304 = param_4;
      lVar6 = elseek(puVar11,lStack8336,0,param_1);
      lStack8352 = extraout_RDX;
      if (lVar6 < 0) {
code_r0x00103138:
        uVar7 = 0;
code_r0x0010313a:
        if (lStack88 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar7;
        }
        pcStack8328 = usage;
        func_0x001015d0();
        puVar9 = program_name;
        uVar3 = 5;
        uStack8368 = *(undefined8 *)(in_FS_OFFSET + 0x28);
        puStack8344 = unaff_RBP;
        pcStack8328 = (code *)uVar14;
        if ((int)puVar11 == 0) goto code_r0x001032dd;
        uVar3 = func_0x001015a0(0,&UNK_00106a90,5);
        func_0x001017e0(stderr,1,uVar3,puVar9);
        do {
          func_0x001017c0((ulong)puVar11 & 0xffffffff);
          uVar3 = extraout_RDX_00;
code_r0x001032dd:
          uVar3 = func_0x001015a0(0,&UNK_00106ab8,uVar3);
          func_0x00101760(1,uVar3,puVar9);
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
          uStack8392 = 0;
          uStack8384 = 0;
          pbStack8488 = &UNK_001068b2;
          apbStack8472[4] = &UNK_001068f3;
          puStack8480 = &UNK_001068b4;
          puStack8424 = &UNK_001068fd;
          apbStack8472[0] = &UNK_0010692c;
          puStack8408 = &UNK_00106907;
          apbStack8472[1] = &UNK_001068c4;
          apbStack8472[2] = &UNK_001068da;
          apbStack8472[3] = &UNK_001068e4;
          puStack8432 = &UNK_001068e4;
          puStack8416 = &UNK_001068e4;
          puStack8400 = &UNK_001068e4;
          ppbVar8 = &pbStack8488;
          do {
            ppbVar8 = ppbVar8;
            ppbVar8 = ppbVar8 + 2;
            pbVar13 = *ppbVar8;
            bVar16 = false;
            bVar17 = pbVar13 == (byte *)0x0;
            if (bVar17) break;
            lVar6 = 5;
            pbVar12 = &UNK_001068ad;
            do {
              if (lVar6 == 0) break;
              lVar6 = lVar6 + -1;
              bVar16 = *pbVar12 < *pbVar13;
              bVar17 = *pbVar12 == *pbVar13;
              pbVar12 = pbVar12 + (ulong)bVar18 * -2 + 1;
              pbVar13 = pbVar13 + (ulong)bVar18 * -2 + 1;
            } while (bVar17);
          } while ((!bVar16 && !bVar17) != bVar16);
          pbVar13 = ppbVar8[3];
          if (pbVar13 == (byte *)0x0) {
            uVar3 = func_0x001015a0(0,&UNK_00106911,5);
            func_0x00101760(1,uVar3,&UNK_00106928,&UNK_00106f88);
            lVar6 = func_0x00101750(5,0);
            if ((lVar6 != 0) && (iVar2 = func_0x00101530(lVar6,&UNK_00106936,3), iVar2 != 0)) {
              pbVar13 = &UNK_001068ad;
              goto code_r0x00103678;
            }
            pbVar13 = &UNK_001068ad;
            puVar9 = &UNK_001068ce;
            uVar3 = func_0x001015a0(0,&UNK_0010693a,5);
            func_0x00101760(1,uVar3,&UNK_00106f88,&UNK_001068ad);
          }
          else {
            uVar3 = func_0x001015a0(0,&UNK_00106911,5);
            func_0x00101760(1,uVar3,&UNK_00106928,&UNK_00106f88);
            lVar6 = func_0x00101750(5,0);
            if ((lVar6 != 0) && (iVar2 = func_0x00101530(lVar6,&UNK_00106936,3), iVar2 != 0)) {
code_r0x00103678:
              uVar3 = stdout;
              uVar4 = func_0x001015a0(0,&UNK_00106fb0,5);
              func_0x001016a0(uVar4,uVar3);
            }
            uVar3 = func_0x001015a0(0,&UNK_0010693a,5);
            func_0x00101760(1,uVar3,&UNK_00106f88,&UNK_001068ad);
            puVar9 = &UNK_00107621;
            if (pbVar13 == &UNK_001068ad) {
              puVar9 = &UNK_001068ce;
            }
          }
          uVar3 = func_0x001015a0(0,&UNK_00106ff8,5);
          func_0x00101760(1,uVar3,pbVar13,puVar9);
        } while( true );
      }
      unaff_RBP = auStack8288;
      puVar11 = (undefined *)(ulong)uVar10;
      pcStack8328 = (code *)&UNK_00103070;
      lVar6 = safe_read(puVar11,unaff_RBP,uVar14);
      if (lVar6 != -1) {
        lVar15 = extraout_RDX;
        if ((extraout_RDX != 0) && (lVar6 != 0)) {
          lVar15 = extraout_RDX - (ulong)(*(char *)((long)&lStack8296 + lVar6 + 7) != line_end);
        }
        do {
          if (lVar6 != 0) {
            uVar14 = (ulong)(uint)(int)line_end;
            do {
              if (extraout_RDX == 0) {
                lVar6 = lVar6 + -1;
                lStack8352 = lStack8304;
              }
              else {
                pcStack8328 = (code *)&UNK_001030ec;
                puVar11 = unaff_RBP;
                lVar6 = func_0x00101780(unaff_RBP,uVar14,lVar6);
                if (lVar6 == 0) break;
                lVar6 = lVar6 - (long)unaff_RBP;
                lStack8352 = lStack8304;
              }
              lStack8304 = lStack8352;
              if (lVar15 == 0) {
                if (lStack8352 < lStack8336) {
                  puVar11 = (undefined *)(ulong)uVar10;
                  pcStack8328 = (code *)&UNK_00103244;
                  lStack8296 = lVar6;
                  lVar6 = elseek(puVar11,lStack8352,0,uStack8312);
                  if (lVar6 < 0) goto code_r0x00103138;
                  pcStack8328 = (code *)&UNK_0010325b;
                  uVar1 = copy_fd((ulong)uVar10,lStack8336 - lStack8352);
                  lVar6 = lStack8296;
                  if (uVar1 != 0) {
                    puVar11 = (undefined *)(ulong)uVar1;
                    pcStack8328 = (code *)&UNK_00103274;
                    diagnose_copy_fd_failure(puVar11,uStack8312);
                    uVar7 = 0;
                    goto code_r0x0010313a;
                  }
                }
                lStack8352 = lVar6 + 1;
                if (lStack8352 != 0) {
                  pcStack8328 = (code *)&UNK_001031db;
                  xwrite_stdout_part_6(unaff_RBP,lStack8352);
                }
                puVar11 = (undefined *)(ulong)uVar10;
                pcStack8328 = (code *)&UNK_0010312b;
                uVar7 = elseek(puVar11,lStack8336 + lStack8352,0,uStack8312);
                uVar7 = ~uVar7 >> 0x3f;
                goto code_r0x0010313a;
              }
              lVar15 = lVar15 + -1;
            } while (lVar6 != 0);
          }
          if (lStack8336 == lStack8304) break;
          lStack8336 = lStack8336 + -0x2000;
          puVar11 = (undefined *)(ulong)uVar10;
          pcStack8328 = (code *)&UNK_00103188;
          lVar6 = elseek(puVar11,lStack8336,0,uStack8312);
          lStack8352 = extraout_RDX;
          if (lVar6 < 0) goto code_r0x00103138;
          puVar11 = (undefined *)(ulong)uVar10;
          pcStack8328 = (code *)&UNK_0010319d;
          lVar6 = safe_read(puVar11,unaff_RBP,0x2000);
          if (lVar6 == -1) goto code_r0x001031e0;
        } while (lVar6 != 0);
        uVar7 = 1;
        lStack8352 = extraout_RDX;
        goto code_r0x0010313a;
      }
code_r0x001031e0:
      pcStack8328 = (code *)&UNK_001031ef;
      uVar3 = quotearg_style(4,uStack8312);
      pcStack8328 = (code *)&UNK_00103205;
      uVar4 = func_0x001015a0(0,&UNK_0010687f,5);
      pcStack8328 = (code *)&UNK_0010320d;
      puVar5 = (uint *)func_0x00101520();
      uVar10 = *puVar5;
      pcStack8328 = (code *)&UNK_0010321e;
      goto code_r0x00101770;
    }
    uVar3 = quotearg_n_style_colon(0,3,param_2);
    puVar11 = &UNK_00106890;
  }
  uVar4 = func_0x001015a0(0,puVar11,5);
  puVar5 = (uint *)func_0x00101520();
  uVar10 = *puVar5;
code_r0x00101770:
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)PTR_error_00309f78)(0,(ulong)uVar10,uVar4,uVar3);
  return uVar3;
}

