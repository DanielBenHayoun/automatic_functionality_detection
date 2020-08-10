
ulong main(undefined4 param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte bVar16;
  byte *pbVar17;
  byte bVar18;
  byte unaff_R13B;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long in_FS_OFFSET;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  undefined auVar25 [16];
  undefined8 auStack416 [3];
  undefined8 uStack392;
  byte *pbStack384;
  uint *apuStack376 [3];
  undefined8 *puStack352;
  int iStack344;
  byte abStack338 [2];
  byte *apbStack336 [3];
  uint uStack312;
  char acStack308 [4];
  undefined8 *apuStack304 [6];
  uint uStack256;
  byte abStack252 [4];
  undefined8 auStack248 [3];
  int iStack220;
  undefined8 auStack216 [3];
  uint auStack192 [6];
  undefined8 auStack168 [13];
  undefined8 auStack64 [2];
  
  bVar24 = 0;
  bVar18 = 0;
  auStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  apbStack336[2] = param_2;
  uStack312 = param_1;
  iVar2 = func_0x00101720();
  set_program_name(*param_2);
  func_0x001016b0(6,&UNK_001060c1);
  func_0x00101510(&UNK_0010558e,&UNK_001055b7);
  func_0x001014f0(&UNK_0010558e);
  atexit(close_stdout);
  abStack338[0] = 0;
  acStack308[1] = 0;
  acStack308[2] = 0;
  abStack252[1] = 0;
  abStack338[1] = 0;
  puVar14 = (undefined8 *)&uStack392;
code_r0x00101870:
  puVar14[-1] = 0x10188f;
  iVar3 = func_0x00101570((ulong)*(uint *)(puVar14 + 10),puVar14[9],&UNK_001055f5,long_options_7050)
  ;
  if (iVar3 == -1) goto code_r0x00101983;
  puVar20 = puVar14;
  if (iVar3 == 0x62) {
code_r0x00101969:
    ((undefined *)puVar20)[0x8d] = 1;
code_r0x00101908:
    ((undefined *)puVar20)[0x37] = 1;
    puVar14 = puVar20;
    goto code_r0x00101870;
  }
  if (0x62 < iVar3) {
    if (iVar3 == 0x73) {
      *(undefined *)((long)puVar14 + 0x56) = 1;
    }
    else {
      if (iVar3 < 0x74) {
        if (iVar3 == 0x65) goto code_r0x001018eb;
        if (iVar3 == 0x6e) goto code_r0x00101908;
        goto code_r0x001023a0;
      }
      if (iVar3 != 0x75) {
        if (iVar3 < 0x75) {
          bVar18 = 1;
          *(undefined *)((long)puVar14 + 0x36) = 1;
        }
        else {
          if (iVar3 != 0x76) goto code_r0x001023a0;
          *(undefined *)((long)puVar14 + 0x36) = 1;
        }
      }
    }
    goto code_r0x00101870;
  }
  if (iVar3 == 0x41) {
    bVar18 = 1;
code_r0x001018eb:
    *(undefined *)((long)puVar14 + 0x36) = 1;
  }
  else {
    if (iVar3 < 0x42) {
      *(int *)(puVar14 + 6) = iVar3;
      if (iVar3 == -0x83) {
        puVar20 = puVar14 + -2;
        puVar14[-2] = 0;
        puVar14[-3] = 0x101962;
        version_etc(stdout,&UNK_00105510,&UNK_0010558a,Version,&UNK_001055e3,&UNK_001055cf);
        puVar14[-3] = 0x101969;
        func_0x00101730();
        goto code_r0x00101969;
      }
      if (iVar3 == -0x82) {
        puVar14[-1] = 0x102374;
        usage(0);
code_r0x00102374:
        puVar14[-1] = 0x102387;
        uVar9 = func_0x00101530(0,&UNK_00105504,5);
        puVar14[-1] = 0x10238f;
        puVar6 = (uint *)func_0x001014a0();
        uVar12 = *puVar6;
        puVar14[-1] = 0x1023a0;
        func_0x001016e0(1,(ulong)uVar12,uVar9);
      }
code_r0x001023a0:
      puVar14[-1] = 0x1023aa;
      usage(1);
code_r0x001023aa:
      puVar14[-1] = 0x1023af;
      func_0x00101560();
code_r0x001023af:
      puVar14[-1] = 0x1023c2;
      uVar9 = func_0x00101530(0,&UNK_00105600,5);
      puVar14[-1] = 0x1023ca;
      puVar6 = (uint *)func_0x001014a0();
      uVar12 = *puVar6;
      puVar14[-1] = 0x1023db;
      auVar25 = func_0x001016e0(1,(ulong)uVar12,uVar9);
      uVar9 = *puVar14;
      uVar15 = (ulong)(puVar14 + 1) & 0xfffffffffffffff0;
      *(undefined8 *)(uVar15 - 8) = SUB168(auVar25,0);
      *(ulong *)(uVar15 - 0x10) = uVar15 - 8;
      *(undefined8 *)(uVar15 - 0x18) = 0x10240a;
      (*(code *)PTR___libc_start_main_00307fd0)
                (main,uVar9,puVar14 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar25 >> 0x40,0));
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar3 != 0x45) {
      if (iVar3 != 0x54) goto code_r0x001023a0;
      bVar18 = 1;
      goto code_r0x00101870;
    }
  }
  *(undefined *)((long)puVar14 + 0x55) = 1;
  goto code_r0x00101870;
