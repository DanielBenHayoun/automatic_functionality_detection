
ulong elide_tail_lines_seekable
                (undefined8 param_1,uint param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 extraout_RDX;
  byte **ppbVar10;
  undefined *puVar11;
  undefined *unaff_RBP;
  byte *pbVar12;
  undefined *puVar13;
  byte *pbVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  byte *pbStack8464;
  undefined *puStack8456;
  byte *apbStack8448 [5];
  undefined *puStack8408;
  undefined *puStack8400;
  undefined *puStack8392;
  undefined *puStack8384;
  undefined *puStack8376;
  undefined8 uStack8368;
  undefined8 uStack8360;
  undefined8 uStack8344;
  long lStack8328;
  undefined *puStack8320;
  long lStack8312;
  code *pcStack8304;
  undefined8 uStack8288;
  long lStack8280;
  long lStack8272;
  undefined auStack8264 [8200];
  long lStack64;
  
  bVar18 = 0;
  puVar13 = (undefined *)(ulong)param_2;
  lVar7 = param_5 - param_4;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (ulong)((int)lVar7 + ((uint)(lVar7 >> 0x5f) >> 0x13) & 0x1fff) -
          ((ulong)(lVar7 >> 0x3f) >> 0x33);
  uVar15 = 0x2000;
  if (uVar8 != 0) {
    uVar15 = uVar8;
  }
  lStack8312 = param_5 - uVar15;
  pcStack8304 = (code *)&UNK_00103054;
  uStack8288 = param_1;
  lStack8280 = param_4;
  lVar7 = elseek(puVar13,lStack8312,0,param_1);
  if (lVar7 < 0) {
code_r0x00103138:
    uVar8 = 0;
  }
  else {
    unaff_RBP = auStack8264;
    puVar13 = (undefined *)(ulong)param_2;
    pcStack8304 = (code *)&UNK_00103070;
    lVar7 = safe_read(puVar13,unaff_RBP,uVar15);
    if (lVar7 == -1) {
code_r0x001031e0:
      pcStack8304 = (code *)&UNK_001031ef;
      unaff_RBP = (undefined *)quotearg_style(4,uStack8288);
      pcStack8304 = (code *)&UNK_00103205;
      param_3 = func_0x001015a0(0,&UNK_0010687f,5);
      pcStack8304 = (code *)&UNK_0010320d;
      puVar5 = (uint *)func_0x00101520();
      puVar13 = (undefined *)0x0;
      pcStack8304 = (code *)&UNK_0010321e;
      func_0x00101770(0,(ulong)*puVar5,param_3,unaff_RBP);
      uVar8 = 0;
    }
    else {
      lVar4 = param_3;
      if ((param_3 != 0) && (lVar7 != 0)) {
        lVar4 = param_3 - (ulong)(*(char *)((long)&lStack8272 + lVar7 + 7) != line_end);
      }
      do {
        if (lVar7 != 0) {
          uVar15 = (ulong)(uint)(int)line_end;
          do {
            if (param_3 == 0) {
              lVar7 = lVar7 + -1;
              lVar1 = lStack8280;
            }
            else {
              pcStack8304 = (code *)&UNK_001030ec;
              puVar13 = unaff_RBP;
              lVar7 = func_0x00101780(unaff_RBP,uVar15,lVar7);
              if (lVar7 == 0) break;
              lVar7 = lVar7 - (long)unaff_RBP;
              lVar1 = lStack8280;
            }
            lStack8280 = lVar1;
            if (lVar4 == 0) {
              if (lVar1 < lStack8312) {
                puVar13 = (undefined *)(ulong)param_2;
                pcStack8304 = (code *)&UNK_00103244;
                lStack8272 = lVar7;
                lVar7 = elseek(puVar13,lVar1,0,uStack8288);
                param_3 = lVar1;
                if (lVar7 < 0) goto code_r0x00103138;
                pcStack8304 = (code *)&UNK_0010325b;
                uVar2 = copy_fd((ulong)param_2,lStack8312 - lVar1);
                lVar7 = lStack8272;
                if (uVar2 != 0) {
                  puVar13 = (undefined *)(ulong)uVar2;
                  pcStack8304 = (code *)&UNK_00103274;
                  diagnose_copy_fd_failure(puVar13,uStack8288);
                  uVar8 = 0;
                  goto code_r0x0010313a;
                }
              }
              param_3 = lVar7 + 1;
              if (param_3 != 0) {
                pcStack8304 = (code *)&UNK_001031db;
                xwrite_stdout_part_6(unaff_RBP,param_3);
              }
              puVar13 = (undefined *)(ulong)param_2;
              pcStack8304 = (code *)&UNK_0010312b;
              uVar8 = elseek(puVar13,lStack8312 + param_3,0,uStack8288);
              uVar8 = ~uVar8 >> 0x3f;
              goto code_r0x0010313a;
            }
            lVar4 = lVar4 + -1;
          } while (lVar7 != 0);
        }
        if (lStack8312 == lStack8280) break;
        lStack8312 = lStack8312 + -0x2000;
        puVar13 = (undefined *)(ulong)param_2;
        pcStack8304 = (code *)&UNK_00103188;
        lVar7 = elseek(puVar13,lStack8312,0,uStack8288);
        if (lVar7 < 0) goto code_r0x00103138;
        puVar13 = (undefined *)(ulong)param_2;
        pcStack8304 = (code *)&UNK_0010319d;
        lVar7 = safe_read(puVar13,unaff_RBP,0x2000);
        if (lVar7 == -1) goto code_r0x001031e0;
      } while (lVar7 != 0);
      uVar8 = 1;
    }
  }
code_r0x0010313a:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
  pcStack8304 = usage;
  func_0x001015d0();
  puVar11 = program_name;
  uVar9 = 5;
  uStack8344 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lStack8328 = param_3;
  puStack8320 = unaff_RBP;
  pcStack8304 = (code *)uVar15;
  if ((int)puVar13 == 0) goto code_r0x001032dd;
  uVar9 = func_0x001015a0(0,&UNK_00106a90,5);
  func_0x001017e0(stderr,1,uVar9,puVar11);
  do {
    func_0x001017c0((ulong)puVar13 & 0xffffffff);
    uVar9 = extraout_RDX;
code_r0x001032dd:
    uVar9 = func_0x001015a0(0,&UNK_00106ab8,uVar9);
    func_0x00101760(1,uVar9,puVar11);
    uVar9 = func_0x001015a0(0,&UNK_00106ae0,5);
    func_0x00101760(1,uVar9,10);
    uVar9 = stdout;
    uVar6 = func_0x001015a0(0,&UNK_00106b68,5);
    func_0x001016a0(uVar6,uVar9);
    uVar9 = stdout;
    uVar6 = func_0x001015a0(0,&UNK_00106ba0,5);
    func_0x001016a0(uVar6,uVar9);
    uVar9 = func_0x001015a0(0,&UNK_00106bf0,5);
    func_0x00101760(1,uVar9,10);
    uVar9 = stdout;
    uVar6 = func_0x001015a0(0,&UNK_00106d80,5);
    func_0x001016a0(uVar6,uVar9);
    uVar9 = stdout;
    uVar6 = func_0x001015a0(0,&UNK_00106e08,5);
    func_0x001016a0(uVar6,uVar9);
    uVar9 = stdout;
    uVar6 = func_0x001015a0(0,&UNK_00106e48,5);
    func_0x001016a0(uVar6,uVar9);
    uVar9 = stdout;
    uVar6 = func_0x001015a0(0,&UNK_00106e78,5);
    func_0x001016a0(uVar6,uVar9);
    uVar9 = stdout;
    uVar6 = func_0x001015a0(0,&UNK_00106eb0,5);
    func_0x001016a0(uVar6,uVar9);
    uStack8368 = 0;
    uStack8360 = 0;
    pbStack8464 = &UNK_001068b2;
    apbStack8448[4] = &UNK_001068f3;
    puStack8456 = &UNK_001068b4;
    puStack8400 = &UNK_001068fd;
    apbStack8448[0] = &UNK_0010692c;
    puStack8384 = &UNK_00106907;
    apbStack8448[1] = &UNK_001068c4;
    apbStack8448[2] = &UNK_001068da;
    apbStack8448[3] = &UNK_001068e4;
    puStack8408 = &UNK_001068e4;
    puStack8392 = &UNK_001068e4;
    puStack8376 = &UNK_001068e4;
    ppbVar10 = &pbStack8464;
    do {
      ppbVar10 = ppbVar10;
      ppbVar10 = ppbVar10 + 2;
      pbVar14 = *ppbVar10;
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
    pbVar14 = ppbVar10[3];
    if (pbVar14 == (byte *)0x0) {
      uVar9 = func_0x001015a0(0,&UNK_00106911,5);
      func_0x00101760(1,uVar9,&UNK_00106928,&UNK_00106f88);
      lVar7 = func_0x00101750(5,0);
      if ((lVar7 != 0) && (iVar3 = func_0x00101530(lVar7,&UNK_00106936,3), iVar3 != 0)) {
        pbVar14 = &UNK_001068ad;
        goto code_r0x00103678;
      }
      pbVar14 = &UNK_001068ad;
      puVar11 = &UNK_001068ce;
      uVar9 = func_0x001015a0(0,&UNK_0010693a,5);
      func_0x00101760(1,uVar9,&UNK_00106f88,&UNK_001068ad);
    }
    else {
      uVar9 = func_0x001015a0(0,&UNK_00106911,5);
      func_0x00101760(1,uVar9,&UNK_00106928,&UNK_00106f88);
      lVar7 = func_0x00101750(5,0);
      if ((lVar7 != 0) && (iVar3 = func_0x00101530(lVar7,&UNK_00106936,3), iVar3 != 0)) {
code_r0x00103678:
        uVar9 = stdout;
        uVar6 = func_0x001015a0(0,&UNK_00106fb0,5);
        func_0x001016a0(uVar6,uVar9);
      }
      uVar9 = func_0x001015a0(0,&UNK_0010693a,5);
      func_0x00101760(1,uVar9,&UNK_00106f88,&UNK_001068ad);
      puVar11 = &UNK_00107621;
      if (pbVar14 == &UNK_001068ad) {
        puVar11 = &UNK_001068ce;
      }
    }
    uVar9 = func_0x001015a0(0,&UNK_00106ff8,5);
    func_0x00101760(1,uVar9,pbVar14,puVar11);
  } while( true );
}

