
ulong randperm_bound(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2 - 1;
  if (uVar1 != 0) {
    lVar2 = 0;
    do {
      lVar2 = lVar2 + 1;
      uVar1 = uVar1 >> 1;
    } while (uVar1 != 0);
    uVar1 = param_1 * lVar2 + 7U >> 3;
  }
  return uVar1;
}

