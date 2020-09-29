
ulong memcasecmp(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  plVar2 = (long *)func_0x00101740();
  lVar3 = 0;
  do {
    uVar1 = *(int *)(*plVar2 + (ulong)*(byte *)(param_1 + lVar3) * 4) -
            *(int *)(*plVar2 + (ulong)*(byte *)(param_2 + lVar3) * 4);
    _uVar1 = (ulong)uVar1;
    if (uVar1 != 0) {
      return _uVar1;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != param_3);
  return _uVar1;
}