code_r0x00101983:
  *(undefined4 *)(puVar14 + 6) = 0xffffffff;
  *(undefined8 **)(puVar14 + 0x10) = puVar14 + 0x16;
  puVar14[-1] = 0x1019a9;
  iVar3 = func_0x00101680(1,1,puVar14 + 0x16);
  if (-1 < iVar3) {
    puVar20 = (undefined8 *)puVar14[0x1d];
    *(undefined *)((long)puVar14 + 0x8e) = 0;
    *(undefined *)((long)puVar14 + 0x8c) = 1;
    puVar14[0xb] = (long)(int)optind;
    if ((undefined8 *)0x1ffffffffffe0000 < puVar20 + -0x4000) {
      puVar20 = (undefined8 *)0x20000;
    }
    puVar14[0xd] = (long)iVar2;
    puVar14[0x12] = puVar14[0x16];
    puVar14[0x13] = puVar14[0x17];
    *(uint *)(puVar14 + 0x11) = *(uint *)(puVar14 + 0x19) & 0xf000;
    puVar21 = puVar14 + 10;
    bVar22 = *(uint *)puVar21 < optind;
    bVar23 = *(uint *)puVar21 == optind;
    *(byte *)((long)puVar14 + 0x8f) =
         *(byte *)((long)puVar14 + 0x37) | *(byte *)((long)puVar14 + 0x55);
    infile = &UNK_00105b8a;
    puVar19 = param_2;
    if (bVar23 || (int)*(uint *)puVar21 < (int)optind) goto code_r0x001022fa;
code_r0x00101a55:
    pbVar7 = *(byte **)(puVar14[9] + puVar14[0xb] * 8);
    param_2 = puVar20;
    infile = pbVar7;
code_r0x00101a6a:
    lVar10 = 2;
    pbVar5 = pbVar7;
    pbVar17 = &UNK_00105b8a;
    do {
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
      bVar22 = *pbVar5 < *pbVar17;
      bVar23 = *pbVar5 == *pbVar17;
      pbVar5 = pbVar5 + (ulong)bVar24 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar24 * -2 + 1;
    } while (bVar23);
    cVar11 = (!bVar22 && !bVar23) - bVar22;
    uVar12 = SEXT14(cVar11);
    if (cVar11 == '\0') {
      input_desc = 0;
      *(undefined *)((long)puVar14 + 0x8e) = 1;
    }
    else {
      puVar14[-1] = 0x101f65;
      uVar12 = func_0x001016f0(pbVar7);
      input_desc = uVar12;
      if ((int)uVar12 < 0) goto code_r0x00101f75;
    }
    puVar14[-1] = 0x101ab2;
    iVar2 = func_0x00101680(1,(ulong)uVar12,puVar14[0x10]);
    if (iVar2 < 0) {
      puVar14[-1] = 0x10217a;
      uVar9 = quotearg_n_style_colon(0,3,infile);
      puVar14[-1] = 0x102182;
      puVar6 = (uint *)func_0x001014a0();
      uVar12 = *puVar6;
      bVar22 = false;
      bVar23 = true;
      puVar14[-1] = 0x102197;
      func_0x001016e0(0,(ulong)uVar12,&UNK_00105b44,uVar9);
      *(undefined *)((long)puVar14 + 0x8c) = 0;
      goto code_r0x00102074;
    }
    lVar10 = 0x20000;
    if (puVar14[0x1d] - 0x20000 < 0x1ffffffffffe0001) {
      lVar10 = puVar14[0x1d];
    }
    puVar14[7] = lVar10;
    puVar14[-1] = 0x101af4;
    fdadvise((ulong)uVar12,0,0,2);
    if (((*(int *)(puVar14 + 0x11) == 0x8000) && (puVar14[0x16] == puVar14[0x12])) &&
       (puVar14[0x17] == puVar14[0x13])) {
      puVar14[-1] = 0x102112;
      lVar10 = func_0x001015a0((ulong)input_desc,0,1);
      if (lVar10 < (long)puVar14[0x1c]) {
        puVar14[-1] = 0x102133;
        uVar9 = quotearg_n_style_colon(0,3,infile);
        puVar14[-1] = 0x102149;
        uVar8 = func_0x00101530(0,&UNK_00105610,5);
        bVar22 = false;
        bVar23 = true;
        puVar14[-1] = 0x10215a;
        func_0x001016e0(0,0,uVar8,uVar9);
        *(undefined *)((long)puVar14 + 0x8c) = 0;
        goto code_r0x00102074;
      }
    }
    puVar19 = (undefined8 *)(puVar14[0xd] + -1);
    if ((*(char *)((long)puVar14 + 0x8f) == '\0') &&
       (unaff_R13B = *(byte *)((long)puVar14 + 0x36) | bVar18 | *(byte *)((long)puVar14 + 0x56),
       unaff_R13B == 0)) goto code_r0x0010221f;
    uVar1 = puVar14[0xd];
    puVar14[-1] = 0x101b41;
    lVar10 = xmalloc(uVar1 + puVar14[7]);
    puVar14[0xe] = lVar10;
    puVar14[-1] = 0x101b57;
    lVar4 = xmalloc();
    puVar14[0xf] = lVar4;
    *(undefined *)((long)puVar14 + 0x54) = 1;
    *(undefined4 *)((long)puVar14 + 4) = newlines2;
    unaff_R13B = bVar18 ^ 1;
    puVar20 = (undefined8 *)((lVar4 + (long)puVar19) - (ulong)(lVar4 + (long)puVar19) % uVar1);
    *(undefined8 **)(puVar14 + 4) = puVar20;
    puVar14[2] = (long)puVar20 + (long)param_2;
    lVar10 = ((long)puVar19 + lVar10) - (ulong)((long)puVar19 + lVar10) % uVar1;
    pbVar7 = (byte *)(lVar10 + 1);
    puVar14[3] = lVar10;
    puVar14[1] = lVar10;
    *(byte **)(puVar14 + 8) = pbVar7;
    *(byte *)((long)puVar14 + 0x57) = *(byte *)((long)puVar14 + 0x8d) ^ 1;
    *(undefined **)(puVar14 + 0xc) = (undefined *)((long)puVar14 + 0xac);
code_r0x00101be0:
    if ((undefined8 *)puVar14[2] < puVar20 || (undefined8 *)puVar14[2] == puVar20)
    goto code_r0x00101da3;
code_r0x00101beb:
    pbVar5 = pbVar7;
    puVar19 = param_2;
    if (pbVar7 < (byte *)puVar14[1] || pbVar7 == (byte *)puVar14[1]) goto code_r0x00101e03;
code_r0x00101bf6:
    *(undefined4 *)((long)puVar14 + 0xac) = 0;
    puVar21 = puVar20;
    if (*(char *)((long)puVar14 + 0x54) != '\0') {
      puVar13 = (undefined8 *)(ulong)input_desc;
      puVar14[-1] = 0x101ec9;
      iVar2 = func_0x001015c0((ulong)input_desc,0x541b,puVar14[0xc]);
      if (iVar2 < 0) goto code_r0x00101f20;
      goto code_r0x00101ecd;
    }
    do {
      puVar13 = (undefined8 *)((long)puVar21 - puVar14[4]);
      if (puVar13 != (undefined8 *)0x0) {
        param_2 = (undefined8 *)puVar14[4];
        puVar14[-1] = 0x101f08;
        puVar20 = (undefined8 *)full_write(1,param_2,puVar13);
        puVar21 = param_2;
        if (puVar13 != puVar20) goto code_r0x00101f11;
      }
      puVar13 = (undefined8 *)(ulong)input_desc;
      param_2 = puVar19;
      do {
        puVar14[-1] = 0x101c31;
        lVar10 = safe_read((ulong)puVar13 & 0xffffffff,puVar14[3],puVar14[7]);
        if (lVar10 != -1) {
          if (lVar10 != 0) {
            pbVar5 = (byte *)puVar14[3];
            pbVar7 = (byte *)puVar14[8];
            *(byte **)(puVar14 + 1) = pbVar5 + lVar10;
            pbVar5[lVar10] = 10;
            goto code_r0x00101c5c;
          }
          puVar13 = (undefined8 *)((long)puVar21 - puVar14[4]);
          puVar19 = param_2;
          if (puVar13 != (undefined8 *)0x0) {
            puVar14[-1] = 0x1021d6;
            puVar20 = (undefined8 *)full_write(1,puVar14[4],puVar13);
            if (puVar13 != puVar20) goto code_r0x00101f11;
          }
          newlines2 = *(undefined4 *)((long)puVar14 + 4);
          bVar16 = 1;
code_r0x00102058:
          pbVar7 = (byte *)((long)puVar14 + 0x8c);
          bVar22 = false;
          *pbVar7 = *pbVar7 & bVar16;
          bVar23 = *pbVar7 == 0;
          puVar14[-1] = 0x10206a;
          func_0x00101480(puVar14[0xf]);
          goto code_r0x0010206a;
        }
        puVar14[-1] = 0x102023;
        puVar13 = (undefined8 *)quotearg_n_style_colon(0,3,infile);
        puVar14[-1] = 0x10202b;
        puVar6 = (uint *)func_0x001014a0();
        uVar12 = *puVar6;
        puVar14[-1] = 0x102040;
        func_0x001016e0(0,(ulong)uVar12,&UNK_00105b44);
        puVar19 = (undefined8 *)((long)puVar21 - puVar14[4]);
        if (puVar19 == (undefined8 *)0x0) {
code_r0x0010204b:
          newlines2 = *(undefined4 *)((long)puVar14 + 4);
          bVar16 = 0;
          goto code_r0x00102058;
        }
        puVar14[-1] = 0x1021b6;
        puVar20 = (undefined8 *)full_write(1,puVar14[4],puVar19);
        if (puVar19 == puVar20) goto code_r0x0010204b;
code_r0x00101f11:
        puVar14[-1] = 0x101f16;
        write_pending_part_6();
        puVar20 = param_2;
code_r0x00101f20:
        puVar14[-1] = 0x101f25;
        puVar6 = (uint *)func_0x001014a0();
        uVar12 = *puVar6;
        bVar22 = uVar12 == 0x5f;
        if (uVar12 < 0x27) {
          bVar22 = (bool)(bVar22 | (byte)(0x4002480000 >> ((byte)uVar12 & 0x3f)) & 1);
        }
        if (bVar22 == false) {
          *(undefined *)(puVar14 + 1) = 0;
          *(uint **)(puVar14 + 2) = puVar6;
          puVar14[-1] = 0x102324;
          uVar9 = quotearg_style(4,infile);
          puVar14[-1] = 0x10233a;
          uVar8 = func_0x00101530(0,&UNK_0010562e,5);
          uVar12 = *(uint *)puVar14[2];
          puVar14[-1] = 0x102351;
          func_0x001016e0(0,(ulong)uVar12,uVar8,uVar9);
          newlines2 = *(undefined4 *)((long)puVar14 + 4);
          bVar16 = *(byte *)(puVar14 + 1);
          param_2 = puVar19;
          goto code_r0x00102058;
        }
        *(undefined *)((long)puVar14 + 0x54) = 0;
        puVar21 = puVar20;
code_r0x00101ecd:
        param_2 = puVar19;
      } while (*(int *)((long)puVar14 + 0xac) != 0);
    } while( true );
  }
  goto code_r0x001023af;
