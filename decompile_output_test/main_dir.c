
/* WARNING: Could not reconcile some variable overlaps */

ulong dir(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined *puVar18;
  char *pcVar19;
  undefined7 *puVar20;
  char *pcVar21;
  undefined1 *puVar22;
  long in_FS_OFFSET;
  bool bVar23;
  byte bVar24;
  undefined auVar25 [16];
  undefined8 auStack160 [4];
  undefined8 uStack128;
  char *apcStack120 [4];
  undefined8 uStack88;
  undefined8 uStack80;
  undefined2 uStack67;
  undefined uStack65;
  undefined8 auStack64 [2];
  
  bVar24 = 0;
  iVar14 = (int)(param_1 & 0xffffffff);
  auStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00103700(6,&UNK_001178a1);
  func_0x001033d0(&UNK_001179c8,&UNK_001179fd);
  func_0x00103390(&UNK_001179c8);
  exit_failure = 2;
  atexit(close_stdout);
  exit_status = 0;
  print_dir_name = 1;
  current_time._0_8_ = 0x8000000000000000;
  pending_dirs = (long *)0x0;
  current_time._8_8_ = 0xffffffffffffffff;
  qmark_funny_chars = 0;
  if (ls_mode == 2) {
    format = 2;
    set_quoting_style(0,7);
  }
  else {
    if (ls_mode != 3) {
      if (ls_mode == 1) {
        iVar4 = func_0x00103300(1);
        if (iVar4 == 0) {
          format = 1;
        }
        else {
          format = 2;
          set_quoting_style(0,3);
          qmark_funny_chars = 1;
        }
        goto code_r0x00103988;
      }
      func_0x00103290();
    }
    format = 0;
    set_quoting_style(0,7);
  }
code_r0x00103988:
  time_type = 0;
  sort_type = 0;
  sort_reverse = 0;
  numeric_ids = 0;
  print_block_size = '\0';
  indicator_style = 0;
  print_inode = 0;
  dereference = 1;
  recursive = '\0';
  immediate_dirs = '\0';
  ignore_mode = 0;
  ignore_patterns = (undefined8 *)0x0;
  hide_patterns = (long *)0x0;
  print_scontext = '\0';
  lVar6 = func_0x00103250(&UNK_00117a15);
  if (lVar6 != 0) {
    iVar4 = argmatch(lVar6,quoting_style_args,quoting_style_vals,4);
    if (iVar4 < 0) {
      uVar11 = quote(lVar6);
      uVar12 = func_0x001033e0(0,&UNK_00119cf8,5);
      func_0x00103760(0,0,uVar12,uVar11);
    }
    else {
      set_quoting_style(0,(ulong)*(uint *)(quoting_style_vals + (long)iVar4 * 4));
    }
  }
  line_length = 0x50;
  pcVar19 = (char *)func_0x00103250(&UNK_00117a23);
  if (((pcVar19 != (char *)0x0) && (*pcVar19 != '\0')) &&
     (cVar3 = set_line_length(pcVar19), cVar3 == '\0')) {
    uVar11 = quote(pcVar19);
    uVar12 = func_0x001033e0(0,&UNK_00119d40,5);
    func_0x00103760(0,0,uVar12,uVar11);
  }
  iVar4 = func_0x00103510(1,0x5413,&uStack88);
  if ((iVar4 != -1) && (uStack88._2_2_ != 0)) {
    line_length = (ulong)uStack88._2_2_;
  }
  lVar6 = func_0x00103250(&UNK_00117a2b);
  tabsize = 8;
  if (lVar6 != 0) {
    iVar4 = xstrtoul(lVar6,0,0,&uStack88,0);
    if (iVar4 == 0) {
      tabsize = CONCAT44(uStack88._4_4_,CONCAT22(uStack88._2_2_,(undefined2)uStack88));
    }
    else {
      uVar11 = quote(lVar6);
      uVar12 = func_0x001033e0(0,&UNK_00119d80,5);
      func_0x00103760(0,0,uVar12,uVar11);
    }
  }
  puVar20 = (undefined7 *)&UNK_00116178;
  apcStack120[0]._0_1_ = 0;
  uStack128._0_1_ = 0;
  puVar22 = (undefined1 *)0x1;
  puVar16 = auStack160 + 3;
  pcVar19 = (char *)0;
  bVar23 = print_hyperlink;
code_r0x00103b08:
  print_hyperlink = bVar23;
  pcVar21 = pcVar19;
  *(undefined4 *)(puVar16 + 6) = 0xffffffff;
  puVar16[-1] = 0x103b2b;
  iVar4 = func_0x00103430(param_1 & 0xffffffff,param_2,&UNK_00119dc0,long_options,&uStack88);
  if (iVar4 != -1) goto code_r0x00103b44;
  if (output_block_size == 0) {
    puVar16[-1] = 0x1048f7;
    lVar6 = func_0x00103250(&UNK_00117ad3);
    puVar16[-1] = 0x104910;
    human_options(lVar6,&human_output_opts,&output_block_size);
    if (lVar6 == 0) {
      puVar16[-1] = 0x105141;
      lVar6 = func_0x00103250(&UNK_00117ad6);
      if (lVar6 != 0) goto code_r0x00104919;
    }
    else {
code_r0x00104919:
      file_human_output_opts = human_output_opts;
      file_output_block_size = output_block_size;
    }
    if (*(char *)(puVar16 + 2) != '\0') {
      human_output_opts = 0;
      output_block_size = 0x400;
    }
  }
  max_idx = line_length / 3 + (ulong)(line_length % 3 != 0);
  puVar16[-1] = 0x1042f4;
  uVar5 = get_quoting_style(0);
  puVar20 = (undefined7 *)(ulong)uVar5;
  if ((format == 4) || (format == 1)) {
    align_variable_outer_quotes = false;
  }
  else {
    if ((line_length != 0) || (align_variable_outer_quotes = false, format == 0)) {
      align_variable_outer_quotes = (uVar5 & 0xfffffffd) == 1 || uVar5 == 6;
    }
  }
  puVar16[-1] = 0x10434b;
  filename_quoting_options = clone_quoting_options(0);
  if (uVar5 == 7) {
    puVar16[-1] = 0x104d2a;
    set_char_quoting(filename_quoting_options,0x20,1);
  }
  if (1 < indicator_style) {
    cVar3 = (&UNK_00117ae1)[indicator_style - 2];
    puVar20 = (undefined7 *)(&UNK_00117ae1 + (indicator_style - 2));
    while (cVar3 != '\0') {
      puVar20 = (undefined7 *)((long)puVar20 + 1);
      puVar16[-1] = 0x104395;
      set_char_quoting(filename_quoting_options,(ulong)(uint)(int)cVar3,1);
      cVar3 = *(char *)puVar20;
    }
  }
  puVar16[-1] = 0x1043a6;
  dirname_quoting_options = clone_quoting_options(0);
  puVar16[-1] = 0x1043bf;
  set_char_quoting(dirname_quoting_options,0x3a,1);
  if (dired != '\0') {
    if ((format != 0) || (print_hyperlink != false)) {
      dired = '\0';
      goto code_r0x001043dc;
    }
code_r0x001043ff:
    if (pcVar21 == (char *)0x0) {
      puVar16[-1] = 0x104d91;
      pcVar21 = (char *)func_0x00103250(&UNK_00117ae7);
      if (pcVar21 != (char *)0x0) goto code_r0x00104408;
      pcVar21 = "locale";
code_r0x00104c6b:
      puVar16[-1] = 0x104c86;
      lVar6 = argmatch(pcVar21,time_style_args,time_style_types);
      if (-1 < lVar6) {
        if (lVar6 == 1) {
          long_time_format._8_8_ = "%Y-%m-%d %H:%M";
          long_time_format._0_8_ = "%Y-%m-%d %H:%M";
          pcVar21 = long_time_format._0_8_;
          pcVar19 = long_time_format._8_8_;
        }
        else {
          pcVar21 = long_time_format._0_8_;
          pcVar19 = long_time_format._8_8_;
          if (lVar6 < 2) {
            if (lVar6 == 0) {
              long_time_format._8_8_ = "%Y-%m-%d %H:%M:%S.%N %z";
              long_time_format._0_8_ = "%Y-%m-%d %H:%M:%S.%N %z";
              pcVar21 = long_time_format._0_8_;
              pcVar19 = long_time_format._8_8_;
            }
          }
          else {
            if (lVar6 == 2) {
              long_time_format._0_8_ = "%Y-%m-%d ";
              long_time_format._8_8_ = "%m-%d %H:%M";
              pcVar21 = long_time_format._0_8_;
              pcVar19 = long_time_format._8_8_;
            }
            else {
              if (lVar6 == 3) {
                puVar16[-1] = 0x104cb9;
                cVar3 = hard_locale(2);
                pcVar21 = long_time_format._0_8_;
                pcVar19 = long_time_format._8_8_;
                if (cVar3 != '\0') {
                  puVar16[-1] = 0x104cd0;
                  long_time_format._0_8_ = (char *)func_0x001033e0(0,long_time_format._0_8_,2);
                  puVar16[-1] = 0x104cea;
                  pcVar19 = (char *)func_0x001033e0(0,long_time_format._8_8_,2);
                  pcVar21 = long_time_format._0_8_;
                }
              }
            }
          }
        }
        goto code_r0x00104cf1;
      }
      goto code_r0x00105024;
    }
code_r0x00104408:
    puVar20 = &posix_prefix_10077;
    while( true ) {
      puVar16[-1] = 0x10442c;
      iVar4 = func_0x001032b0(pcVar21,&posix_prefix_10077,6);
      if (iVar4 != 0) break;
      puVar16[-1] = 0x10443e;
      cVar3 = hard_locale(2);
      if (cVar3 == '\0') goto code_r0x00104442;
      pcVar21 = pcVar21 + 6;
    }
    if (*pcVar21 != '+') goto code_r0x00104c6b;
    pcVar21 = pcVar21 + 1;
    puVar16[-1] = 0x104dba;
    puVar18 = (undefined *)func_0x00103450(pcVar21,10);
    pcVar19 = pcVar21;
    if (puVar18 == (undefined *)0x0) {
code_r0x00104cf1:
      long_time_format._8_8_ = pcVar19;
      long_time_format._0_8_ = pcVar21;
      puVar16[-1] = 0x104cf6;
      abformat_init();
      goto code_r0x00104442;
    }
    puVar16[-1] = 0x104dd7;
    lVar6 = func_0x00103450(puVar18 + 1,10);
    if (lVar6 == 0) {
      *puVar18 = 0;
      pcVar19 = puVar18 + 1;
      goto code_r0x00104cf1;
    }
    puVar16[-1] = 0x1051bd;
    uVar11 = quote(pcVar21);
    puVar16[-1] = 0x1051d3;
    uVar12 = func_0x001033e0(0,&UNK_00117af2,5);
    puVar16[-1] = 0x1051e7;
    func_0x00103760(2,0,uVar12,uVar11);
code_r0x001051e7:
    puVar16[-1] = 0x105206;
    func_0x001034d0(&UNK_00119e28,&UNK_00117857,0x403,__PRETTY_FUNCTION___9809);
code_r0x00105206:
    puVar16[-1] = 0x105225;
    func_0x001034d0(&UNK_00117bad,&UNK_00117857,0x640,&__PRETTY_FUNCTION___9964);
code_r0x00105225:
    puVar16[-1] = 0x105244;
    uVar5 = func_0x001034d0(&UNK_00119e88,&UNK_00117857,0x674,&__PRETTY_FUNCTION___9964);
code_r0x00105244:
    puVar16[-1] = 0x10525f;
    xstrtol_fatal((ulong)uVar5,(ulong)*(uint *)(puVar16 + 6),0,long_options,optarg);
    goto code_r0x0010525f;
  }
code_r0x001043dc:
  if ((time_type - 1U < 2) && (*(char *)(puVar16 + 1) == '\0')) {
    if (format == 0) goto code_r0x001043ff;
    sort_type = 4;
  }
  else {
    if (format == 0) goto code_r0x001043ff;
  }
code_r0x00104442:
  puVar20 = (undefined7 *)(long)optind;
  if (print_with_color == '\0') {
    if (directories_first != 0) goto code_r0x0010445f;
    goto code_r0x00104466;
  }
  puVar16[-1] = 0x104add;
  pcVar19 = (char *)func_0x00103250(&UNK_00117b71);
  *(char **)(puVar16 + 5) = pcVar19;
  if ((pcVar19 != (char *)0x0) && (*pcVar19 != '\0')) {
    puVar22 = indicator_name;
    *(undefined2 *)((long)puVar16 + 0x45) = 0x3f3f;
    *(undefined *)((long)puVar16 + 0x47) = 0;
    puVar16[-1] = 0x104e13;
    color_buf = xstrdup(pcVar19);
    *(int *)(puVar16 + 1) = iVar14;
    puVar16[6] = color_buf;
    *(undefined8 **)(puVar16 + 2) = param_2;
code_r0x00104e28:
    while( true ) {
      pcVar19 = (char *)puVar16[5];
      cVar3 = *pcVar19;
      if (cVar3 == '*') break;
      if (cVar3 == ':') {
        *(char **)(puVar16 + 5) = pcVar19 + 1;
      }
      else {
        if (cVar3 == '\0') {
          iVar14 = *(int *)(puVar16 + 1);
          param_2 = (undefined8 *)puVar16[2];
          goto code_r0x00104f39;
        }
        *(char **)(puVar16 + 5) = pcVar19 + 1;
        *(char *)((long)puVar16 + 0x45) = *pcVar19;
        if (pcVar19[1] == '\0') goto code_r0x0010500f;
        *(char **)(puVar16 + 5) = pcVar19 + 2;
        *(char *)((long)puVar16 + 0x46) = pcVar19[1];
        *(char **)(puVar16 + 5) = pcVar19 + 3;
        if (pcVar19[2] != '=') goto code_r0x0010500f;
        puVar18 = &UNK_001179fa;
        lVar6 = 0;
        while( true ) {
          puVar16[-1] = 0x104e9e;
          iVar14 = func_0x00103590((undefined *)((long)puVar16 + 0x45),puVar18);
          if (iVar14 == 0) break;
          lVar6 = lVar6 + 1;
          puVar18 = *(undefined **)(puVar22 + lVar6 * 8);
          if (puVar18 == (undefined *)0x0) goto code_r0x00104eb3;
        }
        *(undefined8 *)(color_indicator + (long)(int)lVar6 * 0x10 + 8) = puVar16[6];
        puVar16[-1] = 0x105128;
        cVar3 = get_funky_string(&uStack88,puVar16 + 5,0);
        if (cVar3 == '\0') goto code_r0x00104eb3;
      }
    }
    param_2 = puVar16 + 5;
    puVar16[-1] = 0x104fd0;
    pcVar21 = (char *)xmalloc(0x28);
    puVar16[5] = puVar16[5] + 1;
    pcVar19 = pcVar21;
    *(char **)(pcVar21 + 0x20) = color_ext_list;
    color_ext_list = pcVar19;
    *(undefined8 *)(pcVar21 + 8) = puVar16[6];
    puVar16[-1] = 0x105007;
    cVar3 = get_funky_string(&uStack88,param_2,1);
    if (cVar3 != '\0') {
code_r0x001050c1:
      pcVar19 = (char *)puVar16[5];
      *(char **)(puVar16 + 5) = pcVar19 + 1;
      if (*pcVar19 == '=') {
        *(undefined8 *)(pcVar21 + 0x18) = puVar16[6];
        puVar16[-1] = 0x1050f2;
        cVar3 = get_funky_string(&uStack88,param_2,0);
        if (cVar3 == '\0') goto code_r0x0010500f;
        goto code_r0x00104e28;
      }
    }
code_r0x0010500f:
    iVar14 = *(int *)(puVar16 + 1);
    param_2 = (undefined8 *)puVar16[2];
    goto code_r0x00104eeb;
  }
  puVar16[-1] = 0x104afc;
  pcVar19 = (char *)func_0x00103250(&UNK_00117b7b);
  if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
    puVar16[-1] = 0x104b16;
    lVar6 = func_0x00103250(&UNK_00117b80);
    puVar16[1] = lVar6;
    if ((lVar6 != 0) && (*(char *)puVar16[1] != '\0')) {
      puVar22 = G_line;
      while (puVar22 + -0x116780 < (char *)0x10c4) {
        puVar16[-1] = 0x104b75;
        iVar4 = func_0x001032b0(puVar22,&UNK_00117b85,5);
        if (iVar4 == 0) {
          puVar16[-1] = 0x104b89;
          iVar4 = func_0x001034f0(puVar22 + 5,puVar16[1],0);
          if (iVar4 == 0) goto code_r0x00104ba2;
        }
        uVar13 = 0xffffffffffffffff;
        pcVar19 = puVar22;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          cVar3 = *pcVar19;
          pcVar19 = pcVar19 + (ulong)bVar24 * -2 + 1;
        } while (cVar3 != '\0');
        puVar22 = puVar22 + ~uVar13;
      }
    }
    print_with_color = '\0';
  }
  goto code_r0x00104ba2;
