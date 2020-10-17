
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void alloc_field(ulong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 *param_5,undefined8 param_6)

{
  undefined auVar1 [16];
  uint uVar2;
  uint *puVar3;
  uint **ppuVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *extraout_RDX;
  undefined8 uVar14;
  undefined8 extraout_RDX_00;
  byte **ppbVar15;
  undefined *puVar16;
  char cVar17;
  long lVar18;
  byte *pbVar19;
  byte bVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  undefined *puVar24;
  undefined8 *unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  byte bVar27;
  double dVar28;
  double extraout_XMM0_Qa;
  double dVar29;
  byte *pbStack1392;
  undefined *puStack1384;
  byte *apbStack1376 [5];
  undefined *puStack1336;
  undefined *puStack1328;
  undefined *puStack1320;
  undefined *puStack1312;
  undefined *puStack1304;
  undefined8 uStack1296;
  undefined8 uStack1288;
  undefined8 uStack1272;
  undefined8 *puStack1256;
  undefined8 *puStack1248;
  undefined8 *puStack1240;
  undefined *puStack1232;
  undefined1 *puStack1224;
  undefined4 uStack1216;
  bool bStack1209;
  long lStack1200;
  long lStack1192;
  ulong uStack1184;
  ulong uStack1176;
  ulong uStack1168;
  uint uStack1160;
  undefined4 uStack1156;
  undefined *puStack1152;
  undefined *puStack1144;
  long lStack1128;
  undefined8 uStack1120;
  ulong uStack1112;
  ulong uStack1104;
  byte abStack1096 [8];
  ulong uStack1088;
  long lStack1080;
  byte abStack1072 [8];
  long lStack1064;
  undefined8 uStack1056;
  undefined *puStack1048;
  undefined *puStack1040;
  undefined uStack1032;
  undefined *puStack1024;
  undefined *puStack1016;
  undefined uStack1008;
  long alStack1000 [18];
  undefined auStack856 [664];
  long lStack192;
  undefined8 *puStack176;
  undefined8 *puStack168;
  undefined8 *puStack160;
  undefined8 *puStack152;
  undefined8 *puStack144;
  undefined8 *puStack136;
  undefined8 *puStack120;
  undefined *puStack112;
  undefined4 uStack104;
  uint uStack100;
  undefined8 uStack96;
  long lStack88;
  undefined8 *puStack72;
  undefined8 *puStack64;
  
  bVar27 = 0;
  puStack176 = (undefined8 *)(param_1 & 0xffffffff);
  puStack1240 = (undefined8 *)((long)ncolumns + 1);
  bVar25 = SUB168(ZEXT816(8) * ZEXT816(puStack1240) >> 0x40,0) != 0;
  puStack1224 = (undefined1 *)(ulong)bVar25;
  puStack160 = columns;
  ncolumns = puStack1240;
  if (!bVar25) {
    columns = (undefined8 *)xrealloc(columns,(long)puStack1240 * 8);
    lVar13 = (long)(int)puStack176 * 0x30;
    *(undefined1 **)(columns + (long)ncolumns + -1) = field_data + lVar13;
    if (param_2 != (undefined8 *)0x0) {
      *(undefined8 **)(field_data + lVar13 + 0x18) = param_2;
    }
    lVar13 = (long)(int)puStack176 * 0x30;
    if (field_data[lVar13 + 0x2c] == '\0') {
      field_data[lVar13 + 0x2c] = 1;
      return;
    }
    puStack1224 = __PRETTY_FUNCTION___8831;
    puStack1240 = (undefined8 *)&UNK_0010eff1;
    puStack160 = (undefined8 *)&UNK_0010effa;
    func_0x00102280(&UNK_0010effa,&UNK_0010eff1,0x196);
  }
  xalloc_die();
  lStack88 = *(long *)(in_FS_OFFSET + 0x28);
  puStack136 = (undefined8 *)&UNK_00104296;
  puVar12 = puStack160;
  puStack72 = puStack176;
  puStack64 = param_2;
  lVar13 = func_0x001021b0();
  cVar5 = (char)param_6;
  puStack152 = (undefined8 *)((long)puStack160 + lVar13);
  uStack96 = 0;
  if (puStack160 != puStack152) {
    puStack120 = (undefined8 *)&uStack100;
    unaff_R14 = &uStack96;
    puVar22 = puStack160;
    do {
      while( true ) {
        puVar12 = puStack160;
        unaff_R15 = (undefined8 *)((long)puStack152 - (long)puVar22);
        puStack136 = (undefined8 *)&UNK_001042ff;
        puStack1224 = (undefined1 *)unaff_R14;
        puStack1240 = puVar22;
        puVar21 = puStack120;
        param_2 = (undefined8 *)rpl_mbrtowc(puStack120,puVar22,unaff_R15);
        if (param_2 <= unaff_R15) break;
        param_2 = (undefined8 *)0x1;
code_r0x0010430c:
        cVar5 = (char)param_6;
        puStack176 = (undefined8 *)((long)puVar22 + (long)param_2);
        *(char *)puVar12 = '?';
        puStack160 = (undefined8 *)((long)puVar12 + 1);
        uStack96 = 0;
        puVar22 = puStack176;
        puVar12 = puVar21;
        if (puStack152 == puStack176) goto code_r0x00104324;
      }
      puVar21 = (undefined8 *)(ulong)uStack100;
      puStack136 = (undefined8 *)&UNK_001042c9;
      iVar6 = func_0x00102100();
      if (iVar6 != 0) goto code_r0x0010430c;
      puStack176 = (undefined8 *)((long)puVar22 + (long)param_2);
      puStack160 = (undefined8 *)((long)puVar12 + (long)param_2);
      puStack136 = (undefined8 *)&UNK_001042e1;
      puStack1240 = puVar22;
      func_0x00102490(puVar12,puVar22,param_2);
      cVar5 = (char)param_6;
      puVar22 = puStack176;
    } while (puStack152 != puStack176);
  }
code_r0x00104324:
  lVar13 = *(long *)(in_FS_OFFSET + 0x28);
  *(char *)puStack160 = '\0';
  if (lStack88 == lVar13) {
    return;
  }
  puStack136 = (undefined8 *)&UNK_0010434d;
  func_0x001021f0();
  puStack1248 = (undefined8 *)((ulong)puStack120 & 0xffffffff);
  uStack1216 = uStack104;
  lStack192 = *(long *)(in_FS_OFFSET + 0x28);
  cVar17 = (char)puStack120;
  puVar22 = puVar12;
  puVar24 = extraout_RDX;
  puStack168 = param_2;
  puStack144 = unaff_R14;
  puStack136 = unaff_R15;
  if (((cVar17 != '\0') && (show_local_fs != '\0')) ||
     ((cVar5 != '\0' && ((show_all_fs == '\0' && (show_listed_fs == '\0'))))))
  goto code_r0x001043ac;
  puStack1232 = &UNK_001043f8;
  puVar22 = param_5;
  cVar5 = selected_fstype();
  if (cVar5 == '\0') goto code_r0x001043ac;
  puStack1232 = &UNK_00104404;
  puVar22 = param_5;
  cVar5 = excluded_fstype();
  if (cVar5 != '\0') goto code_r0x001043ac;
  bStack1209 = puStack112 == (undefined *)0x0;
  if ((puStack1240 == (undefined8 *)0x0) || (!bStack1209)) {
    if (((undefined8 *)puStack1224 == (undefined8 *)0x0) &&
       (puStack1224 = (undefined1 *)puStack1240, puStack1240 == (undefined8 *)0x0)) {
      puStack1224 = (undefined1 *)puVar12;
    }
    if (puStack112 != (undefined *)0x0) {
                    /* WARNING: Load size is inaccurate */
      puStack1144 = *(undefined **)(puStack112 + 0x30);
      lStack1192 = SUB168(*(undefined *)puStack112,0);
      uStack1184 = SUB168(*(undefined *)puStack112 >> 0x40,0);
                    /* WARNING: Load size is inaccurate */
      uStack1176 = SUB168(*(undefined *)(puStack112 + 0x10),0);
      uStack1168 = SUB168(*(undefined *)(puStack112 + 0x10) >> 0x40,0);
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)(puStack112 + 0x20);
      uStack1160 = SUB164(auVar1,0);
      uStack1156 = SUB164(auVar1 >> 0x20,0);
      puStack1152 = SUB168(auVar1 >> 0x40,0);
      if (((uStack1184 == 0) && (show_all_fs == '\0')) && (show_listed_fs == '\0'))
      goto code_r0x001043ac;
      goto code_r0x001044f9;
    }
  }
  else {
    if (*(char *)puStack1240 != '/') goto code_r0x001043ac;
    if ((undefined8 *)puStack1224 == (undefined8 *)0x0) {
      puStack1224 = (undefined1 *)puStack1240;
    }
  }
  puStack1232 = &UNK_00104451;
  puVar22 = (undefined8 *)puStack1224;
  iVar6 = get_fs_usage(puStack1224,puVar12,&lStack1192);
  if (iVar6 == 0) {
    if (((char)uStack1216 != '\0') && (show_all_fs != '\0')) {
      puVar22 = (undefined8 *)0x1;
      puStack1232 = &UNK_00104bfe;
      iVar6 = func_0x00102390(1,puStack1224,alStack1000);
      if ((iVar6 == 0) && (puVar22 = devlist_table, devlist_table != (undefined8 *)0x0)) {
        lStack1064 = alStack1000[0];
        puStack1232 = &UNK_00104c33;
        lVar13 = hash_lookup(devlist_table,&lStack1064);
        if ((lVar13 != 0) && (ppuVar4 = *(uint ***)(lVar13 + 8), ppuVar4 != (uint **)0x0)) {
          puVar22 = (undefined8 *)*ppuVar4;
          puStack1232 = &UNK_00104c54;
          iVar6 = func_0x00102340(puVar22,puVar12);
          if ((iVar6 != 0) && (((*(byte *)(ppuVar4 + 5) & 2) == 0 || (cVar17 == '\0')))) {
            uStack1160 = uStack1160 & 0xffffff00;
            param_5 = (undefined8 *)&UNK_00110959;
            puStack1144 = (undefined *)0xffffffffffffffff;
            puStack1152 = (undefined *)0xffffffffffffffff;
            uStack1168 = 0xffffffffffffffff;
            uStack1176 = 0xffffffffffffffff;
            uStack1184 = 0xffffffffffffffff;
            lStack1192 = -1;
          }
        }
      }
    }
    if (((uStack1184 == 0) && (show_all_fs == '\0')) && (show_listed_fs == '\0'))
    goto code_r0x001043ac;
  }
  else {
    puStack1232 = &UNK_0010445e;
    param_5 = (undefined8 *)func_0x001020b0();
    if (((char)uStack1216 == '\0') || ((*(uint *)param_5 != 0xd && (*(uint *)param_5 != 2)))) {
      puStack1232 = &UNK_0010448c;
      uVar14 = quotearg_n_style_colon(0,3,puStack1224);
      puVar22 = (undefined8 *)0x0;
      puStack1232 = &UNK_001044a1;
      func_0x001024a0(0,(ulong)*(uint *)param_5,&UNK_00110c4f,uVar14);
      exit_status = 1;
code_r0x001043ac:
      if (lStack192 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      puStack1232 = &UNK_00104d6b;
      func_0x001021f0();
      puVar16 = program_name;
      uVar14 = 5;
      uStack1272 = *(undefined8 *)(in_FS_OFFSET + 0x28);
      puStack1256 = param_5;
      puStack1232 = puVar24;
      if ((int)puVar22 == 0) goto code_r0x00104dcd;
      uVar14 = func_0x00102190(0,&UNK_0010f368,5);
      func_0x00102530(stderr,1,uVar14,puVar16);
      do {
        func_0x00102510((ulong)puVar22 & 0xffffffff);
        uVar14 = extraout_RDX_00;
code_r0x00104dcd:
        uVar14 = func_0x00102190(0,&UNK_0010f390,uVar14);
        func_0x00102470(1,uVar14,puVar16);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010f3b8,5);
        func_0x00102310(uVar9,uVar14);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010f420,5);
        func_0x00102310(uVar9,uVar14);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010f470,5);
        func_0x00102310(uVar9,uVar14);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010f610,5);
        func_0x00102310(uVar9,uVar14);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010f710,5);
        func_0x00102310(uVar9,uVar14);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010f820,5);
        func_0x00102310(uVar9,uVar14);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010f8a8,5);
        func_0x00102310(uVar9,uVar14);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010f988,5);
        func_0x00102310(uVar9,uVar14);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010f9b8,5);
        func_0x00102310(uVar9,uVar14);
        uVar14 = func_0x00102190(0,&UNK_0010f9f0,5);
        func_0x00102470(1,uVar14,&UNK_0010f05d);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010fad0,5);
        func_0x00102310(uVar9,uVar14);
        uVar14 = stdout;
        uVar9 = func_0x00102190(0,&UNK_0010fba8,5);
        func_0x00102310(uVar9,uVar14);
        uStack1296 = 0;
        uStack1288 = 0;
        pbStack1392 = &UNK_0010f060;
        apbStack1376[4] = &UNK_0010f0a1;
        puStack1384 = &UNK_0010f062;
        puStack1328 = &UNK_0010f0ab;
        apbStack1376[0] = &UNK_0010f0da;
        puStack1312 = &UNK_0010f0b5;
        apbStack1376[1] = &UNK_0010f072;
        apbStack1376[2] = &UNK_0010f088;
        apbStack1376[3] = &UNK_0010f092;
        puStack1336 = &UNK_0010f092;
        puStack1320 = &UNK_0010f092;
        puStack1304 = &UNK_0010f092;
        ppbVar15 = &pbStack1392;
        do {
          ppbVar15 = ppbVar15;
          ppbVar15 = ppbVar15 + 2;
          pbVar23 = *ppbVar15;
          bVar25 = false;
          bVar26 = pbVar23 == (byte *)0x0;
          if (bVar26) break;
          lVar13 = 3;
          pbVar19 = &UNK_0010f05a;
          do {
            if (lVar13 == 0) break;
            lVar13 = lVar13 + -1;
            bVar25 = *pbVar19 < *pbVar23;
            bVar26 = *pbVar19 == *pbVar23;
            pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
            pbVar23 = pbVar23 + (ulong)bVar27 * -2 + 1;
          } while (bVar26);
        } while ((!bVar25 && !bVar26) != bVar25);
        pbVar23 = ppbVar15[3];
        if (pbVar23 == (byte *)0x0) {
          uVar14 = func_0x00102190(0,&UNK_0010f0bf,5);
          func_0x00102470(1,uVar14,&UNK_0010f0d6,&UNK_0010fc88);
          lVar13 = func_0x00102460(5,0);
          if ((lVar13 != 0) && (iVar6 = func_0x001020c0(lVar13,&UNK_0010f0e4,3), iVar6 != 0)) {
            pbVar23 = &UNK_0010f05a;
            goto code_r0x001051d8;
          }
          pbVar23 = &UNK_0010f05a;
          puVar16 = &UNK_0010f07c;
          uVar14 = func_0x00102190(0,&UNK_0010f0e8,5);
          func_0x00102470(1,uVar14,&UNK_0010fc88,&UNK_0010f05a);
        }
        else {
          uVar14 = func_0x00102190(0,&UNK_0010f0bf,5);
          func_0x00102470(1,uVar14,&UNK_0010f0d6,&UNK_0010fc88);
          lVar13 = func_0x00102460(5,0);
          if ((lVar13 != 0) && (iVar6 = func_0x001020c0(lVar13,&UNK_0010f0e4,3), iVar6 != 0)) {
code_r0x001051d8:
            uVar14 = stdout;
            uVar9 = func_0x00102190(0,&UNK_0010fcb0,5);
            func_0x00102310(uVar9,uVar14);
          }
          uVar14 = func_0x00102190(0,&UNK_0010f0e8,5);
          func_0x00102470(1,uVar14,&UNK_0010fc88,&UNK_0010f05a);
          puVar16 = &UNK_00110601;
          if (pbVar23 == &UNK_0010f05a) {
            puVar16 = &UNK_0010f07c;
          }
        }
        uVar14 = func_0x00102190(0,&UNK_0010fcf8,5);
        func_0x00102470(1,uVar14,pbVar23,puVar16);
      } while( true );
    }
    if (show_all_fs == '\0') goto code_r0x001043ac;
    uStack1160 = uStack1160 & 0xffffff00;
    param_5 = (undefined8 *)&UNK_00110959;
    puStack1144 = (undefined *)0xffffffffffffffff;
    puStack1152 = (undefined *)0xffffffffffffffff;
    uStack1168 = 0xffffffffffffffff;
    uStack1176 = 0xffffffffffffffff;
    uStack1184 = 0xffffffffffffffff;
    lStack1192 = -1;
  }
  file_systems_processed = 1;
