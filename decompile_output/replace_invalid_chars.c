
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void replace_invalid_chars
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  undefined auVar2 [16];
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint **ppuVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *extraout_RDX;
  undefined8 uVar16;
  undefined8 extraout_RDX_00;
  byte **ppbVar17;
  undefined8 *unaff_RBX;
  undefined *puVar18;
  char cVar19;
  undefined8 *unaff_RBP;
  byte *pbVar20;
  byte bVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  undefined *puVar25;
  undefined8 *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  byte bVar28;
  double dVar29;
  double extraout_XMM0_Qa;
  double dVar30;
  byte *pbStack1368;
  undefined *puStack1360;
  byte *apbStack1352 [5];
  undefined *puStack1312;
  undefined *puStack1304;
  undefined *puStack1296;
  undefined *puStack1288;
  undefined *puStack1280;
  undefined8 uStack1272;
  undefined8 uStack1264;
  undefined8 uStack1248;
  undefined8 *puStack1232;
  ulong uStack1224;
  undefined8 *puStack1216;
  undefined *puStack1208;
  undefined8 *puStack1200;
  undefined4 uStack1192;
  bool bStack1185;
  long lStack1176;
  long lStack1168;
  ulong uStack1160;
  ulong uStack1152;
  ulong uStack1144;
  uint uStack1136;
  undefined4 uStack1132;
  undefined *puStack1128;
  undefined *puStack1120;
  long lStack1104;
  undefined8 uStack1096;
  ulong uStack1088;
  ulong uStack1080;
  byte abStack1072 [8];
  ulong uStack1064;
  long lStack1056;
  byte abStack1048 [8];
  long lStack1040;
  undefined8 uStack1032;
  undefined *puStack1024;
  undefined *puStack1016;
  undefined uStack1008;
  undefined *puStack1000;
  undefined *puStack992;
  undefined uStack984;
  long alStack976 [18];
  undefined auStack832 [664];
  long lStack168;
  undefined8 *puStack152;
  undefined8 *puStack144;
  undefined8 *puStack136;
  undefined8 *puStack128;
  undefined8 *puStack120;
  undefined8 *puStack112;
  undefined8 *puStack96;
  undefined *puStack88;
  undefined4 uStack80;
  uint uStack76;
  undefined8 uStack72;
  long lStack64;
  
  bVar28 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puStack112 = (undefined8 *)&UNK_00104296;
  puVar15 = param_1;
  lVar9 = func_0x001021b0();
  cVar7 = (char)param_6;
  puStack128 = (undefined8 *)((long)param_1 + lVar9);
  uStack72 = 0;
  if (param_1 != puStack128) {
    puStack96 = (undefined8 *)&uStack76;
    unaff_R14 = &uStack72;
    puVar23 = param_1;
    do {
      while( true ) {
        puVar15 = param_1;
        unaff_R15 = (undefined8 *)((long)puStack128 - (long)puVar23);
        puStack112 = (undefined8 *)&UNK_001042ff;
        param_4 = unaff_R14;
        param_2 = puVar23;
        puVar22 = puStack96;
        unaff_RBP = (undefined8 *)rpl_mbrtowc(puStack96,puVar23,unaff_R15);
        if (unaff_RBP <= unaff_R15) break;
        unaff_RBP = (undefined8 *)0x1;
code_r0x0010430c:
        cVar7 = (char)param_6;
        unaff_RBX = (undefined8 *)((long)puVar23 + (long)unaff_RBP);
        *(char *)puVar15 = '?';
        param_1 = (undefined8 *)((long)puVar15 + 1);
        uStack72 = 0;
        puVar23 = unaff_RBX;
        puVar15 = puVar22;
        if (puStack128 == unaff_RBX) goto code_r0x00104324;
      }
      puVar22 = (undefined8 *)(ulong)uStack76;
      puStack112 = (undefined8 *)&UNK_001042c9;
      iVar8 = func_0x00102100();
      if (iVar8 != 0) goto code_r0x0010430c;
      unaff_RBX = (undefined8 *)((long)puVar23 + (long)unaff_RBP);
      param_1 = (undefined8 *)((long)puVar15 + (long)unaff_RBP);
      puStack112 = (undefined8 *)&UNK_001042e1;
      param_2 = puVar23;
      func_0x00102490(puVar15,puVar23,unaff_RBP);
      cVar7 = (char)param_6;
      puVar23 = unaff_RBX;
    } while (puStack128 != unaff_RBX);
  }