code_r0x00103b44:
  pcVar19 = (char *)optarg;
  bVar23 = print_hyperlink;
  switch(iVar4) {
  case 0x31:
    pcVar19 = pcVar21;
    if (format != 0) {
      format = 1;
    }
    goto code_r0x00103b08;
  case 0x41:
    ignore_mode = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x42:
    puVar16[-1] = 0x103d7c;
    puVar8 = (undefined8 *)xmalloc(0x10);
    puVar7 = ignore_patterns;
    ignore_patterns = puVar8;
    *puVar8 = 0x117a4e;
    *(undefined8 **)(puVar8 + 1) = puVar7;
    puVar16[-1] = 0x103da2;
    puVar7 = (undefined8 *)xmalloc();
    *puVar7 = 0x117a4d;
    *(undefined8 **)(puVar7 + 1) = ignore_patterns;
    pcVar19 = pcVar21;
    ignore_patterns = puVar7;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x43:
    format = 2;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x44:
    dired = '\x01';
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x46:
    indicator_style = 3;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x47:
    print_group = 0;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x48:
    dereference = 3;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x49:
    puVar16[3] = optarg;
    puVar16[-1] = 0x103d0e;
    puVar7 = (undefined8 *)xmalloc();
    *puVar7 = puVar16[3];
    *(undefined8 **)(puVar7 + 1) = ignore_patterns;
    pcVar19 = pcVar21;
    ignore_patterns = puVar7;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x4c:
    dereference = 5;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x4e:
    puVar16[-1] = 0x103ce4;
    set_quoting_style(0,0);
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x51:
    puVar16[-1] = 0x103cd6;
    set_quoting_style(0,5);
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x52:
    recursive = '\x01';
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x53:
    sort_type = 2;
    *(undefined *)(puVar16 + 1) = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x54:
    puVar16[-1] = 0x103c78;
    uVar11 = func_0x001033e0(0,&UNK_00117a51,5);
    puVar16[-2] = 2;
    puVar16[-3] = 0x103c9c;
    tabsize = xnumtoumax(optarg,0,0,0xffffffffffffffff,&UNK_001178a1,uVar11);
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x55:
    sort_type = -1;
    *(undefined *)(puVar16 + 1) = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x58:
    sort_type = 1;
    *(undefined *)(puVar16 + 1) = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x5a:
    print_scontext = '\x01';
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x61:
    ignore_mode = 2;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x62:
    puVar16[-1] = 0x103c1d;
    set_quoting_style(0,7);
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 99:
    time_type = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 100:
    immediate_dirs = '\x01';
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x66:
    ignore_mode = 2;
    sort_type = -1;
    if (format == 0) {
      puVar16[-1] = 0x104d05;
      iVar4 = func_0x00103300();
      format = 2 - (uint)(iVar4 == 0);
    }
    print_block_size = '\0';
    print_with_color = '\0';
    print_hyperlink = false;
    *(undefined *)(puVar16 + 1) = 1;
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x67:
    format = 0;
    print_owner = 0;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x68:
    human_output_opts = 0xb0;
    file_human_output_opts = 0xb0;
    output_block_size = 1;
    file_output_block_size = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x69:
    print_inode = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x6b:
    *(undefined *)(puVar16 + 2) = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x6d:
    format = 4;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x6e:
    numeric_ids = 1;
  case 0x6c:
    format = 0;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x6f:
    format = 0;
    print_group = 0;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x70:
    indicator_style = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x71:
    qmark_funny_chars = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x72:
    sort_reverse = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x73:
    print_block_size = '\x01';
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x74:
    sort_type = 4;
    *(undefined *)(puVar16 + 1) = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x75:
    time_type = 2;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x77:
    puVar16[-1] = 0x1041e6;
    cVar3 = set_line_length();
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    if (cVar3 != '\0') goto code_r0x00103b08;
    puVar16[-1] = 0x1041fa;
    param_2 = (undefined8 *)quote(optarg);
    puVar16[-1] = 0x104210;
    uVar11 = func_0x001033e0(0,&UNK_00117a33,5);
    puVar16[-1] = 0x10422b;
    func_0x00103760(2,0,&UNK_00117a46,uVar11,param_2);
  case 0x76:
    sort_type = 3;
    *(undefined *)(puVar16 + 1) = 1;
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x78:
    format = 3;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x80:
    print_author = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x81:
    puVar16[-1] = 0x104138;
    uVar5 = human_options(optarg,&human_output_opts,&output_block_size);
    if (uVar5 != 0) goto code_r0x00105244;
    file_human_output_opts = human_output_opts;
    file_output_block_size = output_block_size;
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x82:
    break;
  case 0x83:
    dereference = 4;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x84:
    indicator_style = 2;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x85:
    puVar16[-1] = 0x10408c;
    lVar6 = __xargmatch_internal(&UNK_00117a70,optarg,format_args,format_types,4,argmatch_die);
    format = *(int *)(format_types + lVar6 * 4);
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x86:
    format = 0;
    pcVar19 = &UNK_001179f1;
    goto code_r0x00103b08;
  case 0x87:
    directories_first = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x88:
    puVar16[-1] = 0x10401b;
    plVar9 = (long *)xmalloc();
    *plVar9 = optarg;
    *(long **)(plVar9 + 1) = hide_patterns;
    hide_patterns = plVar9;
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x89:
    if (optarg != 0) {
      puVar16[-1] = 0x103fdc;
      lVar6 = __xargmatch_internal(&UNK_00117a81,optarg,when_args,when_types,4,argmatch_die);
      if (*(int *)(when_types + lVar6 * 4) != 1) {
        pcVar19 = pcVar21;
        bVar23 = false;
        if (*(int *)(when_types + lVar6 * 4) == 2) {
          puVar16[-1] = 0x104004;
          iVar4 = func_0x00103300();
          bVar23 = iVar4 != 0;
        }
        goto code_r0x00103b08;
      }
    }
    pcVar19 = pcVar21;
    bVar23 = true;
    goto code_r0x00103b08;
  case 0x8a:
    puVar16[-1] = 0x103f90;
    lVar6 = __xargmatch_internal
                      (&UNK_00117a8d,optarg,indicator_style_args,indicator_style_types,4,
                       argmatch_die);
    indicator_style = *(uint *)(indicator_style_types + lVar6 * 4);
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x8b:
    puVar16[-1] = 0x103f4c;
    lVar6 = __xargmatch_internal
                      (&UNK_00117a9f,optarg,quoting_style_args,quoting_style_vals,4,argmatch_die);
    uVar5 = *(uint *)(quoting_style_vals + lVar6 * 4);
    puVar16[-1] = 0x103f5d;
    set_quoting_style(0,(ulong)uVar5);
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x8c:
    qmark_funny_chars = 0;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x8d:
    human_output_opts = 0x90;
    file_human_output_opts = 0x90;
    output_block_size = 1;
    file_output_block_size = 1;
    pcVar19 = pcVar21;
    goto code_r0x00103b08;
  case 0x8e:
    puVar16[-1] = 0x103ec9;
    lVar6 = __xargmatch_internal(&UNK_00117a62,optarg,sort_args,sort_types,4,argmatch_die);
    *(undefined *)(puVar16 + 1) = 1;
    sort_type = *(int *)(sort_types + lVar6 * 4);
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case 0x8f:
    puVar16[-1] = 0x103e86;
    lVar6 = __xargmatch_internal(&UNK_00117a69,optarg,time_args,time_types,4,argmatch_die);
    time_type = *(int *)(time_types + lVar6 * 4);
    pcVar19 = pcVar21;
    bVar23 = print_hyperlink;
  case 0x90:
    goto code_r0x00103b08;
  case -0x83:
    puVar18 = &UNK_001179cf;
    if ((ls_mode != 1) && (puVar18 = &UNK_0011794b, ls_mode == 2)) {
      puVar18 = &UNK_0011794c;
    }
    puVar16[-2] = 0;
    puVar16[-3] = 0x103e45;
    version_etc(stdout,puVar18,&UNK_001179c4,Version,&UNK_00117abf,&UNK_00117aaf);
    puVar16[-3] = 0x103e4c;
    func_0x001037e0();
    puVar16 = puVar16 + -2;
    pcVar19 = (char *)optarg;
    bVar23 = print_hyperlink;
    goto code_r0x00103b08;
  case -0x82:
    goto code_r0x0010501d;
  default:
    goto code_r0x001050b7;
  }
  if (optarg != 0) {
    puVar16[-1] = 0x1040f6;
    lVar6 = __xargmatch_internal(&UNK_00117a79,optarg,when_args,when_types,4,argmatch_die);
    if (*(int *)(when_types + lVar6 * 4) != 1) {
      if (*(int *)(when_types + lVar6 * 4) == 2) {
        puVar16[-1] = 0x104285;
        iVar4 = func_0x00103300();
        if (iVar4 != 0) goto code_r0x0010428d;
      }
      print_with_color = '\0';
      pcVar19 = pcVar21;
      bVar23 = print_hyperlink;
      goto code_r0x00103b08;
    }
  }