code_r0x001044f9:
  puStack1232 = &UNK_001044fe;
  alloc_table_row();
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)&UNK_00110959;
  }
  if (extraout_RDX == (undefined *)0x0) {
    puVar24 = &UNK_00110959;
  }
  puStack1232 = &UNK_0010451b;
  puVar12 = (undefined8 *)xstrdup(puVar12);
  puStack1224 = (undefined1 *)puVar12;
  if ((char)uStack1216 != '\0') {
    puStack1232 = &UNK_00104531;
    uVar7 = func_0x001021b0(puVar12);
    if (0x24 < uVar7) {
      puStack1232 = &UNK_00104548;
      lVar13 = func_0x001022e0((long)puVar12 + (uVar7 - 0x24),&UNK_0010f008);
      if (lVar13 == 0x24) {
        puStack1232 = &UNK_00104559;
        puVar12 = (undefined8 *)canonicalize_filename_mode(puStack1224,0);
        if (puVar12 != (undefined8 *)0x0) {
          puStack1232 = &UNK_0010456a;
          func_0x00102070(puStack1224);
          puStack1224 = (undefined1 *)puVar12;
        }
      }
    }
  }
  uStack1056 = 1;
  lStack1064 = 1;
  if (param_5 == (undefined8 *)0x0) {
    param_5 = (undefined8 *)&UNK_00110959;
  }
  uStack1032 = 0;
  puStack1048 = puStack1152;
  puStack1016 = (undefined *)0xffffffffffffffff;
  uStack1008 = 0;
  puStack1024 = puStack1144;
  puStack1040 = puStack1144;
  if ((puStack1152 < (undefined *)0xfffffffffffffffe) &&
     (puStack1144 < (undefined *)0xfffffffffffffffe)) {
    puStack1016 = puStack1152 + -(long)puStack1144;
    uStack1008 = puStack1152 < puStack1144;
  }
  lStack1080 = -1;
  uStack1120 = output_block_size;
  uStack1104 = uStack1168;
  abStack1096[0] = uStack1168 < 0xfffffffffffffffe & (byte)uStack1160;
  lStack1128 = lStack1192;
  uStack1112 = uStack1184;
  uStack1088 = uStack1176;
  abStack1072[0] = 0;
  if ((uStack1176 < 0xfffffffffffffffe) && (uStack1184 < 0xfffffffffffffffe)) {
    lStack1080 = uStack1184 - uStack1176;
    abStack1072[0] = uStack1184 < uStack1176;
  }
  puVar16 = puStack1152;
  if ((print_grand_total != '\0') && (bStack1209 != false)) {
    if (puStack1152 < (undefined *)0xfffffffffffffffe) {
      grand_fsu._40_8_ = puStack1152 + (long)grand_fsu._40_8_;
    }
    if (puStack1144 < (undefined *)0xfffffffffffffffe) {
      grand_fsu._48_8_ = puStack1144 + (long)grand_fsu._48_8_;
    }
    if (uStack1184 < 0xfffffffffffffffe) {
      grand_fsu._8_8_ = grand_fsu._8_8_ + uStack1184 * lStack1192;
    }
    if (uStack1176 < 0xfffffffffffffffe) {
      grand_fsu._16_8_ = grand_fsu._16_8_ + uStack1176 * lStack1192;
    }
    if (uStack1168 < 0xfffffffffffffffe) {
      puVar22 = (undefined8 *)(lStack1192 * uStack1168);
      puVar16 = (undefined *)(ulong)((uint)grand_fsu[32] ^ 1);
      puVar12 = grand_fsu._24_8_;
      bVar20 = grand_fsu[32];
      if ((byte)((uint)grand_fsu[32] ^ 1) == abStack1096[0]) goto code_r0x00104ce0;
      grand_fsu._24_8_ = (undefined8 *)((long)puVar22 + (long)grand_fsu._24_8_);
    }
  }
