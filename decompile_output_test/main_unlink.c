
undefined8 unlink(uint param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_RDX;
  undefined auVar6 [16];
  undefined *puVar7;
  undefined8 uStack24;
  
  set_program_name(*param_2);
  func_0x001013c0(6,&UNK_00104f41);
  func_0x00101280(&UNK_00104785,&UNK_001047ae);
  func_0x00101260(&UNK_00104785);
  puVar7 = &UNK_001014cf;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_00104704,&UNK_00104781,Version,1,usage,&UNK_001047c6,0,
             puVar7);
  if (optind < (int)param_1) {
    lVar5 = (long)optind;
    if (optind + 1 < (int)param_1) goto code_r0x001015b0;
    iVar1 = func_0x00101220(param_2[lVar5]);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = func_0x00101290(0,&UNK_001047d4,5);
    func_0x001013e0(0,0,uVar2);
    usage(1);
  }
  uVar2 = quotearg_style(4,param_2[optind]);
  param_2 = (undefined8 *)func_0x00101290(0,&UNK_001047f5,5);
  puVar3 = (uint *)func_0x00101210();
  func_0x001013e0(1,(ulong)*puVar3,param_2,uVar2);
  lVar5 = extraout_RDX;
code_r0x001015b0:
  uVar2 = quote(param_2[lVar5 + 1]);
  uVar4 = func_0x00101290(0,&UNK_001047e4,5);
  func_0x001013e0(0,0,uVar4,uVar2);
  auVar6 = usage(1);
  uVar2 = uStack24;
  uStack24 = SUB168(auVar6,0);
  (*(code *)PTR___libc_start_main_00306fc8)
            (main,uVar2,&stack0xfffffffffffffff0,__libc_csu_init,__libc_csu_fini,
             SUB168(auVar6 >> 0x40,0),&uStack24);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}