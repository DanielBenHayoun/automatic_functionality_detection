
ulong ginstall(ulong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined *puVar13;
  char *pcVar14;
  byte bVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long in_FS_OFFSET;
  undefined auVar22 [16];
  undefined8 uStack360;
  undefined4 *puStack352;
  undefined8 *puStack344;
  undefined8 *puStack336;
  byte bStack323;
  char cStack322;
  char cStack321;
  undefined8 *puStack320;
  ulong uStack304;
  undefined4 uStack296;
  undefined4 uStack292;
  undefined4 uStack288;
  undefined4 uStack284;
  undefined4 uStack280;
  undefined uStack276;
  undefined uStack275;
  undefined uStack274;
  undefined uStack273;
  undefined uStack272;
  undefined uStack271;
  undefined uStack268;
  undefined uStack267;
  undefined uStack266;
  char cStack265;
  undefined uStack264;
  char cStack263;
  undefined uStack262;
  undefined uStack261;
  undefined uStack260;
  char cStack259;
  undefined uStack258;
  undefined uStack257;
  undefined uStack256;
  undefined uStack255;
  undefined uStack254;
  undefined uStack253;
  undefined uStack252;
  undefined uStack251;
  undefined uStack250;
  undefined uStack249;
  undefined uStack248;
  undefined4 uStack240;
  undefined8 uStack232;
  undefined8 uStack224;
  undefined auStack216 [24];
  uint uStack192;
  long lStack64;
  
  bVar15 = 0;
  puVar16 = long_options;
  puVar12 = (uint *)(param_1 & 0xffffffff);
  puVar17 = (undefined8 *)0x0;
  selinux_enabled = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00102ed0(6,&UNK_00117fc9);
  func_0x00102aa0(&UNK_0011650a,&UNK_00116533);
  func_0x00102a50(&UNK_0011650a);
  atexit(close_stdin);
  puStack352 = &uStack296;
  cp_options_default(puStack352);
  uStack276 = 1;
  uStack240 = 0;
  uStack292 = 4;
  uStack275 = 1;
  uStack274 = 0;
  uStack273 = 0;
  uStack288 = 4;
  uStack272 = 0;
  uStack271 = 1;
  uStack268 = 0;
  uStack267 = 0;
  uStack262 = 0;
  uStack266 = 0;
  cStack265 = '\0';
  uStack264 = 0;
  uStack255 = 0;
  uStack261 = 1;
  uStack260 = 0;
  uStack256 = 0;
  uStack254 = 0;
  uStack284 = 2;
  uStack252 = 0;
  uStack296 = 0;
  uStack253 = 1;
  uStack280 = 0x180;
  uStack249 = 0;
  uStack248 = 0;
  uStack251 = 0;
  uStack258 = 0;
  cStack259 = '\0';
  cStack263 = '\0';
  uStack257 = 0;
  uStack250 = 0;
  uStack232 = 0;
  uStack224 = 0;
  owner_name = (undefined8 *)0x0;
  group_name = (undefined8 *)0x0;
  strip_files = '\0';
  dir_arg = 0;
  func_0x00102d70(0);
  puStack320 = (undefined8 *)0x0;
  cStack321 = '\0';
  cStack322 = '\0';
  bStack323 = 0;
  puStack344 = (undefined8 *)0x0;
  puStack336 = (undefined8 *)0x0;
  puVar19 = (undefined8 *)0;
  puVar21 = (undefined8 *)0;
  puVar1 = puStack320;
code_r0x001032f0:
  puStack320 = puVar1;
  iVar3 = func_0x00102b50((ulong)puVar12 & 0xffffffff,param_2,&UNK_0011655b,puVar16,0);
  puVar20 = puVar21;
  if (iVar3 == -1) goto code_r0x00103594;
  puVar1 = puStack320;
  if (iVar3 == 100) {
    dir_arg = 1;
    goto code_r0x001032f0;
  }
  if (iVar3 < 0x65) {
    if (iVar3 == 0x53) {
      puStack344 = optarg;
      puVar17 = (undefined8 *)0x1;
      goto code_r0x001032f0;
    }
    if (iVar3 < 0x54) {
      if (iVar3 == -0x82) {
        usage(0);
        goto code_r0x00103bdc;
      }
      if (iVar3 < -0x81) {
        if (iVar3 == -0x83) {
          version_etc(stdout,&UNK_00116488,&UNK_00116506,Version,&UNK_0011654b,0);
          iVar3 = func_0x00103030();
          goto code_r0x001034a0;
        }
      }
      else {
        if (iVar3 == 0x43) {
          copy_only_if_needed = '\x01';
          goto code_r0x001032f0;
        }
        if (iVar3 == 0x44) {
          bStack323 = 1;
          goto code_r0x001032f0;
        }
      }
    }
    else {
      if (iVar3 == 0x5a) {
        if (selinux_enabled == 0) {
          if (optarg != (undefined8 *)0x0) {
            puVar13 = &UNK_001173d8;
code_r0x0010357a:
            uVar6 = func_0x00102ad0(0,puVar13,5);
            func_0x00102f30(0,0,uVar6);
            puVar1 = puStack320;
          }
        }
        else {
          use_default_selinux_context = 0;
          puVar1 = optarg;
          if (optarg == (undefined8 *)0x0) {
            cStack263 = '\x01';
            puVar1 = puStack320;
          }
        }
        goto code_r0x001032f0;
      }
      if (0x5a < iVar3) {
        if (iVar3 == 0x62) {
          puVar17 = (undefined8 *)0x1;
          if (optarg != (undefined8 *)0x0) {
            puVar19 = optarg;
          }
        }
        else {
          if (iVar3 != 99) goto code_r0x0010337c;
        }
        goto code_r0x001032f0;
      }
      if (iVar3 == 0x54) {
        cStack322 = '\x01';
        goto code_r0x001032f0;
      }
    }
  }
  else {
    if (iVar3 == 0x73) {
      strip_files = '\x01';
      func_0x00102d00(0x11,0);
      puVar1 = puStack320;
      goto code_r0x001032f0;
    }
    if (0x73 < iVar3) goto code_r0x00103390;
    if (iVar3 == 0x6d) {
      puStack336 = optarg;
      goto code_r0x001032f0;
    }
    if (iVar3 < 0x6e) {
code_r0x001034a0:
      if (iVar3 == 0x67) {
        group_name = optarg;
        puVar1 = puStack320;
        goto code_r0x001032f0;
      }
    }
    else {
      if (iVar3 == 0x6f) {
        owner_name = optarg;
        goto code_r0x001032f0;
      }
      if (iVar3 == 0x70) {
        cStack265 = '\x01';
        goto code_r0x001032f0;
      }
    }
  }
code_r0x0010337c:
  do {
    while( true ) {
      iVar3 = usage();
      puVar20 = puVar21;
code_r0x00103390:
      uVar11 = (uint)puVar12;
      puVar21 = puVar20;
      puVar1 = puStack320;
      if (iVar3 == 0x76) {
        uStack250 = 1;
        goto code_r0x001032f0;
      }
      if (0x76 < iVar3) break;
      if (iVar3 == 0x74) {
        puVar21 = optarg;
        if (puVar20 == (undefined8 *)0x0) goto code_r0x001032f0;
code_r0x00103c8b:
        uVar6 = func_0x00102ad0(0,&UNK_00117360,5);
        func_0x00102f30(1,0,uVar6);
        puVar21 = puVar20;
code_r0x00103caf:
        uVar6 = func_0x00102ad0(0,&UNK_00117538,5);
        func_0x00102f30(1,0,uVar6);
code_r0x00103cd3:
        puVar12 = (uint *)(ulong)(uVar11 - 1);
        if (uVar11 - 1 == 0) {
          puVar12 = (uint *)quotearg_style(4,*puStack344);
          puVar13 = &UNK_00117508;
code_r0x00103cfd:
          uVar6 = func_0x00102ad0(0,puVar13,5);
          func_0x00102f30(0,0,uVar6,puVar12);
        }
        else {
code_r0x00103d75:
          puVar13 = &UNK_001165ad;
code_r0x00103d81:
          uVar6 = func_0x00102ad0(0,puVar13,5);
          func_0x00102f30(0,0,uVar6);
        }
      }
    }
    if (iVar3 == 0x80) {
      if (selinux_enabled == 0) {
        puVar13 = &UNK_00117388;
        goto code_r0x0010357a;
      }
      cStack259 = '\x01';
      use_default_selinux_context = 0;
      goto code_r0x001032f0;
    }
  } while (iVar3 != 0x81);
  strip_program = xstrdup();
  cStack321 = '\x01';
  puVar1 = puStack320;
  goto code_r0x001032f0;
code_r0x00103594:
  if (dir_arg == 0) {
    if (puVar21 != (undefined8 *)0x0) {
      iVar3 = func_0x00102dd0(1,puVar21,auStack216);
      if ((bStack323 == 0) && (iVar3 != 0)) goto code_r0x00103c4c;
      if ((iVar3 == 0) && ((uStack192 & 0xf000) != 0x4000)) goto code_r0x00103d3e;
    }
code_r0x001035e5:
    uVar5 = 0;
    if ((char)puVar17 != '\0') {
      uVar6 = func_0x00102ad0(0,&UNK_001165a1,5);
      uVar5 = xget_version(uVar6,puVar19);
    }
    uStack296 = uVar5;
    set_simple_backup_suffix(puStack344);
    if (cStack259 == '\0') {
      if (puStack320 == (undefined8 *)0x0) goto code_r0x00103620;
      puVar12 = (uint *)func_0x00102950();
      *puVar12 = 0x5f;
      param_2 = (undefined8 *)quote(puStack320);
      uVar6 = func_0x00102ad0(0,&UNK_001174d0,5);
      cVar2 = func_0x00102f30(1,(ulong)*puVar12,uVar6,param_2);
code_r0x00103908:
      if (cVar2 != '\0') {
        puVar21 = (undefined8 *)0x0;
        if ((int)puVar12 != 1) {
          puVar16 = (undefined1 *)0x1;
          puVar17 = puStack344 + (long)(int)puVar12 + -1;
          param_2 = (undefined8 *)*puVar17;
          pcVar8 = (char *)last_component(param_2);
          uVar18 = 0xffffffffffffffff;
          pcVar14 = pcVar8;
          do {
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            cVar2 = *pcVar14;
            pcVar14 = pcVar14 + (ulong)bVar15 * -2 + 1;
          } while (cStack322 != cVar2);
          if (~uVar18 != 1) {
            puVar16 = (undefined1 *)(ulong)(pcVar8[~uVar18 - 2] == '/');
          }
          iVar3 = func_0x00102dd0(1,param_2,auStack216);
          if (iVar3 == 0) goto code_r0x00103ba6;
          puVar9 = (uint *)func_0x00102950();
          uVar4 = *puVar9;
          puVar19 = (undefined8 *)(ulong)uVar4;
          if (uVar4 == 0) goto code_r0x00103ba6;
          if (uVar4 == 2) goto code_r0x0010399c;
          goto code_r0x00103c14;
        }
      }
    }
    else {
      if ((cStack263 != '\0') || (puStack320 != (undefined8 *)0x0)) {
        uVar6 = func_0x00102ad0(0,&UNK_001174a0,5);
        func_0x00102f30(1,0,uVar6);
code_r0x00103d3e:
        puVar12 = (uint *)quotearg_style(4,puVar21);
        uVar6 = func_0x00102ad0(0,&UNK_00116584,5);
        func_0x00102f30(1,0,uVar6,puVar12);
        goto code_r0x00103d75;
      }
code_r0x00103620:
      uVar11 = (int)puVar12 - optind;
      puVar12 = (uint *)(ulong)uVar11;
      puStack344 = param_2 + optind;
      uVar4 = ((uint)dir_arg ^ 1) & (uint)(puVar21 == (undefined8 *)0x0);
      cVar2 = (char)uVar4;
      if ((int)uVar11 <= (int)uVar4) goto code_r0x00103cd3;
      if (cStack322 == '\0') goto code_r0x00103908;
      if (puVar21 != (undefined8 *)0x0) goto code_r0x00103caf;
      if (2 < (int)uVar11) {
code_r0x00103ddd:
        puVar12 = (uint *)quotearg_style(4,puStack344[2]);
        puVar13 = &UNK_001165c2;
        goto code_r0x00103cfd;
      }
    }
code_r0x0010366d:
    do {
      if (puStack336 != (undefined8 *)0x0) {
        param_2 = (undefined8 *)mode_compile(puStack336);
        if (param_2 == (undefined8 *)0x0) {
          uVar6 = quote(puStack336);
          uVar10 = func_0x00102ad0(0,&UNK_001165d3,5);
          func_0x00102f30(1,0,uVar10,uVar6);
          goto code_r0x00103ddd;
        }
        mode = mode_adjust(0,0,0,param_2,0);
        dir_mode = mode_adjust(0,1,0,param_2);
        func_0x001030d0(param_2);
      }
      if ((cStack321 != '\0') && (strip_files == '\0')) {
        uVar6 = func_0x00102ad0(0,&UNK_00117580,5);
        func_0x00102f30(0,0,uVar6);
      }
      if (copy_only_if_needed != '\0') {
        if (cStack265 != '\0') {
          puVar13 = &UNK_001175c8;
          goto code_r0x00103d81;
        }
        puVar13 = &UNK_00117610;
        if (strip_files != '\0') goto code_r0x00103d81;
        if ((mode & 0xffff0e00) != 0) {
          uVar6 = func_0x00102ad0(0,&UNK_00117650,5);
          func_0x00102f30(0,0,uVar6);
        }
      }
      if (owner_name == (undefined8 *)0x0) {
        owner_id = 0xffffffff;
        goto code_r0x00103745;
      }
      lVar7 = func_0x00102d20();
      if (lVar7 == 0) goto code_r0x00103b41;
      uVar18 = (ulong)*(uint *)(lVar7 + 0x10);
      do {
        owner_id = (undefined4)uVar18;
        func_0x00102e30();
code_r0x00103745:
        if (group_name == (undefined8 *)0x0) goto code_r0x001039e9;
        lVar7 = func_0x00102d90();
        if (lVar7 != 0) {
          uVar5 = *(undefined4 *)(lVar7 + 0x10);
code_r0x00103766:
          group_id = uVar5;
          func_0x001028f0();
          goto code_r0x00103771;
        }
        iVar3 = xstrtoul(group_name,0,0,&uStack304);
        if ((iVar3 == 0) && (uVar5 = (undefined4)uStack304, uStack304 < 0x100000000))
        goto code_r0x00103766;
        puVar12 = (uint *)quote(group_name);
        uVar6 = func_0x00102ad0(0,&UNK_001165f3,5);
        func_0x00102f30(1,0,uVar6,puVar12);
code_r0x00103b41:
        iVar3 = xstrtoul(owner_name,0,0,&uStack304);
      } while ((iVar3 == 0) && (uVar18 = uStack304, uStack304 < 0x100000000));
      puVar12 = (uint *)quote(owner_name);
      uVar6 = func_0x00102ad0(0,&UNK_001165e3,5);
      func_0x00102f30(1,0,uVar6,puVar12);
code_r0x00103ba6:
      if ((uStack192 & 0xf000) == 0x4000) {
        uVar4 = (int)puVar12 - 1;
        puVar12 = (uint *)(ulong)uVar4;
        puVar21 = (undefined8 *)puStack344[(int)uVar4];
        goto code_r0x0010366d;
      }
      puVar19 = (undefined8 *)0x0;
code_r0x0010399c:
      if ((int)puVar16 != 0) goto code_r0x00103bdc;
      puVar21 = (undefined8 *)0x0;
    } while ((int)puVar12 == 2);
    puVar12 = (uint *)quotearg_style(4,*puVar17);
    uVar6 = func_0x00102ad0(0,&UNK_00116584,5);
    func_0x00102f30(1,0,uVar6,puVar12);
code_r0x001039e9:
    group_id = 0xffffffff;
code_r0x00103771:
    if (dir_arg == 0) {
      hash_init();
      if (puVar21 == (undefined8 *)0x0) goto code_r0x00103860;
      lVar7 = 0;
      uVar18 = 0;
      dest_info_init(puStack352);
      puStack336 = puVar21;
      do {
        bVar15 = (int)lVar7 == 0 & bStack323;
        uVar6 = puStack344[lVar7];
        uVar10 = last_component(uVar6);
        uVar10 = file_name_concat(puStack336,uVar10,0);
        if (((bVar15 == 0) ||
            (cVar2 = mkancesdirs_safe_wd(uVar6,uVar10,puStack352,1), cVar2 != '\0')) &&
           (cVar2 = install_file_in_file(uVar6,uVar10,puStack352), cVar2 != '\0')) {
          func_0x001030d0(uVar10);
        }
        else {
          uVar18 = 1;
          func_0x001030d0(uVar10);
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)puVar12);
    }
    else {
      uVar4 = savewd_process_files((ulong)puVar12 & 0xffffffff,puStack344,process_dir,puStack352);
      uVar18 = (ulong)uVar4;
    }
  }
  else {
    if (strip_files != '\0') goto code_r0x00103e09;
    if (puVar21 == (undefined8 *)0x0) goto code_r0x001035e5;
    uVar6 = func_0x00102ad0(0,&UNK_00117460,5);
    func_0x00102f30(1,0,uVar6);
code_r0x00103860:
    uVar6 = puStack344[1];
    uVar10 = *puStack344;
    if (bStack323 == 0) {
      bVar15 = install_file_in_file(uVar10,uVar6,puStack352);
    }
    else {
      bVar15 = 0;
      cVar2 = mkancesdirs_safe_wd(uVar10,uVar6,puStack352,0);
      if (cVar2 != '\0') {
        bVar15 = install_file_in_file(uVar10,uVar6,puStack352);
      }
      bVar15 = bVar15 & 1;
    }
    uVar18 = (ulong)(bVar15 ^ 1);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar18;
  }
  func_0x00102b30();
code_r0x00103e09:
  uVar6 = func_0x00102ad0(0,&UNK_00117420,5);
  auVar22 = func_0x00102f30(1,0,uVar6);
  uVar6 = uStack360;
  uStack360 = SUB168(auVar22,0);
  (*(code *)PTR___libc_start_main_0031cfe0)
            (main,uVar6,&puStack352,__libc_csu_init,__libc_csu_fini,SUB168(auVar22 >> 0x40,0),
             &uStack360);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
code_r0x00103bdc:
  uVar6 = quotearg_style(4,param_2);
  uVar10 = func_0x00102ad0(0,&UNK_00116584,5);
  func_0x00102f30(1,(ulong)puVar19 & 0xffffffff,uVar10,uVar6);
code_r0x00103c14:
  uVar6 = quotearg_style(4,param_2);
  uVar10 = func_0x00102ad0(0,&UNK_00116570,5);
  func_0x00102f30(1,(ulong)puVar19 & 0xffffffff,uVar10,uVar6);
  puVar20 = puVar21;
code_r0x00103c4c:
  param_2 = (undefined8 *)quotearg_style(4,puVar20);
  uVar6 = func_0x00102ad0(0,&UNK_00116570,5);
  uVar11 = (uint)uVar6;
  puVar12 = (uint *)func_0x00102950();
  func_0x00102f30(1,(ulong)*puVar12,uVar6,param_2);
  goto code_r0x00103c8b;
}