code_r0x00104324:
  lVar9 = *(long *)(in_FS_OFFSET + 0x28);
  *(char *)param_1 = '\0';
  if (lStack64 == lVar9) {
    return;
  }
  puStack112 = (undefined8 *)&UNK_0010434d;
  func_0x001021f0();
  uStack1224 = (ulong)puStack96 & 0xffffffff;
  uStack1192 = uStack80;
  lStack168 = *(long *)(in_FS_OFFSET + 0x28);
  cVar19 = (char)puStack96;
  puVar23 = puVar15;
  puVar25 = extraout_RDX;
  puStack1200 = param_4;
  puStack152 = unaff_RBX;
  puStack144 = unaff_RBP;
  puStack136 = param_1;
  puStack120 = unaff_R14;
  puStack112 = unaff_R15;
  if (((cVar19 != '\0') && (show_local_fs != '\0')) ||
     ((cVar7 != '\0' && ((show_all_fs == '\0' && (show_listed_fs == '\0'))))))
  goto code_r0x001043ac;
  puStack1208 = &UNK_001043f8;
  puVar23 = param_5;
  cVar7 = selected_fstype();
  if (cVar7 == '\0') goto code_r0x001043ac;
  puStack1208 = &UNK_00104404;
  puVar23 = param_5;
  cVar7 = excluded_fstype();
  if (cVar7 != '\0') goto code_r0x001043ac;
  bStack1185 = puStack88 == (undefined *)0x0;
  if ((param_2 == (undefined8 *)0x0) || (!bStack1185)) {
    if ((puStack1200 == (undefined8 *)0x0) && (puStack1200 = param_2, param_2 == (undefined8 *)0x0))
    {
      puStack1200 = puVar15;
    }
    if (puStack88 != (undefined *)0x0) {
                    /* WARNING: Load size is inaccurate */
      puStack1120 = *(undefined **)(puStack88 + 0x30);
      lStack1168 = SUB168(*(undefined *)puStack88,0);
      uStack1160 = SUB168(*(undefined *)puStack88 >> 0x40,0);
                    /* WARNING: Load size is inaccurate */
      uStack1152 = SUB168(*(undefined *)(puStack88 + 0x10),0);
      uStack1144 = SUB168(*(undefined *)(puStack88 + 0x10) >> 0x40,0);
                    /* WARNING: Load size is inaccurate */
      auVar2 = *(undefined *)(puStack88 + 0x20);
      uStack1136 = SUB164(auVar2,0);
      uStack1132 = SUB164(auVar2 >> 0x20,0);
      puStack1128 = SUB168(auVar2 >> 0x40,0);
      if (((uStack1160 == 0) && (show_all_fs == '\0')) && (show_listed_fs == '\0'))
      goto code_r0x001043ac;
      goto code_r0x001044f9;
    }
  }
  else {
    if (*(char *)param_2 != '/') goto code_r0x001043ac;
    if (puStack1200 == (undefined8 *)0x0) {
      puStack1200 = param_2;
    }
  }
  puStack1208 = &UNK_00104451;
  puVar23 = puStack1200;
  iVar8 = get_fs_usage(puStack1200,puVar15,&lStack1168);
  if (iVar8 == 0) {
    if (((char)uStack1192 != '\0') && (show_all_fs != '\0')) {
      puVar23 = (undefined8 *)0x1;
      puStack1208 = &UNK_00104bfe;
      iVar8 = func_0x00102390(1,puStack1200,alStack976);
      if ((iVar8 == 0) && (puVar23 = devlist_table, devlist_table != (undefined8 *)0x0)) {
        lStack1040 = alStack976[0];
        puStack1208 = &UNK_00104c33;
        lVar9 = hash_lookup(devlist_table,&lStack1040);
        if ((lVar9 != 0) && (ppuVar6 = *(uint ***)(lVar9 + 8), ppuVar6 != (uint **)0x0)) {
          puVar23 = (undefined8 *)*ppuVar6;
          puStack1208 = &UNK_00104c54;
          iVar8 = func_0x00102340(puVar23,puVar15);
          if ((iVar8 != 0) && (((*(byte *)(ppuVar6 + 5) & 2) == 0 || (cVar19 == '\0')))) {
            uStack1136 = uStack1136 & 0xffffff00;
            param_5 = (undefined8 *)&UNK_00110959;
            puStack1120 = (undefined *)0xffffffffffffffff;
            puStack1128 = (undefined *)0xffffffffffffffff;
            uStack1144 = 0xffffffffffffffff;
            uStack1152 = 0xffffffffffffffff;
            uStack1160 = 0xffffffffffffffff;
            lStack1168 = -1;
          }
        }
      }
    }
    if (((uStack1160 == 0) && (show_all_fs == '\0')) && (show_listed_fs == '\0'))
    goto code_r0x001043ac;
  }
  else {
    puStack1208 = &UNK_0010445e;
    param_5 = (undefined8 *)func_0x001020b0();
    if (((char)uStack1192 == '\0') || ((*(uint *)param_5 != 0xd && (*(uint *)param_5 != 2)))) {
      puStack1208 = &UNK_0010448c;
      uVar16 = quotearg_n_style_colon(0,3,puStack1200);
      puVar23 = (undefined8 *)0x0;
      puStack1208 = &UNK_001044a1;
      func_0x001024a0(0,(ulong)*(uint *)param_5,&UNK_00110c4f,uVar16);
      exit_status = 1;
code_r0x001043ac:
      if (lStack168 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      puStack1208 = &UNK_00104d6b;
      func_0x001021f0();
      puVar18 = program_name;
      uVar16 = 5;
      uStack1248 = *(undefined8 *)(in_FS_OFFSET + 0x28);
      puStack1232 = param_5;
      puStack1216 = param_2;
      puStack1208 = puVar25;
      if ((int)puVar23 == 0) goto code_r0x00104dcd;
      uVar16 = func_0x00102190(0,&UNK_0010f368,5);
      func_0x00102530(stderr,1,uVar16,puVar18);
      do {
        func_0x00102510((ulong)puVar23 & 0xffffffff);
        uVar16 = extraout_RDX_00;
code_r0x00104dcd:
        uVar16 = func_0x00102190(0,&UNK_0010f390,uVar16);
        func_0x00102470(1,uVar16,puVar18);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010f3b8,5);
        func_0x00102310(uVar12,uVar16);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010f420,5);
        func_0x00102310(uVar12,uVar16);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010f470,5);
        func_0x00102310(uVar12,uVar16);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010f610,5);
        func_0x00102310(uVar12,uVar16);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010f710,5);
        func_0x00102310(uVar12,uVar16);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010f820,5);
        func_0x00102310(uVar12,uVar16);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010f8a8,5);
        func_0x00102310(uVar12,uVar16);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010f988,5);
        func_0x00102310(uVar12,uVar16);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010f9b8,5);
        func_0x00102310(uVar12,uVar16);
        uVar16 = func_0x00102190(0,&UNK_0010f9f0,5);
        func_0x00102470(1,uVar16,&UNK_0010f05d);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010fad0,5);
        func_0x00102310(uVar12,uVar16);
        uVar16 = stdout;
        uVar12 = func_0x00102190(0,&UNK_0010fba8,5);
        func_0x00102310(uVar12,uVar16);
        uStack1272 = 0;
        uStack1264 = 0;
        pbStack1368 = &UNK_0010f060;
        apbStack1352[4] = &UNK_0010f0a1;
        puStack1360 = &UNK_0010f062;
        puStack1304 = &UNK_0010f0ab;
        apbStack1352[0] = &UNK_0010f0da;
        puStack1288 = &UNK_0010f0b5;
        apbStack1352[1] = &UNK_0010f072;
        apbStack1352[2] = &UNK_0010f088;
        apbStack1352[3] = &UNK_0010f092;
        puStack1312 = &UNK_0010f092;
        puStack1296 = &UNK_0010f092;
        puStack1280 = &UNK_0010f092;
        ppbVar17 = &pbStack1368;
        do {
          ppbVar17 = ppbVar17;
          ppbVar17 = ppbVar17 + 2;
          pbVar24 = *ppbVar17;
          bVar26 = false;
          bVar27 = pbVar24 == (byte *)0x0;
          if (bVar27) break;
          lVar9 = 3;
          pbVar20 = &UNK_0010f05a;
          do {
            if (lVar9 == 0) break;
            lVar9 = lVar9 + -1;
            bVar26 = *pbVar20 < *pbVar24;
            bVar27 = *pbVar20 == *pbVar24;
            pbVar20 = pbVar20 + (ulong)bVar28 * -2 + 1;
            pbVar24 = pbVar24 + (ulong)bVar28 * -2 + 1;
          } while (bVar27);
        } while ((!bVar26 && !bVar27) != bVar26);
        pbVar24 = ppbVar17[3];
        if (pbVar24 == (byte *)0x0) {
          uVar16 = func_0x00102190(0,&UNK_0010f0bf,5);
          func_0x00102470(1,uVar16,&UNK_0010f0d6,&UNK_0010fc88);
          lVar9 = func_0x00102460(5,0);
          if ((lVar9 != 0) && (iVar8 = func_0x001020c0(lVar9,&UNK_0010f0e4,3), iVar8 != 0)) {
            pbVar24 = &UNK_0010f05a;
            goto code_r0x001051d8;
          }
          pbVar24 = &UNK_0010f05a;
          puVar18 = &UNK_0010f07c;
          uVar16 = func_0x00102190(0,&UNK_0010f0e8,5);
          func_0x00102470(1,uVar16,&UNK_0010fc88,&UNK_0010f05a);
        }
        else {
          uVar16 = func_0x00102190(0,&UNK_0010f0bf,5);
          func_0x00102470(1,uVar16,&UNK_0010f0d6,&UNK_0010fc88);
          lVar9 = func_0x00102460(5,0);
          if ((lVar9 != 0) && (iVar8 = func_0x001020c0(lVar9,&UNK_0010f0e4,3), iVar8 != 0)) {
code_r0x001051d8:
            uVar16 = stdout;
            uVar12 = func_0x00102190(0,&UNK_0010fcb0,5);
            func_0x00102310(uVar12,uVar16);
          }
          uVar16 = func_0x00102190(0,&UNK_0010f0e8,5);
          func_0x00102470(1,uVar16,&UNK_0010fc88,&UNK_0010f05a);
          puVar18 = &UNK_00110601;
          if (pbVar24 == &UNK_0010f05a) {
            puVar18 = &UNK_0010f07c;
          }
        }
        uVar16 = func_0x00102190(0,&UNK_0010fcf8,5);
        func_0x00102470(1,uVar16,pbVar24,puVar18);
      } while( true );
    }
    if (show_all_fs == '\0') goto code_r0x001043ac;
    uStack1136 = uStack1136 & 0xffffff00;
    param_5 = (undefined8 *)&UNK_00110959;
    puStack1120 = (undefined *)0xffffffffffffffff;
    puStack1128 = (undefined *)0xffffffffffffffff;
    uStack1144 = 0xffffffffffffffff;
    uStack1152 = 0xffffffffffffffff;
    uStack1160 = 0xffffffffffffffff;
    lStack1168 = -1;
  }
  file_systems_processed = 1;
