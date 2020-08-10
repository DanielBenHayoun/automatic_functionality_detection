
undefined8 *
ofile_open(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  int *piVar9;
  int *piVar10;
  ulong extraout_RDX;
  long extraout_RDX_00;
  undefined8 extraout_RDX_01;
  byte **ppbVar11;
  undefined *puVar12;
  byte bVar13;
  uint *puVar14;
  int *piVar15;
  byte *pbVar16;
  char cVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long in_FS_OFFSET;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  undefined auVar27 [16];
  byte *pbStack472;
  undefined *puStack464;
  byte *apbStack456 [5];
  undefined *puStack416;
  undefined *puStack408;
  undefined *puStack400;
  undefined *puStack392;
  undefined *puStack384;
  undefined8 uStack376;
  undefined8 uStack368;
  undefined8 uStack352;
  undefined8 uStack336;
  ulong uStack328;
  ulong uStack320;
  undefined *puStack312;
  undefined8 *puStack296;
  undefined8 *puStack288;
  bool bStack274;
  bool bStack273;
  undefined8 *puStack272;
  ulong uStack264;
  ulong uStack248;
  long lStack240;
  undefined8 *puStack232;
  undefined8 *puStack224;
  long lStack216;
  undefined *puStack208;
  int *piStack192;
  uint *puStack184;
  uint uStack164;
  uint uStack148;
  undefined8 auStack144 [3];
  long lStack120;
  int *piStack104;
  undefined8 *puStack96;
  long lStack88;
  undefined8 *puStack80;
  undefined8 *puStack64;
  
  bVar26 = 0;
  puStack224 = (undefined8 *)(param_2 * 0x20 + param_1);
  puStack96 = (undefined8 *)0x0;
  if (-1 < (int)*(uint *)(puStack224 + 1)) {
    return (undefined8 *)0;
  }
  lStack216 = param_3 + -1;
  uVar4 = *puStack224;
  lVar18 = param_2 + -1;
  if (param_2 == 0) {
    lVar18 = lStack216;
  }
  if (*(uint *)(puStack224 + 1) == 0xffffffff) goto code_r0x0010476b;
code_r0x001046d8:
  puStack80 = (undefined8 *)&UNK_001046e4;
  uVar1 = open_safer(uVar4,0xc01);
  if ((int)uVar1 < 0) {
    do {
      puStack80 = (undefined8 *)&UNK_001046f1;
      param_5 = (undefined8 *)func_0x00101b70();
      if (1 < *(uint *)param_5 - 0x17) {
code_r0x001047e3:
        puStack80 = (undefined8 *)&UNK_001047f8;
        puStack64 = param_5;
        uVar4 = quotearg_n_style_colon(0,3,*puStack224);
        puStack80 = (undefined8 *)&UNK_00104816;
        func_0x00101ea0(1,(ulong)*(uint *)puStack64,&UNK_00108ddc,uVar4);
code_r0x00104816:
        puStack80 = (undefined8 *)&UNK_00104826;
        uVar4 = quotearg_n_style_colon(0,3,*puStack96);
        puStack80 = (undefined8 *)&UNK_00104844;
        param_5 = puStack64;
        func_0x00101ea0(1,(ulong)*(uint *)puStack64,&UNK_00108ddc,uVar4);
        goto code_r0x00104844;
      }
      while (puStack96 = (undefined8 *)(lVar18 * 0x20 + param_1), puStack64 = param_5,
            *(int *)(puStack96 + 1) < 0) {
        bVar25 = lVar18 == 0;
        lVar18 = lVar18 + -1;
        if (bVar25) {
          lVar18 = lStack216;
        }
        if (lVar18 == param_2) {
          puStack80 = (undefined8 *)&UNK_001047c5;
          uVar4 = quotearg_n_style_colon(0,3,*puStack224);
          puStack80 = (undefined8 *)&UNK_001047e3;
          func_0x00101ea0(1,(ulong)*(uint *)puStack64,&UNK_00108ddc,uVar4);
          param_5 = puStack64;
          goto code_r0x001047e3;
        }
      }
      puStack80 = (undefined8 *)&UNK_0010473e;
      iVar3 = rpl_fclose(puStack96[2]);
      if (iVar3 != 0) goto code_r0x00104816;
      *(undefined4 *)(puStack96 + 1) = 0xfffffffe;
      uVar1 = *(uint *)(puStack224 + 1);
      puStack96[2] = 0;
      uVar4 = *puStack224;
      puStack96 = (undefined8 *)0x1;
      if (uVar1 != 0xffffffff) goto code_r0x001046d8;
code_r0x0010476b:
      puStack80 = (undefined8 *)&UNK_00104770;
      uVar1 = create();
      if (-1 < (int)uVar1) break;
    } while( true );
  }
  *(uint *)(puStack224 + 1) = uVar1;
  puStack80 = (undefined8 *)&UNK_0010478a;
  lVar18 = func_0x00101e60((ulong)uVar1,&UNK_00108bd4);
  puStack224[2] = lVar18;
  uVar1 = filter_pid;
  if (lVar18 != 0) {
    filter_pid = 0;
    *(uint *)(puStack224 + 3) = uVar1;
    return puStack96;
  }
code_r0x00104844:
  puStack80 = (undefined8 *)&UNK_00104854;
  piStack104 = (int *)quotearg_n_style_colon(0,3,*puStack224);
  puStack80 = (undefined8 *)&UNK_0010485c;
  puVar14 = (uint *)func_0x00101b70();
  uVar22 = (ulong)*puVar14;
  lVar18 = 1;
  puStack80 = (undefined8 *)&UNK_00104874;
  piStack192 = piStack104;
  func_0x00101ea0(1,uVar22,&UNK_00108ddc);
  puStack232 = (undefined8 *)(extraout_RDX & 0xffffffff);
  uVar1 = (uint)uVar22;
  puVar14 = (uint *)(uVar22 & 0xffffffff);
  lStack120 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = (int)puVar14;
  piVar9 = piStack192;
  lStack88 = param_1;
  puStack80 = puStack224;
  if (lVar18 == 0) {
code_r0x001049b8:
    uStack164 = (uint)piVar9;
    if (-1 < (int)uVar1) {
      puStack184 = (uint *)&UNK_001049c7;
      iVar2 = func_0x00101d20(puVar14);
      if (-1 < iVar2) goto code_r0x001048bc;
      puStack184 = (uint *)&UNK_001049de;
      piStack192 = (int *)quotearg_n_style_colon(0,3,piStack192);
      puStack184 = (uint *)&UNK_001049e6;
      puVar6 = (uint *)func_0x00101b70();
      piVar10 = (int *)(ulong)*puVar6;
      lVar18 = 1;
      puStack184 = (uint *)&UNK_001049fe;
      func_0x00101ea0(1,piVar10,&UNK_00108ddc,piStack192);
code_r0x00104a00:
      lVar18 = lVar18 + -1;
      piVar15 = piVar10;
code_r0x00104a10:
      uStack164 = (uint)piVar10;
      n_open_pipes = lVar18;
      *piVar10 = piVar15[lVar18];
    }
  }
  else {
    puStack184 = (uint *)&UNK_001048b0;
    iVar2 = rpl_fclose();
    if (iVar2 != 0) {
      puStack184 = (uint *)&UNK_00104975;
      puStack224 = (undefined8 *)func_0x00101b70();
      if ((filter_command == (undefined8 *)0x0) || (*(uint *)puStack224 != 0x20)) {
        puStack184 = (uint *)&UNK_0010499a;
        piVar9 = (int *)quotearg_n_style_colon(0,3,piStack192);
        uVar1 = *(uint *)puStack224;
        puStack184 = (uint *)&UNK_001049b4;
        func_0x00101ea0(1,(ulong)uVar1,&UNK_00108ddc);
        goto code_r0x001049b8;
      }
    }
    uStack164 = (uint)piVar9;
    if (-1 < iVar3) {
code_r0x001048bc:
      uStack164 = (uint)piVar9;
      if (n_open_pipes != 0) {
        piVar10 = open_pipes;
        lVar18 = n_open_pipes;
        if (iVar3 == *open_pipes) goto code_r0x00104a00;
        lVar18 = n_open_pipes + -1;
        lVar5 = 0;
        do {
          piVar10 = piVar10 + 1;
          uStack164 = (uint)piVar9;
          if (lVar18 == lVar5) goto code_r0x00104900;
          lVar5 = lVar5 + 1;
          piVar9 = piVar10;
          piVar15 = open_pipes;
        } while (*piVar10 != iVar3);
        goto code_r0x00104a10;
      }
    }
  }
code_r0x00104900:
  if (0 < (int)puStack232) {
    uStack148 = 0;
    puStack184 = (uint *)&UNK_0010491c;
    iVar3 = func_0x00101ec0(puStack232,&uStack148,0);
    if (iVar3 == -1) {
      puStack184 = (uint *)&UNK_00104a8d;
      puVar14 = (uint *)func_0x00101b70();
      if (*puVar14 == 10) goto code_r0x00104925;
      puStack184 = (uint *)&UNK_00104aac;
      uVar4 = func_0x00101c40(0,&UNK_00108bd6,5);
      puStack184 = (uint *)&UNK_00104abe;
      func_0x00101ea0(1,(ulong)*puVar14,uVar4);
code_r0x00104ac0:
      puStack184 = (uint *)&UNK_00104acf;
      iVar3 = sig2str((ulong)puVar14 & 0xffffffff,auStack144);
      if (iVar3 != 0) {
        puStack184 = (uint *)&UNK_00104b3e;
        func_0x00101fc0(auStack144,1,0x13,&UNK_00108bf0,(ulong)puVar14 & 0xffffffff);
      }
      puStack224 = filter_command;
      puStack184 = (uint *)&UNK_00104ae9;
      piStack192 = (int *)quotearg_n_style_colon(0,3,piStack192);
      uStack164 = (uint)piStack192;
      puStack184 = (uint *)&UNK_00104aff;
      uVar4 = func_0x00101c40(0,&UNK_00108f78,5);
      puStack184 = (uint *)&UNK_00104b1a;
      param_5 = auStack144;
      func_0x00101ea0((ulong)((int)puVar14 + 0x80),0,uVar4,piStack192,auStack144,puStack224);
      puStack232 = auStack144;
    }
    else {
code_r0x00104925:
      puVar23 = filter_command;
      uVar1 = uStack148 & 0x7f;
      puVar14 = (uint *)(ulong)uVar1;
      uStack164 = uStack148;
      if ((char)((char)uVar1 + '\x01') < '\x02') {
        if (uVar1 != 0) goto code_r0x00104b45;
        bVar13 = (byte)((ulong)uStack148 >> 8);
        puVar14 = (uint *)(ulong)bVar13;
        if (bVar13 != 0) {
          puStack184 = (uint *)&UNK_00104a51;
          piStack192 = (int *)quotearg_n_style_colon(0,3,piStack192);
          uStack164 = (uint)piStack192;
          puStack184 = (uint *)&UNK_00104a67;
          uVar4 = func_0x00101c40(0,&UNK_00108fa8,5);
          param_5 = (undefined8 *)(ulong)(uint)bVar13;
          puStack184 = (uint *)&UNK_00104a7e;
          func_0x00101ea0((ulong)(uint)bVar13,0,uVar4,piStack192,param_5,puVar23);
          puStack232 = puVar23;
        }
      }
      else {
        if (uVar1 != 0xd) goto code_r0x00104ac0;
      }
    }
  }
  if (lStack120 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *)0x0;
  }
  puStack184 = (uint *)&UNK_00104b45;
  func_0x00101c70();
