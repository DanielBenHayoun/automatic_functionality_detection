
ulong sha512sum(uint param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined *puVar17;
  byte *pbVar18;
  undefined *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint *puVar23;
  long unaff_R13;
  undefined1 *unaff_R14;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  undefined8 *apuStack400 [3];
  undefined auStack376 [8];
  byte **appbStack368 [2];
  ulong uStack352;
  byte *pbStack344;
  undefined uStack333;
  int iStack332;
  byte *pbStack328;
  long alStack320 [2];
  undefined8 *puStack304;
  ulong auStack296 [2];
  byte *pbStack280;
  byte *pbStack272;
  long lStack264;
  undefined auStack256 [4];
  uint auStack252 [4];
  undefined uStack233;
  byte *apbStack232 [21];
  long alStack64 [2];
  
  bVar26 = 0;
  puVar23 = (uint *)(ulong)param_1;
  pbVar18 = (byte *)0xffffffff;
  alStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101800(6,&UNK_0010b861);
  func_0x00101650(&UNK_0010a716,&UNK_0010a73f);
  func_0x00101630(&UNK_0010a716);
  atexit(close_stdout);
  func_0x00101820(stdout,0,1,0);
  auStack256[0] = 0;
  uStack333 = 0;
  puVar17 = auStack376;
code_r0x00101998:
  do {
    while( true ) {
      pbVar22 = (byte *)0x0;
      *(undefined8 *)(puVar17 + -8) = 0x1019b4;
      iVar5 = func_0x001016a0(puVar23,param_2,&UNK_0010a780,long_options);
      if (iVar5 == -1) {
        min_digest_line_length = 0x82;
        digest_hex_bytes = 0x80;
        if ((puVar17[0x78] & (int)pbVar18 == 0) == 0) {
          uVar13 = unaff_R15;
          if (delim == 10) goto code_r0x00101bda;
          puVar19 = &UNK_0010ae88;
          if (puVar17[0x2b] != '\0') goto code_r0x00101bbb;
          if (ignore_missing != '\0') goto code_r0x00102a2c;
          if (status_only != '\0') goto code_r0x00102a00;
          goto code_r0x00101b97;
        }
        puVar19 = &UNK_0010ae60;
        goto code_r0x00101bbb;
      }
      puVar19 = puVar17;
      if (iVar5 != 0x77) break;
code_r0x00101aa0:
      status_only = '\0';
      warn = '\x01';
      quiet = '\0';
      puVar17 = puVar19;
    }
    if (0x77 < iVar5) {
      if (iVar5 == 0x81) {
        status_only = '\x01';
        warn = '\0';
        quiet = '\0';
      }
      else {
        if (iVar5 < 0x82) {
          if (iVar5 == 0x7a) {
            delim = 0;
          }
          else {
            if (iVar5 != 0x80) goto code_r0x00101bd0;
            ignore_missing = '\x01';
          }
        }
        else {
          if (iVar5 == 0x83) {
            strict = 1;
          }
          else {
            if (iVar5 < 0x83) {
              status_only = '\0';
              warn = '\0';
              quiet = '\x01';
            }
            else {
              if (iVar5 != 0x84) goto code_r0x00101bd0;
              puVar17[0x78] = 1;
              pbVar18 = (byte *)0x1;
            }
          }
        }
      }
      goto code_r0x00101998;
    }
    if (iVar5 == 0x62) {
      pbVar18 = (byte *)0x1;
    }
    else {
      if (iVar5 < 99) {
        if (iVar5 == -0x83) {
          *(undefined8 *)(puVar17 + -8) = 0;
          puVar19 = puVar17 + -0x10;
          *(undefined8 *)(puVar17 + -0x10) = 0x10a773;
          *(undefined8 *)(puVar17 + -0x18) = 0x101a96;
          version_etc(stdout,&UNK_0010a68a,&UNK_0010a712,Version);
          *(undefined8 *)(puVar17 + -0x18) = 0x101a9d;
          func_0x00101880();
          goto code_r0x00101aa0;
        }
        if (iVar5 == -0x82) {
          *(undefined8 *)(puVar17 + -8) = 0x1029e3;
          usage(0);
          goto code_r0x001029e3;
        }
code_r0x00101bd0:
        do {
          *(undefined8 *)(puVar17 + -8) = 0x101bda;
          usage(1);
          uVar13 = unaff_R15;
code_r0x00101bda:
          unaff_R15 = uVar13;
          if (((puVar17[0x2b] == '\0') || (puVar19 = &UNK_0010aec8, puVar17[0x78] == '\0')) &&
             (((int)pbVar18 < 0 || (puVar19 = &UNK_0010af08, puVar17[0x2b] == '\0')))) {
            if (ignore_missing == '\0') goto code_r0x001029e8;
            if (puVar17[0x2b] == '\0') {
code_r0x00102a2c:
              puVar19 = &UNK_0010af58;
            }
            else {
              if (status_only == '\0') goto code_r0x001025ad;
              if (warn == '\0') goto code_r0x00101ea5;
code_r0x00101c3d:
              do {
                if ((int)pbVar18 == -1) {
                  pbVar18 = (byte *)0x0;
                }
                *(undefined8 **)(puVar17 + 0x48) = param_2 + (int)puVar23;
                lVar6 = (long)optind;
                if (optind == (int)puVar23) {
                  puVar2 = *(undefined8 **)(puVar17 + 0x48);
                  *puVar2 = 0x10b322;
                  *(undefined8 **)(puVar17 + 0x48) = puVar2 + 1;
                }
                puVar2 = param_2 + lVar6;
                *(undefined8 **)(puVar17 + 0x18) = puVar2;
                if (*(undefined8 **)(puVar17 + 0x48) < puVar2 ||
                    *(undefined8 **)(puVar17 + 0x48) == puVar2) {
                  puVar17[0x79] = 1;
                  unaff_R15 = uVar13;
                  goto code_r0x00102383;
                }
                unaff_R14 = bin2hex_7156;
                puVar17[0x79] = 1;
                iVar5 = (-(uint)((int)pbVar18 == 0) & 0xfffffff6) + 0x2a;
                *(int *)(puVar17 + 0x7c) = iVar5;
                puVar17[0x7b] = (char)iVar5;
code_r0x00101cb0:
                bVar24 = false;
                bVar25 = puVar17[0x2b] == '\0';
                pbVar16 = **(byte ***)(puVar17 + 0x18);
                *(byte **)(puVar17 + 0x20) = pbVar16;
                if (bVar25) {
                  param_2 = (undefined8 *)(puVar17 + 0xa0);
                  *(undefined8 *)(puVar17 + -8) = 0x102360;
                  cVar3 = digest_file_isra_1(*(undefined8 *)(puVar17 + 0x20),param_2,puVar17 + 0x98)
                  ;
                  if (cVar3 == '\0') {
                    puVar17[0x79] = 0;
                    goto code_r0x0010236d;
                  }
                  *(undefined8 *)(puVar17 + -8) = 0x102476;
                  lVar6 = func_0x001016c0(*(undefined8 *)(puVar17 + 0x20),0x5c);
                  if (lVar6 == 0) {
                    *(undefined8 *)(puVar17 + -8) = 0x102860;
                    lVar6 = func_0x001016c0(*(undefined8 *)(puVar17 + 0x20),10);
                    if (lVar6 != 0) goto code_r0x0010247f;
code_r0x0010248c:
                    if (puVar17[0x78] == '\0') {
                      pbVar18 = (byte *)0x0;
joined_r0x001024a3:
                      if (digest_hex_bytes >> 1 == 0) goto code_r0x001024e2;
                    }
                    else {
                      pbVar18 = (byte *)0x0;
                      *(undefined8 *)(puVar17 + -8) = 0x10288d;
                      func_0x001017d0(&UNK_0010a694,1,6,stdout);
                      *(undefined8 *)(puVar17 + -8) = 0x1028aa;
                      func_0x001017d0(&UNK_0010a7fc,1,2,stdout);
                      *(undefined8 *)(puVar17 + -8) = 0x1028b6;
                      print_filename(*(undefined8 *)(puVar17 + 0x20),0);
                      *(undefined8 *)(puVar17 + -8) = 0x1028d3;
                      func_0x001017d0(&UNK_0010a7ff,1,4,stdout);
                      if (digest_hex_bytes >> 1 == 0) goto code_r0x00102533;
                    }
                  }
                  else {
code_r0x0010247f:
                    if (delim != 10) goto code_r0x0010248c;
                    if (puVar17[0x78] == '\0') {
                      puVar19 = *(undefined **)(stdout + 0x28);
                      if (*(undefined **)(stdout + 0x30) <= puVar19) {
                        *(undefined8 *)(puVar17 + -8) = 0x10297d;
                        func_0x001016d0(stdout,0x5c);
                        goto code_r0x001027fd;
                      }
                      pbVar18 = (byte *)0x1;
                      *(undefined **)(stdout + 0x28) = puVar19 + 1;
                      *puVar19 = 0x5c;
                      goto joined_r0x001024a3;
                    }
                    puVar19 = *(undefined **)(stdout + 0x28);
                    if (puVar19 < *(undefined **)(stdout + 0x30)) {
                      *(undefined **)(stdout + 0x28) = puVar19 + 1;
                      *puVar19 = 0x5c;
                    }
                    else {
                      *(undefined8 *)(puVar17 + -8) = 0x1029cc;
                      func_0x001016d0(stdout,0x5c);
                    }
                    *(undefined8 *)(puVar17 + -8) = 0x1027b4;
                    func_0x001017d0(&UNK_0010a694,1,6,stdout);
                    *(undefined8 *)(puVar17 + -8) = 0x1027d1;
                    func_0x001017d0(&UNK_0010a7fc,1,2,stdout);
                    *(undefined8 *)(puVar17 + -8) = 0x1027e0;
                    print_filename(*(undefined8 *)(puVar17 + 0x20),1);
                    *(undefined8 *)(puVar17 + -8) = 0x1027fd;
                    func_0x001017d0(&UNK_0010a7ff,1,4,stdout);
code_r0x001027fd:
                    pbVar18 = (byte *)0x1;
                    if (digest_hex_bytes >> 1 == 0) goto code_r0x001024db;
                  }
                  puVar23 = (uint *)0x0;
                  do {
                    bVar4 = *(byte *)((long)param_2 + (long)puVar23);
                    puVar23 = (uint *)((long)puVar23 + 1);
                    *(undefined8 *)(puVar17 + -8) = 0x1024cc;
                    func_0x00101810(1,&UNK_0010a7f7,(ulong)bVar4);
                  } while (puVar23 < (uint *)(digest_hex_bytes >> 1));
code_r0x001024db:
                  if (puVar17[0x78] == '\0') {
code_r0x001024e2:
                    puVar19 = *(undefined **)(stdout + 0x28);
                    if (*(undefined **)(undefined8 *)(stdout + 0x30) < puVar19 ||
                        *(undefined **)(undefined8 *)(stdout + 0x30) == puVar19) {
                      *(undefined8 *)(puVar17 + -8) = 0x10299a;
                      func_0x001016d0(stdout,0x20);
                    }
                    else {
                      *(undefined **)(stdout + 0x28) = puVar19 + 1;
                      *puVar19 = 0x20;
                    }
                    puVar19 = *(undefined **)(stdout + 0x28);
                    if (puVar19 < *(undefined **)(stdout + 0x30)) {
                      *(undefined **)(stdout + 0x28) = puVar19 + 1;
                      *puVar19 = puVar17[0x7b];
                    }
                    else {
                      *(undefined8 *)(puVar17 + -8) = 0x10298b;
                      func_0x001016d0(stdout,(ulong)*(uint *)(puVar17 + 0x7c));
                    }
                    *(undefined8 *)(puVar17 + -8) = 0x102533;
                    print_filename(*(undefined8 *)(puVar17 + 0x20),pbVar18);
                  }
code_r0x00102533:
                  bVar4 = delim;
                  pbVar16 = *(byte **)(stdout + 0x28);
                  if (pbVar16 < *(byte **)(stdout + 0x30)) {
                    *(byte **)(stdout + 0x28) = pbVar16 + 1;
                    *pbVar16 = bVar4;
                    goto code_r0x0010236d;
                  }
                  *(undefined8 *)(puVar17 + -8) = 0x10295f;
                  func_0x001016d0(stdout,(ulong)delim);
                  goto code_r0x0010236d;
                }
                lVar6 = 2;
                pbVar20 = &UNK_0010b322;
                do {
                  if (lVar6 == 0) break;
                  lVar6 = lVar6 + -1;
                  bVar24 = *pbVar16 < *pbVar20;
                  bVar25 = *pbVar16 == *pbVar20;
                  pbVar16 = pbVar16 + (ulong)bVar26 * -2 + 1;
                  pbVar20 = pbVar20 + (ulong)bVar26 * -2 + 1;
                } while (bVar25);
                cVar3 = (!bVar24 && !bVar25) - bVar24;
                *(int *)(puVar17 + 0x2c) = (int)cVar3;
                if (cVar3 == '\0') {
                  have_read_stdin = '\x01';
                  *(undefined8 *)(puVar17 + -8) = 0x101d04;
                  uVar7 = func_0x00101660(0,&UNK_0010a786,5);
                  *(undefined8 *)(puVar17 + 0x20) = uVar7;
                  puVar23 = stdin;
                }
                else {
                  *(undefined8 *)(puVar17 + -8) = 0x102426;
                  puVar23 = (uint *)fopen_safer(*(undefined8 *)(puVar17 + 0x20),&UNK_0010a762);
                  if (puVar23 == (uint *)0x0) goto code_r0x00102432;
                }
                *(undefined8 *)(puVar17 + 0x90) = 0;
                *(undefined8 *)(puVar17 + 0x98) = 0;
                puVar17[0x7a] = 0;
                puVar17[0x30] = 0;
                unaff_R13 = 0;
                *(undefined **)(puVar17 + 8) = puVar17 + 0x98;
                *(undefined8 *)(puVar17 + 0x58) = 0;
                *(undefined8 *)(puVar17 + 0x50) = 0;
                pbVar18 = (byte *)0x1;
                *(undefined **)(puVar17 + 0x10) = puVar17 + 0x90;
                *(undefined **)(puVar17 + 0x40) = puVar17 + 0x8f;
                *(undefined **)(puVar17 + 0x38) = puVar17 + 0xf0;
                do {
                  *(undefined8 *)(puVar17 + -8) = 0x101d97;
                  unaff_R15 = func_0x00101760(*(undefined8 *)(puVar17 + 0x10),
                                              *(undefined8 *)(puVar17 + 8),10);
                  if ((long)unaff_R15 < 1) goto code_r0x0010209c;
                  pbVar16 = *(byte **)(puVar17 + 0x90);
                  bVar4 = *pbVar16;
                  if (bVar4 == 0x23) goto code_r0x00101e55;
                  if (pbVar16[unaff_R15 - 1] == 10) {
                    unaff_R15 = unaff_R15 - 1;
                    pbVar16[unaff_R15] = 0;
                    pbVar16 = *(byte **)(puVar17 + 0x90);
                    bVar4 = *pbVar16;
                  }
                  if ((bVar4 == 9) || (uVar13 = 0, bVar4 == 0x20)) {
                    uVar13 = 0;
                    do {
                      do {
                        uVar13 = uVar13 + 1;
                        bVar4 = pbVar16[uVar13];
                      } while (bVar4 == 0x20);
                    } while (bVar4 == 9);
                  }
                  cVar3 = '\0';
                  bVar24 = bVar4 < 0x5c;
                  bVar25 = bVar4 == 0x5c;
                  if (bVar25) {
                    cVar3 = puVar17[0x2b];
                    bVar24 = 0xfffffffffffffffe < uVar13;
                    uVar13 = uVar13 + 1;
                    bVar25 = uVar13 == 0;
                  }
                  pbVar22 = pbVar16 + uVar13;
                  lVar6 = 6;
                  pbVar20 = pbVar22;
                  pbVar21 = &UNK_0010a694;
                  do {
                    if (lVar6 == 0) break;
                    lVar6 = lVar6 + -1;
                    bVar24 = *pbVar20 < *pbVar21;
                    bVar25 = *pbVar20 == *pbVar21;
                    pbVar20 = pbVar20 + (ulong)bVar26 * -2 + 1;
                    pbVar21 = pbVar21 + (ulong)bVar26 * -2 + 1;
                  } while (bVar25);
                  if ((!bVar24 && !bVar25) == bVar24) {
                    bVar4 = pbVar16[uVar13 + 6];
                    lVar6 = uVar13 + 6;
                    if (bVar4 == 0x20) {
                      bVar4 = pbVar16[uVar13 + 7];
                      lVar6 = uVar13 + 7;
                    }
                    if (bVar4 == 0x28) {
                      unaff_R15 = unaff_R15 - (lVar6 + 1);
                      if (unaff_R15 != 0) {
                        pbVar16 = pbVar16 + lVar6 + 1;
                        lVar6 = unaff_R15 - 1;
                        if (lVar6 == 0) {
code_r0x00102401:
                          if (*pbVar16 != 0x29) goto code_r0x00101e44;
                          lVar6 = 0;
                          pbVar20 = pbVar16;
                        }
                        else {
                          bVar4 = pbVar16[unaff_R15 - 1];
                          while (bVar4 != 0x29) {
                            lVar6 = lVar6 + -1;
                            if (lVar6 == 0) goto code_r0x00102401;
                            bVar4 = pbVar16[lVar6];
                          }
                          pbVar20 = pbVar16 + lVar6;
                        }
                        if (cVar3 != '\0') {
                          *(undefined8 *)(puVar17 + -8) = 0x102949;
                          lVar11 = filename_unescape(pbVar16,lVar6);
                          if (lVar11 == 0) goto code_r0x00101e44;
                        }
                        *pbVar20 = 0;
                        do {
                          do {
                            lVar11 = lVar6;
                            lVar6 = lVar11 + 1;
                            bVar4 = pbVar16[lVar6];
                          } while (bVar4 == 0x20);
                        } while (bVar4 == 9);
                        if (bVar4 == 0x3d) {
                          pbVar22 = pbVar16 + lVar11 + 2;
                          do {
                            do {
                              pbVar20 = pbVar22;
                              pbVar22 = pbVar20 + 1;
                            } while (*pbVar20 == 0x20);
                          } while (*pbVar20 == 9);
                          *(byte **)(puVar17 + 0x60) = pbVar20;
                          *(undefined8 *)(puVar17 + -8) = 0x1026dd;
                          bVar24 = (bool)hex_digits(pbVar20);
                          pbVar22 = *(byte **)(puVar17 + 0x60);
                          goto code_r0x0010275f;
                        }
                      }
                    }
                  }
                  else {
                    if ((ulong)(*pbVar22 == 0x5c) + min_digest_line_length <= unaff_R15 - uVar13) {
                      lVar6 = uVar13 + digest_hex_bytes;
                      bVar4 = pbVar16[lVar6];
                      if ((bVar4 == 0x20) || (bVar4 == 9)) {
                        pbVar16[lVar6] = 0;
                        *(long *)(puVar17 + 0x70) = lVar6;
                        puVar17[0x68] = cVar3;
                        *(byte **)(puVar17 + 0x60) = pbVar22;
                        *(undefined8 *)(puVar17 + -8) = 0x101f43;
                        cVar3 = hex_digits(pbVar22);
                        if (cVar3 != '\0') {
                          lVar11 = *(long *)(puVar17 + 0x70);
                          pbVar22 = *(byte **)(puVar17 + 0x60);
                          lVar6 = lVar11 + 1;
                          if ((unaff_R15 - lVar6 != 1) &&
                             ((pbVar16[lVar11 + 1] == 0x20 || (pbVar16[lVar11 + 1] == 0x2a)))) {
                            if (bsd_reversed != 1) {
                              bsd_reversed = 0;
                              lVar6 = lVar11 + 2;
                            }
code_r0x00101f9a:
                            pbVar16 = pbVar16 + lVar6;
                            if (puVar17[0x68] != '\0') goto code_r0x00102741;
                            goto code_r0x00101fa6;
                          }
                          if (bsd_reversed != 0) {
                            bsd_reversed = 1;
                            goto code_r0x00101f9a;
                          }
                        }
                      }
                    }
                  }
code_r0x00101e44:
                  unaff_R13 = unaff_R13 + 1;
                  uVar13 = unaff_R15;
                  if (warn != '\0') {
                    *(undefined8 *)(puVar17 + -8) = 0x1021e1;
                    uVar7 = quotearg_n_style_colon(0,3,*(undefined8 *)(puVar17 + 0x20));
                    *(undefined8 *)(puVar17 + -8) = 0x1021f7;
                    uVar8 = func_0x00101660(0,&UNK_0010b0a0,5);
                    *(undefined8 *)(puVar17 + -8) = 0x102212;
                    pbVar22 = pbVar18;
                    func_0x00101830(0,0,uVar8,uVar7);
                  }
code_r0x00101e55:
                  if ((*(byte *)puVar23 & 0x30) != 0) {
code_r0x0010209c:
                    *(undefined8 *)(puVar17 + -8) = 0x1020a9;
                    func_0x001015b0(*(undefined8 *)(puVar17 + 0x90));
                    param_2 = (undefined8 *)(ulong)(*puVar23 & 0x20);
                    if ((*puVar23 & 0x20) == 0) {
                      if (*(int *)(puVar17 + 0x2c) != 0) {
                        *(undefined8 *)(puVar17 + -8) = 0x102630;
                        iVar5 = rpl_fclose(puVar23);
                        if (iVar5 != 0) {
code_r0x00102432:
                          *(undefined8 *)(puVar17 + -8) = 0x102443;
                          param_2 = (undefined8 *)
                                    quotearg_n_style_colon(0,3,*(undefined8 *)(puVar17 + 0x20));
                          *(undefined8 *)(puVar17 + -8) = 0x10244b;
                          puVar10 = (uint *)func_0x001015d0();
                          uVar1 = *puVar10;
                          *(undefined8 *)(puVar17 + -8) = 0x102460;
                          func_0x00101830(0,(ulong)uVar1,&UNK_0010b255,param_2);
                          bVar4 = 0;
                          goto code_r0x001021c3;
                        }
                      }
                      if (puVar17[0x30] == '\0') {
                        *(undefined8 *)(puVar17 + -8) = 0x102656;
                        pbVar18 = (byte *)quotearg_n_style_colon
                                                    (0,3,*(undefined8 *)(puVar17 + 0x20));
                        *(undefined8 *)(puVar17 + -8) = 0x10266c;
                        uVar7 = func_0x00101660(0,&UNK_0010b0d0,5);
                        pbVar22 = &UNK_0010a694;
                        *(undefined8 *)(puVar17 + -8) = 0x102684;
                        func_0x00101830(0,0,uVar7,pbVar18);
                      }
                      else {
                        if (status_only == '\0') {
                          if (unaff_R13 != 0) {
                            pbVar22 = (byte *)0x5;
                            *(undefined8 *)(puVar17 + -8) = 0x1020fc;
                            uVar7 = func_0x00101860(0,&UNK_0010b138,&UNK_0010b108,unaff_R13);
                            *(undefined8 *)(puVar17 + -8) = 0x10210d;
                            func_0x00101830(0,0,uVar7,unaff_R13);
                          }
                          if (*(long *)(puVar17 + 0x50) != 0) {
                            uVar13 = *(ulong *)(puVar17 + 0x50);
                            pbVar22 = (byte *)0x5;
                            *(undefined8 *)(puVar17 + -8) = 0x102138;
                            uVar7 = func_0x00101860(0,&UNK_0010b198,&UNK_0010b168,uVar13);
                            *(undefined8 *)(puVar17 + -8) = 0x102149;
                            func_0x00101830(0,0,uVar7,uVar13);
                          }
                          if (*(long *)(puVar17 + 0x58) != 0) {
                            uVar13 = *(ulong *)(puVar17 + 0x58);
                            pbVar22 = (byte *)0x5;
                            *(undefined8 *)(puVar17 + -8) = 0x102174;
                            uVar7 = func_0x00101860(0,&UNK_0010b1f8,&UNK_0010b1c8,uVar13);
                            *(undefined8 *)(puVar17 + -8) = 0x102185;
                            func_0x00101830(0,0,uVar7,uVar13);
                          }
                          if (ignore_missing == '\0') goto code_r0x0010255e;
                          if (puVar17[0x7a] == '\0') {
                            *(undefined8 *)(puVar17 + -8) = 0x102908;
                            pbVar18 = (byte *)quotearg_n_style_colon
                                                        (0,3,*(undefined8 *)(puVar17 + 0x20));
                            *(undefined8 *)(puVar17 + -8) = 0x10291e;
                            uVar7 = func_0x00101660(0,&UNK_0010a7de,5);
                            *(undefined8 *)(puVar17 + -8) = 0x10292f;
                            func_0x00101830(0,0,uVar7,pbVar18);
                            goto code_r0x001021be;
                          }
                        }
                        else {
code_r0x0010255e:
                          if (puVar17[0x7a] == '\0') goto code_r0x001021be;
                        }
                        if ((*(ulong *)(puVar17 + 0x50) | *(ulong *)(puVar17 + 0x58)) == 0) {
                          param_2 = (undefined8 *)(ulong)(byte)(strict ^ 1 | unaff_R13 == 0);
                        }
                      }
code_r0x001021be:
                      bVar4 = (byte)param_2 & 1;
                    }
                    else {
                      *(undefined8 *)(puVar17 + -8) = 0x10257f;
                      param_2 = (undefined8 *)
                                quotearg_n_style_colon(0,3,*(undefined8 *)(puVar17 + 0x20));
                      *(undefined8 *)(puVar17 + -8) = 0x102595;
                      uVar7 = func_0x00101660(0,&UNK_0010a7cf,5);
                      *(undefined8 *)(puVar17 + -8) = 0x1025a6;
                      func_0x00101830(0,0,uVar7,param_2);
                      bVar4 = 0;
                    }
code_r0x001021c3:
                    puVar17[0x79] = puVar17[0x79] & bVar4;
code_r0x0010236d:
                    *(long *)(puVar17 + 0x18) = *(long *)(puVar17 + 0x18) + 8;
                    unaff_R15 = uVar13;
                    if (*(ulong *)(puVar17 + 0x18) <= *(ulong *)(puVar17 + 0x48) &&
                        *(ulong *)(puVar17 + 0x48) != *(ulong *)(puVar17 + 0x18))
                    goto code_r0x00101cb0;
code_r0x00102383:
                    if (have_read_stdin != '\0') {
                      *(undefined8 *)(puVar17 + -8) = 0x10270c;
                      iVar5 = rpl_fclose(stdin);
                      if (iVar5 != -1) goto code_r0x00102390;
                      *(undefined8 *)(puVar17 + -8) = 0x102728;
                      pbVar16 = (byte *)func_0x00101660(0,&UNK_0010a786,5);
                      *(undefined8 *)(puVar17 + -8) = 0x102730;
                      puVar10 = (uint *)func_0x001015d0();
                      uVar1 = *puVar10;
                      *(undefined8 *)(puVar17 + -8) = 0x102741;
                      lVar6 = func_0x00101830(1,(ulong)uVar1,pbVar16);
code_r0x00102741:
                      *(byte **)(puVar17 + 0x60) = pbVar22;
                      *(undefined8 *)(puVar17 + -8) = 0x102754;
                      lVar6 = filename_unescape(pbVar16,unaff_R15 - lVar6);
                      pbVar22 = *(byte **)(puVar17 + 0x60);
                      bVar24 = lVar6 != 0;
code_r0x0010275f:
                      if (bVar24 == false) goto code_r0x00101e44;
code_r0x00101fa6:
                      bVar24 = false;
                      bVar25 = *(int *)(puVar17 + 0x2c) == 0;
                      if (bVar25) {
                        lVar6 = 2;
                        pbVar20 = pbVar16;
                        pbVar21 = &UNK_0010b322;
                        do {
                          if (lVar6 == 0) break;
                          lVar6 = lVar6 + -1;
                          bVar24 = *pbVar20 < *pbVar21;
                          bVar25 = *pbVar20 == *pbVar21;
                          pbVar20 = pbVar20 + (ulong)bVar26 * -2 + 1;
                          pbVar21 = pbVar21 + (ulong)bVar26 * -2 + 1;
                        } while (bVar25);
                        if ((!bVar24 && !bVar25) == bVar24) goto code_r0x00101e44;
                      }
                      uVar13 = 0;
                      if (status_only == '\0') {
                        *(byte **)(puVar17 + 0x30) = pbVar22;
                        *(undefined8 *)(puVar17 + -8) = 0x101fea;
                        lVar6 = func_0x001016c0(pbVar16,10);
                        pbVar22 = *(byte **)(puVar17 + 0x30);
                        uVar13 = (ulong)(lVar6 != 0);
                      }
                      *(byte **)(puVar17 + 0x30) = pbVar22;
                      *(undefined8 *)(puVar17 + -8) = 0x102010;
                      cVar3 = digest_file_isra_1(pbVar16,*(undefined8 *)(puVar17 + 0x38),
                                                 *(undefined8 *)(puVar17 + 0x40));
                      pbVar22 = *(byte **)(puVar17 + 0x30);
                      iVar5 = (int)uVar13;
                      if (cVar3 == '\0') {
                        *(long *)(puVar17 + 0x50) = *(long *)(puVar17 + 0x50) + 1;
                        if (status_only == '\0') {
                          if (iVar5 != 0) {
                            puVar19 = *(undefined **)(stdout + 0x28);
                            if (puVar19 < *(undefined **)(stdout + 0x30)) {
                              *(undefined **)(stdout + 0x28) = puVar19 + 1;
                              *puVar19 = 0x5c;
                            }
                            else {
                              *(undefined8 *)(puVar17 + -8) = 0x10296e;
                              func_0x001016d0(stdout,0x5c);
                            }
                          }
                          *(undefined8 *)(puVar17 + -8) = 0x10205f;
                          print_filename(pbVar16,uVar13);
                          puVar19 = &UNK_0010a7b1;
code_r0x0010206b:
                          *(undefined8 *)(puVar17 + -8) = 0x102072;
                          uVar7 = func_0x00101660(0,puVar19,5);
                          *(undefined8 *)(puVar17 + -8) = 0x102088;
                          func_0x00101810(1,&UNK_0010b871,uVar7);
                        }
                      }
                      else {
                        if ((ignore_missing == '\0') || (puVar17[0x8f] == '\0')) {
                          *(byte **)(puVar17 + 0x68) = pbVar22;
                          uVar12 = digest_hex_bytes >> 1;
                          if (uVar12 == 0) {
                            uVar15 = 0;
                          }
                          else {
                            *(ulong *)(puVar17 + 0x60) = uVar12;
                            puVar17[0x30] = cVar3;
                            *(undefined8 *)(puVar17 + -8) = 0x10225b;
                            plVar9 = (long *)func_0x001018d0();
                            uVar14 = 0;
                            cVar3 = puVar17[0x30];
                            uVar12 = *(ulong *)(puVar17 + 0x60);
                            pbVar22 = *(byte **)(puVar17 + 0x68);
                            do {
                              if ((*(int *)(*plVar9 + (ulong)pbVar22[uVar14 * 2] * 4) !=
                                   (int)(char)unaff_R14[*(byte *)(*(long *)(puVar17 + 0x38) + uVar14
                                                                 ) >> 4]) ||
                                 (*(int *)(*plVar9 + (ulong)pbVar22[uVar14 * 2 + 1] * 4) !=
                                  (int)(char)unaff_R14[(uint)*(byte *)(*(long *)(puVar17 + 0x38) +
                                                                      uVar14) & 0xf])) {
                                uVar15 = uVar14;
                                if (uVar12 != uVar14) {
                                  *(long *)(puVar17 + 0x58) = *(long *)(puVar17 + 0x58) + 1;
                                  if (status_only != '\0') goto code_r0x00102088;
                                  if (iVar5 != 0) goto code_r0x001022e3;
                                  *(undefined8 *)(puVar17 + -8) = 0x1028f2;
                                  print_filename(pbVar16,0);
                                  goto code_r0x0010232d;
                                }
                                break;
                              }
                              uVar14 = uVar14 + 1;
                              uVar15 = uVar12;
                            } while (uVar12 != uVar14);
                          }
                          puVar17[0x7a] = status_only;
                          if ((status_only == '\0') && (puVar17[0x7a] = quiet, quiet == '\0')) {
                            if (iVar5 == 0) {
                              puVar17[0x30] = cVar3;
                              *(undefined8 *)(puVar17 + -8) = 0x1025ff;
                              print_filename(pbVar16,0);
                              puVar17[0x7a] = puVar17[0x30];
                            }
                            else {
                              puVar17[0x7a] = cVar3;
code_r0x001022e3:
                              puVar19 = *(undefined **)(stdout + 0x28);
                              if (puVar19 < *(undefined **)(stdout + 0x30)) {
                                *(undefined **)(stdout + 0x28) = puVar19 + 1;
                                *puVar19 = 0x5c;
                              }
                              else {
                                *(ulong *)(puVar17 + 0x60) = uVar12;
                                *(ulong *)(puVar17 + 0x30) = uVar15;
                                *(undefined8 *)(puVar17 + -8) = 0x1029b3;
                                func_0x001016d0(stdout,0x5c);
                                uVar15 = *(ulong *)(puVar17 + 0x30);
                                uVar12 = *(ulong *)(puVar17 + 0x60);
                              }
                              *(ulong *)(puVar17 + 0x60) = uVar12;
                              *(ulong *)(puVar17 + 0x30) = uVar15;
                              *(undefined8 *)(puVar17 + -8) = 0x10231a;
                              print_filename(pbVar16,1);
                              if (*(long *)(puVar17 + 0x30) != *(long *)(puVar17 + 0x60)) {
code_r0x0010232d:
                                puVar19 = &UNK_0010a7c5;
                                goto code_r0x0010206b;
                              }
                            }
                            if (quiet == '\0') {
                              puVar19 = &UNK_0010a7cc;
                              goto code_r0x0010206b;
                            }
                          }
                        }
                      }
code_r0x00102088:
                      bVar4 = *(byte *)puVar23;
                      puVar17[0x30] = puVar17[0x2b];
                      if ((bVar4 & 0x30) == 0) goto code_r0x00101e60;
                      goto code_r0x0010209c;
                    }
code_r0x00102390:
                    if (*(long *)(puVar17 + 0x138) == *(long *)(in_FS_OFFSET + 0x28)) {
                      return (ulong)(puVar17[0x79] ^ 1);
                    }
code_r0x001029e3:
                    *(undefined8 *)(puVar17 + -8) = 0x1029e8;
                    func_0x00101690();
code_r0x001029e8:
                    uVar13 = unaff_R15;
                    if (status_only == '\0') {
code_r0x00101b97:
                      if (warn == '\0') goto code_r0x00101ea5;
                      puVar19 = &UNK_0010afe0;
                      unaff_R15 = uVar13;
                      if (puVar17[0x2b] == '\0') goto code_r0x00101bbb;
                    }
                    else {
                      if (puVar17[0x2b] == '\0') {
code_r0x00102a00:
                        puVar19 = &UNK_0010afa0;
                        goto code_r0x00101bbb;
                      }
code_r0x001025ad:
                      uVar13 = unaff_R15;
                      if (warn == '\0') goto code_r0x00101ec5;
                    }
                    goto code_r0x00101c3d;
                  }
code_r0x00101e60:
                  pbVar18 = pbVar18 + 1;
                } while (pbVar18 != (byte *)0x0);
                *(undefined8 *)(puVar17 + -8) = 0x101e7b;
                param_2 = (undefined8 *)quotearg_n_style_colon(0,3,*(undefined8 *)(puVar17 + 0x20));
                *(undefined8 *)(puVar17 + -8) = 0x101e91;
                uVar7 = func_0x00101660(0,&UNK_0010a795,5);
                *(undefined8 *)(puVar17 + -8) = 0x101ea5;
                func_0x00101830(1,0,uVar7,param_2);
code_r0x00101ea5:
                unaff_R15 = uVar13;
                if ((quiet == '\x01') && (puVar19 = &UNK_0010b020, puVar17[0x2b] == '\0')) break;
code_r0x00101ec5:
                uVar13 = unaff_R15;
              } while ((strict == 0) || (puVar19 = &UNK_0010b060, puVar17[0x2b] != '\0'));
            }
          }
code_r0x00101bbb:
          *(undefined8 *)(puVar17 + -8) = 0x101bc2;
          uVar7 = func_0x00101660(0,puVar19,5);
          *(undefined8 *)(puVar17 + -8) = 0x101bd0;
          func_0x00101830(0,0,uVar7);
        } while( true );
      }
      if (iVar5 == 99) {
        puVar17[0x2b] = 1;
      }
      else {
        if (iVar5 != 0x74) goto code_r0x00101bd0;
        pbVar18 = (byte *)0x0;
      }
    }
  } while( true );
}