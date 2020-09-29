
ulong base32_encode_alloc(undefined8 param_1,ulong param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((param_2 + 4) / 5) * 8;
  uVar3 = lVar1 + 1;
  if (uVar3 < param_2) {
    *param_3 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = func_0x00101780(uVar3);
    *param_3 = lVar2;
    if (lVar2 != 0) {
      base32_encode(param_1,param_2,lVar2,uVar3);
      return lVar1;
    }
  }
  return uVar3;
}

