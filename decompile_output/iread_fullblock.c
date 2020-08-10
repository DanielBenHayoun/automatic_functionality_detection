
long iread_fullblock(uint param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar2 = 0;
  while( true ) {
    lVar1 = iread((ulong)param_1,param_2,param_3);
    if (lVar1 < 0) {
      return lVar1;
    }
    if (lVar1 == 0) break;
    lVar2 = lVar2 + lVar1;
    param_2 = param_2 + lVar1;
    param_3 = param_3 - lVar1;
    if (param_3 == 0) {
      return lVar2;
    }
  }
  return lVar2;
}

