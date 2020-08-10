
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_dev(uint *param_1,uint *param_2,undefined *param_3,uint *param_4,uint *param_5,char param_6
            ,uint param_7,undefined *param_8,undefined4 param_9)

{
  long lVar1;
  undefined auVar2 [16];
  uint uVar3;
  long lVar4;
  uint **ppuVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 extraout_RDX;
  byte **ppbVar17;
  undefined *puVar18;
  byte *pbVar19;
  byte bVar20;
  uint *puVar21;
  byte *pbVar22;
  long in_FS_OFFSET;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  double dVar26;
  double extraout_XMM0_Qa;
  double dVar27;
  byte *pbStack1264;
  undefined *puStack1256;
  byte *apbStack1248 [5];
  undefined *puStack1208;
  undefined *puStack1200;
  undefined *puStack1192;
  undefined *puStack1184;
  undefined *puStack1176;
  undefined8 uStack1168;
  undefined8 uStack1160;
  undefined8 uStack1144;
  uint *puStack1128;
  ulong uStack1120;
  uint *puStack1112;
  undefined *puStack1104;
  uint *puStack1096;
  undefined4 uStack1088;
  bool bStack1081;
  long lStack1072;
  long lStack1064;
  ulong uStack1056;
  ulong uStack1048;
  ulong uStack1040;
  uint uStack1032;
  undefined4 uStack1028;
  undefined *puStack1024;
  undefined *puStack1016;
  long lStack1000;
  undefined8 uStack992;
  ulong uStack984;
  ulong uStack976;
  byte abStack968 [8];
  ulong uStack960;
  long lStack952;
  byte abStack944 [8];
  long lStack936;
  undefined8 uStack928;
  undefined *puStack920;
  undefined *puStack912;
  undefined uStack904;
  undefined *puStack896;
  undefined *puStack888;
  undefined uStack880;
  long alStack872 [18];
  undefined auStack728 [664];
  long lStack64;
  
  bVar25 = 0;
  uStack1120 = (ulong)param_7;
  uStack1088 = param_9;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puVar21 = param_1;
  puStack1096 = param_4;
  if ((((char)param_7 != '\0') && (show_local_fs != '\0')) ||
     ((param_6 != '\0' && ((show_all_fs == '\0' && (show_listed_fs == '\0'))))))
  goto code_r0x001043ac;
  puStack1104 = &UNK_001043f8;
  puVar21 = param_5;
  cVar6 = selected_fstype();
  if (cVar6 == '\0') goto code_r0x001043ac;
  puStack1104 = &UNK_00104404;
  puVar21 = param_5;
  cVar6 = excluded_fstype();
  if (cVar6 != '\0') goto code_r0x001043ac;
  bStack1081 = param_8 == (undefined *)0x0;
  if ((param_2 == (uint *)0x0) || (!bStack1081)) {
    if ((puStack1096 == (uint *)0x0) && (puStack1096 = param_2, param_2 == (uint *)0x0)) {
      puStack1096 = param_1;
    }
    if (param_8 != (undefined *)0x0) {
                    /* WARNING: Load size is inaccurate */
      puStack1016 = *(undefined **)(param_8 + 0x30);
      lStack1064 = SUB168(*(undefined *)param_8,0);
      uStack1056 = SUB168(*(undefined *)param_8 >> 0x40,0);
                    /* WARNING: Load size is inaccurate */
      uStack1048 = SUB168(*(undefined *)(param_8 + 0x10),0);
      uStack1040 = SUB168(*(undefined *)(param_8 + 0x10) >> 0x40,0);
                    /* WARNING: Load size is inaccurate */
      auVar2 = *(undefined *)(param_8 + 0x20);
      uStack1032 = SUB164(auVar2,0);
      uStack1028 = SUB164(auVar2 >> 0x20,0);
      puStack1024 = SUB168(auVar2 >> 0x40,0);
      if (((uStack1056 == 0) && (show_all_fs == '\0')) && (show_listed_fs == '\0'))
      goto code_r0x001043ac;
      goto code_r0x001044f9;
    }
  }
  else {
    if (*(char *)param_2 != '/') goto code_r0x001043ac;
    if (puStack1096 == (uint *)0x0) {
      puStack1096 = param_2;
    }
  }
  puStack1104 = &UNK_00104451;
  puVar21 = puStack1096;
  iVar7 = get_fs_usage(puStack1096,param_1,&lStack1064);
  if (iVar7 == 0) {
    if (((char)uStack1088 != '\0') && (show_all_fs != '\0')) {
      puVar21 = (uint *)0x1;
      puStack1104 = &UNK_00104bfe;
      iVar7 = func_0x00102390(1,puStack1096,alStack872);
      if ((iVar7 == 0) && (puVar21 = devlist_table, devlist_table != (uint *)0x0)) {
        lStack936 = alStack872[0];
        puStack1104 = &UNK_00104c33;
        lVar15 = hash_lookup(devlist_table,&lStack936);
        if ((lVar15 != 0) && (ppuVar5 = *(uint ***)(lVar15 + 8), ppuVar5 != (uint **)0x0)) {
          puVar21 = *ppuVar5;
          puStack1104 = &UNK_00104c54;
          iVar7 = func_0x00102340(puVar21,param_1);
          if ((iVar7 != 0) && (((*(byte *)(ppuVar5 + 5) & 2) == 0 || ((char)param_7 == '\0')))) {
            uStack1032 = uStack1032 & 0xffffff00;
            param_5 = (uint *)&UNK_00110959;
            puStack1016 = (undefined *)0xffffffffffffffff;
            puStack1024 = (undefined *)0xffffffffffffffff;
            uStack1040 = 0xffffffffffffffff;
            uStack1048 = 0xffffffffffffffff;
            uStack1056 = 0xffffffffffffffff;
            lStack1064 = -1;
          }
        }
      }
    }
    if (((uStack1056 == 0) && (show_all_fs == '\0')) && (show_listed_fs == '\0'))
    goto code_r0x001043ac;
  }
  else {
    puStack1104 = &UNK_0010445e;
    param_5 = (uint *)func_0x001020b0();
    if (((char)uStack1088 == '\0') || ((*param_5 != 0xd && (*param_5 != 2)))) {
      puStack1104 = &UNK_0010448c;
      uVar16 = quotearg_n_style_colon(0,3,puStack1096);
      puVar21 = (uint *)0x0;
      puStack1104 = &UNK_001044a1;
      func_0x001024a0(0,(ulong)*param_5,&UNK_00110c4f,uVar16);
      exit_status = 1;
code_r0x001043ac:
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      puStack1104 = &UNK_00104d6b;
      func_0x001021f0();
      puVar18 = program_name;
      uVar16 = 5;
      uStack1144 = *(undefined8 *)(in_FS_OFFSET + 0x28);
      puStack1128 = param_5;
      puStack1112 = param_2;
      puStack1104 = param_3;
      if ((int)puVar21 == 0) goto code_r0x00104dcd;
      uVar16 = func_0x00102190(0,&UNK_0010f368,5);
      func_0x00102530(stderr,1,uVar16,puVar18);
      do {
        func_0x00102510((ulong)puVar21 & 0xffffffff);
        uVar16 = extraout_RDX;
code_r0x00104dcd:
        uVar16 = func_0x00102190(0,&UNK_0010f390,uVar16);
        func_0x00102470(1,uVar16,puVar18);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010f3b8,5);
        func_0x00102310(uVar11,uVar16);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010f420,5);
        func_0x00102310(uVar11,uVar16);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010f470,5);
        func_0x00102310(uVar11,uVar16);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010f610,5);
        func_0x00102310(uVar11,uVar16);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010f710,5);
        func_0x00102310(uVar11,uVar16);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010f820,5);
        func_0x00102310(uVar11,uVar16);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010f8a8,5);
        func_0x00102310(uVar11,uVar16);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010f988,5);
        func_0x00102310(uVar11,uVar16);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010f9b8,5);
        func_0x00102310(uVar11,uVar16);
        uVar16 = func_0x00102190(0,&UNK_0010f9f0,5);
        func_0x00102470(1,uVar16,&UNK_0010f05d);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010fad0,5);
        func_0x00102310(uVar11,uVar16);
        uVar16 = stdout;
        uVar11 = func_0x00102190(0,&UNK_0010fba8,5);
        func_0x00102310(uVar11,uVar16);
        uStack1168 = 0;
        uStack1160 = 0;
        pbStack1264 = &UNK_0010f060;
        apbStack1248[4] = &UNK_0010f0a1;
        puStack1256 = &UNK_0010f062;
        puStack1200 = &UNK_0010f0ab;
        apbStack1248[0] = &UNK_0010f0da;
        puStack1184 = &UNK_0010f0b5;
        apbStack1248[1] = &UNK_0010f072;
        apbStack1248[2] = &UNK_0010f088;
        apbStack1248[3] = &UNK_0010f092;
        puStack1208 = &UNK_0010f092;
        puStack1192 = &UNK_0010f092;
        puStack1176 = &UNK_0010f092;
        ppbVar17 = &pbStack1264;
        do {
          ppbVar17 = ppbVar17;
          ppbVar17 = ppbVar17 + 2;
          pbVar22 = *ppbVar17;
          bVar23 = false;
          bVar24 = pbVar22 == (byte *)0x0;
          if (bVar24) break;
          lVar15 = 3;
          pbVar19 = &UNK_0010f05a;
          do {
            if (lVar15 == 0) break;
            lVar15 = lVar15 + -1;
            bVar23 = *pbVar19 < *pbVar22;
            bVar24 = *pbVar19 == *pbVar22;
            pbVar19 = pbVar19 + (ulong)bVar25 * -2 + 1;
            pbVar22 = pbVar22 + (ulong)bVar25 * -2 + 1;
          } while (bVar24);
        } while ((!bVar23 && !bVar24) != bVar23);
        pbVar22 = ppbVar17[3];
        if (pbVar22 == (byte *)0x0) {
          uVar16 = func_0x00102190(0,&UNK_0010f0bf,5);
          func_0x00102470(1,uVar16,&UNK_0010f0d6,&UNK_0010fc88);
          lVar15 = func_0x00102460(5,0);
          if ((lVar15 != 0) && (iVar7 = func_0x001020c0(lVar15,&UNK_0010f0e4,3), iVar7 != 0)) {
            pbVar22 = &UNK_0010f05a;
            goto code_r0x001051d8;
          }
          pbVar22 = &UNK_0010f05a;
          puVar18 = &UNK_0010f07c;
          uVar16 = func_0x00102190(0,&UNK_0010f0e8,5);
          func_0x00102470(1,uVar16,&UNK_0010fc88,&UNK_0010f05a);
        }
        else {
          uVar16 = func_0x00102190(0,&UNK_0010f0bf,5);
          func_0x00102470(1,uVar16,&UNK_0010f0d6,&UNK_0010fc88);
          lVar15 = func_0x00102460(5,0);
          if ((lVar15 != 0) && (iVar7 = func_0x001020c0(lVar15,&UNK_0010f0e4,3), iVar7 != 0)) {
code_r0x001051d8:
            uVar16 = stdout;
            uVar11 = func_0x00102190(0,&UNK_0010fcb0,5);
            func_0x00102310(uVar11,uVar16);
          }
          uVar16 = func_0x00102190(0,&UNK_0010f0e8,5);
          func_0x00102470(1,uVar16,&UNK_0010fc88,&UNK_0010f05a);
          puVar18 = &UNK_00110601;
          if (pbVar22 == &UNK_0010f05a) {
            puVar18 = &UNK_0010f07c;
          }
        }
        uVar16 = func_0x00102190(0,&UNK_0010fcf8,5);
        func_0x00102470(1,uVar16,pbVar22,puVar18);
      } while( true );
    }
    if (show_all_fs == '\0') goto code_r0x001043ac;
    uStack1032 = uStack1032 & 0xffffff00;
    param_5 = (uint *)&UNK_00110959;
    puStack1016 = (undefined *)0xffffffffffffffff;
    puStack1024 = (undefined *)0xffffffffffffffff;
    uStack1040 = 0xffffffffffffffff;
    uStack1048 = 0xffffffffffffffff;
    uStack1056 = 0xffffffffffffffff;
    lStack1064 = -1;
  }
  file_systems_processed = 1;
