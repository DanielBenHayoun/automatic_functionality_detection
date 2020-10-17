
undefined8 uniq(uint param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  undefined8 *puVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong unaff_R12;
  ulong uVar22;
  undefined *puVar23;
  long in_FS_OFFSET;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined8 auStack256 [2];
  undefined8 auStack240 [2];
  undefined8 uStack224;
  undefined auStack216 [7];
  undefined uStack209;
  ulong auStack208 [2];
  long *plStack192;
  undefined auStack177 [9];
  undefined8 uStack168;
  uint auStack160 [6];
  long alStack136 [6];
  undefined *puStack88;
  ulong auStack80 [4];
  
  uVar15 = (ulong)param_1;
  puVar18 = (undefined8 *)auStack216;
  auStack80[2] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lVar9 = func_0x00101760(&UNK_001067f9);
  uVar22 = unaff_R12 & 0xffffffffffffff00 | (ulong)(lVar9 != 0);
  puVar23 = (undefined *)0x0;
  uVar13 = 0;
  auStack80[0] = &UNK_00107272;
  puStack88 = &UNK_00107272;
  puVar20 = (undefined *)0x0;
  set_program_name(*param_2);
  func_0x001019e0(6,&UNK_001077a1);
  func_0x001017f0(&UNK_001067d0,&UNK_00106809);
  func_0x001017d0(&UNK_001067d0);
  hard_LC_COLLATE = hard_locale(3);
  atexit(close_stdout);
  skip_chars = 0;
  skip_fields = 0;
  check_chars = 0xffffffffffffffff;
  output_first_repeated = 1;
  output_unique = '\x01';
  output_later_repeated = '\0';
  countmode = 1;
  delimit_groups = 0;
  auStack177[0] = 10;
  auStack208[0]._0_4_ = 0;
  plStack192 = alStack136 + 2;
  auStack208[1] = 0xffffffffffffffff;
  uVar16 = extraout_RDX;
code_r0x00101c1a:
  do {
    auVar25 = CONCAT88(uVar16,skip_fields);
    if ((int)puVar20 == -1) goto code_r0x00101be5;
code_r0x00101c1f:
    skip_fields = SUB168(auVar25,0);
    iVar8 = (int)uVar13;
    if ((iVar8 != 0) && (lVar9 != 0)) {
code_r0x00101be5:
      uVar17 = SUB168(auVar25 >> 0x40,0);
      skip_fields = SUB168(auVar25,0);
      if (optind < (int)param_1) {
        uVar16 = SEXT48(optind);
        if ((int)uVar13 == 2) {
code_r0x001024dc:
          *(undefined8 *)((undefined *)puVar18 + -8) = 0x1024e1;
          uVar16 = quote();
          *(undefined8 *)((undefined *)puVar18 + -8) = 0x1024f7;
          uVar17 = func_0x00101800(0,&UNK_00106839,5);
          *(undefined8 *)((undefined *)puVar18 + -8) = 0x102508;
          func_0x00101a00(0,0,uVar17,uVar16);
          *(undefined8 *)((undefined *)puVar18 + -8) = 0x102512;
          usage(1);
code_r0x00102512:
          *(undefined8 *)((undefined *)puVar18 + -8) = 0x10251b;
          func_0x00101880();
          puVar21 = puVar20;
          do {
            puVar20 = puVar23;
            uVar17 = *(undefined8 *)(puVar21 + 8);
            uVar2 = *(undefined8 *)(puVar21 + 0x10);
            *(undefined8 *)((undefined *)puVar18 + -8) = 0x102340;
            func_0x001019c0(uVar2,1,uVar17);
            ((undefined *)puVar18)[8] = (char)uVar16;
            *(ulong *)((undefined *)puVar18 + 0x38) = uVar22;
            *(ulong *)((undefined *)puVar18 + 0x28) = uVar15;
            puVar23 = puVar21;
code_r0x001022a8:
            do {
              if ((*stdin & 0x10) == 0) {
                *(undefined8 *)((undefined *)puVar18 + -8) = 0x1022c4;
                lVar9 = readlinebuffer_delim
                                  (puVar20,stdin,(ulong)*(uint *)((undefined *)puVar18 + 0x18));
                if (lVar9 == 0) goto code_r0x00102406;
                lVar9 = *(long *)(puVar20 + 8);
                lVar12 = *(long *)(puVar20 + 0x10);
                *(undefined8 *)((undefined *)puVar18 + -8) = 0x1022e4;
                uVar15 = find_field_isra_2(lVar9);
                uVar22 = (lVar9 + -1) - (uVar15 - lVar12);
                if (*(long *)(puVar23 + 8) != 0) goto code_r0x001023bd;
code_r0x001022f8:
                puVar21 = puVar20;
                if ((grouping != 0) &&
                   (((grouping == 1 || (grouping == 4)) ||
                    ((((undefined *)puVar18)[8] != '\0' && (grouping - 2U < 2)))))) {
                  puVar3 = *(undefined **)(stdout + 0x28);
                  if (*(undefined **)(stdout + 0x30) <= puVar3) goto code_r0x00102512;
                  uVar4 = ((undefined *)puVar18)[0x27];
                  *(undefined **)(stdout + 0x28) = puVar3 + 1;
                  *puVar3 = uVar4;
                }
                break;
              }
code_r0x00102406:
              if (((grouping - 2U & 0xfffffffd) == 0) && (((undefined *)puVar18)[8] != '\0')) {
                puVar21 = *(undefined **)(stdout + 0x28);
                if (puVar21 < *(undefined **)(stdout + 0x30)) {
                  uVar4 = ((undefined *)puVar18)[0x27];
                  *(undefined **)(stdout + 0x28) = puVar21 + 1;
                  *puVar21 = uVar4;
                }
                else {
                  *(undefined8 *)((undefined *)puVar18 + -8) = 0x102529;
                  func_0x00101880(stdout,(ulong)*(uint *)((undefined *)puVar18 + 0x18));
                }
              }
code_r0x00101f4e:
              if ((*stdin & 0x20) == 0) {
                *(undefined8 *)((undefined *)puVar18 + -8) = 0x101f63;
                iVar8 = rpl_fclose();
                if (iVar8 == 0) {
                  *(undefined8 *)((undefined *)puVar18 + -8) = 0x101f75;
                  func_0x00101770(*(undefined8 *)((undefined *)puVar18 + 0x50));
                  *(undefined8 *)((undefined *)puVar18 + -8) = 0x101f7f;
                  func_0x00101770(*(undefined8 *)((undefined *)puVar18 + 0x70));
                  if (*(long *)((undefined *)puVar18 + 0x98) == *(long *)(in_FS_OFFSET + 0x28)) {
                    return 0;
                  }
                  *(undefined8 *)((undefined *)puVar18 + -8) = 0x102560;
                  func_0x00101830();
                  goto code_r0x00102560;
                }
              }
code_r0x00102384:
              *(undefined8 *)((undefined *)puVar18 + -8) = 0x102393;
              uVar16 = quotearg_style(4,*(undefined8 *)((undefined *)puVar18 + 0x30));
              *(undefined8 *)((undefined *)puVar18 + -8) = 0x1023a9;
              uVar17 = func_0x00101800(0,&UNK_00106887,5);
              *(undefined8 *)((undefined *)puVar18 + -8) = 0x1023bd;
              func_0x00101a00(1,0,uVar17,uVar16);
code_r0x001023bd:
              *(undefined8 *)((undefined *)puVar18 + -8) = 0x1023d2;
              cVar5 = different(uVar15,*(undefined8 *)((undefined *)puVar18 + 0x28),uVar22);
              if (cVar5 != '\0') goto code_r0x001022f8;
              puVar21 = puVar20;
            } while (grouping == 0);
          } while( true );
        }
        optind = optind + 1;
        uVar10 = uVar13 & 0xffffffff;
        uVar13 = (ulong)((int)uVar13 + 1);
        *(undefined8 *)((undefined *)puVar18 + uVar10 * 8 + 0x80) = param_2[uVar16];
        goto code_r0x00101c1a;
      }
      if (grouping == 0) {
        if (countmode == 0) {
          uVar17 = 5;
          puVar21 = &UNK_00107138;
          if (output_later_repeated != '\0') goto code_r0x00102541;
        }
code_r0x00101d72:
        uVar16 = *(ulong *)((undefined *)puVar18 + 0x88);
        *(int *)((undefined *)puVar18 + 0x18) = (int)(char)((undefined *)puVar18)[0x27];
        *(undefined8 *)((undefined *)puVar18 + 0x30) = *(undefined8 *)((undefined *)puVar18 + 0x80);
        *(undefined8 *)((undefined *)puVar18 + -8) = 0x101d9f;
        iVar8 = func_0x00101930(*(undefined8 *)((undefined *)puVar18 + 0x80),&UNK_00107272,uVar17);
        if (iVar8 != 0) {
          *(undefined8 *)((undefined *)puVar18 + -8) = 0x102245;
          lVar12 = freopen_safer(*(undefined8 *)((undefined *)puVar18 + 0x30),&UNK_00107205,stdin);
          if (lVar12 == 0) {
            *(undefined8 *)((undefined *)puVar18 + -8) = 0x10225f;
            uVar13 = quotearg_n_style_colon(0,3,*(undefined8 *)((undefined *)puVar18 + 0x30));
            *(undefined8 *)((undefined *)puVar18 + -8) = 0x102267;
            puVar14 = (uint *)func_0x00101790();
            uVar7 = *puVar14;
            *(undefined8 *)((undefined *)puVar18 + -8) = 0x10227f;
            func_0x00101a00(1,(ulong)uVar7,&UNK_001071f8);
            uVar16 = extraout_RDX_02;
            goto code_r0x0010227f;
          }
        }
        *(undefined8 *)((undefined *)puVar18 + -8) = 0x101db6;
        iVar8 = func_0x00101930(uVar16,&UNK_00107272);
        if (iVar8 != 0) {
          *(undefined8 *)((undefined *)puVar18 + -8) = 0x101dd0;
          lVar9 = freopen_safer(uVar16,&UNK_00106885,stdout);
          if (lVar9 == 0) {
code_r0x00102560:
            puVar18[-1] = 0x10256f;
            uVar17 = quotearg_n_style_colon(0,3,uVar16);
            puVar18[-1] = 0x102577;
            puVar14 = (uint *)func_0x00101790();
            uVar7 = *puVar14;
            puVar18[-1] = 0x10258f;
            auVar25 = func_0x00101a00(1,(ulong)uVar7,&UNK_001071f8,uVar17);
            uVar17 = *puVar18;
            uVar19 = (ulong)(puVar18 + 1) & 0xfffffffffffffff0;
            *(undefined8 *)(uVar19 - 8) = SUB168(auVar25,0);
            *(ulong *)(uVar19 - 0x10) = uVar19 - 8;
            *(undefined8 *)(uVar19 - 0x18) = 0x1025ba;
            (*(code *)PTR___libc_start_main_00309fe0)
                      (main,uVar17,puVar18 + 1,__libc_csu_init,__libc_csu_fini,
                       SUB168(auVar25 >> 0x40,0));
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
        }
        puVar20 = (undefined *)puVar18 + 0x40;
        puVar23 = (undefined *)puVar18 + 0x60;
        *(undefined8 *)((undefined *)puVar18 + -8) = 0x101df4;
        fadvise(stdin,2);
        *(undefined8 *)((undefined *)puVar18 + -8) = 0x101dfc;
        initbuffer(puVar20);
        *(undefined8 *)((undefined *)puVar18 + -8) = 0x101e04;
        initbuffer(puVar23);
        if (((output_unique != '\0') &&
            (uVar16 = (ulong)output_first_repeated, output_first_repeated != 0)) && (countmode == 1)
           ) {
          ((undefined *)puVar18)[8] = 0;
          goto code_r0x001022a8;
        }
        *(undefined8 *)((undefined *)puVar18 + -8) = 0x101e38;
        lVar9 = readlinebuffer_delim(puVar23,stdin,(ulong)*(uint *)((undefined *)puVar18 + 0x18));
        if (lVar9 == 0) goto code_r0x00101f4e;
        lVar9 = *(long *)((undefined *)puVar18 + 0x70);
        lVar12 = *(long *)((undefined *)puVar18 + 0x68);
        *(undefined8 *)((undefined *)puVar18 + -8) = 0x101e5a;
        lVar11 = find_field_isra_2(lVar12,lVar9);
        *(long *)((undefined *)puVar18 + 0x10) = lVar11;
        ((undefined *)puVar18)[0x28] = 1;
        uVar16 = (lVar12 + -1) - (lVar11 - lVar9);
        uVar22 = 0;
        *(ulong *)((undefined *)puVar18 + 8) = uVar16;
        puVar21 = puVar20;
        break;
      }
      if ((char)puVar23 == '\0') {
        uVar17 = 5;
        puVar21 = &UNK_00107100;
        if (countmode == 1) goto code_r0x00101d72;
      }
      else {
code_r0x00102535:
        puVar21 = &UNK_001070d0;
      }
code_r0x00102541:
      *(undefined8 *)((undefined *)puVar18 + -8) = 0x102548;
      uVar17 = func_0x00101800(0,puVar21,5);
      *(undefined8 *)((undefined *)puVar18 + -8) = 0x102556;
      func_0x00101a00(0,0,uVar17);
code_r0x00101ccd:
      do {
        *(undefined8 *)((undefined *)puVar18 + -8) = 0x101cd7;
        iVar6 = usage();
        uVar16 = extraout_RDX_00;
code_r0x00101ce0:
        if (iVar6 == 0x7a) goto code_r0x00102223;
        if (iVar6 == 0x80) {
          if (optarg == (char *)0x0) {
            grouping = 3;
            auVar25 = CONCAT88(uVar16,skip_fields);
          }
          else {
            *(undefined8 *)((undefined *)puVar18 + -8) = 0x10208b;
            lVar12 = __xargmatch_internal
                               (&UNK_00106859,optarg,grouping_method_string,grouping_method_map,4,
                                argmatch_die);
            grouping = *(int *)(grouping_method_map + lVar12 * 4);
            auVar25 = CONCAT88(0x107180,skip_fields);
          }
          goto code_r0x00101c1f;
        }
      } while (iVar6 != 0x77);
      *(undefined8 *)((undefined *)puVar18 + -8) = 0x101d0c;
      auVar25 = size_opt(optarg,&UNK_001070a8);
      check_chars = SUB168(auVar25,0);
      auVar25 = CONCAT88(SUB168(auVar25 >> 0x40,0),skip_fields);
      goto code_r0x00101c1f;
    }
    *(undefined8 *)((undefined *)puVar18 + -8) = 0x101c3f;
    auVar24 = func_0x00101840((ulong)param_1,param_2,&UNK_00106821,longopts,0);
    uVar16 = SUB168(auVar24 >> 0x40,0);
    auVar25 = CONCAT88(uVar16,skip_fields);
    iVar6 = SUB164(auVar24,0);
    puVar20 = (undefined *)(SUB168(auVar24,0) & 0xffffffff);
    if (iVar6 == -1) goto code_r0x00101be5;
    if (iVar6 == 100) {
      output_unique = '\0';
      puVar23 = (undefined *)0x1;
      goto code_r0x00101c1f;
    }
    if (100 < iVar6) {
      if (iVar6 == 0x75) {
        output_first_repeated = 0;
        puVar23 = (undefined *)0x1;
        auVar25 = CONCAT88(uVar16,skip_fields);
      }
      else {
        if (0x75 < iVar6) goto code_r0x00101ce0;
        if (iVar6 == 0x69) {
          ignore_case = 1;
          auVar25 = CONCAT88(uVar16,skip_fields);
        }
        else {
          if (iVar6 == 0x73) {
            *(undefined8 *)((undefined *)puVar18 + -8) = 0x101fe8;
            auVar25 = size_opt(optarg,&UNK_00107088);
            skip_chars = SUB168(auVar25,0);
            auVar25 = CONCAT88(SUB168(auVar25 >> 0x40,0),skip_fields);
          }
          else {
            if (iVar6 != 0x66) goto code_r0x00101ccd;
            *(undefined8 *)((undefined *)puVar18 + -8) = 0x101c8a;
            auVar25 = size_opt(optarg,&UNK_00107060);
            *(undefined4 *)((undefined *)puVar18 + 8) = 2;
          }
        }
      }
      goto code_r0x00101c1f;
    }
    if (0x39 < iVar6) {
      if (iVar6 == 0x44) {
        output_unique = '\0';
        output_later_repeated = '\x01';
        if (optarg == (char *)0x0) {
code_r0x0010227f:
          auVar25 = CONCAT88(uVar16,skip_fields);
          delimit_groups = 0;
          puVar23 = (undefined *)0x1;
        }
        else {
          puVar23 = (undefined *)0x1;
          *(undefined8 *)((undefined *)puVar18 + -8) = 0x10203f;
          lVar12 = __xargmatch_internal
                             (&UNK_0010684a,optarg,delimit_method_string,delimit_method_map,4,
                              argmatch_die);
          auVar25 = CONCAT88(0x107190,skip_fields);
          delimit_groups = *(int *)(delimit_method_map + lVar12 * 4);
        }
      }
      else {
        if (iVar6 != 99) goto code_r0x00101ccd;
        countmode = 0;
        puVar23 = (undefined *)0x1;
        auVar25 = CONCAT88(uVar16,skip_fields);
      }
      goto code_r0x00101c1f;
    }
    if (iVar6 < 0x30) {
      if (iVar6 == -0x82) {
        *(undefined8 *)((undefined *)puVar18 + -8) = 0x102535;
        usage(0);
        goto code_r0x00102535;
      }
      if (iVar6 != 1) {
        if (iVar6 != -0x83) goto code_r0x00101ccd;
        *(undefined8 *)((undefined *)puVar18 + -0x10) = 0;
        *(undefined8 *)((undefined *)puVar18 + -0x18) = 0x10221c;
        version_etc(stdout,&UNK_00106751,&UNK_001067cc,Version,&UNK_00106871,&UNK_00106861);
        *(undefined8 *)((undefined *)puVar18 + -0x18) = 0x102223;
        func_0x00101a50();
        uVar16 = extraout_RDX_01;
        puVar18 = (undefined8 *)((undefined *)puVar18 + -0x10);
code_r0x00102223:
        ((undefined *)puVar18)[0x27] = 0;
        auVar25 = CONCAT88(uVar16,skip_fields);
        goto code_r0x00101c1f;
      }
      if (*optarg == '+') {
        *(undefined8 *)((undefined *)puVar18 + -8) = 0x102451;
        iVar6 = posix2_version();
        uVar16 = extraout_RDX_03;
        if (0x2b8 < iVar6 - 0x30db0U) {
          *(undefined8 *)((undefined *)puVar18 + -8) = 0x1024b1;
          iVar6 = xstrtoul(optarg,0,10);
          uVar16 = extraout_RDX_04;
          if (iVar6 == 0) {
            skip_chars = *(undefined8 *)((undefined *)puVar18 + 0x60);
            auVar25 = CONCAT88(extraout_RDX_04,skip_fields);
            goto code_r0x00101c1f;
          }
        }
      }
      if (iVar8 == 2) goto code_r0x001024dc;
      uVar10 = uVar13 & 0xffffffff;
      uVar13 = (ulong)(iVar8 + 1);
      *(char **)((undefined *)puVar18 + uVar10 * 8 + 0x80) = optarg;
      auVar25 = CONCAT88(uVar16,skip_fields);
      goto code_r0x00101c1f;
    }
    if (*(int *)((undefined *)puVar18 + 8) == 2) {
      uVar16 = SEXT48(iVar6 + -0x30);
    }
    else {
      if ((0x1999999999999999 < skip_fields) ||
         (uVar16 = skip_fields * 10 + (long)((int)puVar20 + -0x30), uVar16 < skip_fields)) {
        *(undefined4 *)((undefined *)puVar18 + 8) = 1;
        skip_fields = *(ulong *)((undefined *)puVar18 + 0x10);
        goto code_r0x00101c1a;
      }
    }
    *(undefined4 *)((undefined *)puVar18 + 8) = 1;
    skip_fields = uVar16;
  } while( true );
code_r0x00101e72:
  bVar1 = *stdin;
joined_r0x00101e7c:
  puVar20 = puVar21;
  if ((bVar1 & 0x10) != 0) {
code_r0x00101f41:
    *(undefined8 *)((undefined *)puVar18 + -8) = 0x101f4e;
    writeline(puVar23,0,uVar22);
    goto code_r0x00101f4e;
  }
  *(undefined8 *)((undefined *)puVar18 + -8) = 0x101e8e;
  lVar9 = readlinebuffer_delim(puVar20,stdin,(ulong)*(uint *)((undefined *)puVar18 + 0x18));
  if (lVar9 == 0) {
    if ((*stdin & 0x20) != 0) goto code_r0x00102384;
    goto code_r0x00101f41;
  }
  lVar9 = *(long *)(puVar20 + 8);
  lVar12 = *(long *)(puVar20 + 0x10);
  *(undefined8 *)((undefined *)puVar18 + -8) = 0x101eae;
  uVar15 = find_field_isra_2(lVar9,lVar12);
  uVar16 = (lVar9 + -1) - (uVar15 - lVar12);
  *(undefined8 *)((undefined *)puVar18 + -8) = 0x101ecc;
  uVar7 = different(uVar15,*(undefined8 *)((undefined *)puVar18 + 0x10),uVar16);
  uVar13 = (ulong)(uVar7 ^ 1) & 0xff;
  uVar22 = uVar22 + ((uVar7 ^ 1) & 0xff);
  cVar5 = (char)uVar7;
  if (uVar22 == 0xffffffffffffffff) {
    if (delimit_groups == 0) {
      uVar22 = 0xfffffffffffffffe;
      goto code_r0x001020d2;
    }
    uVar22 = 0xfffffffffffffffe;
    if (cVar5 == '\0') goto code_r0x001020da;
    ((undefined *)puVar18)[0x28] = 0;
    uVar22 = 0xfffffffffffffffe;
code_r0x00101f0e:
    *(undefined8 *)((undefined *)puVar18 + -8) = 0x101f1b;
    writeline(puVar23,uVar13,uVar22);
    uVar22 = 0;
    *(ulong *)((undefined *)puVar18 + 8) = uVar16;
    *(ulong *)((undefined *)puVar18 + 0x10) = uVar15;
    bVar1 = *stdin;
    puVar21 = puVar23;
    puVar23 = puVar20;
    goto joined_r0x00101e7c;
  }
  if (delimit_groups == 0) {
code_r0x001020d2:
    if (cVar5 == '\0') goto code_r0x001020da;
    goto code_r0x00101f0e;
  }
  if (cVar5 != '\0') {
    uVar4 = ((undefined *)puVar18)[0x28];
    if (uVar22 != 0) {
      uVar4 = 0;
    }
    ((undefined *)puVar18)[0x28] = uVar4;
    goto code_r0x00101f0e;
  }
  if ((uVar22 == 1) &&
     ((delimit_groups == 1 || ((delimit_groups == 2 && (((undefined *)puVar18)[0x28] == '\0')))))) {
    puVar21 = *(undefined **)(stdout + 0x28);
    if (puVar21 < *(undefined **)(stdout + 0x30)) {
      uVar4 = ((undefined *)puVar18)[0x27];
      *(undefined **)(stdout + 0x28) = puVar21 + 1;
      *puVar21 = uVar4;
    }
    else {
      *(int *)((undefined *)puVar18 + 0x38) = (int)uVar13;
      *(undefined8 *)((undefined *)puVar18 + -8) = 0x1024d3;
      func_0x00101880(stdout,(ulong)*(uint *)((undefined *)puVar18 + 0x18));
      uVar13 = (ulong)*(uint *)((undefined *)puVar18 + 0x38);
    }
  }
code_r0x001020da:
  puVar21 = puVar20;
  if (output_later_repeated != '\0') {
    *(undefined8 *)((undefined *)puVar18 + -8) = 0x1020f4;
    writeline(puVar23,uVar13,uVar22,uVar13);
    *(ulong *)((undefined *)puVar18 + 8) = uVar16;
    *(ulong *)((undefined *)puVar18 + 0x10) = uVar15;
    puVar21 = puVar23;
    puVar23 = puVar20;
  }
  goto code_r0x00101e72;
}