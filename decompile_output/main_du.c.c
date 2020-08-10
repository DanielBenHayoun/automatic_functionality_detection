
/* WARNING: Could not reconcile some variable overlaps */

ulong main(uint param_1,char **param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  ulong *puVar8;
  uint *puVar9;
  undefined *puVar10;
  char **ppcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  char **ppcVar16;
  char *pcVar17;
  uint uVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  byte *pbVar22;
  long lVar23;
  char **ppcVar24;
  char **in_R9;
  char **ppcVar25;
  byte *pbVar26;
  uint uVar27;
  char **ppcVar28;
  long in_FS_OFFSET;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  byte bVar32;
  undefined auVar33 [16];
  undefined8 uStack360;
  undefined8 uStack352;
  undefined8 uStack344;
  uint uStack336;
  uint uStack332;
  byte *pbStack328;
  char **ppcStack320;
  char **ppcStack312;
  char *pcStack304;
  char **ppcStack296;
  undefined8 *puStack288;
  uint uStack268;
  char *pcStack264;
  char *pcStack256;
  char *pcStack248;
  char **ppcStack240;
  char *pcStack232;
  undefined8 uStack224;
  undefined8 uStack216;
  undefined8 uStack208;
  long lStack64;
  
  bVar32 = 0;
  ppcVar28 = (char **)0x0;
  ppcVar25 = (char **)(ulong)param_1;
  ppcVar16 = (char **)&UNK_00120fb0;
  pbVar26 = (byte *)0x0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uStack224 = 0;
  ppcVar11 = (char **)&uStack268;
  pcStack232 = ".";
  set_program_name(*param_2);
  func_0x00102840(6,&UNK_00121fc1);
  func_0x00102500(&UNK_0011fb0b,&UNK_0011fb3d);
  func_0x001024c0(&UNK_0011fb0b);
  atexit(close_stdout);
  exclude = new_exclude();
  uVar5 = func_0x001023e0(&UNK_0011fb55);
  human_options(uVar5,&human_output_opts,&output_block_size);
  ppcStack320 = &pcStack264;
  uStack332 = uStack332 & 0xffffff00;
  uStack336 = 0x10;
  uStack344 = CONCAT44(uStack344._4_4_,8);
  uStack352._0_1_ = 1;
  pbStack328 = (byte *)((ulong)pbStack328 & 0xffffffffffffff00);
  while( true ) {
    while( true ) {
      uStack268 = 0xffffffff;
      ppcVar24 = ppcVar11;
      iVar3 = func_0x00102570(ppcVar25,param_2,&UNK_0011fb63,long_options);
      if (iVar3 == -1) break;
      if (iVar3 + 0x83U < 0x10b) {
                    /* WARNING: Could not recover jumptable at 0x00102b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)((long)*(int *)((long)ppcVar16 + (ulong)(iVar3 + 0x83U) * 4) +
                          (long)ppcVar16))();
        return uVar5;
      }
      uStack352._0_1_ = 0;
    }
    if ((byte)uStack352 == 0) goto code_r0x00103f2c;
    if (opt_all != '\0') break;
    if ((char)pbStack328 == '\0') goto code_r0x00103e72;
    if ((char)uStack332 == '\0') goto code_r0x00102f09;
    if (max_depth == (char **)0x0) {
      uVar5 = func_0x00102510(0,&UNK_00120d98,5);
      func_0x001028a0(0,0,uVar5);
      if (max_depth == (char **)0x0) {
        do {
          max_depth = (char **)0x0;
code_r0x00102f09:
          do {
            if (opt_inodes != '\0') {
              if (apparent_size != '\0') {
                uVar5 = func_0x00102510(0,&UNK_00120e08,5);
                func_0x001028a0(0,0,uVar5);
              }
              output_block_size = 1;
            }
            if (opt_time != '\0') {
              ppcVar28 = time_style;
              if (time_style != (char **)0x0) goto code_r0x00102f48;
              ppcVar28 = (char **)func_0x001023e0(&UNK_0011fbe5);
              if ((ppcVar28 == (char **)0x0) ||
                 (time_style = ppcVar28, iVar3 = func_0x001026d0(ppcVar28,&UNK_0011fb4e), iVar3 == 0
                 )) {
                ppcVar28 = (char **)&UNK_0011fb34;
                time_style = (char **)&UNK_0011fb34;
code_r0x00103b05:
                ppcVar24 = (char **)0x0;
                in_R9 = argmatch_die;
                lVar6 = __xargmatch_internal
                                  (&UNK_0011fbf0,ppcVar28,time_style_args,time_style_types);
                iVar3 = *(int *)(time_style_types + lVar6 * 4);
                if (iVar3 == 1) {
                  time_format = (char **)&UNK_0011fc13;
                }
                else {
                  if (iVar3 == 0) {
                    time_format = (char **)&UNK_0011fbfb;
                  }
                  else {
                    if (iVar3 == 2) {
                      time_format = (char **)&UNK_0011fc22;
                    }
                  }
                }
              }
              else {
                if (*(char *)ppcVar28 == '+') {
                  puVar10 = (undefined *)func_0x001025a0(ppcVar28,10);
                  if (puVar10 != (undefined *)0x0) {
                    *puVar10 = 0;
                    goto code_r0x00102f48;
                  }
                }
                else {
                  while (ppcVar28 = time_style,
                        iVar3 = func_0x00102420(time_style,&posix_prefix_7365,6), iVar3 == 0) {
                    time_style = (char **)((long)ppcVar28 + 6);
                  }
code_r0x00102f48:
                  if (*(char *)ppcVar28 != '+') goto code_r0x00103b05;
                }
                ppcVar28 = (char **)((long)ppcVar28 + 1);
                time_format = ppcVar28;
              }
            }
            lVar6 = (long)optind;
            iVar3 = (int)ppcVar25;
            if (pbVar26 == (byte *)0x0) {
              ppcVar16 = &pcStack232;
              if (optind < iVar3) {
                ppcVar16 = param_2 + lVar6;
              }
              ppcVar28 = (char **)argv_iter_init_argv(ppcVar16);
              hash_all = optind + 1 < iVar3 || uStack336 == 2;
code_r0x00102fa3:
              ppcVar16 = ppcVar11;
              if ((ppcVar28 != (char **)0x0) && (di_files = di_set_alloc(), di_files != 0)) {
                if ((opt_count_all != '\0') || (hash_all == false)) {
                  uStack344 = uStack344 | 0x100;
                }
                uStack332 = (uint)uStack344 | uStack336;
                uStack336 = uStack336 & 0xffffff00 | (uint)(byte)uStack352;
                puStack288 = &uStack216;
                ppcVar25 = ppcVar11;
                goto code_r0x00103000;
              }
code_r0x00103ddf:
              xalloc_die();
              ppcVar11 = ppcVar16;
code_r0x00103de4:
              lVar6 = func_0x00102560();
            }
            else {
              if (iVar3 <= optind) {
                iVar3 = func_0x001026d0(pbVar26,&UNK_00122542);
                if ((iVar3 != 0) && (lVar6 = freopen_safer(pbVar26,&UNK_00122781,stdin), lVar6 == 0)
                   ) {
                  param_2 = (char **)quotearg_style(4,pbVar26);
                  uVar5 = func_0x00102510(0,&UNK_0011fc3c,5);
                  puVar9 = (uint *)func_0x00102410();
                  func_0x001028a0(1,(ulong)*puVar9,uVar5,param_2);
code_r0x0010391b:
                  iVar3 = rpl_fclose();
                  ppcVar16 = ppcVar11;
                  if (iVar3 != 0) {
code_r0x001035dc:
                    ppcVar11 = ppcVar16;
                    if ((byte)uStack336 != '\0') {
                      pcVar17 = (char *)quotearg_style(4,pbVar26);
                      uVar5 = func_0x00102510(0,&UNK_0011fcdf,5);
                      pcVar13 = pcVar17;
                      lVar6 = func_0x001028a0(1,0,uVar5);
code_r0x00103eb9:
                      bVar29 = true;
code_r0x0010324f:
                      uVar4 = (uint)ppcVar25;
                      uVar18 = (uint)param_2;
                      uVar27 = (uint)ppcVar28;
                      pcStack304 = pcVar13;
                      ppcStack296 = in_R9;
                      if ((-1 < lVar6) && (!bVar29)) {
                        dulvl_7287 = xrealloc();
                        n_alloc_7286 = (char **)((long)ppcVar16 * 2);
                        pcVar13 = pcStack304;
                        in_R9 = ppcStack296;
code_r0x0010329a:
                        ppcVar11 = (char **)((long)prev_level + 1);
                        if (ppcVar11 <= ppcVar16) {
                          lVar6 = (long)prev_level * 0x40 + dulvl_7287;
                          do {
                            ppcVar11 = (char **)((long)ppcVar11 + 1);
                            *(undefined8 *)(lVar6 + 0x40) = 0;
                            *(undefined8 *)(lVar6 + 0x48) = 0;
                            *(undefined8 *)(lVar6 + 0x50) = 0x8000000000000000;
                            *(undefined8 *)(lVar6 + 0x58) = 0xffffffffffffffff;
                            *(undefined8 *)(lVar6 + 0x60) = 0;
                            *(undefined8 *)(lVar6 + 0x68) = 0;
                            *(undefined8 *)(lVar6 + 0x70) = 0x8000000000000000;
                            *(undefined8 *)(lVar6 + 0x78) = 0xffffffffffffffff;
                            lVar6 = lVar6 + 0x40;
                          } while (ppcVar11 <= ppcVar16);
                        }
code_r0x00103300:
                        prev_level = ppcVar16;
                        if ((opt_separate_dirs == '\0') || ((uVar18 & 0xfffffffd) != 4)) {
                          ppcVar11 = (char **)((long)ppcVar16 * 0x40 + dulvl_7287);
                          pcVar14 = pcVar17 + (long)*ppcVar11;
                          if (CARRY8((ulong)pcVar17,(ulong)*ppcVar11) != false) {
                            pcVar14 = (char *)0xffffffffffffffff;
                          }
                          ppcVar11[1] = ppcVar11[1] + 1;
                          *ppcVar11 = pcVar14;
                          if (((long)ppcVar11[2] < (long)pcVar13) ||
                             (((long)ppcVar11[2] <= (long)pcVar13 &&
                              (*(int *)(ppcVar11 + 3) - (int)in_R9 < 0)))) {
                            ppcVar11[2] = pcVar13;
                            *(char ***)(ppcVar11 + 3) = in_R9;
                          }
                        }
                        bVar29 = CARRY8((ulong)pcVar17,(ulong)tot_dui._0_8_);
                        tot_dui._0_8_ = pcVar17 + (long)tot_dui._0_8_;
                        if (bVar29 != false) {
                          tot_dui._0_8_ = (char *)0xffffffffffffffff;
                        }
                        tot_dui._8_8_ = tot_dui._8_8_ + 1;
                        if (((long)tot_dui._16_8_ < (long)pcVar13) ||
                           (((long)tot_dui._16_8_ <= (long)pcVar13 &&
                            (tot_dui._24_4_ - (int)in_R9 < 0)))) {
                          tot_dui._16_8_ = pcVar13;
                          tot_dui._24_8_ = in_R9;
                        }
                        param_2 = (char **)(ulong)(uVar18 & 0xfffffffd);
                        if (((((uVar18 & 0xfffffffd) == 4) || (opt_all != '\0')) &&
                            (ppcVar16 <= max_depth)) || (ppcVar16 == (char **)0x0)) {
                          pcVar17 = pcStack256;
                          if (opt_inodes == '\0') {
                            pcVar17 = pcStack264;
                          }
                          if ((long)opt_threshold < 0) {
                            bVar29 = pcVar17 <= (char *)-(long)opt_threshold;
                          }
                          else {
                            bVar29 = opt_threshold <= pcVar17;
                          }
                          if (bVar29) {
                            print_size(&pcStack264);
                          }
                        }
code_r0x00103400:
                        ppcVar11 = (char **)(ulong)(uVar27 & uVar4);
                        while( true ) {
                          uVar27 = (uint)ppcVar11;
                          ppcVar16 = (char **)rpl_fts_read();
                          if (ppcVar16 != (char **)0x0) break;
                          puVar9 = (uint *)func_0x00102410();
                          ppcVar25 = ppcStack312;
                          ppcVar28 = ppcStack320;
                          pbVar26 = pbStack328;
                          if (*puVar9 != 0) {
                            ppcVar11 = (char **)0x0;
                            param_2 = (char **)quotearg_n_style_colon
                                                         (0,3,*(undefined8 *)(uStack344 + 0x20));
                            uVar5 = func_0x00102510(0,&UNK_0011fc6f,5);
                            func_0x001028a0(0,(ulong)*puVar9,uVar5,param_2);
                          }
                          prev_level = (char **)0x0;
                          iVar3 = rpl_fts_close(uStack344);
                          if (iVar3 != 0) {
                            ppcVar11 = (char **)0x0;
                            uVar5 = func_0x00102510(0,&UNK_0011fcce,5);
                            func_0x001028a0(0,(ulong)*puVar9,uVar5);
                          }
                          uStack336 = uStack336 & 0xffffff00 |
                                      (uint)((byte)uStack336 & (byte)ppcVar11);
code_r0x00103000:
                          pbVar7 = (byte *)argv_iter(ppcVar28);
                          if (pbVar7 == (byte *)0x0) {
                            ppcVar16 = ppcVar11;
                            if (uStack268 == 3) goto code_r0x00103ddf;
                            if (uStack268 == 4) {
code_r0x0010355f:
                              param_2 = (char **)quotearg_n_style_colon(0,3,pbVar26);
                              uVar5 = func_0x00102510(0,&UNK_0011fc57,5);
                              puVar9 = (uint *)func_0x00102410();
                              func_0x001028a0(0,(ulong)*puVar9,uVar5,param_2);
                              uStack336 = uStack336 & 0xffffff00;
                            }
                            else {
                              if (uStack268 != 2) {
                                func_0x00102600(&UNK_00120e88,&UNK_0011fc66,0x438,
                                                &__PRETTY_FUNCTION___7387);
                                goto code_r0x0010355f;
                              }
                            }
                            argv_iter_free(ppcVar28);
                            di_set_free(di_files);
                            if (di_mnt != 0) {
                              di_set_free();
                            }
                            if (pbVar26 == (byte *)0x0) goto code_r0x001035e7;
                            if ((*stdin & 0x20) == 0) goto code_r0x0010391b;
                            goto code_r0x001035dc;
                          }
                          bVar29 = false;
                          bVar31 = pbVar26 == (byte *)0x0;
                          if (!bVar31) {
                            lVar6 = 2;
                            pbVar19 = pbVar26;
                            pbVar22 = &UNK_00122542;
                            do {
                              if (lVar6 == 0) break;
                              lVar6 = lVar6 + -1;
                              bVar29 = *pbVar19 < *pbVar22;
                              bVar31 = *pbVar19 == *pbVar22;
                              pbVar19 = pbVar19 + (ulong)bVar32 * -2 + 1;
                              pbVar22 = pbVar22 + (ulong)bVar32 * -2 + 1;
                            } while (bVar31);
                            bVar30 = false;
                            bVar29 = (!bVar29 && !bVar31) == bVar29;
                            if (bVar29) {
                              lVar6 = 2;
                              pbVar19 = pbVar7;
                              pbVar22 = &UNK_00122542;
                              do {
                                if (lVar6 == 0) break;
                                lVar6 = lVar6 + -1;
                                bVar30 = *pbVar19 < *pbVar22;
                                bVar29 = *pbVar19 == *pbVar22;
                                pbVar19 = pbVar19 + (ulong)bVar32 * -2 + 1;
                                pbVar22 = pbVar22 + (ulong)bVar32 * -2 + 1;
                              } while (bVar29);
                              if ((!bVar30 && !bVar29) != bVar30) goto code_r0x00103057;
                              param_2 = (char **)quotearg_style(4,pbVar7);
                              uVar5 = func_0x00102510(0,&UNK_00120eb0,5);
                              func_0x001028a0(0,0,uVar5,param_2);
                              if (*pbVar7 != 0) goto code_r0x001034e1;
                            }
                            else {
code_r0x00103057:
                              if (*pbVar7 != 0) goto code_r0x00103060;
                            }
                            ppcVar24 = (char **)argv_iter_n_args(ppcVar28);
                            param_2 = (char **)func_0x00102510(0,&UNK_0011fcf6,5);
                            uVar5 = quotearg_n_style_colon(0,3,pbVar26);
                            in_R9 = param_2;
                            func_0x001028a0(0,0,&UNK_0011fd14,uVar5);
                            uStack336 = uStack336 & 0xffffff00;
                            goto code_r0x00103000;
                          }
                          if (*pbVar7 == 0) {
                            uVar5 = func_0x00102510(0,&UNK_0011fcf6,5);
                            func_0x001028a0(0,0,&UNK_00121480,uVar5);
code_r0x001034e1:
                            uStack336 = uStack336 & 0xffffff00;
                            goto code_r0x00103000;
                          }
code_r0x00103060:
                          temp_argv_7378._0_8_ = pbVar7;
                          uStack344 = xfts_open(temp_argv_7378,(ulong)uStack332,0);
                          ppcVar11 = (char **)(ulong)(byte)uStack352;
                          pbStack328 = pbVar26;
                          ppcStack320 = ppcVar28;
                          ppcStack312 = ppcVar25;
                        }
                        uVar1 = *(ushort *)(ppcVar16 + 0xe);
                        param_2 = (char **)(ulong)uVar1;
                        uVar4 = (uint)uVar1;
                        pbVar26 = (byte *)ppcVar16[7];
                        ppcVar28 = ppcVar11;
                        if (uVar1 == 4) {
                          ppcVar25 = (char **)0x0;
                          uVar5 = quotearg_style(4,pbVar26);
                          uVar12 = func_0x00102510(0,&UNK_0011fc83,5);
                          func_0x001028a0(0,(ulong)*(uint *)(ppcVar16 + 8),uVar12,uVar5);
code_r0x001031b0:
                          if (time_type == 0) {
                            pcVar13 = ppcVar16[0x1a];
                            in_R9 = (char **)ppcVar16[0x1b];
                            goto code_r0x001031cc;
                          }
                          if (time_type == 2) goto code_r0x00103a84;
                          pcVar13 = ppcVar16[0x1c];
                          in_R9 = (char **)ppcVar16[0x1d];
                          goto code_r0x001031cc;
                        }
                        ppcVar25 = (char **)(ulong)(byte)uStack352;
                        if (uVar1 == 6) goto code_r0x001031b0;
                        cVar2 = excluded_file_name();
                        if (cVar2 == '\0') {
                          ppcVar11 = ppcVar24;
                          if (uVar1 == 0xb) {
                            rpl_fts_set(uStack344,ppcVar16,1);
                            ppcVar11 = (char **)rpl_fts_read();
                            if (ppcVar16 != ppcVar11) {
                              func_0x00102600(&UNK_0011fc9c,&UNK_0011fc66,0x20e,
                                              __PRETTY_FUNCTION___7293);
                              goto code_r0x00103eec;
                            }
                            param_2 = (char **)(ulong)*(ushort *)(ppcVar16 + 0xe);
                            ppcVar11 = ppcVar24;
                          }
                          uVar4 = (uint)param_2;
                          uVar20 = (ulong)(uVar4 == 10 || uVar4 == 0xd);
                          ppcVar24 = (char **)((ulong)ppcVar11 & 0xffffffffffffff00 | uVar20);
                          ppcVar25 = (char **)((ulong)ppcVar11 & 0xffffff00 | uVar20);
                          if (uVar4 == 10 || uVar4 == 0xd) {
                            uVar4 = 0;
                            uVar5 = quotearg_style(4,pbVar26);
                            uVar12 = func_0x00102510(0,&UNK_0011fca5,5);
                            func_0x001028a0(0,(ulong)*(uint *)(ppcVar16 + 8),uVar12,uVar5);
                          }
                          else {
                            if ((((*(byte *)(uStack344 + 0x48) & 0x40) != 0) &&
                                (0 < (long)ppcVar16[0xb])) &&
                               (*(char **)(uStack344 + 0x18) != ppcVar16[0xf]))
                            goto code_r0x0010311b;
                            if ((opt_count_all == '\0') &&
                               ((hash_all != false ||
                                (((*(uint *)(ppcVar16 + 0x12) & 0xf000) != 0x4000 &&
                                 ((char *)0x1 < ppcVar16[0x11])))))) {
                              iVar3 = di_set_insert(di_files,ppcVar16[0xf],ppcVar16[0x10]);
                              if (iVar3 < 0) goto code_r0x00103ddf;
                              if (iVar3 == 0) goto code_r0x0010311b;
                            }
                            if (uVar4 != 2) {
                              if (uVar4 == 7) {
                                uVar5 = quotearg_n_style_colon(0,3,pbVar26);
                                func_0x001028a0(0,(ulong)*(uint *)(ppcVar16 + 8),&UNK_00121480,uVar5
                                               );
                              }
                              else {
                                if (uVar4 == 1) goto code_r0x00103124;
                                ppcVar25 = (char **)(ulong)(byte)uStack352;
                              }
                              goto code_r0x001031b0;
                            }
                            ppcVar11 = (char **)cycle_warning_required(uStack344);
                            if ((char)ppcVar11 == '\0') goto code_r0x00103124;
                            param_2 = (char **)*ppcVar16;
                            if (di_mnt == 0) {
                              di_mnt = di_set_alloc();
                              if (di_mnt == 0) goto code_r0x00103ddf;
                              ppcVar11 = (char **)read_file_system_list(0);
                              ppcVar25 = ppcVar11;
                              while (ppcVar25 != (char **)0x0) {
                                if ((((*(byte *)(ppcVar25 + 5) & 3) == 0) &&
                                    (iVar3 = func_0x00102740(1,ppcVar25[1],puStack288), iVar3 == 0))
                                   && (iVar3 = di_set_insert(di_mnt,uStack216,uStack208), iVar3 < 0)
                                   ) goto code_r0x00103ddf;
                                ppcVar25 = (char **)ppcVar25[6];
                                ppcVar11 = (char **)free_mount_entry();
                              }
                            }
                            while (uVar4 = (uint)ppcVar11 & 0xffffff00 |
                                           (uint)(ppcVar16 != (char **)0x0 && param_2 != ppcVar16),
                                  ppcVar16 != (char **)0x0 && param_2 != ppcVar16) {
                              ppcVar11 = (char **)di_set_lookup(di_mnt,ppcVar16[0xf],ppcVar16[0x10])
                              ;
                              if (0 < (int)ppcVar11) goto code_r0x00103124;
                              ppcVar16 = (char **)ppcVar16[1];
                            }
                            uVar5 = quotearg_n_style_colon(0,3,pbVar26);
                            uVar12 = func_0x00102510(0,&UNK_00120ef0,5);
                            func_0x001028a0(0,0,uVar12,uVar5);
                          }
                          goto code_r0x00103400;
                        }
code_r0x0010311b:
                        uVar20 = uStack344;
                        param_2 = (char **)(ulong)(uVar4 - 1);
                        if (uVar4 - 1 == 0) {
                          rpl_fts_set(uStack344,ppcVar16,4);
                          ppcVar11 = (char **)rpl_fts_read(uVar20);
                          if (ppcVar16 != ppcVar11) goto code_r0x00103a65;
                        }
code_r0x00103124:
                        uVar4 = (uint)(byte)uStack352;
                        goto code_r0x00103400;
                      }
                      goto code_r0x00103ddf;
                    }
                  }
code_r0x001035e7:
                  if (print_grand_total != '\0') {
                    uVar5 = func_0x00102510(0,&UNK_0011fcf0,5);
                    print_size(tot_dui,uVar5);
                  }
                  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
                    return (ulong)((byte)uStack336 ^ 1);
                  }
                  goto code_r0x00103de4;
                }
                ppcVar28 = (char **)argv_iter_init_stream(stdin);
                hash_all = true;
                goto code_r0x00102fa3;
              }
            }
            uVar5 = quote(param_2[lVar6]);
            uVar12 = func_0x00102510(0,&UNK_0011fc2b,5);
            func_0x001028a0(0,0,uVar12,uVar5);
            uVar5 = func_0x00102510(0,&UNK_00120e50,5);
            func_0x00102970(stderr,1,&UNK_00121f70,uVar5);
            uVar4 = usage();
            ppcVar24 = optarg;
            xstrtol_fatal((ulong)uVar4,(ulong)uStack268,0x74,long_options);
code_r0x00103e72:
          } while ((char)uStack332 == '\0');
        } while( true );
      }
    }
    ppcVar16 = max_depth;
    uVar5 = func_0x00102510(0,&UNK_00120dd0,5);
    func_0x001028a0(0,0,uVar5,ppcVar16);
    usage(1);
    uStack352 = quote();
    uVar5 = func_0x00102510(0,&UNK_0011fb7b,5);
    func_0x001028a0(0,0,uVar5,uStack352);
    uStack352._0_1_ = 0;
  }
  if ((char)uStack332 == '\0') goto code_r0x00102f09;
code_r0x00103f0b:
  uVar5 = func_0x00102510(0,&UNK_00120d68,5);
  func_0x001028a0(0,0,uVar5);
code_r0x00103f2c:
  auVar33 = usage(1);
  uVar5 = uStack360;
  uStack360 = SUB168(auVar33,0);
  (*(code *)PTR___libc_start_main_00327fe0)
            (main,uVar5,&uStack352,__libc_csu_init,__libc_csu_fini,SUB168(auVar33 >> 0x40,0),
             &uStack360);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
code_r0x00103a65:
  func_0x00102600(&UNK_0011fc9c,&UNK_0011fc66,0x22f,__PRETTY_FUNCTION___7293);
code_r0x00103a84:
  pcVar13 = ppcVar16[0x18];
  in_R9 = (char **)ppcVar16[0x19];
code_r0x001031cc:
  uVar4 = (uint)ppcVar25;
  uVar18 = (uint)param_2;
  if (apparent_size == '\0') {
    pcVar17 = (char *)((long)ppcVar16[0x17] << 9);
  }
  else {
    pcVar17 = (char *)0x0;
    if (-1 < (long)ppcVar16[0x15]) {
      pcVar17 = ppcVar16[0x15];
    }
  }
  ppcVar16 = (char **)ppcVar16[0xb];
  pcStack256 = (char *)0x1;
  pcStack264 = pcVar17;
  pcStack248 = pcVar13;
  ppcStack240 = in_R9;
  if (n_alloc_7286 == (char **)0x0) {
    n_alloc_7286 = (char **)((long)ppcVar16 + 10);
    pcStack304 = pcVar13;
    ppcStack296 = in_R9;
    dulvl_7287 = xcalloc();
    pcVar13 = pcStack304;
    in_R9 = ppcStack296;
    goto code_r0x00103300;
  }
  if (ppcVar16 == prev_level) goto code_r0x00103300;
  if (ppcVar16 <= prev_level) {
    if (ppcVar16 != (char **)((long)prev_level + -1)) {
code_r0x00103eec:
      func_0x00102600(&UNK_0011fcb6,&UNK_0011fc66,0x27d,__PRETTY_FUNCTION___7293);
      goto code_r0x00103f0b;
    }
    puVar8 = (ulong *)((long)prev_level * 0x40 + dulvl_7287);
    pcStack264 = pcVar17 + *puVar8;
    if (CARRY8((ulong)pcVar17,*puVar8) != false) {
      pcStack264 = (char *)0xffffffffffffffff;
    }
    pcStack256 = (char *)(puVar8[1] + 1);
    if (((long)pcVar13 < (long)puVar8[2]) ||
       (((long)pcVar13 <= (long)puVar8[2] &&
        (in_R9 = (char **)((ulong)in_R9 & 0xffffffff), (int)in_R9 - *(int *)(puVar8 + 3) < 0)))) {
                    /* WARNING: Load size is inaccurate */
      pcStack248 = SUB168(*(undefined *)(puVar8 + 2),0);
      ppcStack240 = SUB168(*(undefined *)(puVar8 + 2) >> 0x40,0);
    }
    if (opt_separate_dirs == '\0') {
      bVar29 = CARRY8((ulong)pcStack264,puVar8[4]);
      pcStack264 = pcStack264 + puVar8[4];
      if (bVar29 != false) {
        pcStack264 = (char *)0xffffffffffffffff;
      }
      pcStack256 = pcStack256 + puVar8[5];
      if (((long)pcStack248 < (long)puVar8[6]) ||
         (((long)pcStack248 <= (long)puVar8[6] && ((int)ppcStack240 - *(int *)(puVar8 + 7) < 0)))) {
                    /* WARNING: Load size is inaccurate */
        pcStack248 = SUB168(*(undefined *)(puVar8 + 6),0);
        ppcStack240 = SUB168(*(undefined *)(puVar8 + 6) >> 0x40,0);
      }
    }
    lVar15 = dulvl_7287 + (long)ppcVar16 * 0x40;
    uVar20 = *puVar8 + *(ulong *)(lVar15 + 0x20);
    lVar6 = *(long *)(lVar15 + 0x30);
    if (CARRY8(*puVar8,*(ulong *)(lVar15 + 0x20)) != false) {
      uVar20 = 0xffffffffffffffff;
    }
    lVar23 = puVar8[1] + *(long *)(lVar15 + 0x28);
    *(ulong *)(lVar15 + 0x20) = uVar20;
    *(long *)(lVar15 + 0x28) = lVar23;
    if ((lVar6 < (long)puVar8[2]) ||
       ((lVar6 <= (long)puVar8[2] && (*(int *)(lVar15 + 0x38) - *(int *)(puVar8 + 3) < 0)))) {
                    /* WARNING: Load size is inaccurate */
      auVar33 = *(undefined *)(puVar8 + 2);
      lVar6 = SUB168(auVar33,0);
      *(undefined4 *)(lVar15 + 0x30) = SUB164(auVar33,0);
      *(undefined4 *)(lVar15 + 0x34) = SUB164(auVar33 >> 0x20,0);
      *(undefined4 *)(lVar15 + 0x38) = SUB164(auVar33 >> 0x40,0);
      *(undefined4 *)(lVar15 + 0x3c) = SUB164(auVar33 >> 0x60,0);
    }
    lVar21 = uVar20 + puVar8[4];
    if (CARRY8(uVar20,puVar8[4]) != false) {
      lVar21 = -1;
    }
    uVar20 = puVar8[5];
    *(long *)(lVar15 + 0x20) = lVar21;
    *(long *)(lVar15 + 0x28) = lVar23 + uVar20;
    if ((lVar6 < (long)puVar8[6]) ||
       ((lVar6 <= (long)puVar8[6] && (*(int *)(lVar15 + 0x38) - *(int *)(puVar8 + 7) < 0)))) {
                    /* WARNING: Load size is inaccurate */
      auVar33 = *(undefined *)(puVar8 + 6);
      *(undefined4 *)(lVar15 + 0x30) = SUB164(auVar33,0);
      *(undefined4 *)(lVar15 + 0x34) = SUB164(auVar33 >> 0x20,0);
      *(undefined4 *)(lVar15 + 0x38) = SUB164(auVar33 >> 0x40,0);
      *(undefined4 *)(lVar15 + 0x3c) = SUB164(auVar33 >> 0x60,0);
    }
    goto code_r0x00103300;
  }
  if (n_alloc_7286 <= ppcVar16) goto code_r0x00103235;
  goto code_r0x0010329a;
code_r0x00103235:
  bVar29 = false;
  lVar6 = SUB168(ZEXT816(0x80) * ZEXT816(ppcVar16),0);
  if (SUB168(ZEXT816(0x80) * ZEXT816(ppcVar16) >> 0x40,0) != 0) goto code_r0x00103eb9;
  goto code_r0x0010324f;
}

