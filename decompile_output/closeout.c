
ulong closeout(long param_1,uint param_2,ulong param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  long extraout_RDX;
  undefined8 extraout_RDX_00;
  byte **ppbVar8;
  undefined *puVar9;
  byte bVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  byte *pbVar14;
  char cVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  uint *unaff_R13;
  ulong uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  undefined auVar23 [16];
  byte *pbStack400;
  undefined *puStack392;
  byte *apbStack384 [5];
  undefined *puStack344;
  undefined *puStack336;
  undefined *puStack328;
  undefined *puStack320;
  undefined *puStack312;
  undefined8 uStack304;
  undefined8 uStack296;
  undefined8 uStack280;
  undefined8 uStack264;
  ulong uStack256;
  ulong uStack248;
  undefined *puStack240;
  uint *puStack224;
  uint *puStack216;
  bool bStack202;
  bool bStack201;
  uint *puStack200;
  ulong uStack192;
  ulong uStack176;
  long lStack168;
  uint *puStack160;
  uint *puStack152;
  uint *puStack120;
  uint *puStack112;
  uint uStack92;
  uint uStack76;
  uint auStack72 [6];
  long lStack48;
  
  bVar22 = 0;
  puStack160 = (uint *)(param_3 & 0xffffffff);
  puVar12 = (uint *)(ulong)param_2;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = param_4;
  uVar11 = param_2;
  if (param_1 == 0) {
code_r0x001049b8:
    uStack92 = (uint)puVar6;
    if (-1 < (int)uVar11) {
      puStack112 = (uint *)&UNK_001049c7;
      iVar1 = func_0x00101d20(puVar12);
      if (-1 < iVar1) goto code_r0x001048bc;
      puStack112 = (uint *)&UNK_001049de;
      param_4 = (uint *)quotearg_n_style_colon(0,3,param_4);
      puStack112 = (uint *)&UNK_001049e6;
      puVar6 = (uint *)func_0x00101b70();
      puVar7 = (uint *)(ulong)*puVar6;
      lVar16 = 1;
      puStack112 = (uint *)&UNK_001049fe;
      func_0x00101ea0(1,puVar7,&UNK_00108ddc,param_4);
code_r0x00104a00:
      lVar16 = lVar16 + -1;
      puVar13 = puVar7;
code_r0x00104a10:
      uStack92 = (uint)puVar7;
      n_open_pipes = lVar16;
      *puVar7 = puVar13[lVar16];
    }
  }
  else {
    puStack112 = (uint *)&UNK_001048b0;
    iVar1 = rpl_fclose();
    if (iVar1 != 0) {
      puStack112 = (uint *)&UNK_00104975;
      unaff_R13 = (uint *)func_0x00101b70();
      if ((filter_command == (uint *)0x0) || (*unaff_R13 != 0x20)) {
        puStack112 = (uint *)&UNK_0010499a;
        puVar6 = (uint *)quotearg_n_style_colon(0,3,param_4);
        uVar11 = *unaff_R13;
        puStack112 = (uint *)&UNK_001049b4;
        func_0x00101ea0(1,(ulong)uVar11,&UNK_00108ddc);
        goto code_r0x001049b8;
      }
    }
    uStack92 = (uint)puVar6;
    if (-1 < (int)param_2) {
code_r0x001048bc:
      uStack92 = (uint)puVar6;
      if (n_open_pipes != 0) {
        puVar7 = open_pipes;
        lVar16 = n_open_pipes;
        if (param_2 == *open_pipes) goto code_r0x00104a00;
        lVar16 = n_open_pipes + -1;
        lVar2 = 0;
        do {
          puVar7 = puVar7 + 1;
          uStack92 = (uint)puVar6;
          if (lVar16 == lVar2) goto code_r0x00104900;
          lVar2 = lVar2 + 1;
          puVar6 = puVar7;
          puVar13 = open_pipes;
        } while (*puVar7 != param_2);
        goto code_r0x00104a10;
      }
    }
  }
code_r0x00104900:
  if (0 < (int)puStack160) {
    uStack76 = 0;
    puStack112 = (uint *)&UNK_0010491c;
    iVar1 = func_0x00101ec0(puStack160,&uStack76,0);
    if (iVar1 == -1) {
      puStack112 = (uint *)&UNK_00104a8d;
      puVar12 = (uint *)func_0x00101b70();
      if (*puVar12 == 10) goto code_r0x00104925;
      puStack112 = (uint *)&UNK_00104aac;
      uVar3 = func_0x00101c40(0,&UNK_00108bd6,5);
      puStack112 = (uint *)&UNK_00104abe;
      func_0x00101ea0(1,(ulong)*puVar12,uVar3);
code_r0x00104ac0:
      puStack112 = (uint *)&UNK_00104acf;
      iVar1 = sig2str((ulong)puVar12 & 0xffffffff,auStack72);
      if (iVar1 != 0) {
        puStack112 = (uint *)&UNK_00104b3e;
        func_0x00101fc0(auStack72,1,0x13,&UNK_00108bf0,(ulong)puVar12 & 0xffffffff);
      }
      unaff_R13 = filter_command;
      puStack112 = (uint *)&UNK_00104ae9;
      param_4 = (uint *)quotearg_n_style_colon(0,3,param_4);
      uStack92 = (uint)param_4;
      puStack112 = (uint *)&UNK_00104aff;
      uVar3 = func_0x00101c40(0,&UNK_00108f78,5);
      puStack112 = (uint *)&UNK_00104b1a;
      param_5 = auStack72;
      func_0x00101ea0((ulong)((int)puVar12 + 0x80),0,uVar3,param_4,auStack72,unaff_R13);
      puStack160 = auStack72;
    }
    else {
code_r0x00104925:
      puVar6 = filter_command;
      uVar11 = uStack76 & 0x7f;
      puVar12 = (uint *)(ulong)uVar11;
      uStack92 = uStack76;
      if ((char)((char)uVar11 + '\x01') < '\x02') {
        if (uVar11 != 0) goto code_r0x00104b45;
        bVar10 = (byte)((ulong)uStack76 >> 8);
        puVar12 = (uint *)(ulong)bVar10;
        if (bVar10 != 0) {
          puStack112 = (uint *)&UNK_00104a51;
          param_4 = (uint *)quotearg_n_style_colon(0,3,param_4);
          uStack92 = (uint)param_4;
          puStack112 = (uint *)&UNK_00104a67;
          uVar3 = func_0x00101c40(0,&UNK_00108fa8,5);
          param_5 = (uint *)(ulong)(uint)bVar10;
          puStack112 = (uint *)&UNK_00104a7e;
          func_0x00101ea0((ulong)(uint)bVar10,0,uVar3,param_4,param_5,puVar6);
          puStack160 = puVar6;
        }
      }
      else {
        if (uVar11 != 0xd) goto code_r0x00104ac0;
      }
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  puStack112 = (uint *)&UNK_00104b45;
  func_0x00101c70();
code_r0x00104b45:
  puStack112 = (uint *)&UNK_00104b5c;
  uVar3 = func_0x00101c40(0,&UNK_00108fd0,5);
  lStack168 = 0;
  cVar15 = '\x01';
  puStack112 = (uint *)&UNK_00104b71;
  func_0x00101ea0(1,0,uVar3,(ulong)uStack92);
  puStack120 = param_4;
  puStack112 = puVar12;
  if (cVar15 != '\0') {
    if (((lStack168 == 0) && (extraout_RDX == 0)) && (elide_empty_files != '\0')) {
      return 1;
    }
    closeout(0,(ulong)output_desc,(ulong)filter_pid,outfile);
    next_file_name();
    output_desc = create(outfile);
    if ((int)output_desc < 0) {
      uStack176 = quotearg_n_style_colon(0,3,outfile);
      puVar6 = (uint *)func_0x00101b70();
      puStack200 = (uint *)(ulong)*puVar6;
      uVar17 = 1;
      uVar19 = uStack176;
      auVar23 = func_0x00101ea0(1,puStack200,&UNK_00108ddc);
      uStack192 = SUB168(auVar23 >> 0x40,0);
      puVar6 = (uint *)0x0;
      uStack256 = 1;
      bVar21 = true;
      uStack248 = uVar17;
      puStack152 = unaff_R13;
      if (uVar19 == 0xffffffffffffffff) goto code_r0x00104d64;
      bStack201 = uVar19 < uStack192;
      if (uVar19 < uVar17) goto code_r0x00104da6;
      do {
        bVar20 = param_5 == (uint *)0x0;
        puVar12 = puStack200;
        do {
          uStack192 = SUB168(auVar23 >> 0x40,0);
          bVar10 = (byte)uStack256 | bVar21;
          uStack256 = uStack256 & 0xffffffffffffff00 | (ulong)bVar10;
          if (bVar10 != 0) {
            puStack240 = &UNK_00104d3a;
            puStack224 = puVar12;
            puStack216 = param_5;
            bStack202 = bVar20;
            uStack256 = cwrite((ulong)bVar21,puVar12,uStack248);
            auVar23 = CONCAT88(uStack192,uStack256);
            uStack256 = uStack256 & 0xffffffff;
            param_5 = puStack216;
            puVar12 = puStack224;
            bVar20 = bStack202;
          }
          uStack192 = SUB168(auVar23 >> 0x40,0);
          puVar6 = (uint *)((long)puVar6 + (ulong)bVar21);
          bVar21 = (bool)(puVar6 < param_5 | bVar20);
          if ((bVar21 == false) && ((char)uStack256 == '\0')) {
            return SUB168(auVar23,0);
          }
          uVar19 = uVar19 - uStack248;
          puVar12 = (uint *)((long)puVar12 + uStack248);
          uStack248 = uVar17;
        } while (uVar17 <= uVar19);
        if (uVar19 != 0) goto code_r0x00104de0;
        while( true ) {
          uStack192 = SUB168(auVar23 >> 0x40,0);
          if (bStack201 != false) {
            lVar16 = (long)puVar6 + 1;
            if (puVar6 < param_5) {
              do {
                lVar16 = lVar16 + 1;
                puStack240 = &UNK_00104e72;
                uVar3 = cwrite(1,0,0);
              } while ((long)param_5 + 1 != lVar16);
              return uVar3;
            }
            return SUB168(auVar23,0);
          }
code_r0x00104d64:
          puStack224 = param_5;
          if ((char)uStack256 == '\0') {
            puStack240 = &UNK_00104e34;
            lVar16 = func_0x00101ce0(0,uStack248,1);
            if (lVar16 != -1) {
              bVar21 = true;
              uStack248 = uVar17;
            }
          }
          puStack240 = &UNK_00104d83;
          uVar19 = safe_read(0,puStack200,uStack192);
          auVar23 = CONCAT88(uStack192,uVar19);
          if (uVar19 == 0xffffffffffffffff) {
            puStack240 = &UNK_00104e99;
            uStack264 = quotearg_n_style_colon(0,3,infile);
            puStack240 = &UNK_00104ea1;
            puVar6 = (uint *)func_0x00101b70();
            uVar17 = 1;
            puStack240 = &UNK_00104eb9;
            func_0x00101ea0(1,(ulong)*puVar6,&UNK_00108ddc,uStack264);
            puVar9 = program_name;
            uVar3 = 5;
            uStack280 = *(undefined8 *)(in_FS_OFFSET + 0x28);
            puStack240 = (undefined *)uVar19;
            if ((int)uVar17 == 0) goto code_r0x00104f1d;
            uVar3 = func_0x00101c40(0,&UNK_00108ff8,5);
            func_0x00101f40(stderr,1,uVar3,puVar9);
            goto code_r0x00104f16;
          }
          bStack201 = uVar19 == 0;
          param_5 = puStack224;
          if (uStack248 <= uVar19) break;
code_r0x00104da6:
          uStack192 = SUB168(auVar23 >> 0x40,0);
          if (uVar19 != 0) {
            puVar12 = puStack200;
            if ((byte)((byte)uStack256 | bVar21) == 0) {
              uVar4 = 0;
              uStack256 = 0;
              bVar21 = param_5 == puVar6;
              if (bVar21) {
                return 0;
              }
            }
            else {
code_r0x00104de0:
              puStack240 = &UNK_00104df3;
              puStack224 = param_5;
              uVar11 = cwrite((ulong)bVar21,puVar12,uVar19);
              uStack256 = (ulong)uVar11;
              uVar4 = (ulong)bVar21;
              puVar6 = (uint *)((long)puVar6 + uVar4);
              bVar21 = (bool)(puStack224 == puVar6 & ((byte)uVar11 ^ 1));
              param_5 = puStack224;
              if (bVar21 != false) {
                return uVar4;
              }
            }
            auVar23 = CONCAT88(uStack192,uVar4);
            uStack248 = uStack248 - uVar19;
          }
        }
      } while( true );
    }
  }
  lVar16 = full_write((ulong)output_desc,lStack168,extraout_RDX);
  if (lVar16 != extraout_RDX) {
    puVar6 = (uint *)func_0x00101b70();
    if ((filter_command != (uint *)0x0) && (*puVar6 == 0x20)) {
      return 0;
    }
    uVar3 = quotearg_n_style_colon(0,3,outfile);
    func_0x00101ea0(1,(ulong)*puVar6,&UNK_00108ddc,uVar3);
  }
  return 1;
code_r0x00104f16:
  func_0x00101f20(uVar17 & 0xffffffff);
  uVar3 = extraout_RDX_00;
code_r0x00104f1d:
  uVar3 = func_0x00101c40(0,&UNK_00109020,uVar3);
  func_0x00101e80(1,uVar3,puVar9);
  uVar3 = stdout;
  uVar5 = func_0x00101c40(0,&UNK_00109048,5);
  func_0x00101d80(uVar5,uVar3);
  uVar3 = stdout;
  uVar5 = func_0x00101c40(0,&UNK_001090b8,5);
  func_0x00101d80(uVar5,uVar3);
  uVar3 = stdout;
  uVar5 = func_0x00101c40(0,&UNK_001090f0,5);
  func_0x00101d80(uVar5,uVar3);
  uVar3 = func_0x00101c40(0,&UNK_00109140,5);
  func_0x00101f40(stdout,1,uVar3,2);
  uVar3 = stdout;
  uVar5 = func_0x00101c40(0,&UNK_00109588,5);
  func_0x00101d80(uVar5,uVar3);
  uVar3 = stdout;
  uVar5 = func_0x00101c40(0,&UNK_00109600,5);
  func_0x00101d80(uVar5,uVar3);
  uVar3 = stdout;
  uVar5 = func_0x00101c40(0,&UNK_00109630,5);
  func_0x00101d80(uVar5,uVar3);
  uVar3 = stdout;
  uVar5 = func_0x00101c40(0,&UNK_00109668,5);
  func_0x00101d80(uVar5,uVar3);
  uVar3 = stdout;
  uVar5 = func_0x00101c40(0,&UNK_00109740,5);
  func_0x00101d80(uVar5,uVar3);
  uStack304 = 0;
  uStack296 = 0;
  pbStack400 = &UNK_00108bf9;
  apbStack384[4] = &UNK_00108c3a;
  puStack392 = &UNK_00108bfb;
  puStack336 = &UNK_00108c44;
  apbStack384[0] = &UNK_00108c73;
  puStack320 = &UNK_00108c4e;
  apbStack384[1] = &UNK_00108c0b;
  apbStack384[2] = &UNK_00108c21;
  apbStack384[3] = &UNK_00108c2b;
  puStack344 = &UNK_00108c2b;
  puStack328 = &UNK_00108c2b;
  puStack312 = &UNK_00108c2b;
  ppbVar8 = &pbStack400;
  do {
    ppbVar8 = ppbVar8;
    ppbVar8 = ppbVar8 + 2;
    pbVar18 = *ppbVar8;
    bVar21 = false;
    bVar20 = pbVar18 == (byte *)0x0;
    if (bVar20) break;
    lVar16 = 6;
    pbVar14 = &UNK_00108bf3;
    do {
      if (lVar16 == 0) break;
      lVar16 = lVar16 + -1;
      bVar21 = *pbVar14 < *pbVar18;
      bVar20 = *pbVar14 == *pbVar18;
      pbVar14 = pbVar14 + (ulong)bVar22 * -2 + 1;
      pbVar18 = pbVar18 + (ulong)bVar22 * -2 + 1;
    } while (bVar20);
  } while ((!bVar21 && !bVar20) != bVar21);
  pbVar18 = ppbVar8[3];
  if (pbVar18 == (byte *)0x0) {
    uVar3 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar3,&UNK_00108c6f,&UNK_00109898);
    lVar16 = func_0x00101e70(5,0);
    if ((lVar16 != 0) && (iVar1 = func_0x00101b80(lVar16,&UNK_00108c7d,3), iVar1 != 0)) {
      pbVar18 = &UNK_00108bf3;
      goto code_r0x001052c0;
    }
    pbVar18 = &UNK_00108bf3;
    puVar9 = &UNK_00108c15;
    uVar3 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar3,&UNK_00109898,&UNK_00108bf3);
  }
  else {
    uVar3 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar3,&UNK_00108c6f,&UNK_00109898);
    lVar16 = func_0x00101e70(5,0);
    if ((lVar16 != 0) && (iVar1 = func_0x00101b80(lVar16,&UNK_00108c7d,3), iVar1 != 0)) {
code_r0x001052c0:
      uVar3 = stdout;
      uVar5 = func_0x00101c40(0,&UNK_001098c0,5);
      func_0x00101d80(uVar5,uVar3);
    }
    uVar3 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar3,&UNK_00109898,&UNK_00108bf3);
    puVar9 = &UNK_0010a141;
    if (pbVar18 == &UNK_00108bf3) {
      puVar9 = &UNK_00108c15;
    }
  }
  uVar3 = func_0x00101c40(0,&UNK_00109908,5);
  func_0x00101e80(1,uVar3,pbVar18,puVar9);
  goto code_r0x00104f16;
}

