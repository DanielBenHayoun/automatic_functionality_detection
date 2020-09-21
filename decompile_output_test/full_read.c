
long full_read(uint param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar1 = safe_read((ulong)param_1,param_2,param_3);
      if (lVar1 == -1) {
        return lVar3;
      }
      if (lVar1 == 0) {
        puVar2 = (undefined4 *)func_0x00101520();
        *puVar2 = 0;
        return lVar3;
      }
      lVar3 = lVar3 + lVar1;
      param_2 = param_2 + lVar1;
      param_3 = param_3 - lVar1;
    } while (param_3 != 0);
  }
  return lVar3;
}

