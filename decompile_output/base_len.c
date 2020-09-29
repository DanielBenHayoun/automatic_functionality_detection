
ulong base_len(long param_1)

{
  ulong uVar1;
  
  uVar1 = func_0x00101640();
  if ((1 < uVar1) && (*(char *)(param_1 + -1 + uVar1) == '/')) {
    do {
      uVar1 = uVar1 - 1;
      if (uVar1 == 1) {
        return 1;
      }
    } while (*(char *)(param_1 + -1 + uVar1) == '/');
    return uVar1;
  }
  return uVar1;
}