code_r0x00101c5c:
  bVar16 = *pbVar5;
  puVar20 = puVar21;
code_r0x00101c5f:
  if (bVar16 != 10) {
    if ((-1 < *(int *)((long)puVar14 + 4)) && (*(char *)((long)puVar14 + 0x37) != '\0')) {
      puVar14[-1] = 0x101c7d;
      next_line_num();
      puVar14[-1] = 0x101c8c;
      puVar20 = (undefined8 *)func_0x00101520(puVar20,line_num_print);
    }
    if (*(char *)((long)puVar14 + 0x36) == '\0') {
      do {
        if ((bVar16 == 9) && (bVar18 != 0)) {
          puVar19 = (undefined8 *)((long)puVar20 + 2);
          *(undefined2 *)puVar20 = 0x495e;
        }
        else {
          if (bVar16 == 10) goto code_r0x00101d90;
          *(byte *)puVar20 = bVar16;
          puVar19 = (undefined8 *)((long)puVar20 + 1);
        }
        bVar16 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        puVar20 = puVar19;
      } while( true );
    }
    do {
      if (bVar16 < 0x20) {
        if ((bVar16 == 9) && (unaff_R13B != 0)) {
          *(undefined *)puVar20 = 9;
          puVar19 = (undefined8 *)((long)puVar20 + 1);
        }
        else {
          if (bVar16 == 10) goto code_r0x00101d90;
          *(undefined *)puVar20 = 0x5e;
          puVar19 = (undefined8 *)((long)puVar20 + 2);
          *(char *)((long)puVar20 + 1) = bVar16 + 0x40;
        }
      }
      else {
        if (bVar16 < 0x7f) {
          *(byte *)puVar20 = bVar16;
          puVar19 = (undefined8 *)((long)puVar20 + 1);
        }
        else {
          if (bVar16 == 0x7f) {
            puVar19 = (undefined8 *)((long)puVar20 + 2);
            *(undefined2 *)puVar20 = 0x3f5e;
          }
          else {
            *(undefined2 *)puVar20 = 0x2d4d;
            if (bVar16 < 0xa0) {
              *(undefined *)((long)puVar20 + 2) = 0x5e;
              puVar19 = (undefined8 *)((long)puVar20 + 4);
              *(char *)((long)puVar20 + 3) = bVar16 - 0x40;
            }
            else {
              if (bVar16 == 0xff) {
                puVar19 = (undefined8 *)((long)puVar20 + 4);
                *(undefined2 *)((long)puVar20 + 2) = 0x3f5e;
              }
              else {
                puVar19 = (undefined8 *)((long)puVar20 + 3);
                *(byte *)((long)puVar20 + 2) = bVar16 + 0x80;
              }
            }
          }
        }
      }
      bVar16 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      puVar20 = puVar19;
    } while( true );
  }
  goto code_r0x00101be0;
