
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong main(ulong param_1,long *param_2)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  long *plVar18;
  long **pplVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  long *plVar23;
  byte *pbVar24;
  undefined1 *puVar25;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  byte bVar28;
  double dVar29;
  double dVar30;
  undefined auVar31 [16];
  long *aplStack584 [4];
  double dStack552;
  long *plStack544;
  long *plStack536;
  char cStack525;
  uint auStack524 [4];
  uint uStack508;
  long *aplStack504 [39];
  uint auStack192 [6];
  long *aplStack168 [13];
  long *aplStack64 [2];
  
  bVar28 = 0;
  plVar18 = (long *)(param_1 & 0xffffffff);
  puVar25 = longopts;
  pplVar19 = aplStack584 + 4;
  aplStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101c80(6,&UNK_00107e21);
  func_0x00101a70(&UNK_00107070,&UNK_00107099);
  func_0x00101a50(&UNK_00107070);
  atexit(close_stdout);
  iVar4 = func_0x00101d40();
  page_size = (long)iVar4;
  func_0x00101ca0(stdout,0,1,0);
  lVar8 = func_0x001019d0(&UNK_001070b1);
  posixly_correct = lVar8 != 0;
  print_bytes = 0;
  print_chars = 0;
  print_words = 0;
  print_lines = 0;
  print_linelength = 0;
  max_line_length = 0;
  total_bytes = 0;
  total_chars = 0;
  total_words = 0;
  total_lines = 0;
  pbVar22 = (byte *)0x0;
