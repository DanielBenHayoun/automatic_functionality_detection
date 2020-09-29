
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_header(ulong param_1,int **param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5,ulong param_6)

{
  undefined auVar1 [16];
  uint *puVar2;
  uint **ppuVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *extraout_RDX;
  undefined8 extraout_RDX_00;
  byte **ppbVar15;
  ulong unaff_RBX;
  undefined *puVar16;
  char cVar17;
  long unaff_RBP;
  ulong uVar18;
  long lVar19;
  byte *pbVar20;
  byte bVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 unaff_R12;
  byte *pbVar24;
  ulong *unaff_R13;
  undefined *puVar25;
  undefined8 *unaff_R14;
  int **unaff_R15;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  byte bVar28;
  double dVar29;
  double extraout_XMM0_Qa;
  double dVar30;
  byte *pbStack2152;
  undefined *puStack2144;
  byte *apbStack2136 [5];
  undefined *puStack2096;
  undefined *puStack2088;
  undefined *puStack2080;
  undefined *puStack2072;
  undefined *puStack2064;
  undefined8 uStack2056;
  undefined8 uStack2048;
  undefined8 uStack2032;
  undefined8 *puStack2016;
  undefined8 *puStack2008;
  undefined8 *puStack2000;
  undefined *puStack1992;
  undefined1 *puStack1984;
  undefined4 uStack1976;
  bool bStack1969;
  long lStack1960;
  long lStack1952;
  ulong uStack1944;
  ulong uStack1936;
  ulong uStack1928;
  uint uStack1920;
  undefined4 uStack1916;
  undefined *puStack1912;
  undefined *puStack1904;
  long lStack1888;
  ulong uStack1880;
  ulong uStack1872;
  ulong uStack1864;
  byte abStack1856 [8];
  ulong uStack1848;
  long lStack1840;
  byte abStack1832 [8];
  long lStack1824;
  undefined8 uStack1816;
  undefined *puStack1808;
  undefined *puStack1800;
  undefined uStack1792;
  undefined *puStack1784;
  undefined *puStack1776;
  undefined uStack1768;
  long alStack1760 [18];
  undefined auStack1616 [664];
  long lStack952;
  undefined8 *puStack936;
  int **ppiStack928;
  undefined8 *puStack920;
  undefined8 *puStack912;
  undefined8 *puStack904;
  int **ppiStack896;
  undefined8 *puStack880;
  undefined *puStack872;
  undefined4 uStack864;
  uint uStack860;
  undefined8 uStack856;
  long lStack848;
  undefined8 *puStack832;
  int **ppiStack824;
  undefined8 uStack816;
  ulong *puStack808;
  undefined8 *puStack800;
  int **ppiStack792;
  ulong uStack776;
  undefined *puStack768;
  undefined8 uStack752;
  ulong uStack736;
  undefined8 auStack728 [83];
  long lStack64;
  
  bVar28 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puStack768 = &UNK_00103f39;
  alloc_table_row();
  if (ncolumns != (undefined8 *)0x0) {
    unaff_RBX = 0;
    unaff_R12 = 0x20c49ba5e353f7cf;
    unaff_R14 = auStack728;
    unaff_R13 = &uStack736;
    puVar13 = columns;
    do {
      unaff_RBP = unaff_RBX * 8;
      uStack736 = 0;
      unaff_R15 = (int **)(puVar13 + unaff_RBX);
      puStack768 = &UNK_00104009;
      uVar8 = func_0x00102190(0,*(undefined8 *)(*unaff_R15 + 6),5);
      if (**unaff_R15 != 2) goto code_r0x00103f70;
      if (header_mode == 0) {
code_r0x001040a8:
        param_6 = (ulong)(human_output_opts & 0x124);
        uVar7 = output_block_size;
        uVar9 = output_block_size;
        do {
          uVar6 = (uint)uVar9;
          uVar18 = uVar7 + ((uVar7 >> 3) / 0x7d) * -1000;
          uVar7 = (uVar7 >> 3) / 0x7d;
          uVar9 = uVar9 >> 10;
          if ((uVar18 | uVar6 & 0x3ff) != 0) goto code_r0x00104112;
        } while( true );
      }
      if (header_mode == 4) {
        if ((human_output_opts & 0x10) == 0) goto code_r0x001040a8;
code_r0x00103f70:
        puStack768 = &UNK_00103f78;
        uStack736 = func_0x00102540(uVar8);
        goto code_r0x00103f80;
      }
      if (header_mode != 3) goto code_r0x00103f70;
      puStack768 = &UNK_0010404b;
      uStack752 = uVar8;
      unaff_R15 = (int **)umaxtostr(output_block_size,unaff_R14);
      while( true ) {
        puStack768 = &UNK_00104061;
        uVar8 = func_0x00102190(0,&UNK_0010efeb,5);
        puStack768 = &UNK_00104076;
        iVar5 = rpl_asprintf(unaff_R13,uVar8,unaff_R15,uStack752);
        if (iVar5 == -1) {
          uStack736 = 0;
        }
code_r0x00103f80:
        if (uStack736 != 0) break;
        puStack768 = &UNK_00104188;
        xalloc_die();
code_r0x00104112:
        param_5 = (undefined8 *)0x1;
        puStack768 = &UNK_00104125;
        unaff_R15 = (int **)human_readable();
        puStack768 = &UNK_0010413b;
        uStack752 = func_0x00102190(0,&UNK_0010efe4,5);
      }
      puStack768 = &UNK_00103f8e;
      replace_problematic_chars();
      param_2 = (int **)0x0;
      *(ulong *)(*(long *)(table + -8 + nrows * 8) + unaff_RBP) = uStack736;
      puStack768 = &UNK_00103fb6;
      param_1 = uStack736;
      iVar5 = gnu_mbswidth();
      puVar13 = columns;
      uVar9 = (ulong)ncolumns;
      uVar7 = SEXT48(iVar5);
      lVar14 = columns[unaff_RBX];
      if (uVar7 <= *(ulong *)(lVar14 + 0x20)) {
        uVar7 = *(ulong *)(lVar14 + 0x20);
      }
      unaff_RBX = unaff_RBX + 1;
      *(ulong *)(lVar14 + 0x20) = uVar7;
    } while (unaff_RBX < uVar9);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack768 = &UNK_0010419f;
  func_0x001021f0();
  puStack936 = (undefined8 *)(param_1 & 0xffffffff);
  puStack2000 = (undefined8 *)((long)ncolumns + 1);
  bVar26 = SUB168(ZEXT816(8) * ZEXT816(puStack2000) >> 0x40,0) != 0;
  puStack1984 = (undefined1 *)(ulong)bVar26;
  puStack920 = columns;
  ncolumns = puStack2000;
  uStack776 = unaff_RBX;
  puStack768 = (undefined *)unaff_RBP;
  if (!bVar26) {
    ppiStack792 = (int **)&UNK_001041ea;
    columns = (undefined8 *)xrealloc(columns,(long)puStack2000 * 8);
    lVar14 = (long)(int)puStack936 * 0x30;
    *(undefined1 **)(columns + (long)ncolumns + -1) = field_data + lVar14;
    if (param_2 != (int **)0x0) {
      *(int ***)(field_data + lVar14 + 0x18) = param_2;
    }
    lVar14 = (long)(int)puStack936 * 0x30;
    if (field_data[lVar14 + 0x2c] == '\0') {
      field_data[lVar14 + 0x2c] = 1;
      return;
    }
    puStack1984 = __PRETTY_FUNCTION___8831;
    puStack2000 = (undefined8 *)&UNK_0010eff1;
    puStack920 = (undefined8 *)&UNK_0010effa;
    ppiStack792 = (int **)&UNK_0010425d;
    func_0x00102280(&UNK_0010effa,&UNK_0010eff1,0x196);
  }
  ppiStack792 = (int **)&UNK_00104262;
  xalloc_die();
  lStack848 = *(long *)(in_FS_OFFSET + 0x28);
  ppiStack896 = (int **)&UNK_00104296;
  puVar13 = puStack920;
  puStack832 = puStack936;
  ppiStack824 = param_2;
  uStack816 = unaff_R12;
  puStack808 = unaff_R13;
  puStack800 = unaff_R14;
  ppiStack792 = unaff_R15;
  lVar14 = func_0x001021b0();
  cVar4 = (char)param_6;
  puStack912 = (undefined8 *)((long)puStack920 + lVar14);
  uStack856 = 0;
  if (puStack920 != puStack912) {
    puStack880 = (undefined8 *)&uStack860;
    unaff_R14 = &uStack856;
    puVar23 = puStack920;
    do {
      while( true ) {
        puVar13 = puStack920;
        unaff_R15 = (int **)((long)puStack912 - (long)puVar23);
        ppiStack896 = (int **)&UNK_001042ff;
        puStack1984 = (undefined1 *)unaff_R14;
        puStack2000 = puVar23;
        puVar22 = puStack880;
        param_2 = (int **)rpl_mbrtowc(puStack880,puVar23,unaff_R15);
        if (param_2 <= unaff_R15) break;
        param_2 = (int **)0x1;
code_r0x0010430c:
        cVar4 = (char)param_6;
        puStack936 = (undefined8 *)((long)puVar23 + (long)param_2);
        *(char *)puVar13 = '?';
        puStack920 = (undefined8 *)((long)puVar13 + 1);
        uStack856 = 0;
        puVar23 = puStack936;
        puVar13 = puVar22;
        if (puStack912 == puStack936) goto code_r0x00104324;
      }
      puVar22 = (undefined8 *)(ulong)uStack860;
      ppiStack896 = (int **)&UNK_001042c9;
      iVar5 = func_0x00102100();
      if (iVar5 != 0) goto code_r0x0010430c;
      puStack936 = (undefined8 *)((long)puVar23 + (long)param_2);
      puStack920 = (undefined8 *)((long)puVar13 + (long)param_2);
      ppiStack896 = (int **)&UNK_001042e1;
      puStack2000 = puVar23;
      func_0x00102490(puVar13,puVar23,param_2);
      cVar4 = (char)param_6;
      puVar23 = puStack936;
    } while (puStack912 != puStack936);
  }
code_r0x00104324:
  lVar14 = *(long *)(in_FS_OFFSET + 0x28);
  *(char *)puStack920 = '\0';
  if (lStack848 == lVar14) {
    return;
  }
  ppiStack896 = (int **)&UNK_0010434d;
  func_0x001021f0();
  puStack2008 = (undefined8 *)((ulong)puStack880 & 0xffffffff);
  uStack1976 = uStack864;
  lStack952 = *(long *)(in_FS_OFFSET + 0x28);
  cVar17 = (char)puStack880;
  puVar23 = puVar13;
  puVar25 = extraout_RDX;
  ppiStack928 = param_2;
  puStack904 = unaff_R14;
  ppiStack896 = unaff_R15;
  if (((cVar17 != '\0') && (show_local_fs != '\0')) ||
     ((cVar4 != '\0' && ((show_all_fs == '\0' && (show_listed_fs == '\0'))))))
  goto code_r0x001043ac;
  puStack1992 = &UNK_001043f8;
  puVar23 = param_5;
  cVar4 = selected_fstype();
  if (cVar4 == '\0') goto code_r0x001043ac;
  puStack1992 = &UNK_00104404;
  puVar23 = param_5;
  cVar4 = excluded_fstype();
  if (cVar4 != '\0') goto code_r0x001043ac;
  bStack1969 = puStack872 == (undefined *)0x0;
  if ((puStack2000 == (undefined8 *)0x0) || (!bStack1969)) {
    if (((undefined8 *)puStack1984 == (undefined8 *)0x0) &&
       (puStack1984 = (undefined1 *)puStack2000, puStack2000 == (undefined8 *)0x0)) {
      puStack1984 = (undefined1 *)puVar13;
    }
    if (puStack872 != (undefined *)0x0) {
                    /* WARNING: Load size is inaccurate */
      puStack1904 = *(undefined **)(puStack872 + 0x30);
      lStack1952 = SUB168(*(undefined *)puStack872,0);
      uStack1944 = SUB168(*(undefined *)puStack872 >> 0x40,0);
                    /* WARNING: Load size is inaccurate */
      uStack1936 = SUB168(*(undefined *)(puStack872 + 0x10),0);
      uStack1928 = SUB168(*(undefined *)(puStack872 + 0x10) >> 0x40,0);
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)(puStack872 + 0x20);
      uStack1920 = SUB164(auVar1,0);
      uStack1916 = SUB164(auVar1 >> 0x20,0);
      puStack1912 = SUB168(auVar1 >> 0x40,0);
      if (((uStack1944 == 0) && (show_all_fs == '\0')) && (show_listed_fs == '\0'))
      goto code_r0x001043ac;
      goto code_r0x001044f9;
    }
  }
  else {
    if (*(char *)puStack2000 != '/') goto code_r0x001043ac;
    if ((undefined8 *)puStack1984 == (undefined8 *)0x0) {
      puStack1984 = (undefined1 *)puStack2000;
    }
  }
  puStack1992 = &UNK_00104451;
  puVar23 = (undefined8 *)puStack1984;
  iVar5 = get_fs_usage(puStack1984,puVar13,&lStack1952);
  if (iVar5 == 0) {
    if (((char)uStack1976 != '\0') && (show_all_fs != '\0')) {
      puVar23 = (undefined8 *)0x1;
      puStack1992 = &UNK_00104bfe;
      iVar5 = func_0x00102390(1,puStack1984,alStack1760);
      if ((iVar5 == 0) && (puVar23 = devlist_table, devlist_table != (undefined8 *)0x0)) {
        lStack1824 = alStack1760[0];
        puStack1992 = &UNK_00104c33;
        lVar14 = hash_lookup(devlist_table,&lStack1824);
        if ((lVar14 != 0) && (ppuVar3 = *(uint ***)(lVar14 + 8), ppuVar3 != (uint **)0x0)) {
          puVar23 = (undefined8 *)*ppuVar3;
          puStack1992 = &UNK_00104c54;
          iVar5 = func_0x00102340(puVar23,puVar13);
          if ((iVar5 != 0) && (((*(byte *)(ppuVar3 + 5) & 2) == 0 || (cVar17 == '\0')))) {
            uStack1920 = uStack1920 & 0xffffff00;
            param_5 = (undefined8 *)&UNK_00110959;
            puStack1904 = (undefined *)0xffffffffffffffff;
            puStack1912 = (undefined *)0xffffffffffffffff;
            uStack1928 = 0xffffffffffffffff;
            uStack1936 = 0xffffffffffffffff;
            uStack1944 = 0xffffffffffffffff;
            lStack1952 = -1;
          }
        }
      }
    }
    if (((uStack1944 == 0) && (show_all_fs == '\0')) && (show_listed_fs == '\0'))
    goto code_r0x001043ac;
  }
  else {
    puStack1992 = &UNK_0010445e;
    param_5 = (undefined8 *)func_0x001020b0();
    if (((char)uStack1976 == '\0') || ((*(uint *)param_5 != 0xd && (*(uint *)param_5 != 2)))) {
      puStack1992 = &UNK_0010448c;
      uVar8 = quotearg_n_style_colon(0,3,puStack1984);
      puVar23 = (undefined8 *)0x0;
      puStack1992 = &UNK_001044a1;
      func_0x001024a0(0,(ulong)*(uint *)param_5,&UNK_00110c4f,uVar8);
      exit_status = 1;
code_r0x001043ac:
      if (lStack952 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      puStack1992 = &UNK_00104d6b;
      func_0x001021f0();
      puVar16 = program_name;
      uVar8 = 5;
      uStack2032 = *(undefined8 *)(in_FS_OFFSET + 0x28);
      puStack2016 = param_5;
      puStack1992 = puVar25;
      if ((int)puVar23 == 0) goto code_r0x00104dcd;
      uVar8 = func_0x00102190(0,&UNK_0010f368,5);
      func_0x00102530(stderr,1,uVar8,puVar16);
      do {
        func_0x00102510((ulong)puVar23 & 0xffffffff);
        uVar8 = extraout_RDX_00;
code_r0x00104dcd:
        uVar8 = func_0x00102190(0,&UNK_0010f390,uVar8);
        func_0x00102470(1,uVar8,puVar16);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010f3b8,5);
        func_0x00102310(uVar10,uVar8);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010f420,5);
        func_0x00102310(uVar10,uVar8);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010f470,5);
        func_0x00102310(uVar10,uVar8);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010f610,5);
        func_0x00102310(uVar10,uVar8);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010f710,5);
        func_0x00102310(uVar10,uVar8);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010f820,5);
        func_0x00102310(uVar10,uVar8);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010f8a8,5);
        func_0x00102310(uVar10,uVar8);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010f988,5);
        func_0x00102310(uVar10,uVar8);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010f9b8,5);
        func_0x00102310(uVar10,uVar8);
        uVar8 = func_0x00102190(0,&UNK_0010f9f0,5);
        func_0x00102470(1,uVar8,&UNK_0010f05d);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010fad0,5);
        func_0x00102310(uVar10,uVar8);
        uVar8 = stdout;
        uVar10 = func_0x00102190(0,&UNK_0010fba8,5);
        func_0x00102310(uVar10,uVar8);
        uStack2056 = 0;
        uStack2048 = 0;
        pbStack2152 = &UNK_0010f060;
        apbStack2136[4] = &UNK_0010f0a1;
        puStack2144 = &UNK_0010f062;
        puStack2088 = &UNK_0010f0ab;
        apbStack2136[0] = &UNK_0010f0da;
        puStack2072 = &UNK_0010f0b5;
        apbStack2136[1] = &UNK_0010f072;
        apbStack2136[2] = &UNK_0010f088;
        apbStack2136[3] = &UNK_0010f092;
        puStack2096 = &UNK_0010f092;
        puStack2080 = &UNK_0010f092;
        puStack2064 = &UNK_0010f092;
        ppbVar15 = &pbStack2152;
        do {
          ppbVar15 = ppbVar15;
          ppbVar15 = ppbVar15 + 2;
          pbVar24 = *ppbVar15;
          bVar26 = false;
          bVar27 = pbVar24 == (byte *)0x0;
          if (bVar27) break;
          lVar14 = 3;
          pbVar20 = &UNK_0010f05a;
          do {
            if (lVar14 == 0) break;
            lVar14 = lVar14 + -1;
            bVar26 = *pbVar20 < *pbVar24;
            bVar27 = *pbVar20 == *pbVar24;
            pbVar20 = pbVar20 + (ulong)bVar28 * -2 + 1;
            pbVar24 = pbVar24 + (ulong)bVar28 * -2 + 1;
          } while (bVar27);
        } while ((!bVar26 && !bVar27) != bVar26);
        pbVar24 = ppbVar15[3];
        if (pbVar24 == (byte *)0x0) {
          uVar8 = func_0x00102190(0,&UNK_0010f0bf,5);
          func_0x00102470(1,uVar8,&UNK_0010f0d6,&UNK_0010fc88);
          lVar14 = func_0x00102460(5,0);
          if ((lVar14 != 0) && (iVar5 = func_0x001020c0(lVar14,&UNK_0010f0e4,3), iVar5 != 0)) {
            pbVar24 = &UNK_0010f05a;
            goto code_r0x001051d8;
          }
          pbVar24 = &UNK_0010f05a;
          puVar16 = &UNK_0010f07c;
          uVar8 = func_0x00102190(0,&UNK_0010f0e8,5);
          func_0x00102470(1,uVar8,&UNK_0010fc88,&UNK_0010f05a);
        }
        else {
          uVar8 = func_0x00102190(0,&UNK_0010f0bf,5);
          func_0x00102470(1,uVar8,&UNK_0010f0d6,&UNK_0010fc88);
          lVar14 = func_0x00102460(5,0);
          if ((lVar14 != 0) && (iVar5 = func_0x001020c0(lVar14,&UNK_0010f0e4,3), iVar5 != 0)) {
code_r0x001051d8:
            uVar8 = stdout;
            uVar10 = func_0x00102190(0,&UNK_0010fcb0,5);
            func_0x00102310(uVar10,uVar8);
          }
          uVar8 = func_0x00102190(0,&UNK_0010f0e8,5);
          func_0x00102470(1,uVar8,&UNK_0010fc88,&UNK_0010f05a);
          puVar16 = &UNK_00110601;
          if (pbVar24 == &UNK_0010f05a) {
            puVar16 = &UNK_0010f07c;
          }
        }
        uVar8 = func_0x00102190(0,&UNK_0010fcf8,5);
        func_0x00102470(1,uVar8,pbVar24,puVar16);
      } while( true );
    }
    if (show_all_fs == '\0') goto code_r0x001043ac;
    uStack1920 = uStack1920 & 0xffffff00;
    param_5 = (undefined8 *)&UNK_00110959;
    puStack1904 = (undefined *)0xffffffffffffffff;
    puStack1912 = (undefined *)0xffffffffffffffff;
    uStack1928 = 0xffffffffffffffff;
    uStack1936 = 0xffffffffffffffff;
    uStack1944 = 0xffffffffffffffff;
    lStack1952 = -1;
  }
  file_systems_processed = 1;
