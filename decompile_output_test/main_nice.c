
ulong nice(int param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  char *unaff_R14;
  long in_FS_OFFSET;
  undefined auVar11 [16];
  undefined1 *puStack56;
  long lStack48;
  
  iVar7 = 1;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101540(6,&UNK_00105a01);
  func_0x001013c0(&UNK_00105003);
  func_0x001013a0(&UNK_00105003);
  exit_failure = 0x7d;
  atexit(close_stdout);
  if (1 < param_1) {
    puVar10 = longopts;
    unaff_R14 = (char *)0x0;
    while( true ) {
      pcVar1 = (char *)param_2[(long)iVar7];
      if ((*pcVar1 != '-') ||
         (9 < (int)pcVar1[(int)((uint)((pcVar1[1] - 0x2bU & 0xfd) == 0) + 1)] - 0x30U)) break;
      iVar7 = iVar7 + 1;
      unaff_R14 = pcVar1 + 1;
      while (param_1 <= iVar7) {
code_r0x0010173c:
        if (unaff_R14 == (char *)0x0) goto code_r0x00101811;
        uVar2 = xstrtol(unaff_R14,0,10,&puStack56,&UNK_00105a01);
        if (1 < uVar2) goto code_r0x0010199c;
        puVar10 = (undefined1 *)0xffffffd9;
        if ((-0x28 < (long)puStack56) && (puVar10 = (undefined1 *)0x27, (long)puStack56 < 0x28)) {
          puVar10 = puStack56;
        }
        iVar3 = (int)puVar10;
        if (iVar7 != param_1) goto code_r0x00101828;
        uVar5 = func_0x001013d0(0,&UNK_00105450,5);
        func_0x00101560(0,0,uVar5);
        do {
          do {
            iVar3 = usage(0x7d);
code_r0x001017c0:
          } while (iVar3 != -0x83);
          version_etc(stdout,&UNK_00104f84,&UNK_00104fff,Version,&UNK_00105048,0);
          iVar3 = func_0x001015a0();
code_r0x00101800:
          unaff_R14 = optarg;
        } while (iVar3 != 0x6e);
      }
    }
    param_2[(long)iVar7 + -1] = *param_2;
    optind = 0;
    iVar3 = func_0x00101410((ulong)(uint)(param_1 - (iVar7 + -1)),param_2 + (long)iVar7 + -1,
                            &UNK_00105044,puVar10,0);
    iVar7 = iVar7 + -1 + optind;
    if (iVar3 != -0x82) {
      if (iVar3 < -0x81) goto code_r0x001017c0;
      if (iVar3 != -1) goto code_r0x00101800;
      goto code_r0x0010173c;
    }
    usage(0);
    goto code_r0x00101997;
  }
code_r0x00101811:
  puVar6 = (uint *)func_0x00101350();
  if (iVar7 == param_1) {
    *puVar6 = 0;
    uVar2 = func_0x00101360(0,0);
    if ((uVar2 == 0xffffffff) && (*puVar6 != 0)) {
      uVar5 = func_0x001013d0(0,&UNK_0010506e,5);
      uVar2 = func_0x00101560(0x7d,(ulong)*puVar6,uVar5);
    }
    uVar8 = 0;
    func_0x00101550(1,&UNK_00105082,(ulong)uVar2);
  }
  else {
    iVar3 = 10;
code_r0x00101828:
    puVar6 = (uint *)func_0x00101350();
    *puVar6 = 0;
    iVar4 = func_0x00101360(0,0);
    if ((iVar4 == -1) && (*puVar6 != 0)) {
      uVar5 = func_0x001013d0(0,&UNK_0010506e,5);
      iVar4 = func_0x00101560(0x7d,(ulong)*puVar6,uVar5);
    }
    iVar3 = func_0x00101470(0,0,(ulong)(uint)(iVar4 + iVar3));
    if (iVar3 != 0) {
      uVar5 = func_0x001013d0(0,&UNK_00105086,5);
      uVar2 = *puVar6;
      if ((uVar2 == 0xd) || (uVar9 = 0x7d, uVar2 == 1)) {
        uVar9 = 0;
      }
      func_0x00101560(uVar9,(ulong)uVar2,uVar5);
      if ((*stderr & 0x20) != 0) {
        uVar8 = 0x7d;
        goto code_r0x0010190e;
      }
    }
    param_2 = param_2 + iVar7;
    func_0x00101580(*param_2,param_2);
    uVar2 = *puVar6;
    uVar5 = quote(*param_2);
    uVar8 = (uint)(uVar2 == 2) + 0x7e;
    func_0x00101560(0,(ulong)*puVar6,&UNK_00105490,uVar5);
  }
code_r0x0010190e:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar8;
  }
code_r0x00101997:
  func_0x00101400();
code_r0x0010199c:
  uVar5 = quote(unaff_R14);
  uVar9 = func_0x001013d0(0,&UNK_00105058,5);
  auVar11 = func_0x00101560(0x7d,0,uVar9,uVar5);
  puVar10 = puStack56;
  puStack56 = SUB168(auVar11,0);
  (*(code *)PTR___libc_start_main_00307fd0)
            (main,puVar10,&lStack48,__libc_csu_init,__libc_csu_fini,SUB168(auVar11 >> 0x40,0),
             &puStack56);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}