
undefined8 whoami(uint param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined *puVar8;
  undefined8 uStack24;
  
  set_program_name(*param_2);
  func_0x00101450(6,&UNK_00104781);
  func_0x00101300(&UNK_001047fc,&UNK_00104825);
  func_0x001012d0(&UNK_001047fc);
  puVar8 = &UNK_0010155f;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_00104764,&UNK_001047f8,Version,1,usage,&UNK_0010483d,0,
             puVar8);
  lVar2 = (long)(int)optind;
  if (optind == param_1) {
    puVar3 = (uint *)func_0x00101280();
    *puVar3 = 0;
    uVar1 = func_0x001013a0();
    param_2 = (undefined8 *)(ulong)uVar1;
    if ((uVar1 != 0xffffffff) || (*puVar3 == 0)) {
      puVar4 = (undefined8 *)func_0x001012f0(param_2);
      if (puVar4 != (undefined8 *)0x0) {
        func_0x001012c0(*puVar4);
        return 0;
      }
    }
    uVar5 = func_0x00101310(0,&UNK_001049f0,5);
    lVar2 = func_0x00101470(1,(ulong)*puVar3,uVar5,param_2);
  }
  uVar5 = quote(param_2[lVar2]);
  uVar6 = func_0x00101310(0,&UNK_0010484e,5);
  func_0x00101470(0,0,uVar6,uVar5);
  auVar7 = usage(1);
  uVar5 = uStack24;
  uStack24 = SUB168(auVar7,0);
  (*(code *)PTR___libc_start_main_00306fd8)
            (main,uVar5,&stack0xfffffffffffffff0,__libc_csu_init,__libc_csu_fini,
             SUB168(auVar7 >> 0x40,0),&uStack24);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}