code_r0x001044f9:
  puStack1992 = &UNK_001044fe;
  alloc_table_row();
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)&UNK_00110959;
  }
  if (extraout_RDX == (undefined *)0x0) {
    puVar25 = &UNK_00110959;
  }
  puStack1992 = &UNK_0010451b;
  puVar13 = (undefined8 *)xstrdup(puVar13);
  puStack1984 = (undefined1 *)puVar13;
  if ((char)uStack1976 != '\0') {
    puStack1992 = &UNK_00104531;
    uVar7 = func_0x001021b0(puVar13);
    if (0x24 < uVar7) {
      puStack1992 = &UNK_00104548;
      lVar14 = func_0x001022e0((long)puVar13 + (uVar7 - 0x24),&UNK_0010f008);
      if (lVar14 == 0x24) {
        puStack1992 = &UNK_00104559;
        puVar13 = (undefined8 *)canonicalize_filename_mode(puStack1984,0);
        if (puVar13 != (undefined8 *)0x0) {
          puStack1992 = &UNK_0010456a;
          func_0x00102070(puStack1984);
          puStack1984 = (undefined1 *)puVar13;
        }
      }
    }
  }
  uStack1816 = 1;
  lStack1824 = 1;
  if (param_5 == (undefined8 *)0x0) {
    param_5 = (undefined8 *)&UNK_00110959;
  }
  uStack1792 = 0;
  puStack1808 = puStack1912;
  puStack1776 = (undefined *)0xffffffffffffffff;
  uStack1768 = 0;
  puStack1784 = puStack1904;
  puStack1800 = puStack1904;
  if ((puStack1912 < (undefined *)0xfffffffffffffffe) &&
     (puStack1904 < (undefined *)0xfffffffffffffffe)) {
    puStack1776 = puStack1912 + -(long)puStack1904;
    uStack1768 = puStack1912 < puStack1904;
  }
  lStack1840 = -1;
  uStack1880 = output_block_size;
  uStack1864 = uStack1928;
  abStack1856[0] = uStack1928 < 0xfffffffffffffffe & (byte)uStack1920;
  lStack1888 = lStack1952;
  uStack1872 = uStack1944;
  uStack1848 = uStack1936;
  abStack1832[0] = 0;
  if ((uStack1936 < 0xfffffffffffffffe) && (uStack1944 < 0xfffffffffffffffe)) {
    lStack1840 = uStack1944 - uStack1936;
    abStack1832[0] = uStack1944 < uStack1936;
  }
  puVar16 = puStack1912;
  if ((print_grand_total != '\0') && (bStack1969 != false)) {
    if (puStack1912 < (undefined *)0xfffffffffffffffe) {
      grand_fsu._40_8_ = puStack1912 + (long)grand_fsu._40_8_;
    }
    if (puStack1904 < (undefined *)0xfffffffffffffffe) {
      grand_fsu._48_8_ = puStack1904 + (long)grand_fsu._48_8_;
    }
    if (uStack1944 < 0xfffffffffffffffe) {
      grand_fsu._8_8_ = grand_fsu._8_8_ + uStack1944 * lStack1952;
    }
    if (uStack1936 < 0xfffffffffffffffe) {
      grand_fsu._16_8_ = grand_fsu._16_8_ + uStack1936 * lStack1952;
    }
    if (uStack1928 < 0xfffffffffffffffe) {
      puVar23 = (undefined8 *)(lStack1952 * uStack1928);
      puVar16 = (undefined *)(ulong)((uint)grand_fsu[32] ^ 1);
      puVar13 = grand_fsu._24_8_;
      bVar21 = grand_fsu[32];
      if ((byte)((uint)grand_fsu[32] ^ 1) == abStack1856[0]) goto code_r0x00104ce0;
      grand_fsu._24_8_ = (undefined8 *)((long)puVar23 + (long)grand_fsu._24_8_);
    }
  }