code_r0x001044f9:
  puStack1104 = &UNK_001044fe;
  alloc_table_row();
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)&UNK_00110959;
  }
  if (param_3 == (undefined *)0x0) {
    param_3 = &UNK_00110959;
  }
  puStack1104 = &UNK_0010451b;
  puVar21 = (uint *)xstrdup(param_1);
  puStack1096 = puVar21;
  if ((char)uStack1088 != '\0') {
    puStack1104 = &UNK_00104531;
    uVar8 = func_0x001021b0(puVar21);
    if (0x24 < uVar8) {
      puStack1104 = &UNK_00104548;
      lVar15 = func_0x001022e0((long)puVar21 + (uVar8 - 0x24),&UNK_0010f008);
      if (lVar15 == 0x24) {
        puStack1104 = &UNK_00104559;
        puVar21 = (uint *)canonicalize_filename_mode(puStack1096,0);
        if (puVar21 != (uint *)0x0) {
          puStack1104 = &UNK_0010456a;
          func_0x00102070(puStack1096);
          puStack1096 = puVar21;
        }
      }
    }
  }
  uStack928 = 1;
  lStack936 = 1;
  if (param_5 == (uint *)0x0) {
    param_5 = (uint *)&UNK_00110959;
  }
  uStack904 = 0;
  puStack920 = puStack1024;
  puStack888 = (undefined *)0xffffffffffffffff;
  uStack880 = 0;
  puStack896 = puStack1016;
  puStack912 = puStack1016;
  if ((puStack1024 < (undefined *)0xfffffffffffffffe) &&
     (puStack1016 < (undefined *)0xfffffffffffffffe)) {
    puStack888 = puStack1024 + -(long)puStack1016;
    uStack880 = puStack1024 < puStack1016;
  }
  lStack952 = -1;
  uStack992 = output_block_size;
  uStack976 = uStack1040;
  abStack968[0] = uStack1040 < 0xfffffffffffffffe & (byte)uStack1032;
  lStack1000 = lStack1064;
  uStack984 = uStack1056;
  uStack960 = uStack1048;
  abStack944[0] = 0;
  if ((uStack1048 < 0xfffffffffffffffe) && (uStack1056 < 0xfffffffffffffffe)) {
    lStack952 = uStack1056 - uStack1048;
    abStack944[0] = uStack1056 < uStack1048;
  }
  puVar18 = puStack1024;
  if ((print_grand_total != '\0') && (bStack1081 != false)) {
    if (puStack1024 < (undefined *)0xfffffffffffffffe) {
      grand_fsu._40_8_ = puStack1024 + (long)grand_fsu._40_8_;
    }
    if (puStack1016 < (undefined *)0xfffffffffffffffe) {
      grand_fsu._48_8_ = puStack1016 + (long)grand_fsu._48_8_;
    }
    if (uStack1056 < 0xfffffffffffffffe) {
      grand_fsu._8_8_ = grand_fsu._8_8_ + uStack1056 * lStack1064;
    }
    if (uStack1048 < 0xfffffffffffffffe) {
      grand_fsu._16_8_ = grand_fsu._16_8_ + uStack1048 * lStack1064;
    }
    if (uStack1040 < 0xfffffffffffffffe) {
      puVar10 = (undefined8 *)(lStack1064 * uStack1040);
      puVar18 = (undefined *)(ulong)((uint)grand_fsu[32] ^ 1);
      puVar14 = grand_fsu._24_8_;
      bVar20 = grand_fsu[32];
      if ((byte)((uint)grand_fsu[32] ^ 1) == abStack968[0]) goto code_r0x00104ce0;
      grand_fsu._24_8_ = (undefined8 *)((long)puVar10 + (long)grand_fsu._24_8_);
    }
  }
