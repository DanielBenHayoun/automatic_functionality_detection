
ulong restore_default_fscreatecon_or_die(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined auVar13 [16];
  long alStack376 [6];
  char acStack323 [3];
  long lStack320;
  undefined *puStack312;
  int aiStack304 [5];
  char acStack284 [8];
  char acStack276 [28];
  int aiStack248 [2];
  undefined8 uStack240;
  undefined8 uStack232;
  undefined auStack224 [24];
  uint auStack200 [32];
  long alStack72 [2];
  uint *puStack56;
  
  puStack56 = (uint *)func_0x00102770();
  *puStack56 = 0x5f;
  uVar5 = func_0x001028e0(0,&UNK_00114748,5);
  puVar11 = (undefined8 *)(ulong)*puStack56;
  uVar12 = 1;
  func_0x00102cb0(1,puVar11,uVar5);
  puVar9 = &UNK_00112c1c;
  plVar10 = alStack376 + 3;
  alStack72[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*puVar11);
  func_0x00102c50(6,&UNK_00115046);
  func_0x001028b0(&UNK_001129c2,&UNK_00112a3b);
  func_0x00102870(&UNK_001129c2);
  atexit(close_stdin);
  selinux_enabled = '\0';
  cp_options_default(aiStack304);
  acStack284[0] = 1;
  aiStack304[1] = 1;
  acStack284[1] = 0;
  acStack284[2] = 0;
  acStack284[3] = 0;
  aiStack304[2] = 4;
  acStack284[4] = 0;
  acStack284[5] = 0;
  acStack276[0] = 0;
  aiStack248[0] = 0;
  acStack276[1] = 0;
  acStack276[6] = 0;
  acStack276[2] = 0;
  acStack276[3] = 0;
  acStack276[4] = 0;
  acStack276[9] = 0;
  acStack276[10] = 0;
  acStack276[5] = 0;
  acStack276[11] = 0;
  acStack276[13] = 0;
  acStack276[12] = 0;
  acStack276[7] = 1;
  acStack276[8] = 0;
  acStack276[14] = 0;
  aiStack304[3] = 2;
  acStack276[16] = 0;
  acStack276[15] = 0;
  aiStack304[4] = 0;
  acStack276[19] = 0;
  acStack276[17] = 0;
  acStack276[18] = 0;
  lVar6 = func_0x00102740(&UNK_00112a53);
  uStack240 = 0;
  acStack276[20] = lVar6 != 0;
  uStack232 = 0;
  lStack320 = 0;
  acStack323[1] = 0;
  alStack376[3] = 0;
  acStack323[2] = 0;
  alStack376[4] = 0;
  alStack376[5] = 0;
  acStack323[0] = 0;
  puStack312 = auStack224;
code_r0x00103018:
  while( true ) {
    plVar10[-1] = 0x103030;
    iVar3 = func_0x00102950((ulong)uVar12,puVar11,&UNK_00112aa5,long_opts,0);
    if (iVar3 == -1) break;
    if (0x10b < iVar3 + 0x83U) goto code_r0x001035ec;
    switch(puVar9 + *(int *)(puVar9 + (ulong)(iVar3 + 0x83U) * 4)) {
    case (undefined *)0x103052:
      if (optarg == 0) {
code_r0x00103062:
        *(undefined *)((long)plVar10 + 0x4d) = 1;
        *(undefined *)((long)plVar10 + 0x4e) = 1;
        *(undefined *)((long)plVar10 + 0x4f) = 1;
        *(undefined *)((long)plVar10 + 0x54) = 1;
      }
      else {
        plVar10[-1] = 0x10335a;
        decode_preserve_arg(optarg,aiStack304,1);
        *(undefined *)((long)plVar10 + 0x54) = 1;
      }
      break;
    case (undefined *)0x103062:
      goto code_r0x00103062;
    case (undefined *)0x103078:
      *(undefined4 *)(plVar10 + 7) = 2;
      break;
    case (undefined *)0x103082:
      *(undefined *)((long)plVar10 + 0x47) = 1;
      break;
    case (undefined *)0x103089:
      *(undefined4 *)(plVar10 + 7) = 3;
      break;
    case (undefined *)0x103093:
      *(undefined *)((long)plVar10 + 0x46) = 1;
      break;
    case (undefined *)0x10309d:
      *(undefined *)((long)plVar10 + 0x52) = 1;
      *(undefined4 *)((long)plVar10 + 0x34) = 2;
      break;
    case (undefined *)0x1030af:
      *(undefined *)((long)plVar10 + 0x1d) = 1;
      lVar6 = optarg;
      if (optarg == 0) {
        lVar6 = plVar10[1];
      }
      plVar10[1] = lVar6;
      break;
    case (undefined *)0x1030ce:
      *(undefined4 *)((long)plVar10 + 0x34) = 2;
      *(undefined *)((long)plVar10 + 0x52) = 1;
      *(undefined *)((long)plVar10 + 0x4d) = 1;
      *(undefined *)((long)plVar10 + 0x4e) = 1;
      *(undefined *)((long)plVar10 + 0x4f) = 1;
      *(undefined *)((long)plVar10 + 0x54) = 1;
      if (selinux_enabled != '\0') {
        *(undefined *)((long)plVar10 + 0x55) = 1;
      }
      *(undefined *)((long)plVar10 + 0x57) = 1;
      *(undefined *)((long)plVar10 + 0x59) = 1;
      *(undefined *)((long)plVar10 + 0x5a) = 1;
      break;
    case (undefined *)0x103111:
      if (selinux_enabled == '\0') {
        if (optarg != 0) {
          plVar10[-1] = 0x103380;
          uVar5 = func_0x001028e0(0,&UNK_00114568,5);
          plVar10[-1] = 0x10338e;
          func_0x00102cb0(0,0,uVar5);
        }
      }
      else {
        if (optarg == 0) {
          *(undefined *)((long)plVar10 + 0x51) = 1;
        }
        else {
          plVar10[4] = optarg;
        }
      }
      break;
    case (undefined *)0x103138:
      *(undefined *)((long)plVar10 + 0x1e) = 1;
      break;
    case (undefined *)0x103142:
      *(undefined *)((long)plVar10 + 0x1d) = 1;
      plVar10[2] = optarg;
      break;
    case (undefined *)0x103158:
      *(undefined *)((long)plVar10 + 0x5a) = 1;
      break;
    case (undefined *)0x103162:
      *(undefined4 *)((long)plVar10 + 0x34) = 2;
      break;
    case (undefined *)0x10316f:
      *(undefined4 *)((long)plVar10 + 0x34) = 4;
      break;
    case (undefined *)0x10317c:
      *(undefined4 *)((long)plVar10 + 0x34) = 3;
      break;
    case (undefined *)0x103189:
      plVar10[-1] = 0;
      plVar10[-2] = 0x112a98;
      plVar10[-3] = 0x1031c4;
      version_etc(stdout,&UNK_00112945,&UNK_001129be,Version,&UNK_00112a86,&UNK_00112a76);
      plVar10[-3] = 0x1031cb;
      func_0x00102d90();
      plVar10 = plVar10 + -2;
    case (undefined *)0x1031cb:
      ((undefined *)plVar10)[0x45] = 1;
      break;
    case (undefined *)0x1031d5:
      goto code_r0x001031d5;
    case (undefined *)0x1031e1:
      plVar10[-1] = 0x10320f;
      lVar6 = __xargmatch_internal
                        (&UNK_00112a63,optarg,sparse_type_string,sparse_type,4,argmatch_die);
      *(undefined4 *)((long)plVar10 + 0x3c) = *(undefined4 *)(sparse_type + lVar6 * 4);
      break;
    case (undefined *)0x103222:
      if (optarg == 0) {
        *(undefined4 *)(plVar10 + 0xd) = 2;
      }
      else {
        plVar10[-1] = 0x103259;
        lVar6 = __xargmatch_internal
                          (&UNK_00112a6c,optarg,reflink_type_string,reflink_type,4,argmatch_die);
        *(undefined4 *)(plVar10 + 0xd) = *(undefined4 *)(reflink_type + lVar6 * 4);
      }
      break;
    case (undefined *)0x10326c:
      parents_option = 1;
      break;
    case (undefined *)0x103278:
      plVar10[-1] = 0x103289;
      decode_preserve_arg(optarg,aiStack304,0);
      break;
    case (undefined *)0x10328e:
      *(undefined *)((long)plVar10 + 0x1f) = 1;
      break;
    case (undefined *)0x103298:
      *(undefined *)((long)plVar10 + 0x53) = 0;
      break;
    case (undefined *)0x1032a2:
      *(undefined *)((long)plVar10 + 0x4c) = 1;
      break;
    case (undefined *)0x1032ac:
      *(undefined *)((long)plVar10 + 0x5e) = 1;
      break;
    case (undefined *)0x1032b6:
      *(undefined *)((long)plVar10 + 0x5d) = 1;
      break;
    case (undefined *)0x1032c0:
      if (*plVar10 != 0) goto code_r0x001035f6;
      plVar10[-1] = 0x1032e1;
      iVar3 = func_0x00102ba0(1,optarg,plVar10[5]);
      if (iVar3 != 0) goto code_r0x00103685;
      *plVar10 = optarg;
      if ((*(uint *)(plVar10 + 0x13) & 0xf000) != 0x4000) {
        plVar10[-1] = 0x103319;
        puVar9 = (undefined *)quotearg_style(4,*plVar10);
        plVar10[-1] = 0x10332f;
        uVar5 = func_0x001028e0(0,&UNK_00112a1b,5);
        plVar10[-1] = 0x103343;
        func_0x00102cb0(1,0,uVar5,puVar9);
code_r0x00103343:
        *(undefined *)((long)plVar10 + 0x5c) = 1;
      }
      break;
    case (undefined *)0x103343:
      goto code_r0x00103343;
    case (undefined *)0x1035c4:
      goto code_r0x001035c4;
    case (undefined *)0x1035ec:
      goto code_r0x001035ec;
    }
  }
  if ((*(char *)((long)plVar10 + 0x47) == '\0') || (*(char *)((long)plVar10 + 0x5c) == '\0')) {
    if (*(int *)(plVar10 + 7) == 2) {
      *(undefined *)((long)plVar10 + 0x5d) = 0;
      if (*(char *)((long)plVar10 + 0x1d) == '\0') goto code_r0x001034ce;
code_r0x001035cb:
      puVar9 = &UNK_001145e0;
      goto code_r0x001035d7;
    }
    if (*(char *)((long)plVar10 + 0x1d) == '\0') {
code_r0x001034ce:
      uVar4 = 0;
      if ((*(int *)(plVar10 + 0xd) == 2) && (uVar4 = 0, *(int *)((long)plVar10 + 0x3c) != 2))
      goto code_r0x001034e6;
    }
    else {
      if ((*(int *)(plVar10 + 0xd) == 2) && (*(int *)((long)plVar10 + 0x3c) != 2)) {
code_r0x001034e6:
        puVar9 = &UNK_00114620;
        goto code_r0x001035d7;
      }
      plVar10[-1] = 0x1033df;
      uVar5 = func_0x001028e0(0,&UNK_00112abd,5);
      plVar10[-1] = 0x1033ec;
      uVar4 = xget_version(uVar5,plVar10[1]);
    }
    *(undefined4 *)(plVar10 + 6) = uVar4;
    plVar10[-1] = 0x1033fa;
    set_simple_backup_suffix(plVar10[2]);
    if (*(int *)((long)plVar10 + 0x34) == 1) {
      if ((*(char *)((long)plVar10 + 0x5a) == '\0') || (*(char *)((long)plVar10 + 0x47) != '\0')) {
        *(undefined4 *)((long)plVar10 + 0x34) = 4;
        goto code_r0x00103405;
      }
      *(undefined4 *)((long)plVar10 + 0x34) = 2;
code_r0x0010350d:
      *(undefined *)((long)plVar10 + 0x44) = *(undefined *)((long)plVar10 + 0x1f);
    }
    else {
code_r0x00103405:
      if (*(char *)((long)plVar10 + 0x5a) != '\0') goto code_r0x0010350d;
    }
    cVar2 = *(char *)((long)plVar10 + 0x56);
    if ((*(char *)((long)plVar10 + 0x51) == '\0') && (plVar10[4] == 0)) {
code_r0x00103546:
      if (*(char *)((long)plVar10 + 0x55) == '\0') {
        if ((cVar2 != '\0') && (selinux_enabled == '\0')) goto code_r0x001035a0;
      }
      else {
        if (cVar2 != '\0') goto code_r0x00103555;
      }
    }
    else {
      if (cVar2 == '\0') {
        *(undefined *)((long)plVar10 + 0x55) = 0;
      }
      else {
        if (*(char *)((long)plVar10 + 0x55) != '\0') {
          plVar10[-1] = 0x103535;
          uVar5 = func_0x001028e0(0,&UNK_00114650,5);
          plVar10[-1] = 0x103546;
          cVar2 = func_0x00102cb0(1,0,uVar5);
          goto code_r0x00103546;
        }
code_r0x00103555:
        if (selinux_enabled == '\0') {
code_r0x001035a0:
          plVar10[-1] = 0x1035b3;
          uVar5 = func_0x001028e0(0,&UNK_00114680,5);
          plVar10[-1] = 0x1035c4;
          func_0x00102cb0(1,0,uVar5);
code_r0x001035c4:
          plVar10[-1] = 0x1035cb;
          usage(0);
          goto code_r0x001035cb;
        }
      }
      if (plVar10[4] != 0) goto code_r0x00103643;
    }
    if (*(char *)(plVar10 + 0xb) == '\0') {
      plVar10[-1] = 0x103451;
      hash_init();
      plVar10[-1] = 0x103473;
      bVar1 = do_copy((ulong)(uVar12 - optind),puVar11 + optind,*plVar10,
                      (ulong)*(byte *)((long)plVar10 + 0x1e),aiStack304);
      if (plVar10[0x23] == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)(bVar1 ^ 1);
      }
      goto code_r0x0010361a;
    }
  }
  else {
    puVar9 = &UNK_001145b0;
code_r0x001035d7:
    plVar10[-1] = 0x1035de;
    uVar5 = func_0x001028e0(0,puVar9,5);
    plVar10[-1] = 0x1035ec;
    func_0x00102cb0(0,0,uVar5);
code_r0x001035ec:
    plVar10[-1] = 0x1035f6;
    usage(1);
code_r0x001035f6:
    plVar10[-1] = 0x103609;
    uVar5 = func_0x001028e0(0,&UNK_00114540,5);
    plVar10[-1] = 0x10361a;
    func_0x00102cb0(1,0,uVar5);
code_r0x0010361a:
    plVar10[-1] = 0x10361f;
    func_0x00102930();
  }
  plVar10[-1] = 0x103632;
  uVar5 = func_0x001028e0(0,&UNK_00114700,5);
  plVar10[-1] = 0x103643;
  func_0x00102cb0(1,0,uVar5);
