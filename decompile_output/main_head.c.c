
ulong main(ulong param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  byte bVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  ulong in_R10;
  undefined uVar25;
  char cVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *unaff_R14;
  undefined8 *puVar29;
  ulong uVar30;
  long in_FS_OFFSET;
  bool bVar31;
  bool bVar32;
  byte bVar33;
  undefined8 auStack432 [5];
  undefined auStack392 [12];
  uint uStack380;
  byte **ppbStack376;
  ulong uStack368;
  byte *pbStack360;
  ulong uStack352;
  undefined8 *puStack344;
  undefined8 *puStack336;
  long lStack328;
  undefined8 *apuStack320 [2];
  ulong auStack304 [2];
  undefined8 uStack288;
  long alStack280 [2];
  undefined8 *puStack264;
  bool abStack255 [3];
  uint uStack252;
  long alStack248 [5];
  uint auStack208 [6];
  long alStack184 [15];
  long alStack64 [2];
  
  bVar33 = 0;
  puVar9 = (undefined8 *)(param_1 & 0xffffffff);
  puVar16 = auStack392;
  puVar17 = auStack392;
  puVar18 = auStack392;
  puVar22 = auStack392;
  alStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101750(6,&UNK_00107621);
  func_0x00101590(&UNK_0010692c,&UNK_00106955);
  func_0x00101570(&UNK_0010692c);
  atexit(close_stdout);
  iVar2 = (int)puVar9;
  have_read_stdin = '\0';
  print_headers = '\0';
  line_end = '\n';
  if (((iVar2 < 2) || (pcVar1 = (char *)param_2[1], *pcVar1 != '-')) || (9 < (int)pcVar1[1] - 0x30U)
     ) {
    abStack255[1] = 1;
    puVar29 = (undefined8 *)0xa;
    uVar27 = 0;
    puVar18 = auStack392;
    goto code_r0x001018d5;
  }
  pbVar24 = (byte *)(pcVar1 + 1);
  do {
    pbVar24 = pbVar24 + 1;
    bVar19 = *pbVar24;
    uVar28 = (ulong)(uint)(int)(char)bVar19;
  } while ((int)(char)bVar19 - 0x30U < 10);
  if (bVar19 == 0) {
    uVar27 = 0;
    abStack255[1] = 1;
    goto code_r0x00101d36;
  }
  bVar31 = false;
  in_R10 = 10;
  uVar4 = 0;
  uVar25 = 1;
  uVar27 = 0;
  pbVar13 = pbVar24;
  do {
    switch((char)uVar28) {
    case 'b':
    case 'k':
    case 'm':
      uVar25 = 0;
      uVar4 = uVar28;
      break;
    case 'c':
      uVar4 = 0;
      uVar25 = 0;
      break;
    default:
      if (bVar31) {
        line_end = (char)in_R10;
      }
      uVar12 = func_0x001015a0(0,&UNK_0010696d,5);
      uVar4 = (ulong)(uint)(int)(char)uVar28;
      goto code_r0x00102841;
    case 'l':
      uVar25 = 1;
      break;
    case 'q':
      uVar27 = 2;
      break;
    case 'v':
      uVar27 = 1;
      break;
    case 'z':
      bVar31 = true;
      in_R10 = 0;
    }
    bVar19 = (byte)uVar4;
    pbVar13 = pbVar13 + 1;
    uVar28 = (ulong)*pbVar13;
  } while (*pbVar13 != 0);
  abStack255[1] = uVar25;
  if (bVar31) goto code_r0x001028c2;
  do {
    *pbVar24 = bVar19;
    puVar17 = puVar16;
    if (bVar19 != 0) {
      pbVar24[1] = 0;
    }
code_r0x00101d36:
    puVar9 = (undefined8 *)(ulong)(iVar2 - 1);
    *(undefined8 *)(puVar17 + -8) = 0x101d4a;
    puVar29 = (undefined8 *)string_to_integer();
    param_2[1] = *param_2;
    param_2 = param_2 + 1;
    puVar18 = puVar17;
code_r0x001018d5:
    puVar18[0x89] = 0;
    uVar28 = 1;
code_r0x001018e8:
    iVar2 = (int)puVar9;
    *(undefined8 *)(puVar18 + -8) = 0x101903;
    uVar4 = func_0x001015e0((ulong)puVar9 & 0xffffffff,param_2,&UNK_001069a8,long_options,0);
    uVar3 = (uint)uVar4;
    if (uVar3 != 0xffffffff) {
      if (uVar3 != 0x6e) {
        if ((int)uVar3 < 0x6f) {
          if (uVar3 == 0xffffff7e) {
            *(undefined8 *)(puVar18 + -8) = 0x10281e;
            uVar3 = usage(0);
            goto code_r0x0010281e;
          }
          if (uVar3 != 99) {
            unaff_R14 = (undefined8 *)(uVar4 & 0xffffffff);
            puVar22 = puVar18;
            if (uVar3 != 0xffffff7d) goto code_r0x00101962;
            goto code_r0x00101980;
          }
        }
        else {
          if (uVar3 == 0x76) {
            uVar27 = 1;
            goto code_r0x001018e8;
          }
          if ((int)uVar3 < 0x77) {
            if (uVar3 == 0x71) {
              uVar27 = 2;
              goto code_r0x001018e8;
            }
          }
          else {
            if (uVar3 == 0x7a) {
              line_end = '\0';
              goto code_r0x001018e8;
            }
            if (uVar3 == 0x80) {
              presume_input_pipe = (byte)uVar28;
              goto code_r0x001018e8;
            }
          }
code_r0x0010281e:
          unaff_R14 = (undefined8 *)(ulong)uVar3;
code_r0x00101962:
          if ((int)unaff_R14 - 0x30U < 10) {
code_r0x0010282b:
            *(undefined8 *)(puVar18 + -8) = 0x10283e;
            uVar12 = func_0x001015a0(0,&UNK_0010696d,5);
            uVar4 = (ulong)unaff_R14 & 0xffffffff;
code_r0x00102841:
            *(undefined8 *)(puVar18 + -8) = 0x10284f;
            func_0x00101770(0,0,uVar12,uVar4);
          }
          *(undefined8 *)(puVar18 + -8) = 0x101979;
          usage(1);
          puVar22 = puVar18;
code_r0x00101980:
          puVar18 = puVar22 + -0x10;
          *(undefined8 *)(puVar22 + -0x10) = 0;
          *(undefined8 *)(puVar22 + -0x18) = 0x1019b7;
          version_etc(stdout,&UNK_001068ad,&UNK_00106928,Version);
          *(undefined8 *)(puVar22 + -0x18) = 0x1019be;
          func_0x001017c0();
        }
        cVar26 = *optarg;
        *(bool *)(puVar18 + 0x89) = cVar26 == '-';
        if (cVar26 == '-') {
          optarg = optarg + 1;
        }
        *(undefined8 *)(puVar18 + -8) = 0x1019e8;
        puVar29 = (undefined8 *)string_to_integer();
        puVar18[0x8a] = 0;
        goto code_r0x001018e8;
      }
      cVar26 = *optarg;
      *(bool *)(puVar18 + 0x89) = cVar26 == '-';
      if (cVar26 == '-') {
        optarg = optarg + 1;
      }
      *(undefined8 *)(puVar18 + -8) = 0x101a2b;
      puVar29 = (undefined8 *)string_to_integer();
      puVar18[0x8a] = 1;
      goto code_r0x001018e8;
    }
    if (((int)uVar27 == 1) || (((int)uVar27 == 0 && (optind < iVar2 + -1)))) {
      print_headers = '\x01';
    }
    if (((puVar18[0x8a] != '\0') || (puVar18[0x89] == '\0')) || (-1 < (long)puVar29)) {
      if (optind < iVar2) {
        puVar14 = (undefined1 *)(param_2 + optind);
        puVar9 = *(undefined8 **)puVar14;
        if (puVar9 == (undefined8 *)0x0) {
          puVar18[0x8b] = 1;
          goto code_r0x00101f4b;
        }
        *(undefined8 *)(puVar18 + 0x20) = 0x1070ea;
        puVar20 = puVar9;
      }
      else {
        puVar14 = default_file_list_7140;
        *(undefined8 *)(puVar18 + 0x20) = 0x1070ea;
        puVar20 = (undefined8 *)&UNK_001070ea;
      }
      *(undefined8 **)(puVar18 + 0x18) = puVar29;
      uVar27 = (ulong)((uint)puVar29 & 0x1fff);
      puVar18[0x8b] = 1;
      lVar5 = 0x2000 - uVar27;
      *(ulong *)(puVar18 + 0x78) = uVar27;
      *(long *)(puVar18 + 0x60) = lVar5;
      uVar27 = ((ulong)(lVar5 + (long)puVar29) >> 0xd) + 1;
      *(ulong *)(puVar18 + 0x28) = uVar27;
      *(ulong *)(puVar18 + 0x58) = uVar27 >> 1;
      puVar29 = puVar29 + 0x400;
      *(undefined8 **)(puVar18 + 0x68) = puVar29;
      bVar31 = CARRY8((ulong)puVar29,(ulong)puVar29);
      bVar32 = (long)puVar29 * 2 == 0;
      *(long *)(puVar18 + 0x70) = (long)puVar29 * 2;
      *(byte ***)(puVar18 + 0x10) = (byte **)puVar14 + 1;
      *(undefined **)(puVar18 + 0x50) = puVar18 + 0xa0;
      puVar29 = puVar20;
code_r0x00101c7c:
      lVar5 = 2;
      puVar9 = puVar29;
      pbVar24 = *(byte **)(puVar18 + 0x20);
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar31 = *(byte *)puVar9 < *pbVar24;
        bVar32 = *(byte *)puVar9 == *pbVar24;
        puVar9 = (undefined8 *)((long)puVar9 + (ulong)bVar33 * -2 + 1);
        pbVar24 = pbVar24 + (ulong)bVar33 * -2 + 1;
      } while (bVar32);
      uVar3 = SEXT14((char)((!bVar31 && !bVar32) - bVar31));
      uVar28 = (ulong)uVar3;
      if (uVar3 == 0) {
        have_read_stdin = '\x01';
        *(undefined8 *)(puVar18 + -8) = 0x101bd9;
        puVar29 = (undefined8 *)func_0x001015a0(0,&UNK_001069c1,5);
        *(undefined4 *)(puVar18 + 0xc) = 0;
      }
      else {
        *(undefined8 *)(puVar18 + -8) = 0x101ca9;
        iVar2 = func_0x00101790(puVar29,0);
        *(int *)(puVar18 + 0xc) = iVar2;
        if (iVar2 < 0) {
          *(undefined8 *)(puVar18 + -8) = 0x101cc2;
          param_2 = (undefined8 *)quotearg_style(4,puVar29);
          puVar22 = &UNK_001069d0;
          goto code_r0x00101cd1;
        }
      }
      if (print_headers != '\0') {
        puVar22 = &UNK_00107621;
        if (first_file_6927 == '\0') {
          puVar22 = &UNK_00107620;
        }
        *(undefined8 *)(puVar18 + -8) = 0x101c1c;
        func_0x00101760(1,&UNK_001069eb,puVar22,puVar29);
        first_file_6927 = '\0';
      }
      if (puVar18[0x89] == '\0') {
        if (puVar18[0x8a] != '\0') {
          *(undefined8 *)(puVar18 + -8) = 0x101f04;
          uVar3 = head_lines(puVar29,(ulong)*(uint *)(puVar18 + 0xc),*(undefined8 *)(puVar18 + 0x18)
                            );
          uVar27 = (ulong)uVar3;
          goto code_r0x00101c53;
        }
        *(undefined8 *)(puVar18 + -8) = 0x101c50;
        uVar3 = head_bytes();
        uVar27 = (ulong)uVar3;
        goto code_r0x00101c53;
      }
      *(undefined8 *)(puVar18 + -8) = 0x101dc6;
      iVar2 = func_0x00101710(1,(ulong)*(uint *)(puVar18 + 0xc),*(undefined8 *)(puVar18 + 0x50));
      if (iVar2 != 0) {
        uVar27 = 0;
        *(undefined8 *)(puVar18 + -8) = 0x101fe8;
        param_2 = (undefined8 *)quotearg_style(4,puVar29);
        *(undefined8 *)(puVar18 + -8) = 0x101ffe;
        puVar20 = (undefined8 *)func_0x001015a0(0,&UNK_001069f9,5);
        *(undefined8 *)(puVar18 + -8) = 0x102006;
        puVar7 = (uint *)func_0x00101520();
        uVar3 = *puVar7;
        *(undefined8 *)(puVar18 + -8) = 0x102017;
        func_0x00101770(0,(ulong)uVar3,puVar20,param_2);
        goto code_r0x00101c53;
      }
      if ((presume_input_pipe == 0) && ((*(uint *)(puVar18 + 0xb8) & 0xd000) == 0x8000)) {
        *(undefined8 *)(puVar18 + -8) = 0x1023f6;
        lVar5 = elseek((ulong)*(uint *)(puVar18 + 0xc),0,1,puVar29);
        *(long *)(puVar18 + 0x40) = lVar5;
        if (lVar5 < 0) {
          do {
            uVar27 = 0;
code_r0x00101c53:
            do {
              do {
                if ((int)uVar28 != 0) {
                  *(undefined8 *)(puVar18 + -8) = 0x101d8a;
                  iVar2 = func_0x00101660((ulong)*(uint *)(puVar18 + 0xc));
                  if (iVar2 != 0) {
                    *(undefined8 *)(puVar18 + -8) = 0x101d9f;
                    param_2 = (undefined8 *)quotearg_style(4,puVar29);
                    puVar22 = &UNK_00106a09;
code_r0x00101cd1:
                    uVar27 = 0;
                    *(undefined8 *)(puVar18 + -8) = 0x101cdb;
                    puVar20 = (undefined8 *)func_0x001015a0(0,puVar22,5);
                    *(undefined8 *)(puVar18 + -8) = 0x101ce3;
                    puVar7 = (uint *)func_0x00101520();
                    uVar3 = *puVar7;
                    *(undefined8 *)(puVar18 + -8) = 0x101cf4;
                    func_0x00101770(0,(ulong)uVar3,puVar20,param_2);
                  }
                }
                *(long *)(puVar18 + 0x10) = *(long *)(puVar18 + 0x10) + 8;
                puVar18[0x8b] = puVar18[0x8b] & (byte)uVar27;
                puVar29 = *(undefined8 **)(*(long *)(puVar18 + 0x10) + -8);
                bVar31 = false;
                bVar32 = puVar29 == (undefined8 *)0x0;
                puVar9 = puVar20;
                if (!bVar32) goto code_r0x00101c7c;
code_r0x00101f4b:
                if (have_read_stdin == '\0') {
code_r0x00101f58:
                  if (*(long *)(puVar18 + 0x148) == *(long *)(in_FS_OFFSET + 0x28)) {
                    return (ulong)(puVar18[0x8b] ^ 1);
                  }
                  *(undefined8 *)(puVar18 + -8) = 0x10282b;
                  func_0x001015d0();
                  goto code_r0x0010282b;
                }
                *(undefined8 *)(puVar18 + -8) = 0x102294;
                iVar2 = func_0x00101660(0);
                if (-1 < iVar2) goto code_r0x00101f58;
                *(undefined8 *)(puVar18 + -8) = 0x1022a1;
                puVar7 = (uint *)func_0x00101520();
                uVar3 = *puVar7;
                *(undefined8 *)(puVar18 + -8) = 0x1022b6;
                func_0x00101770(1,(ulong)uVar3,&UNK_001070ea);
code_r0x001022b6:
                *(undefined8 **)(puVar18 + 0x48) = puVar9;
                bVar19 = puVar18[0x89];
                puVar20 = *(undefined8 **)(puVar18 + 0x30);
                if (*(ulong *)(puVar18 + 0x18) < uVar27) {
                  lVar5 = unaff_R14[0x400];
                  lVar15 = uVar27 - *(ulong *)(puVar18 + 0x18);
                  uVar3 = SEXT14(line_end);
                  param_2 = (undefined8 *)(ulong)uVar3;
                  puVar9 = unaff_R14;
                  while (lVar15 != 0) {
                    *(undefined8 *)(puVar18 + -8) = 0x10230e;
                    puVar9 = (undefined8 *)
                             func_0x00101670(puVar9,(ulong)uVar3,
                                             (long)unaff_R14 + (lVar5 - (long)puVar9));
                    if (puVar9 == (undefined8 *)0x0) break;
                    unaff_R14[0x401] = unaff_R14[0x401] + 1;
                    puVar9 = (undefined8 *)((long)puVar9 + 1);
                    lVar15 = lVar15 + -1;
                  }
                  bVar19 = puVar18[0x89];
                  puVar20 = *(undefined8 **)(puVar18 + 0x30);
                  *(long *)(puVar18 + 0x48) =
                       *(long *)(puVar18 + 0x48) +
                       (long)(undefined8 *)((long)puVar9 - (long)unaff_R14);
                  if ((undefined8 *)((long)puVar9 - (long)unaff_R14) == (undefined8 *)0x0)
                  goto code_r0x0010235f;
                  *(undefined8 *)(puVar18 + -8) = 0x102351;
                  xwrite_stdout_part_6(unaff_R14);
                  uVar27 = (ulong)(byte)puVar18[0x89];
                  puVar9 = puVar20;
                }
                else {
code_r0x0010235f:
                  uVar27 = (ulong)bVar19;
                  puVar9 = puVar20;
                }
code_r0x00102373:
                while (puVar9 != (undefined8 *)0x0) {
                  param_2 = (undefined8 *)puVar9[0x402];
                  *(undefined8 *)(puVar18 + -8) = 0x102370;
                  func_0x00101500();
                  puVar9 = param_2;
                }
              } while (*(long *)(puVar18 + 0x40) == -1);
              *(undefined8 *)(puVar18 + -8) = 0x102397;
              lVar5 = elseek((ulong)*(uint *)(puVar18 + 0xc),*(undefined8 *)(puVar18 + 0x48),0,
                             puVar29);
joined_r0x0010252e:
            } while (-1 < lVar5);
          } while( true );
        }
        lVar5 = *(long *)(puVar18 + 0xd0);
        if (puVar18[0x8a] != '\0') {
          if (presume_input_pipe == 0) {
            lVar15 = *(long *)(puVar18 + 0xd8);
            if (0x1fffffffffffffff < lVar15 - 1U) {
              lVar15 = 0x200;
            }
            if (lVar15 < lVar5) {
              uVar3 = 1;
              if (*(long *)(puVar18 + 0x40) < lVar5) {
                *(undefined8 *)(puVar18 + -8) = 0x102782;
                bVar19 = elide_tail_lines_seekable
                                   (puVar29,(ulong)*(uint *)(puVar18 + 0xc),
                                    *(undefined8 *)(puVar18 + 0x18),*(undefined8 *)(puVar18 + 0x40))
                ;
                uVar3 = (uint)bVar19;
              }
              uVar27 = (ulong)(uVar3 & 1);
              goto code_r0x00101c53;
            }
          }
code_r0x00102045:
          *(undefined8 *)(puVar18 + 0x48) = *(undefined8 *)(puVar18 + 0x40);
          *(undefined8 *)(puVar18 + -8) = 0x102059;
          puVar20 = (undefined8 *)xmalloc(0x2018);
          puVar20[0x401] = 0;
          puVar20[0x400] = 0;
          puVar20[0x402] = 0;
          *(undefined8 **)(puVar18 + 0x30) = puVar20;
          *(undefined8 *)(puVar18 + -8) = 0x10208c;
          puVar9 = (undefined8 *)xmalloc(0x2018);
          *(undefined8 *)(puVar18 + 0x38) = 0;
          *(undefined8 **)(puVar18 + 0x80) = puVar29;
          *(uint *)(puVar18 + 0x8c) = uVar3;
          while( true ) {
            *(undefined8 *)(puVar18 + -8) = 0x1020b9;
            lVar5 = safe_read((ulong)*(uint *)(puVar18 + 0xc),puVar9,0x2000);
            if (0xfffffffffffffffd < lVar5 - 1U) break;
            if (*(long *)(puVar18 + 0x18) == 0) {
              *(long *)(puVar18 + 0x48) = *(long *)(puVar18 + 0x48) + lVar5;
              *(undefined8 *)(puVar18 + -8) = 0x1020e2;
              xwrite_stdout_part_6(puVar9,lVar5);
            }
            else {
              puVar9[0x400] = lVar5;
              puVar9[0x401] = 0;
              unaff_R14 = (undefined8 *)((long)puVar9 + lVar5);
              puVar9[0x402] = 0;
              uVar3 = SEXT14(line_end);
              puVar29 = puVar9;
              lVar15 = 0;
              while( true ) {
                *(undefined8 *)(puVar18 + -8) = 0x102134;
                lVar8 = func_0x00101670(puVar29,(ulong)uVar3,(long)unaff_R14 - (long)puVar29);
                if (lVar8 == 0) break;
                puVar29 = (undefined8 *)(lVar8 + 1);
                puVar9[0x401] = lVar15 + 1;
                lVar15 = lVar15 + 1;
              }
              *(long *)(puVar18 + 0x38) = *(long *)(puVar18 + 0x38) + lVar15;
              lVar15 = *(long *)(*(long *)(puVar18 + 0x30) + 0x2000);
              if ((ulong)(lVar5 + lVar15) < 0x2000) {
                unaff_R14 = *(undefined8 **)(puVar18 + 0x30);
                *(undefined8 *)(puVar18 + -8) = 0x102255;
                func_0x001016c0((long)unaff_R14 + lVar15,puVar9,lVar5);
                *(long *)((long)unaff_R14 + 0x2000) =
                     *(long *)((long)unaff_R14 + 0x2000) + puVar9[0x400];
                *(long *)((long)unaff_R14 + 0x2008) =
                     *(long *)((long)unaff_R14 + 0x2008) + puVar9[0x401];
              }
              else {
                *(undefined8 **)(*(long *)(puVar18 + 0x30) + 0x2010) = puVar9;
                if (*(ulong *)(puVar18 + 0x18) < (ulong)(*(long *)(puVar18 + 0x38) - puVar20[0x401])
                   ) {
                  lVar5 = puVar20[0x400];
                  *(long *)(puVar18 + 0x48) = *(long *)(puVar18 + 0x48) + lVar5;
                  if (lVar5 != 0) {
                    *(undefined8 *)(puVar18 + -8) = 0x102541;
                    xwrite_stdout_part_6();
                  }
                  lVar5 = puVar20[0x401];
                  *(undefined8 **)(puVar18 + 0x30) = puVar9;
                  *(long *)(puVar18 + 0x38) = *(long *)(puVar18 + 0x38) - lVar5;
                  puVar9 = puVar20;
                  puVar20 = (undefined8 *)puVar20[0x402];
                }
                else {
                  *(undefined8 *)(puVar18 + -8) = 0x1023b2;
                  puVar29 = (undefined8 *)xmalloc();
                  *(undefined8 **)(puVar18 + 0x30) = puVar9;
                  puVar9 = puVar29;
                }
              }
            }
          }
          puVar29 = *(undefined8 **)(puVar18 + 0x80);
          uVar28 = (ulong)*(uint *)(puVar18 + 0x8c);
          *(undefined8 *)(puVar18 + -8) = 0x1021cf;
          func_0x00101500(puVar9);
          if (lVar5 == -1) {
            *(undefined8 *)(puVar18 + -8) = 0x102732;
            param_2 = (undefined8 *)quotearg_style(4,puVar29);
            *(undefined8 *)(puVar18 + -8) = 0x102748;
            uVar12 = func_0x001015a0(0,&UNK_0010687f,5);
            *(undefined8 *)(puVar18 + -8) = 0x102750;
            puVar7 = (uint *)func_0x00101520();
            uVar3 = *puVar7;
            uVar27 = 0;
            *(undefined8 *)(puVar18 + -8) = 0x102764;
            func_0x00101770(0,(ulong)uVar3,uVar12,param_2);
            puVar9 = puVar20;
            goto code_r0x00102373;
          }
          lVar5 = *(long *)(puVar18 + 0x30);
          if ((*(long *)(lVar5 + 0x2000) != 0) &&
             (*(char *)(lVar5 + -1 + *(long *)(lVar5 + 0x2000)) != line_end)) {
            *(long *)(lVar5 + 0x2008) = *(long *)(lVar5 + 0x2008) + 1;
            *(long *)(puVar18 + 0x38) = *(long *)(puVar18 + 0x38) + 1;
          }
          *(undefined8 **)(puVar18 + 0x30) = puVar20;
          param_2 = *(undefined8 **)(puVar18 + 0x18);
          uVar27 = *(ulong *)(puVar18 + 0x38);
          puVar9 = *(undefined8 **)(puVar18 + 0x48);
          do {
            unaff_R14 = puVar20;
            if ((undefined8 *)(uVar27 - puVar20[0x401]) <= param_2) goto code_r0x001022b6;
            puVar9 = (undefined8 *)((long)puVar9 + puVar20[0x400]);
            if (puVar20[0x400] != 0) {
              *(undefined8 *)(puVar18 + -8) = 0x10223f;
              xwrite_stdout_part_6(puVar20);
            }
            uVar27 = uVar27 - puVar20[0x401];
            puVar20 = (undefined8 *)puVar20[0x402];
          } while( true );
        }
        uVar27 = (ulong)presume_input_pipe;
        if (presume_input_pipe == 0) {
          lVar15 = *(long *)(puVar18 + 0xd8);
          if (0x1fffffffffffffff < lVar15 - 1U) {
            lVar15 = 0x200;
          }
          if (lVar15 < lVar5) {
            uVar4 = lVar5 - *(long *)(puVar18 + 0x40);
            if ((long)uVar4 < 0) {
              uVar4 = 0;
            }
            if (*(ulong *)(puVar18 + 0x18) < uVar4) {
              *(undefined8 *)(puVar18 + -8) = 0x102939;
              uVar3 = copy_fd((ulong)*(uint *)(puVar18 + 0xc),uVar4 - *(long *)(puVar18 + 0x18));
              if (uVar3 != 0) {
                *(undefined8 *)(puVar18 + -8) = 0x102947;
                diagnose_copy_fd_failure((ulong)uVar3,puVar29);
                goto code_r0x00101c53;
              }
            }
            uVar27 = (ulong)(byte)puVar18[0x89];
            goto code_r0x00101c53;
          }
        }
      }
      else {
        *(undefined8 *)(puVar18 + 0x40) = 0xffffffffffffffff;
        if (puVar18[0x8a] != '\0') goto code_r0x00102045;
      }
      *(undefined8 *)(puVar18 + 0x30) = *(undefined8 *)(puVar18 + 0x40);
      if (*(ulong *)(puVar18 + 0x18) < 0x100001) {
        param_2 = (undefined8 *)0x0;
        *(undefined8 *)(puVar18 + -8) = 0x102552;
        lVar5 = xmalloc(*(undefined8 *)(puVar18 + 0x70));
        puVar9 = *(undefined8 **)(puVar18 + 0x68);
        uVar27 = (ulong)(byte)puVar18[0x89];
        puVar20 = *(undefined8 **)(puVar18 + 0x18);
        *(long *)(puVar18 + 0x80) = lVar5;
        *(long *)(puVar18 + 0x90) = lVar5;
        *(uint *)(puVar18 + 0x48) = uVar3;
        *(undefined8 **)(puVar18 + 0x38) = puVar29;
        *(long *)(puVar18 + 0x98) = lVar5 + (long)puVar9;
        goto code_r0x0010258d;
      }
      *(uint *)(puVar18 + 0x8c) = uVar3;
      *(undefined8 *)(puVar18 + 0x48) = 0;
      bVar19 = 0;
      unaff_R14 = (undefined8 *)0x0;
      uVar28 = 0;
      uVar21 = 0;
      *(undefined8 **)(puVar18 + 0x80) = puVar29;
      uVar4 = 1;
      break;
    }
    *(undefined8 *)(puVar18 + -8) = 0x102886;
    uVar12 = umaxtostr(puVar29,puVar18 + 0x130);
    *(undefined8 *)(puVar18 + -8) = 0x10288e;
    param_2 = (undefined8 *)quote(uVar12);
    bVar19 = (byte)param_2;
    *(undefined8 *)(puVar18 + -8) = 0x1028a4;
    uVar12 = func_0x001015a0(0,&UNK_0010681c,5);
    pbVar24 = (byte *)0x1;
    *(undefined8 *)(puVar18 + -8) = 0x1028c2;
    func_0x00101770(1,0x4b,&UNK_001069ba,uVar12);
    puVar22 = puVar18;
code_r0x001028c2:
    line_end = (char)in_R10;
    puVar16 = puVar22;
  } while( true );