code_r0x001046d0:
  uStack1120 = 0;
  lVar15 = columns;
  if (ncolumns != 0) {
    do {
      puVar21 = *(uint **)(lVar15 + uStack1120 * 8);
      lVar1 = uStack1120 * 8;
      uVar3 = puVar21[4];
      if (uVar3 != 1) {
        if (uVar3 == 0) {
          plVar12 = &lStack1000;
          goto code_r0x00104719;
        }
        if (uVar3 == 2) {
          plVar12 = (long *)0x0;
          goto code_r0x00104719;
        }
code_r0x00104d2f:
        puVar14 = &__PRETTY_FUNCTION___9006;
        puVar18 = &UNK_0010eff1;
        puStack1104 = &UNK_00104d4e;
        puVar10 = (undefined8 *)func_0x00102280(&UNK_0010f020,&UNK_0010eff1,0x468);
        goto code_r0x00104d4e;
      }
      plVar12 = &lStack936;
code_r0x00104719:
      if (0xb < *puVar21) {
        puStack1104 = &UNK_00104d2f;
        func_0x00102280(&UNK_0010f039,&UNK_0010eff1,0x4ce,&__PRETTY_FUNCTION___9006);
        goto code_r0x00104d2f;
      }
      switch(*puVar21) {
      case 0:
        puStack1104 = &UNK_00104889;
        lStack1072 = xstrdup(puStack1096);
        break;
      case 1:
        puStack1104 = &UNK_00104870;
        lStack1072 = xstrdup(param_5);
        break;
      default:
        puVar18 = &UNK_00110959;
        if ((ulong)plVar12[2] < 0xfffffffffffffffe) {
          puStack1104 = &UNK_0010485e;
          puVar18 = (undefined *)
                    human_readable(plVar12[2],auStack728,(ulong)human_output_opts,*plVar12,
                                   plVar12[1]);
        }
        goto code_r0x001047ff;
      case 3:
      case 7:
        lVar15 = plVar12[6];
        bVar20 = *(byte *)(plVar12 + 7);
        goto code_r0x001047f0;
      case 4:
      case 8:
        bVar20 = *(byte *)(plVar12 + 4);
        lVar15 = plVar12[3];
code_r0x001047f0:
        puStack1104 = &UNK_001047fc;
        puVar18 = (undefined *)df_readable((ulong)bVar20,lVar15,auStack728,*plVar12,plVar12[1]);
        goto code_r0x001047ff;
      case 5:
      case 9:
        uVar8 = plVar12[6];
        if ((uVar8 < 0xfffffffffffffffe) &&
           (puVar18 = (undefined *)plVar12[3], puVar18 < (undefined *)0xfffffffffffffffe)) {
          if (*(char *)(plVar12 + 7) == '\0') {
            if (uVar8 < 0x28f5c28f5c28f5d) {
              puVar13 = puVar18 + uVar8;
              if ((puVar13 != (undefined *)0x0) &&
                 ((bool)*(char *)(plVar12 + 4) == CARRY8(uVar8,(ulong)puVar18))) {
                uVar8 = (ulong)((uVar8 * 100) % (ulong)puVar13 != 0) +
                        (uVar8 * 100) / (ulong)puVar13;
                if (-1 < (long)uVar8) {
                  dVar26 = (double)uVar8;
                  goto code_r0x001049b8;
                }
                dVar26 = (double)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
                dVar26 = dVar26 + dVar26;
                goto code_r0x001049b8;
              }
            }
            if ((long)uVar8 < 0) {
              dVar26 = (double)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
              dVar26 = dVar26 + dVar26;
            }
            else {
              dVar26 = (double)uVar8;
            }
          }
          else {
            uVar9 = -uVar8;
            if ((long)uVar8 < 1) {
              dVar26 = (double)uVar9;
            }
            else {
              dVar26 = (double)(uVar9 >> 1 | (ulong)((uint)uVar9 & 1));
              dVar26 = dVar26 + dVar26;
            }
            dVar26 = (double)((ulong)dVar26 ^ _UNK_0010fea0);
          }
          puVar13 = puVar18;
          if (*(char *)(plVar12 + 4) == '\0') goto code_r0x00104a80;
          puVar13 = (undefined *)-(long)puVar18;
          if ((long)puVar18 < 1) {
            dVar27 = (double)(long)puVar13;
          }
          else {
            uVar8 = (ulong)puVar13 >> 1;
            puVar13 = (undefined *)(ulong)((uint)puVar13 & 1);
            dVar27 = (double)(uVar8 | (ulong)puVar13);
            dVar27 = dVar27 + dVar27;
          }
          dVar27 = (double)((ulong)dVar27 ^ _UNK_0010fea0);
          goto code_r0x00104950;
        }
code_r0x001047be:
        puStack1104 = &UNK_001047ca;
        lStack1072 = func_0x00102540(&UNK_00110959);
        while (lStack1072 == 0) {
          while( true ) {
            puStack1104 = &UNK_00104a7e;
            xalloc_die();
            puVar13 = puVar18;
            dVar26 = extraout_XMM0_Qa;
code_r0x00104a80:
            if ((long)puVar13 < 0) {
              uVar8 = (ulong)puVar13 >> 1;
              puVar13 = (undefined *)(ulong)((uint)puVar13 & 1);
              dVar27 = (double)(uVar8 | (ulong)puVar13);
              dVar27 = dVar27 + dVar27;
            }
            else {
              dVar27 = (double)(long)puVar13;
            }
code_r0x00104950:
            puVar18 = puVar13;
            if (dVar27 + dVar26 == 0.00000000) goto code_r0x001047be;
            dVar26 = (dVar26 * _UNK_0010feb0) / (dVar27 + dVar26);
            dVar27 = (double)(long)dVar26;
            if (((dVar27 - _UNK_0010feb8 < dVar26) && (dVar26 <= _UNK_0010feb8 + dVar27)) &&
               (dVar26 = _UNK_0010feb8 + dVar27, dVar26 <= dVar27)) {
              dVar26 = dVar27 + 0.00000000;
            }
code_r0x001049b8:
            if (dVar26 < 0.00000000) goto code_r0x001047be;
            puVar18 = &UNK_0010f032;
            puStack1104 = &UNK_001049d8;
            iVar7 = rpl_asprintf(dVar26,&lStack1072);
            if (iVar7 != -1) break;
            lStack1072 = 0;
          }
        }
        goto code_r0x00104749;
      case 10:
        puStack1104 = &UNK_00104738;
        lStack1072 = xstrdup(param_2);
        break;
      case 0xb:
        puVar18 = param_3;
code_r0x001047ff:
        puStack1104 = &UNK_00104804;
        lStack1072 = xstrdup(puVar18);
      }
      if (lStack1072 == 0) goto code_r0x00104cc1;
code_r0x00104749:
      puStack1104 = &UNK_0010474e;
      replace_problematic_chars();
      puVar18 = (undefined *)0x0;
      puStack1104 = &UNK_0010475a;
      iVar7 = gnu_mbswidth();
      lVar15 = columns;
      uVar9 = ncolumns;
      uVar8 = SEXT48(iVar7);
      lVar4 = *(long *)(columns + lVar1);
      if (uVar8 <= *(ulong *)(lVar4 + 0x20)) {
        uVar8 = *(ulong *)(lVar4 + 0x20);
      }
      uStack1120 = uStack1120 + 1;
      *(ulong *)(lVar4 + 0x20) = uVar8;
      *(long *)(*(long *)(table + -8 + nrows * 8) + lVar1) = lStack1072;
      if (uVar9 <= uStack1120) break;
    } while( true );
  }
  puStack1104 = &UNK_001047aa;
  puVar21 = puStack1096;
  func_0x00102070();
  goto code_r0x001043ac;
code_r0x00104cc1:
  puVar14 = &__PRETTY_FUNCTION___9006;
  puVar18 = &UNK_0010eff1;
  bVar20 = 0x4c;
  puStack1104 = &UNK_00104ce0;
  puVar10 = (undefined8 *)func_0x00102280(&UNK_0010f04c,&UNK_0010eff1,0x4d2);
code_r0x00104ce0:
  if (bVar20 == 0) {
    puVar10 = (undefined8 *)-(long)puVar10;
  }
  else {
    puVar14 = (undefined8 *)-(long)puVar14;
  }
  if (puVar10 < puVar14) {
    grand_fsu._24_8_ = (undefined8 *)((long)puVar14 - (long)puVar10);
  }
  else {
code_r0x00104d4e:
    grand_fsu._24_8_ = (undefined8 *)((long)puVar10 - (long)puVar14);
    grand_fsu[32] = (byte)puVar18;
  }
  if (grand_fsu[32] != 0) {
    grand_fsu._24_8_ = (undefined8 *)-(long)grand_fsu._24_8_;
  }
  goto code_r0x001046d0;
}

