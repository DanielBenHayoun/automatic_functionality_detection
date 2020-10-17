
ulong chroot(ulong param_1,undefined8 *param_2)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_RDX;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  undefined auVar17 [16];
  undefined8 uStack120;
  long alStack112 [2];
  int iStack96;
  uint uStack92;
  long lStack88;
  long lStack80;
  long lStack72;
  long lStack64;
  
  bVar1 = false;
  param_1 = param_1 & 0xffffffff;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  iStack96 = -1;
  uStack92 = 0xffffffff;
  lStack88 = 0;
  lStack80 = 0;
  set_program_name(*param_2);
  func_0x00101980(6,&UNK_00106a89);
  func_0x00101790(&UNK_0010602e,&UNK_0010605f);
  func_0x00101760(&UNK_0010602e);
  exit_failure = 0x7d;
  atexit(close_stdout);
  puVar15 = (uint *)0;
  pcVar4 = (char *)0x0;
  while( true ) {
    pcVar16 = pcVar4;
    iVar5 = func_0x001017f0(param_1,param_2,&UNK_00106086,long_opts,0);
    pcVar2 = optarg;
    if (iVar5 == -1) break;
    pcVar4 = optarg;
    if (iVar5 != 0x100) {
      if (iVar5 < 0x101) {
        if (iVar5 != -0x83) goto code_r0x00102122;
        version_etc(stdout,&UNK_00105fad,&UNK_0010602a,Version,&UNK_00106077,0);
        func_0x00101a20();
        pcVar4 = optarg;
      }
      else {
        pcVar4 = pcVar16;
        if (iVar5 == 0x101) {
          lVar6 = func_0x001017c0();
          puVar15 = (uint *)pcVar2;
          if ((lVar6 != 0) && (pcVar2[lVar6 + -1] == ':')) {
            pcVar2[lVar6 + -1] = '\0';
          }
        }
        else {
          if (iVar5 != 0x102) goto code_r0x00102151;
          bVar1 = true;
        }
      }
    }
  }
  if (optind < (int)param_1) {
    uVar10 = param_2[optind];
    lVar6 = func_0x00101870(uVar10);
    if ((lVar6 != 0) &&
       (alStack112[0] = lVar6, iVar5 = func_0x001018c0(&UNK_00106526), lVar6 = alStack112[0],
       iVar5 == 0)) goto code_r0x00101d00;
    func_0x001016f0();
    if (bVar1) goto code_r0x001021d2;
    if (puVar15 != (uint *)0x0) {
      parse_user_spec(puVar15,&iStack96,&uStack92,0,0);
    }
    if (iStack96 == -1) {
      alStack112[0] = 0;
code_r0x00101f08:
      if (pcVar16 == (char *)0x0) {
        if (((uStack92 != 0xffffffff) && (alStack112[0] != 0)) &&
           (iVar5 = xgetgroups(alStack112[0],(ulong)uStack92,&lStack88), 0 < iVar5)) {
          lStack80 = (long)iVar5;
        }
        goto code_r0x00101cb4;
      }
    }
    else {
      if (pcVar16 == (char *)0x0) {
        plVar8 = (long *)func_0x00101780();
        if (plVar8 == (long *)0x0) {
          alStack112[0] = 0;
          goto code_r0x00101cb4;
        }
code_r0x00102075:
        if (uStack92 == 0xffffffff) {
          uStack92 = *(uint *)((long)plVar8 + 0x14);
        }
        alStack112[0] = *plVar8;
        goto code_r0x00101f08;
      }
      if ((uStack92 == 0xffffffff) && (plVar8 = (long *)func_0x00101780(), plVar8 != (long *)0x0))
      goto code_r0x00102075;
      alStack112[0] = 0;
    }
    if (*pcVar16 != '\0') goto code_r0x0010204e;
code_r0x00101cb4:
    while (iVar5 = func_0x00101740(uVar10), iVar5 != 0) {
code_r0x0010200f:
      param_1 = quotearg_style(4,uVar10);
      param_2 = (undefined8 *)func_0x001017a0(0,&UNK_00106410,5);
      puVar7 = (uint *)func_0x00101710();
      func_0x001019a0(0x7d,(ulong)*puVar7,param_2,param_1);
code_r0x0010204e:
      parse_additional_groups(pcVar16,&lStack88,&lStack80,0);
    }
code_r0x00101cc4:
    iVar12 = (int)param_1;
    iVar5 = func_0x001017d0();
    if (iVar5 == 0) goto code_r0x00101d26;
    param_2 = (undefined8 *)func_0x001017a0(0,&UNK_00106438,5);
    puVar7 = (uint *)func_0x00101710();
    func_0x001019a0(0x7d,(ulong)*puVar7,param_2);
    lVar6 = extraout_RDX;
code_r0x00101d00:
    iVar12 = (int)param_1;
    func_0x001016f0(lVar6);
    iVar5 = func_0x00101740();
    if (iVar5 == 0) goto code_r0x00101d18;
    goto code_r0x0010200f;
  }