code_r0x00101d90:
  *(undefined4 *)((long)puVar14 + 4) = *(undefined4 *)(puVar14 + 6);
  if (puVar20 <= (undefined8 *)puVar14[2] && (undefined8 *)puVar14[2] != puVar20)
  goto code_r0x00101beb;
code_r0x00101da3:
  lVar10 = puVar14[4];
  while( true ) {
    puVar14[-1] = 0x101dc0;
    puVar19 = (undefined8 *)full_write(1,lVar10,param_2);
    if (param_2 != puVar19) break;
    lVar10 = lVar10 + (long)param_2;
    puVar19 = (undefined8 *)((long)puVar20 - lVar10);
    if (puVar19 < param_2) goto code_r0x00101dd7;
  }
  puVar14[-1] = 0x1022e1;
  uVar9 = func_0x00101530(0,&UNK_00105504,5);
  puVar14[-1] = 0x1022e9;
  puVar6 = (uint *)func_0x001014a0();
  uVar12 = *puVar6;
  bVar22 = false;
  bVar23 = true;
  puVar14[-1] = 0x1022fa;
  func_0x001016e0(1,(ulong)uVar12,uVar9);
code_r0x001022fa:
  pbVar7 = &UNK_00105b8a;
  puVar19 = param_2;
  param_2 = puVar20;
  goto code_r0x00101a6a;
