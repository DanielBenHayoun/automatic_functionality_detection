
undefined8 authenticate(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack24 [8];
  undefined uStack16;
  uint uStack12;
  
  uStack16 = 0;
  iVar1 = func_0x00400550(param_2,sneaky,sneaky);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uStack12 = func_0x00400560(param_1,0);
    func_0x00400530((ulong)uStack12,auStack24,8,auStack24);
    iVar1 = func_0x00400550(param_2,auStack24,auStack24);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