code_r0x00104b45:
  puStack184 = (uint *)&UNK_00104b5c;
  uVar4 = func_0x00101c40(0,&UNK_00108fd0,5);
  lStack240 = 0;
  cVar17 = '\x01';
  puStack184 = (uint *)&UNK_00104b71;
  func_0x00101ea0(1,0,uVar4,(ulong)uStack164);
  puStack184 = puVar14;
  if (cVar17 != '\0') {
    if (((lStack240 == 0) && (extraout_RDX_00 == 0)) && (elide_empty_files != '\0')) {
      return (undefined8 *)1;
    }
    puStack208 = &UNK_00104bc6;
    closeout(0,(ulong)output_desc,(ulong)filter_pid,outfile);
    puStack208 = &UNK_00104bcb;
    next_file_name();
    puStack208 = &UNK_00104bd7;
    output_desc = create(outfile);
    if ((int)output_desc < 0) {
      puStack208 = &UNK_00104c6b;
      uStack248 = quotearg_n_style_colon(0,3,outfile);
      puStack208 = &UNK_00104c73;
      puVar14 = (uint *)func_0x00101b70();
      puStack272 = (undefined8 *)(ulong)*puVar14;
      uVar19 = 1;
      puStack208 = &UNK_00104c8b;
      uVar22 = uStack248;
      auVar27 = func_0x00101ea0(1,puStack272,&UNK_00108ddc);
      uStack264 = SUB168(auVar27 >> 0x40,0);
      puVar23 = (undefined8 *)0x0;
      uStack328 = 1;
      bVar25 = true;
      uStack320 = uVar19;
      puStack208 = (undefined *)param_2;
      if (uVar22 == 0xffffffffffffffff) goto code_r0x00104d64;
      bStack273 = uVar22 < uStack264;
      if (uVar22 < uVar19) goto code_r0x00104da6;
      do {
        bVar24 = param_5 == (undefined8 *)0x0;
        puVar20 = puStack272;
        do {
          uStack264 = SUB168(auVar27 >> 0x40,0);
          bVar13 = (byte)uStack328 | bVar25;
          uStack328 = uStack328 & 0xffffffffffffff00 | (ulong)bVar13;
          if (bVar13 != 0) {
            puStack312 = &UNK_00104d3a;
            puStack296 = puVar20;
            puStack288 = param_5;
            bStack274 = bVar24;
            uStack328 = cwrite((ulong)bVar25,puVar20,uStack320);
            auVar27 = CONCAT88(uStack264,uStack328);
            uStack328 = uStack328 & 0xffffffff;
            param_5 = puStack288;
            puVar20 = puStack296;
            bVar24 = bStack274;
          }
          uStack264 = SUB168(auVar27 >> 0x40,0);
          puVar23 = (undefined8 *)((long)puVar23 + (ulong)bVar25);
          bVar25 = (bool)(puVar23 < param_5 | bVar24);
          if ((bVar25 == false) && ((char)uStack328 == '\0')) {
            return (undefined8 *)SUB168(auVar27,0);
          }
          uVar22 = uVar22 - uStack320;
          puVar20 = (undefined8 *)((long)puVar20 + uStack320);
          uStack320 = uVar19;
        } while (uVar19 <= uVar22);
        if (uVar22 != 0) goto code_r0x00104de0;
        while( true ) {
          uStack264 = SUB168(auVar27 >> 0x40,0);
          if (bStack273 != false) {
            lVar18 = (long)puVar23 + 1;
            if (puVar23 < param_5) {
              do {
                lVar18 = lVar18 + 1;
                puStack312 = &UNK_00104e72;
                uVar4 = cwrite(1,0,0);
              } while ((long)param_5 + 1 != lVar18);
              return (undefined8 *)uVar4;
            }
            return (undefined8 *)SUB168(auVar27,0);
          }
code_r0x00104d64:
          puStack296 = param_5;
          if ((char)uStack328 == '\0') {
            puStack312 = &UNK_00104e34;
            lVar18 = func_0x00101ce0(0,uStack320,1);
            if (lVar18 != -1) {
              bVar25 = true;
              uStack320 = uVar19;
            }
          }
          puStack312 = &UNK_00104d83;
          uVar22 = safe_read(0,puStack272,uStack264);
          auVar27 = CONCAT88(uStack264,uVar22);
          if (uVar22 == 0xffffffffffffffff) {
            puStack312 = &UNK_00104e99;
            uStack336 = quotearg_n_style_colon(0,3,infile);
            puStack312 = &UNK_00104ea1;
            puVar14 = (uint *)func_0x00101b70();
            uVar19 = 1;
            puStack312 = &UNK_00104eb9;
            func_0x00101ea0(1,(ulong)*puVar14,&UNK_00108ddc,uStack336);
            puVar12 = program_name;
            uVar4 = 5;
            uStack352 = *(undefined8 *)(in_FS_OFFSET + 0x28);
            puStack312 = (undefined *)uVar22;
            if ((int)uVar19 == 0) goto code_r0x00104f1d;
            uVar4 = func_0x00101c40(0,&UNK_00108ff8,5);
            func_0x00101f40(stderr,1,uVar4,puVar12);
            goto code_r0x00104f16;
          }
          bStack273 = uVar22 == 0;
          param_5 = puStack296;
          if (uStack320 <= uVar22) break;
code_r0x00104da6:
          uStack264 = SUB168(auVar27 >> 0x40,0);
          if (uVar22 != 0) {
            puVar20 = puStack272;
            if ((byte)((byte)uStack328 | bVar25) == 0) {
              uVar7 = 0;
              uStack328 = 0;
              bVar25 = param_5 == puVar23;
              if (bVar25) {
                return (undefined8 *)0;
              }
            }
            else {
code_r0x00104de0:
              puStack312 = &UNK_00104df3;
              puStack296 = param_5;
              uVar1 = cwrite((ulong)bVar25,puVar20,uVar22);
              uStack328 = (ulong)uVar1;
              uVar7 = (ulong)bVar25;
              puVar23 = (undefined8 *)((long)puVar23 + uVar7);
              bVar25 = (bool)(puStack296 == puVar23 & ((byte)uVar1 ^ 1));
              param_5 = puStack296;
              if (bVar25 != false) {
                return (undefined8 *)uVar7;
              }
            }
            auVar27 = CONCAT88(uStack264,uVar7);
            uStack320 = uStack320 - uVar22;
          }
        }
      } while( true );
    }
  }
  puStack208 = &UNK_00104bee;
  lVar18 = full_write((ulong)output_desc,lStack240,extraout_RDX_00);
  if (lVar18 != extraout_RDX_00) {
    puStack208 = &UNK_00104bf8;
    puVar14 = (uint *)func_0x00101b70();
    if ((filter_command != (undefined8 *)0x0) && (*puVar14 == 0x20)) {
      return (undefined8 *)0;
    }
    puStack208 = &UNK_00104c1f;
    uVar4 = quotearg_n_style_colon(0,3,outfile);
    puStack208 = &UNK_00104c37;
    func_0x00101ea0(1,(ulong)*puVar14,&UNK_00108ddc,uVar4);
  }
  return (undefined8 *)1;