code_r0x00101dd7:
  lVar4 = puVar14[4];
  *(undefined8 **)(puVar14 + 5) = puVar19;
  puVar14[-1] = 0x101def;
  func_0x001016d0(lVar4,lVar10,puVar19);
  puVar20 = (undefined8 *)(lVar4 + puVar14[5]);
  pbVar5 = pbVar7;
  puVar19 = param_2;
  if ((byte *)puVar14[1] <= pbVar7 && pbVar7 != (byte *)puVar14[1]) goto code_r0x00101bf6;
code_r0x00101e03:
  *(int *)((long)puVar14 + 4) = *(int *)((long)puVar14 + 4) + 1;
  pbVar7 = pbVar5 + 1;
  if (*(int *)((long)puVar14 + 4) < 1) goto code_r0x00101e60;
  if ((*(int *)((long)puVar14 + 4) == 1) ||
     (*(undefined4 *)((long)puVar14 + 4) = 2, *(char *)((long)puVar14 + 0x56) == '\0'))
  goto code_r0x00101e2c;
  bVar16 = *pbVar5;
  goto code_r0x00101c5f;
code_r0x00101e2c:
  if ((*(char *)((long)puVar14 + 0x57) != '\0') && (*(char *)((long)puVar14 + 0x37) != '\0')) {
    *(byte **)(puVar14 + 5) = pbVar7;
    puVar14[-1] = 0x101e44;
    next_line_num();
    puVar14[-1] = 0x101e53;
    puVar20 = (undefined8 *)func_0x00101520(puVar20,line_num_print);
    pbVar7 = (byte *)puVar14[5];
  }