code_r0x0010428d:
  print_with_color = '\x01';
  tabsize = 0;
  pcVar19 = pcVar21;
  bVar23 = print_hyperlink;
  goto code_r0x00103b08;
code_r0x0010501d:
  puVar16[-1] = 0x105024;
  lVar6 = usage(0);
code_r0x00105024:
  puVar16[-1] = 0x10503d;
  argmatch_invalid(&UNK_00117b0f,pcVar21,lVar6);
  puVar7 = stderr;
  puVar16[-1] = 0x105057;
  uVar11 = func_0x001033e0(0,&UNK_00117b1a,5);
  puVar15 = time_style_args;
  puVar16[-1] = 0x105069;
  func_0x00103570(uVar11,puVar7);
  puVar18 = &UNK_001179f1;
  do {
    puVar15 = (undefined1 *)((undefined8 *)puVar15 + 1);
    puVar16[-1] = 0x10508a;
    func_0x00103800(stderr,1,&UNK_00117b30,puVar18);
    param_2 = stderr;
    puVar18 = *(undefined **)puVar15;
  } while (puVar18 != (undefined *)0x0);
  puVar16[-1] = 0x1050ac;
  uVar11 = func_0x001033e0(0,&UNK_00119df0,5);
  puVar16[-1] = 0x1050b7;
  func_0x00103570(uVar11,param_2);
