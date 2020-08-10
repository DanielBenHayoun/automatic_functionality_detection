
undefined  [16] parse_old_offset(char *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack24;
  
  if (*param_1 != '\0') {
    if (*param_1 == '+') {
      param_1 = param_1 + 1;
    }
    lVar1 = func_0x00101910(param_1,0x2e);
    uVar2 = 10;
    if ((lVar1 == 0) && (uVar2 = 8, *param_1 == '0')) {
      uVar2 = (ulong)((uint)((param_1[1] & 0xdfU) == 0x58) * 8 + 8);
    }
    uVar2 = xstrtoumax(param_1,0,uVar2,param_2,&UNK_0010acd5);
    return CONCAT88(uStack24,uVar2 & 0xffffffffffffff00 | (ulong)((int)uVar2 == 0));
  }
  return ZEXT116(0) << 0x40;
}