code_r0x00101e60:
  puVar21 = (undefined8 *)((long)puVar20 + 1);
  if (*(char *)((long)puVar14 + 0x55) != '\0') {
    *(undefined *)puVar20 = 0x24;
    puVar19 = (undefined8 *)((long)puVar20 + 2);
    puVar20 = puVar21;
    puVar21 = puVar19;
  }
  *(undefined *)puVar20 = 10;
  goto code_r0x00101c5c;
code_r0x0010206a:
  puVar14[-1] = 0x102074;
  func_0x00101480(puVar14[0xe]);
code_r0x00102074:
  lVar10 = 2;
  pbVar7 = infile;
  pbVar5 = &UNK_00105b8a;
  do {
    if (lVar10 == 0) break;
    lVar10 = lVar10 + -1;
    bVar22 = *pbVar7 < *pbVar5;
    bVar23 = *pbVar7 == *pbVar5;
    pbVar7 = pbVar7 + (ulong)bVar24 * -2 + 1;
    pbVar5 = pbVar5 + (ulong)bVar24 * -2 + 1;
  } while (bVar23);
  if ((!bVar22 && !bVar23) != bVar22) {
    puVar14[-1] = 0x1020a1;
    iVar2 = func_0x001015d0((ulong)input_desc);
    if (iVar2 < 0) {
code_r0x00101f75:
      puVar14[-1] = 0x101f88;
      uVar9 = quotearg_n_style_colon(0,3,infile);
      puVar14[-1] = 0x101f90;
      puVar6 = (uint *)func_0x001014a0();
      uVar12 = *puVar6;
      puVar14[-1] = 0x101fa5;
      func_0x001016e0(0,(ulong)uVar12,&UNK_00105b44,uVar9);
      *(undefined *)((long)puVar14 + 0x8c) = 0;
    }
  }
  puVar14[0xb] = puVar14[0xb] + 1;
  puVar21 = puVar14 + 10;
  uVar12 = (uint)puVar14[0xb];
  bVar22 = *(uint *)puVar21 < uVar12;
  bVar23 = *(uint *)puVar21 == uVar12;
  puVar20 = param_2;
  if (!bVar23 && (int)uVar12 <= (int)*(uint *)puVar21) goto code_r0x00101a55;
  if (*(char *)((long)puVar14 + 0x8e) == '\0') {
code_r0x00101fd0:
    if (puVar14[0x29] == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)(*(byte *)((long)puVar14 + 0x8c) ^ 1);
    }
    goto code_r0x001023aa;
  }
  puVar14[-1] = 0x1021eb;
  iVar2 = func_0x001015d0(0);
  if (-1 < iVar2) goto code_r0x00101fd0;
  puVar14[-1] = 0x102206;
  uVar9 = func_0x00101530(0,&UNK_00105644,5);
  puVar14[-1] = 0x10220e;
  puVar6 = (uint *)func_0x001014a0();
  uVar12 = *puVar6;
  puVar14[-1] = 0x10221f;
  func_0x001016e0(1,(ulong)uVar12,uVar9);
