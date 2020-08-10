
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

undefined8 main(int param_1,undefined8 *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined8 *unaff_R12;
  undefined8 *puVar15;
  long *unaff_R13;
  ulong *unaff_R14;
  undefined1 *puVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  int *piStack192;
  undefined8 uStack184;
  int iStack156;
  int iStack152;
  int iStack148;
  long lStack144;
  ulong uStack136;
  undefined8 uStack128;
  long *plStack120;
  long lStack104;
  undefined8 uStack96;
  long *plStack88;
  undefined8 uStack80;
  undefined8 uStack72;
  long lStack64;
  
  bVar19 = 0;
  plVar11 = (long *)(long)param_1;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  iStack152 = 0;
  uStack72 = 0;
  puVar16 = (undefined1 *)&lStack104;
  iStack148 = 0;
  set_program_name(*param_2);
  func_0x001018d0(6,&UNK_00107d58);
  func_0x001016e0(&UNK_00107e1b,&UNK_00107e55);
  func_0x001016c0(&UNK_00107e1b);
  hard_LC_COLLATE = hard_locale(3);
  atexit(close_stdout);
  atexit(free_spareline);
  piStack192 = (int *)&iStack156;
  print_pairables = '\x01';
  seen_unpairable = 0;
  issued_disorder_warning._1_1_ = '\0';
  issued_disorder_warning._0_1_ = 0;
  uStack184 = (int *)(&iStack156 + 1);
  check_input_order = 0;
code_r0x00101ae4:
  uVar4 = func_0x00101730((ulong)plVar11 & 0xffffffff,param_2,&UNK_00107eab,longopts,0);
  puVar15 = optarg;
  if (uVar4 == 0xffffffff) {
    iStack152 = 0;
    if (optind < (int)plVar11) {
      piStack192 = (int *)(&iStack156 + 1);
      puVar16 = (undefined1 *)&iStack156;
      unaff_R14 = (ulong *)&iStack148;
      unaff_R13 = &uStack72;
      unaff_R12 = &uStack80;
      do {
        lVar10 = (long)optind;
        optind = optind + 1;
        add_file_name_constprop_7(param_2[lVar10],unaff_R12,unaff_R13,unaff_R14,piStack192,puVar16);
      } while (optind < (int)plVar11);
    }
    puVar15 = unaff_R12;
    iVar5 = iStack148;
    if (iStack148 == 2) {
      if ((int)uStack72 != 0) {
        set_join_field(&join_field_1,0);
        set_join_field(&join_field_2,0);
      }
      if (uStack72._4_4_ != 0) {
        set_join_field(&join_field_1,1);
        set_join_field(&join_field_2,1);
      }
      uVar6 = g_names._0_8_;
      if (join_field_1 == -1) {
        join_field_1 = 0;
      }
      if (join_field_2 == -1) {
        join_field_2 = 0;
      }
      iVar5 = func_0x00101810(g_names._0_8_,&UNK_00107faa);
      unaff_R12 = stdin;
      if (iVar5 != 0) {
        unaff_R12 = (undefined8 *)fopen_safer(uVar6,&UNK_00107f34);
      }
      uVar6 = g_names._8_8_;
      if (unaff_R12 != (undefined8 *)0x0) {
        iVar5 = func_0x00101810(g_names._8_8_,&UNK_00107faa);
        param_2 = stdin;
        if (iVar5 != 0) {
          param_2 = (undefined8 *)fopen_safer(uVar6,&UNK_00107f34);
        }
        if (param_2 != (undefined8 *)0x0) {
          if (unaff_R12 != param_2) {
            unaff_R14 = &uStack136;
            fadvise(unaff_R12,2);
            unaff_R13 = &lStack104;
            fadvise(param_2,2);
            uStack136 = 0;
            uStack128 = 0;
            plStack120 = (long *)0x0;
            getseq(unaff_R12,unaff_R14,1);
            lStack104 = 0;
            uStack96 = 0;
            plStack88 = (long *)0x0;
            getseq(param_2,unaff_R13,2);
            if (autoformat != '\0') {
              autocount_1 = uStack136;
              if (uStack136 != 0) {
                autocount_1 = *(ulong *)(*plStack120 + 0x18);
              }
              autocount_2 = lStack104;
              if (lStack104 != 0) {
                autocount_2 = *(long *)(*plStack88 + 0x18);
              }
            }
            if (join_header_lines == '\0') {
code_r0x00102264:
              if (uStack136 != 0) {
                while( true ) {
                  uVar7 = uStack136;
                  if (lStack104 == 0) goto code_r0x00102056;
                  iVar5 = keycmp_isra_4(*(undefined8 *)(*plStack120 + 0x18),*plStack120 + 0x28,
                                        *(undefined8 *)(*plStack88 + 0x18),*plStack88 + 0x28,
                                        join_field_1,join_field_2);
                  if (iVar5 < 0) {
                    if (print_unpairables_1 != 0) {
                      prjoin(*plStack120,uni_blank);
                    }
                    uStack136 = 0;
                    getseq(unaff_R12,unaff_R14,1);
                    seen_unpairable = 1;
                    goto code_r0x00102264;
                  }
                  if (iVar5 == 0) break;
                  if (print_unpairables_2 != '\0') {
                    prjoin(uni_blank,*plStack88);
                  }
                  lStack104 = 0;
                  getseq(param_2,unaff_R13,2);
                  seen_unpairable = 1;
                  if (uStack136 == 0) goto code_r0x00102054;
                }
                do {
                  cVar3 = getseq(unaff_R12,unaff_R14,1);
                  if (cVar3 == '\0') {
                    uStack136 = uStack136 + 1;
                    uStack184 = (int *)CONCAT71(uStack184._1_7_,1);
                    goto code_r0x001021da;
                  }
                  iVar5 = keycmp_isra_4(*(undefined8 *)(plStack120[uStack136 - 1] + 0x18),
                                        plStack120[uStack136 - 1] + 0x28,
                                        *(undefined8 *)(*plStack88 + 0x18),*plStack88 + 0x28,
                                        join_field_1,join_field_2);
                } while (iVar5 == 0);
                uStack184 = (int *)((ulong)uStack184._1_7_ << 8);
code_r0x001021da:
                do {
                  cVar3 = getseq(param_2,unaff_R13,2);
                  if (cVar3 == '\0') {
                    lStack104 = lStack104 + 1;
                    bVar17 = true;
                    goto code_r0x001021f9;
                  }
                  iVar5 = keycmp_isra_4(*(undefined8 *)(*plStack120 + 0x18),*plStack120 + 0x28,
                                        *(undefined8 *)(plStack88[lStack104 + -1] + 0x18),
                                        plStack88[lStack104 + -1] + 0x28,join_field_1,join_field_2);
                } while (iVar5 == 0);
                bVar17 = false;
code_r0x001021f9:
                if ((print_pairables != '\0') && (piStack192 = (int *)0x0, uStack136 != 1)) {
                  do {
                    puVar16 = (undefined1 *)0x0;
                    plVar11 = (long *)((long)piStack192 * 8);
                    if (lStack104 != 1) {
                      do {
                        plVar1 = plStack88 + (long)puVar16;
                        puVar16 = (undefined1 *)((long)puVar16 + 1);
                        prjoin(plStack120[(long)piStack192],*plVar1);
                      } while (puVar16 < (long *)(lStack104 - 1U));
                    }
                    piStack192 = (int *)((long)piStack192 + 1);
                  } while (piStack192 < (int *)(uStack136 - 1));
                }
                if ((char)uStack184 == '\0') {
                  lVar10 = *plStack120;
                  *plStack120 = plStack120[uStack136 - 1];
                  plStack120[uStack136 - 1] = lVar10;
                }
                uStack136 = (ulong)((char)uStack184 == '\0');
                if (bVar17) {
                  lStack104 = 0;
                }
                else {
                  lVar10 = *plStack88;
                  *plStack88 = plStack88[lStack104 + -1];
                  plStack88[lStack104 + -1] = lVar10;
                  lStack104 = 1;
                }
                goto code_r0x00102264;
              }
            }
            else {
              if (uStack136 != 0) {
                puVar12 = uni_blank;
                puVar14 = (undefined1 *)*plStack120;
                if (lStack104 != 0) goto code_r0x0010265e;
code_r0x001025f1:
                prjoin(puVar14,puVar12);
                prevline._0_8_ = 0;
                prevline._8_8_ = 0;
                if (uStack136 != 0) {
                  uStack136 = 0;
                  getseq(unaff_R12,unaff_R14,1);
                }
                if (lStack104 != 0) {
                  lStack104 = 0;
                  getseq(param_2,unaff_R13,2);
                }
                goto code_r0x00102264;
              }
              if (lStack104 != 0) {
                puVar14 = uni_blank;
code_r0x0010265e:
                puVar12 = (undefined1 *)*plStack88;
                goto code_r0x001025f1;
              }
            }
code_r0x00102054:
            uVar7 = 0;
code_r0x00102056:
            lStack144 = 0;
            if ((check_input_order == 2) ||
               (((byte)issued_disorder_warning != 0 && (issued_disorder_warning._1_1_ != '\0')))) {
              if (print_unpairables_1 != 0) goto code_r0x001026dd;
              if (print_unpairables_2 == '\0') goto code_r0x001020a3;
            }
            else {
              if (uVar7 != 0) {
                puVar16 = (undefined1 *)(ulong)print_unpairables_1;
                if (print_unpairables_1 != 0) goto code_r0x0010268d;
                puVar16 = (undefined1 *)0x1;
                goto code_r0x001023bc;
              }
            }
            if (lStack104 != 0) {
code_r0x00102553:
              if (print_unpairables_2 != '\0') {
                prjoin(uni_blank,*plStack88);
              }
              if (uStack136 != 0) {
                seen_unpairable = 1;
              }
              plVar11 = &lStack144;
              puVar16 = uni_blank;
              do {
                cVar3 = get_line(param_2,plVar11,2);
                if (cVar3 == '\0') break;
                cVar3 = issued_disorder_warning._1_1_;
              } while (((print_unpairables_2 != '\0') &&
                       (prjoin(uni_blank,lStack144), cVar3 = print_unpairables_2,
                       issued_disorder_warning._1_1_ == '\0')) || (cVar3 != '\0'));
              goto code_r0x00102416;
            }
            goto code_r0x001020a3;
          }
          goto code_r0x001027aa;
        }
code_r0x00102840:
        uVar6 = quotearg_n_style_colon(0,3,g_names._8_8_);
        puVar8 = (uint *)func_0x00101670();
        func_0x001018f0(1,(ulong)*puVar8,&UNK_00107d52,uVar6);
      }
      param_2 = (undefined8 *)quotearg_n_style_colon(0,3,g_names._0_8_);
      puVar8 = (uint *)func_0x00101670();
      iVar5 = func_0x001018f0(1,(ulong)*puVar8,&UNK_00107d52,param_2);
      puVar15 = unaff_R12;
    }
    if (iVar5 == 0) {
      uVar6 = func_0x001016f0(0,&UNK_00107ebf,5);
      func_0x001018f0(0,0,uVar6);
      unaff_R12 = puVar15;
    }
    else {
code_r0x001028f4:
      param_2 = (undefined8 *)quote(param_2[(long)plVar11 + -1]);
      uVar6 = func_0x001016f0(0,&UNK_00107ecf,5);
      func_0x001018f0(0,0,uVar6,param_2);
      unaff_R12 = puVar15;
    }
  }
  else {
    iStack156 = 0;
    if (uVar4 == 0x69) {
      ignore_case = 1;
      iStack152 = 0;
      goto code_r0x00101ae4;
    }
    if ((int)uVar4 < 0x6a) {
      if (uVar4 == 0x31) {
        uVar6 = string_to_join_field(optarg);
        set_join_field(&join_field_1,uVar6);
        iStack152 = iStack156;
      }
      else {
        if ((int)uVar4 < 0x32) {
          if (uVar4 == 0xffffff7e) {
            uVar7 = usage(0);
code_r0x001026dd:
            puVar16 = (undefined1 *)0x0;
            if (uVar7 == 0) {
              if (print_unpairables_2 == '\0') goto code_r0x001020a3;
code_r0x0010240a:
              if (lStack104 != 0) goto code_r0x00102553;
            }
            else {
code_r0x0010268d:
              prjoin(*plStack120,uni_blank);
code_r0x001023bc:
              if (lStack104 != 0) {
                seen_unpairable = 1;
              }
              plVar11 = &lStack144;
              do {
                cVar3 = get_line(unaff_R12,plVar11,1);
                if (cVar3 == '\0') break;
                bVar2 = (byte)issued_disorder_warning;
              } while (((print_unpairables_1 != 0) &&
                       (prjoin(lStack144,uni_blank), bVar2 = print_unpairables_1,
                       (byte)issued_disorder_warning == 0)) || (bVar2 != 0));
              if ((print_unpairables_2 != '\0') || ((char)puVar16 != '\0')) goto code_r0x0010240a;
            }
code_r0x00102416:
            if (lStack144 != 0) {
              freeline_part_2();
            }
code_r0x001020a3:
            func_0x00101650(lStack144);
            delseq_isra_3(unaff_R14 + 1,unaff_R14 + 2);
            delseq_isra_3(unaff_R13 + 1,unaff_R13 + 2);
            iVar5 = rpl_fclose(unaff_R12);
            if (iVar5 != 0) goto code_r0x001027d6;
            iVar5 = rpl_fclose(param_2);
            if (iVar5 != 0) goto code_r0x00102777;
            if (((byte)issued_disorder_warning != 0) || (issued_disorder_warning._1_1_ != '\0'))
            goto code_r0x00102753;
            if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
              return 0;
            }
            goto code_r0x00102809;
          }
          if (uVar4 != 1) {
            if (uVar4 != 0xffffff7d) goto code_r0x00101b41;
            version_etc(stdout,&UNK_00107d9c,&UNK_00107e17,Version,&UNK_00107e9e,0);
            func_0x00101940(0);
            goto code_r0x00101c48;
          }
          unaff_R14 = (ulong *)&iStack148;
          unaff_R13 = &uStack72;
          add_file_name_constprop_7(optarg,&uStack80,unaff_R13,unaff_R14,uStack184,piStack192);
          unaff_R12 = &uStack80;
          iStack152 = iStack156;
        }
        else {
          if (uVar4 == 0x61) goto code_r0x00101c4f;
          if (uVar4 != 0x65) {
            if (uVar4 != 0x32) goto code_r0x00101b41;
            goto code_r0x00101b50;
          }
          if ((empty_filler != (undefined8 *)0x0) &&
             (iVar5 = func_0x00101810(empty_filler,optarg), unaff_R12 = puVar15, iVar5 != 0))
          goto code_r0x0010272f;
          unaff_R12 = puVar15;
          empty_filler = puVar15;
          iStack152 = 0;
        }
      }
      goto code_r0x00101ae4;
    }
    if (uVar4 == 0x76) {
code_r0x00101c48:
      print_pairables = '\0';
code_r0x00101c4f:
      iVar5 = xstrtoul(optarg,0,10,puVar16);
      if ((iVar5 != 0) || (1 < lStack104 - 1U)) {
        uVar6 = quote(optarg);
        uVar9 = func_0x001016f0(0,&UNK_00107d3c,5);
        func_0x001018f0(1,0,uVar9,uVar6);
code_r0x0010272f:
        uVar6 = func_0x001016f0(0,&UNK_00107ce8,5);
        func_0x001018f0(1,0,uVar6);
code_r0x00102753:
        uVar6 = func_0x001016f0(0,&UNK_00107ee8,5);
        func_0x001018f0(1,0,uVar6);
code_r0x00102777:
        uVar6 = quotearg_n_style_colon(0,3,g_names._8_8_);
        puVar8 = (uint *)func_0x00101670();
        func_0x001018f0(1,(ulong)*puVar8,&UNK_00107d52,uVar6);
code_r0x001027aa:
        uVar6 = func_0x001016f0(0,&UNK_00107d18,5);
        puVar8 = (uint *)func_0x00101670();
        func_0x001018f0(1,(ulong)*puVar8,uVar6);
code_r0x001027d6:
        uVar6 = quotearg_n_style_colon(0,3,g_names._0_8_);
        puVar8 = (uint *)func_0x00101670();
        func_0x001018f0(1,(ulong)*puVar8,&UNK_00107d52,uVar6);
code_r0x00102809:
        func_0x00101720();
code_r0x0010280e:
        uVar6 = quote(unaff_R12);
        uVar9 = func_0x001016f0(0,&UNK_00107e75,5);
        func_0x001018f0(1,0,uVar9,uVar6);
        goto code_r0x00102840;
      }
      iStack152 = iStack156;
      if (lStack104 == 1) {
        print_unpairables_1 = 1;
      }
      else {
        print_unpairables_2 = '\x01';
      }
      goto code_r0x00101ae4;
    }
    if ((int)uVar4 < 0x77) {
      bVar17 = uVar4 < 0x6f;
      bVar18 = uVar4 == 0x6f;
      if (bVar18) {
        lVar10 = 5;
        pbVar13 = &UNK_00107e6d;
        do {
          if (lVar10 == 0) break;
          lVar10 = lVar10 + -1;
          bVar17 = *(byte *)puVar15 < *pbVar13;
          bVar18 = *(byte *)puVar15 == *pbVar13;
          puVar15 = (undefined8 *)((long)puVar15 + (ulong)bVar19 * -2 + 1);
          pbVar13 = pbVar13 + (ulong)bVar19 * -2 + 1;
        } while (bVar18);
        cVar3 = (!bVar17 && !bVar18) - bVar17;
        if (cVar3 == '\0') {
          autoformat = '\x01';
          iStack152 = (int)cVar3;
        }
        else {
          add_field_list();
          iStack156 = 3;
          iStack152 = 3;
        }
      }
      else {
        if (uVar4 == 0x74) {
          uVar4 = (uint)*(byte *)optarg;
          if (*(byte *)optarg != 0) {
            if (*(byte *)((long)optarg + 1) == 0) goto code_r0x00101da1;
            iVar5 = func_0x00101810(optarg,&UNK_00107e72);
            unaff_R12 = puVar15;
            if (iVar5 == 0) {
              uVar4 = 0;
              goto code_r0x00101da1;
            }
            goto code_r0x0010280e;
          }
          uVar4 = 10;
code_r0x00101da1:
          if ((-1 < (int)tab) && (tab != uVar4)) {
            uVar6 = func_0x001016f0(0,&UNK_00107e8c,5);
            func_0x001018f0(1,0,uVar6);
            goto code_r0x001028f4;
          }
          unaff_R12 = puVar15;
          tab = uVar4;
          iStack152 = 0;
        }
        else {
          if (uVar4 != 0x6a) goto code_r0x00101b41;
          bVar2 = *(byte *)optarg;
          if ((((byte)(bVar2 - 0x31) < 2) && (*(byte *)((long)optarg + 1) == 0)) &&
             (optarg == (undefined8 *)(param_2[(long)optind + -1] + 2))) {
            puVar15 = (undefined8 *)((long)&uStack72 + (ulong)(bVar2 == 0x32) * 4);
            *(int *)puVar15 = *(int *)puVar15 + 1;
            iStack156 = (uint)(bVar2 == 0x32) + 1;
            iStack152 = iStack156;
          }
          else {
            uVar6 = string_to_join_field();
            set_join_field(&join_field_1,uVar6);
            set_join_field(&join_field_2,join_field_1);
            iStack152 = iStack156;
          }
        }
      }
      goto code_r0x00101ae4;
    }
    if (uVar4 == 0x80) {
      check_input_order = 1;
      iStack152 = 0;
      goto code_r0x00101ae4;
    }
    if (0x80 < (int)uVar4) {
      if (uVar4 == 0x81) {
        check_input_order = 2;
        iStack152 = 0;
      }
      else {
        if (uVar4 != 0x82) goto code_r0x00101b41;
        join_header_lines = '\x01';
        iStack152 = 0;
      }
      goto code_r0x00101ae4;
    }
    if (uVar4 == 0x7a) {
      eolchar = 0;
      iStack152 = 0;
      goto code_r0x00101ae4;
    }
  }
code_r0x00101b41:
  usage(1);
code_r0x00101b50:
  uVar6 = string_to_join_field(optarg);
  set_join_field(&join_field_2,uVar6);
  iStack152 = iStack156;
  goto code_r0x00101ae4;
}

