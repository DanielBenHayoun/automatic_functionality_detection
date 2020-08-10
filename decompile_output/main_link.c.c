
undefined8 main(uint param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long extraout_RDX;
  undefined *puVar6;
  
  set_program_name(*param_2);
  func_0x001013a0(6,&UNK_00104fc1);
  func_0x00101260(&UNK_001047c3,&UNK_001047ec);
  func_0x00101240(&UNK_001047c3);
  puVar6 = &UNK_001014bd;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_00104744,&UNK_001047bf,Version,1,usage,&UNK_00104804,0,
             puVar6);
  if ((int)param_1 <= optind + 1) {
    if ((int)param_1 <= optind) {
      uVar2 = func_0x00101270(0,&UNK_00104812,5);
      func_0x001013c0(0,0,uVar2);
      goto code_r0x00101560;
    }
    param_2 = (undefined8 *)quote(param_2[optind]);
    puVar6 = &UNK_00104822;
    goto code_r0x001015ed;
  }
  lVar5 = (long)optind;
  if (optind + 2 < (int)param_1) goto code_r0x001015d4;
  iVar1 = func_0x001013f0(param_2[lVar5],param_2[lVar5 + 1]);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    uVar2 = quotearg_n_style(1,4,param_2[optind]);
    uVar3 = quotearg_n_style(0,4,param_2[(long)optind + 1]);
    param_2 = (undefined8 *)func_0x00101270(0,&UNK_0010484c,5);
    puVar4 = (uint *)func_0x00101200();
    func_0x001013c0(1,(ulong)*puVar4,param_2,uVar3,uVar2);
    lVar5 = extraout_RDX;
code_r0x001015d4:
    param_2 = (undefined8 *)quote(param_2[lVar5 + 2]);
    puVar6 = &UNK_0010483b;
code_r0x001015ed:
    uVar2 = func_0x00101270(0,puVar6,5);
    func_0x001013c0(0,0,uVar2,param_2);
code_r0x00101560:
    usage(1);
  } while( true );
}

