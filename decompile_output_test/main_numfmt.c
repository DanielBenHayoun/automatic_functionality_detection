
/* WARNING: Could not reconcile some variable overlaps */

undefined8 numfmt(uint param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  char *pcVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
  int *piVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined auVar20 [16];
  undefined *puVar21;
  undefined8 uStack120;
  undefined8 uStack112;
  int *piStack104;
  int *piStack96;
  long lStack80;
  int *piStack72;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  lVar5 = func_0x00101c40(6,&UNK_00109576);
  func_0x00101a70(&UNK_0010964b,&UNK_00109686);
  func_0x00101a50(&UNK_0010964b);
  decimal_point = (char *)func_0x00101c10(0x10000);
  if ((decimal_point == (char *)0x0) || (*decimal_point == '\0')) {
    decimal_point = ".";
  }
  puVar16 = longopts;
  decimal_point_length = func_0x00101aa0(decimal_point);
  atexit(close_stdout);
  iVar3 = delimiter;
code_r0x00101e00:
  delimiter = iVar3;
  iVar2 = func_0x00101ac0((ulong)param_1,param_2,&UNK_001096a0,longopts,0);
  if (iVar2 == -1) {
    if ((format_str != (char *)0x0) && (grouping != 0)) goto code_r0x00102b16;
    if ((lVar5 == 0) && (debug != '\0')) {
      uVar12 = func_0x00101a80(0,&UNK_0010971e,5);
      func_0x00101c80(0,0,uVar12);
    }
    if (((debug == '\0') || (scale_from != 0)) || (scale_to != 0)) {
code_r0x001022ba:
      puVar16 = format_str;
      if (format_str == (char *)0x0) goto code_r0x00102406;
    }
    else {
      puVar16 = format_str;
      if (grouping == 0) {
        if (padding_width == (int *)0x0) {
          if (format_str == (char *)0x0) {
            uVar12 = func_0x00101a80(0,&UNK_0010ae00,5);
            func_0x00101c80(0,0,uVar12);
            goto code_r0x001022ba;
          }
        }
        else {
          if (format_str == (char *)0x0) goto code_r0x00102413;
        }
      }
      else {
        if (format_str == (char *)0x0) goto code_r0x00102608;
      }
    }
    puVar16 = format_str;
    piStack72 = (int *)0x0;
    lVar6 = 0;
    lVar5 = 0;
    goto code_r0x001022f4;
  }
  if (iVar2 == 0x84) {
    lVar6 = __xargmatch_internal(&UNK_001096b0,optarg,round_args,round_types,4,argmatch_die);
    round_style = *(undefined4 *)(round_types + lVar6 * 4);
    iVar3 = delimiter;
    goto code_r0x00101e00;
  }
  iVar3 = delimiter;
  if (iVar2 < 0x85) {
    if (iVar2 == 0x7a) {
      line_delim = 0;
      goto code_r0x00101e00;
    }
    if (iVar2 < 0x7b) {
      if (iVar2 == -0x82) {
        usage(0);
        goto code_r0x00102999;
      }
      if (iVar2 != 100) {
        if (iVar2 != -0x83) goto code_r0x00101f7b;
        goto code_r0x00101f88;
      }
      cVar13 = *optarg;
      iVar3 = (int)cVar13;
      if ((cVar13 == '\0') || (optarg[1] == '\0')) goto code_r0x00101e00;
      goto code_r0x00102a65;
    }
    if (iVar2 == 0x81) {
      from_unit_size = unit_to_umax();
      iVar3 = delimiter;
      goto code_r0x00101e00;
    }
    if (0x81 < iVar2) {
      if (iVar2 == 0x82) {
        lVar6 = __xargmatch_internal
                          (&UNK_001096ab,optarg,scale_to_args,scale_to_types,4,argmatch_die);
        scale_to = *(int *)(scale_to_types + lVar6 * 4);
        iVar3 = delimiter;
      }
      else {
        if (iVar2 != 0x83) goto code_r0x00101f7b;
        to_unit_size = unit_to_umax();
        iVar3 = delimiter;
      }
      goto code_r0x00101e00;
    }
    if (iVar2 == 0x80) {
      lVar6 = __xargmatch_internal
                        (&UNK_001096a4,optarg,scale_from_args,scale_from_types,4,argmatch_die);
      scale_from = *(int *)(scale_from_types + lVar6 * 4);
      iVar3 = delimiter;
      goto code_r0x00101e00;
    }
code_r0x00101f7b:
    usage(1);
code_r0x00101f88:
    version_etc(stdout,&UNK_001095ba,&UNK_00109647,Version,&UNK_00109711,0);
    func_0x00101cc0();
  }
  else {
    if (iVar2 == 0x89) goto code_r0x00101fc7;
    if (iVar2 < 0x8a) {
      if (iVar2 == 0x86) {
        grouping = 1;
        goto code_r0x00101e00;
      }
      if (iVar2 < 0x86) {
        suffix = optarg;
        goto code_r0x00101e00;
      }
      if (iVar2 == 0x87) {
        iVar3 = xstrtol(optarg,0,10,&padding_width);
        if ((iVar3 != 0) || (padding_width == (int *)0x0)) goto code_r0x00102a2f;
        iVar3 = delimiter;
        if ((long)padding_width < 0) {
          padding_width = (int *)-(long)padding_width;
          padding_alignment = 0;
        }
        goto code_r0x00101e00;
      }
      if (iVar2 == 0x88) {
        if (n_frp != 0) goto code_r0x00102b6c;
        set_fields(optarg,1);
        iVar3 = delimiter;
        goto code_r0x00101e00;
      }
      goto code_r0x00101f7b;
    }
    if (iVar2 == 0x8b) {
      if (optarg != (char *)0x0) {
        iVar3 = xstrtoumax(optarg,0,10,&header);
        if ((iVar3 == 0) && (iVar3 = delimiter, header != 0)) goto code_r0x00101e00;
        param_2 = (undefined8 *)quote(optarg);
        uVar12 = func_0x00101a80(0,&UNK_001096ef,5);
        func_0x00101c80(1,0,uVar12,param_2);
      }
      header = 1;
      iVar3 = delimiter;
      goto code_r0x00101e00;
    }
    if (0x8a < iVar2) {
      if (iVar2 == 0x8c) {
        format_str = optarg;
      }
      else {
        if (iVar2 != 0x8d) goto code_r0x00101f7b;
        lVar6 = __xargmatch_internal(&UNK_00109707,optarg,inval_args,inval_types,4,argmatch_die);
        inval_style = *(int *)(inval_types + lVar6 * 4);
        iVar3 = delimiter;
      }
      goto code_r0x00101e00;
    }
  }
  dev_debug = '\x01';
code_r0x00101fc7:
  debug = '\x01';
  iVar3 = delimiter;
  goto code_r0x00101e00;
code_r0x001022f4:
  if (format_str[lVar5] == '%') {
    lVar14 = lVar5 + 1;
    if (format_str[lVar5 + 1] != '%') goto code_r0x00102658;
    lVar14 = 2;
  }
  else {
    if (format_str[lVar5] == '\0') goto code_r0x00102999;
    lVar14 = 1;
  }
  lVar5 = lVar5 + lVar14;
  lVar6 = lVar6 + 1;
  goto code_r0x001022f4;
code_r0x00102658:
  piStack104 = (int *)(format_str + lVar14);
  uStack112 = (int *)((ulong)uStack112 & 0xffffffffffffff00);
  do {
    while( true ) {
      while( true ) {
        lVar5 = func_0x00101b50(piStack104,&UNK_00109751);
        lVar14 = lVar14 + lVar5;
        piStack104 = (int *)(puVar16 + lVar14);
        if (*(char *)piStack104 != '\'') break;
        lVar14 = lVar14 + 1;
        grouping = 1;
        piStack104 = (int *)(puVar16 + lVar14);
      }
      if (*(char *)piStack104 != '0') break;
      lVar14 = lVar14 + 1;
      uStack112 = (int *)CONCAT71(uStack112._1_7_,1);
      piStack104 = (int *)(puVar16 + lVar14);
    }
  } while (lVar5 != 0);
  piStack96 = (int *)func_0x001019d0();
  *piStack96 = 0;
  piVar9 = (int *)func_0x00101bb0(piStack104,&piStack72,10);
  if (*piStack96 == 0x22) goto code_r0x00102b3a;
  piVar15 = piStack96;
  piVar1 = padding_width;
  if ((piStack72 != piStack104) && (piVar9 != (int *)0x0)) {
    if ((debug == '\0') || (padding_width == (int *)0x0)) {
code_r0x001028aa:
      if ((long)piVar9 < 0) {
        padding_alignment = 0;
        piVar1 = (int *)-(long)piVar9;
      }
      else {
        piVar1 = piVar9;
        if ((char)uStack112 != '\0') goto code_r0x0010271e;
      }
    }
    else {
      if (((char)uStack112 == '\0') || ((long)piVar9 < 1)) {
        piStack104 = piStack96;
        uVar12 = func_0x00101a80(0,&UNK_0010ae48,5);
        func_0x00101c80(0,0,uVar12);
        piVar15 = piStack104;
        goto code_r0x001028aa;
      }
code_r0x0010271e:
      zero_padding_width = piVar9;
      piVar1 = padding_width;
    }
  }
  padding_width = piVar1;
  piVar9 = (int *)((long)piStack72 - (long)puVar16);
  if (*(char *)piStack72 == '\0') {
code_r0x001029fd:
    uVar12 = quote(puVar16);
    uVar11 = func_0x00101a80(0,&UNK_00109753,5);
    func_0x00101c80(1,0,uVar11,uVar12);
code_r0x00102a2f:
    uVar12 = quote(optarg);
    uVar11 = func_0x00101a80(0,&UNK_001096b8,5);
    func_0x00101c80(1,0,uVar11,uVar12);
code_r0x00102a65:
    uVar12 = func_0x00101a80(0,&UNK_0010ada0,5);
    func_0x00101c80(1,0,uVar12);
code_r0x00102a89:
    uVar12 = quote(puVar16);
    uVar11 = func_0x00101a80(0,&UNK_0010aed0,5);
    func_0x00101c80(1,0,uVar11,uVar12);
code_r0x00102abb:
    uVar12 = quote(puVar16);
    uVar11 = func_0x00101a80(0,&UNK_0010ae90,5);
    func_0x00101c80(1,0,uVar11,uVar12);
code_r0x00102aed:
    func_0x00101ab0();
  }
  else {
    if (*(char *)piStack72 == '.') {
      *piVar15 = 0;
      uStack112 = piVar15;
      user_precision = func_0x00101bb0(puVar16 + 1 + (long)piVar9,&piStack72,10);
      if ((*uStack112 != 0x22) && (-1 < user_precision)) {
        plVar10 = (long *)func_0x00101d30();
        cVar13 = (puVar16 + 1)[(long)piVar9];
        if (((*(byte *)(*plVar10 + (long)cVar13 * 2) & 1) == 0) && (cVar13 != '+')) {
          piVar9 = (int *)((long)piStack72 - (long)puVar16);
          goto code_r0x00102744;
        }
      }
code_r0x001029cb:
      uVar12 = quote(puVar16);
      uVar11 = func_0x00101a80(0,&UNK_0010ae70,5);
      func_0x00101c80(1,0,uVar11,uVar12);
      goto code_r0x001029fd;
    }
code_r0x00102744:
    if (puVar16[(long)piVar9] != 'f') goto code_r0x00102abb;
    lVar5 = (long)piVar9 + 1;
    pcVar8 = puVar16 + lVar5;
    cVar13 = *pcVar8;
    if (cVar13 == '\0') {
      if (lVar6 != 0) {
code_r0x0010231e:
        format_str_prefix = (undefined *)xstrndup(puVar16,lVar6);
        if (*pcVar8 != '\0') goto code_r0x0010286b;
      }
    }
    else {
      do {
        bVar19 = cVar13 == '%';
        cVar13 = puVar16[lVar5 + 1];
        lVar14 = lVar5 + 1;
        if (bVar19) {
          if (cVar13 != '%') goto code_r0x00102a89;
          cVar13 = puVar16[lVar5 + 2];
          lVar14 = lVar5 + 2;
        }
        lVar5 = lVar14;
      } while (cVar13 != '\0');
      if (lVar6 != 0) goto code_r0x0010231e;
code_r0x0010286b:
      format_str_suffix = (undefined *)xstrdup(pcVar8);
    }
    if (dev_debug != '\0') {
      puVar17 = format_str_suffix;
      if (format_str_suffix == (undefined *)0x0) {
        puVar17 = &UNK_00109576;
      }
      piStack104 = (int *)quote_n(2,puVar17);
      puVar17 = format_str_prefix;
      if (format_str_prefix == (undefined *)0x0) {
        puVar17 = &UNK_00109576;
      }
      puVar18 = &UNK_00109679;
      uVar12 = quote_n(1,puVar17);
      puVar17 = &UNK_00109683;
      if (padding_alignment == 0) {
        puVar18 = &UNK_00109674;
      }
      uStack112 = padding_width;
      if (grouping != 0) {
        puVar17 = &UNK_0010967f;
      }
      puVar21 = &UNK_001023cf;
      uVar11 = quote_n(0,puVar16);
      func_0x00101ce0(stderr,1,&UNK_0010aef8,uVar11,puVar17,uStack112,puVar18,uVar12,piStack104,
                      puVar21);
    }
code_r0x00102406:
    if (grouping == 0) {
code_r0x00102413:
      if (padding_buffer_size <= padding_width) {
        setup_padding_buffer_part_0();
      }
      auto_padding = 0;
      if (padding_width == (int *)0x0) {
        auto_padding = (uint)(delimiter == 0x80);
      }
      if (inval_style != 0) {
        conv_exit_code = 0;
      }
      if (optind < (int)param_1) {
        if ((debug == '\0') || (header == 0)) {
code_r0x001025c5:
          puVar16 = (char *)0x1;
          do {
            uVar4 = process_line(param_2[optind],1);
            puVar16 = (undefined1 *)(ulong)((uint)puVar16 & uVar4);
            optind = optind + 1;
          } while (optind < (int)param_1);
          goto code_r0x00102573;
        }
        uVar12 = func_0x00101a80(0,&UNK_0010afb8,5);
        func_0x00101c80(0,0,uVar12);
        if (optind < (int)param_1) goto code_r0x001025c5;
code_r0x00102589:
        uVar12 = 0;
      }
      else {
        lStack80 = 0;
        piStack72 = (int *)0x0;
        while ((bVar19 = header != 0, header = header + -1, bVar19 &&
               (lVar5 = func_0x00101d20(&lStack80,&piStack72,(ulong)line_delim,stdin), 0 < lVar5)))
        {
          func_0x00101b80(lStack80,stdout);
        }
        puVar16 = (char *)0x1;
        while (lVar5 = func_0x00101d20(&lStack80,&piStack72,(ulong)line_delim,stdin), 0 < lVar5) {
          pcVar8 = (char *)(lStack80 + -1 + lVar5);
          bVar19 = (int)*pcVar8 == (uint)line_delim;
          if (bVar19) {
            *pcVar8 = '\0';
          }
          uVar4 = process_line(lStack80,(ulong)bVar19);
          puVar16 = (undefined1 *)(ulong)((uint)puVar16 & uVar4);
        }
        if ((*stdin & 0x20) != 0) {
          uVar12 = func_0x00101a80(0,&UNK_00109768,5);
          puVar7 = (uint *)func_0x001019d0();
          func_0x00101c80(0,(ulong)*puVar7,uVar12);
        }
code_r0x00102573:
        if (debug == '\0') {
          if ((int)puVar16 == 0) goto code_r0x001027d2;
          goto code_r0x00102589;
        }
        if ((int)puVar16 != 0) goto code_r0x00102589;
        uVar12 = func_0x00101a80(0,&UNK_0010afe8,5);
        func_0x00101c80(0,0,uVar12);
code_r0x001027d2:
        if (inval_style - 2U < 2) goto code_r0x00102589;
        uVar12 = 2;
      }
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar12;
      }
      goto code_r0x00102aed;
    }
    if (scale_to == 0) {
code_r0x00102608:
      if ((debug != '\0') && (pcVar8 = (char *)func_0x00101c10(0x10001), *pcVar8 == '\0')) {
        uVar12 = func_0x00101a80(0,&UNK_0010af90,5);
        func_0x00101c80(0,0,uVar12);
      }
      goto code_r0x00102413;
    }
  }
  uVar12 = func_0x00101a80(0,&UNK_0010af68,5);
  func_0x00101c80(1,0,uVar12);
code_r0x00102b16:
  uVar12 = func_0x00101a80(0,&UNK_0010add0,5);
  func_0x00101c80(1,0,uVar12);
code_r0x00102b3a:
  uVar12 = quote(puVar16);
  uVar11 = func_0x00101a80(0,&UNK_0010ae20,5);
  func_0x00101c80(1,0,uVar11,uVar12);
code_r0x00102b6c:
  uVar12 = func_0x00101a80(0,&UNK_001096d1,5);
  auVar20 = func_0x00101c80(1,0,uVar12);
  uVar12 = uStack120;
  uStack120 = SUB168(auVar20,0);
  (*(code *)PTR___libc_start_main_0030dfd8)
            (main,uVar12,&uStack112,__libc_csu_init,__libc_csu_fini,SUB168(auVar20 >> 0x40,0),
             &uStack120);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
code_r0x00102999:
  uVar12 = quote(puVar16);
  uVar11 = func_0x00101a80(0,&UNK_00109733,5);
  func_0x00101c80(1,0,uVar11,uVar12);
  goto code_r0x001029cb;
}