code_r0x001046d0:
  puStack1248 = (undefined8 *)0x0;
  puVar12 = columns;
  if (ncolumns != (undefined8 *)0x0) {
    do {
      puVar3 = (uint *)puVar12[(long)puStack1248];
      lVar13 = (long)puStack1248 * 8;
      uVar2 = puVar3[4];
      if (uVar2 != 1) {
        if (uVar2 == 0) {
          plVar10 = &lStack1128;
          goto code_r0x00104719;
        }
        if (uVar2 == 2) {
          plVar10 = (long *)0x0;
          goto code_r0x00104719;
        }
code_r0x00104d2f:
        puVar12 = &__PRETTY_FUNCTION___9006;
        puVar16 = &UNK_0010eff1;
        puStack1232 = &UNK_00104d4e;
        puVar22 = (undefined8 *)func_0x00102280(&UNK_0010f020,&UNK_0010eff1,0x468);
        goto code_r0x00104d4e;
      }
      plVar10 = &lStack1064;
code_r0x00104719:
      if (0xb < *puVar3) {
        puStack1232 = &UNK_00104d2f;
        func_0x00102280(&UNK_0010f039,&UNK_0010eff1,0x4ce,&__PRETTY_FUNCTION___9006);
        goto code_r0x00104d2f;
      }
      switch(*puVar3) {
      case 0:
        puStack1232 = &UNK_00104889;
        lStack1200 = xstrdup(puStack1224);
        break;
      case 1:
        puStack1232 = &UNK_00104870;
        lStack1200 = xstrdup(param_5);
        break;
      default:
        puVar16 = &UNK_00110959;
        if ((ulong)plVar10[2] < 0xfffffffffffffffe) {
          puStack1232 = &UNK_0010485e;
          puVar16 = (undefined *)
                    human_readable(plVar10[2],auStack856,(ulong)human_output_opts,*plVar10,
                                   plVar10[1]);
        }
        goto code_r0x001047ff;
      case 3:
      case 7:
        lVar18 = plVar10[6];
        bVar20 = *(byte *)(plVar10 + 7);
        goto code_r0x001047f0;
      case 4:
      case 8:
        bVar20 = *(byte *)(plVar10 + 4);
        lVar18 = plVar10[3];
code_r0x001047f0:
        puStack1232 = &UNK_001047fc;
        puVar16 = (undefined *)df_readable((ulong)bVar20,lVar18,auStack856,*plVar10,plVar10[1]);
        goto code_r0x001047ff;
      case 5:
      case 9:
        uVar7 = plVar10[6];
        if ((uVar7 < 0xfffffffffffffffe) &&
           (puVar16 = (undefined *)plVar10[3], puVar16 < (undefined *)0xfffffffffffffffe)) {
          if (*(char *)(plVar10 + 7) == '\0') {
            if (uVar7 < 0x28f5c28f5c28f5d) {
              puVar11 = puVar16 + uVar7;
              if ((puVar11 != (undefined *)0x0) &&
                 ((bool)*(char *)(plVar10 + 4) == CARRY8(uVar7,(ulong)puVar16))) {
                uVar7 = (ulong)((uVar7 * 100) % (ulong)puVar11 != 0) +
                        (uVar7 * 100) / (ulong)puVar11;
                if (-1 < (long)uVar7) {
                  dVar28 = (double)uVar7;
                  goto code_r0x001049b8;
                }
                dVar28 = (double)(uVar7 >> 1 | (ulong)((uint)uVar7 & 1));
                dVar28 = dVar28 + dVar28;
                goto code_r0x001049b8;
              }
            }
            if ((long)uVar7 < 0) {
              dVar28 = (double)(uVar7 >> 1 | (ulong)((uint)uVar7 & 1));
              dVar28 = dVar28 + dVar28;
            }
            else {
              dVar28 = (double)uVar7;
            }
          }
          else {
            uVar8 = -uVar7;
            if ((long)uVar7 < 1) {
              dVar28 = (double)uVar8;
            }
            else {
              dVar28 = (double)(uVar8 >> 1 | (ulong)((uint)uVar8 & 1));
              dVar28 = dVar28 + dVar28;
            }
            dVar28 = (double)((ulong)dVar28 ^ _UNK_0010fea0);
          }
          puVar11 = puVar16;
          if (*(char *)(plVar10 + 4) == '\0') goto code_r0x00104a80;
          puVar11 = (undefined *)-(long)puVar16;
          if ((long)puVar16 < 1) {
            dVar29 = (double)(long)puVar11;
          }
          else {
            uVar7 = (ulong)puVar11 >> 1;
            puVar11 = (undefined *)(ulong)((uint)puVar11 & 1);
            dVar29 = (double)(uVar7 | (ulong)puVar11);
            dVar29 = dVar29 + dVar29;
          }
          dVar29 = (double)((ulong)dVar29 ^ _UNK_0010fea0);
          goto code_r0x00104950;
        }
code_r0x001047be:
        puStack1232 = &UNK_001047ca;
        lStack1200 = func_0x00102540(&UNK_00110959);
        while (lStack1200 == 0) {
          while( true ) {
            puStack1232 = &UNK_00104a7e;
            xalloc_die();
            puVar11 = puVar16;
            dVar28 = extraout_XMM0_Qa;
code_r0x00104a80:
            if ((long)puVar11 < 0) {
              uVar7 = (ulong)puVar11 >> 1;
              puVar11 = (undefined *)(ulong)((uint)puVar11 & 1);
              dVar29 = (double)(uVar7 | (ulong)puVar11);
              dVar29 = dVar29 + dVar29;
            }
            else {
              dVar29 = (double)(long)puVar11;
            }
code_r0x00104950:
            puVar16 = puVar11;
            if (dVar29 + dVar28 == 0.00000000) goto code_r0x001047be;
            dVar28 = (dVar28 * _UNK_0010feb0) / (dVar29 + dVar28);
            dVar29 = (double)(long)dVar28;
            if (((dVar29 - _UNK_0010feb8 < dVar28) && (dVar28 <= _UNK_0010feb8 + dVar29)) &&
               (dVar28 = _UNK_0010feb8 + dVar29, dVar28 <= dVar29)) {
              dVar28 = dVar29 + 0.00000000;
            }
code_r0x001049b8:
            if (dVar28 < 0.00000000) goto code_r0x001047be;
            puVar16 = &UNK_0010f032;
            puStack1232 = &UNK_001049d8;
            iVar6 = rpl_asprintf(dVar28,&lStack1200);
            if (iVar6 != -1) break;
            lStack1200 = 0;
          }
        }
        goto code_r0x00104749;
      case 10:
        puStack1232 = &UNK_00104738;
        lStack1200 = xstrdup(puStack1240);
        break;
      case 0xb:
        puVar16 = puVar24;
code_r0x001047ff:
        puStack1232 = &UNK_00104804;
        lStack1200 = xstrdup(puVar16);
      }
      if (lStack1200 == 0) goto code_r0x00104cc1;
code_r0x00104749:
      puStack1232 = &UNK_0010474e;
      replace_problematic_chars();
      puVar16 = (undefined *)0x0;
      puStack1232 = &UNK_0010475a;
      iVar6 = gnu_mbswidth();
      puVar12 = columns;
      puVar22 = ncolumns;
      uVar7 = SEXT48(iVar6);
      lVar18 = columns[(long)puStack1248];
      if (uVar7 <= *(ulong *)(lVar18 + 0x20)) {
        uVar7 = *(ulong *)(lVar18 + 0x20);
      }
      puStack1248 = (undefined8 *)((long)puStack1248 + 1);
      *(ulong *)(lVar18 + 0x20) = uVar7;
      *(long *)(*(long *)(table + -8 + nrows * 8) + lVar13) = lStack1200;
      if (puVar22 <= puStack1248) break;
    } while( true );
  }
  puStack1232 = &UNK_001047aa;
  puVar22 = (undefined8 *)puStack1224;
  func_0x00102070();
  goto code_r0x001043ac;
code_r0x00104cc1:
  puVar12 = &__PRETTY_FUNCTION___9006;
  puVar16 = &UNK_0010eff1;
  bVar20 = 0x4c;
  puStack1232 = &UNK_00104ce0;
  puVar22 = (undefined8 *)func_0x00102280(&UNK_0010f04c,&UNK_0010eff1,0x4d2);
code_r0x00104ce0:
  if (bVar20 == 0) {
    puVar22 = (undefined8 *)-(long)puVar22;
  }
  else {
    puVar12 = (undefined8 *)-(long)puVar12;
  }
  if (puVar22 < puVar12) {
    grand_fsu._24_8_ = (undefined8 *)((long)puVar12 - (long)puVar22);
  }
  else {
code_r0x00104d4e:
    grand_fsu._24_8_ = (undefined8 *)((long)puVar22 - (long)puVar12);
    grand_fsu[32] = (byte)puVar16;
  }
  if (grand_fsu[32] != 0) {
    grand_fsu._24_8_ = (undefined8 *)-(long)grand_fsu._24_8_;
  }
  goto code_r0x001046d0;
}