code_r0x00101ef0:
  pbVar21 = pbVar22;
  iVar17 = (int)plVar18;
  pplVar19[-1] = 0x101f07;
  iVar4 = func_0x00101ac0((ulong)plVar18 & 0xffffffff,param_2,&UNK_001070dc,puVar25,0);
  if (iVar4 == -1) {
    if ((((print_lines == 0) && (print_words == 0)) && (print_chars == 0)) &&
       ((print_bytes == 0 && (print_linelength == 0)))) {
      print_bytes = 1;
      print_words = 1;
      print_lines = 1;
    }
    lVar8 = (long)optind;
    if (pbVar21 == (byte *)0x0) {
      iVar4 = optind;
      if (optind < iVar17) {
code_r0x0010265a:
        param_2 = param_2 + iVar4;
        plVar18 = (long *)(long)(iVar17 - iVar4);
      }
      else {
        param_2 = &stdin_only_8119;
        plVar18 = (long *)0x1;
      }
      pplVar19[-1] = 0x1021a7;
      puVar25 = (undefined1 *)argv_iter_init_argv(param_2);
      *(undefined *)((long)pplVar19 + 0x1b) = 0;
code_r0x001020c8:
      if (puVar25 != (undefined1 *)0x0) {
        if (plVar18 == (long *)0x0) {
          pplVar19[-1] = 0x1021be;
          plVar16 = (long *)xmalloc(0x98);
          pplVar19[1] = plVar16;
          *(undefined4 *)plVar16 = 1;
          number_width = 1;
          goto code_r0x001021ce;
        }
        bVar26 = false;
        lVar8 = SUB168(ZEXT816(0x98) * ZEXT816(plVar18),0);
        if (SUB168(ZEXT816(0x98) * ZEXT816(plVar18) >> 0x40,0) != 0) goto code_r0x00102789;
        goto code_r0x001020ed;
      }
code_r0x00102793:
      pplVar19[-1] = 0x102798;
      lVar8 = xalloc_die();
    }
    else {
      if (iVar17 <= optind) {
        pplVar19[-1] = 0x10206d;
        iVar4 = func_0x00101bc0(pbVar21,&UNK_001078f2);
        lVar8 = stdin;
        if (iVar4 != 0) {
          pplVar19[-1] = 0x10260f;
          lVar8 = func_0x00101d00(pbVar21,&UNK_0010711b);
          if (lVar8 == 0) {
            pplVar19[-1] = 0x102628;
            pbVar21 = (byte *)quotearg_style(4,pbVar21);
            pplVar19[-1] = 0x10263e;
            uVar10 = func_0x00101a80(0,&UNK_001070f3,5);
            iVar17 = (int)uVar10;
            pplVar19[-1] = 0x102646;
            puVar14 = (uint *)func_0x001019f0();
            uVar6 = *puVar14;
            pplVar19[-1] = 0x10265a;
            iVar4 = func_0x00101cd0(1,(ulong)uVar6,uVar10);
            goto code_r0x0010265a;
          }
        }
        pplVar19[-1] = 0x102084;
        uVar6 = func_0x00101c00(lVar8);
        pplVar19[-1] = 0x102098;
        iVar4 = func_0x00101c50(1,(ulong)uVar6,pplVar19 + 0x2a);
        if ((iVar4 == 0) && ((*(uint *)(pplVar19 + 0x2d) & 0xf000) == 0x8000)) {
          *(double *)pplVar19 = (double)(long)pplVar19[0x30];
          pplVar19[-1] = 0x1026f1;
          dVar29 = (double)physmem_available();
          dVar30 = _UNK_00107858;
          if (dVar29 * (double)_UNK_00107860 <= _UNK_00107858) {
            pplVar19[1] = _UNK_00107860;
            pplVar19[-1] = 0x102716;
            dVar30 = (double)physmem_available();
            dVar30 = dVar30 * (double)pplVar19[1];
          }
          if ((double)*pplVar19 <= dVar30) {
            pplVar19[-1] = 0x10273c;
            readtokens0_init(pplVar19 + 6);
            pplVar19[-1] = 0x102747;
            cVar3 = readtokens0(lVar8,pplVar19 + 6);
            *(char *)((long)pplVar19 + 0x1b) = cVar3;
            if (cVar3 == '\0') {
code_r0x00102802:
              pplVar19[-1] = 0x10280f;
              uVar10 = quotearg_style(4,pbVar21);
              pplVar19[-1] = 0x102825;
              uVar11 = func_0x00101a80(0,&UNK_001077d0,5);
              pplVar19[-1] = 0x102839;
              auVar31 = func_0x00101cd0(1,0,uVar11,uVar10);
              uVar10 = *pplVar19;
              uVar20 = (ulong)(pplVar19 + 1) & 0xfffffffffffffff0;
              *(undefined8 *)(uVar20 - 8) = SUB168(auVar31,0);
              *(ulong *)(uVar20 - 0x10) = uVar20 - 8;
              *(undefined8 *)(uVar20 - 0x18) = 0x10286a;
              (*(code *)PTR___libc_start_main_00309fc8)
                        (main,uVar10,pplVar19 + 1,__libc_csu_init,__libc_csu_fini,
                         SUB168(auVar31 >> 0x40,0));
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            pplVar19[-1] = 0x10275b;
            iVar4 = rpl_fclose(lVar8);
            if (iVar4 != 0) goto code_r0x00102802;
            param_2 = pplVar19[7];
            plVar18 = pplVar19[6];
            pplVar19[-1] = 0x102775;
            puVar25 = (undefined1 *)argv_iter_init_argv(param_2);
            goto code_r0x001020c8;
          }
        }
        param_2 = (long *)0x0;
        plVar18 = (long *)0x0;
        pplVar19[-1] = 0x1020c0;
        puVar25 = (undefined1 *)argv_iter_init_stream(lVar8);
        *(undefined *)((long)pplVar19 + 0x1b) = 0;
        goto code_r0x001020c8;
      }
    }
    lVar8 = param_2[lVar8];
    pplVar19[-1] = 0x1027a6;
    plVar18 = (long *)quotearg_style(4,lVar8);
    pplVar19[-1] = 0x1027bc;
    uVar10 = func_0x00101a80(0,&UNK_001070e2,5);
    pplVar19[-1] = 0x1027cd;
    func_0x00101cd0(0,0,uVar10,plVar18);
    pplVar19[-1] = 0x1027e0;
    uVar10 = func_0x00101a80(0,&UNK_00107798,5);
    pplVar19[-1] = 0x1027fd;
    func_0x00101d70(stderr,1,&UNK_00107dd0,uVar10);
  }
  else {
    pbVar22 = pbVar21;
    if (iVar4 == 99) {
      print_bytes = 1;
      goto code_r0x00101ef0;
    }
    if (iVar4 < 100) {
      if (iVar4 == -0x82) {
        pplVar19[-1] = 0x102784;
        usage(0);
        while( true ) {
          pplVar19[-1] = 0x102789;
          lVar8 = func_0x00101ab0();
code_r0x00102789:
          bVar26 = true;
code_r0x001020ed:
          if ((lVar8 < 0) || (bVar26)) break;
          pplVar19[2] = (long *)((long)plVar18 * 0x98);
          pplVar19[-1] = 0x102113;
          plVar16 = (long *)xmalloc((long *)((long)plVar18 * 0x98));
          pplVar19[1] = plVar16;
          if ((plVar18 == (long *)0x1) &&
             (iVar4 = (uint)print_lines + (uint)print_words + (uint)print_chars + (uint)print_bytes
                      + (uint)print_linelength, iVar4 == 1)) {
            *(undefined4 *)pplVar19[1] = 1;
            number_width = iVar4;
          }
          else {
            plVar16 = pplVar19[1] + 1;
            *pplVar19 = param_2 + (long)plVar18;
            do {
              lVar8 = *param_2;
              if (lVar8 == 0) {
code_r0x00102135:
                pplVar19[-1] = 0x102144;
                uVar5 = func_0x00101c50(1,0,plVar16);
              }
              else {
                pplVar19[-1] = 0x102175;
                iVar4 = func_0x00101bc0(lVar8,&UNK_001078f2);
                if (iVar4 == 0) goto code_r0x00102135;
                pplVar19[-1] = 0x102189;
                uVar5 = func_0x00101c10(1,lVar8,plVar16);
              }
              *(undefined4 *)(plVar16 + -1) = uVar5;
              param_2 = param_2 + 1;
              plVar16 = plVar16 + 0x13;
            } while (*pplVar19 != param_2);
            plVar16 = pplVar19[1];
            number_width = 1;
            if (*(int *)plVar16 < 1) {
              iVar4 = 1;
              plVar23 = (long *)((long)pplVar19[2] + (long)plVar16);
              uVar13 = 0;
              while (plVar23 != plVar16) {
                if (*(int *)plVar16 == 0) {
                  if ((*(uint *)(plVar16 + 4) & 0xf000) == 0x8000) {
                    uVar13 = uVar13 + plVar16[7];
                  }
                  else {
                    iVar4 = 7;
                  }
                }
                plVar16 = plVar16 + 0x13;
              }
              number_width = 1;
              while (9 < uVar13) {
                number_width = number_width + 1;
                uVar13 = uVar13 / 10;
              }
              if (number_width < iVar4) {
                number_width = iVar4;
              }
            }
          }
code_r0x001021ce:
          lVar8 = 0;
          param_2 = (long *)0x1;
          *(long *)pplVar19 = (long)pplVar19 + 0x2c;
          while( true ) {
            pplVar19[-1] = 0x1021fc;
            pcVar9 = (char *)argv_iter(puVar25);
            if (pcVar9 == (char *)0x0) break;
            bVar26 = false;
            bVar27 = pbVar21 == (byte *)0x0;
            if (bVar27) {
              if (*pcVar9 == '\0') {
                pplVar19[-1] = 0x1023ed;
                func_0x00101a80(0,&UNK_0010712c,5);
                pplVar19[-1] = 0x102402;
                func_0x00101cd0(0,0,&UNK_0010787d);
code_r0x00102402:
                param_2 = (long *)0x0;
              }
              else {
code_r0x00102385:
                lVar15 = 0;
                if (plVar18 != (long *)0x0) {
code_r0x0010238c:
                  lVar15 = lVar8 * 0x98;
                }
                pplVar19[2] = (long *)(lVar15 + (long)pplVar19[1]);
                pplVar19[-1] = 0x1023ac;
                iVar4 = func_0x00101bc0(pcVar9,&UNK_001078f2);
                plVar16 = pplVar19[2];
                if (iVar4 == 0) {
                  have_read_stdin = '\x01';
                  pplVar19[-1] = 0x1023ce;
                  uVar6 = wc(0,pcVar9,plVar16,0xffffffffffffffff);
                }
                else {
code_r0x0010225d:
                  pplVar19[2] = plVar16;
                  pplVar19[-1] = 0x10226e;
                  uVar6 = func_0x00101ce0(pcVar9,0);
                  if (uVar6 != 0xffffffff) {
                    *(uint *)((long)pplVar19 + 0x1c) = uVar6;
                    pplVar19[-1] = 0x102288;
                    uVar1 = wc((ulong)uVar6,pcVar9,pplVar19[2],0);
                    *(undefined *)(pplVar19 + 2) = uVar1;
                    pplVar19[-1] = 0x102299;
                    iVar4 = func_0x00101b50((ulong)*(uint *)((long)pplVar19 + 0x1c));
                    uVar6 = (uint)*(byte *)(pplVar19 + 2);
                    if (iVar4 == 0) goto code_r0x001022a2;
                  }
                  pplVar19[-1] = 0x1022cd;
                  quotearg_n_style_colon(0,3,pcVar9);
                  pplVar19[-1] = 0x1022d5;
                  puVar14 = (uint *)func_0x001019f0();
                  uVar6 = *puVar14;
                  pplVar19[-1] = 0x1022ea;
                  func_0x00101cd0(0,(ulong)uVar6,&UNK_0010787d);
                  uVar6 = 0;
                }
code_r0x001022a2:
                param_2 = (long *)(ulong)((uint)param_2 & uVar6);
              }
            }
            else {
              lVar15 = 2;
              pbVar22 = pbVar21;
              pbVar24 = &UNK_001078f2;
              do {
                if (lVar15 == 0) break;
                lVar15 = lVar15 + -1;
                bVar26 = *pbVar22 < *pbVar24;
                bVar27 = *pbVar22 == *pbVar24;
                pbVar22 = pbVar22 + (ulong)bVar28 * -2 + 1;
                pbVar24 = pbVar24 + (ulong)bVar28 * -2 + 1;
              } while (bVar27);
              if ((!bVar26 && !bVar27) == bVar26) {
                pplVar19[-1] = 0x10223d;
                iVar4 = func_0x00101bc0(pcVar9,&UNK_001078f2);
                if (iVar4 == 0) {
                  pplVar19[-1] = 0x1022fb;
                  quotearg_style(4,pcVar9);
                  pplVar19[-1] = 0x102311;
                  uVar10 = func_0x00101a80(0,&UNK_00107818,5);
                  pplVar19[-1] = 0x102322;
                  func_0x00101cd0(0,0,uVar10);
                  if (*pcVar9 != '\0') goto code_r0x00102402;
                }
                else {
                  if (*pcVar9 != '\0') {
                    if (plVar18 != (long *)0x0) goto code_r0x0010238c;
                    plVar16 = pplVar19[1];
                    goto code_r0x0010225d;
                  }
                }
              }
              else {
                if (*pcVar9 != '\0') goto code_r0x00102385;
              }
              pplVar19[-1] = 0x102334;
              uVar10 = argv_iter_n_args(puVar25);
              pplVar19[-1] = 0x10234a;
              uVar11 = func_0x00101a80(0,&UNK_0010712c,5);
              pplVar19[-1] = 0x10235c;
              uVar12 = quotearg_n_style_colon(0,3,pbVar21);
              param_2 = (long *)0x0;
              pplVar19[-1] = 0x10237a;
              func_0x00101cd0(0,0,&UNK_0010714a,uVar12,uVar10,uVar11);
            }
            if (plVar18 == (long *)0x0) {
              *(undefined4 *)pplVar19[1] = 1;
            }
            lVar8 = lVar8 + 1;
          }
          uVar6 = *(uint *)((long)pplVar19 + 0x2c);
          if (uVar6 == 3) break;
          if (uVar6 == 4) {
            pplVar19[-1] = 0x10251b;
            pbVar21 = (byte *)quotearg_n_style_colon(0,3,pbVar21);
            uVar7 = 0;
            pplVar19[-1] = 0x102534;
            uVar10 = func_0x00101a80(0,&UNK_0010710e,5);
            pplVar19[-1] = 0x10253c;
            puVar14 = (uint *)func_0x001019f0();
            uVar6 = *puVar14;
            pplVar19[-1] = 0x10254d;
            func_0x00101cd0(0,(ulong)uVar6,uVar10,pbVar21);
          }
          else {
            if (uVar6 != 2) {
              pplVar19[-1] = 0x102444;
              uVar6 = func_0x00101b20(&UNK_001077f0,&UNK_0010711d,0x33f,&__PRETTY_FUNCTION___8129);
            }
            bVar2 = pbVar21 == (byte *)0x0 & (byte)param_2;
            uVar7 = (uint)param_2;
            if (bVar2 != 0) {
              pplVar19[-1] = 0x10245c;
              lVar8 = argv_iter_n_args(puVar25);
              uVar7 = uVar6 & 0xffffff00 | (uint)bVar2;
              if (lVar8 == 0) {
                have_read_stdin = '\x01';
                pplVar19[-1] = 0x1026d1;
                uVar7 = wc(0,0,pplVar19[1],0xffffffffffffffff);
              }
            }
          }
          if (*(char *)((long)pplVar19 + 0x1b) != '\0') goto code_r0x001025f1;
          while( true ) {
            pplVar19[-1] = 0x102478;
            uVar13 = argv_iter_n_args(puVar25);
            if (1 < uVar13) {
              pplVar19[-1] = 0x102491;
              uVar10 = func_0x00101a80(0,&UNK_00107126,5);
              pplVar19[-1] = 0x1024bc;
              write_counts(total_lines,total_words,total_chars,total_bytes,max_line_length,uVar10);
            }
            pplVar19[-1] = 0x1024c4;
            argv_iter_free(puVar25);
            pplVar19[-1] = 0x1024ce;
            func_0x00101dc0(pplVar19[1]);
            if (have_read_stdin == '\0') break;
            pplVar19[-1] = 0x1025cf;
            iVar4 = func_0x00101b50(0);
            if (iVar4 == 0) break;
            pplVar19[-1] = 0x1025dc;
            puVar14 = (uint *)func_0x001019f0();
            uVar6 = *puVar14;
            pplVar19[-1] = 0x1025f1;
            func_0x00101cd0(1,(ulong)uVar6,&UNK_001078f2);
code_r0x001025f1:
            pplVar19[-1] = 0x1025fb;
            readtokens0_free(pplVar19 + 6);
          }
          param_2 = (long *)(ulong)(uVar7 ^ 1);
          plVar18 = (long *)((ulong)pplVar19[0x3d] ^ *(ulong *)(in_FS_OFFSET + 0x28));
          if (plVar18 == (long *)0x0) {
            return (ulong)param_2 & 0xff;
          }
        }
        goto code_r0x00102793;
      }
      if (iVar4 != 0x4c) {
        if (iVar4 != -0x83) goto code_r0x00101f5f;
        goto code_r0x00101f70;
      }
      goto code_r0x00101fb0;
    }
    if (iVar4 == 0x6d) {
      print_chars = 1;
      goto code_r0x00101ef0;
    }
    if (iVar4 < 0x6e) {
      if (iVar4 != 0x6c) goto code_r0x00101f5f;
      print_lines = 1;
      goto code_r0x00101ef0;
    }
    if (iVar4 == 0x77) {
      print_words = 1;
      goto code_r0x00101ef0;
    }
    pbVar22 = optarg;
    if (iVar4 == 0x80) goto code_r0x00101ef0;
  }
code_r0x00101f5f:
  pplVar19[-1] = 0x101f69;
  usage(1);
code_r0x00101f70:
  pplVar19[-2] = 0;
  pplVar19[-3] = 0x101fa7;
  version_etc(stdout,&UNK_00106ff3,&UNK_0010706c,Version);
  pplVar19[-3] = 0x101fae;
  func_0x00101d50();
  pplVar19 = pplVar19 + -2;
code_r0x00101fb0:
  print_linelength = 1;
  pbVar22 = pbVar21;
  goto code_r0x00101ef0;
}

