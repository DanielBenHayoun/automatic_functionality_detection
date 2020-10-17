
ulong b2sum(uint param_1,undefined8 *param_2)

{
  undefined uVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  char cVar22;
  byte *pbVar23;
  uint *puVar24;
  char cVar25;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  byte bVar28;
  undefined auVar29 [16];
  undefined *apuStack400 [3];
  undefined auStack376 [8];
  undefined8 *apuStack368 [2];
  ulong uStack352;
  byte *apbStack344 [2];
  ulong uStack328;
  byte *pbStack320;
  ulong uStack312;
  int iStack300;
  byte *apbStack296 [2];
  ulong auStack280 [3];
  undefined auStack256 [4];
  uint auStack252 [3];
  byte *apbStack240 [2];
  ulong auStack224 [20];
  long alStack64 [2];
  
  bVar28 = 0;
  cVar25 = '\0';
  pbVar23 = (byte *)(ulong)param_1;
  pbVar17 = (byte *)0xffffffff;
  puVar16 = auStack376;
  alStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101aa0(6,&UNK_0010a4a1);
  func_0x001018a0(&UNK_0010927a,&UNK_001092a3);
  func_0x00101880(&UNK_0010927a);
  atexit(close_stdout);
  func_0x00101ac0(stdout,0,1,0);
  auStack256[0] = 0;
  puVar24 = (uint *)&UNK_0010a4a1;
code_r0x00101c50:
  pbVar21 = (byte *)0x0;
  *(undefined8 *)(puVar16 + -8) = 0x101c6c;
  iVar6 = func_0x001018f0((ulong)pbVar23 & 0xffffffff,param_2,&UNK_00109316);
  if (iVar6 == -1) {
    min_digest_line_length = 3;
    if (0x200 < b2_length) {
code_r0x00102f0d:
      *(undefined8 *)(puVar16 + -8) = 0x102f15;
      uVar7 = quote(puVar24);
      *(undefined8 *)(puVar16 + -8) = 0x102f2b;
      uVar14 = func_0x001018b0(0,&UNK_001092ca,5);
      *(undefined8 *)(puVar16 + -8) = 0x102f3c;
      func_0x00101ad0(0,0,uVar14,uVar7);
      uVar7 = *(undefined8 *)(algorithm_in_string + (ulong)b2_algorithm * 8);
      *(undefined8 *)(puVar16 + -8) = 0x102f52;
      param_2 = (undefined8 *)quote(uVar7);
      *(undefined8 *)(puVar16 + -8) = 0x102f68;
      uVar7 = func_0x001018b0(0,&UNK_00109aa8,5);
      pbVar21 = (byte *)0x200;
      *(undefined8 *)(puVar16 + -8) = 0x102f82;
      func_0x00101ad0(1,0,uVar7);
      uVar8 = unaff_R15;
code_r0x00102f82:
      *(undefined8 *)(puVar16 + -8) = 0x102f87;
      auVar29 = func_0x001018e0();
code_r0x00102f87:
      lVar11 = SUB168(auVar29,0);
      if (SUB164(auVar29 >> 0x40,0) != 1) {
        bsd_reversed = 0;
        lVar11 = (long)param_2 + 2;
      }
code_r0x0010242f:
      pbVar17 = pbVar17 + lVar11;
      unaff_R15 = uVar8;
      if (puVar16[0x20] == '\0') goto code_r0x00102b81;
      *(byte **)(puVar16 + 0x20) = pbVar21;
      *(undefined8 *)(puVar16 + -8) = 0x102450;
      lVar11 = filename_unescape(pbVar17,uVar8 - lVar11);
      pbVar21 = *(byte **)(puVar16 + 0x20);
      uVar15 = (ulong)(lVar11 != 0);
code_r0x00102b79:
      unaff_R15 = uVar8;
      if ((char)uVar15 == '\0') goto code_r0x00102200;
code_r0x00102b81:
      bVar26 = false;
      bVar27 = *(int *)(puVar16 + 0x4c) == 0;
      if (bVar27) {
        lVar11 = 2;
        pbVar18 = pbVar17;
        pbVar20 = &UNK_00109f6a;
        do {
          if (lVar11 == 0) break;
          lVar11 = lVar11 + -1;
          bVar26 = *pbVar18 < *pbVar20;
          bVar27 = *pbVar18 == *pbVar20;
          pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
          pbVar20 = pbVar20 + (ulong)bVar28 * -2 + 1;
        } while (bVar27);
        if ((!bVar26 && !bVar27) == bVar26) goto code_r0x00102200;
      }
      *(undefined4 *)(puVar16 + 0x20) = 0;
      if (status_only == '\0') {
        *(byte **)(puVar16 + 0x38) = pbVar21;
        *(undefined8 *)(puVar16 + -8) = 0x102bca;
        lVar11 = func_0x00101910(pbVar17,10);
        pbVar21 = *(byte **)(puVar16 + 0x38);
        *(uint *)(puVar16 + 0x20) = (uint)(lVar11 != 0);
      }
      *(byte **)(puVar16 + 0x38) = pbVar21;
      *(undefined8 *)(puVar16 + -8) = 0x102bf9;
      cVar5 = digest_file_isra_1(pbVar17,puVar16 + 0xf0,*(undefined8 *)(puVar16 + 0x58));
      pbVar21 = *(byte **)(puVar16 + 0x38);
      if (cVar5 == '\0') {
        *(long *)(puVar16 + 0x68) = *(long *)(puVar16 + 0x68) + 1;
        if (status_only != '\0') goto code_r0x00102c73;
        if (*(int *)(puVar16 + 0x20) != 0) {
          puVar19 = *(undefined **)(stdout + 0x28);
          if (puVar19 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar19 + 1;
            *puVar19 = 0x5c;
          }
          else {
            *(undefined8 *)(puVar16 + -8) = 0x102ec0;
            func_0x00101920(stdout,0x5c);
          }
        }
        *(undefined8 *)(puVar16 + -8) = 0x102c4a;
        print_filename(pbVar17,(ulong)*(uint *)(puVar16 + 0x20));
        puVar19 = &UNK_00109349;
      }
      else {
        if ((ignore_missing != '\0') && (puVar16[0x98] != '\0')) goto code_r0x00102c73;
        *(byte **)(puVar16 + 0x50) = pbVar21;
        uVar8 = digest_hex_bytes >> 1;
        if (uVar8 == 0) {
          unaff_R15 = 0;
        }
        else {
          *(ulong *)(puVar16 + 0x40) = uVar8;
          puVar16[0x38] = cVar5;
          uVar15 = 0;
          *(undefined8 *)(puVar16 + -8) = 0x102d4e;
          plVar13 = (long *)func_0x00101b80();
          cVar5 = puVar16[0x38];
          uVar8 = *(ulong *)(puVar16 + 0x40);
          pbVar21 = *(byte **)(puVar16 + 0x50);
          do {
            bVar4 = (puVar16 + 0xf0)[uVar15];
            unaff_R15 = uVar8;
            if ((*(int *)(*plVar13 + (ulong)pbVar21[uVar15 * 2] * 4) !=
                 (int)(char)bin2hex_7139[bVar4 >> 4]) ||
               (*(int *)(*plVar13 + (ulong)pbVar21[uVar15 * 2 + 1] * 4) !=
                (int)(char)bin2hex_7139[(uint)bVar4 & 0xf])) {
              if (uVar8 != uVar15) {
                *(long *)(puVar16 + 0x70) = *(long *)(puVar16 + 0x70) + 1;
                unaff_R15 = uVar15;
                if (status_only != '\0') goto code_r0x00102c73;
                if (*(int *)(puVar16 + 0x20) != 0) goto code_r0x00102e1c;
                *(undefined8 *)(puVar16 + -8) = 0x102dd2;
                print_filename(pbVar17,0);
                goto code_r0x00102dd2;
              }
              break;
            }
            uVar15 = uVar15 + 1;
          } while (uVar8 != uVar15);
        }
        puVar16[0x7a] = status_only;
        if ((status_only != '\0') || (puVar16[0x7a] = quiet, quiet != '\0')) goto code_r0x00102c73;
        puVar16[0x7a] = cVar5;
        if (*(int *)(puVar16 + 0x20) == 0) {
          *(undefined8 *)(puVar16 + -8) = 0x102fad;
          print_filename(pbVar17,0);
        }
        else {
code_r0x00102e1c:
          puVar19 = *(undefined **)(stdout + 0x28);
          if (puVar19 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar19 + 1;
            *puVar19 = 0x5c;
          }
          else {
            *(ulong *)(puVar16 + 0x20) = uVar8;
            *(undefined8 *)(puVar16 + -8) = 0x102ef1;
            func_0x00101920(stdout,0x5c);
            uVar8 = *(ulong *)(puVar16 + 0x20);
          }
          *(ulong *)(puVar16 + 0x20) = uVar8;
          *(undefined8 *)(puVar16 + -8) = 0x102e4e;
          print_filename(pbVar17,1);
          if (*(ulong *)(puVar16 + 0x20) != unaff_R15) {
code_r0x00102dd2:
            puVar19 = &UNK_0010935d;
            goto code_r0x00102c56;
          }
        }
        if (quiet != '\0') goto code_r0x00102c73;
        puVar19 = &UNK_00109364;
      }
code_r0x00102c56:
      *(undefined8 *)(puVar16 + -8) = 0x102c5d;
      uVar7 = func_0x001018b0(0,puVar19,5);
      *(undefined8 *)(puVar16 + -8) = 0x102c73;
      func_0x00101ab0(1,&UNK_0010a4b1,uVar7);
code_r0x00102c73:
      puVar16[0x50] = cVar25;
code_r0x00102213:
      if ((*(byte *)puVar24 & 0x30) != 0) goto code_r0x001024ad;
code_r0x0010221e:
      pbVar23 = pbVar23 + 1;
      if (pbVar23 != (byte *)0x0) goto code_r0x00102070;
      *(undefined8 *)(puVar16 + -8) = 0x102239;
      param_2 = (undefined8 *)quotearg_n_style_colon(0,3,*(undefined8 *)(puVar16 + 0x28));
      *(undefined8 *)(puVar16 + -8) = 0x10224f;
      uVar7 = func_0x001018b0(0,&UNK_0010932d,5);
      *(undefined8 *)(puVar16 + -8) = 0x102263;
      func_0x00101ad0(1,0,uVar7);
code_r0x00102263:
      if (((cVar25 != '\0') && (puVar19 = &UNK_00109b40, puVar16[0x78] != '\0')) ||
         ((-1 < (int)pbVar17 && (puVar19 = &UNK_00109b80, cVar25 != '\0')))) goto code_r0x00102290;
      if (ignore_missing == '\0') {
        if (status_only != '\0') {
          if (cVar25 != '\0') goto code_r0x001028fd;
          goto code_r0x00102fc8;
        }
code_r0x00101f2a:
        if (warn == '\0') goto code_r0x001022da;
        puVar19 = &UNK_00109c58;
joined_r0x00101f46:
        if (cVar25 == '\0') goto code_r0x00102290;
      }
      else {
        if (cVar25 == '\0') goto code_r0x00102fd9;
        if (status_only == '\0') {
code_r0x001028fd:
          if (warn == '\0') goto code_r0x001022f4;
        }
        else {
          if (warn == '\0') {
code_r0x001022da:
            if ((quiet == '\x01') && (puVar19 = &UNK_00109c98, cVar25 == '\0'))
            goto code_r0x00102290;
code_r0x001022f4:
            if (strict != 0) {
              puVar19 = &UNK_00109cd8;
              goto joined_r0x00101f46;
            }
          }
        }
      }
      if ((int)pbVar17 == -1) {
        pbVar17 = (byte *)0x0;
      }
      *(undefined8 **)(puVar16 + 0x60) = param_2 + (int)pbVar23;
      lVar11 = (long)optind;
      if (optind == (int)pbVar23) {
        puVar3 = *(undefined8 **)(puVar16 + 0x60);
        *puVar3 = 0x109f6a;
        *(undefined8 **)(puVar16 + 0x60) = puVar3 + 1;
      }
      puVar3 = param_2 + lVar11;
      *(undefined8 **)(puVar16 + 0x18) = puVar3;
      if (*(undefined8 **)(puVar16 + 0x60) < puVar3 || *(undefined8 **)(puVar16 + 0x60) == puVar3) {
        puVar16[0x79] = 1;
        goto code_r0x00102624;
      }
      puVar16[0x79] = 1;
      iVar6 = (-(uint)((int)pbVar17 == 0) & 0xfffffff6) + 0x2a;
      *(int *)(puVar16 + 0x7c) = iVar6;
      puVar16[0x7b] = (char)iVar6;
code_r0x00101fb0:
      uVar7 = **(undefined8 **)(puVar16 + 0x18);
      *(undefined8 *)(puVar16 + 0x28) = uVar7;
      if (cVar25 == '\0') {
        param_2 = (undefined8 *)(puVar16 + 0xa0);
        *(undefined8 *)(puVar16 + -8) = 0x102602;
        cVar5 = digest_file_isra_1(*(undefined8 *)(puVar16 + 0x28),param_2,puVar16 + 0x98);
        if (cVar5 == '\0') goto code_r0x0010260a;
        *(undefined8 *)(puVar16 + -8) = 0x1027be;
        lVar11 = func_0x00101910(*(undefined8 *)(puVar16 + 0x28));
        if (lVar11 == 0) {
          *(undefined8 *)(puVar16 + -8) = 0x102b0e;
          lVar11 = func_0x00101910(*(undefined8 *)(puVar16 + 0x28));
          if (lVar11 == 0) goto code_r0x001027d4;
        }
        if (delim == 10) goto code_r0x00102abf;
code_r0x001027d4:
        if (puVar16[0x78] == '\0') {
          pbVar17 = (byte *)0x0;
          if (digest_hex_bytes >> 1 == 0) goto code_r0x00102a28;
          goto code_r0x001027f1;
        }
        pbVar23 = (byte *)0x0;
        pbVar17 = (byte *)0x0;
        goto code_r0x0010296d;
      }
      *(undefined8 *)(puVar16 + -8) = 0x101fd2;
      iVar6 = func_0x001019e0(uVar7,&UNK_00109f6a);
      *(int *)(puVar16 + 0x4c) = iVar6;
      if (iVar6 != 0) {
        *(undefined8 *)(puVar16 + -8) = 0x102701;
        puVar24 = (uint *)fopen_safer(*(undefined8 *)(puVar16 + 0x28),&UNK_00109374);
        if (puVar24 != (uint *)0x0) goto code_r0x00102004;
code_r0x0010270d:
        *(undefined8 *)(puVar16 + -8) = 0x10271e;
        param_2 = (undefined8 *)quotearg_n_style_colon(0,3,*(undefined8 *)(puVar16 + 0x28));
        *(undefined8 *)(puVar16 + -8) = 0x102726;
        puVar12 = (uint *)func_0x00101810();
        uVar2 = *puVar12;
        *(undefined8 *)(puVar16 + -8) = 0x10273b;
        func_0x00101ad0(0,(ulong)uVar2,&UNK_00109f0c);
        bVar4 = 0;
        goto code_r0x001025df;
      }
      have_read_stdin = '\x01';
      *(undefined8 *)(puVar16 + -8) = 0x101ff8;
      uVar7 = func_0x001018b0(0,&UNK_0010931e,5);
      *(undefined8 *)(puVar16 + 0x28) = uVar7;
      puVar24 = stdin;
code_r0x00102004:
      *(undefined8 *)(puVar16 + 0x88) = 0;
      *(undefined8 *)(puVar16 + 0x90) = 0;
      puVar16[0x7a] = 0;
      puVar16[0x50] = 0;
      pbVar23 = (byte *)0x1;
      *(undefined **)(puVar16 + 0x10) = puVar16 + 0x90;
      *(undefined8 *)(puVar16 + 0x70) = 0;
      *(undefined8 *)(puVar16 + 0x68) = 0;
      *(undefined8 *)(puVar16 + 0x30) = 0;
      *(undefined **)(puVar16 + 8) = puVar16 + 0x88;
      *(undefined **)(puVar16 + 0x58) = puVar16 + 0x98;
code_r0x00102070:
      *(undefined8 *)(puVar16 + -8) = 0x102087;
      uVar8 = func_0x001019d0(*(undefined8 *)(puVar16 + 8),*(undefined8 *)(puVar16 + 0x10),10);
      if ((long)uVar8 < 1) goto code_r0x001024ad;
      pbVar17 = *(byte **)(puVar16 + 0x88);
      bVar4 = *pbVar17;
      if (bVar4 == 0x23) goto code_r0x00102213;
      if (pbVar17[uVar8 - 1] == 10) {
        uVar8 = uVar8 - 1;
        pbVar17[uVar8] = 0;
        pbVar17 = *(byte **)(puVar16 + 0x88);
        bVar4 = *pbVar17;
      }
      if ((bVar4 == 0x20) || (uVar15 = 0, bVar4 == 9)) {
        uVar15 = 0;
        do {
          do {
            uVar15 = uVar15 + 1;
            bVar4 = pbVar17[uVar15];
          } while (bVar4 == 0x20);
        } while (bVar4 == 9);
      }
      bVar26 = bVar4 < 0x5c;
      bVar27 = bVar4 == 0x5c;
      puVar16[0x20] = 0;
      if (bVar27) {
        bVar26 = 0xfffffffffffffffe < uVar15;
        uVar15 = uVar15 + 1;
        bVar27 = uVar15 == 0;
        puVar16[0x20] = cVar25;
      }
      pbVar21 = pbVar17 + uVar15;
      lVar11 = 6;
      pbVar18 = pbVar21;
      pbVar20 = &UNK_001091f0;
      do {
        if (lVar11 == 0) break;
        lVar11 = lVar11 + -1;
        bVar26 = *pbVar18 < *pbVar20;
        bVar27 = *pbVar18 == *pbVar20;
        pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
        pbVar20 = pbVar20 + (ulong)bVar28 * -2 + 1;
      } while (bVar27);
      unaff_R15 = uVar8;
      if ((!bVar26 && !bVar27) == bVar26) {
        lVar11 = uVar15 + 6;
        pbVar18 = pbVar17 + lVar11;
        bVar4 = *pbVar18;
        if (bVar4 == 0) {
code_r0x00102192:
          *pbVar18 = 0;
          *(long *)(puVar16 + 0x38) = lVar11;
          *(undefined8 *)(puVar16 + -8) = 0x1021ae;
          lVar9 = argmatch(pbVar21,algorithm_out_string,0);
          lVar11 = *(long *)(puVar16 + 0x38);
          if (-1 < lVar9) {
            b2_algorithm = (uint)lVar9;
code_r0x001021c2:
            lVar11 = lVar11 + 1;
            if (bVar4 == 0x2d) {
              pbVar21 = (byte *)0x0;
              *(long *)(puVar16 + 0x38) = lVar11;
              *(undefined8 *)(puVar16 + -8) = 0x10275d;
              iVar6 = xstrtoul(pbVar17 + lVar11,0,0);
              if (iVar6 == 0) {
                uVar15 = *(ulong *)(puVar16 + 0x98);
                lVar11 = *(long *)(puVar16 + 0x38);
                if ((uVar15 - 1 < 0x200) && ((uVar15 & 7) == 0)) {
                  while ((int)(char)pbVar17[lVar11] - 0x30U < 10) {
                    lVar11 = lVar11 + 1;
                  }
                  digest_hex_bytes = uVar15 >> 2;
                  b2_length = uVar15;
                  goto code_r0x001021db;
                }
              }
            }
            else {
code_r0x001021cb:
              b2_length = 0x200;
              digest_hex_bytes = 0x80;
code_r0x001021db:
              bVar4 = pbVar17[lVar11];
              if (bVar4 == 0x20) {
                bVar4 = pbVar17[lVar11 + 1];
                lVar11 = lVar11 + 1;
              }
              if (bVar4 != 0x28) goto code_r0x00102200;
              lVar9 = uVar8 - (lVar11 + 1);
              if (lVar9 != 0) {
                pbVar17 = pbVar17 + lVar11 + 1;
                lVar11 = lVar9 + -1;
                if (lVar11 == 0) {
code_r0x00102899:
                  if (*pbVar17 != 0x29) goto code_r0x00102200;
                  lVar11 = 0;
                  pbVar18 = pbVar17;
                }
                else {
                  bVar4 = pbVar17[lVar9 + -1];
                  while (bVar4 != 0x29) {
                    lVar11 = lVar11 + -1;
                    if (lVar11 == 0) goto code_r0x00102899;
                    bVar4 = pbVar17[lVar11];
                  }
                  pbVar18 = pbVar17 + lVar11;
                }
                if (puVar16[0x20] != '\0') {
                  *(undefined8 *)(puVar16 + -8) = 0x102cc5;
                  lVar9 = filename_unescape(pbVar17,lVar11);
                  if (lVar9 == 0) goto code_r0x00102200;
                }
                *pbVar18 = 0;
                do {
                  do {
                    lVar9 = lVar11;
                    lVar11 = lVar9 + 1;
                    bVar4 = pbVar17[lVar11];
                  } while (bVar4 == 0x20);
                } while (bVar4 == 9);
                if (bVar4 == 0x3d) goto code_r0x00102b50;
              }
            }
          }
        }
        else {
          if ((bVar4 == 0x20) || (bVar4 == 9)) {
code_r0x00102665:
            *pbVar18 = 0;
            *(long *)(puVar16 + 0x40) = lVar11;
            *(byte **)(puVar16 + 0x38) = pbVar18;
            *(undefined8 *)(puVar16 + -8) = 0x102686;
            lVar11 = argmatch(pbVar21,algorithm_out_string,0);
            if (-1 < lVar11) {
              b2_algorithm = (uint)lVar11;
              puVar19 = *(undefined **)(puVar16 + 0x38);
              lVar11 = *(long *)(puVar16 + 0x40);
              if (bVar4 != 0x28) goto code_r0x001021c2;
code_r0x001026e7:
              *puVar19 = 0x28;
              goto code_r0x001021cb;
            }
          }
          else {
            if (bVar4 == 0x2d) goto code_r0x00102192;
            if (bVar4 != 0x28) {
              pbVar20 = pbVar17 + uVar15 + 7;
              do {
                pbVar18 = pbVar20;
                bVar4 = *pbVar18;
                lVar11 = lVar11 + 1;
                if (bVar4 == 0) goto code_r0x00102192;
                if ((bVar4 == 0x20) || (bVar4 == 9)) goto code_r0x00102665;
                if (bVar4 == 0x2d) goto code_r0x00102192;
                pbVar20 = pbVar18 + 1;
              } while (bVar4 != 0x28);
            }
            *pbVar18 = 0;
            *(long *)(puVar16 + 0x40) = lVar11;
            *(byte **)(puVar16 + 0x38) = pbVar18;
            *(undefined8 *)(puVar16 + -8) = 0x1026ce;
            lVar9 = argmatch(pbVar21,algorithm_out_string,0);
            puVar19 = *(undefined **)(puVar16 + 0x38);
            lVar11 = *(long *)(puVar16 + 0x40);
            if (-1 < lVar9) {
              b2_algorithm = (uint)lVar9;
              goto code_r0x001026e7;
            }
          }
        }
      }
      else {
        *(ulong *)(puVar16 + 0x40) = uVar15;
        *(byte **)(puVar16 + 0x38) = pbVar21;
        if ((ulong)(*pbVar21 == 0x5c) + min_digest_line_length <= uVar8 - uVar15) {
          digest_hex_bytes = 0;
          *(undefined8 *)(puVar16 + -8) = 0x10235a;
          plVar13 = (long *)func_0x00101b90();
          pbVar21 = *(byte **)(puVar16 + 0x38);
          uVar15 = 0;
          cVar5 = '\0';
          do {
            cVar22 = cVar5;
            uVar10 = uVar15;
            uVar15 = uVar10 + 1;
            cVar5 = cVar25;
          } while ((*(byte *)(*plVar13 + 1 + (ulong)pbVar21[uVar10] * 2) & 0x10) != 0);
          if (((cVar22 != '\0') && (digest_hex_bytes = uVar10, uVar10 - 2 < 0x7f)) &&
             ((uVar10 & 1) == 0)) {
            param_2 = (undefined8 *)(*(long *)(puVar16 + 0x40) + uVar10);
            b2_length = uVar10 * 4;
            bVar4 = pbVar17[(long)param_2];
            if ((bVar4 != 0x20) && (bVar4 != 9)) goto code_r0x00102200;
            pbVar17[(long)param_2] = 0;
            *(byte **)(puVar16 + 0x38) = pbVar21;
            *(undefined8 *)(puVar16 + -8) = 0x1023e3;
            cVar5 = hex_digits();
            if (cVar5 != '\0') {
              lVar11 = (long)param_2 + 1;
              pbVar21 = *(byte **)(puVar16 + 0x38);
              if ((uVar8 - lVar11 != 1) &&
                 ((auVar29 = ZEXT1216(CONCAT48(bsd_reversed,lVar11)),
                  (pbVar17 + 1)[(long)param_2] == 0x20 ||
                  (auVar29 = ZEXT1216(CONCAT48(bsd_reversed,lVar11)),
                  (pbVar17 + 1)[(long)param_2] == 0x2a)))) goto code_r0x00102f87;
              if (bsd_reversed != 0) {
                bsd_reversed = 1;
                goto code_r0x0010242f;
              }
            }
          }
        }
      }
code_r0x00102200:
      *(long *)(puVar16 + 0x30) = *(long *)(puVar16 + 0x30) + 1;
      if (warn == '\0') goto code_r0x00102213;
      *(undefined8 *)(puVar16 + -8) = 0x102471;
      quotearg_n_style_colon(0,3,*(undefined8 *)(puVar16 + 0x28));
      *(undefined8 *)(puVar16 + -8) = 0x102487;
      uVar7 = func_0x001018b0(0,&UNK_00109d18,5);
      *(undefined8 *)(puVar16 + -8) = 0x1024a2;
      pbVar21 = pbVar23;
      func_0x00101ad0(0,0,uVar7);
      if ((*(byte *)puVar24 & 0x30) == 0) goto code_r0x0010221e;
code_r0x001024ad:
      *(undefined8 *)(puVar16 + -8) = 0x1024ba;
      func_0x001017f0(*(undefined8 *)(puVar16 + 0x88));
      param_2 = (undefined8 *)(ulong)(*puVar24 & 0x20);
      if ((*puVar24 & 0x20) == 0) {
        if (*(int *)(puVar16 + 0x4c) != 0) {
          *(undefined8 *)(puVar16 + -8) = 0x102917;
          iVar6 = rpl_fclose(puVar24);
          if (iVar6 != 0) goto code_r0x0010270d;
        }
        if (puVar16[0x50] == '\0') {
          *(undefined8 *)(puVar16 + -8) = 0x102935;
          pbVar17 = (byte *)quotearg_n_style_colon(0,3,*(undefined8 *)(puVar16 + 0x28));
          *(undefined8 *)(puVar16 + -8) = 0x10294b;
          uVar7 = func_0x001018b0(0,&UNK_00109d48,5);
          pbVar21 = &UNK_001091f0;
          *(undefined8 *)(puVar16 + -8) = 0x102963;
          func_0x00101ad0(0,0,uVar7);
        }
        else {
          if (status_only == '\0') {
            if (*(long *)(puVar16 + 0x30) != 0) {
              unaff_R15 = *(ulong *)(puVar16 + 0x30);
              pbVar21 = (byte *)0x5;
              *(undefined8 *)(puVar16 + -8) = 0x102515;
              uVar7 = func_0x00101b00(0,&UNK_00109db0,&UNK_00109d80,unaff_R15);
              *(undefined8 *)(puVar16 + -8) = 0x102526;
              func_0x00101ad0(0,0,uVar7);
            }
            if (*(long *)(puVar16 + 0x68) != 0) {
              unaff_R15 = *(ulong *)(puVar16 + 0x68);
              pbVar21 = (byte *)0x5;
              *(undefined8 *)(puVar16 + -8) = 0x102551;
              uVar7 = func_0x00101b00(0,&UNK_00109e10,&UNK_00109de0,unaff_R15);
              *(undefined8 *)(puVar16 + -8) = 0x102562;
              func_0x00101ad0(0,0,uVar7);
            }
            if (*(long *)(puVar16 + 0x70) != 0) {
              unaff_R15 = *(ulong *)(puVar16 + 0x70);
              pbVar21 = (byte *)0x5;
              *(undefined8 *)(puVar16 + -8) = 0x10258d;
              uVar7 = func_0x00101b00(0,&UNK_00109e70,&UNK_00109e40,unaff_R15);
              *(undefined8 *)(puVar16 + -8) = 0x10259e;
              func_0x00101ad0(0,0,uVar7);
            }
            if (ignore_missing == '\0') goto code_r0x001028ae;
            if (puVar16[0x7a] == '\0') {
              *(undefined8 *)(puVar16 + -8) = 0x102c8e;
              pbVar17 = (byte *)quotearg_n_style_colon(0,3,*(undefined8 *)(puVar16 + 0x28));
              *(undefined8 *)(puVar16 + -8) = 0x102ca4;
              uVar7 = func_0x001018b0(0,&UNK_00109376,5);
              *(undefined8 *)(puVar16 + -8) = 0x102cb5;
              func_0x00101ad0(0,0,uVar7);
              goto code_r0x001025da;
            }
          }
          else {
code_r0x001028ae:
            if (puVar16[0x7a] == '\0') goto code_r0x001025da;
          }
          if ((*(ulong *)(puVar16 + 0x68) | *(ulong *)(puVar16 + 0x70)) == 0) {
            param_2 = (undefined8 *)(ulong)(byte)(strict ^ 1 | *(long *)(puVar16 + 0x30) == 0);
          }
        }
code_r0x001025da:
        bVar4 = (byte)param_2 & 1;
      }
      else {
        *(undefined8 *)(puVar16 + -8) = 0x1028cf;
        param_2 = (undefined8 *)quotearg_n_style_colon(0,3,*(undefined8 *)(puVar16 + 0x28));
        *(undefined8 *)(puVar16 + -8) = 0x1028e5;
        uVar7 = func_0x001018b0(0,&UNK_00109367,5);
        *(undefined8 *)(puVar16 + -8) = 0x1028f6;
        func_0x00101ad0(0,0,uVar7);
        bVar4 = 0;
      }
code_r0x001025df:
      puVar16[0x79] = puVar16[0x79] & bVar4;
      while (*(long *)(puVar16 + 0x18) = *(long *)(puVar16 + 0x18) + 8,
            *(ulong *)(puVar16 + 0x60) < *(ulong *)(puVar16 + 0x18) ||
            *(ulong *)(puVar16 + 0x60) == *(ulong *)(puVar16 + 0x18)) {
code_r0x00102624:
        if (have_read_stdin == '\0') {
code_r0x00102631:
          uVar8 = unaff_R15;
          if (*(long *)(puVar16 + 0x138) == *(long *)(in_FS_OFFSET + 0x28)) {
            return (ulong)(puVar16[0x79] ^ 1);
          }
          goto code_r0x00102f82;
        }
        *(undefined8 *)(puVar16 + -8) = 0x102a8a;
        iVar6 = rpl_fclose(stdin);
        if (iVar6 != -1) goto code_r0x00102631;
        *(undefined8 *)(puVar16 + -8) = 0x102aa6;
        param_2 = (undefined8 *)func_0x001018b0(0,&UNK_0010931e,5);
        *(undefined8 *)(puVar16 + -8) = 0x102aae;
        puVar12 = (uint *)func_0x00101810();
        uVar2 = *puVar12;
        *(undefined8 *)(puVar16 + -8) = 0x102abf;
        func_0x00101ad0(1,(ulong)uVar2,param_2);
code_r0x00102abf:
        pbVar17 = (byte *)0x1;
        if (puVar16[0x78] == '\0') {
code_r0x001029f8:
          puVar19 = *(undefined **)(stdout + 0x28);
          if (*(undefined **)(stdout + 0x30) <= puVar19) {
            *(undefined8 *)(puVar16 + -8) = 0x102cdd;
            func_0x00101920();
            goto code_r0x00102cdd;
          }
          *(undefined **)(stdout + 0x28) = puVar19 + 1;
          *puVar19 = 0x5c;
          if (digest_hex_bytes >> 1 != 0) goto code_r0x001027f1;
code_r0x00102a28:
          puVar19 = *(undefined **)(stdout + 0x28);
          if (*(undefined **)(undefined8 *)(stdout + 0x30) < puVar19 ||
              *(undefined **)(undefined8 *)(stdout + 0x30) == puVar19) {
            *(undefined8 *)(puVar16 + -8) = 0x102edd;
            func_0x00101920();
          }
          else {
            *(undefined **)(stdout + 0x28) = puVar19 + 1;
            *puVar19 = 0x20;
          }
          puVar19 = *(undefined **)(stdout + 0x28);
          if (puVar19 < *(undefined **)(stdout + 0x30)) {
            uVar1 = puVar16[0x7b];
            *(undefined **)(stdout + 0x28) = puVar19 + 1;
            *puVar19 = uVar1;
          }
          else {
            *(undefined8 *)(puVar16 + -8) = 0x102ece;
            func_0x00101920(stdout,(ulong)*(uint *)(puVar16 + 0x7c));
          }
          *(undefined8 *)(puVar16 + -8) = 0x102a79;
          print_filename(*(undefined8 *)(puVar16 + 0x28),pbVar17);
        }
        else {
          puVar19 = *(undefined **)(stdout + 0x28);
          if (puVar19 < *(undefined **)(stdout + 0x30)) {
            pbVar23 = (byte *)(ulong)(byte)puVar16[0x78];
            pbVar17 = (byte *)0x1;
            *(undefined **)(stdout + 0x28) = puVar19 + 1;
            *puVar19 = 0x5c;
          }
          else {
            pbVar17 = (byte *)0x1;
            *(undefined8 *)(puVar16 + -8) = 0x102d01;
            func_0x00101920(stdout,0x5c);
            pbVar23 = (byte *)(ulong)(byte)puVar16[0x78];
          }
code_r0x0010296d:
          uVar7 = *(undefined8 *)(algorithm_out_string + (ulong)b2_algorithm * 8);
          *(undefined8 *)(puVar16 + -8) = 0x10298a;
          func_0x001019b0(uVar7,stdout);
          if (b2_length < 0x200) {
            *(undefined8 *)(puVar16 + -8) = 0x102e97;
            func_0x00101ab0(1,&UNK_0010938f);
          }
          *(undefined8 *)(puVar16 + -8) = 0x1029bb;
          func_0x00101a70(&UNK_00109394,1,2,stdout);
          *(undefined8 *)(puVar16 + -8) = 0x1029c7;
          print_filename(*(undefined8 *)(puVar16 + 0x28),pbVar17);
          *(undefined8 *)(puVar16 + -8) = 0x1029e4;
          func_0x00101a70(&UNK_00109397,1,4);
          if ((puVar16[0x78] == '\0') && ((char)pbVar23 != '\0')) goto code_r0x001029f8;
code_r0x00102cdd:
          if (digest_hex_bytes >> 1 != 0) {
code_r0x001027f1:
            pbVar23 = (byte *)0x0;
            do {
              bVar4 = *(byte *)((long)param_2 + (long)pbVar23);
              pbVar23 = pbVar23 + 1;
              *(undefined8 *)(puVar16 + -8) = 0x102814;
              func_0x00101ab0(1,&UNK_0010939c,(ulong)bVar4);
            } while (pbVar23 < (byte *)(digest_hex_bytes >> 1));
          }
          if (puVar16[0x78] == '\0') goto code_r0x00102a28;
        }
        bVar4 = delim;
        pbVar18 = *(byte **)(stdout + 0x28);
        if (pbVar18 < *(byte **)(stdout + 0x30)) {
          *(byte **)(stdout + 0x28) = pbVar18 + 1;
          *pbVar18 = bVar4;
          cVar5 = puVar16[0x79];
        }
        else {
          *(undefined8 *)(puVar16 + -8) = 0x102ea4;
          func_0x00101920(stdout,(ulong)delim);
          cVar5 = puVar16[0x79];
        }
code_r0x0010260a:
        puVar16[0x79] = cVar5;
      }
      goto code_r0x00101fb0;
    }
    if ((b2_length == 0) && (cVar25 == '\0')) {
      b2_length = 0x200;
    }
    digest_hex_bytes = b2_length >> 2;
    if ((puVar16[0x78] & (int)pbVar17 == 0) == 0) {
      if (delim == 10) goto code_r0x00102263;
      puVar19 = &UNK_00109b00;
      if (cVar25 == '\0') {
        if (ignore_missing == '\0') {
          if (status_only == '\0') goto code_r0x00101f2a;
code_r0x00102fc8:
          puVar19 = &UNK_00109c18;
        }
        else {
code_r0x00102fd9:
          puVar19 = &UNK_00109bd0;
        }
      }
    }
    else {
      puVar19 = &UNK_00109ad8;
    }
code_r0x00102290:
    *(undefined8 *)(puVar16 + -8) = 0x102297;
    uVar7 = func_0x001018b0(0,puVar19,5);
    *(undefined8 *)(puVar16 + -8) = 0x1022a5;
    func_0x00101ad0(0,0,uVar7);
  }
  else {
    if (iVar6 == 0x77) {
      status_only = '\0';
      warn = '\x01';
      quiet = '\0';
      goto code_r0x00101c50;
    }
    if (iVar6 < 0x78) {
      if (iVar6 == 0x62) {
        pbVar17 = (byte *)0x1;
      }
      else {
        if (iVar6 < 99) {
          if (iVar6 != -0x83) {
            if (iVar6 == -0x82) {
              *(undefined8 *)(puVar16 + -8) = 0x102f0d;
              usage(0);
              goto code_r0x00102f0d;
            }
            goto code_r0x00101cda;
          }
          *(undefined8 *)(puVar16 + -0x10) = 0;
          *(undefined8 *)(puVar16 + -0x18) = 0x101d5a;
          version_etc(stdout,&UNK_001091ea,&UNK_00109276,Version);
          *(undefined8 *)(puVar16 + -0x18) = 0x101d61;
          func_0x00101b30();
          puVar16 = puVar16 + -0x10;
code_r0x00101d68:
          pbVar17 = (byte *)0x0;
        }
        else {
          if (iVar6 != 0x6c) {
            if (iVar6 == 0x74) goto code_r0x00101d68;
            if (iVar6 != 99) goto code_r0x00101cda;
            goto code_r0x00101ce8;
          }
          *(undefined8 *)(puVar16 + -8) = 0x101e03;
          func_0x001018b0(0,&UNK_001092bb,5);
          *(undefined8 *)(puVar16 + -8) = 0x101e25;
          b2_length = xdectoumax(optarg,0,0xffffffffffffffff,&UNK_0010a4a1);
          puVar24 = optarg;
          if ((b2_length & 7) != 0) {
            *(undefined8 *)(puVar16 + -8) = 0x101e43;
            param_2 = (undefined8 *)quote(optarg);
            *(undefined8 *)(puVar16 + -8) = 0x101e59;
            uVar7 = func_0x001018b0(0,&UNK_001092ca,5);
            *(undefined8 *)(puVar16 + -8) = 0x101e6a;
            func_0x00101ad0(0,0,uVar7,param_2);
            *(undefined8 *)(puVar16 + -8) = 0x101e7d;
            uVar7 = func_0x001018b0(0,&UNK_001092dd,5);
            *(undefined8 *)(puVar16 + -8) = 0x101e8e;
            func_0x00101ad0(1,0,uVar7);
            goto code_r0x00101e90;
          }
        }
      }
      goto code_r0x00101c50;
    }
    if (iVar6 == 0x81) {
      status_only = '\x01';
      warn = '\0';
      quiet = '\0';
      goto code_r0x00101c50;
    }
    if (0x81 < iVar6) {
      if (iVar6 == 0x83) {
        strict = 1;
      }
      else {
        if (iVar6 < 0x83) {
          status_only = '\0';
          warn = '\0';
          quiet = '\x01';
        }
        else {
          if (iVar6 != 0x84) goto code_r0x00101cda;
          puVar16[0x78] = 1;
          pbVar17 = (byte *)0x1;
        }
      }
      goto code_r0x00101c50;
    }
    if (iVar6 == 0x7a) {
code_r0x00101e90:
      delim = 0;
      goto code_r0x00101c50;
    }
    if (iVar6 == 0x80) {
      ignore_missing = '\x01';
      goto code_r0x00101c50;
    }
  }
code_r0x00101cda:
  *(undefined8 *)(puVar16 + -8) = 0x101ce4;
  usage();
code_r0x00101ce8:
  cVar25 = '\x01';
  goto code_r0x00101c50;
code_r0x00102b50:
  pbVar21 = pbVar17 + lVar9 + 2;
  do {
    do {
      pbVar18 = pbVar21;
      pbVar21 = pbVar18 + 1;
    } while (*pbVar18 == 0x20);
  } while (*pbVar18 == 9);
  *(byte **)(puVar16 + 0x20) = pbVar18;
  *(undefined8 *)(puVar16 + -8) = 0x102b74;
  uVar15 = hex_digits();
  pbVar21 = *(byte **)(puVar16 + 0x20);
  goto code_r0x00102b79;
}