code_r0x001044f9:
  puStack1208 = &UNK_001044fe;
  alloc_table_row();
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)&UNK_00110959;
  }
  if (extraout_RDX == (undefined *)0x0) {
    puVar25 = &UNK_00110959;
  }
  puStack1208 = &UNK_0010451b;
  puVar15 = (undefined8 *)xstrdup(puVar15);
  puStack1200 = puVar15;
  if ((char)uStack1192 != '\0') {
    puStack1208 = &UNK_00104531;
    uVar10 = func_0x001021b0(puVar15);
    if (0x24 < uVar10) {
      puStack1208 = &UNK_00104548;
      lVar9 = func_0x001022e0((long)puVar15 + (uVar10 - 0x24),&UNK_0010f008);
      if (lVar9 == 0x24) {
        puStack1208 = &UNK_00104559;
        puVar15 = (undefined8 *)canonicalize_filename_mode(puStack1200,0);
        if (puVar15 != (undefined8 *)0x0) {
          puStack1208 = &UNK_0010456a;
          func_0x00102070(puStack1200);
          puStack1200 = puVar15;
        }
      }
    }
  }
  uStack1032 = 1;
  lStack1040 = 1;
  if (param_5 == (undefined8 *)0x0) {
    param_5 = (undefined8 *)&UNK_00110959;
  }
  uStack1008 = 0;
  puStack1024 = puStack1128;
  puStack992 = (undefined *)0xffffffffffffffff;
  uStack984 = 0;
  puStack1000 = puStack1120;
  puStack1016 = puStack1120;
  if ((puStack1128 < (undefined *)0xfffffffffffffffe) &&
     (puStack1120 < (undefined *)0xfffffffffffffffe)) {
    puStack992 = puStack1128 + -(long)puStack1120;
    uStack984 = puStack1128 < puStack1120;
  }
  lStack1056 = -1;
  uStack1096 = output_block_size;
  uStack1080 = uStack1144;
  abStack1072[0] = uStack1144 < 0xfffffffffffffffe & (byte)uStack1136;
  lStack1104 = lStack1168;
  uStack1088 = uStack1160;
  uStack1064 = uStack1152;
  abStack1048[0] = 0;
  if ((uStack1152 < 0xfffffffffffffffe) && (uStack1160 < 0xfffffffffffffffe)) {
    lStack1056 = uStack1160 - uStack1152;
    abStack1048[0] = uStack1160 < uStack1152;
  }
  puVar18 = puStack1128;
  if ((print_grand_total != '\0') && (bStack1185 != false)) {
    if (puStack1128 < (undefined *)0xfffffffffffffffe) {
      grand_fsu._40_8_ = puStack1128 + (long)grand_fsu._40_8_;
    }
    if (puStack1120 < (undefined *)0xfffffffffffffffe) {
      grand_fsu._48_8_ = puStack1120 + (long)grand_fsu._48_8_;
    }
    if (uStack1160 < 0xfffffffffffffffe) {
      grand_fsu._8_8_ = grand_fsu._8_8_ + uStack1160 * lStack1168;
    }
    if (uStack1152 < 0xfffffffffffffffe) {
      grand_fsu._16_8_ = grand_fsu._16_8_ + uStack1152 * lStack1168;
    }
    if (uStack1144 < 0xfffffffffffffffe) {
      puVar23 = (undefined8 *)(lStack1168 * uStack1144);
      puVar18 = (undefined *)(ulong)((uint)grand_fsu[32] ^ 1);
      puVar15 = grand_fsu._24_8_;
      bVar21 = grand_fsu[32];
      if ((byte)((uint)grand_fsu[32] ^ 1) == abStack1072[0]) goto code_r0x00104ce0;
      grand_fsu._24_8_ = (undefined8 *)((long)puVar23 + (long)grand_fsu._24_8_);
    }
  }
