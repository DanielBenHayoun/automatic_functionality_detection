
ulong different(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  if (check_chars <= param_3) {
    param_3 = check_chars;
  }
  if (check_chars <= param_4) {
    param_4 = check_chars;
  }
  uVar1 = (ulong)ignore_case;
  if (ignore_case == 0) {
    if (hard_LC_COLLATE != '\0') {
      uVar1 = xmemcoll(param_1,param_3,param_2);
      return uVar1 & 0xffffffffffffff00 | (ulong)((int)uVar1 != 0);
    }
    uVar1 = 1;
    if (param_3 == param_4) {
      uVar1 = func_0x00101900();
      return uVar1 & 0xffffffffffffff00 | (ulong)((int)uVar1 != 0);
    }
  }
  else {
    if (param_3 == param_4) {
      uVar1 = memcasecmp();
      return uVar1 & 0xffffffffffffff00 | (ulong)((int)uVar1 != 0);
    }
  }
  return uVar1;
}