code_r0x00102130:
  uVar10 = func_0x001017a0(0,&UNK_00106088,5);
  func_0x001019a0(0,0,uVar10);
code_r0x00102151:
  usage(0x7d);
code_r0x0010215b:
  func_0x001017e0();
code_r0x00102160:
  uVar10 = func_0x001017a0(0,&UNK_001060b8,5);
  func_0x001019a0(0x7d,(ulong)*puVar15,uVar10);
code_r0x00102186:
  uVar10 = func_0x001017a0(0,&UNK_001060a1,5);
  func_0x001019a0(0x7d,(ulong)*puVar15,uVar10);
  goto code_r0x001021ac;
code_r0x00101d18:
  alStack112[0] = 0;
  if (bVar1) {
code_r0x00101d26:
    puVar9 = (undefined *)(long)optind;
    if (optind + 1 == iVar12) {
      puVar9 = (undefined *)func_0x001016e0();
      if (puVar9 == (undefined *)0x0) goto code_r0x001020cd;
      goto code_r0x00101fbe;
    }
    param_2 = param_2 + (long)(puVar9 + 1);
    goto code_r0x00101d3d;
  }
  goto code_r0x00101cc4;
code_r0x00101d3d:
  uVar13 = (uint)puVar9;
  if (puVar15 == (uint *)0x0) {
code_r0x00101e7b:
    if (iStack96 == -1) goto code_r0x00101e88;
  }
  else {
    lVar6 = parse_user_spec(puVar15,&iStack96,&uStack92,0,0);
    uVar13 = (uint)lVar6;
    if (lVar6 == 0) goto code_r0x00101e7b;
    if (iStack96 == -1) {
      if (uStack92 == 0xffffffff) {
        puVar7 = (uint *)func_0x00101710();
        func_0x001019a0(0x7d,(ulong)*puVar7,&UNK_001064df,lVar6);
        goto code_r0x00101f72;
      }
      goto code_r0x00101e88;
    }
  }
  if ((pcVar16 != (char *)0x0) && (uStack92 != 0xffffffff)) goto code_r0x00101d98;
  plVar8 = (long *)func_0x00101780();
  uVar13 = (uint)plVar8;
  if (plVar8 == (long *)0x0) {
    if (uStack92 != 0xffffffff) goto code_r0x00101e88;
    param_2 = (undefined8 *)func_0x001017a0(0,&UNK_00106458,5);
    puVar7 = (uint *)func_0x00101710();
    func_0x001019a0(0x7d,(ulong)*puVar7,param_2);
code_r0x001020cd:
    puVar9 = &UNK_00106057;
code_r0x00101fbe:
    *(undefined **)param_2 = puVar9;
    puVar9 = &UNK_0010609e;
    param_2[2] = 0;
    param_2[1] = 0x10609e;
    goto code_r0x00101d3d;
  }
  if (uStack92 == 0xffffffff) {
    uStack92 = *(uint *)((long)plVar8 + 0x14);
  }
  alStack112[0] = *plVar8;
  uVar13 = (uint)alStack112[0];
