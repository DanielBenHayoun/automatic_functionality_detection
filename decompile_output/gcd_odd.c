
ulong gcd_odd(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_2;
  if ((param_2 & 1) != 0) {
    uVar1 = param_1;
    param_1 = param_2;
  }
  uVar3 = param_1 >> 1;
  if (uVar1 != 0) {
    while( true ) {
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 >> 1;
      } while ((uVar2 & 1) == 0);
      uVar1 = (uVar2 >> 1) - uVar3;
      if (uVar1 == 0) break;
      uVar2 = (long)uVar1 >> 0x3f;
      uVar3 = uVar3 + (uVar1 & uVar2);
      uVar1 = (uVar1 ^ uVar2) - uVar2;
    }
    return uVar2 | 1;
  }
  return param_1;
}

