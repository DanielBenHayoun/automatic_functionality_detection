
undefined8 users(uint param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 uStack24;
  
  set_program_name(*param_2);
  func_0x00101600(6,&UNK_00105561);
  func_0x00101480(&UNK_00104d9e,&UNK_00104dc7);
  func_0x00101450(&UNK_00104d9e);
  atexit(close_stdout);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_00104ce4,&UNK_00104d9a,Version,1,usage,&UNK_00104def,
             &UNK_00104ddf,0);
  if (param_1 == optind) {
    users(&UNK_00104d16,1);
  }
  else {
    if (param_1 - optind != 1) {
      uVar1 = quote(param_2[(long)(int)optind + 1]);
      uVar2 = func_0x00101490(0,&UNK_00104e00,5);
      func_0x00101630(0,0,uVar2,uVar1);
      auVar3 = usage(1);
      uVar1 = uStack24;
      uStack24 = SUB168(auVar3,0);
      (*(code *)PTR___libc_start_main_00306fc8)
                (main,uVar1,&stack0xfffffffffffffff0,__libc_csu_init,__libc_csu_fini,
                 SUB168(auVar3 >> 0x40,0),&uStack24);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    users(param_2[(long)(int)optind],0);
  }
  return 0;
}