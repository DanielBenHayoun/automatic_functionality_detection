
/* WARNING: Could not reconcile some variable overlaps */

ulong main(uint param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  long *plVar13;
  byte bVar14;
  uint uVar15;
  undefined *puVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined auVar19 [16];
  undefined8 uStack296;
  long *plStack288;
  undefined8 uStack280;
  long *plStack272;
  long *plStack264;
  long *plStack256;
  long lStack248;
  undefined8 uStack240;
  long lStack232;
  undefined8 uStack224;
  undefined auStack216 [88];
  long lStack128;
  undefined8 uStack120;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00102a50(6,&UNK_001132af);
  func_0x00102810(&UNK_001116f6,&UNK_00111737);
  func_0x001027f0(&UNK_001116f6);
  atexit(close_stdout);
  plStack272 = (long *)0x0;
  plStack288 = (long *)0x0;
  uStack280 = uStack280 & 0xffffffffffffff00;
  plStack256 = (long *)0x0;
  plStack264 = (long *)0x0;
  plVar13 = (long *)0x0;
code_r0x00102c80:
  do {
    iVar2 = func_0x00102860((ulong)param_1,param_2,short_options,long_options,0);
    if (iVar2 == -1) {
      uVar15 = (uint)(plStack264 != (long *)0x0) + (uint)(plStack288 != (long *)0x0) +
               (uint)(plStack272 != (long *)0x0);
      plVar9 = (long *)(ulong)uVar15;
      if (1 < uVar15) {
        puVar16 = &UNK_00112b20;
        goto code_r0x00103375;
      }
      if (((byte)uStack280 & (byte)uVar15 & 1) != 0) goto code_r0x00103369;
      lVar5 = (long)optind;
      if (optind < (int)param_1) {
        iVar2 = optind + 1;
        if (iVar2 < (int)param_1) {
code_r0x0010329a:
          uVar11 = quote(param_2[lVar5 + 1]);
          puVar16 = &UNK_0011177d;
          goto code_r0x001032b3;
        }
        pcVar17 = (char *)param_2[lVar5];
        if (*pcVar17 == '+') goto code_r0x00103278;
        if ((uVar15 & 1) != 0) goto code_r0x0010331d;
        if ((byte)uStack280 != 0) goto code_r0x0010331d;
      }
      break;
    }
    if (iVar2 == 0x66) {
      plStack288 = optarg;
      goto code_r0x00102c80;
    }
    if (iVar2 < 0x67) {
      if (iVar2 != 0x49) {
        if (iVar2 < 0x4a) {
          if (iVar2 != -0x83) {
            if (iVar2 != -0x82) goto code_r0x001032cb;
            lVar5 = usage(0);
            goto code_r0x0010329a;
          }
          version_etc(stdout,&UNK_001117bb,&UNK_001116f2,Version,&UNK_0011176d,0);
          func_0x00102ae0();
          goto code_r0x00102d80;
        }
        if (iVar2 == 0x52) goto code_r0x00102dd0;
        if (iVar2 != 100) goto code_r0x001032cb;
        plStack264 = optarg;
        goto code_r0x00102c80;
      }
      uVar4 = 0;
      if (optarg != (long *)0x0) {
        lVar5 = __xargmatch_internal(&UNK_0011175a,optarg,time_spec_string,time_spec,4,argmatch_die)
        ;
        uVar4 = (ulong)*(uint *)(time_spec + lVar5 * 4);
      }
      puVar6 = iso_8601_format_7386 + uVar4 * 0x20;
    }
    else {
      if (iVar2 == 0x75) {
        iVar2 = func_0x00102940();
        if (iVar2 == 0) goto code_r0x00102c80;
        xalloc_die();
code_r0x00102dd0:
        puVar6 = rfc_email_format;
      }
      else {
        if (iVar2 < 0x76) {
          if (iVar2 == 0x72) {
code_r0x00102d80:
            plStack272 = optarg;
          }
          else {
            if (iVar2 != 0x73) goto code_r0x001032cb;
            plStack256 = optarg;
            uStack280 = CONCAT71(uStack280._1_7_,1);
          }
          goto code_r0x00102c80;
        }
        if (iVar2 != 0x80) {
          if (iVar2 != 0x81) goto code_r0x001032cb;
          parse_datetime_flags = parse_datetime_flags | 1;
          goto code_r0x00102c80;
        }
        lVar5 = __xargmatch_internal(&UNK_0011174f,optarg,0x317210,0x112d78);
        puVar6 = rfc_3339_format_7383 + (ulong)*(uint *)(time_spec + lVar5 * 4 + 8) * 0x20;
      }
    }
    bVar18 = plVar13 != (long *)0x0;
    plVar13 = (long *)puVar6;
    if (bVar18) {
      do {
        uVar11 = func_0x00102820(0,&UNK_00112af8,5);
        func_0x00102a90(1,0,uVar11);
code_r0x001032f9:
        uVar11 = func_0x00102820(0,&UNK_00112af8,5);
        func_0x00102a90(1,0,uVar11);
code_r0x0010331d:
        uVar11 = quote();
        puVar16 = &UNK_00112ba8;
code_r0x001032b3:
        uVar10 = func_0x00102820(0,puVar16,5);
        func_0x00102a90(0,0,uVar10,uVar11);
code_r0x001032cb:
        usage(1);
      } while( true );
    }
  } while( true );
code_r0x00102ee4:
  if (plVar13 == (long *)0x0) goto code_r0x001031d7;
  while( true ) {
    uVar11 = func_0x00102730(&UNK_0011178e);
    uVar10 = tzalloc(uVar11);
    if (plStack288 == (long *)0x0) break;
    iVar2 = func_0x00102960(plStack288,&UNK_00113180);
    if (iVar2 == 0) {
      plStack288 = (long *)func_0x00102820(0,&UNK_00111791,5);
      uStack280 = stdin;
code_r0x00102fe0:
      plStack272 = &lStack248;
      lStack248 = 0;
      uStack240 = 0;
      plStack264 = &lStack232;
      plStack256 = plVar13;
      uVar15 = 1;
      while (lVar5 = func_0x00102950(plStack272,&uStack240,10,uStack280), -1 < lVar5) {
        uVar3 = parse_datetime2(plStack264,lStack248,0,(ulong)parse_datetime_flags,uVar10,uVar11);
        if ((char)uVar3 == '\0') {
          pcVar17 = (char *)(lStack248 + -1 + lVar5);
          if (*pcVar17 == '\n') {
            *pcVar17 = '\0';
          }
          uVar7 = quote(lStack248);
          uVar8 = func_0x00102820(0,&UNK_001117a0,5);
          func_0x00102a90(0,0,uVar8,uVar7);
          uVar15 = uVar3;
        }
        else {
          uVar3 = show_date(plStack256,lStack232,uStack224,uVar10);
          uVar15 = uVar3 & uVar15;
        }
      }
      iVar2 = rpl_fclose(uStack280);
      if (iVar2 != -1) {
        func_0x00102750(lStack248);
        goto code_r0x001030e7;
      }
      goto code_r0x00103338;
    }
    uStack280 = func_0x00102ab0(plStack288,&UNK_00113171);
    if (uStack280 != 0) goto code_r0x00102fe0;
    uVar11 = quotearg_n_style_colon(0,3,plStack288);
    puVar12 = (uint *)func_0x00102780();
    func_0x00102a90(1,(ulong)*puVar12,&UNK_00112de0,uVar11);
code_r0x001031d7:
    plVar13 = (long *)func_0x00102a00(0x2006c);
    if (*(char *)plVar13 == '\0') {
      plVar13 = (long *)&UNK_0011171f;
    }
  }
  bVar14 = ((byte)plVar9 ^ 1) & ((byte)uStack280 ^ 1);
  uVar15 = (uint)bVar14;
  if (bVar14 == 0) {
    if (plStack272 == (long *)0x0) {
      plVar9 = plStack264;
      if (plStack256 != (long *)0x0) {
        plVar9 = plStack256;
      }
      plStack256 = plVar9;
      cVar1 = parse_datetime2(&lStack232,plVar9,0,(ulong)parse_datetime_flags,uVar10,uVar11);
      if (cVar1 == '\0') goto code_r0x00103244;
    }
    else {
      iVar2 = func_0x001029d0(1,plStack272,auStack216);
      if (iVar2 != 0) {
        uVar11 = quotearg_n_style_colon(0,3,plStack272);
        puVar12 = (uint *)func_0x00102780();
        auVar19 = func_0x00102a90(1,(ulong)*puVar12,&UNK_00112de0,uVar11);
        uVar11 = uStack296;
        uStack296 = SUB168(auVar19,0);
        (*(code *)PTR___libc_start_main_00317fc8)
                  (main,uVar11,&plStack288,__libc_csu_init,__libc_csu_fini,SUB168(auVar19 >> 0x40,0)
                   ,&uStack296);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      lStack232 = lStack128;
      uStack224 = uStack120;
    }
    if ((byte)uStack280 == '\0') goto code_r0x00103166;
code_r0x00102f68:
    iVar2 = settime(&lStack232);
    if (iVar2 == 0) {
code_r0x00103166:
      uVar15 = 1;
    }
    else {
      uVar11 = func_0x00102820(0,&UNK_001117b0,5);
      puVar12 = (uint *)func_0x00102780();
      uVar15 = 0;
      func_0x00102a90(0,(ulong)*puVar12,uVar11);
    }
code_r0x0010316b:
    uVar3 = show_date(plVar13,lStack232,uStack224,uVar10);
    uVar15 = uVar15 & uVar3;
code_r0x001030e7:
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)(uVar15 ^ 1) & 0xff;
    }
    func_0x00102850();
code_r0x00103338:
    uVar11 = quotearg_n_style_colon(0,3,plStack288);
    puVar12 = (uint *)func_0x00102780();
    func_0x00102a90(1,(ulong)*puVar12,&UNK_00112de0,uVar11);
code_r0x00103369:
    puVar16 = &UNK_00112b68;
code_r0x00103375:
    uVar11 = func_0x00102820(0,puVar16,5);
    func_0x00102a90(0,0,uVar11);
    goto code_r0x001032cb;
  }
  if ((int)param_1 <= optind) {
    gettime(&lStack232);
    goto code_r0x0010316b;
  }
  plStack256 = (long *)param_2[optind];
  cVar1 = posixtime(&lStack232,plStack256,7);
  uStack224 = 0;
  if (cVar1 != '\0') goto code_r0x00102f68;
code_r0x00103244:
  plVar9 = &lStack232;
  plVar13 = (long *)quote(plStack256);
  iVar2 = (int)plVar13;
  uVar11 = func_0x00102820(0,&UNK_001117a0,5);
  pcVar17 = (char *)0x1;
  func_0x00102a90(1,0,uVar11);
code_r0x00103278:
  if (plVar13 != (long *)0x0) goto code_r0x001032f9;
  plVar13 = (long *)(pcVar17 + 1);
  optind = iVar2;
  goto code_r0x00102ee4;
}

