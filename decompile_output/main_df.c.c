
ulong main(undefined4 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  char **ppcVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  char **ppcVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  char cVar21;
  char **ppcVar22;
  undefined *puVar23;
  char *pcVar24;
  long lVar25;
  char *pcVar26;
  char *pcVar27;
  code *pcVar28;
  char **ppcVar29;
  char **unaff_R13;
  byte bVar30;
  char **ppcVar31;
  long in_FS_OFFSET;
  bool bVar32;
  byte bVar33;
  undefined auVar34 [16];
  undefined8 auStack400 [3];
  undefined auStack376 [8];
  uint auStack368 [30];
  char *apcStack248 [23];
  undefined8 uStack64;
  
  bVar33 = 0;
  puVar15 = long_options;
  puVar23 = (undefined *)0x0;
  puVar19 = (undefined8 *)auStack376;
  ppcVar22 = apcStack248;
  uStack64 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  auStack368[0] = param_1;
  set_program_name(*param_2);
  func_0x00102460(6,&UNK_00110601);
  func_0x00102180(&UNK_0010f0da,&UNK_0010f11f);
  func_0x00102160(&UNK_0010f0da);
  atexit(close_stdout);
  fs_select_list = (char **)0x0;
  fs_exclude_list = (char **)0x0;
  show_all_fs = '\0';
  show_listed_fs = '\0';
  human_output_opts = 0xffffffff;
  print_type = '\0';
  file_systems_processed = '\0';
  exit_status = 0;
  print_grand_total = '\0';
  grand_fsu._0_8_ = 1;
  ppcVar29 = (char **)func_0x00102190(0,&UNK_0010fd88,5);
code_r0x001026b0:
  *(undefined4 *)((undefined *)puVar19 + 0x80) = 0xffffffff;
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x1026d4;
  pcVar28 = (code *)ppcVar22;
  iVar4 = func_0x00102200((ulong)*(uint *)((undefined *)puVar19 + 8),param_2,&UNK_0010f137);
  ppcVar13 = optarg;
  cVar21 = (char)puVar23;
  if (iVar4 == -1) goto code_r0x00102a10;
  if (iVar4 == 0x69) {
    if (header_mode == 4) goto code_r0x00103b5b;
    header_mode = 1;
    goto code_r0x001026b0;
  }
  if (iVar4 < 0x6a) {
    if (iVar4 == 0x48) {
      human_output_opts = 0x90;
      output_block_size = 1;
      goto code_r0x001026b0;
    }
    if (iVar4 < 0x49) {
      if (iVar4 == -0x82) {
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x103ac4;
        usage(0);
        goto code_r0x00103ac4;
      }
      if (iVar4 < -0x81) {
        if (iVar4 != -0x83) goto code_r0x00102a06;
        *(undefined8 *)((undefined *)puVar19 + -8) = 0;
        pcVar28 = (code *)&UNK_0010f16c;
        puVar18 = (undefined *)puVar19 + -0x10;
        *(undefined8 *)((undefined *)puVar19 + -0x10) = 0x10f17e;
        *(undefined8 *)((undefined *)puVar19 + -0x18) = 0x1029ca;
        version_etc(stdout,&UNK_0010f05a,&UNK_0010f0d6);
        *(undefined8 *)((undefined *)puVar19 + -0x18) = 0x1029d1;
        iVar4 = func_0x00102510(0);
      }
      else {
        puVar18 = (undefined *)puVar19;
        if (iVar4 == 0x42) {
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x1027dc;
          uVar5 = human_options(optarg,&human_output_opts,&output_block_size);
          if (uVar5 != 0) {
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x102805;
            pcVar28 = (code *)optarg;
            iVar4 = xstrtol_fatal((ulong)uVar5,(ulong)*(uint *)((undefined *)puVar19 + 0x80),0x42);
            goto code_r0x00102808;
          }
          goto code_r0x001026b0;
        }
      }
      puVar19 = (undefined8 *)puVar18;
      if (iVar4 == 0x46) {
code_r0x001029d6:
        unaff_R13 = optarg;
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x1029e7;
        ppcVar17 = (char **)xmalloc();
        ppcVar13 = fs_select_list;
        fs_select_list = ppcVar17;
        *(char ***)ppcVar17 = unaff_R13;
        *(char ***)(ppcVar17 + 1) = ppcVar13;
        goto code_r0x001026b0;
      }
      goto code_r0x00102a06;
    }
    if (iVar4 != 0x54) {
      if (iVar4 < 0x55) {
        if (iVar4 == 0x50) {
          if (header_mode == 4) goto code_r0x00103b5b;
          puVar23 = (undefined *)0x1;
          goto code_r0x001026b0;
        }
      }
      else {
        if (iVar4 == 0x61) {
          show_all_fs = '\x01';
          goto code_r0x001026b0;
        }
        if (iVar4 == 0x68) {
          human_output_opts = 0xb0;
          output_block_size = 1;
          goto code_r0x001026b0;
        }
      }
      goto code_r0x00102a06;
    }
    if (header_mode != 4) {
      print_type = '\x01';
      goto code_r0x001026b0;
    }
  }
  else {
    if (iVar4 == 0x76) goto code_r0x001026b0;
    if (iVar4 < 0x77) {
      if (iVar4 == 0x6c) {
        show_local_fs = 1;
        goto code_r0x001026b0;
      }
      if (iVar4 < 0x6d) {
        if (iVar4 == 0x6b) {
          human_output_opts = 0;
          output_block_size = 0x400;
          goto code_r0x001026b0;
        }
      }
      else {
        if (iVar4 == 0x6d) {
          human_output_opts = 0;
          output_block_size = 0x100000;
          goto code_r0x001026b0;
        }
        if (iVar4 == 0x74) goto code_r0x001029d6;
      }
      goto code_r0x00102a06;
    }
    if (iVar4 == 0x81) {
      require_sync = '\x01';
      goto code_r0x001026b0;
    }
    if (iVar4 < 0x82) {
      if (iVar4 == 0x78) {
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x102969;
        ppcVar31 = (char **)xmalloc();
        ppcVar17 = fs_exclude_list;
        fs_exclude_list = ppcVar31;
        *(char ***)ppcVar31 = ppcVar13;
        *(char ***)(ppcVar31 + 1) = ppcVar17;
        unaff_R13 = ppcVar13;
        goto code_r0x001026b0;
      }
      if (iVar4 == 0x80) {
        require_sync = '\0';
        goto code_r0x001026b0;
      }
      goto code_r0x00102a06;
    }
code_r0x00102808:
    if (iVar4 == 0x82) {
      print_grand_total = '\x01';
      goto code_r0x001026b0;
    }
    if (iVar4 != 0x83) goto code_r0x00102a06;
    if (header_mode == 1) goto code_r0x00103b5b;
    if ((header_mode == 0) && (cVar21 != '\0')) {
      pcVar28 = (code *)&UNK_0010f14a;
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x103b09;
      func_0x001024a0(0,0,ppcVar29,&UNK_0010f159,&UNK_0010f14a);
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x103b13;
      usage(1);
      goto code_r0x00103b13;
    }
    if (print_type == '\0') {
      header_mode = 4;
      if (optarg != (char **)0x0) {
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x102862;
        decode_output_arg();
      }
      goto code_r0x001026b0;
    }
  }
code_r0x00103b5b:
  pcVar28 = (code *)&UNK_0010f14a;
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x103b69;
  func_0x001024a0(0,0,ppcVar29);
code_r0x00102a06:
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102a10;
  usage(1);
code_r0x00102a10:
  if (human_output_opts == 0xffffffff) {
    if (cVar21 == '\0') {
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ce6;
      uVar8 = func_0x00102050(&UNK_0010f19a);
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102cfc;
      human_options(uVar8,&human_output_opts,&output_block_size);
    }
    else {
      human_output_opts = 0;
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c43;
      lVar10 = func_0x00102050(&UNK_0010f18a);
      output_block_size = (ulong)(-(uint)(lVar10 == 0) & 0x200) + 0x200;
    }
  }
  if ((header_mode != 1) && (header_mode != 4)) {
    if ((human_output_opts & 0x10) == 0) {
      if (cVar21 != '\0') {
        header_mode = 3;
      }
    }
    else {
      header_mode = 2;
    }
  }
  ppcVar29 = (char **)0x0;
  ppcVar13 = fs_select_list;
  if (fs_select_list != (char **)0x0) {
    do {
      if (fs_exclude_list != (char **)0x0) {
        unaff_R13 = (char **)*ppcVar13;
        ppcVar17 = fs_exclude_list;
        do {
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x102a8c;
          iVar4 = func_0x00102340(unaff_R13);
          if (iVar4 == 0) {
            ppcVar29 = (char **)0x1;
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x102a9e;
            quote(unaff_R13);
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ab4;
            uVar8 = func_0x00102190(0,&UNK_0010fdb8,5);
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ac5;
            func_0x001024a0(0,0,uVar8);
            break;
          }
          ppcVar17 = (char **)ppcVar17[1];
        } while (ppcVar17 != (char **)0x0);
      }
      ppcVar17 = ppcVar13 + 1;
      ppcVar13 = (char **)*ppcVar17;
    } while ((char **)*ppcVar17 != (char **)0x0);
    uVar9 = 1;
    if ((char)ppcVar29 != '\0') {
code_r0x00102ad8:
      if (puVar19[0x27] != *(long *)(in_FS_OFFSET + 0x28)) {
        puVar19[-1] = 0x103b93;
        auVar34 = func_0x001021f0();
        uVar8 = *puVar19;
        uVar20 = (ulong)(puVar19 + 1) & 0xfffffffffffffff0;
        *(undefined8 *)(uVar20 - 8) = SUB168(auVar34,0);
        *(ulong *)(uVar20 - 0x10) = uVar20 - 8;
        *(undefined8 *)(uVar20 - 0x18) = 0x103bca;
        (*(code *)PTR___libc_start_main_00313fd8)
                  (main,uVar8,puVar19 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar34 >> 0x40,0))
        ;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      return uVar9;
    }
  }
  if (*(int *)((undefined *)puVar19 + 8) <= optind) goto code_r0x00102c69;
  bVar32 = false;
  puVar15 = (undefined1 *)(long)(*(int *)((undefined *)puVar19 + 8) - optind);
  lVar10 = SUB168(ZEXT816(0x90) * ZEXT816(puVar15),0);
  if (SUB168(ZEXT816(0x90) * ZEXT816(puVar15) >> 0x40,0) != 0) goto code_r0x00103b43;
code_r0x00102b2d:
  if ((lVar10 < 0) || (bVar32)) goto code_r0x00103b13;
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102b52;
  unaff_R13 = (char **)xmalloc((long)puVar15 * 0x90);
  lVar10 = (long)optind;
  *(char ***)((undefined *)puVar19 + 0x10) = ppcVar22;
  *(char ***)((undefined *)puVar19 + 0x60) = unaff_R13;
  uVar5 = *(uint *)((undefined *)puVar19 + 8);
  ppcVar29 = (char **)(ulong)uVar5;
  while (iVar4 = (int)lVar10, iVar4 < (int)uVar5) {
    uVar8 = param_2[lVar10];
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102be3;
    iVar7 = func_0x00102390(1,uVar8,unaff_R13 + (long)(iVar4 - optind) * 0x12);
    if (iVar7 == 0) {
      if ((*(uint *)(unaff_R13 + (long)(iVar4 - optind) * 0x12 + 3) & 0xf000) != 0x1000) {
        uVar8 = param_2[lVar10];
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ba4;
        uVar6 = func_0x001024c0(uVar8);
        if (-1 < (int)uVar6) {
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x102baf;
          func_0x001022d0((ulong)uVar6);
        }
      }
    }
    else {
      uVar8 = param_2[lVar10];
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102bf7;
      uVar8 = quotearg_n_style_colon(0,3,uVar8);
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102bff;
      puVar11 = (uint *)func_0x001020b0();
      uVar6 = *puVar11;
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c10;
      func_0x001024a0(0,(ulong)uVar6,&UNK_00110c4f,uVar8);
      exit_status = 1;
      param_2[lVar10] = 0;
    }
    lVar10 = lVar10 + 1;
  }
  ppcVar22 = *(char ***)((undefined *)puVar19 + 0x10);
code_r0x00102c69:
  uVar9 = 1;
  if ((((fs_select_list == (char **)0x0) && (fs_exclude_list == (char **)0x0)) &&
      (print_type == '\0')) && (field_data[92] == '\0')) {
    uVar9 = (ulong)show_local_fs;
  }
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c81;
  mount_list = (char **)read_file_system_list(uVar9);
  if (mount_list == (char **)0x0) {
    if (((optind < *(int *)((undefined *)puVar19 + 8)) && (show_all_fs == '\0')) &&
       (show_local_fs == 0)) {
      puVar15 = (undefined1 *)0x1;
      puVar23 = &UNK_00110601;
      if (fs_select_list == (char **)0x0) {
code_r0x00103ac4:
        if (fs_exclude_list == (char **)0x0) {
          puVar15 = (undefined1 *)0x0;
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x103ae7;
          puVar23 = (undefined *)func_0x00102190(0,&UNK_0010f1a8,5);
        }
      }
    }
    else {
      puVar15 = (undefined1 *)0x1;
      puVar23 = &UNK_00110601;
    }
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x10393d;
    ppcVar29 = (char **)func_0x00102190(0,&UNK_0010fde8,5);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x103945;
    puVar11 = (uint *)func_0x001020b0();
    uVar5 = *puVar11;
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x10395d;
    pcVar28 = (code *)ppcVar29;
    func_0x001024a0(puVar15,(ulong)uVar5,&UNK_0010f1b2,puVar23);
  }
  if (require_sync != '\0') {
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c9f;
    func_0x001023a0();
  }
  switch(header_mode) {
  case 0:
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x1030ea;
    alloc_field(0,0);
    if (print_type != '\0') {
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1030ff;
      alloc_field(1,0);
    }
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x10310b;
    alloc_field(2,0);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x103117;
    alloc_field(3,0);
    puVar23 = (undefined *)0x0;
    goto code_r0x00103071;
  case 1:
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x10308b;
    alloc_field(0,0);
    if (print_type != '\0') {
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1030a0;
      alloc_field(1,0);
    }
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x1030ac;
    alloc_field(6,0);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x1030b8;
    alloc_field(7,0);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x1030c4;
    alloc_field(8,0);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x1030d0;
    alloc_field(9,0);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x1030dc;
    alloc_field(10,0);
    break;
  case 2:
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x103038;
    alloc_field(0,0);
    if (print_type != '\0') {
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x10304d;
      alloc_field(1,0);
    }
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x10305e;
    alloc_field(2,&UNK_0010f103);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x10306a;
    alloc_field(3,0);
    puVar23 = &UNK_0010f108;
code_r0x00103071:
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x10307b;
    alloc_field(4,puVar23);
    puVar23 = (undefined *)0x0;
code_r0x00102d4a:
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d54;
    alloc_field(5,puVar23);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d60;
    alloc_field(10,0);
    break;
  case 3:
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d0a;
    alloc_field(0,0);
    if (print_type != '\0') {
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d1f;
      alloc_field(1,0);
    }
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d2b;
    alloc_field(2,0);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d37;
    alloc_field(3,0);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d43;
    alloc_field(4,0);
    puVar23 = &UNK_0010f1b7;
    goto code_r0x00102d4a;
  case 4:
    if (ncolumns == 0) {
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x103138;
      decode_output_arg(&UNK_0010fe18);
    }
    break;
  default:
    goto code_r0x00103b24;
  }
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d65;
  get_header();
  cVar21 = show_all_fs;
  if (optind < *(int *)((undefined *)puVar19 + 8)) {
    *(ulong *)((undefined *)puVar19 + 0x10) = (long)optind & 0xffffffff;
    show_listed_fs = '\x01';
    *(undefined8 **)((undefined *)puVar19 + 0x40) = param_2;
    *(char ***)((undefined *)puVar19 + 0x78) = ppcVar22;
    *(undefined **)((undefined *)puVar19 + 0x48) = (undefined *)puVar19 + 0xa0;
    goto code_r0x00102d99;
  }
  iVar4 = 0;
  ppcVar13 = mount_list;
  while (ppcVar13 != (char **)0x0) {
    ppcVar13 = (char **)ppcVar13[6];
    iVar4 = iVar4 + 1;
  }
  pcVar28 = devlist_free;
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x1035f5;
  devlist_table = hash_initialize((long)iVar4,0,devlist_hash,devlist_compare,devlist_free);
  if (devlist_table == 0) goto code_r0x00103b13;
  *(undefined **)((undefined *)puVar19 + 8) = (undefined *)puVar19 + 0xa0;
  ppcVar13 = (char **)0x0;
  unaff_R13 = mount_list;
  while (unaff_R13 != (char **)0x0) {
    if ((((*(byte *)(unaff_R13 + 5) & 2) == 0) || (show_local_fs == 0)) &&
       (((*(byte *)(unaff_R13 + 5) & 1) == 0 || ((show_all_fs != '\0' || (show_listed_fs != '\0'))))
       )) {
      pcVar27 = unaff_R13[3];
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1036a7;
      cVar3 = selected_fstype(pcVar27);
      if (cVar3 == '\0') goto code_r0x0010361d;
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1036b7;
      cVar3 = excluded_fstype(pcVar27);
      if (cVar3 != '\0') goto code_r0x0010361d;
      pcVar27 = unaff_R13[1];
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1036d5;
      iVar4 = func_0x00102390(1,pcVar27,*(undefined8 *)((undefined *)puVar19 + 8));
      if (iVar4 == -1) goto code_r0x0010361d;
      if (devlist_table == 0) goto code_r0x00103629;
      *(undefined8 *)((undefined *)puVar19 + 0x80) = *(undefined8 *)((undefined *)puVar19 + 0xa0);
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x103706;
      lVar10 = hash_lookup(devlist_table,ppcVar22);
      *(long *)((undefined *)puVar19 + 0x10) = lVar10;
      if (lVar10 == 0) goto code_r0x00103629;
      ppcVar17 = *(char ***)(lVar10 + 8);
      uVar9 = 0xffffffffffffffff;
      pcVar27 = ppcVar17[1];
      *(char **)((undefined *)puVar19 + 0x18) = pcVar27;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar3 = *pcVar27;
        pcVar27 = pcVar27 + (ulong)bVar33 * -2 + 1;
      } while (cVar3 != '\0');
      pcVar27 = unaff_R13[1];
      uVar14 = 0xffffffffffffffff;
      *(char **)((undefined *)puVar19 + 0x20) = pcVar27;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar3 = *pcVar27;
        pcVar27 = pcVar27 + (ulong)bVar33 * -2 + 1;
      } while (cVar3 != '\0');
      pcVar27 = ppcVar17[2];
      *(bool *)((undefined *)puVar19 + 0x28) = ~uVar14 - 1 < ~uVar9 - 1;
      if ((pcVar27 == (char *)0x0) || (unaff_R13[2] == (char *)0x0)) {
        bVar32 = false;
      }
      else {
        uVar9 = 0xffffffffffffffff;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar3 = *pcVar27;
          pcVar27 = pcVar27 + (ulong)bVar33 * -2 + 1;
        } while (cVar3 != '\0');
        uVar14 = 0xffffffffffffffff;
        pcVar27 = unaff_R13[2];
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar3 = *pcVar27;
          pcVar27 = pcVar27 + (ulong)bVar33 * -2 + 1;
        } while (cVar3 != '\0');
        bVar32 = ~uVar9 - 1 < ~uVar14 - 1;
      }
      *(bool *)((undefined *)puVar19 + 0x30) = bVar32;
      pcVar27 = *unaff_R13;
      if (((print_grand_total == '\0') && ((*(byte *)(unaff_R13 + 5) & 2) != 0)) &&
         ((*(byte *)(ppcVar17 + 5) & 2) != 0)) {
        pcVar24 = *ppcVar17;
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x1037d2;
        iVar4 = func_0x00102340(pcVar24,pcVar27);
        if (iVar4 != 0) goto code_r0x00103629;
      }
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1037e7;
      lVar10 = func_0x00102220(pcVar27,0x2f);
      if (lVar10 == 0) {
code_r0x001037ff:
        if ((((undefined *)puVar19)[0x30] == '\0') && (((undefined *)puVar19)[0x28] != '\0'))
        goto code_r0x00103815;
        pcVar24 = *ppcVar17;
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x103a9a;
        iVar4 = func_0x00102340(pcVar24,pcVar27);
        ppcVar29 = unaff_R13;
        if (iVar4 != 0) {
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x103aad;
          iVar4 = func_0x00102340(*(undefined8 *)((undefined *)puVar19 + 0x20),
                                  *(undefined8 *)((undefined *)puVar19 + 0x18));
          if (iVar4 == 0) goto code_r0x00103815;
        }
      }
      else {
        pcVar24 = *ppcVar17;
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x1037fa;
        lVar10 = func_0x00102220(pcVar24,0x2f);
        if (lVar10 != 0) goto code_r0x001037ff;
code_r0x00103815:
        *(char ***)(*(long *)((undefined *)puVar19 + 0x10) + 8) = unaff_R13;
        ppcVar29 = ppcVar17;
      }
      unaff_R13 = (char **)unaff_R13[6];
      if (cVar21 == '\0') {
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x103833;
        free_mount_entry(ppcVar29);
      }
    }
    else {
code_r0x0010361d:
      *(char **)((undefined *)puVar19 + 0xa0) = unaff_R13[4];
code_r0x00103629:
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x103633;
      ppcVar29 = (char **)xmalloc(0x18);
      *(char ***)(ppcVar29 + 1) = unaff_R13;
      lVar10 = devlist_table;
      pcVar27 = *(char **)((undefined *)puVar19 + 0xa0);
      *(char ***)(ppcVar29 + 2) = ppcVar13;
      *ppcVar29 = pcVar27;
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x10365a;
      lVar10 = hash_insert(lVar10,ppcVar29);
      if (lVar10 == 0) goto code_r0x00103b13;
      unaff_R13 = (char **)unaff_R13[6];
      ppcVar13 = ppcVar29;
    }
  }
  ppcVar17 = mount_list;
  if (cVar21 == '\0') {
    mount_list = (char **)0x0;
    while (ppcVar13 != (char **)0x0) {
      ppcVar17 = (char **)ppcVar13[1];
      ppcVar13 = (char **)ppcVar13[2];
      cVar21 = '\x01';
      *(char ***)(ppcVar17 + 6) = unaff_R13;
      unaff_R13 = ppcVar17;
    }
    if (cVar21 != '\0') goto code_r0x00103b18;
    goto code_r0x0010386c;
  }
