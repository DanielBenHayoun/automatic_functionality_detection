
undefined8 uptime(uint param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined *puVar4;
  undefined8 uStack24;
  
  set_program_name(*param_2);
  func_0x00101b30(6,&UNK_00108501);
  func_0x00101940(&UNK_00107a38,&UNK_00107a61);
  func_0x001018f0(&UNK_00107a38);
  puVar4 = &UNK_00101caf;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_001078ca,&UNK_00107a34,Version,1,usage,&UNK_00107a95,
             &UNK_00107a85,&UNK_00107a79,0,puVar4);
  if (param_1 == optind) {
    uptime(&UNK_001079b0,1);
  }
  else {
    if (param_1 - optind != 1) {
      uVar1 = quote(param_2[(long)(int)optind + 1]);
      uVar2 = func_0x00101950(0,&UNK_00107aa6,5);
      func_0x00101b80(0,0,uVar2,uVar1);
      auVar3 = usage(1);
      uVar1 = uStack24;
      uStack24 = SUB168(auVar3,0);
      (*(code *)PTR___libc_start_main_00309fe0)
                (main,uVar1,&stack0xfffffffffffffff0,__libc_csu_init,__libc_csu_fini,
                 SUB168(auVar3 >> 0x40,0),&uStack24);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uptime(param_2[(long)(int)optind],0);
  }
  return 0;
}