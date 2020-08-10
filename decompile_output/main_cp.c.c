
ulong main(uint param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined auVar13 [16];
  long alStack368 [6];
  char acStack315 [3];
  long lStack312;
  undefined *puStack304;
  int aiStack296 [5];
  char acStack276 [8];
  char acStack268 [28];
  int aiStack240 [2];
  undefined8 uStack232;
  undefined8 uStack224;
  undefined auStack216 [24];
  uint auStack192 [32];
  long alStack64 [2];
  
  puVar10 = &UNK_00112c1c;
  plVar11 = alStack368 + 3;
  alStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00102c50(6,&UNK_00115046);
  func_0x001028b0(&UNK_001129c2,&UNK_00112a3b);
  func_0x00102870(&UNK_001129c2);
  atexit(close_stdin);
  selinux_enabled = '\0';
  cp_options_default(aiStack296);
  acStack276[0] = 1;
  aiStack296[1] = 1;
  acStack276[1] = 0;
  acStack276[2] = 0;
  acStack276[3] = 0;
  aiStack296[2] = 4;
  acStack276[4] = 0;
  acStack276[5] = 0;
  acStack268[0] = 0;
  aiStack240[0] = 0;
  acStack268[1] = 0;
  acStack268[6] = 0;
  acStack268[2] = 0;
  acStack268[3] = 0;
  acStack268[4] = 0;
  acStack268[9] = 0;
  acStack268[10] = 0;
  acStack268[5] = 0;
  acStack268[11] = 0;
  acStack268[13] = 0;
  acStack268[12] = 0;
  acStack268[7] = 1;
  acStack268[8] = 0;
  acStack268[14] = 0;
  aiStack296[3] = 2;
  acStack268[16] = 0;
  acStack268[15] = 0;
  aiStack296[4] = 0;
  acStack268[19] = 0;
  acStack268[17] = 0;
  acStack268[18] = 0;
  lVar6 = func_0x00102740(&UNK_00112a53);
  uStack232 = 0;
  acStack268[20] = lVar6 != 0;
  uStack224 = 0;
  lStack312 = 0;
  acStack315[1] = 0;
  alStack368[3] = 0;
  acStack315[2] = 0;
  alStack368[4] = 0;
  alStack368[5] = 0;
  acStack315[0] = 0;
  puStack304 = auStack216;
code_r0x00103018:
  while( true ) {
    plVar11[-1] = 0x103030;
    iVar4 = func_0x00102950((ulong)param_1,param_2,&UNK_00112aa5,long_opts,0);
    if (iVar4 == -1) break;
    if (0x10b < iVar4 + 0x83U) goto code_r0x001035ec;
    switch(puVar10 + *(int *)(puVar10 + (ulong)(iVar4 + 0x83U) * 4)) {
    case (undefined *)0x103052:
      if (optarg == 0) {
code_r0x00103062:
        *(undefined *)((long)plVar11 + 0x4d) = 1;
        *(undefined *)((long)plVar11 + 0x4e) = 1;
        *(undefined *)((long)plVar11 + 0x4f) = 1;
        *(undefined *)((long)plVar11 + 0x54) = 1;
      }
      else {
        plVar11[-1] = 0x10335a;
        decode_preserve_arg(optarg,aiStack296,1);
        *(undefined *)((long)plVar11 + 0x54) = 1;
      }
      break;
    case (undefined *)0x103062:
      goto code_r0x00103062;
    case (undefined *)0x103078:
      *(undefined4 *)(plVar11 + 7) = 2;
      break;
    case (undefined *)0x103082:
      *(undefined *)((long)plVar11 + 0x47) = 1;
      break;
    case (undefined *)0x103089:
      *(undefined4 *)(plVar11 + 7) = 3;
      break;
    case (undefined *)0x103093:
      *(undefined *)((long)plVar11 + 0x46) = 1;
      break;
    case (undefined *)0x10309d:
      *(undefined *)((long)plVar11 + 0x52) = 1;
      *(undefined4 *)((long)plVar11 + 0x34) = 2;
      break;
    case (undefined *)0x1030af:
      *(undefined *)((long)plVar11 + 0x1d) = 1;
      lVar6 = optarg;
      if (optarg == 0) {
        lVar6 = plVar11[1];
      }
      plVar11[1] = lVar6;
      break;
    case (undefined *)0x1030ce:
      *(undefined4 *)((long)plVar11 + 0x34) = 2;
      *(undefined *)((long)plVar11 + 0x52) = 1;
      *(undefined *)((long)plVar11 + 0x4d) = 1;
      *(undefined *)((long)plVar11 + 0x4e) = 1;
      *(undefined *)((long)plVar11 + 0x4f) = 1;
      *(undefined *)((long)plVar11 + 0x54) = 1;
      if (selinux_enabled != '\0') {
        *(undefined *)((long)plVar11 + 0x55) = 1;
      }
      *(undefined *)((long)plVar11 + 0x57) = 1;
      *(undefined *)((long)plVar11 + 0x59) = 1;
      *(undefined *)((long)plVar11 + 0x5a) = 1;
      break;
    case (undefined *)0x103111:
      if (selinux_enabled == '\0') {
        if (optarg != 0) {
          plVar11[-1] = 0x103380;
          uVar7 = func_0x001028e0(0,&UNK_00114568,5);
          plVar11[-1] = 0x10338e;
          func_0x00102cb0(0,0,uVar7);
        }
      }
      else {
        if (optarg == 0) {
          *(undefined *)((long)plVar11 + 0x51) = 1;
        }
        else {
          plVar11[4] = optarg;
        }
      }
      break;
    case (undefined *)0x103138:
      *(undefined *)((long)plVar11 + 0x1e) = 1;
      break;
    case (undefined *)0x103142:
      *(undefined *)((long)plVar11 + 0x1d) = 1;
      plVar11[2] = optarg;
      break;
    case (undefined *)0x103158:
      *(undefined *)((long)plVar11 + 0x5a) = 1;
      break;
    case (undefined *)0x103162:
      *(undefined4 *)((long)plVar11 + 0x34) = 2;
      break;
    case (undefined *)0x10316f:
      *(undefined4 *)((long)plVar11 + 0x34) = 4;
      break;
    case (undefined *)0x10317c:
      *(undefined4 *)((long)plVar11 + 0x34) = 3;
      break;
    case (undefined *)0x103189:
      plVar11[-1] = 0;
      plVar11[-2] = 0x112a98;
      plVar11[-3] = 0x1031c4;
      version_etc(stdout,&UNK_00112945,&UNK_001129be,Version,&UNK_00112a86,&UNK_00112a76);
      plVar11[-3] = 0x1031cb;
      func_0x00102d90();
      plVar11 = plVar11 + -2;
    case (undefined *)0x1031cb:
      ((undefined *)plVar11)[0x45] = 1;
      break;
    case (undefined *)0x1031d5:
      goto code_r0x001031d5;
    case (undefined *)0x1031e1:
      plVar11[-1] = 0x10320f;
      lVar6 = __xargmatch_internal
                        (&UNK_00112a63,optarg,sparse_type_string,sparse_type,4,argmatch_die);
      *(undefined4 *)((long)plVar11 + 0x3c) = *(undefined4 *)(sparse_type + lVar6 * 4);
      break;
    case (undefined *)0x103222:
      if (optarg == 0) {
        *(undefined4 *)(plVar11 + 0xd) = 2;
      }
      else {
        plVar11[-1] = 0x103259;
        lVar6 = __xargmatch_internal
                          (&UNK_00112a6c,optarg,reflink_type_string,reflink_type,4,argmatch_die);
        *(undefined4 *)(plVar11 + 0xd) = *(undefined4 *)(reflink_type + lVar6 * 4);
      }
      break;
    case (undefined *)0x10326c:
      parents_option = 1;
      break;
    case (undefined *)0x103278:
      plVar11[-1] = 0x103289;
      decode_preserve_arg(optarg,aiStack296,0);
      break;
    case (undefined *)0x10328e:
      *(undefined *)((long)plVar11 + 0x1f) = 1;
      break;
    case (undefined *)0x103298:
      *(undefined *)((long)plVar11 + 0x53) = 0;
      break;
    case (undefined *)0x1032a2:
      *(undefined *)((long)plVar11 + 0x4c) = 1;
      break;
    case (undefined *)0x1032ac:
      *(undefined *)((long)plVar11 + 0x5e) = 1;
      break;
    case (undefined *)0x1032b6:
      *(undefined *)((long)plVar11 + 0x5d) = 1;
      break;
    case (undefined *)0x1032c0:
      if (*plVar11 != 0) goto code_r0x001035f6;
      plVar11[-1] = 0x1032e1;
      iVar4 = func_0x00102ba0(1,optarg,plVar11[5]);
      if (iVar4 != 0) goto code_r0x00103685;
      *plVar11 = optarg;
      if ((*(uint *)(plVar11 + 0x13) & 0xf000) != 0x4000) {
        plVar11[-1] = 0x103319;
        puVar10 = (undefined *)quotearg_style(4,*plVar11);
        plVar11[-1] = 0x10332f;
        uVar7 = func_0x001028e0(0,&UNK_00112a1b,5);
        plVar11[-1] = 0x103343;
        func_0x00102cb0(1,0,uVar7,puVar10);
code_r0x00103343:
        *(undefined *)((long)plVar11 + 0x5c) = 1;
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
  if ((*(char *)((long)plVar11 + 0x47) == '\0') || (*(char *)((long)plVar11 + 0x5c) == '\0')) {
    if (*(int *)(plVar11 + 7) == 2) {
      *(undefined *)((long)plVar11 + 0x5d) = 0;
      if (*(char *)((long)plVar11 + 0x1d) == '\0') goto code_r0x001034ce;
code_r0x001035cb:
      puVar10 = &UNK_001145e0;
      goto code_r0x001035d7;
    }
    if (*(char *)((long)plVar11 + 0x1d) == '\0') {
code_r0x001034ce:
      uVar5 = 0;
      if ((*(int *)(plVar11 + 0xd) == 2) && (uVar5 = 0, *(int *)((long)plVar11 + 0x3c) != 2))
      goto code_r0x001034e6;
    }
    else {
      if ((*(int *)(plVar11 + 0xd) == 2) && (*(int *)((long)plVar11 + 0x3c) != 2)) {
code_r0x001034e6:
        puVar10 = &UNK_00114620;
        goto code_r0x001035d7;
      }
      plVar11[-1] = 0x1033df;
      uVar7 = func_0x001028e0(0,&UNK_00112abd,5);
      plVar11[-1] = 0x1033ec;
      uVar5 = xget_version(uVar7,plVar11[1]);
    }
    *(undefined4 *)(plVar11 + 6) = uVar5;
    plVar11[-1] = 0x1033fa;
    set_simple_backup_suffix(plVar11[2]);
    if (*(int *)((long)plVar11 + 0x34) == 1) {
      if ((*(char *)((long)plVar11 + 0x5a) == '\0') || (*(char *)((long)plVar11 + 0x47) != '\0')) {
        *(undefined4 *)((long)plVar11 + 0x34) = 4;
        goto code_r0x00103405;
      }
      *(undefined4 *)((long)plVar11 + 0x34) = 2;
code_r0x0010350d:
      *(undefined *)((long)plVar11 + 0x44) = *(undefined *)((long)plVar11 + 0x1f);
    }
    else {
code_r0x00103405:
      if (*(char *)((long)plVar11 + 0x5a) != '\0') goto code_r0x0010350d;
    }
    cVar3 = *(char *)((long)plVar11 + 0x56);
    if ((*(char *)((long)plVar11 + 0x51) == '\0') && (plVar11[4] == 0)) {
code_r0x00103546:
      if (*(char *)((long)plVar11 + 0x55) == '\0') {
        if ((cVar3 != '\0') && (selinux_enabled == '\0')) goto code_r0x001035a0;
      }
      else {
        if (cVar3 != '\0') goto code_r0x00103555;
      }
    }
    else {
      if (cVar3 == '\0') {
        *(undefined *)((long)plVar11 + 0x55) = 0;
      }
      else {
        if (*(char *)((long)plVar11 + 0x55) != '\0') {
          plVar11[-1] = 0x103535;
          uVar7 = func_0x001028e0(0,&UNK_00114650,5);
          plVar11[-1] = 0x103546;
          cVar3 = func_0x00102cb0(1,0,uVar7);
          goto code_r0x00103546;
        }
code_r0x00103555:
        if (selinux_enabled == '\0') {
code_r0x001035a0:
          plVar11[-1] = 0x1035b3;
          uVar7 = func_0x001028e0(0,&UNK_00114680,5);
          plVar11[-1] = 0x1035c4;
          func_0x00102cb0(1,0,uVar7);
code_r0x001035c4:
          plVar11[-1] = 0x1035cb;
          usage(0);
          goto code_r0x001035cb;
        }
      }
      if (plVar11[4] != 0) goto code_r0x00103643;
    }
    if (*(char *)(plVar11 + 0xb) == '\0') {
      plVar11[-1] = 0x103451;
      hash_init();
      plVar11[-1] = 0x103473;
      bVar2 = do_copy((ulong)(param_1 - optind),param_2 + optind,*plVar11,
                      (ulong)*(byte *)((long)plVar11 + 0x1e),aiStack296);
      if (plVar11[0x23] == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)(bVar2 ^ 1);
      }
      goto code_r0x0010361a;
    }
  }
  else {
    puVar10 = &UNK_001145b0;
code_r0x001035d7:
    plVar11[-1] = 0x1035de;
    uVar7 = func_0x001028e0(0,puVar10,5);
    plVar11[-1] = 0x1035ec;
    func_0x00102cb0(0,0,uVar7);
code_r0x001035ec:
    plVar11[-1] = 0x1035f6;
    usage(1);
code_r0x001035f6:
    plVar11[-1] = 0x103609;
    uVar7 = func_0x001028e0(0,&UNK_00114540,5);
    plVar11[-1] = 0x10361a;
    func_0x00102cb0(1,0,uVar7);
code_r0x0010361a:
    plVar11[-1] = 0x10361f;
    func_0x00102930();
  }
  plVar11[-1] = 0x103632;
  uVar7 = func_0x001028e0(0,&UNK_00114700,5);
  plVar11[-1] = 0x103643;
  func_0x00102cb0(1,0,uVar7);
code_r0x00103643:
  plVar11[-1] = 0x103648;
  puVar8 = (uint *)func_0x00102770();
  lVar6 = plVar11[4];
  *puVar8 = 0x5f;
  plVar11[-1] = 0x10365b;
  uVar7 = quote(lVar6);
  plVar11[-1] = 0x103671;
  uVar9 = func_0x001028e0(0,&UNK_001146c8,5);
  uVar1 = *puVar8;
  plVar11[-1] = 0x103685;
  func_0x00102cb0(1,(ulong)uVar1,uVar9,uVar7);
code_r0x00103685:
  plVar11[-1] = 0x103696;
  uVar7 = quotearg_style(4,optarg);
  plVar11[-1] = 0x1036ac;
  uVar9 = func_0x001028e0(0,&UNK_001128fd,5);
  plVar11[-1] = 0x1036b4;
  puVar8 = (uint *)func_0x00102770();
  uVar1 = *puVar8;
  plVar11[-1] = 0x1036c8;
  auVar13 = func_0x00102cb0(1,(ulong)uVar1,uVar9,uVar7);
  uVar7 = *plVar11;
  uVar12 = (ulong)(plVar11 + 1) & 0xfffffffffffffff0;
  *(undefined8 *)(uVar12 - 8) = SUB168(auVar13,0);
  *(ulong *)(uVar12 - 0x10) = uVar12 - 8;
  *(undefined8 *)(uVar12 - 0x18) = 0x1036fa;
  (*(code *)PTR___libc_start_main_00319fd8)
            (main,uVar7,plVar11 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar13 >> 0x40,0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
code_r0x001031d5:
  remove_trailing_slashes = 1;
  goto code_r0x00103018;
}

