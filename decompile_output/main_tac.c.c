
ulong main(ulong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  byte **ppbVar14;
  byte **ppbVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined *puVar18;
  char *pcVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  undefined auVar26 [16];
  byte *apbStack112 [3];
  byte **ppbStack88;
  byte bStack73;
  byte *apbStack72 [3];
  
  bVar25 = 0;
  set_program_name(*param_2);
  func_0x00101b50(6,&UNK_00114c01);
  func_0x00101950(&UNK_001141f2,&UNK_00114220);
  func_0x00101920(&UNK_001141f2);
  atexit(close_stdout);
  sentinel_length = 1;
  separator_ends_record = 1;
  separator = "\n";
  ppbVar14 = apbStack112 + 3;
  while( true ) {
    uVar5 = (uint)(param_1 & 0xffffffff);
    ppbVar14[-1] = 0x101d25;
    iVar4 = func_0x001019a0(param_1 & 0xffffffff,param_2,&UNK_00114254,longopts,0);
    if (iVar4 == -1) break;
    ppbVar15 = ppbVar14;
    if (iVar4 == 0x62) {
code_r0x00101da8:
      separator_ends_record = 0;
      ppbVar14 = ppbVar15;
    }
    else {
      if (iVar4 < 99) {
        if (iVar4 == -0x83) {
          ppbVar15 = ppbVar14 + -2;
          ppbVar14[-2] = 0;
          ppbVar14[-3] = 0x101d9a;
          version_etc(stdout,&UNK_00114174,&UNK_001141ee,Version,&UNK_00114248,&UNK_00114238);
          ppbVar14[-3] = 0x101da1;
          func_0x00101c00();
          goto code_r0x00101da8;
        }
        if (iVar4 != -0x82) goto code_r0x001023cb;
        ppbVar14[-1] = 0x1023bf;
        read_size = usage(0);
        goto code_r0x001023c6;
      }
      if (iVar4 == 0x72) {
        sentinel_length = 0;
      }
      else {
        if (iVar4 != 0x73) goto code_r0x001023cb;
        separator = optarg;
      }
    }
  }
  if (sentinel_length == 0) {
    if (*separator != '\0') {
      compiled_separator._0_8_ = 0;
      compiled_separator._8_8_ = 0;
      compiled_separator._40_8_ = 0;
      uVar12 = 0xffffffffffffffff;
      compiled_separator._32_8_ = compiled_separator_fastmap;
      pcVar19 = separator;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar19 + (ulong)bVar25 * -2 + 1;
      } while (cVar1 != '\0');
      ppbVar14[-1] = 0x101e3c;
      lVar11 = rpl_re_compile_pattern(separator,~uVar12 - 1,compiled_separator);
      if (lVar11 != 0) goto code_r0x001023f9;
      goto code_r0x00101e45;
    }
  }
  else {
    match_length = 1;
    sentinel_length = match_length;
    if (*separator != '\0') {
      uVar12 = 0xffffffffffffffff;
      pcVar19 = separator;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar19 + (ulong)bVar25 * -2 + 1;
      } while (cVar1 != '\0');
      match_length = ~uVar12 - 1;
      sentinel_length = match_length;
    }
