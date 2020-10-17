
ulong test(int param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 uStack24;
  
  set_program_name(*param_2);
  func_0x00101540(6,&UNK_00107ee7);
  func_0x001013b0(&UNK_00107eec,&UNK_00107f15);
  func_0x00101390(&UNK_00107eec);
  exit_failure = 2;
  atexit(close_stdout);
  pos = 1;
  argv = param_2;
  argc = param_1;
  if (param_1 < 2) {
    uVar2 = 1;
  }
  else {
    bVar1 = posixtest((ulong)(param_1 - 1));
    if (pos != argc) {
      uVar3 = quote(argv[(long)pos & 0xffffffff]);
      uVar4 = func_0x001013c0(0,&UNK_00107f2d,5);
      auVar5 = test_syntax_error(uVar4,uVar3);
      uVar3 = uStack24;
      uStack24 = SUB168(auVar5,0);
      (*(code *)PTR___libc_start_main_0030afc8)
                (main,uVar3,&stack0xfffffffffffffff0,__libc_csu_init,__libc_csu_fini,
                 SUB168(auVar5 >> 0x40,0),&uStack24);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar2 = (ulong)(bVar1 ^ 1);
  }
  return uVar2;
}