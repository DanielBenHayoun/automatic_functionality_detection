
undefined8 false(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  
  if (param_1 != 2) {
    return 1;
  }
  set_program_name(*param_2);
  func_0x001012c0(6,&UNK_001042ce);
  func_0x00101180(&UNK_00104349,&UNK_00104372);
  func_0x00101160(&UNK_00104349);
  atexit(close_stdout);
  uVar1 = param_2[1];
  iVar2 = func_0x00101240(uVar1,&UNK_0010438a);
  if (iVar2 != 0) {
    iVar2 = func_0x00101240(uVar1,&UNK_00104391);
    if (iVar2 == 0) {
      version_etc(stdout,&UNK_001042c4,&UNK_00104345,Version,&UNK_0010439b,0);
    }
    return 1;
  }
  usage(1);
  (*(code *)PTR___libc_start_main_00305fe0)
            (main,unaff_RBX,register0x00000020,__libc_csu_init,__libc_csu_fini,extraout_RDX,
             &stack0xfffffffffffffff8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}