code_r0x001050b7:
  puVar16[-1] = 0x1050c1;
  usage(2);
  goto code_r0x001050c1;
code_r0x00104eb3:
  iVar14 = *(int *)(puVar16 + 1);
  param_2 = (undefined8 *)puVar16[2];
  puVar16[-1] = 0x104ec4;
  quote((undefined *)((long)puVar16 + 0x45));
  puVar16[-1] = 0x104eda;
  uVar11 = func_0x001033e0(0,&UNK_00117b8b,5);
  puVar16[-1] = 0x104eeb;
  func_0x00103760(0,0,uVar11);
code_r0x00104eeb:
  puVar16[-1] = 0x104efe;
  uVar11 = func_0x001033e0(0,&UNK_00119eb8,5);
  puVar16[-1] = 0x104f0c;
  func_0x00103760(0,0,uVar11);
  puVar16[-1] = 0x104f18;
  func_0x00103880(color_buf);
  pcVar19 = color_ext_list;
  while (pcVar19 != (char *)0x0) {
    pcVar19 = *(char **)(pcVar19 + 0x20);
    puVar16[-1] = 0x104f2a;
    func_0x00103880();
  }
  print_with_color = '\0';
code_r0x00104f39:
  if (color_indicator._112_8_ == 6) {
    puVar16[-1] = 0x104f5f;
    iVar4 = func_0x001032b0(color_indicator._120_8_,&UNK_00117ba3,6);
    if (iVar4 == 0) {
      color_symlink_as_referent = '\x01';
    }
  }