code_r0x00101e88:
  lVar14 = lStack88;
  uVar3 = uStack92;
  lStack72 = 0;
  if (pcVar16 == (char *)0x0) {
    uVar13 = ((uint)puVar15 & 0xffffff00 | (uint)(alStack112[0] != 0)) &
             (uVar13 & 0xffffff00 | (uint)(uStack92 != 0xffffffff));
    puVar15 = (uint *)(ulong)uVar13;
    puVar7 = (uint *)func_0x00101710();
    if ((char)uVar13 != '\0') {
      iVar5 = xgetgroups(alStack112[0],(ulong)uVar3,&lStack72);
      if (iVar5 < 1) {
        if (lStack80 == 0) {
          uVar10 = func_0x001017a0(0,&UNK_00106480,5);
          iVar5 = func_0x001019a0(0x7d,(ulong)*puVar7,uVar10);
code_r0x00102122:
          if (iVar5 == -0x82) {
            usage(0);
            goto code_r0x00102130;
          }
          goto code_r0x00102151;
        }
      }
      else {
        lStack80 = (long)iVar5;
        lVar14 = lStack72;
      }
    }
    if (iStack96 != -1) goto code_r0x00101da3;
code_r0x00101dc2:
    func_0x001016f0(lStack72);
    func_0x001016f0();
    uVar13 = uStack92;
    puVar15 = (uint *)func_0x00101710();
    if ((uVar13 == 0xffffffff) || (iVar5 = func_0x001019b0(), iVar5 == 0)) {
      if ((iStack96 == -1) || (iVar5 = func_0x00101a50(), iVar5 == 0)) {
        func_0x00101a00(*param_2,param_2);
        uVar13 = *puVar15;
        uVar10 = quote(*param_2);
        uVar13 = (uint)(uVar13 == 2) + 0x7e;
        uVar11 = func_0x001017a0(0,&UNK_001060ce,5);
        func_0x001019a0(0,(ulong)*puVar15,uVar11,uVar10);
        goto code_r0x00101e56;
      }
      goto code_r0x00102160;
    }
    goto code_r0x00102186;
  }
code_r0x00101d98:
  lStack72 = 0;
  lVar6 = lStack88;
  lVar14 = lStack88;
  if (*pcVar16 != '\0') {
code_r0x00101f72:
    iVar5 = parse_additional_groups(pcVar16,&lStack72,&lStack80,(ulong)(lStack80 == 0));
    lVar14 = lStack72;
    if ((iVar5 == 0) || (lVar14 = lVar6, lStack80 != 0)) goto code_r0x00101da3;
    uVar13 = 0x7d;
code_r0x00101e56:
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar13;
    }
    goto code_r0x0010215b;
  }
code_r0x00101da3:
  iVar5 = func_0x00101880(lStack80,lVar14);
  puVar15 = (uint *)func_0x00101710();
  if (iVar5 == 0) goto code_r0x00101dc2;
code_r0x001021ac:
  uVar10 = func_0x001017a0(0,&UNK_001064a8,5);
  func_0x001019a0(0x7d,(ulong)*puVar15,uVar10);
code_r0x001021d2:
  uVar10 = quotearg_style(4,&UNK_00106526);
  uVar11 = func_0x001017a0(0,&UNK_001063d8,5);
  func_0x001019a0(0,0,uVar11,uVar10);
  auVar17 = usage(0x7d);
  uVar10 = uStack120;
  uStack120 = SUB168(auVar17,0);
  (*(code *)PTR___libc_start_main_00308fc8)
            (main,uVar10,alStack112,__libc_csu_init,__libc_csu_fini,SUB168(auVar17 >> 0x40,0),
             &uStack120);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}