code_r0x00101e4a:
  if (uVar28 == 0) {
    uVar28 = 0x10;
    if (*(ulong *)(puVar18 + 0x28) < 0x11) {
      uVar28 = *(ulong *)(puVar18 + 0x28);
    }
  }
  else {
    bVar31 = *(ulong *)(puVar18 + 0x58) < uVar28;
    uVar28 = uVar28 * 2;
    if (bVar31) {
      uVar28 = *(ulong *)(puVar18 + 0x28);
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x101e7f;
  in_R10 = uVar4;
  unaff_R14 = (undefined8 *)xrealloc(unaff_R14,uVar28 * 8);
  uVar30 = uVar21;
  do {
    uVar21 = uVar4;
    if (bVar19 == 0) {
      *(undefined8 *)(puVar18 + -8) = 0x101f99;
      uVar12 = xmalloc(0x2000);
      uVar3 = *(uint *)(puVar18 + 0xc);
      unaff_R14[uVar30] = uVar12;
      *(ulong *)(puVar18 + 0x48) = uVar30 + 1;
      *(ulong *)(puVar18 + 0x38) = uVar30 + 1;
      *(undefined8 *)(puVar18 + -8) = 0x101fbc;
      uVar6 = full_read((ulong)uVar3,uVar12,0x2000);
      in_R10 = *(ulong *)(puVar18 + 0x38);
      if (0x1fff < uVar6) {
        uVar27 = 0;
code_r0x00101f27:
        uVar25 = (undefined)uVar27;
        bVar19 = bVar19 | in_R10 == *(ulong *)(puVar18 + 0x28);
        if ((bVar19 != 0) &&
           (*(ulong *)(puVar18 + 0x30) = *(long *)(puVar18 + 0x30) + uVar6, uVar6 != 0))
        goto code_r0x00101eb4;
        goto code_r0x00101ed3;
      }
code_r0x00101f0c:
      *(undefined8 *)(puVar18 + -8) = 0x101f11;
      puVar7 = (uint *)func_0x00101520();
      if (*puVar7 == 0) {
        uVar27 = (ulong)(byte)puVar18[0x89];
        in_R10 = uVar30 + 1;
        goto code_r0x00101f27;
      }
      puVar29 = *(undefined8 **)(puVar18 + 0x80);
      uVar28 = (ulong)*(uint *)(puVar18 + 0x8c);
      *(undefined8 *)(puVar18 + -8) = 0x1026f4;
      uVar12 = quotearg_style(4,puVar29);
      *(undefined8 *)(puVar18 + -8) = 0x10270a;
      uVar11 = func_0x001015a0(0,&UNK_0010687f,5);
      uVar3 = *puVar7;
      uVar27 = 0;
      *(undefined8 *)(puVar18 + -8) = 0x102720;
      func_0x00101770(0,(ulong)uVar3,uVar11,uVar12);
code_r0x001024e9:
      param_2 = (undefined8 *)0x0;
      puVar20 = *(undefined8 **)(puVar18 + 0x48);
      while (param_2 != puVar20) {
        uVar12 = unaff_R14[(long)param_2];
        param_2 = (undefined8 *)((long)param_2 + 1);
        *(undefined8 *)(puVar18 + -8) = 0x1024ff;
        func_0x00101500(uVar12);
      }
      *(undefined8 *)(puVar18 + -8) = 0x10250c;
      func_0x00101500(unaff_R14);
      goto code_r0x0010250c;
    }
    uVar12 = unaff_R14[uVar30];
    *(undefined8 *)(puVar18 + -8) = 0x101ea1;
    uVar6 = full_read((ulong)*(uint *)(puVar18 + 0xc),uVar12,0x2000);
    if (uVar6 < 0x2000) goto code_r0x00101f0c;
    *(ulong *)(puVar18 + 0x30) = *(long *)(puVar18 + 0x30) + uVar6;
    uVar25 = 0;
code_r0x00101eb4:
    uVar12 = unaff_R14[uVar21];
    puVar18[0x38] = uVar25;
    *(undefined8 *)(puVar18 + -8) = 0x101ec5;
    xwrite_stdout_part_6(uVar12,uVar6);
    bVar19 = puVar18[0x89];
    uVar27 = (ulong)(byte)puVar18[0x38];
code_r0x00101ed3:
    uVar4 = (uVar21 + 1) % *(ulong *)(puVar18 + 0x28);
    in_R10 = uVar4;
    if ((char)uVar27 != '\0') {
      puVar29 = *(undefined8 **)(puVar18 + 0x80);
      puVar18[0x38] = bVar19;
      uVar28 = (ulong)*(uint *)(puVar18 + 0x8c);
      if (bVar19 == 0) {
        if ((*(ulong *)(puVar18 + 0x28) == uVar21 + 1) &&
           (*(ulong *)(puVar18 + 0x30) =
                 *(long *)(puVar18 + 0x30) + (uVar6 - *(long *)(puVar18 + 0x78)),
           uVar6 - *(long *)(puVar18 + 0x78) != 0)) {
code_r0x001026c6:
          uVar12 = unaff_R14[uVar4];
          *(undefined8 *)(puVar18 + -8) = 0x1026cf;
          xwrite_stdout_part_6(uVar12);
        }
      }
      else {
        uVar27 = *(ulong *)(puVar18 + 0x60);
        lVar5 = unaff_R14[uVar21];
        uVar21 = 0x2000 - uVar6;
        *(ulong *)(puVar18 + 0x30) = *(long *)(puVar18 + 0x30) + uVar27;
        if (uVar27 < uVar21) {
          *(undefined8 *)(puVar18 + -8) = 0x10280c;
          xwrite_stdout_part_6(lVar5 + uVar6,uVar27);
          uVar27 = (ulong)(byte)puVar18[0x38];
          in_R10 = uVar4;
        }
        else {
          if (uVar21 != 0) {
            *(ulong *)(puVar18 + 0x80) = uVar4;
            *(undefined8 *)(puVar18 + -8) = 0x1024cd;
            xwrite_stdout_part_6(lVar5 + uVar6,uVar21);
            uVar4 = *(ulong *)(puVar18 + 0x80);
          }
          uVar27 = (ulong)(byte)puVar18[0x38];
          if (*(ulong *)(puVar18 + 0x60) != uVar21) goto code_r0x001026c6;
        }
      }
      goto code_r0x001024e9;
    }
    uVar30 = uVar21;
  } while (uVar28 != uVar21);
  goto code_r0x00101e4a;
code_r0x0010258d:
  unaff_R14 = *(undefined8 **)(puVar18 + (long)param_2 * 8 + 0x90);
  *(undefined8 *)(puVar18 + -8) = 0x1025a7;
  puVar29 = (undefined8 *)full_read((ulong)*(uint *)(puVar18 + 0xc),unaff_R14,puVar9);
  cVar26 = (char)uVar27;
  if (puVar29 < puVar9) {
    *(undefined8 *)(puVar18 + -8) = 0x1025b4;
    piVar10 = (int *)func_0x00101520();
    if (*piVar10 != 0) {
      puVar29 = *(undefined8 **)(puVar18 + 0x38);
      uVar28 = (ulong)*(uint *)(puVar18 + 0x48);
      *(int **)(puVar18 + 0x38) = piVar10;
      uVar27 = 0;
      *(undefined8 *)(puVar18 + -8) = 0x1027c2;
      param_2 = (undefined8 *)quotearg_style(4,puVar29);
      *(undefined8 *)(puVar18 + -8) = 0x1027d8;
      uVar12 = func_0x001015a0(0,&UNK_0010687f,5);
      uVar3 = **(uint **)(puVar18 + 0x38);
      *(undefined8 *)(puVar18 + -8) = 0x1027ef;
      func_0x00101770(0,(ulong)uVar3,uVar12,param_2);
      goto code_r0x001025f8;
    }
    if (puVar29 <= puVar20) {
      if (cVar26 == '\0') {
        *(long *)(puVar18 + 0x30) = *(long *)(puVar18 + 0x30) + (long)puVar29;
        lVar5 = *(long *)(puVar18 + (ulong)(byte)((byte)param_2 ^ 1) * 8 + 0x90);
        if (puVar29 != (undefined8 *)0x0) {
          uVar27 = (ulong)(byte)puVar18[0x89];
          puVar23 = puVar29;
          goto code_r0x0010267a;
        }
      }
      uVar27 = (ulong)(byte)puVar18[0x89];
      puVar29 = *(undefined8 **)(puVar18 + 0x38);
      uVar28 = (ulong)*(uint *)(puVar18 + 0x48);
      goto code_r0x001025f8;
    }
    if (cVar26 == '\0') {
      uVar27 = (ulong)(byte)puVar18[0x89];
      goto code_r0x0010264f;
    }
    puVar29 = (undefined8 *)((long)puVar29 - (long)puVar20);
    *(long *)(puVar18 + 0x30) = *(long *)(puVar18 + 0x30) + (long)puVar29;
    if (puVar29 == (undefined8 *)0x0) {
code_r0x00102691:
      puVar29 = *(undefined8 **)(puVar18 + 0x38);
      uVar28 = (ulong)*(uint *)(puVar18 + 0x48);
code_r0x001025f8:
      *(undefined8 *)(puVar18 + -8) = 0x102605;
      func_0x00101500(*(undefined8 *)(puVar18 + 0x80));
code_r0x0010250c:
      if (*(long *)(puVar18 + 0x40) == -1) goto code_r0x00101c53;
      *(undefined8 *)(puVar18 + -8) = 0x10252b;
      lVar5 = elseek((ulong)*(uint *)(puVar18 + 0xc),*(undefined8 *)(puVar18 + 0x30),0,puVar29);
      goto joined_r0x0010252e;
    }
code_r0x00102626:
    *(undefined8 *)(puVar18 + -8) = 0x102631;
    xwrite_stdout_part_6(unaff_R14,puVar29);
code_r0x00102631:
    param_2 = (undefined8 *)(ulong)((uint)param_2 ^ 1);
    if ((char)uVar27 != '\0') goto code_r0x00102691;
  }
  else {
    if (cVar26 == '\0') {
code_r0x0010264f:
      *(long *)(puVar18 + 0x30) = *(long *)(puVar18 + 0x30) + (long)puVar20;
      lVar5 = *(long *)(puVar18 + (ulong)(byte)((byte)param_2 ^ 1) * 8 + 0x90);
      puVar23 = puVar20;
      if (puVar20 != (undefined8 *)0x0) {
code_r0x0010267a:
        *(undefined8 *)(puVar18 + -8) = 0x10267f;
        xwrite_stdout_part_6(lVar5 + 0x2000,puVar23);
      }
      if (puVar20 < puVar29) {
code_r0x0010261b:
        puVar29 = (undefined8 *)((long)puVar29 - (long)puVar20);
        *(long *)(puVar18 + 0x30) = *(long *)(puVar18 + 0x30) + (long)puVar29;
        goto code_r0x00102626;
      }
      goto code_r0x00102631;
    }
    uVar27 = 0;
    if (puVar20 < puVar29) goto code_r0x0010261b;
    param_2 = (undefined8 *)(ulong)((uint)param_2 ^ 1);
  }
  uVar27 = 0;
  goto code_r0x0010258d;
}

