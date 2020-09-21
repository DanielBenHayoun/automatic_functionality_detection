
undefined  [16] mkfifo(uint param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined auVar11 [16];
  undefined8 uStack56;
  
  set_program_name(*param_2);
  func_0x001014b0(6,&UNK_001057e1);
  func_0x00101340(&UNK_00104da5,&UNK_00104dce);
  func_0x00101320(&UNK_00104da5);
  atexit(close_stdout);
  lVar9 = 0;
  do {
    while( true ) {
      iVar1 = func_0x00101390((ulong)param_1,param_2,&UNK_00104df6,longopts,0);
      if (iVar1 == -1) {
        if (optind != param_1) {
          if (lVar9 == 0) {
            uVar10 = 0x1b6;
          }
          else {
            lVar3 = mode_compile(lVar9);
            if (lVar3 == 0) goto code_r0x00101844;
            uVar2 = func_0x00101420(0);
            func_0x00101420((ulong)uVar2);
            uVar2 = mode_adjust(0x1b6,0,(ulong)uVar2,lVar3,0);
            uVar10 = (ulong)uVar2;
            func_0x001012c0(lVar3);
            if ((uVar2 & 0xfffffe00) != 0) goto code_r0x00101820;
          }
          uVar7 = 0;
          goto joined_r0x00101716;
        }
        uVar7 = func_0x00101350(0,&UNK_00104dfa,5);
        func_0x001014e0(0,0,uVar7);
        goto code_r0x0010180f;
      }
      if (iVar1 == -0x82) goto code_r0x00101819;
      if (-0x82 < iVar1) break;
      if (iVar1 != -0x83) goto code_r0x0010180f;
      version_etc(stdout,&UNK_00104d24,&UNK_00104da1,Version,&UNK_00104de6,0);
      func_0x00101510();
code_r0x00101670:
      if (optarg != 0) {
        uVar7 = func_0x00101350(0,&UNK_00105160,5);
        func_0x001014e0(0,0,uVar7);
      }
    }
    if (iVar1 == 0x5a) goto code_r0x00101670;
    lVar9 = optarg;
  } while (iVar1 == 0x6d);
code_r0x0010180f:
  usage(1);
code_r0x00101819:
  usage(0);
code_r0x00101820:
  uVar7 = func_0x00101350(0,&UNK_001051b0,5);
  func_0x001014e0(1,0,uVar7);
code_r0x00101844:
  uVar7 = func_0x00101350(0,&UNK_00104e0a,5);
  auVar11 = func_0x001014e0(1,0,uVar7);
  uVar7 = uStack56;
  uStack56 = SUB168(auVar11,0);
  (*(code *)PTR___libc_start_main_00306fe0)
            (main,uVar7,&stack0xffffffffffffffd0,__libc_csu_init,__libc_csu_fini,
             SUB168(auVar11 >> 0x40,0),&uStack56);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
joined_r0x00101716:
  if ((int)param_1 <= (int)optind) {
    return CONCAT88(uStack56,uVar7);
  }
  iVar1 = func_0x00101410(param_2[(int)optind],uVar10);
  if (iVar1 == 0) {
    if ((lVar9 != 0) && (iVar1 = func_0x001014d0(param_2[(int)optind]), iVar1 != 0)) {
      uVar4 = quotearg_style(4,param_2[(int)optind]);
      puVar8 = &UNK_00104e2d;
      goto code_r0x00101786;
    }
  }
  else {
    uVar4 = quotearg_style(4,param_2[(int)optind]);
    puVar8 = &UNK_00104e17;
code_r0x00101786:
    uVar5 = func_0x00101350(0,puVar8,5);
    puVar6 = (uint *)func_0x001012e0();
    uVar7 = 1;
    func_0x001014e0(0,(ulong)*puVar6,uVar5,uVar4);
  }
  optind = optind + 1;
  goto joined_r0x00101716;
}