code_r0x00104ba2:
  if (directories_first == 0) {
    if (print_with_color == '\0') goto code_r0x00104466;
    puVar16[-1] = 0x104bc6;
    cVar3 = is_colored(0xd);
    if (cVar3 == '\0') {
      puVar16[-1] = 0x104bd8;
      cVar3 = is_colored(0xe);
      if ((cVar3 == '\0') || (color_symlink_as_referent == '\0')) {
        puVar16[-1] = 0x104bf3;
        cVar3 = is_colored(0xc);
        if ((cVar3 == '\0') || (format != 0)) goto code_r0x00104466;
      }
    }
  }
code_r0x0010445f:
  check_symlink_mode = 1;
code_r0x00104466:
  if (((dereference == 1) && (dereference = 2, immediate_dirs == '\0')) && (indicator_style != 3)) {
    dereference = (-(uint)(format == 0) & 0xfffffffe) + 4;
  }
  if (recursive != '\0') {
    puVar16[-1] = 0x10449d;
    active_dir_set = hash_initialize(0x1e,0,dev_ino_hash,dev_ino_compare,dev_ino_free);
    if (active_dir_set == 0) goto code_r0x00105264;
    puVar16[-1] = 0x1044cb;
    _obstack_begin(dev_ino_obstack,0,0,PTR_malloc_0031ffe0,PTR_free_0031ffc0);
  }
  puVar16[-1] = 0x1044d7;
  uVar11 = func_0x00103250(&UNK_00117baa);
  puVar16[-1] = 0x1044df;
  localtz = tzalloc(uVar11);
  puVar2 = PTR_malloc_0031ffe0;
  puVar18 = PTR_free_0031ffc0;
  if ((((sort_type - 2U & 0xfffffffd) == 0) || (format == 0)) ||
     ((print_scontext != '\0' || (print_block_size != '\0')))) {
    format_needs_stat = 1;
    format_needs_type = 0;
  }
  else {
    format_needs_stat = 0;
    format_needs_type = 1;
    if (((recursive == '\0') && (print_with_color == '\0')) && (indicator_style == 0)) {
      format_needs_type = directories_first;
    }
  }
  format_needs_type = format_needs_type & 1;
  if (dired != '\0') {
    puVar16[-1] = 0x1049f8;
    _obstack_begin(dired_obstack,0,0,PTR_malloc_0031ffe0,PTR_free_0031ffc0);
    puVar16[-1] = 0x104a0e;
    _obstack_begin(subdired_obstack,0,0,puVar2,puVar18);
  }
  if (print_hyperlink != false) {
    puVar22 = RFC3986;
    iVar4 = 0;
    do {
      while (0x5a < iVar4) {
        if (iVar4 - 0x61U < 0x1a) goto code_r0x001049a5;
code_r0x00104975:
        if ((iVar4 - 0x2dU < 2) || (iVar4 == 0x7e)) goto code_r0x001049a5;
        bVar23 = iVar4 == 0x5f;
        iVar4 = iVar4 + 1;
        *puVar22 = *puVar22 | bVar23;
        puVar22 = puVar22 + 1;
        if (iVar4 == 0x100) goto code_r0x001049ba;
      }
      if ((iVar4 < 0x41) && (9 < iVar4 - 0x30U)) goto code_r0x00104975;
code_r0x001049a5:
      iVar4 = iVar4 + 1;
      *puVar22 = *puVar22 | 1;
      puVar22 = puVar22 + 1;
    } while (iVar4 != 0x100);
code_r0x001049ba:
    puVar16[-1] = 0x1049bf;
    hostname = (undefined *)xgethostname();
    if (hostname == (undefined *)0x0) {
      hostname = &UNK_001178a1;
    }
  }
  cwd_n_alloc = 100;
  iVar4 = iVar14 - (int)puVar20;
  puVar16[-1] = 0x104553;
  cwd_file = xmalloc(20000);
  cwd_n_used = 0;
  puVar16[-1] = 0x10456a;
  clear_files();
  if (iVar4 < 1) {
    if (immediate_dirs == '\0') {
      puVar16[-1] = 0x1048b5;
      queue_directory(&UNK_00119f84,0,1);
    }
    else {
      puVar16[-1] = 0x1047b7;
      gobble_file_constprop_52(&UNK_00119f84,3,1,&UNK_001178a1);
    }
  }
  else {
    do {
      uVar11 = param_2[(long)puVar20];
      puVar20 = (undefined7 *)((long)puVar20 + 1);
      puVar16[-1] = 0x10458f;
      gobble_file_constprop_52(uVar11,0,1,&UNK_001178a1);
    } while ((int)puVar20 < iVar14);
  }
  if (cwd_n_used == 0) {
code_r0x001045a2:
    if (1 < iVar4) goto code_r0x001045ec;
    if (pending_dirs != (long *)0x0) {
      if (pending_dirs[3] == 0) {
        print_dir_name = 0;
      }
      goto code_r0x001045ec;
    }
  }
  else {
    puVar16[-1] = 0x104a18;
    sort_files();
    if (immediate_dirs == '\0') {
      puVar16[-1] = 0x104d74;
      extract_dirs_from_files(0,1);
    }
    if (cwd_n_used == 0) goto code_r0x001045a2;
    puVar16[-1] = 0x104a38;
    print_current_files();
    if (pending_dirs == (long *)0x0) goto code_r0x00104686;
    puVar18 = *(undefined **)(stdout + 0x28);
    if (*(undefined **)(undefined8 *)(stdout + 0x30) < puVar18 ||
        *(undefined **)(undefined8 *)(stdout + 0x30) == puVar18) {
      puVar16[-1] = 0x105194;
      func_0x00103490(stdout,10);
    }
    else {
      *(undefined **)(stdout + 0x28) = puVar18 + 1;
      *puVar18 = 10;
    }
    dired_pos = dired_pos + 1;
code_r0x001045ec:
    plVar9 = pending_dirs;
    if (pending_dirs != (long *)0x0) {
      plVar1 = (long *)pending_dirs[3];
      lVar6 = *pending_dirs;
      if ((active_dir_set == 0) || (lVar6 != 0)) {
        bVar24 = *(byte *)(pending_dirs + 2);
        lVar10 = pending_dirs[1];
        puVar16[-1] = 0x1045c5;
        pending_dirs = plVar1;
        print_dir(lVar6,lVar10,(ulong)bVar24);
        lVar6 = *plVar9;
        puVar16[-1] = 0x1045cd;
        func_0x00103880(lVar6);
        lVar6 = plVar9[1];
        puVar16[-1] = 0x1045d6;
        func_0x00103880(lVar6);
        puVar16[-1] = 0x1045de;
        func_0x00103880(plVar9);
        print_dir_name = 1;
      }
      else {
        pending_dirs = plVar1;
        if ((ulong)(dev_ino_obstack._24_8_ - dev_ino_obstack._16_8_) < 0x10) goto code_r0x001051e7;
        uVar11 = *(undefined8 *)(dev_ino_obstack._24_8_ + -8);
        puVar16[6] = *(undefined8 *)(dev_ino_obstack._24_8_ + -0x10);
        puVar16[7] = uVar11;
        puVar16[-1] = 0x104657;
        dev_ino_obstack._24_8_ = dev_ino_obstack._24_8_ + -0x10;
        lVar6 = hash_delete(active_dir_set,&uStack88);
        if (lVar6 == 0) goto code_r0x00105206;
        puVar16[-1] = 0x104668;
        func_0x00103880(lVar6);
        lVar6 = *plVar9;
        puVar16[-1] = 0x104670;
        func_0x00103880(lVar6);
        lVar6 = plVar9[1];
        puVar16[-1] = 0x104679;
        func_0x00103880(lVar6);
        puVar16[-1] = 0x104681;
        func_0x00103880(plVar9);
      }
      goto code_r0x001045ec;
    }
  }
