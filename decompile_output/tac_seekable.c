
/* WARNING: Could not reconcile some variable overlaps */

undefined8 tac_seekable(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *puVar8;
  byte bVar9;
  long lVar10;
  undefined8 extraout_RDX;
  byte **ppbVar11;
  undefined *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  byte *pbStack272;
  undefined *puStack264;
  byte *apbStack256 [5];
  undefined *puStack216;
  undefined *puStack208;
  undefined *puStack200;
  undefined *puStack192;
  undefined *puStack184;
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack152;
  ulong uStack136;
  ulong uStack128;
  ulong uStack120;
  code *pcStack112;
  byte *pbStack96;
  ulong uStack88;
  uint uStack76;
  undefined8 uStack72;
  undefined8 uStack64;
  
  uVar7 = read_size;
  bVar19 = 0;
  uStack76 = (uint)param_1;
  pbStack96 = separator + 1;
  bVar1 = *separator;
  uStack128 = (ulong)bVar1;
  uStack72 = match_length;
  lVar10 = match_length - 1;
  uStack64 = param_2;
  if (param_3 % read_size != 0) {
    param_3 = param_3 - param_3 % read_size;
    pcStack112 = (code *)&UNK_00102b26;
    lVar4 = func_0x001019f0(param_1,param_3,0);
    if (lVar4 < 0) {
      pcStack112 = (code *)&UNK_00102b40;
      uVar5 = quotearg_n_style_colon(0,3,uStack64);
      pcStack112 = (code *)&UNK_00102b56;
      uVar6 = func_0x00101960(0,&UNK_00114144,5);
      pcStack112 = (code *)&UNK_00102b5e;
      puVar8 = (uint *)func_0x001018a0();
      pcStack112 = (code *)&UNK_00102b6f;
      func_0x00101ba0(0,(ulong)*puVar8,uVar6,uVar5);
      uVar7 = read_size;
    }
  }
  while( true ) {
    pcStack112 = (code *)&UNK_001026a6;
    uVar3 = safe_read((ulong)uStack76,G_buffer,uVar7);
    uVar7 = read_size;
    if (uVar3 != 0) break;
    if (param_3 == 0) {
      uVar3 = param_3;
      if (read_size == 0) goto code_r0x0010274c;
      uStack136 = 0;
      goto code_r0x0010276b;
    }
    pcStack112 = (code *)&UNK_001026d2;
    lVar4 = func_0x001019f0((ulong)uStack76,-read_size,1);
    if (lVar4 < 0) {
      pcStack112 = (code *)&UNK_001026e8;
      uVar5 = quotearg_n_style_colon(0,3,uStack64);
      pcStack112 = (code *)&UNK_001026fa;
      uVar6 = func_0x00101960(0,&UNK_00114144,5);
      pcStack112 = (code *)&UNK_00102702;
      puVar8 = (uint *)func_0x001018a0();
      pcStack112 = (code *)&UNK_00102713;
      func_0x00101ba0(0,(ulong)*puVar8,uVar6,uVar5);
      uVar7 = read_size;
    }
    param_3 = param_3 - uVar7;
  }
  if (uVar3 == read_size) {
code_r0x0010274c:
    do {
      pcStack112 = (code *)&UNK_0010275c;
      uStack136 = safe_read((ulong)uStack76,G_buffer,uVar3);
      uVar3 = uVar7;
      if (uStack136 == 0) goto code_r0x00102761;
      if (uStack136 == 0xffffffffffffffff) goto code_r0x00102a8d;
      param_3 = param_3 + uStack136;
      uVar3 = read_size;
      uVar7 = uStack136;
    } while (read_size == uStack136);
  }
  else {
code_r0x00102761:
    uStack136 = uVar3;
    if (uVar3 == 0xffffffffffffffff) {
code_r0x00102a8d:
      pcStack112 = (code *)&UNK_00102a9e;
      uVar5 = quotearg_n_style_colon(0,3,uStack64);
      pcStack112 = (code *)&UNK_00102ab4;
      uVar6 = func_0x00101960(0,&UNK_00114154,5);
      pcStack112 = (code *)&UNK_00102abc;
      puVar8 = (uint *)func_0x001018a0();
      pcStack112 = (code *)&UNK_00102acd;
      func_0x00101ba0(0,(ulong)*puVar8,uVar6,uVar5);
      return 0;
    }
  }
code_r0x0010276b:
  uStack88 = G_buffer + uStack136;
  lVar4 = uStack88 - uStack72;
  uStack72 = CONCAT71(uStack72._1_7_,1);
  uVar7 = G_buffer;
  uVar3 = uStack88;
  if (sentinel_length != 0) {
    uVar3 = lVar4 + 1;
  }
  do {
    uStack120 = uVar7;
    if (sentinel_length != 0) goto code_r0x00102943;
code_r0x001027a9:
    do {
      lVar15 = uVar3 - uVar7;
      lVar4 = 1 - lVar15;
      uStack120 = uVar7;
      if (1 < lVar4) {
code_r0x00102bac:
        pcStack112 = (code *)&UNK_00102bbf;
        uVar5 = func_0x00101960(0,&UNK_00114163,5);
        uVar7 = 1;
        pcStack112 = usage;
        func_0x00101ba0(1,0,uVar5);
        puVar12 = program_name;
        uVar5 = 5;
        uStack152 = *(undefined8 *)(in_FS_OFFSET + 0x28);
        pcStack112 = (code *)lVar10;
        if ((int)uVar7 == 0) goto code_r0x00102c2d;
        uVar5 = func_0x00101960(0,&UNK_00114330,5);
        func_0x00101c20(stderr,1,uVar5,puVar12);
        goto code_r0x00102c26;
      }
      if (lVar4 == 1) {
code_r0x001029d7:
        uStack136 = uStack120 - 1;
      }
      else {
        pcStack112 = (code *)&UNK_001027e2;
        lVar4 = rpl_re_search(compiled_separator,uVar7,lVar15,lVar15 + -1,lVar4,regs);
        uStack120 = G_buffer;
        if (lVar4 == -1) goto code_r0x001029d7;
        uStack120 = uVar7;
        if (lVar4 == -2) {
code_r0x00102b88:
          pcStack112 = (code *)&UNK_00102b9b;
          uVar5 = func_0x00101960(0,&UNK_00114308,5);
          pcStack112 = (code *)&UNK_00102bac;
          func_0x00101ba0(1,0,uVar5);
          goto code_r0x00102bac;
        }
        uStack136 = G_buffer + *regs._8_8_;
        match_length = *regs._16_8_ - *regs._8_8_;
        uStack120 = G_buffer;
      }
code_r0x0010281f:
      uVar7 = uStack120;
      uVar3 = param_3;
      if (uStack136 < uStack120) {
        do {
          if (uVar3 == 0) {
            pcStack112 = (code *)&UNK_00102b05;
            output(uStack120,uStack88);
            return 1;
          }
          uStack136 = uStack88 - uStack120;
          if (read_size < uStack136) {
            uVar7 = sentinel_length + 2 + read_size * 4;
            lVar4 = 1;
            if (sentinel_length != 0) {
              lVar4 = sentinel_length;
            }
            if (uVar7 < G_buffer_size) {
              pcStack112 = (code *)&UNK_00102b88;
              G_buffer_size = uVar7;
              read_size = read_size * 2;
              xalloc_die();
              goto code_r0x00102b88;
            }
            pcStack112 = (code *)&UNK_0010288b;
            G_buffer_size = uVar7;
            read_size = read_size * 2;
            lVar15 = xrealloc(uStack120 - lVar4);
            G_buffer = lVar15 + lVar4;
          }
          if (uVar3 < read_size) {
            param_3 = 0;
            read_size = uVar3;
          }
          else {
            param_3 = uVar3 - read_size;
          }
          pcStack112 = (code *)&UNK_001028b6;
          lVar4 = func_0x001019f0((ulong)uStack76,param_3,0);
          if (lVar4 < 0) {
            pcStack112 = (code *)&UNK_00102a59;
            quotearg_n_style_colon(0,3,uStack64);
            pcStack112 = (code *)&UNK_00102a6f;
            uVar5 = func_0x00101960(0,&UNK_00114144,5);
            pcStack112 = (code *)&UNK_00102a77;
            puVar8 = (uint *)func_0x001018a0();
            pcStack112 = (code *)&UNK_00102a88;
            func_0x00101ba0(0,(ulong)*puVar8,uVar5);
          }
          uVar7 = G_buffer;
          uVar16 = G_buffer + read_size;
          uStack88 = read_size;
          pcStack112 = (code *)&UNK_001028e4;
          func_0x00101b90(uVar16,G_buffer,uStack136);
          uVar3 = uStack88;
          uStack136 = uStack136 + uStack88;
          uStack88 = uVar7 + uStack136;
          if (sentinel_length == 0) {
            uVar16 = uStack88;
          }
          pcStack112 = (code *)&UNK_00102910;
          uVar7 = safe_read((ulong)uStack76,uVar7,uVar3);
          if (uVar7 != read_size) goto code_r0x00102a8d;
          uVar7 = G_buffer;
          uVar3 = uVar16;
          if (sentinel_length == 0) goto code_r0x001027a9;
          uStack136 = uVar16 - 1;
          uStack120 = G_buffer;
          uVar3 = uStack136;
          if (*(byte *)(uVar16 - 1) == bVar1) goto code_r0x0010294d;
code_r0x00102943:
          do {
            do {
              uVar16 = uVar3;
              uStack136 = uVar16 - 1;
              uVar3 = uStack136;
            } while (*(byte *)(uVar16 - 1) != bVar1);
code_r0x0010294d:
            if (lVar10 == 0) goto code_r0x0010281f;
            pcStack112 = (code *)&UNK_00102966;
            iVar2 = func_0x001018c0(uVar16,pbStack96,lVar10);
            uVar3 = uStack136;
          } while (iVar2 != 0);
          uVar7 = uStack120;
          uVar3 = param_3;
        } while (uStack136 < uStack120);
      }
      if (separator_ends_record == '\0') {
        pcStack112 = (code *)&UNK_00102a0d;
        output(uStack136,uStack88);
        uVar7 = G_buffer;
        uVar3 = uStack136;
      }
      else {
        uVar3 = match_length + uStack136;
        bVar9 = (byte)uStack72 ^ 1 | uStack88 != uVar3;
        uStack72 = uStack72 & 0xffffffffffffff00 | (ulong)bVar9;
        if (bVar9 != 0) {
          pcStack112 = (code *)&UNK_00102a2d;
          output(uVar3,uStack88);
          uStack72 = uStack72 & 0xffffffffffffff00;
          uVar7 = G_buffer;
        }
      }
      uStack88 = uVar3;
      uVar3 = uStack136;
    } while (sentinel_length == 0);
    uVar3 = uStack136 + (1 - match_length);
  } while( true );
code_r0x00102c26:
  func_0x00101c00(uVar7 & 0xffffffff);
  uVar5 = extraout_RDX;
code_r0x00102c2d:
  uVar5 = func_0x00101960(0,&UNK_00114358,uVar5);
  func_0x00101b60(1,uVar5,puVar12);
  uVar5 = stdout;
  uVar6 = func_0x00101960(0,&UNK_00114380,5);
  func_0x00101a60(uVar6,uVar5);
  uVar5 = stdout;
  uVar6 = func_0x00101960(0,&UNK_001143b8,5);
  func_0x00101a60(uVar6,uVar5);
  uVar5 = stdout;
  uVar6 = func_0x00101960(0,&UNK_001143f0,5);
  func_0x00101a60(uVar6,uVar5);
  uVar5 = stdout;
  uVar6 = func_0x00101960(0,&UNK_00114440,5);
  func_0x00101a60(uVar6,uVar5);
  uVar5 = stdout;
  uVar6 = func_0x00101960(0,&UNK_00114520,5);
  func_0x00101a60(uVar6,uVar5);
  uVar5 = stdout;
  uVar6 = func_0x00101960(0,&UNK_00114550,5);
  func_0x00101a60(uVar6,uVar5);
  uStack176 = 0;
  uStack168 = 0;
  pbStack272 = &UNK_00114178;
  apbStack256[4] = &UNK_001141b9;
  puStack264 = &UNK_0011417a;
  puStack208 = &UNK_001141c3;
  apbStack256[0] = &UNK_001141f2;
  puStack192 = &UNK_001141cd;
  apbStack256[1] = &UNK_0011418a;
  apbStack256[2] = &UNK_001141a0;
  apbStack256[3] = &UNK_001141aa;
  puStack216 = &UNK_001141aa;
  puStack200 = &UNK_001141aa;
  puStack184 = &UNK_001141aa;
  ppbVar11 = &pbStack272;
  do {
    ppbVar11 = ppbVar11;
    ppbVar11 = ppbVar11 + 2;
    pbVar14 = *ppbVar11;
    bVar17 = false;
    bVar18 = pbVar14 == (byte *)0x0;
    if (bVar18) break;
    lVar10 = 4;
    pbVar13 = &UNK_00114174;
    do {
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
      bVar17 = *pbVar13 < *pbVar14;
      bVar18 = *pbVar13 == *pbVar14;
      pbVar13 = pbVar13 + (ulong)bVar19 * -2 + 1;
      pbVar14 = pbVar14 + (ulong)bVar19 * -2 + 1;
    } while (bVar18);
  } while ((!bVar17 && !bVar18) != bVar17);
  pbVar14 = ppbVar11[3];
  if (pbVar14 == (byte *)0x0) {
    uVar5 = func_0x00101960(0,&UNK_001141d7,5);
    func_0x00101b60(1,uVar5,&UNK_001141ee,&UNK_00114588);
    lVar10 = func_0x00101b50(5,0);
    if ((lVar10 != 0) && (iVar2 = func_0x001018c0(lVar10,&UNK_001141fc,3), iVar2 != 0)) {
      pbVar14 = &UNK_00114174;
      goto code_r0x00102f58;
    }
    pbVar14 = &UNK_00114174;
    puVar12 = &UNK_00114194;
    uVar5 = func_0x00101960(0,&UNK_00114200,5);
    func_0x00101b60(1,uVar5,&UNK_00114588,&UNK_00114174);
  }
  else {
    uVar5 = func_0x00101960(0,&UNK_001141d7,5);
    func_0x00101b60(1,uVar5,&UNK_001141ee,&UNK_00114588);
    lVar10 = func_0x00101b50(5,0);
    if ((lVar10 != 0) && (iVar2 = func_0x001018c0(lVar10,&UNK_001141fc,3), iVar2 != 0)) {
code_r0x00102f58:
      uVar5 = stdout;
      uVar6 = func_0x00101960(0,&UNK_001145b0,5);
      func_0x00101a60(uVar6,uVar5);
    }
    uVar5 = func_0x00101960(0,&UNK_00114200,5);
    func_0x00101b60(1,uVar5,&UNK_00114588,&UNK_00114174);
    puVar12 = &UNK_00114c01;
    if (pbVar14 == &UNK_00114174) {
      puVar12 = &UNK_00114194;
    }
  }
  uVar5 = func_0x00101960(0,&UNK_001145f8,5);
  func_0x00101b60(1,uVar5,pbVar14,puVar12);
  goto code_r0x00102c26;
}

