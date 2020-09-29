
undefined  [16] nproc(uint param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  ulong uStack40;
  
  uVar6 = 2;
  uVar2 = 0;
  set_program_name(*param_2);
  func_0x00101600(6,&UNK_00104fa0);
  func_0x00101490(&UNK_0010501b,&UNK_00105044);
  func_0x00101460(&UNK_0010501b);
  atexit(close_stdout);
code_r0x0010174c:
  do {
    iVar1 = func_0x001014e0((ulong)param_1,param_2,&UNK_00104fa0,longopts,0);
    if (iVar1 == -1) {
      if (optind == param_1) {
        uVar3 = num_processors(uVar6);
        lVar5 = 1;
        if (uVar2 < uVar3) {
          lVar5 = uVar3 - uVar2;
        }
        func_0x00101610(1,&UNK_0010508e,lVar5);
        return ZEXT816(uStack40) << 0x40;
      }
      uVar6 = quote(param_2[(int)optind]);
      uVar4 = func_0x001014a0(0,&UNK_0010507d,5);
      func_0x00101620(0,0,uVar4,uVar6);
code_r0x00101888:
      usage(1);
code_r0x00101892:
      auVar7 = usage(0);
      uVar2 = uStack40;
      uStack40 = SUB168(auVar7,0);
      (*(code *)PTR___libc_start_main_00306fe0)
                (main,uVar2,&stack0xffffffffffffffe0,__libc_csu_init,__libc_csu_fini,
                 SUB168(auVar7 >> 0x40,0),&uStack40);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar1 == -0x82) goto code_r0x00101892;
    if (iVar1 < -0x81) {
      if (iVar1 != -0x83) goto code_r0x00101888;
      version_etc(stdout,&UNK_00104f84,&UNK_00105017,Version,&UNK_0010505c,0);
      func_0x00101670();
    }
    else {
      if (iVar1 != 0x80) {
        if (iVar1 != 0x81) goto code_r0x00101888;
        func_0x001014a0(0,&UNK_0010506e,5);
        uVar2 = xdectoumax(optarg,0,0xffffffffffffffff,&UNK_00104fa0);
        goto code_r0x0010174c;
      }
    }
    uVar6 = 0;
  } while( true );
}