code_r0x00101e45:
    read_size = 0x2000;
    iVar4 = 0x32;
    uVar12 = 0x2000;
    if (sentinel_length < 0x1000) {
code_r0x00101e8e:
      uVar12 = read_size + 1 + sentinel_length;
      G_buffer_size = uVar12 * 2;
      if (read_size < uVar12 && uVar12 < G_buffer_size) {
        ppbVar14[-1] = 0x101eb7;
        G_buffer = xmalloc();
        uVar12 = sentinel_length;
        if (sentinel_length == 0) {
          G_buffer = G_buffer + 1;
        }
        else {
          ppbVar14[-1] = 0x1022ef;
          G_buffer = func_0x00101a90(G_buffer,separator,sentinel_length + 1);
          G_buffer = G_buffer + uVar12;
        }
        bVar23 = optind < uVar5;
        bVar24 = optind == uVar5;
        if ((int)optind < (int)uVar5) {
          puVar22 = (undefined1 *)(param_2 + (int)optind);
          pbVar21 = *(byte **)puVar22;
          bVar23 = false;
          bVar24 = pbVar21 == (byte *)0x0;
          if (bVar24) {
            *(undefined *)((long)ppbVar14 + 0xf) = 1;
            goto code_r0x001020cf;
          }
          ppbVar14[2] = &UNK_001146ca;
        }
        else {
          puVar22 = default_file_list_7113;
          ppbVar14[2] = &UNK_001146ca;
          pbVar21 = &UNK_001146ca;
        }
        *(undefined *)((long)ppbVar14 + 0xf) = 1;
        *(byte ***)ppbVar14 = (byte **)puVar22 + 1;
        do {
          lVar11 = 2;
          pbVar17 = pbVar21;
          pbVar20 = ppbVar14[2];
          do {
            if (lVar11 == 0) break;
            lVar11 = lVar11 + -1;
            bVar23 = *pbVar17 < *pbVar20;
            bVar24 = *pbVar17 == *pbVar20;
            pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
            pbVar20 = pbVar20 + (ulong)bVar25 * -2 + 1;
          } while (bVar24);
          if ((!bVar23 && !bVar24) == bVar23) {
            have_read_stdin = '\x01';
            uVar12 = 0;
            ppbVar14[-1] = 0x101fa0;
            pbVar21 = (byte *)func_0x00101960(0,&UNK_00114273,5);
code_r0x00101fa3:
            ppbVar14[-1] = 0x101fb1;
            lVar11 = func_0x001019f0(uVar12,0,2);
            if (lVar11 < 0) {
code_r0x00101fc8:
              lVar11 = tmp_fp_7066;
              if (tempfile_7065 == (byte *)0x0) {
                ppbVar14[-1] = 0x102222;
                puVar18 = (undefined *)func_0x00101870(&UNK_001142a0);
                if (puVar18 == (undefined *)0x0) {
                  puVar18 = &UNK_0011421b;
                }
                ppbVar14[-1] = 0x102244;
                tempfile_7065 = (byte *)mfile_name_concat(puVar18,&UNK_001142d8,0);
                ppbVar14[-1] = 0x102253;
                uVar5 = mkstemp_safer(tempfile_7065);
                if ((int)uVar5 < 0) {
                  ppbVar14[-1] = 0x10230e;
                  uVar10 = quotearg_style(4,puVar18);
                  ppbVar14[-1] = 0x102324;
                  uVar8 = func_0x00101960(0,&UNK_00114630,5);
                  ppbVar14[-1] = 0x10232c;
                  puVar9 = (uint *)func_0x001018a0();
                  uVar5 = *puVar9;
                  ppbVar14[-1] = 0x10233d;
                  func_0x00101ba0(0,(ulong)uVar5,uVar8,uVar10);
                }
                else {
                  ppbVar14[-1] = 0x10226c;
                  tmp_fp_7066 = func_0x00101b40((ulong)uVar5,&UNK_001142a7);
                  if (tmp_fp_7066 != 0) {
                    ppbVar14[-1] = 0x102288;
                    func_0x001018b0();
                    goto code_r0x00102016;
                  }
                  ppbVar14[-1] = 0x102368;
                  uVar10 = quotearg_style(4,tempfile_7065);
                  ppbVar14[-1] = 0x10237e;
                  pbVar17 = (byte *)func_0x00101960(0,&UNK_001142aa,5);
                  ppbVar14[3] = pbVar17;
                  ppbVar14[-1] = 0x102388;
                  puVar9 = (uint *)func_0x001018a0();
                  uVar2 = *puVar9;
                  ppbVar14[-1] = 0x10239b;
                  func_0x00101ba0(0,(ulong)uVar2,ppbVar14[3],uVar10);
                  ppbVar14[-1] = 0x1023a3;
                  func_0x00101a20((ulong)uVar5);
                  ppbVar14[-1] = 0x1023af;
                  func_0x001018b0(tempfile_7065);
                }
                bVar3 = 0;
                ppbVar14[-1] = 0x10234b;
                func_0x00101880(tempfile_7065);
                tempfile_7065 = (byte *)0x0;
              }
              else {
                ppbVar14[-1] = 0x101fe5;
                func_0x00101910(tmp_fp_7066);
                ppbVar14[-1] = 0x101ff1;
                iVar4 = rpl_fseeko(lVar11,0,0);
                if (iVar4 < 0) {
code_r0x001020ff:
                  ppbVar14[-1] = 0x102110;
                  uVar10 = quotearg_style(4,tempfile_7065);
                  puVar18 = &UNK_00114658;
code_r0x0010211f:
                  ppbVar14[-1] = 0x102126;
                  uVar8 = func_0x00101960(0,puVar18,5);
                  ppbVar14[-1] = 0x10212e;
                  puVar9 = (uint *)func_0x001018a0();
                  uVar5 = *puVar9;
                  ppbVar14[-1] = 0x10213f;
                  func_0x00101ba0(0,(ulong)uVar5,uVar8,uVar10);
                }
                else {
                  ppbVar14[-1] = 0x102005;
                  uVar5 = func_0x00101aa0(tmp_fp_7066);
                  ppbVar14[-1] = 0x10200e;
                  iVar4 = func_0x001019d0((ulong)uVar5,0);
                  if (iVar4 < 0) goto code_r0x001020ff;
code_r0x00102016:
                  lVar11 = tmp_fp_7066;
                  lVar13 = 0;
                  ppbVar14[3] = tempfile_7065;
                  while( true ) {
                    ppbVar14[-1] = 0x102072;
                    lVar7 = safe_read(uVar12,G_buffer,read_size);
                    if (lVar7 == 0) break;
                    if (lVar7 == -1) {
                      ppbVar14[-1] = 0x1021dd;
                      uVar10 = quotearg_n_style_colon(0,3,pbVar21);
                      puVar18 = &UNK_00114154;
                      goto code_r0x0010211f;
                    }
                    ppbVar14[-1] = 0x102051;
                    lVar6 = func_0x00101b20(G_buffer,1,lVar7,lVar11);
                    if (lVar7 != lVar6) goto code_r0x001021f1;
                    lVar13 = lVar13 + lVar7;
                  }
                  ppbVar14[-1] = 0x102082;
                  iVar4 = func_0x00101c30(lVar11);
                  if (iVar4 != 0) {
code_r0x001021f1:
                    ppbVar14[-1] = 0x102202;
                    uVar10 = quotearg_n_style_colon(0,3,ppbVar14[3]);
                    puVar18 = &UNK_001142c8;
                    goto code_r0x0010211f;
                  }
                  if (-1 < lVar13) {
                    ppbVar14[-1] = 0x10209b;
                    uVar5 = func_0x00101aa0(lVar11);
                    ppbVar14[-1] = 0x1020aa;
                    bVar3 = tac_seekable((ulong)uVar5,ppbVar14[3],lVar13);
                    goto code_r0x001020ac;
                  }
                }
                bVar3 = 0;
              }
            }
            else {
              ppbVar14[-1] = 0x101fc0;
              iVar4 = func_0x001018f0(uVar12);
              if (iVar4 != 0) goto code_r0x00101fc8;
              ppbVar14[-1] = 0x10229a;
              bVar3 = tac_seekable(uVar12,pbVar21,lVar11);
            }
code_r0x001020ac:
            if ((!bVar23 && !bVar24) != bVar23) {
              ppbVar14[-1] = 0x1021a6;
              iVar4 = func_0x00101a20(uVar12);
              if (iVar4 != 0) {
                ppbVar14[-1] = 0x1021bd;
                uVar10 = quotearg_n_style_colon(0,3,pbVar21);
                puVar18 = &UNK_00114154;
                goto code_r0x00102178;
              }
            }
          }
          else {
            ppbVar14[-1] = 0x102152;
            uVar5 = func_0x00101bb0(pbVar21,0);
            uVar12 = (ulong)uVar5;
            if (-1 < (int)uVar5) goto code_r0x00101fa3;
            ppbVar14[-1] = 0x102169;
            uVar10 = quotearg_style(4,pbVar21);
            puVar18 = &UNK_00114282;
code_r0x00102178:
            ppbVar14[-1] = 0x10217f;
            uVar8 = func_0x00101960(0,puVar18,5);
            ppbVar14[-1] = 0x102187;
            puVar9 = (uint *)func_0x001018a0();
            uVar5 = *puVar9;
            bVar3 = 0;
            ppbVar14[-1] = 0x10219a;
            func_0x00101ba0(0,(ulong)uVar5,uVar8,uVar10);
          }
          *(long *)ppbVar14 = (long)*ppbVar14 + 8;
          *(byte *)((long)ppbVar14 + 0xf) = *(byte *)((long)ppbVar14 + 0xf) & bVar3;
          pbVar21 = *(byte **)((long)*ppbVar14 + -8);
          bVar23 = false;
          bVar24 = pbVar21 == (byte *)0x0;
        } while (!bVar24);
code_r0x001020cf:
        ppbVar14[-1] = 0x1020d8;
        output(0,0);
        if (have_read_stdin != '\0') {
          ppbVar14[-1] = 0x1022a8;
          iVar4 = func_0x00101a20(0);
          if (iVar4 < 0) {
            ppbVar14[-1] = 0x1022b5;
            puVar9 = (uint *)func_0x001018a0();
            uVar5 = *puVar9;
            ppbVar14[-1] = 0x1022c7;
            func_0x00101ba0(0,(ulong)uVar5,&UNK_001146ca);
            *(undefined *)((long)ppbVar14 + 0xf) = 0;
          }
        }
        return (ulong)(*(byte *)((long)ppbVar14 + 0xf) ^ 1);
      }
    }
    else {
      do {
        read_size = uVar12 * 2;
        if (sentinel_length < (uVar12 & 0x7fffffffffffffff)) goto code_r0x00101e8e;
        iVar4 = iVar4 + -1;
        uVar12 = read_size;
      } while (iVar4 != 0);
    }
code_r0x001023c6:
    ppbVar14[-1] = 0x1023cb;
    xalloc_die();
code_r0x001023cb:
    ppbVar14[-1] = 0x1023d5;
    usage(1);
  }
  ppbVar14[-1] = 0x1023e8;
  uVar10 = func_0x00101960(0,&UNK_00114259,5);
  ppbVar14[-1] = 0x1023f9;
  lVar11 = func_0x00101ba0(1,0,uVar10);
code_r0x001023f9:
  ppbVar14[-1] = 0x102411;
  auVar26 = func_0x00101ba0(1,0,&UNK_00114680,lVar11);
  uVar10 = *ppbVar14;
  uVar16 = (ulong)(ppbVar14 + 1) & 0xfffffffffffffff0;
  *(undefined8 *)(uVar16 - 8) = SUB168(auVar26,0);
  *(ulong *)(uVar16 - 0x10) = uVar16 - 8;
  *(undefined8 *)(uVar16 - 0x18) = 0x10244a;
  (*(code *)PTR___libc_start_main_00318fd8)
            (main,uVar10,ppbVar14 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar26 >> 0x40,0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

