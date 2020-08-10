
ulong main(uint param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined *puVar9;
  
  set_program_name(*param_2);
  func_0x001014c0(6,&UNK_00105bba);
  func_0x00101370(&UNK_00104c39,&UNK_00104c62);
  func_0x00101350(&UNK_00104c39);
  atexit(close_stdout);
  puVar9 = &UNK_00101603;
  func_0x001014e0(stdout,0,1,0);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_00104bb9,&UNK_00104c39,Version,1,usage,&UNK_00104c7a,0,
             puVar9);
  have_read_stdin = '\0';
  if (optind == param_1) goto code_r0x001016d8;
  if ((int)optind < (int)param_1) {
    lVar6 = (long)(int)optind;
    uVar2 = ~optind;
    puVar7 = param_2 + lVar6;
    uVar8 = 1;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      uVar3 = cksum(uVar1,1);
      uVar8 = uVar8 & uVar3;
    } while (puVar7 != param_2 + (ulong)(uVar2 + param_1) + lVar6 + 1);
    while (have_read_stdin != '\0') {
      iVar4 = rpl_fclose(stdin);
      if (iVar4 != -1) break;
      puVar5 = (uint *)func_0x00101300();
      func_0x001014f0(1,(ulong)*puVar5,&UNK_00105682);
code_r0x001016d8:
      uVar8 = cksum(&UNK_00105682);
    }
  }
  else {
    uVar8 = 1;
  }
  return (ulong)(uVar8 ^ 1) & 0xff;
}