code_r0x001038c2:
  while (ppcVar17 != (char **)0x0) {
    bVar30 = *(byte *)(ppcVar17 + 5);
    pcVar27 = ppcVar17[1];
    pcVar28 = (code *)ppcVar17[3];
    pcVar24 = *ppcVar17;
    *(undefined8 *)((undefined *)puVar19 + -0x10) = 1;
    *(undefined8 *)((undefined *)puVar19 + -0x18) = 0;
    *(ulong *)((undefined *)puVar19 + -0x20) = (ulong)((uint)(bVar30 >> 1) & 1);
    *(undefined8 *)((undefined *)puVar19 + -0x28) = 0x1038ba;
    get_dev(pcVar24,pcVar27,0,0,pcVar28);
    ppcVar17 = (char **)ppcVar17[6];
  }
code_r0x0010319c:
  if (file_systems_processed == '\0') {
    if (exit_status == 0) {
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x10345c;
      uVar8 = func_0x00102190(0,&UNK_0010f1dc,5);
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x10346d;
      func_0x001024a0(1,0,uVar8);
code_r0x0010346d:
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x103475;
      func_0x00102070(pcVar28);
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x10347d;
      func_0x00102070(ppcVar29);
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x103487;
      func_0x00102070(*(undefined8 *)((undefined *)puVar19 + 0x68));
      *(char ***)((undefined *)puVar19 + 0x58) = ppcVar17;
code_r0x0010348c:
      puVar1 = *(undefined8 **)((undefined *)puVar19 + 0x58);
      bVar30 = *(byte *)(puVar1 + 5);
      uVar8 = puVar1[1];
      *(undefined8 *)((undefined *)puVar19 + -0x10) = 0;
      *(undefined8 *)((undefined *)puVar19 + -0x18) = 0;
      pcVar28 = (code *)puVar1[3];
      *(ulong *)((undefined *)puVar19 + -0x20) = (ulong)((uint)(bVar30 >> 1) & 1);
      uVar2 = *puVar1;
      *(undefined8 *)((undefined *)puVar19 + -0x28) = 0x1034c5;
      get_dev(uVar2,uVar8,*(undefined8 *)((undefined *)puVar19 + 0x30),0);
code_r0x00103182:
      do {
        *(long *)((undefined *)puVar19 + 0x10) = *(long *)((undefined *)puVar19 + 0x10) + 1;
        if (*(int *)((undefined *)puVar19 + 8) == (int)*(undefined8 *)((undefined *)puVar19 + 0x10)
            || *(int *)((undefined *)puVar19 + 8) <
               (int)*(undefined8 *)((undefined *)puVar19 + 0x10)) {
          ppcVar22 = *(char ***)((undefined *)puVar19 + 0x78);
          goto code_r0x0010319c;
        }
code_r0x00102d99:
        ppcVar17 = *(char ***)
                    (*(long *)((undefined *)puVar19 + 0x40) +
                    *(long *)((undefined *)puVar19 + 0x10) * 8);
        *(char ***)((undefined *)puVar19 + 0x30) = ppcVar17;
      } while (ppcVar17 == (char **)0x0);
      lVar10 = (long)((int)*(long *)((undefined *)puVar19 + 0x10) - optind) * 0x90 +
               *(long *)((undefined *)puVar19 + 0x60);
      *(long *)((undefined *)puVar19 + 0x50) = lVar10;
      uVar5 = *(uint *)(lVar10 + 0x18);
      *(uint *)((undefined *)puVar19 + 0x18) = uVar5;
      if ((uVar5 & 0xb000) == 0x2000) {
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x102df0;
        ppcVar22 = (char **)func_0x001022c0(ppcVar17);
        *(char ***)((undefined *)puVar19 + 0x68) = ppcVar22;
        if (ppcVar22 == (char **)0x0) {
          *(undefined8 *)((undefined *)puVar19 + 0x18) =
               *(undefined8 *)((undefined *)puVar19 + 0x30);
        }
        else {
          if (*(char *)ppcVar22 == '/') {
            ppcVar17 = ppcVar22;
          }
          *(char ***)((undefined *)puVar19 + 0x18) = ppcVar17;
        }
        if (mount_list == (char **)0x0) {
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x103a82;
          func_0x00102070(*(undefined8 *)((undefined *)puVar19 + 0x68));
        }
        else {
          bVar30 = 0;
          *(undefined8 *)((undefined *)puVar19 + 0x58) = 0;
          *(undefined8 *)((undefined *)puVar19 + 0x38) = 0xffffffffffffffff;
          ((undefined *)puVar19)[0x20] = 0;
          ppcVar17 = mount_list;
          do {
            ppcVar22 = (char **)*ppcVar17;
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e43;
            ppcVar29 = (char **)func_0x001022c0(ppcVar22);
            if ((ppcVar29 != (char **)0x0) && (*(char *)ppcVar29 == '/')) {
              ppcVar22 = ppcVar29;
            }
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e5f;
            iVar4 = func_0x00102340(*(undefined8 *)((undefined *)puVar19 + 0x18),ppcVar22);
            if (iVar4 == 0) {
              ppcVar31 = (char **)0x0;
              pcVar27 = ppcVar17[1];
              ppcVar13 = mount_list;
              if (mount_list == (char **)0x0) {
code_r0x00103316:
                pcVar28 = (code *)0x0;
code_r0x00102ef6:
                uVar9 = 0xffffffffffffffff;
                pcVar24 = pcVar27;
                do {
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  cVar21 = *pcVar24;
                  pcVar24 = pcVar24 + (ulong)bVar33 * -2 + 1;
                } while (cVar21 != '\0');
                uVar9 = ~uVar9 - 1;
                bVar30 = ((undefined *)puVar19)[0x20] ^ 1 |
                         uVar9 < *(ulong *)((undefined *)puVar19 + 0x38);
                if (bVar30 == 0) {
                  ((undefined *)puVar19)[0x20] = 1;
                }
                else {
                  *(code **)((undefined *)puVar19 + 0x28) = pcVar28;
                  *(bool *)((undefined *)puVar19 + 0x77) =
                       uVar9 < *(ulong *)((undefined *)puVar19 + 0x38);
                  ((undefined *)puVar19)[0x76] = ((undefined *)puVar19)[0x20] ^ 1;
                  *(undefined8 *)((undefined *)puVar19 + -8) = 0x103349;
                  iVar4 = func_0x00102390(1,pcVar27,*(undefined8 *)((undefined *)puVar19 + 0x48));
                  pcVar28 = *(code **)((undefined *)puVar19 + 0x28);
                  if (iVar4 == 0) {
code_r0x00103371:
                    if (uVar9 == 1) goto code_r0x0010346d;
                    *(ulong *)((undefined *)puVar19 + 0x38) = uVar9;
                    *(char ***)((undefined *)puVar19 + 0x58) = ppcVar17;
                  }
                  else {
                    if ((((undefined *)puVar19)[0x76] != '\0') &&
                       (((undefined *)puVar19)[0x77] != '\0')) {
                      bVar30 = 0;
                      goto code_r0x00103371;
                    }
                    bVar30 = ((undefined *)puVar19)[0x20];
                  }
                  ((undefined *)puVar19)[0x20] = bVar30;
                  bVar30 = 0;
                }
              }
              else {
                do {
                  pcVar24 = ppcVar13[1];
                  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e8c;
                  iVar4 = func_0x00102340(pcVar24,pcVar27);
                  if (iVar4 == 0) {
                    ppcVar31 = ppcVar13;
                  }
                  ppcVar13 = (char **)ppcVar13[6];
                } while (ppcVar13 != (char **)0x0);
                if (ppcVar31 == (char **)0x0) goto code_r0x00103316;
                pcVar27 = *ppcVar31;
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x102eac;
                pcVar27 = (char *)func_0x001022c0(pcVar27);
                if ((pcVar27 == (char *)0x0) || (*pcVar27 != '/')) {
                  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ec1;
                  func_0x00102070(pcVar27);
                  pcVar27 = *ppcVar31;
                  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ec9;
                  pcVar27 = (char *)xstrdup(pcVar27);
                  if (pcVar27 == (char *)0x0) {
                    pcVar27 = ppcVar17[1];
                    goto code_r0x00103316;
                  }
                }
                *(char **)((undefined *)puVar19 + 0x28) = pcVar27;
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ee5;
                iVar4 = func_0x00102340(pcVar27,ppcVar22);
                pcVar28 = *(code **)((undefined *)puVar19 + 0x28);
                if (iVar4 == 0) {
                  pcVar27 = ppcVar17[1];
                  goto code_r0x00102ef6;
                }
                bVar30 = 1;
              }
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f32;
              func_0x00102070(pcVar28);
            }
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f3a;
            func_0x00102070(ppcVar29);
            ppcVar17 = (char **)ppcVar17[6];
          } while (ppcVar17 != (char **)0x0);
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f51;
          func_0x00102070(*(undefined8 *)((undefined *)puVar19 + 0x68));
          if (*(long *)((undefined *)puVar19 + 0x58) != 0) goto code_r0x0010348c;
          if (bVar30 != 0) {
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x1039c5;
            ppcVar17 = (char **)quotearg_style(4,*(undefined8 *)((undefined *)puVar19 + 0x30));
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x1039db;
            uVar8 = func_0x00102190(0,&UNK_0010fe68,5);
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x1039ec;
            func_0x001024a0(0,0,uVar8,ppcVar17);
            exit_status = 1;
            goto code_r0x00103182;
          }
        }
      }
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f70;
      pcVar27 = (char *)func_0x001022c0(*(undefined8 *)((undefined *)puVar19 + 0x30));
      ppcVar29 = mount_list;
      if ((pcVar27 == (char *)0x0) || (*pcVar27 != '/')) {
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f90;
        func_0x00102070(pcVar27);
code_r0x00102f90:
        if (ppcVar29 != (char **)0x0) {
          ppcVar22 = *(char ***)((undefined *)puVar19 + 0x50);
          ppcVar13 = (char **)0x0;
          do {
            if (ppcVar29[4] == (char *)0xffffffffffffffff) {
              pcVar27 = ppcVar29[1];
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x1033a6;
              iVar4 = func_0x00102390(1,pcVar27,*(undefined8 *)((undefined *)puVar19 + 0x48));
              if (iVar4 == 0) {
                ppcVar29[4] = *(char **)((undefined *)puVar19 + 0xa0);
              }
              else {
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x103426;
                puVar11 = (uint *)func_0x001020b0();
                if (*puVar11 == 5) {
                  pcVar27 = ppcVar29[1];
                  *(undefined8 *)((undefined *)puVar19 + -8) = 0x103a53;
                  uVar8 = quotearg_n_style_colon(0,3,pcVar27);
                  uVar5 = *puVar11;
                  *(undefined8 *)((undefined *)puVar19 + -8) = 0x103a69;
                  func_0x001024a0(0,(ulong)uVar5,&UNK_00110c4f,uVar8);
                  exit_status = 1;
                }
                ppcVar29[4] = (char *)0xfffffffffffffffe;
              }
            }
            ppcVar17 = ppcVar13;
            if (*ppcVar22 == ppcVar29[4]) {
              pcVar27 = ppcVar29[3];
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102fe6;
              iVar4 = func_0x00102340(pcVar27,&UNK_0010f1d7);
              if ((iVar4 != 0) &&
                 (((ppcVar13 == (char **)0x0 || ((*(byte *)(ppcVar13 + 5) & 1) != 0)) ||
                  ((*(byte *)(ppcVar29 + 5) & 1) == 0)))) {
                pcVar27 = ppcVar29[1];
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x103011;
                iVar4 = func_0x00102390(1,pcVar27,*(undefined8 *)((undefined *)puVar19 + 0x48));
                if ((iVar4 != 0) ||
                   (ppcVar17 = ppcVar29, *(char **)((undefined *)puVar19 + 0xa0) != ppcVar29[4])) {
                  ppcVar29[4] = (char *)0xfffffffffffffffe;
                  ppcVar17 = ppcVar13;
                }
              }
            }
            ppcVar29 = (char **)ppcVar29[6];
            ppcVar13 = ppcVar17;
          } while (ppcVar29 != (char **)0x0);
          if (ppcVar17 != (char **)0x0) goto code_r0x001033d0;
        }
        uVar8 = *(undefined8 *)((undefined *)puVar19 + 0x30);
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x10314f;
        ppcVar17 = (char **)find_mount_point(uVar8,*(undefined8 *)((undefined *)puVar19 + 0x50));
        if (ppcVar17 != (char **)0x0) {
          *(undefined8 *)((undefined *)puVar19 + -0x10) = 0;
          *(undefined8 *)((undefined *)puVar19 + -0x18) = 0;
          pcVar28 = (code *)0x0;
          *(undefined8 *)((undefined *)puVar19 + -0x20) = 0;
          *(undefined8 *)((undefined *)puVar19 + -0x28) = 0x103176;
          get_dev(0,ppcVar17,uVar8,0);
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x103182;
          func_0x00102070(ppcVar17);
        }
      }
      else {
        uVar9 = 0xffffffffffffffff;
        ppcVar17 = (char **)0x0;
        pcVar24 = pcVar27;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar21 = *pcVar24;
          pcVar24 = pcVar24 + (ulong)bVar33 * -2 + 1;
        } while (cVar21 != '\0');
        *(undefined8 *)((undefined *)puVar19 + 0x18) = 0;
        *(ulong *)((undefined *)puVar19 + 0x20) = ~uVar9 - 1;
        ppcVar22 = mount_list;
        while (ppcVar22 != (char **)0x0) {
          pcVar24 = ppcVar22[3];
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x10350d;
          iVar4 = func_0x00102340(pcVar24,&UNK_0010f1d7);
          if ((iVar4 != 0) &&
             (((ppcVar17 == (char **)0x0 || ((*(byte *)(ppcVar17 + 5) & 1) != 0)) ||
              ((*(byte *)(ppcVar22 + 5) & 1) == 0)))) {
            pcVar24 = ppcVar22[1];
            uVar9 = 0xffffffffffffffff;
            pcVar26 = pcVar24;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar21 = *pcVar26;
              pcVar26 = pcVar26 + (ulong)bVar33 * -2 + 1;
            } while (cVar21 != '\0');
            uVar14 = ~uVar9 - 1;
            if ((*(ulong *)((undefined *)puVar19 + 0x18) <= uVar14) &&
               (uVar14 <= *(ulong *)((undefined *)puVar19 + 0x20))) {
              if (uVar14 == 1) {
                *(undefined8 *)((undefined *)puVar19 + 0x18) = 1;
                ppcVar17 = ppcVar22;
              }
              else {
                if ((*(ulong *)((undefined *)puVar19 + 0x20) == uVar14) ||
                   (pcVar27[~uVar9 - 1] == '/')) {
                  *(ulong *)((undefined *)puVar19 + 0x28) = uVar14;
                  *(undefined8 *)((undefined *)puVar19 + -8) = 0x103a0e;
                  iVar4 = func_0x001020c0(pcVar24,pcVar27,uVar14);
                  uVar8 = *(undefined8 *)((undefined *)puVar19 + 0x28);
                  ppcVar13 = ppcVar22;
                  if (iVar4 != 0) {
                    uVar8 = *(undefined8 *)((undefined *)puVar19 + 0x18);
                    ppcVar13 = ppcVar17;
                  }
                  *(undefined8 *)((undefined *)puVar19 + 0x18) = uVar8;
                  ppcVar17 = ppcVar13;
                }
              }
            }
          }
          ppcVar22 = (char **)ppcVar22[6];
        }
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x103579;
        func_0x00102070(pcVar27);
        if (ppcVar17 == (char **)0x0) goto code_r0x00102f90;
        pcVar27 = ppcVar17[1];
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x103595;
        iVar4 = func_0x00102390(1,pcVar27,*(undefined8 *)((undefined *)puVar19 + 0x48));
        if ((iVar4 != 0) ||
           (*(long *)((undefined *)puVar19 + 0xa0) != **(long **)((undefined *)puVar19 + 0x50)))
        goto code_r0x00102f90;
code_r0x001033d0:
        bVar30 = *(byte *)(ppcVar17 + 5);
        pcVar27 = ppcVar17[1];
        *(undefined8 *)((undefined *)puVar19 + -0x10) = 0;
        *(undefined8 *)((undefined *)puVar19 + -0x18) = 0;
        pcVar28 = (code *)ppcVar17[3];
        pcVar24 = *ppcVar17;
        *(ulong *)((undefined *)puVar19 + -0x20) = (ulong)((uint)(bVar30 >> 1) & 1);
        *(undefined8 *)((undefined *)puVar19 + -0x28) = 0x103402;
        get_dev(pcVar24,pcVar27,*(undefined8 *)((undefined *)puVar19 + 0x30),
                *(undefined8 *)((undefined *)puVar19 + 0x30));
      }
      goto code_r0x00103182;
    }
  }
  else {
    if (print_grand_total != '\0') {
      puVar23 = &UNK_00110959;
      if (field_data[44] == '\0') {
        puVar23 = &UNK_0010f286;
      }
      *(undefined8 *)((undefined *)puVar19 + -0x10) = 0;
      *(undefined8 *)((undefined *)puVar19 + -0x18) = 0x3143a0;
      *(undefined8 *)((undefined *)puVar19 + -0x20) = 0;
      *(undefined8 *)((undefined *)puVar19 + -0x28) = 0x1031ea;
      get_dev(&UNK_0010f286,puVar23,0,0,0,0);
    }
    uVar9 = 0;
    while (uVar9 < nrows) {
      if (ncolumns != 0) {
        uVar16 = 0;
        uVar8 = **(undefined8 **)(table + uVar9 * 8);
        uVar14 = ncolumns;
        while( true ) {
          lVar10 = uVar16 * 8;
          lVar25 = *(long *)(columns + uVar16 * 8);
          *(undefined8 *)((undefined *)puVar19 + 0x80) = *(undefined8 *)(lVar25 + 0x20);
          uVar5 = *(uint *)(lVar25 + 0x28);
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x10326c;
          lVar12 = ambsalign(uVar8,ppcVar22,(ulong)uVar5,(ulong)(uVar14 - 1 == uVar16) << 3);
          lVar25 = lVar12;
          if (lVar12 == 0) {
            lVar25 = *(long *)(*(long *)(table + uVar9 * 8) + uVar16 * 8);
          }
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x103283;
          func_0x00102310(lVar25,stdout);
          uVar16 = uVar16 + 1;
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x10328f;
          func_0x00102070(lVar12);
          uVar14 = ncolumns;
          if (ncolumns <= uVar16) break;
          uVar8 = *(undefined8 *)(*(long *)(table + uVar9 * 8) + 8 + lVar10);
          if (uVar16 != 0) {
            puVar23 = *(undefined **)(stdout + 0x28);
            if (puVar23 < *(undefined **)(stdout + 0x30)) {
              *(undefined **)(stdout + 0x28) = puVar23 + 1;
              *puVar23 = 0x20;
            }
            else {
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x103415;
              func_0x00102240(stdout,0x20);
              uVar14 = ncolumns;
            }
          }
        }
      }
      puVar23 = *(undefined **)(stdout + 0x28);
      if (puVar23 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar23 + 1;
        *puVar23 = 10;
      }
      else {
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x1039a0;
        func_0x00102240(stdout,10);
      }
      uVar9 = uVar9 + 1;
    }
  }
  uVar9 = (ulong)exit_status;
  goto code_r0x00102ad8;
code_r0x00103b24:
  puVar15 = __PRETTY_FUNCTION___8870;
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x103b43;
  lVar10 = func_0x00102280(&UNK_0010f1c0,&UNK_0010eff1,0x222);
code_r0x00103b43:
  bVar32 = true;
  goto code_r0x00102b2d;
code_r0x00103b13:
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x103b18;
  xalloc_die();
code_r0x00103b18:
  mount_list = unaff_R13;
code_r0x0010386c:
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x103878;
  hash_free(devlist_table);
  devlist_table = 0;
  ppcVar17 = mount_list;
  goto code_r0x001038c2;
}

