
ulong cwrite(char param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  byte **ppbVar7;
  undefined *puVar8;
  byte bVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  undefined auVar19 [16];
  byte *pbStack296;
  undefined *puStack288;
  byte *apbStack280 [5];
  undefined *puStack240;
  undefined *puStack232;
  undefined *puStack224;
  undefined *puStack216;
  undefined *puStack208;
  undefined8 uStack200;
  undefined8 uStack192;
  undefined8 uStack176;
  undefined8 uStack160;
  ulong uStack152;
  ulong uStack144;
  undefined *puStack136;
  ulong uStack120;
  ulong uStack112;
  bool bStack98;
  bool bStack97;
  ulong uStack96;
  ulong uStack88;
  ulong uStack72;
  long lStack64;
  
  bVar18 = 0;
  if (param_1 != '\0') {
    if (((param_2 == 0) && (param_3 == 0)) && (elide_empty_files != '\0')) {
      return 1;
    }
    closeout(0,(ulong)output_desc,(ulong)filter_pid,outfile);
    next_file_name();
    output_desc = create(outfile);
    if ((int)output_desc < 0) {
      uStack72 = quotearg_n_style_colon(0,3,outfile);
      puVar5 = (uint *)func_0x00101b70();
      uStack96 = (ulong)*puVar5;
      uVar11 = 1;
      uVar14 = uStack72;
      auVar19 = func_0x00101ea0(1,uStack96,&UNK_00108ddc);
      uStack88 = SUB168(auVar19 >> 0x40,0);
      uVar15 = 0;
      uStack152 = 1;
      bVar17 = true;
      uVar12 = param_5;
      uStack144 = uVar11;
      lStack64 = param_2;
      if (uVar14 == 0xffffffffffffffff) goto code_r0x00104d64;
      bStack97 = uVar14 < uStack88;
      if (uVar14 < uVar11) goto code_r0x00104da6;
      do {
        bVar16 = param_5 == 0;
        uVar12 = uStack96;
        do {
          uStack88 = SUB168(auVar19 >> 0x40,0);
          bVar9 = (byte)uStack152 | bVar17;
          uStack152 = uStack152 & 0xffffffffffffff00 | (ulong)bVar9;
          if (bVar9 != 0) {
            puStack136 = &UNK_00104d3a;
            uStack120 = uVar12;
            uStack112 = param_5;
            bStack98 = bVar16;
            uStack152 = cwrite((ulong)bVar17,uVar12,uStack144);
            auVar19 = CONCAT88(uStack88,uStack152);
            uStack152 = uStack152 & 0xffffffff;
            param_5 = uStack112;
            uVar12 = uStack120;
            bVar16 = bStack98;
          }
          uStack88 = SUB168(auVar19 >> 0x40,0);
          uVar15 = uVar15 + bVar17;
          bVar17 = (bool)(uVar15 < param_5 | bVar16);
          if ((bVar17 == false) && ((char)uStack152 == '\0')) {
            return SUB168(auVar19,0);
          }
          uVar14 = uVar14 - uStack144;
          uVar12 = uVar12 + uStack144;
          uStack144 = uVar11;
        } while (uVar11 <= uVar14);
        if (uVar14 != 0) goto code_r0x00104de0;
        while( true ) {
          uStack88 = SUB168(auVar19 >> 0x40,0);
          uVar12 = param_5;
          if (bStack97 != false) {
            lVar3 = uVar15 + 1;
            if (uVar15 < param_5) {
              do {
                lVar3 = lVar3 + 1;
                puStack136 = &UNK_00104e72;
                uVar4 = cwrite(1,0,0);
              } while (param_5 + 1 != lVar3);
              return uVar4;
            }
            return SUB168(auVar19,0);
          }
code_r0x00104d64:
          uStack120 = uVar12;
          if ((char)uStack152 == '\0') {
            puStack136 = &UNK_00104e34;
            lVar3 = func_0x00101ce0(0,uStack144,1);
            if (lVar3 != -1) {
              bVar17 = true;
              uStack144 = uVar11;
            }
          }
          puStack136 = &UNK_00104d83;
          uVar14 = safe_read(0,uStack96,uStack88);
          auVar19 = CONCAT88(uStack88,uVar14);
          if (uVar14 == 0xffffffffffffffff) {
            puStack136 = &UNK_00104e99;
            uStack160 = quotearg_n_style_colon(0,3,infile);
            puStack136 = &UNK_00104ea1;
            puVar5 = (uint *)func_0x00101b70();
            uVar12 = 1;
            puStack136 = &UNK_00104eb9;
            func_0x00101ea0(1,(ulong)*puVar5,&UNK_00108ddc,uStack160);
            puVar8 = program_name;
            uVar4 = 5;
            uStack176 = *(undefined8 *)(in_FS_OFFSET + 0x28);
            puStack136 = (undefined *)uVar14;
            if ((int)uVar12 == 0) goto code_r0x00104f1d;
            uVar4 = func_0x00101c40(0,&UNK_00108ff8,5);
            func_0x00101f40(stderr,1,uVar4,puVar8);
            goto code_r0x00104f16;
          }
          bStack97 = uVar14 == 0;
          param_5 = uStack120;
          if (uStack144 <= uVar14) break;
code_r0x00104da6:
          uStack88 = SUB168(auVar19 >> 0x40,0);
          if (uVar14 != 0) {
            uVar12 = uStack96;
            if ((byte)((byte)uStack152 | bVar17) == 0) {
              uVar12 = 0;
              uStack152 = 0;
              bVar17 = param_5 == uVar15;
              if (bVar17) {
                return 0;
              }
            }
            else {
code_r0x00104de0:
              puStack136 = &UNK_00104df3;
              uStack120 = param_5;
              uVar1 = cwrite((ulong)bVar17,uVar12,uVar14);
              uStack152 = (ulong)uVar1;
              uVar12 = (ulong)bVar17;
              uVar15 = uVar15 + uVar12;
              bVar17 = (bool)(uStack120 == uVar15 & ((byte)uVar1 ^ 1));
              param_5 = uStack120;
              if (bVar17 != false) {
                return uVar12;
              }
            }
            auVar19 = CONCAT88(uStack88,uVar12);
            uStack144 = uStack144 - uVar14;
          }
        }
      } while( true );
    }
  }
  lVar3 = full_write((ulong)output_desc,param_2,param_3);
  if (lVar3 != param_3) {
    puVar5 = (uint *)func_0x00101b70();
    if ((filter_command != 0) && (*puVar5 == 0x20)) {
      return 0;
    }
    uVar4 = quotearg_n_style_colon(0,3,outfile);
    func_0x00101ea0(1,(ulong)*puVar5,&UNK_00108ddc,uVar4);
  }
  return 1;
code_r0x00104f16:
  func_0x00101f20(uVar12 & 0xffffffff);
  uVar4 = extraout_RDX;
code_r0x00104f1d:
  uVar4 = func_0x00101c40(0,&UNK_00109020,uVar4);
  func_0x00101e80(1,uVar4,puVar8);
  uVar4 = stdout;
  uVar6 = func_0x00101c40(0,&UNK_00109048,5);
  func_0x00101d80(uVar6,uVar4);
  uVar4 = stdout;
  uVar6 = func_0x00101c40(0,&UNK_001090b8,5);
  func_0x00101d80(uVar6,uVar4);
  uVar4 = stdout;
  uVar6 = func_0x00101c40(0,&UNK_001090f0,5);
  func_0x00101d80(uVar6,uVar4);
  uVar4 = func_0x00101c40(0,&UNK_00109140,5);
  func_0x00101f40(stdout,1,uVar4,2);
  uVar4 = stdout;
  uVar6 = func_0x00101c40(0,&UNK_00109588,5);
  func_0x00101d80(uVar6,uVar4);
  uVar4 = stdout;
  uVar6 = func_0x00101c40(0,&UNK_00109600,5);
  func_0x00101d80(uVar6,uVar4);
  uVar4 = stdout;
  uVar6 = func_0x00101c40(0,&UNK_00109630,5);
  func_0x00101d80(uVar6,uVar4);
  uVar4 = stdout;
  uVar6 = func_0x00101c40(0,&UNK_00109668,5);
  func_0x00101d80(uVar6,uVar4);
  uVar4 = stdout;
  uVar6 = func_0x00101c40(0,&UNK_00109740,5);
  func_0x00101d80(uVar6,uVar4);
  uStack200 = 0;
  uStack192 = 0;
  pbStack296 = &UNK_00108bf9;
  apbStack280[4] = &UNK_00108c3a;
  puStack288 = &UNK_00108bfb;
  puStack232 = &UNK_00108c44;
  apbStack280[0] = &UNK_00108c73;
  puStack216 = &UNK_00108c4e;
  apbStack280[1] = &UNK_00108c0b;
  apbStack280[2] = &UNK_00108c21;
  apbStack280[3] = &UNK_00108c2b;
  puStack240 = &UNK_00108c2b;
  puStack224 = &UNK_00108c2b;
  puStack208 = &UNK_00108c2b;
  ppbVar7 = &pbStack296;
  do {
    ppbVar7 = ppbVar7;
    ppbVar7 = ppbVar7 + 2;
    pbVar13 = *ppbVar7;
    bVar17 = false;
    bVar16 = pbVar13 == (byte *)0x0;
    if (bVar16) break;
    lVar3 = 6;
    pbVar10 = &UNK_00108bf3;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar17 = *pbVar10 < *pbVar13;
      bVar16 = *pbVar10 == *pbVar13;
      pbVar10 = pbVar10 + (ulong)bVar18 * -2 + 1;
      pbVar13 = pbVar13 + (ulong)bVar18 * -2 + 1;
    } while (bVar16);
  } while ((!bVar17 && !bVar16) != bVar17);
  pbVar13 = ppbVar7[3];
  if (pbVar13 == (byte *)0x0) {
    uVar4 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar4,&UNK_00108c6f,&UNK_00109898);
    lVar3 = func_0x00101e70(5,0);
    if ((lVar3 != 0) && (iVar2 = func_0x00101b80(lVar3,&UNK_00108c7d,3), iVar2 != 0)) {
      pbVar13 = &UNK_00108bf3;
      goto code_r0x001052c0;
    }
    pbVar13 = &UNK_00108bf3;
    puVar8 = &UNK_00108c15;
    uVar4 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar4,&UNK_00109898,&UNK_00108bf3);
  }
  else {
    uVar4 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar4,&UNK_00108c6f,&UNK_00109898);
    lVar3 = func_0x00101e70(5,0);
    if ((lVar3 != 0) && (iVar2 = func_0x00101b80(lVar3,&UNK_00108c7d,3), iVar2 != 0)) {
code_r0x001052c0:
      uVar4 = stdout;
      uVar6 = func_0x00101c40(0,&UNK_001098c0,5);
      func_0x00101d80(uVar6,uVar4);
    }
    uVar4 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar4,&UNK_00109898,&UNK_00108bf3);
    puVar8 = &UNK_0010a141;
    if (pbVar13 == &UNK_00108bf3) {
      puVar8 = &UNK_00108c15;
    }
  }
  uVar4 = func_0x00101c40(0,&UNK_00109908,5);
  func_0x00101e80(1,uVar4,pbVar13,puVar8);
  goto code_r0x00104f16;
}