code_r0x00104f16:
  func_0x00101f20(uVar19 & 0xffffffff);
  uVar4 = extraout_RDX_01;
code_r0x00104f1d:
  uVar4 = func_0x00101c40(0,&UNK_00109020,uVar4);
  func_0x00101e80(1,uVar4,puVar12);
  uVar4 = stdout;
  uVar8 = func_0x00101c40(0,&UNK_00109048,5);
  func_0x00101d80(uVar8,uVar4);
  uVar4 = stdout;
  uVar8 = func_0x00101c40(0,&UNK_001090b8,5);
  func_0x00101d80(uVar8,uVar4);
  uVar4 = stdout;
  uVar8 = func_0x00101c40(0,&UNK_001090f0,5);
  func_0x00101d80(uVar8,uVar4);
  uVar4 = func_0x00101c40(0,&UNK_00109140,5);
  func_0x00101f40(stdout,1,uVar4,2);
  uVar4 = stdout;
  uVar8 = func_0x00101c40(0,&UNK_00109588,5);
  func_0x00101d80(uVar8,uVar4);
  uVar4 = stdout;
  uVar8 = func_0x00101c40(0,&UNK_00109600,5);
  func_0x00101d80(uVar8,uVar4);
  uVar4 = stdout;
  uVar8 = func_0x00101c40(0,&UNK_00109630,5);
  func_0x00101d80(uVar8,uVar4);
  uVar4 = stdout;
  uVar8 = func_0x00101c40(0,&UNK_00109668,5);
  func_0x00101d80(uVar8,uVar4);
  uVar4 = stdout;
  uVar8 = func_0x00101c40(0,&UNK_00109740,5);
  func_0x00101d80(uVar8,uVar4);
  uStack376 = 0;
  uStack368 = 0;
  pbStack472 = &UNK_00108bf9;
  apbStack456[4] = &UNK_00108c3a;
  puStack464 = &UNK_00108bfb;
  puStack408 = &UNK_00108c44;
  apbStack456[0] = &UNK_00108c73;
  puStack392 = &UNK_00108c4e;
  apbStack456[1] = &UNK_00108c0b;
  apbStack456[2] = &UNK_00108c21;
  apbStack456[3] = &UNK_00108c2b;
  puStack416 = &UNK_00108c2b;
  puStack400 = &UNK_00108c2b;
  puStack384 = &UNK_00108c2b;
  ppbVar11 = &pbStack472;
  do {
    ppbVar11 = ppbVar11;
    ppbVar11 = ppbVar11 + 2;
    pbVar21 = *ppbVar11;
    bVar25 = false;
    bVar24 = pbVar21 == (byte *)0x0;
    if (bVar24) break;
    lVar18 = 6;
    pbVar16 = &UNK_00108bf3;
    do {
      if (lVar18 == 0) break;
      lVar18 = lVar18 + -1;
      bVar25 = *pbVar16 < *pbVar21;
      bVar24 = *pbVar16 == *pbVar21;
      pbVar16 = pbVar16 + (ulong)bVar26 * -2 + 1;
      pbVar21 = pbVar21 + (ulong)bVar26 * -2 + 1;
    } while (bVar24);
  } while ((!bVar25 && !bVar24) != bVar25);
  pbVar21 = ppbVar11[3];
  if (pbVar21 == (byte *)0x0) {
    uVar4 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar4,&UNK_00108c6f,&UNK_00109898);
    lVar18 = func_0x00101e70(5,0);
    if ((lVar18 != 0) && (iVar3 = func_0x00101b80(lVar18,&UNK_00108c7d,3), iVar3 != 0)) {
      pbVar21 = &UNK_00108bf3;
      goto code_r0x001052c0;
    }
    pbVar21 = &UNK_00108bf3;
    puVar12 = &UNK_00108c15;
    uVar4 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar4,&UNK_00109898,&UNK_00108bf3);
  }
  else {
    uVar4 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar4,&UNK_00108c6f,&UNK_00109898);
    lVar18 = func_0x00101e70(5,0);
    if ((lVar18 != 0) && (iVar3 = func_0x00101b80(lVar18,&UNK_00108c7d,3), iVar3 != 0)) {
code_r0x001052c0:
      uVar4 = stdout;
      uVar8 = func_0x00101c40(0,&UNK_001098c0,5);
      func_0x00101d80(uVar8,uVar4);
    }
    uVar4 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar4,&UNK_00109898,&UNK_00108bf3);
    puVar12 = &UNK_0010a141;
    if (pbVar21 == &UNK_00108bf3) {
      puVar12 = &UNK_00108c15;
    }
  }
  uVar4 = func_0x00101c40(0,&UNK_00109908,5);
  func_0x00101e80(1,uVar4,pbVar21,puVar12);
  goto code_r0x00104f16;
}

