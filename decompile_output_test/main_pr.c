
ulong pr(uint param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  undefined auVar18 [16];
  undefined8 uStack152;
  undefined *puStack144;
  undefined auStack136 [8];
  ulong uStack128;
  undefined4 uStack116;
  ulong *puStack112;
  long lStack104;
  uint uStack96;
  char cStack91;
  char cStack90;
  char cStack89;
  uint uStack76;
  ulong uStack72;
  undefined8 uStack64;
  
  puVar15 = (undefined8 *)auStack136;
  puVar14 = auStack136;
  uStack64 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack72 = 0;
  puStack144 = &UNK_00101ff5;
  set_program_name(*param_2);
  puStack144 = &UNK_00102006;
  func_0x00101ea0(6,&UNK_0010bee5);
  puStack144 = &UNK_00102019;
  func_0x00101c70(&UNK_0010bf79,&UNK_0010bfc0);
  puStack144 = &UNK_00102025;
  func_0x00101c40(&UNK_0010bf79);
  puStack144 = &UNK_00102031;
  atexit(close_stdout);
  lStack104 = 0;
  if (1 < (int)param_1) {
    puStack144 = &UNK_00102051;
    lStack104 = xmalloc((long)(int)(param_1 - 1) << 3);
  }
  puStack112 = &uStack72;
  lVar6 = 0;
  cStack89 = '\0';
  cStack90 = '\0';
  cStack91 = '\0';
  uStack96 = 0;
  uVar13 = 0;
code_r0x00102090:
  uStack76 = 0xffffffff;
  puStack144 = &UNK_001020b4;
  uVar5 = func_0x00101cc0((ulong)param_1,param_2,short_options,long_options,&uStack76);
  uVar10 = (undefined)(uVar5 & 0xffffffff);
  if ((int)uVar5 != -1) {
    uVar3 = (undefined4)(uVar5 & 0xffffffff);
    if ((int)uVar5 - 0x30U < 10) goto code_r0x001020e0;
    switch(uVar3) {
    case 1:
      if ((first_page_number == 0) && (*optarg == '+')) {
        puStack144 = &UNK_001027cd;
        cVar2 = first_last_page(0xfffffffe,0x2b,optarg + 1);
        if (cVar2 != '\0') break;
      }
      uVar13 = 0;
      *(char **)(lStack104 + (ulong)uStack96 * 8) = optarg;
      uStack96 = uStack96 + 1;
      goto code_r0x00102090;
    case 0x44:
      date_format = optarg;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x46:
    case 0x66:
      use_form_feed = 1;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x4a:
      join_lines = 1;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x4e:
      skip_count = 0;
      uVar13 = 0;
      puStack144 = &UNK_00102645;
      uVar8 = func_0x00101c80(0,&UNK_0010d298,5);
      puStack144 = &UNK_0010266a;
      start_line_num = xdectoimax(optarg,0xffffffff80000000,0x7fffffff,&UNK_0010bee5,uVar8,0);
      goto code_r0x00102090;
    case 0x53:
      col_sep_length = 0;
      use_col_separator = '\x01';
      cStack89 = '\0';
      col_sep_string = &UNK_0010bee5;
      if (optarg != (char *)0x0) {
        puStack144 = &UNK_00102622;
        separator_string();
        uVar13 = 0;
        goto code_r0x00102090;
      }
      break;
    case 0x54:
      extremities = 0;
      keep_FF = 0;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x57:
      truncate_lines = '\x01';
      uVar13 = 0;
      puStack144 = &UNK_001025a1;
      uVar8 = func_0x00101c80(0,&UNK_0010d318,5);
      puStack144 = &UNK_001025c4;
      chars_per_line = xdectoimax(optarg,1,0x7fffffff,&UNK_0010bee5,uVar8,0);
      cStack90 = '\0';
      goto code_r0x00102090;
    case 0x61:
      print_across_flag = '\x01';
      storing_columns = 0;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x62:
      balance_columns = 1;
      uVar13 = 0;
      goto code_r0x00102090;
    case 99:
      use_cntrl_prefix = 1;
      uVar13 = 0;
      goto code_r0x00102090;
    case 100:
      double_space = 1;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x65:
      if (optarg != (char *)0x0) {
        puStack144 = &UNK_00102538;
        getoptarg(optarg,0x65,&input_tab_char,&chars_per_input_tab);
      }
      untabify_input = 1;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x68:
      custom_header = optarg;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x69:
      if (optarg != (char *)0x0) {
        puStack144 = &UNK_001024f1;
        getoptarg(optarg,0x69,&output_tab_char,&chars_per_output_tab);
      }
      tabify_output = 1;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x6c:
      uVar13 = 0;
      puStack144 = &UNK_0010249f;
      uVar8 = func_0x00101c80(0,&UNK_0010d268,5);
      puStack144 = &UNK_001024c2;
      lines_per_page = xdectoimax(optarg,1,0x7fffffff,&UNK_0010bee5,uVar8,0);
      goto code_r0x00102090;
    case 0x6d:
      parallel_files = '\x01';
      storing_columns = 0;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x6e:
      numbered_lines = 1;
      if (optarg != (char *)0x0) {
        uVar13 = 0;
        puStack144 = &UNK_00102470;
        getoptarg(optarg,0x6e,&number_separator,&chars_per_number);
        goto code_r0x00102090;
      }
      break;
    case 0x6f:
      uVar13 = 0;
      puStack144 = &UNK_00102414;
      uVar8 = func_0x00101c80(0,&UNK_0010d2c8,5);
      puStack144 = &UNK_00102434;
      chars_per_margin = xdectoimax(optarg,0,0x7fffffff,&UNK_0010bee5,uVar8,0);
      goto code_r0x00102090;
    case 0x72:
      ignore_failed_opens = 1;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x73:
      cStack89 = use_col_separator;
      cStack91 = use_col_separator;
      if (use_col_separator == '\0') {
        if (optarg == (char *)0x0) {
          cStack89 = '\x01';
          cStack91 = '\x01';
          uVar13 = 0;
        }
        else {
          puStack144 = &UNK_001023e0;
          separator_string();
          uVar13 = 0;
          cStack89 = '\x01';
          cStack91 = '\x01';
        }
        goto code_r0x00102090;
      }
      break;
    case 0x74:
      extremities = 0;
      keep_FF = 1;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x76:
      use_esc_sequence = 1;
      uVar13 = 0;
      goto code_r0x00102090;
    case 0x77:
      puStack144 = &UNK_00102341;
      uVar8 = func_0x00101c80(0,&UNK_0010d2e8,5);
      puStack144 = &UNK_00102364;
      uVar3 = xdectoimax(optarg,1,0x7fffffff,&UNK_0010bee5,uVar8,0);
      cStack91 = truncate_lines;
      cStack90 = cStack91;
      if (truncate_lines == '\0') {
        cStack90 = '\x01';
        uVar13 = 0;
        cStack91 = '\x01';
        chars_per_line = uVar3;
        goto code_r0x00102090;
      }
      break;
    case 0x80:
      uVar13 = 0;
      puStack144 = &UNK_00102315;
      parse_column_count(optarg);
      lVar6 = 0;
      puStack144 = &UNK_00102320;
      func_0x00101b90();
      uStack72 = 0;
      goto code_r0x00102090;
    case 0x81:
      if (optarg == (char *)0x0) goto code_r0x0010287f;
      puStack144 = &UNK_001022f8;
      cVar2 = first_last_page((ulong)uStack76,0);
      if (cVar2 == '\0') goto code_r0x001028a3;
      break;
    case 0xffffff7d:
      uStack152 = 0;
      version_etc(stdout,&UNK_0010befc,&UNK_0010bf75,Version,&UNK_0010bffd,&UNK_0010bfee);
      func_0x00101f30(0);
      puVar15 = &uStack152;
      goto code_r0x00102719;
    case 0xffffff7e:
      puStack144 = &UNK_00102851;
      usage(0);
    default:
      puStack144 = &UNK_0010285b;
      usage(1);
      goto code_r0x0010285b;
    }
    uVar13 = 0;
    goto code_r0x00102090;
  }
  if (lVar6 != 0) {
    puStack144 = &UNK_00102131;
    parse_column_count(lVar6);
    puStack144 = &UNK_00102139;
    func_0x00101b90(lVar6);
  }
  if (date_format == (char *)0x0) {
    puStack144 = &UNK_00102794;
    lVar6 = func_0x00101b80(&UNK_0010c00a);
    if (lVar6 != 0) {
      puStack144 = &UNK_001027a3;
      cVar2 = hard_locale(2);
      date_format = "%b %e %H:%M %Y";
      if (cVar2 == '\0') goto code_r0x00102147;
    }
    date_format = "%Y-%m-%d %H:%M";
  }
code_r0x00102147:
  puStack144 = &UNK_00102153;
  func_0x00101b80(&UNK_0010c01a);
  puStack144 = &UNK_0010215b;
  localtz = tzalloc();
  cVar2 = parallel_files;
  if (first_page_number == 0) {
    first_page_number = 1;
  }
  if (parallel_files == '\0') {
code_r0x0010219d:
    if (cStack91 != '\0') {
      if (cStack90 == '\0') {
        if ((((use_col_separator != '\x01') && (cStack89 != '\0')) &&
            ((parallel_files != '\0' || (explicit_columns != '\0')))) &&
           ((truncate_lines != '\0' || (join_lines = 1, 0 < col_sep_length)))) {
code_r0x001021cf:
          use_col_separator = '\x01';
        }
      }
      else {
        if ((parallel_files == '\0') && (explicit_columns == '\0')) {
          join_lines = 1;
        }
        else {
          truncate_lines = '\x01';
          if (cStack89 != '\0') goto code_r0x001021cf;
        }
      }
    }
    if ((int)optind < (int)param_1) {
      param_2 = param_2 + (int)optind;
      uVar17 = (param_1 - optind) + uStack96;
      do {
        uVar13 = (ulong)uStack96;
        uVar8 = *param_2;
        uStack96 = uStack96 + 1;
        param_2 = param_2 + 1;
        *(undefined8 *)(lStack104 + uVar13 * 8) = uVar8;
      } while (uStack96 != uVar17);
      optind = param_1;
    }
    puVar15 = (undefined8 *)auStack136;
    if (uStack96 == 0) {
code_r0x00102719:
      puVar14 = (undefined *)puVar15;
      *(undefined8 *)(puVar14 + -8) = 0x102722;
      print_files(0,0);
    }
    else {
      puVar1 = auStack136;
      if (cVar2 != '\0') goto code_r0x0010282b;
      uVar17 = uStack96 - 1;
      lVar6 = lStack104 + 8;
      lVar11 = lStack104;
      do {
        lVar12 = lVar11 + 8;
        puStack144 = &UNK_00102259;
        print_files(1,lVar11);
        lVar11 = lVar12;
      } while (lVar6 + (ulong)uVar17 * 8 != lVar12);
    }
    while( true ) {
      *(undefined8 *)(puVar14 + -8) = 0x10226a;
      func_0x00101b90(number_buff);
      *(undefined8 *)(puVar14 + -8) = 0x102276;
      func_0x00101b90(clump_buff);
      *(undefined8 *)(puVar14 + -8) = 0x102282;
      func_0x00101b90(column_vector);
      *(undefined8 *)(puVar14 + -8) = 0x10228e;
      func_0x00101b90(line_vector);
      *(undefined8 *)(puVar14 + -8) = 0x10229a;
      func_0x00101b90(end_vector);
      *(undefined8 *)(puVar14 + -8) = 0x1022a6;
      func_0x00101b90(buff);
      if (have_read_stdin == '\0') break;
      *(undefined8 *)(puVar14 + -8) = 0x1027f6;
      iVar4 = rpl_fclose(stdin);
      if (iVar4 != -1) break;
      *(undefined8 *)(puVar14 + -8) = 0x102812;
      uVar8 = func_0x00101c80(0,&UNK_0010bed5,5);
      *(undefined8 *)(puVar14 + -8) = 0x10281a;
      puVar7 = (uint *)func_0x00101bb0();
      uVar17 = *puVar7;
      *(undefined8 *)(puVar14 + -8) = 0x10282b;
      func_0x00101ee0(1,(ulong)uVar17,uVar8);
      puVar1 = puVar14;
code_r0x0010282b:
      puVar14 = puVar1;
      *(undefined8 *)(puVar14 + -8) = 0x102839;
      print_files((ulong)*(uint *)(puVar14 + 0x28),*(undefined8 *)(puVar14 + 0x20));
    }
    puVar15 = (undefined8 *)puVar14;
    if (*(long *)(puVar14 + 0x48) == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)failed_opens;
    }
  }
  else {
    if (explicit_columns != '\0') goto code_r0x001028de;
    if (print_across_flag == '\0') goto code_r0x0010219d;
code_r0x0010285b:
    puStack144 = &UNK_0010286e;
    uVar8 = func_0x00101c80(0,&UNK_0010d388,5);
    puStack144 = &UNK_0010287f;
    func_0x00101ee0(1,0,uVar8);
code_r0x0010287f:
    puStack144 = &UNK_00102892;
    uVar8 = func_0x00101c80(0,&UNK_0010d230,5);
    puStack144 = &UNK_001028a3;
    func_0x00101ee0(1,0,uVar8);
code_r0x001028a3:
    puStack144 = &UNK_001028af;
    uVar8 = quote(optarg);
    puStack144 = &UNK_001028c5;
    uVar9 = func_0x00101c80(0,&UNK_0010bfd8,5);
    puStack144 = &UNK_001028d9;
    func_0x00101ee0(1,0,uVar9,uVar8);
    puVar15 = (undefined8 *)auStack136;
  }
  *(undefined8 *)((undefined *)puVar15 + -8) = 0x1028de;
  func_0x00101cb0();