code_r0x00103643:
  plVar10[-1] = 0x103648;
  puVar7 = (uint *)func_0x00102770();
  lVar6 = plVar10[4];
  *puVar7 = 0x5f;
  plVar10[-1] = 0x10365b;
  uVar5 = quote(lVar6);
  plVar10[-1] = 0x103671;
  uVar8 = func_0x001028e0(0,&UNK_001146c8,5);
  uVar12 = *puVar7;
  plVar10[-1] = 0x103685;
  func_0x00102cb0(1,(ulong)uVar12,uVar8,uVar5);
code_r0x00103685:
  plVar10[-1] = 0x103696;
  uVar5 = quotearg_style(4,optarg);
  plVar10[-1] = 0x1036ac;
  uVar8 = func_0x001028e0(0,&UNK_001128fd,5);
  plVar10[-1] = 0x1036b4;
  puVar7 = (uint *)func_0x00102770();
  uVar12 = *puVar7;
  plVar10[-1] = 0x1036c8;
  auVar13 = func_0x00102cb0(1,(ulong)uVar12,uVar8,uVar5);
  plVar10[-1] = SUB168(auVar13,0);
  *(long **)(plVar10 + -2) = plVar10 + -1;
  plVar10[-3] = 0x1036fa;
  (*(code *)PTR___libc_start_main_00319fd8)
            (main,*plVar10,plVar10 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar13 >> 0x40,0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
code_r0x001031d5:
  remove_trailing_slashes = 1;
  goto code_r0x00103018;
}

