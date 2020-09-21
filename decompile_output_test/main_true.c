
undefined8 true(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  
  if (param_1 != 2) {
    return 0;
  }
  set_program_name(*param_2);
  func_0x001012c0(6,&UNK_001042cd);
  func_0x00101180(&UNK_00104348,&UNK_00104371);
  func_0x00101160(&UNK_00104348);
  atexit(close_stdout);
  uVar1 = param_2[1];
  iVar2 = func_0x00101240(uVar1,&UNK_00104389);
  if (iVar2 != 0) {
    iVar2 = func_0x00101240(uVar1,&UNK_00104390);
    if (iVar2 == 0) {
      version_etc(stdout,&UNK_001042c4,&UNK_00104344,Version,&UNK_0010439a,0);
    }
    return 0;
  }
  usage(0);
  (*(code *)PTR___libc_start_main_00305fe0)
            (main,unaff_RBX,register0x00000020,__libc_csu_init,__libc_csu_fini,extraout_RDX,
             &stack0xfffffffffffffff8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}