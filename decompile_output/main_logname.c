
undefined8 logname(uint param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined *puVar5;
  undefined8 uStack24;
  
  set_program_name(*param_2);
  func_0x00101400(6,&UNK_00104ee1);
  func_0x001012b0(&UNK_0010477a,&UNK_001047a3);
  func_0x00101290(&UNK_0010477a);
  puVar5 = &UNK_0010150f;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_001046e4,&UNK_00104776,Version,1,usage,&UNK_001047bb,0,
             puVar5);
  if (optind < (int)param_1) {
    uVar3 = quote(param_2[optind]);
    uVar2 = func_0x001012c0(0,&UNK_001047ca,5);
    func_0x00101420(0,0,uVar2,uVar3);
    usage(1);
  }
  else {
    lVar1 = func_0x001013d0();
    if (lVar1 != 0) {
      func_0x00101280(lVar1);
      return 0;
    }
  }
  uVar3 = func_0x001012c0(0,&UNK_001047db,5);
  auVar4 = func_0x00101420(1,0,uVar3);
  uVar3 = uStack24;
  uStack24 = SUB168(auVar4,0);
  (*(code *)PTR___libc_start_main_00306fd0)
            (main,uVar3,&stack0xfffffffffffffff0,__libc_csu_init,__libc_csu_fini,
             SUB168(auVar4 >> 0x40,0),&uStack24);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}