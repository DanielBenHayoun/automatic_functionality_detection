
undefined8
set_file_security_ctx(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (uint *)func_0x001025a0();
  if ((*(char *)(param_4 + 0x23) != '\0') && (*(char *)(param_4 + 0x26) == '\0')) {
    *puVar1 = 0x5f;
    return 0;
  }
  *puVar1 = 0x5f;
  uVar2 = quotearg_n_style(0,4,param_1);
  uVar3 = func_0x00102730(0,&UNK_00115f30,5);
  func_0x00102b10(0,(ulong)*puVar1,uVar3,uVar2);
  return 0;
}

