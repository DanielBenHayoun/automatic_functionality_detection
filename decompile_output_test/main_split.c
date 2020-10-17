
undefined8 split(ulong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  undefined uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int *piVar16;
  uint *puVar17;
  uint *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint *extraout_RDX;
  uint *puVar26;
  undefined8 *puVar27;
  uint **ppuVar28;
  ulong uVar29;
  undefined8 *puVar30;
  uint *puVar31;
  long lVar32;
  undefined *puVar33;
  byte *pbVar34;
  char *pcVar35;
  uint *puVar36;
  uint *puVar37;
  byte *pbVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  int iVar41;
  uint *puVar42;
  long in_FS_OFFSET;
  bool bVar43;
  bool bVar44;
  undefined auVar45 [16];
  uint *apuStack400 [3];
  undefined8 *puStack376;
  uint *puStack368;
  uint *puStack360;
  uint *apuStack352 [2];
  uint *puStack336;
  undefined8 *puStack328;
  uint *apuStack320 [3];
  uint *apuStack296 [2];
  byte abStack274 [2];
  uint *apuStack272 [26];
  uint *apuStack64 [2];
  
  bVar5 = 0;
  iVar9 = 0;
  ppuVar28 = &puStack376;
  apuStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  iVar7 = func_0x00101f00();
  puStack368 = SEXT48(iVar7);
  set_program_name(*param_2);
  func_0x00101e70(6,&UNK_0010a141);
  func_0x00101c30(&UNK_00108c73,&UNK_00108c9c);
  func_0x00101c10(&UNK_00108c73);
  atexit(close_stdout);
  puStack376 = (uint *)0x0;
  puStack360 = 0;
  apuStack320[1] = 0;
  infile = &UNK_00109c02;
  outbase = (uint *)&UNK_00108e7b;
  puVar40 = (undefined8 *)0;
  uVar10 = eolchar;
  pbVar38 = additional_suffix;
code_r0x00102098:
  additional_suffix = pbVar38;
  eolchar = uVar10;
  puVar39 = (undefined8 *)(ulong)optind;
  puVar22 = longopts;
  iVar7 = (int)(param_1 & 0xffffffff);
  if (optind == 0) {
    puVar39 = (undefined8 *)0x1;
  }
  ppuVar28[-1] = 0x1020c6;
  auVar45 = func_0x00101c80(param_1 & 0xffffffff,param_2,&UNK_00108cb4);
  pbVar12 = optarg;
  iVar8 = SUB164(auVar45,0);
  puVar42 = (uint *)(SUB168(auVar45,0) & 0xffffffff);
  if (iVar8 == -1) {
    if ((ppuVar28[2] != (uint *)0x0) && (filter_command != (byte *)0x0)) {
      puVar33 = &UNK_00109a48;
      goto code_r0x00103917;
    }
    if (iVar9 == 0) {
      *ppuVar28 = 1000;
      iVar9 = 3;
    }
    else {
      if (*ppuVar28 == (uint *)0x0) {
code_r0x00103c64:
        ppuVar28[-1] = 0x103c70;
        uVar20 = quote(&UNK_00108d61);
        ppuVar28[-1] = 0x103c86;
        uVar21 = func_0x00101c40(0,&UNK_00108cfd,5);
        ppuVar28[-1] = 0x103c9e;
        func_0x00101ea0(0,0,&UNK_00108dd8,uVar21,uVar20);
        ppuVar28[-1] = 0x103ca8;
        usage(1);
        goto code_r0x00103ca8;
      }
    }
    if ((int)eolchar < 0) {
      eolchar = 10;
    }
    uVar10 = iVar9 - 5;
    puVar39 = (undefined8 *)(ulong)uVar10;
    if (numeric_suffix_start == (byte *)0x0) {
      puVar22 = (undefined1 *)*ppuVar28;
      if (2 < uVar10) goto code_r0x001026cb;
    }
    else {
      suffix_auto = 0;
      puVar22 = (undefined1 *)SUB168(auVar45 >> 0x40,0);
      if (2 < uVar10) {
code_r0x001026cb:
        puVar40 = (undefined8 *)0x0;
        if (suffix_length == (undefined8 *)0x0) goto code_r0x001026dc;
        goto code_r0x0010299a;
      }
      ppuVar28[-1] = 0x1029be;
      iVar8 = xstrtoumax(numeric_suffix_start,0,10,ppuVar28 + 0xf,&UNK_0010a141);
      puVar22 = (undefined1 *)*ppuVar28;
      if (iVar8 == 0) {
        puVar37 = ppuVar28[0xf];
        if (((uint *)~(ulong)puVar22 < puVar37) || (puVar22 <= puVar37)) {
          puVar22 = (undefined1 *)*ppuVar28;
        }
        else {
code_r0x00103854:
          puVar22 = (undefined1 *)((long)puVar37 + (long)puVar22);
        }
      }
    }
    uVar24 = 0xffffffffffffffff;
    pcVar35 = suffix_alphabet;
    goto code_r0x00102942;
  }
  if (iVar8 == 0x65) {
code_r0x00102240:
    elide_empty_files = '\x01';
    uVar10 = eolchar;
    pbVar38 = additional_suffix;
    goto code_r0x00102098;
  }
  iVar41 = (int)puVar42;
  uVar10 = eolchar;
  pbVar38 = additional_suffix;
  if (iVar8 < 0x66) {
    if (iVar8 < 0x3a) {
      if (iVar8 < 0x30) {
        if (iVar8 == -0x83) {
          ppuVar28[-2] = 0;
          ppuVar28[-3] = 0x10222f;
          version_etc(stdout,&UNK_00108bf3,&UNK_00108c6f,Version,&UNK_00108dc6,&UNK_00108db2);
          ppuVar28[-3] = 0x102236;
          func_0x00101f20();
          ppuVar28 = ppuVar28 + -2;
          goto code_r0x00102240;
        }
        if (iVar8 == -0x82) {
          ppuVar28[-1] = 0x103854;
          usage(0);
          puVar37 = extraout_RDX;
          goto code_r0x00103854;
        }
        goto code_r0x0010392c;
      }
      if (iVar9 != 0) {
        if (iVar9 != 4) goto code_r0x00103ca8;
        if (((int)puVar40 == 0) || ((int)puVar40 == (int)puVar39)) {
          uVar24 = (ulong)*ppuVar28;
          if ((0x1999999999999999 < uVar24) ||
             (uVar25 = uVar24 * 10 + (long)(iVar41 + -0x30), uVar25 < uVar24)) {
            do {
              *(int *)(ppuVar28 + 1) = (int)puVar42;
              ppuVar28[-1] = 0x103b79;
              uVar20 = umaxtostr(*ppuVar28,ppuVar28 + 0x24);
              ppuVar28[-1] = 0x103b8f;
              uVar21 = func_0x00101c40(0,&UNK_001099c0,5);
              ppuVar28[-1] = 0x103ba8;
              func_0x00101ea0(1,0,uVar21,uVar20,(ulong)*(uint *)(ppuVar28 + 1));
code_r0x00103ba8:
              ppuVar28[-1] = 0x103bc7;
              func_0x00101cf0(&UNK_00108e0b,&UNK_00108ac4,0x362,__PRETTY_FUNCTION___7242);
code_r0x00103bc7:
              ppuVar28[-1] = 0x103bda;
              uVar20 = quotearg_n_style_colon(0,3,infile);
              ppuVar28[-1] = 0x103be2;
              puVar37 = (uint *)func_0x00101b70();
              uVar10 = *puVar37;
              ppuVar28[-1] = 0x103bfa;
              lVar23 = func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
code_r0x00103bfa:
              bVar43 = true;
code_r0x001030e6:
              if ((lVar23 < 0) || (bVar43)) goto code_r0x00103936;
              lVar23 = (long)*ppuVar28;
              lVar32 = 0;
              ppuVar28[-1] = 0x10310a;
              puVar39 = (undefined8 *)xmalloc(lVar23 << 5);
              *(undefined8 **)(ppuVar28 + 6) = puVar39;
              do {
                ppuVar28[-1] = 0x103117;
                next_file_name();
                lVar32 = lVar32 + 1;
                ppuVar28[-1] = 0x10312b;
                uVar20 = xstrdup();
                *(uint *)(puVar39 + 1) = 0xffffffff;
                *puVar39 = uVar20;
                puVar39[2] = 0;
                *(uint *)(puVar39 + 3) = 0;
                puVar39 = puVar39 + 4;
              } while (lVar32 != lVar23);
code_r0x0010314a:
              ppuVar28[1] = (uint *)0x1;
              ppuVar28[3] = (uint *)0x0;
              *(undefined *)(ppuVar28 + 7) = 0;
              *(undefined *)(ppuVar28 + 5) = 0;
              *(undefined *)(ppuVar28 + 10) = 0;
code_r0x0010316b:
              ppuVar28[-1] = 0x10317c;
              lVar23 = safe_read(0,ppuVar28[9],ppuVar28[8]);
              if (lVar23 == -1) goto code_r0x00103bc7;
              if (lVar23 != 0) {
                puVar37 = (uint *)((long)ppuVar28[9] + lVar23);
                puVar31 = ppuVar28[9];
joined_r0x0010319b:
                while (puVar31 != puVar37) {
                  puVar26 = (uint *)((long)puVar37 - (long)puVar31);
                  ppuVar28[-1] = 0x1031f3;
                  lVar23 = func_0x00101d50(puVar31,(ulong)eolchar,puVar26);
                  bVar43 = lVar23 != 0;
                  puVar36 = puVar37;
                  if (bVar43) {
                    puVar26 = (uint *)((long)(uint *)(lVar23 + 1U) - (long)puVar31);
                    puVar36 = (uint *)(lVar23 + 1U);
                  }
                  puVar42 = (uint *)(ulong)bVar43;
                  if (ppuVar28[2] != (uint *)0x0) {
                    if (ppuVar28[1] != ppuVar28[2]) goto code_r0x001031b3;
                    if (unbuffered == '\0') {
                      ppuVar28[-1] = 0x103324;
                      lVar23 = func_0x00101e40(puVar31,puVar26,1,stdout);
                      if (lVar23 != 1) {
                        ppuVar28[-1] = 0x10333a;
                        func_0x00101bf0(stdout);
                        ppuVar28[-1] = 0x10334d;
                        uVar20 = func_0x00101c40(0,&UNK_00108e29,5);
                        ppuVar28[-1] = 0x103355;
                        puVar31 = (uint *)func_0x00101b70();
                        uVar10 = *puVar31;
                        ppuVar28[-1] = 0x10336d;
                        puVar17 = (uint *)func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
                        goto code_r0x00103370;
                      }
                      goto code_r0x001031b3;
                    }
code_r0x00103440:
                    ppuVar28[-1] = 0x103450;
                    puVar31 = (uint *)full_write(1,puVar31,puVar26);
                    if (puVar31 == puVar26) goto code_r0x001031b3;
                    ppuVar28[-1] = 0x10346c;
                    uVar20 = func_0x00101c40(0,&UNK_00108e29,5);
                    ppuVar28[-1] = 0x103474;
                    puVar37 = (uint *)func_0x00101b70();
                    uVar10 = *puVar37;
                    ppuVar28[-1] = 0x10348c;
                    func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
code_r0x0010348c:
                    ppuVar28[-1] = 0x1034a6;
                    bytes_split(*ppuVar28,ppuVar28[9],ppuVar28[8],0xffffffffffffffff);
                    goto code_r0x00102f16;
                  }
                  puVar17 = ppuVar28[3];
                  ppuVar28[-1] = 0x103230;
                  bVar5 = ofile_open(ppuVar28[6],puVar17,*ppuVar28);
                  puVar40 = (undefined8 *)(ppuVar28[6] + (long)puVar17 * 8);
                  *(byte *)(ppuVar28 + 7) = *(byte *)(ppuVar28 + 7) | bVar5;
                  ppuVar28[-1] = 0x10323e;
                  puVar17 = (uint *)func_0x00101b70();
                  ppuVar28[4] = puVar17;
                  if (unbuffered == '\0') {
                    uVar20 = puVar40[2];
                    ppuVar28[-1] = 0x103264;
                    lVar23 = func_0x00101e40(puVar31,puVar26,1,uVar20);
                    puVar17 = ppuVar28[4];
                    if (lVar23 == 1) {
code_r0x00103273:
                      uVar6 = *(undefined *)(ppuVar28 + 5);
                      if (*puVar17 != 0x20 || filter_command == (byte *)0x0) {
                        uVar6 = 1;
                      }
                      *(undefined *)(ppuVar28 + 5) = uVar6;
                      goto code_r0x00103299;
                    }
code_r0x00103370:
                    if ((*puVar17 == 0x20) && (filter_command != (byte *)0x0))
                    goto code_r0x00103299;
                    uVar20 = *puVar40;
                    ppuVar28[-1] = 0x103392;
                    uVar20 = quotearg_n_style_colon(0,3,uVar20);
                    uVar10 = *ppuVar28[4];
                    ppuVar28[-1] = 0x1033af;
                    func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
code_r0x001033b0:
                    ppuVar28[-1] = 0x1033b9;
                    iVar9 = rpl_fclose();
                    if (iVar9 != 0) goto code_r0x0010398d;
                    puVar40[2] = 0;
                    *(uint *)(puVar40 + 1) = 0xfffffffe;
                  }
                  else {
                    uVar10 = *(uint *)(puVar40 + 1);
                    ppuVar28[-1] = 0x1033ef;
                    puVar18 = (uint *)full_write((ulong)uVar10,puVar31,puVar26);
                    puVar17 = ppuVar28[4];
                    if (puVar18 == puVar26) goto code_r0x00103273;
                    if ((*puVar17 != 0x20) || (filter_command == (byte *)0x0)) {
                      uVar20 = *puVar40;
                      ppuVar28[-1] = 0x10341f;
                      uVar20 = quotearg_n_style_colon(0,3,uVar20);
                      uVar10 = *ppuVar28[4];
                      ppuVar28[-1] = 0x10343c;
                      func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
                      goto code_r0x00103440;
                    }
code_r0x00103299:
                    if (*(char *)(ppuVar28 + 7) != '\0') goto code_r0x001033b0;
                  }
                  puVar31 = puVar36;
                  if ((bVar43) &&
                     (ppuVar28[3] = (uint *)((long)ppuVar28[3] + 1), ppuVar28[3] == *ppuVar28)) {
                    if (*(char *)(ppuVar28 + 5) == '\0') goto code_r0x00103531;
                    uVar6 = *(undefined *)(ppuVar28 + 5);
                    ppuVar28[3] = (uint *)0x0;
                    *(undefined *)(ppuVar28 + 5) = 0;
                    *(undefined *)(ppuVar28 + 10) = uVar6;
                  }
                }
                goto code_r0x0010316b;
              }
code_r0x001038ad:
              if (ppuVar28[2] == (uint *)0x0) {
                if (*(char *)(ppuVar28 + 10) == '\0') {
                  iVar9 = *(int *)(ppuVar28 + 3);
                }
                else {
code_r0x00103531:
                  iVar9 = *(int *)ppuVar28;
                }
                puVar39 = (undefined8 *)ppuVar28[6];
                uVar24 = (ulong)*ppuVar28;
                uVar25 = 0;
                do {
                  if (((ulong)(long)iVar9 <= uVar25) && (elide_empty_files == '\0')) {
                    ppuVar28[-1] = 0x10355f;
                    ofile_open(ppuVar28[6],uVar25,uVar24);
                  }
                  uVar10 = *(uint *)(puVar39 + 1);
                  if (-1 < (int)uVar10) {
                    uVar2 = *(uint *)(puVar39 + 3);
                    uVar20 = puVar39[2];
                    uVar21 = *puVar39;
                    ppuVar28[-1] = 0x103576;
                    closeout(uVar20,(ulong)uVar10,(ulong)uVar2,uVar21);
                  }
                  uVar25 = uVar25 + 1;
                  *(uint *)(puVar39 + 1) = 0xfffffffe;
                  puVar39 = puVar39 + 4;
                } while (uVar25 != uVar24);
              }
code_r0x00102f16:
              ppuVar28[-1] = 0x102f1d;
              iVar9 = func_0x00101d20(0);
              if (iVar9 == 0) {
                ppuVar28[-1] = 0x102f3f;
                closeout(0,(ulong)output_desc,(ulong)filter_pid,outfile);
                if (ppuVar28[0x27] == *(uint **)(in_FS_OFFSET + 0x28)) {
                  return 0;
                }
code_r0x00103b04:
                ppuVar28[-1] = 0x103b09;
                func_0x00101c70();
              }
              ppuVar28[-1] = 0x103b1c;
              uVar20 = quotearg_n_style_colon(0,3,infile);
              ppuVar28[-1] = 0x103b24;
              puVar37 = (uint *)func_0x00101b70();
              uVar10 = *puVar37;
              ppuVar28[-1] = 0x103b3c;
              func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
code_r0x00103b3c:
              ppuVar28[-1] = 0x103b4f;
              uVar20 = func_0x00101c40(0,&UNK_00109a80,5);
              ppuVar28[-1] = 0x103b63;
              func_0x00101ea0(1,0,uVar20,puVar40);
            } while( true );
          }
          *(ulong *)ppuVar28 = uVar25;
          puVar40 = puVar39;
          goto code_r0x00102098;
        }
      }
      iVar9 = 4;
      *(long *)ppuVar28 = (long)(iVar41 + -0x30);
      puVar40 = puVar39;
      goto code_r0x00102098;
    }
    if (iVar8 == 0x61) {
      ppuVar28[-1] = 0x1024d3;
      uVar20 = func_0x00101c40(0,&UNK_00108ccf,5);
      ppuVar28[-1] = 0x1024f8;
      suffix_length = (undefined8 *)xdectoumax(optarg,0,0x1fffffffffffffff,&UNK_0010a141,uVar20,0);
      uVar10 = eolchar;
      pbVar38 = additional_suffix;
      goto code_r0x00102098;
    }
    if (iVar8 < 0x62) {
      if (iVar8 != 0x43) goto code_r0x0010392c;
      if (iVar9 != 0) goto code_r0x00103ca8;
      iVar9 = 2;
      ppuVar28[-1] = 0x10248b;
      uVar20 = func_0x00101c40(0,&UNK_00108ce5,5);
      ppuVar28[-1] = 0x1024b3;
      uVar20 = xdectoumax(optarg,1,0x7fffffffffffffff,multipliers_7397,uVar20,0);
      *ppuVar28 = uVar20;
      uVar10 = eolchar;
      pbVar38 = additional_suffix;
      goto code_r0x00102098;
    }
    if (iVar8 != 0x62) {
      if (iVar8 == 100) {
        suffix_alphabet = "0123456789";
        goto code_r0x001025c9;
      }
      goto code_r0x0010392c;
    }
    if (iVar9 == 0) {
      iVar9 = 1;
      ppuVar28[-1] = 0x102163;
      uVar20 = func_0x00101c40(0,&UNK_00108ce5,5);
      ppuVar28[-1] = 0x10218b;
      uVar20 = xdectoumax(optarg,1,0x7fffffffffffffff,multipliers_7397,uVar20,0);
      *ppuVar28 = uVar20;
      uVar10 = eolchar;
      pbVar38 = additional_suffix;
      goto code_r0x00102098;
    }
  }
  else {
    if (iVar8 == 0x78) {
      suffix_alphabet = "0123456789abcdef";
code_r0x001025c9:
      if (optarg != (byte *)0x0) {
        uVar24 = 0xffffffffffffffff;
        pbVar38 = optarg;
        do {
          if (uVar24 == 0) break;
          uVar24 = uVar24 - 1;
          bVar4 = *pbVar38;
          pbVar38 = pbVar38 + (ulong)bVar5 * -2 + 1;
        } while (bVar4 != 0);
        ppuVar28[3] = (uint *)(~uVar24 - 1);
        ppuVar28[-1] = 0x102602;
        puVar42 = (uint *)func_0x00101d40(optarg,suffix_alphabet);
        if (ppuVar28[3] != puVar42) {
          *(int *)ppuVar28 = iVar41;
          ppuVar28[-1] = 0x103c10;
          uVar20 = quote(pbVar12);
          puVar33 = &UNK_00109a18;
          if (*(int *)ppuVar28 == 100) {
            ppuVar28[-1] = 0x103c3b;
            uVar21 = func_0x00101c40(0,&UNK_001099e8,5);
            goto code_r0x00103a83;
          }
          goto code_r0x00103a7c;
        }
        uVar10 = eolchar;
        pbVar38 = additional_suffix;
        numeric_suffix_start = pbVar12;
        if (*pbVar12 == 0x30) {
          bVar4 = pbVar12[1];
          pbVar12 = pbVar12 + 1;
          while ((bVar4 != 0 && (optarg = pbVar12, numeric_suffix_start = pbVar12, *pbVar12 == 0x30)
                 )) {
            bVar4 = pbVar12[1];
            pbVar12 = pbVar12 + 1;
          }
        }
      }
      goto code_r0x00102098;
    }
    if (0x78 < iVar8) {
      if (iVar8 == 0x81) {
        filter_command = optarg;
      }
      else {
        if (iVar8 < 0x82) {
          if (iVar41 != 0x80) goto code_r0x0010392c;
          verbose = 1;
        }
        else {
          if (iVar8 == 0x82) {
            ppuVar28[-1] = 0x10251b;
            uVar20 = func_0x00101c40(0,&UNK_00108d9c,5);
            ppuVar28[-1] = 0x102541;
            puVar42 = (uint *)xdectoumax(optarg,1,~(ulong)ppuVar28[1],multipliers_7397,uVar20,0);
            ppuVar28[8] = puVar42;
            uVar10 = eolchar;
            pbVar38 = additional_suffix;
          }
          else {
            if (iVar8 != 0x83) goto code_r0x0010392c;
            pbVar38 = optarg;
            ppuVar28[-1] = 0x1021ce;
            pbVar34 = (byte *)last_component();
            uVar10 = eolchar;
            if (pbVar12 != pbVar34) goto code_r0x00103a9e;
          }
        }
      }
      goto code_r0x00102098;
    }
    if (iVar8 != 0x6e) {
      if (iVar8 < 0x6f) {
        if (iVar8 != 0x6c) goto code_r0x0010392c;
        if (iVar9 != 0) goto code_r0x00103ca8;
        iVar9 = 3;
        ppuVar28[-1] = 0x102313;
        uVar20 = func_0x00101c40(0,&UNK_00108cfd,5);
        ppuVar28[-1] = 0x102338;
        uVar20 = xdectoumax(optarg,1,0xffffffffffffffff,&UNK_0010a141,uVar20,0);
        *ppuVar28 = uVar20;
        uVar10 = eolchar;
        pbVar38 = additional_suffix;
      }
      else {
        if (iVar8 == 0x74) {
          uVar10 = SEXT14((char)*optarg);
          if (*optarg == 0) {
            ppuVar28[-1] = 0x103c53;
            uVar20 = func_0x00101c40(0,&UNK_00108d49,5);
            ppuVar28[-1] = 0x103c64;
            func_0x00101ea0(1,0,uVar20);
            goto code_r0x00103c64;
          }
          if (optarg[1] != 0) {
            ppuVar28[-1] = 0x1022ba;
            iVar7 = func_0x00101da0(optarg,&UNK_00108d60);
            if (iVar7 != 0) goto code_r0x00103cdd;
            uVar10 = 0;
          }
          pbVar38 = additional_suffix;
          if ((-1 < (int)eolchar) && (eolchar != uVar10)) {
            ppuVar28[-1] = 0x103ccc;
            uVar20 = func_0x00101c40(0,&UNK_00109998,5);
            ppuVar28[-1] = 0x103cdd;
            func_0x00101ea0(1,0,uVar20);
code_r0x00103cdd:
            ppuVar28[-1] = 0x103ce5;
            uVar20 = quote(pbVar12);
            ppuVar28[-1] = 0x103cfb;
            uVar21 = func_0x00101c40(0,&UNK_00108d63,5);
            ppuVar28[-1] = 0x103d0f;
            auVar45 = func_0x00101ea0(1,0,uVar21,uVar20);
            uVar20 = *ppuVar28;
            uVar29 = (ulong)(ppuVar28 + 1) & 0xfffffffffffffff0;
            *(undefined8 *)(uVar29 - 8) = SUB168(auVar45,0);
            *(ulong *)(uVar29 - 0x10) = uVar29 - 8;
            *(undefined8 *)(uVar29 - 0x18) = 0x103d3a;
            (*(code *)PTR___libc_start_main_0030bfd8)
                      (main,uVar20,ppuVar28 + 1,__libc_csu_init,__libc_csu_fini,
                       SUB168(auVar45 >> 0x40,0));
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
        }
        else {
          if (iVar8 != 0x75) goto code_r0x0010392c;
          unbuffered = '\x01';
        }
      }
      goto code_r0x00102098;
    }
    if (iVar9 == 0) {
      ppuVar28[-1] = 0x102356;
      plVar11 = (long *)func_0x00101fb0();
      pbVar38 = optarg;
      do {
        optarg = pbVar38;
        pbVar12 = optarg;
        bVar43 = false;
        bVar44 = (*(byte *)(*plVar11 + 1 + (ulong)*optarg * 2) & 0x20) == 0;
        pbVar38 = optarg + 1;
      } while (!bVar44);
      lVar23 = 2;
      pbVar38 = optarg;
      pbVar34 = &UNK_00108d15;
      do {
        if (lVar23 == 0) break;
        lVar23 = lVar23 + -1;
        bVar43 = *pbVar38 < *pbVar34;
        bVar44 = *pbVar38 == *pbVar34;
        pbVar38 = pbVar38 + (ulong)bVar5 * -2 + 1;
        pbVar34 = pbVar34 + (ulong)bVar5 * -2 + 1;
      } while (bVar44);
      if ((!bVar43 && !bVar44) == bVar43) {
        optarg = optarg + 2;
        iVar9 = 7;
      }
      else {
        iVar9 = 5;
        ppuVar28[-1] = 0x10259d;
        iVar7 = func_0x00101b80(optarg,&UNK_00108d18,2);
        if (iVar7 == 0) {
          optarg = pbVar12 + 2;
          iVar9 = 6;
        }
      }
      ppuVar28[-1] = 0x1023c2;
      pbVar12 = (byte *)func_0x00101cb0(optarg,0x2f);
      if (pbVar12 == (byte *)0x0) {
        ppuVar28[-1] = 0x1028af;
        uVar20 = func_0x00101c40(0,&UNK_00108d1b,5);
        ppuVar28[-1] = 0x1028d1;
        uVar20 = xdectoumax(optarg,1,0xffffffffffffffff,&UNK_0010a141,uVar20,0);
        *ppuVar28 = uVar20;
        uVar10 = eolchar;
        pbVar38 = additional_suffix;
      }
      else {
        ppuVar28[-1] = 0x1023e1;
        uVar20 = func_0x00101c40(0,&UNK_00108d1b,5);
        ppuVar28[-1] = 0x102400;
        uVar20 = xdectoumax(pbVar12 + 1,1,0xffffffffffffffff,&UNK_0010a141,uVar20,0);
        *ppuVar28 = uVar20;
        uVar10 = eolchar;
        pbVar38 = additional_suffix;
        if (pbVar12 != optarg) {
          *pbVar12 = 0;
          ppuVar28[-1] = 0x10242c;
          uVar21 = func_0x00101c40(0,&UNK_00108d34,5);
          ppuVar28[-1] = 0x10244d;
          puVar42 = (uint *)xdectoumax(optarg,1,uVar20,&UNK_0010a141,uVar21,0);
          ppuVar28[2] = puVar42;
          uVar10 = eolchar;
          pbVar38 = additional_suffix;
        }
      }
      goto code_r0x00102098;
    }
  }
code_r0x00103ca8:
  puVar33 = &UNK_00109970;
  goto code_r0x00103917;
  while( true ) {
    uVar24 = uVar24 - 1;
    cVar1 = *pcVar35;
    pcVar35 = pcVar35 + (ulong)bVar5 * -2 + 1;
    if (cVar1 == '\0') break;
code_r0x00102942:
    if (uVar24 == 0) break;
  }
  uVar25 = ~uVar24 - 1;
  uVar24 = (ulong)puVar22 / uVar25;
  puVar22 = (undefined1 *)((ulong)puVar22 % uVar25);
  bVar43 = (uint *)puVar22 != (uint *)0x0;
  if (uVar24 != 0) {
    uVar13 = uVar24;
    uVar24 = 0;
    do {
      uVar24 = uVar24 + 1;
      uVar14 = uVar13 / uVar25;
      puVar22 = (undefined1 *)(uVar13 % uVar25);
      uVar13 = uVar14;
    } while (uVar14 != 0);
  }
  suffix_auto = 0;
  puVar40 = (undefined8 *)(bVar43 + uVar24);
  if (suffix_length == (undefined8 *)0x0) {
code_r0x001026dc:
    suffix_length = (undefined8 *)0x2;
    if ((undefined8 *)0x1 < puVar40) {
      suffix_length = puVar40;
    }
  }
  else {
    if (suffix_length < puVar40) goto code_r0x00103b3c;
code_r0x0010299a:
    suffix_auto = 0;
  }
  uVar10 = optind;
  if ((int)optind < iVar7) {
    uVar10 = optind + 1;
    puVar22 = (undefined1 *)(ulong)uVar10;
    infile = (undefined *)param_2[(long)(int)optind];
    if ((int)uVar10 < iVar7) {
      puVar22 = (undefined1 *)param_2[(long)(int)optind + 1];
      uVar10 = optind + 2;
      optind = uVar10;
      outbase = (uint *)puVar22;
      if ((int)uVar10 < iVar7) goto code_r0x00103a62;
    }
  }
  optind = uVar10;
  puVar3 = infile;
  if (numeric_suffix_start != (byte *)0x0) {
    uVar24 = 0xffffffffffffffff;
    puVar22 = (undefined1 *)0x5;
    pbVar38 = numeric_suffix_start;
    do {
      if (uVar24 == 0) break;
      uVar24 = uVar24 - 1;
      bVar4 = *pbVar38;
      pbVar38 = pbVar38 + (ulong)bVar5 * -2 + 1;
    } while (bVar4 != 0);
    puVar33 = &UNK_00109ab0;
    if (suffix_length < (undefined8 *)(~uVar24 - 1)) {
code_r0x00103917:
      ppuVar28[-1] = 0x10391e;
      uVar20 = func_0x00101c40(0,puVar33,5);
      ppuVar28[-1] = 0x10392c;
      func_0x00101ea0(0,0,uVar20);
code_r0x0010392c:
      ppuVar28[-1] = 0x103936;
      usage(1);
code_r0x00103936:
      ppuVar28[-1] = 0x10393b;
      xalloc_die();
code_r0x0010393b:
      ppuVar28[-1] = 0x10395a;
      func_0x00101cf0(&UNK_00109b10,&UNK_00108ac4,0x3e0,__PRETTY_FUNCTION___7285);
code_r0x0010395a:
      ppuVar28[-1] = 0x10396d;
      uVar20 = quotearg_n_style_colon(0,3,infile);
      ppuVar28[-1] = 0x103975;
      puVar42 = (uint *)func_0x00101b70();
      uVar10 = *puVar42;
      ppuVar28[-1] = 0x10398d;
      func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
code_r0x0010398d:
      uVar20 = *puVar40;
      ppuVar28[-1] = 0x10399c;
      uVar20 = quotearg_n_style_colon(0,3,uVar20);
      uVar10 = *ppuVar28[4];
      ppuVar28[-1] = 0x1039b9;
      func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
      goto code_r0x001039b9;
    }
  }
  ppuVar28[-1] = 0x102787;
  iVar7 = func_0x00101da0(infile,&UNK_00109c02,puVar22);
  if (iVar7 == 0) {
code_r0x001027a1:
    ppuVar28[-1] = 0x1027b4;
    iVar7 = func_0x00101e20(1,0,in_stat_buf);
    if (iVar7 == 0) {
      if (ppuVar28[8] == (uint *)0x0) {
        puVar37 = (uint *)0x20000;
        if (in_stat_buf._56_8_ + -0x8000 < (uint *)0x1ffffffffffe0001) {
          puVar37 = in_stat_buf._56_8_;
        }
        ppuVar28[8] = puVar37;
      }
      puVar37 = ppuVar28[1];
      puVar30 = (undefined8 *)0xffffffffffffffff;
      ppuVar28[-1] = 0x102803;
      lVar23 = xmalloc((long)ppuVar28[8] + (long)puVar37);
      uVar24 = lVar23 + -1 + (long)puVar37;
      ppuVar28[3] = (uint *)0x7fffffffffffffff;
      ppuVar28[9] = (uint *)(uVar24 - uVar24 % (ulong)puVar37);
      if ((uint)puVar39 < 2) {
        ppuVar28[-1] = 0x1029fd;
        lVar23 = func_0x00101ce0(0,0,1);
        puVar15 = (undefined8 *)0x0;
        if (lVar23 < 0) {
          ppuVar28[-1] = 0x102f6f;
          piVar16 = (int *)func_0x00101b70();
          puVar39 = puVar15;
          if (*piVar16 == 0x1d) {
            *piVar16 = 0;
          }
        }
        else {
          puVar40 = (undefined8 *)ppuVar28[8];
          puVar42 = ppuVar28[9];
          while( true ) {
            ppuVar28[-1] = 0x102a44;
            lVar32 = safe_read(0,(long)puVar42 + (long)puVar15,
                               (undefined8 *)((long)puVar40 - (long)puVar15));
            if (lVar32 == 0) goto code_r0x00102a49;
            puVar39 = puVar15;
            if (lVar32 == -1) break;
            puVar15 = (undefined8 *)((long)puVar15 + lVar32);
            puVar39 = puVar15;
            if (puVar40 <= puVar15) goto code_r0x001037b5;
          }
        }
code_r0x00102f7a:
        ppuVar28[-1] = 0x102f8d;
        puVar31 = (uint *)quotearg_n_style_colon(0,3,infile);
        ppuVar28[-1] = 0x102fa3;
        puVar37 = (uint *)func_0x00101c40(0,&UNK_00109af0,5);
        ppuVar28[-1] = 0x102fab;
        puVar36 = (uint *)func_0x00101b70();
        uVar10 = *puVar36;
        ppuVar28[-1] = 0x102fbf;
        func_0x00101ea0(1,(ulong)uVar10,puVar37,puVar31);
        goto code_r0x00102fc0;
      }
code_r0x00102831:
      if (filter_command != (byte *)0x0) {
        ppuVar28[-1] = 0x102847;
        func_0x00101db0(newblocked);
        ppuVar28[-1] = 0x10285b;
        func_0x00101bc0(0xd,0,ppuVar28 + 0x10);
        if (ppuVar28[0x10] != (uint *)0x1) {
          ppuVar28[-1] = 0x102877;
          func_0x00101f90(newblocked,0xd);
        }
        ppuVar28[-1] = 0x10288c;
        func_0x00101b40(0,newblocked,oldblocked);
      }
      switch(iVar9) {
      case 2:
        *(undefined *)(ppuVar28 + 2) = 0;
        ppuVar28[3] = (uint *)0x0;
        puVar36 = (uint *)0x0;
        ppuVar28[1] = (uint *)0x0;
        puVar39 = (undefined8 *)0x0;
        goto code_r0x00102b50;
      case 3:
      case 4:
        puVar42 = *ppuVar28;
        puVar37 = (uint *)0x0;
        uVar20 = 1;
        while( true ) {
          ppuVar28[-1] = 0x102a9e;
          puVar31 = (uint *)safe_read(0,ppuVar28[9],ppuVar28[8]);
          ppuVar28[1] = puVar31;
          if (puVar31 == (uint *)0xffffffffffffffff) break;
          puVar39 = (undefined8 *)ppuVar28[9];
          uVar24 = (ulong)eolchar;
          puVar30 = (undefined8 *)((long)ppuVar28[1] + (long)puVar39);
          *(char *)puVar30 = (char)eolchar;
          puVar40 = puVar39;
          while( true ) {
            ppuVar28[-1] = 0x102ae5;
            puVar39 = (undefined8 *)
                      func_0x00101d50(puVar39,uVar24,(long)puVar30 + (1 - (long)puVar39));
            if (puVar30 == puVar39) break;
            puVar37 = (uint *)((long)puVar37 + 1);
            puVar39 = (undefined8 *)((long)puVar39 + 1);
            if (puVar42 <= puVar37) {
              *(undefined8 **)ppuVar28 = puVar39;
              puVar37 = (uint *)0x0;
              ppuVar28[-1] = 0x102b13;
              cwrite(uVar20,puVar40,(undefined8 *)((long)puVar39 - (long)puVar40));
              puVar39 = (undefined8 *)*ppuVar28;
              uVar24 = (ulong)eolchar;
              uVar20 = 1;
              puVar40 = puVar39;
            }
          }
          uVar21 = uVar20;
          if (puVar30 != puVar40) {
            uVar21 = 0;
            ppuVar28[-1] = 0x10307a;
            cwrite(uVar20,puVar40,(undefined8 *)((long)puVar30 - (long)puVar40));
          }
          uVar20 = uVar21;
          if (ppuVar28[1] == (uint *)0x0) goto code_r0x00102f16;
        }
        goto code_r0x0010395a;
      case 5:
        if (ppuVar28[2] == (uint *)0x0) {
          ppuVar28[-1] = 0x102f16;
          bytes_split((ulong)ppuVar28[3] / (ulong)*ppuVar28,ppuVar28[9],ppuVar28[8],puVar30);
          goto code_r0x00102f16;
        }
        puVar37 = *ppuVar28;
        if ((puVar37 <= ppuVar28[2] && ppuVar28[2] != puVar37) || (ppuVar28[3] < puVar37))
        goto code_r0x0010393b;
        puVar37 = ppuVar28[2];
        uVar24 = (ulong)ppuVar28[3] / (ulong)*ppuVar28;
        puVar27 = (undefined8 *)(((long)puVar37 - 1U) * uVar24);
        if (puVar37 != *ppuVar28) {
          ppuVar28[3] = (uint *)(uVar24 * (long)puVar37);
        }
        if (puVar30 <= puVar27) {
          puVar15 = (undefined8 *)0xffffffffffffffff;
          ppuVar28[-1] = 0x103779;
          lVar23 = func_0x00101ce0(0,puVar27,1);
          if (-1 < lVar23) goto code_r0x001035f4;
          ppuVar28[-1] = 0x103795;
          lVar23 = quotearg_n_style_colon(0,3,infile);
          ppuVar28[-1] = 0x10379d;
          puVar37 = (uint *)func_0x00101b70();
          uVar10 = *puVar37;
          ppuVar28[-1] = 0x1037b5;
          func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc);
          iVar9 = iVar9 + -2;
code_r0x001037b5:
          puVar40 = in_stat_buf._48_8_;
          if (in_stat_buf._48_8_ != (undefined8 *)0x0) {
            puVar30 = (undefined8 *)(lVar23 + (long)puVar15);
            if (((in_stat_buf._24_4_ & 0xd000) != 0x8000) ||
               ((long)in_stat_buf._48_8_ < (long)puVar30)) {
              ppuVar28[-1] = 0x1037e9;
              puVar40 = (undefined8 *)func_0x00101ce0(0,0,2);
              if ((long)puVar40 < 0) goto code_r0x00102f7a;
              if (puVar30 != puVar40) {
                ppuVar28[-1] = 0x103806;
                lVar23 = func_0x00101ce0(0,puVar30,0);
                if (lVar23 < 0) goto code_r0x00102f7a;
                if ((long)puVar40 < (long)puVar30) {
                  puVar40 = puVar30;
                }
              }
            }
            puVar40 = (undefined8 *)((long)puVar40 - (long)puVar30);
            puVar15 = (undefined8 *)((long)puVar40 + (long)puVar15);
            puVar39 = puVar15;
            if (puVar15 == (undefined8 *)0x7fffffffffffffff) goto code_r0x00103832;
code_r0x00102a49:
            puVar39 = puVar15;
            if (-1 < (long)puVar15) goto code_r0x00102a52;
            goto code_r0x00102f7a;
          }
code_r0x00103832:
          ppuVar28[-1] = 0x103837;
          puVar19 = (undefined4 *)func_0x00101b70();
          *puVar19 = 0x4b;
          goto code_r0x00102f7a;
        }
        puVar15 = (undefined8 *)((long)puVar30 - (long)puVar27);
        ppuVar28[-1] = 0x1035f4;
        func_0x00101e90(ppuVar28[9],(long)puVar27 + (long)ppuVar28[9],puVar15);
code_r0x001035f4:
        puVar40 = (undefined8 *)ppuVar28[3];
        puVar42 = ppuVar28[9];
        puVar36 = (uint *)0xffffffffffffffff;
        goto code_r0x00103605;
      case 6:
        puVar37 = *ppuVar28;
        if (puVar37 <= ppuVar28[2] && ppuVar28[2] != puVar37) goto code_r0x00103ba8;
        if (ppuVar28[3] < puVar37) goto code_r0x00103ba8;
        ppuVar28[1] = (uint *)((ulong)ppuVar28[3] / (ulong)*ppuVar28);
        if (ppuVar28[2] < (uint *)0x2) {
code_r0x0010374c:
          ppuVar28[4] = (uint *)0x0;
          puVar37 = (uint *)0x1;
          puVar39 = (undefined8 *)((long)ppuVar28[1] - 1);
        }
        else {
          puVar37 = (uint *)((long)ppuVar28[2] + -1);
          puVar39 = (undefined8 *)
                    ((long)(uint *)((ulong)ppuVar28[3] / (ulong)*ppuVar28) * (long)puVar37 + -1);
          if (puVar39 < puVar30) {
            puVar30 = (undefined8 *)((long)puVar30 - (long)puVar39);
            ppuVar28[-1] = 0x102d61;
            func_0x00101e90(ppuVar28[9],(long)ppuVar28[9] + (long)puVar39,puVar30);
            *(undefined8 **)(ppuVar28 + 4) = puVar39;
          }
          else {
            puVar15 = (undefined8 *)((long)puVar39 - (long)puVar30);
            puVar30 = (undefined8 *)0xffffffffffffffff;
            ppuVar28[-1] = 0x10370b;
            lVar23 = func_0x00101ce0(0,puVar15,1);
            *(undefined8 **)(ppuVar28 + 4) = puVar39;
            if (lVar23 < 0) {
              ppuVar28[-1] = 0x10372c;
              uVar20 = quotearg_n_style_colon(0,3,infile);
              ppuVar28[-1] = 0x103734;
              puVar37 = (uint *)func_0x00101b70();
              uVar10 = *puVar37;
              ppuVar28[-1] = 0x10374c;
              func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
              goto code_r0x0010374c;
            }
          }
        }
        puVar31 = ppuVar28[2];
        *(undefined *)((long)ppuVar28 + 0x67) = 0;
        *(undefined *)(ppuVar28 + 10) = 1;
        ppuVar28[0xd] = (uint *)((long)ppuVar28[3] - 1);
        break;
      case 7:
        if (ppuVar28[2] != (uint *)0x0) goto code_r0x0010314a;
        bVar43 = false;
        lVar23 = SUB168(ZEXT816(0x20) * ZEXT816(*ppuVar28),0);
        if (SUB168(ZEXT816(0x20) * ZEXT816(*ppuVar28) >> 0x40,0) != 0) goto code_r0x00103bfa;
        goto code_r0x001030e6;
      default:
        goto code_r0x0010348c;
      }
      goto code_r0x00102d83;
    }
    goto code_r0x001039ec;
  }
  ppuVar28[-1] = 0x102799;
  iVar7 = fd_reopen(0,puVar3,0,0);
  if (-1 < iVar7) goto code_r0x001027a1;
  goto code_r0x00103a1f;
code_r0x00102d83:
  if (ppuVar28[3] == ppuVar28[4] || (long)ppuVar28[3] < (long)ppuVar28[4]) {
code_r0x001038d6:
    if (*(char *)((long)ppuVar28 + 0x67) != '\0') {
      puVar37 = (uint *)((long)puVar37 + 1);
    }
    if (ppuVar28[2] != (uint *)0x0) goto code_r0x00102f16;
    do {
      if (*ppuVar28 <= puVar37 && puVar37 != *ppuVar28) goto code_r0x00102f16;
      puVar37 = (uint *)((long)puVar37 + 1);
      ppuVar28[-1] = 0x103900;
      cwrite(1,0,0);
    } while( true );
  }
  if (puVar30 == (undefined8 *)0xffffffffffffffff) {
    ppuVar28[-1] = 0x10386d;
    puVar30 = (undefined8 *)safe_read(0,ppuVar28[9],ppuVar28[8]);
    if (puVar30 == (undefined8 *)0xffffffffffffffff) {
      ppuVar28[-1] = 0x10388d;
      uVar20 = quotearg_n_style_colon(0,3,infile);
      ppuVar28[-1] = 0x103895;
      puVar37 = (uint *)func_0x00101b70();
      uVar10 = *puVar37;
      ppuVar28[-1] = 0x1038ad;
      func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
      goto code_r0x001038ad;
    }
  }
  if (puVar30 == (undefined8 *)0x0) goto code_r0x001038d6;
  puVar36 = ppuVar28[9];
  *(undefined *)((long)ppuVar28 + 0x67) = 0;
  if ((undefined8 *)((long)ppuVar28[3] - (long)ppuVar28[4]) <= puVar30) {
    puVar30 = (undefined8 *)((long)ppuVar28[3] - (long)ppuVar28[4]);
  }
  puVar42 = (uint *)((long)puVar36 + (long)puVar30);
  *(undefined8 **)(ppuVar28 + 7) = puVar30;
  puVar26 = *ppuVar28;
  puVar40 = (undefined8 *)ppuVar28[0xd];
  while (puVar30 = (undefined8 *)0xffffffffffffffff, puVar42 != puVar36) {
    puVar15 = (undefined8 *)((long)puVar39 - (long)ppuVar28[4]);
    puVar30 = (undefined8 *)ppuVar28[7];
    ppuVar28[5] = puVar36;
    if ((long)puVar15 < 0) {
      puVar15 = (undefined8 *)0x0;
    }
    if (puVar30 < puVar15) {
      puVar15 = puVar30;
    }
    ppuVar28[-1] = 0x102e1c;
    lVar23 = func_0x00101d50((long)puVar36 + (long)puVar15,(ulong)eolchar,
                             (undefined8 *)((long)puVar30 - (long)puVar15));
    puVar17 = ppuVar28[5];
    if (lVar23 == 0) {
      *(undefined *)(ppuVar28 + 6) = 0;
      puVar36 = puVar42;
    }
    else {
      *(undefined *)(ppuVar28 + 6) = 1;
      puVar36 = (uint *)(lVar23 + 1);
    }
    ppuVar28[5] = (uint *)((long)puVar36 - (long)puVar17);
    if (puVar37 == puVar31) {
      ppuVar28[10] = puVar36;
      ppuVar28[-1] = 0x1034ee;
      puVar17 = (uint *)full_write(1,puVar17,(uint *)((long)puVar36 - (long)puVar17));
      puVar36 = ppuVar28[10];
      if (ppuVar28[5] != puVar17) {
        ppuVar28[-1] = 0x103511;
        uVar20 = func_0x00101c40(0,&UNK_00108e29,5);
        ppuVar28[-1] = 0x103519;
        puVar37 = (uint *)func_0x00101b70();
        uVar10 = *puVar37;
        ppuVar28[-1] = 0x103531;
        func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
        goto code_r0x00103531;
      }
    }
    else {
      if (puVar31 == (uint *)0x0) {
        ppuVar28[0xb] = puVar36;
        ppuVar28[-1] = 0x1034cf;
        cwrite((ulong)*(byte *)(ppuVar28 + 10),puVar17,ppuVar28[5]);
        puVar36 = ppuVar28[0xb];
      }
    }
    puVar17 = (uint *)((long)ppuVar28[4] + (long)ppuVar28[5]);
    bVar5 = *(byte *)(ppuVar28 + 6);
    ppuVar28[4] = puVar17;
    while( true ) {
      if (((long)puVar17 <= (long)puVar39) && (bVar5 == 0)) goto code_r0x00103097;
      bVar4 = (bVar5 ^ 1) & puVar42 == puVar36;
      if (bVar4 != 0) break;
      puVar37 = (uint *)((long)puVar37 + 1);
      if (puVar31 != (uint *)0x0 && puVar31 < puVar37) goto code_r0x00102f16;
      puVar39 = (undefined8 *)((long)puVar39 + (long)ppuVar28[1]);
      if (puVar37 == puVar26) {
        puVar39 = puVar40;
      }
      if ((long)puVar39 < (long)puVar17) {
        if (puVar31 == (uint *)0x0) {
          *(byte *)((long)ppuVar28 + 0x66) = bVar5;
          ppuVar28[0xb] = puVar17;
          ppuVar28[10] = puVar36;
          ppuVar28[-1] = 0x102ed5;
          cwrite(1,0,0);
          puVar36 = ppuVar28[10];
          puVar17 = ppuVar28[0xb];
          bVar5 = *(byte *)((long)ppuVar28 + 0x66);
        }
      }
      else {
        bVar5 = 0;
      }
    }
    *(byte *)((long)ppuVar28 + 0x67) = bVar4;
code_r0x00103097:
    ppuVar28[7] = (uint *)((long)ppuVar28[7] - (long)ppuVar28[5]);
    *(undefined *)(ppuVar28 + 10) = *(undefined *)(ppuVar28 + 6);
  }
  goto code_r0x00102d83;
code_r0x00102a52:
  puVar30 = (undefined8 *)ppuVar28[8];
  if (puVar15 <= ppuVar28[8]) {
    puVar30 = puVar15;
  }
  if ((long)*ppuVar28 < 0) {
    ppuVar28[-1] = 0x103ac8;
    uVar20 = umaxtostr(*ppuVar28,ppuVar28 + 0x24);
    ppuVar28[-1] = 0x103ad0;
    uVar20 = quote(uVar20);
    ppuVar28[-1] = 0x103ae6;
    uVar21 = func_0x00101c40(0,&UNK_00108d1b,5);
    ppuVar28[-1] = 0x103b04;
    func_0x00101ea0(1,0x4b,&UNK_00108dd8,uVar21,uVar20);
    goto code_r0x00103b04;
  }
  if (puVar15 < *ppuVar28) {
    puVar39 = (undefined8 *)*ppuVar28;
  }
  *(undefined8 **)(ppuVar28 + 3) = puVar39;
  goto code_r0x00102831;
code_r0x00103605:
  if ((long)puVar40 <= (long)puVar27) goto code_r0x00102f16;
  if (puVar15 == (undefined8 *)0xffffffffffffffff) {
    ppuVar28[-1] = 0x10369d;
    puVar15 = (undefined8 *)safe_read(0,puVar42,ppuVar28[8]);
    if (puVar15 == (undefined8 *)0xffffffffffffffff) goto code_r0x001036a7;
  }
  if (puVar15 == (undefined8 *)0x0) goto code_r0x00102f16;
  puVar30 = (undefined8 *)((long)puVar40 - (long)puVar27);
  if (puVar15 < (undefined8 *)((long)puVar40 - (long)puVar27)) {
    puVar30 = puVar15;
  }
  ppuVar28[-1] = 0x10363a;
  puVar15 = (undefined8 *)full_write(1,puVar42,puVar30);
  if (puVar30 != puVar15) {
    ppuVar28[-1] = 0x103644;
    puVar15 = (undefined8 *)func_0x00101b70();
    if ((filter_command == (byte *)0x0) || (*(uint *)puVar15 != 0x20)) {
      ppuVar28[-1] = 0x103669;
      uVar20 = quotearg_n_style_colon(0,3,&UNK_00109c02);
      uVar10 = *(uint *)puVar15;
      ppuVar28[-1] = 0x103683;
      func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
      puVar39 = puVar15;
    }
  }
  puVar27 = (undefined8 *)((long)puVar27 + (long)puVar30);
  puVar15 = (undefined8 *)0xffffffffffffffff;
  goto code_r0x00103605;
code_r0x001036a7:
  ppuVar28[-1] = 0x1036ba;
  uVar20 = quotearg_n_style_colon(0,3,infile);
  ppuVar28[-1] = 0x1036c2;
  puVar37 = (uint *)func_0x00101b70();
  uVar10 = *puVar37;
  ppuVar28[-1] = 0x1036da;
  func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
code_r0x001036da:
  ppuVar28[-1] = 0x1036f0;
  cwrite((ulong)(puVar39 == (undefined8 *)0x0),ppuVar28[1],puVar36);
code_r0x001030bb:
  ppuVar28[-1] = 0x1030c5;
  func_0x00101b50(ppuVar28[1]);
  goto code_r0x00102f16;
code_r0x00102b50:
  ppuVar28[-1] = 0x102b61;
  puVar31 = (uint *)safe_read(0,ppuVar28[9],ppuVar28[8]);
  if (puVar31 != (uint *)0xffffffffffffffff) {
    if (puVar31 == (uint *)0x0) {
      if (puVar36 != (uint *)0x0) goto code_r0x001036da;
      goto code_r0x001030bb;
    }
    puVar37 = ppuVar28[9];
    do {
      puVar42 = (uint *)(((long)*ppuVar28 - (long)puVar39) - (long)puVar36);
      if (puVar31 < puVar42) {
        puVar40 = (undefined8 *)0x0;
        ppuVar28[-1] = 0x102c19;
        puVar26 = (uint *)func_0x00101eb0(puVar37,(ulong)eolchar,puVar31);
        puVar42 = (uint *)0x0;
        if (puVar36 == (uint *)0x0) goto code_r0x00102c28;
code_r0x00102b9c:
        bVar43 = puVar39 == (undefined8 *)0x0;
        if ((puVar26 != (uint *)0x0) || (bVar43)) {
          ppuVar28[4] = puVar26;
          puVar39 = (undefined8 *)((long)puVar39 + (long)puVar36);
          ppuVar28[-1] = 0x103001;
          cwrite((ulong)bVar43,ppuVar28[1],puVar36);
          puVar17 = ppuVar28[8];
          puVar26 = ppuVar28[4];
          ppuVar28[3] = puVar17;
          if (puVar17 < puVar36) {
            ppuVar28[-1] = 0x103029;
            puVar36 = (uint *)xrealloc();
            ppuVar28[3] = puVar17;
            ppuVar28[1] = puVar36;
            puVar26 = ppuVar28[4];
          }
          goto code_r0x00102c28;
        }
code_r0x00102bb5:
        if (*(char *)(ppuVar28 + 2) != '\0') {
code_r0x00102c69:
          if ((puVar40 == (undefined8 *)0x0) || (puVar26 = puVar42, puVar42 == (uint *)0x0))
          goto code_r0x00102fc8;
          goto code_r0x00102c7b;
        }
        bVar43 = puVar39 == (undefined8 *)0x0;
        if (puVar40 == (undefined8 *)0x0) {
          puVar39 = (undefined8 *)((long)puVar39 + (long)puVar31);
          ppuVar28[-1] = 0x10304e;
          cwrite((ulong)bVar43,puVar37,puVar31);
          break;
        }
        puVar31 = (uint *)((long)puVar31 - (long)puVar42);
        puVar17 = (uint *)((long)puVar37 + (long)puVar42);
        puVar39 = (undefined8 *)0x0;
        ppuVar28[-1] = 0x102be6;
        cwrite((ulong)bVar43,puVar37,puVar42);
      }
      else {
        puVar40 = (undefined8 *)(((long)puVar37 - 1U) + (long)puVar42);
        ppuVar28[-1] = 0x102b90;
        puVar26 = (uint *)func_0x00101eb0(puVar37,(ulong)eolchar,puVar42);
        if (puVar36 != (uint *)0x0) goto code_r0x00102b9c;
code_r0x00102c28:
        if (puVar26 == (uint *)0x0) {
          puVar36 = (uint *)0x0;
          goto code_r0x00102bb5;
        }
        bVar43 = puVar39 == (undefined8 *)0x0;
        lVar23 = (long)puVar26 + (1 - (long)puVar37);
        puVar39 = (undefined8 *)((long)puVar39 + lVar23);
        puVar31 = (uint *)((long)puVar31 - lVar23);
        ppuVar28[-1] = 0x102c52;
        cwrite((ulong)bVar43,puVar37,lVar23);
        puVar37 = (uint *)((long)puVar37 + lVar23);
        if (puVar40 != (undefined8 *)0x0) {
          puVar42 = (uint *)((long)puVar42 - lVar23);
          *(undefined *)(ppuVar28 + 2) = 1;
          puVar36 = (uint *)0x0;
          goto code_r0x00102c69;
        }
code_r0x00102fc0:
        puVar36 = (uint *)0x0;
        *(undefined *)(ppuVar28 + 2) = 1;
code_r0x00102fc8:
        puVar17 = puVar37;
        if ((puVar40 == (undefined8 *)0x0) && (puVar26 = puVar31, puVar31 != (uint *)0x0)) {
code_r0x00102c7b:
          puVar42 = ppuVar28[3];
          if ((uint *)((long)puVar42 - (long)puVar36) < puVar26) {
            if ((uint *)~(ulong)ppuVar28[8] < puVar42) goto code_r0x00103936;
            puVar42 = (uint *)((long)puVar42 + (long)ppuVar28[8]);
            ppuVar28[3] = puVar42;
            ppuVar28[-1] = 0x102cb4;
            puVar42 = (uint *)xrealloc(ppuVar28[1],puVar42);
            ppuVar28[1] = puVar42;
          }
          puVar31 = (uint *)((long)puVar31 - (long)puVar26);
          puVar17 = (uint *)((long)puVar37 + (long)puVar26);
          lVar23 = (long)ppuVar28[1] + (long)puVar36;
          puVar36 = (uint *)((long)puVar36 + (long)puVar26);
          ppuVar28[-1] = 0x102cd6;
          func_0x00101dd0(lVar23,puVar37,puVar26);
          puVar42 = puVar26;
        }
        uVar6 = *(undefined *)(ppuVar28 + 2);
        if (puVar40 != (undefined8 *)0x0) {
          uVar6 = 0;
        }
        *(undefined *)(ppuVar28 + 2) = uVar6;
        if (puVar40 != (undefined8 *)0x0) {
          puVar39 = (undefined8 *)0x0;
        }
      }
      puVar37 = puVar17;
    } while (puVar31 != (uint *)0x0);
    goto code_r0x00102b50;
  }
code_r0x001039b9:
  ppuVar28[-1] = 0x1039cc;
  uVar20 = quotearg_n_style_colon(0,3,infile);
  ppuVar28[-1] = 0x1039d4;
  puVar42 = (uint *)func_0x00101b70();
  uVar10 = *puVar42;
  ppuVar28[-1] = 0x1039ec;
  func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
code_r0x001039ec:
  ppuVar28[-1] = 0x1039ff;
  uVar20 = quotearg_n_style_colon(0,3,infile);
  ppuVar28[-1] = 0x103a07;
  puVar42 = (uint *)func_0x00101b70();
  uVar10 = *puVar42;
  ppuVar28[-1] = 0x103a1f;
  func_0x00101ea0(1,(ulong)uVar10,&UNK_00108ddc,uVar20);
code_r0x00103a1f:
  ppuVar28[-1] = 0x103a30;
  uVar20 = quotearg_style(4,infile);
  ppuVar28[-1] = 0x103a46;
  param_2 = (undefined8 *)func_0x00101c40(0,&UNK_00108df0,5);
  ppuVar28[-1] = 0x103a4e;
  puVar42 = (uint *)func_0x00101b70();
  uVar10 = *puVar42;
  ppuVar28[-1] = 0x103a62;
  uVar10 = func_0x00101ea0(1,(ulong)uVar10,param_2,uVar20);
code_r0x00103a62:
  uVar20 = param_2[(int)uVar10];
  ppuVar28[-1] = 0x103a6d;
  uVar20 = quote(uVar20);
  puVar33 = &UNK_00108ddf;
code_r0x00103a7c:
  do {
    ppuVar28[-1] = 0x103a83;
    uVar21 = func_0x00101c40(0,puVar33,5);
code_r0x00103a83:
    ppuVar28[-1] = 0x103a94;
    func_0x00101ea0(0,0,uVar21,uVar20);
    ppuVar28[-1] = 0x103a9e;
    usage(1);
code_r0x00103a9e:
    ppuVar28[-1] = 0x103aa6;
    uVar20 = quote();
    puVar33 = &UNK_00109940;
  } while( true );
code_r0x001031b3:
  puVar31 = puVar36;
  if (bVar43) {
    puVar31 = (uint *)0x1;
    if (ppuVar28[1] != *ppuVar28) {
      puVar31 = (uint *)((long)ppuVar28[1] + 1);
    }
    ppuVar28[1] = puVar31;
    puVar31 = puVar36;
  }
  goto joined_r0x0010319b;
}