
undefined8 hostid(uint param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined *puVar5;
  undefined8 uStack24;
  
  set_program_name(*param_2);
  func_0x001013c0(6,&UNK_00104e81);
  func_0x00101280(&UNK_001046e5,&UNK_0010470e);
  func_0x00101260(&UNK_001046e5);
  puVar5 = &UNK_001014cf;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_00104664,&UNK_001046e1,Version,1,usage,&UNK_00104726,0,
             puVar5);
  if ((int)param_1 <= optind) {
    uVar1 = func_0x00101220();
    func_0x001013d0(1,&UNK_00104744,(ulong)uVar1);
    return 0;
  }
  uVar2 = quote(param_2[optind]);
  uVar3 = func_0x00101290(0,&UNK_00104733,5);
  func_0x001013e0(0,0,uVar3,uVar2);
  auVar4 = usage(1);
  uVar2 = uStack24;
  uStack24 = SUB168(auVar4,0);
  (*(code *)PTR___libc_start_main_00306fc8)
            (main,uVar2,&stack0xfffffffffffffff0,__libc_csu_init,__libc_csu_fini,
             SUB168(auVar4 >> 0x40,0),&uStack24);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}