code_r0x00104686:
  if ((print_with_color != '\0') && (used_color != '\0')) {
    if ((color_indicator._0_8_ != 2) ||
       (((*color_indicator._8_8_ != 0x5b1b || (color_indicator._16_8_ != 1)) ||
        (*color_indicator._24_8_ != 'm')))) {
      puVar16[-1] = 0x1047e4;
      put_indicator(color_indicator);
      puVar16[-1] = 0x1047f0;
      put_indicator(0x320070);
    }
    puVar16[-1] = 0x1047fc;
    func_0x00103810();
    puVar16[-1] = 0x104803;
    signal_setup();
    iVar14 = stop_signal_count;
    while (iVar14 != 0) {
      puVar16[-1] = 0x10481a;
      func_0x00103280();
      iVar14 = iVar14 + -1;
    }
    if (interrupt_signal != 0) {
      puVar16[-1] = 0x104832;
      func_0x00103280();
    }
  }
  if (dired != '\0') {
    puVar16[-1] = 0x104a8d;
    dired_dump_obstack(&UNK_00117bb3,dired_obstack);
    puVar16[-1] = 0x104aa0;
    dired_dump_obstack(&UNK_00117bbd,subdired_obstack);
    puVar16[-1] = 0x104aac;
    uVar5 = get_quoting_style(filename_quoting_options);
    uVar11 = *(undefined8 *)(quoting_style_args + (ulong)uVar5 * 8);
    puVar16[-1] = 0x104acc;
    func_0x00103710(1,&UNK_00119e60,uVar11);
  }
  lVar6 = active_dir_set;
  if (active_dir_set != 0) {
    puVar16[-1] = 0x1046bd;
    lVar10 = hash_get_n_entries(active_dir_set);
    if (lVar10 != 0) goto code_r0x00105225;
    puVar16[-1] = 0x1046ce;
    hash_free(lVar6);
  }
  if (puVar16[9] == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)exit_status;
  }
code_r0x0010525f:
  puVar16[-1] = 0x105264;
  func_0x00103420();
code_r0x00105264:
  puVar16[-1] = 0x105269;
  auVar25 = xalloc_die();
  uVar11 = *puVar16;
  uVar17 = (ulong)(puVar16 + 1) & 0xfffffffffffffff0;
  *(undefined8 *)(uVar17 - 8) = SUB168(auVar25,0);
  *(ulong *)(uVar17 - 0x10) = uVar17 - 8;
  *(undefined8 *)(uVar17 - 0x18) = 0x10529a;
  (*(code *)PTR___libc_start_main_0031ffd0)
            (main,uVar11,puVar16 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar25 >> 0x40,0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}