code_r0x001028de:
  puVar15[-1] = 0x1028f1;
  uVar8 = func_0x00101c80(0,&UNK_0010d348,5);
  puVar15[-1] = 0x102902;
  auVar18 = func_0x00101ee0(1,0,uVar8);
  uVar8 = *puVar15;
  uVar16 = (ulong)(puVar15 + 1) & 0xfffffffffffffff0;
  *(undefined8 *)(uVar16 - 8) = SUB168(auVar18,0);
  *(ulong *)(uVar16 - 0x10) = uVar16 - 8;
  *(undefined8 *)(uVar16 - 0x18) = 0x10293a;
  (*(code *)PTR___libc_start_main_00310fd0)
            (main,uVar8,puVar15 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar18 >> 0x40,0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
code_r0x001020e0:
  uVar5 = uVar13 + 1;
  if (uStack72 <= uVar5) {
    puStack144 = &UNK_00102116;
    uStack128 = uVar5;
    uStack116 = uVar3;
    lVar6 = x2realloc(lVar6,puStack112);
    uVar10 = (undefined)uStack116;
    uVar5 = uStack128;
  }
  *(undefined *)(lVar6 + uVar13) = uVar10;
  *(undefined *)(lVar6 + uVar5) = 0;
  uVar13 = uVar5;
  goto code_r0x00102090;
}