
ulong isz85(char param_1)

{
  ulong uVar1;
  
  if (param_1 < '[') {
    if (('@' < param_1) || ((byte)(param_1 - 0x30U) < 10)) {
      return 1;
    }
  }
  else {
    if ((byte)(param_1 + 0x9fU) < 0x1a) {
      return 1;
    }
  }
  uVar1 = func_0x00101690(&UNK_00107324,(ulong)(uint)(int)param_1);
  return uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
}