code_r0x0010221f:
  puVar20 = (undefined8 *)puVar14[7];
  if ((undefined8 *)puVar14[7] <= param_2) {
    puVar20 = param_2;
  }
  puVar14[-1] = 0x102237;
  lVar10 = xmalloc((long)puVar20 + (long)puVar19);
  puVar14[0xe] = lVar10;
  lVar10 = ((long)puVar19 + lVar10) - (ulong)((long)puVar19 + lVar10) % puVar14[0xd];
  while( true ) {
    puVar14[-1] = 0x102280;
    puVar19 = (undefined8 *)safe_read((ulong)input_desc,lVar10,puVar20);
    if (puVar19 == (undefined8 *)0xffffffffffffffff) break;
    if (puVar19 == (undefined8 *)0x0) {
      unaff_R13B = 1;
      goto code_r0x001022b9;
    }
    puVar14[-1] = 0x102266;
    puVar21 = (undefined8 *)full_write(1,lVar10,puVar19);
    if (puVar19 != puVar21) goto code_r0x00102374;
  }
  puVar14[-1] = 0x10229c;
  uVar9 = quotearg_n_style_colon(0,3,infile);
  puVar14[-1] = 0x1022a4;
  puVar6 = (uint *)func_0x001014a0();
  uVar12 = *puVar6;
  puVar14[-1] = 0x1022b9;
  func_0x001016e0(0,(ulong)uVar12,&UNK_00105b44,uVar9);
code_r0x001022b9:
  pbVar7 = (byte *)((long)puVar14 + 0x8c);
  bVar22 = false;
  *pbVar7 = *pbVar7 & unaff_R13B;
  bVar23 = *pbVar7 == 0;
  goto code_r0x0010206a;
}