code_r0x001046d0:
  puStack2008 = (undefined8 *)0x0;
  puVar13 = columns;
  if (ncolumns != (undefined8 *)0x0) {
    do {
      puVar2 = (uint *)puVar13[(long)puStack2008];
      lVar14 = (long)puStack2008 * 8;
      uVar6 = puVar2[4];
      if (uVar6 != 1) {
        if (uVar6 == 0) {
          plVar11 = &lStack1888;
          goto code_r0x00104719;
        }
        if (uVar6 == 2) {
          plVar11 = (long *)0x0;
          goto code_r0x00104719;
        }
code_r0x00104d2f:
        puVar13 = &__PRETTY_FUNCTION___9006;
        puVar16 = &UNK_0010eff1;
        puStack1992 = &UNK_00104d4e;
        puVar23 = (undefined8 *)func_0x00102280(&UNK_0010f020,&UNK_0010eff1,0x468);
        goto code_r0x00104d4e;
      }
      plVar11 = &lStack1824;
code_r0x00104719:
      if (0xb < *puVar2) {
        puStack1992 = &UNK_00104d2f;
        func_0x00102280(&UNK_0010f039,&UNK_0010eff1,0x4ce,&__PRETTY_FUNCTION___9006);
        goto code_r0x00104d2f;
      }
      switch(*puVar2) {
      case 0:
        puStack1992 = &UNK_00104889;
        lStack1960 = xstrdup(puStack1984);
        break;
      case 1:
        puStack1992 = &UNK_00104870;
        lStack1960 = xstrdup(param_5);
        break;
      default:
        puVar16 = &UNK_00110959;
        if ((ulong)plVar11[2] < 0xfffffffffffffffe) {
          puStack1992 = &UNK_0010485e;
          puVar16 = (undefined *)
                    human_readable(plVar11[2],auStack1616,(ulong)human_output_opts,*plVar11,
                                   plVar11[1]);
        }
        goto code_r0x001047ff;
      case 3:
      case 7:
        lVar19 = plVar11[6];
        bVar21 = *(byte *)(plVar11 + 7);
        goto code_r0x001047f0;
      case 4:
      case 8:
        bVar21 = *(byte *)(plVar11 + 4);
        lVar19 = plVar11[3];
code_r0x001047f0:
        puStack1992 = &UNK_001047fc;
        puVar16 = (undefined *)df_readable((ulong)bVar21,lVar19,auStack1616,*plVar11,plVar11[1]);
        goto code_r0x001047ff;
      case 5:
      case 9:
        uVar7 = plVar11[6];
        if ((uVar7 < 0xfffffffffffffffe) &&
           (puVar16 = (undefined *)plVar11[3], puVar16 < (undefined *)0xfffffffffffffffe)) {
          if (*(char *)(plVar11 + 7) == '\0') {
            if (uVar7 < 0x28f5c28f5c28f5d) {
              puVar12 = puVar16 + uVar7;
              if ((puVar12 != (undefined *)0x0) &&
                 ((bool)*(char *)(plVar11 + 4) == CARRY8(uVar7,(ulong)puVar16))) {
                uVar7 = (ulong)((uVar7 * 100) % (ulong)puVar12 != 0) +
                        (uVar7 * 100) / (ulong)puVar12;
                if (-1 < (long)uVar7) {
                  dVar29 = (double)uVar7;
                  goto code_r0x001049b8;
                }
                dVar29 = (double)(uVar7 >> 1 | (ulong)((uint)uVar7 & 1));
                dVar29 = dVar29 + dVar29;
                goto code_r0x001049b8;
              }
            }
            if ((long)uVar7 < 0) {
              dVar29 = (double)(uVar7 >> 1 | (ulong)((uint)uVar7 & 1));
              dVar29 = dVar29 + dVar29;
            }
            else {
              dVar29 = (double)uVar7;
            }
          }
          else {
            uVar9 = -uVar7;
            if ((long)uVar7 < 1) {
              dVar29 = (double)uVar9;
            }
            else {
              dVar29 = (double)(uVar9 >> 1 | (ulong)((uint)uVar9 & 1));
              dVar29 = dVar29 + dVar29;
            }
            dVar29 = (double)((ulong)dVar29 ^ _UNK_0010fea0);
          }
          puVar12 = puVar16;
          if (*(char *)(plVar11 + 4) == '\0') goto code_r0x00104a80;
          puVar12 = (undefined *)-(long)puVar16;
          if ((long)puVar16 < 1) {
            dVar30 = (double)(long)puVar12;
          }
          else {
            uVar7 = (ulong)puVar12 >> 1;
            puVar12 = (undefined *)(ulong)((uint)puVar12 & 1);
            dVar30 = (double)(uVar7 | (ulong)puVar12);
            dVar30 = dVar30 + dVar30;
          }
          dVar30 = (double)((ulong)dVar30 ^ _UNK_0010fea0);
          goto code_r0x00104950;
        }
code_r0x001047be:
        puStack1992 = &UNK_001047ca;
        lStack1960 = func_0x00102540(&UNK_00110959);
        while (lStack1960 == 0) {
          while( true ) {
            puStack1992 = &UNK_00104a7e;
            xalloc_die();
            puVar12 = puVar16;
            dVar29 = extraout_XMM0_Qa;
code_r0x00104a80:
            if ((long)puVar12 < 0) {
              uVar7 = (ulong)puVar12 >> 1;
              puVar12 = (undefined *)(ulong)((uint)puVar12 & 1);
              dVar30 = (double)(uVar7 | (ulong)puVar12);
              dVar30 = dVar30 + dVar30;
            }
            else {
              dVar30 = (double)(long)puVar12;
            }
code_r0x00104950:
            puVar16 = puVar12;
            if (dVar30 + dVar29 == 0.00000000) goto code_r0x001047be;
            dVar29 = (dVar29 * _UNK_0010feb0) / (dVar30 + dVar29);
            dVar30 = (double)(long)dVar29;
            if (((dVar30 - _UNK_0010feb8 < dVar29) && (dVar29 <= _UNK_0010feb8 + dVar30)) &&
               (dVar29 = _UNK_0010feb8 + dVar30, dVar29 <= dVar30)) {
              dVar29 = dVar30 + 0.00000000;
            }
code_r0x001049b8:
            if (dVar29 < 0.00000000) goto code_r0x001047be;
            puVar16 = &UNK_0010f032;
            puStack1992 = &UNK_001049d8;
            iVar5 = rpl_asprintf(dVar29,&lStack1960);
            if (iVar5 != -1) break;
            lStack1960 = 0;
          }
        }
        goto code_r0x00104749;
      case 10:
        puStack1992 = &UNK_00104738;
        lStack1960 = xstrdup(puStack2000);
        break;
      case 0xb:
        puVar16 = puVar25;
code_r0x001047ff:
        puStack1992 = &UNK_00104804;
        lStack1960 = xstrdup(puVar16);
      }
      if (lStack1960 == 0) goto code_r0x00104cc1;
code_r0x00104749:
      puStack1992 = &UNK_0010474e;
      replace_problematic_chars();
      puVar16 = (undefined *)0x0;
      puStack1992 = &UNK_0010475a;
      iVar5 = gnu_mbswidth();
      puVar13 = columns;
      puVar23 = ncolumns;
      uVar7 = SEXT48(iVar5);
      lVar19 = columns[(long)puStack2008];
      if (uVar7 <= *(ulong *)(lVar19 + 0x20)) {
        uVar7 = *(ulong *)(lVar19 + 0x20);
      }
      puStack2008 = (undefined8 *)((long)puStack2008 + 1);
      *(ulong *)(lVar19 + 0x20) = uVar7;
      *(long *)(*(long *)(table + -8 + nrows * 8) + lVar14) = lStack1960;
      if (puVar23 <= puStack2008) break;
    } while( true );
  }
  puStack1992 = &UNK_001047aa;
  puVar23 = (undefined8 *)puStack1984;
  func_0x00102070();
  goto code_r0x001043ac;
code_r0x00104cc1:
  puVar13 = &__PRETTY_FUNCTION___9006;
  puVar16 = &UNK_0010eff1;
  bVar21 = 0x4c;
  puStack1992 = &UNK_00104ce0;
  puVar23 = (undefined8 *)func_0x00102280(&UNK_0010f04c,&UNK_0010eff1,0x4d2);
code_r0x00104ce0:
  if (bVar21 == 0) {
    puVar23 = (undefined8 *)-(long)puVar23;
  }
  else {
    puVar13 = (undefined8 *)-(long)puVar13;
  }
  if (puVar23 < puVar13) {
    grand_fsu._24_8_ = (undefined8 *)((long)puVar13 - (long)puVar23);
  }
  else {
code_r0x00104d4e:
    grand_fsu._24_8_ = (undefined8 *)((long)puVar23 - (long)puVar13);
    grand_fsu[32] = (byte)puVar16;
  }
  if (grand_fsu[32] != 0) {
    grand_fsu._24_8_ = (undefined8 *)-(long)grand_fsu._24_8_;
  }
  goto code_r0x001046d0;
}