code_r0x001046d0:
  uStack1224 = 0;
  lVar9 = columns;
  if (ncolumns != 0) {
    do {
      puVar4 = *(uint **)(lVar9 + uStack1224 * 8);
      lVar1 = uStack1224 * 8;
      uVar3 = puVar4[4];
      if (uVar3 != 1) {
        if (uVar3 == 0) {
          plVar13 = &lStack1104;
          goto code_r0x00104719;
        }
        if (uVar3 == 2) {
          plVar13 = (long *)0x0;
          goto code_r0x00104719;
        }
code_r0x00104d2f:
        puVar15 = &__PRETTY_FUNCTION___9006;
        puVar18 = &UNK_0010eff1;
        puStack1208 = &UNK_00104d4e;
        puVar23 = (undefined8 *)func_0x00102280(&UNK_0010f020,&UNK_0010eff1,0x468);
        goto code_r0x00104d4e;
      }
      plVar13 = &lStack1040;
code_r0x00104719:
      if (0xb < *puVar4) {
        puStack1208 = &UNK_00104d2f;
        func_0x00102280(&UNK_0010f039,&UNK_0010eff1,0x4ce,&__PRETTY_FUNCTION___9006);
        goto code_r0x00104d2f;
      }
      switch(*puVar4) {
      case 0:
        puStack1208 = &UNK_00104889;
        lStack1176 = xstrdup(puStack1200);
        break;
      case 1:
        puStack1208 = &UNK_00104870;
        lStack1176 = xstrdup(param_5);
        break;
      default:
        puVar18 = &UNK_00110959;
        if ((ulong)plVar13[2] < 0xfffffffffffffffe) {
          puStack1208 = &UNK_0010485e;
          puVar18 = (undefined *)
                    human_readable(plVar13[2],auStack832,(ulong)human_output_opts,*plVar13,
                                   plVar13[1]);
        }
        goto code_r0x001047ff;
      case 3:
      case 7:
        lVar9 = plVar13[6];
        bVar21 = *(byte *)(plVar13 + 7);
        goto code_r0x001047f0;
      case 4:
      case 8:
        bVar21 = *(byte *)(plVar13 + 4);
        lVar9 = plVar13[3];
code_r0x001047f0:
        puStack1208 = &UNK_001047fc;
        puVar18 = (undefined *)df_readable((ulong)bVar21,lVar9,auStack832,*plVar13,plVar13[1]);
        goto code_r0x001047ff;
      case 5:
      case 9:
        uVar10 = plVar13[6];
        if ((uVar10 < 0xfffffffffffffffe) &&
           (puVar18 = (undefined *)plVar13[3], puVar18 < (undefined *)0xfffffffffffffffe)) {
          if (*(char *)(plVar13 + 7) == '\0') {
            if (uVar10 < 0x28f5c28f5c28f5d) {
              puVar14 = puVar18 + uVar10;
              if ((puVar14 != (undefined *)0x0) &&
                 ((bool)*(char *)(plVar13 + 4) == CARRY8(uVar10,(ulong)puVar18))) {
                uVar10 = (ulong)((uVar10 * 100) % (ulong)puVar14 != 0) +
                         (uVar10 * 100) / (ulong)puVar14;
                if (-1 < (long)uVar10) {
                  dVar29 = (double)uVar10;
                  goto code_r0x001049b8;
                }
                dVar29 = (double)(uVar10 >> 1 | (ulong)((uint)uVar10 & 1));
                dVar29 = dVar29 + dVar29;
                goto code_r0x001049b8;
              }
            }
            if ((long)uVar10 < 0) {
              dVar29 = (double)(uVar10 >> 1 | (ulong)((uint)uVar10 & 1));
              dVar29 = dVar29 + dVar29;
            }
            else {
              dVar29 = (double)uVar10;
            }
          }
          else {
            uVar11 = -uVar10;
            if ((long)uVar10 < 1) {
              dVar29 = (double)uVar11;
            }
            else {
              dVar29 = (double)(uVar11 >> 1 | (ulong)((uint)uVar11 & 1));
              dVar29 = dVar29 + dVar29;
            }
            dVar29 = (double)((ulong)dVar29 ^ _UNK_0010fea0);
          }
          puVar14 = puVar18;
          if (*(char *)(plVar13 + 4) == '\0') goto code_r0x00104a80;
          puVar14 = (undefined *)-(long)puVar18;
          if ((long)puVar18 < 1) {
            dVar30 = (double)(long)puVar14;
          }
          else {
            uVar10 = (ulong)puVar14 >> 1;
            puVar14 = (undefined *)(ulong)((uint)puVar14 & 1);
            dVar30 = (double)(uVar10 | (ulong)puVar14);
            dVar30 = dVar30 + dVar30;
          }
          dVar30 = (double)((ulong)dVar30 ^ _UNK_0010fea0);
          goto code_r0x00104950;
        }
code_r0x001047be:
        puStack1208 = &UNK_001047ca;
        lStack1176 = func_0x00102540(&UNK_00110959);
        while (lStack1176 == 0) {
          while( true ) {
            puStack1208 = &UNK_00104a7e;
            xalloc_die();
            puVar14 = puVar18;
            dVar29 = extraout_XMM0_Qa;
code_r0x00104a80:
            if ((long)puVar14 < 0) {
              uVar10 = (ulong)puVar14 >> 1;
              puVar14 = (undefined *)(ulong)((uint)puVar14 & 1);
              dVar30 = (double)(uVar10 | (ulong)puVar14);
              dVar30 = dVar30 + dVar30;
            }
            else {
              dVar30 = (double)(long)puVar14;
            }
code_r0x00104950:
            puVar18 = puVar14;
            if (dVar30 + dVar29 == 0.00000000) goto code_r0x001047be;
            dVar29 = (dVar29 * _UNK_0010feb0) / (dVar30 + dVar29);
            dVar30 = (double)(long)dVar29;
            if (((dVar30 - _UNK_0010feb8 < dVar29) && (dVar29 <= _UNK_0010feb8 + dVar30)) &&
               (dVar29 = _UNK_0010feb8 + dVar30, dVar29 <= dVar30)) {
              dVar29 = dVar30 + 0.00000000;
            }
code_r0x001049b8:
            if (dVar29 < 0.00000000) goto code_r0x001047be;
            puVar18 = &UNK_0010f032;
            puStack1208 = &UNK_001049d8;
            iVar8 = rpl_asprintf(dVar29,&lStack1176);
            if (iVar8 != -1) break;
            lStack1176 = 0;
          }
        }
        goto code_r0x00104749;
      case 10:
        puStack1208 = &UNK_00104738;
        lStack1176 = xstrdup(param_2);
        break;
      case 0xb:
        puVar18 = puVar25;
code_r0x001047ff:
        puStack1208 = &UNK_00104804;
        lStack1176 = xstrdup(puVar18);
      }
      if (lStack1176 == 0) goto code_r0x00104cc1;
code_r0x00104749:
      puStack1208 = &UNK_0010474e;
      replace_problematic_chars();
      puVar18 = (undefined *)0x0;
      puStack1208 = &UNK_0010475a;
      iVar8 = gnu_mbswidth();
      lVar9 = columns;
      uVar11 = ncolumns;
      uVar10 = SEXT48(iVar8);
      lVar5 = *(long *)(columns + lVar1);
      if (uVar10 <= *(ulong *)(lVar5 + 0x20)) {
        uVar10 = *(ulong *)(lVar5 + 0x20);
      }
      uStack1224 = uStack1224 + 1;
      *(ulong *)(lVar5 + 0x20) = uVar10;
      *(long *)(*(long *)(table + -8 + nrows * 8) + lVar1) = lStack1176;
      if (uVar11 <= uStack1224) break;
    } while( true );
  }
  puStack1208 = &UNK_001047aa;
  puVar23 = puStack1200;
  func_0x00102070();
  goto code_r0x001043ac;
code_r0x00104cc1:
  puVar15 = &__PRETTY_FUNCTION___9006;
  puVar18 = &UNK_0010eff1;
  bVar21 = 0x4c;
  puStack1208 = &UNK_00104ce0;
  puVar23 = (undefined8 *)func_0x00102280(&UNK_0010f04c,&UNK_0010eff1,0x4d2);
code_r0x00104ce0:
  if (bVar21 == 0) {
    puVar23 = (undefined8 *)-(long)puVar23;
  }
  else {
    puVar15 = (undefined8 *)-(long)puVar15;
  }
  if (puVar23 < puVar15) {
    grand_fsu._24_8_ = (undefined8 *)((long)puVar15 - (long)puVar23);
  }
  else {
code_r0x00104d4e:
    grand_fsu._24_8_ = (undefined8 *)((long)puVar23 - (long)puVar15);
    grand_fsu[32] = (byte)puVar18;
  }
  if (grand_fsu[32] != 0) {
    grand_fsu._24_8_ = (undefined8 *)-(long)grand_fsu._24_8_;
  }
  goto code_r0x001046d0;
}

