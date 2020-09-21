
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16] dtotimespec(double param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  if (param_1 <= _UNK_001068e0) {
    return ZEXT816(0x8000000000000000);
  }
  if (param_1 < _UNK_001068e8) {
    dVar3 = (param_1 - (double)(long)param_1) * _UNK_001068f0;
    lVar2 = (long)dVar3;
    lVar2 = (ulong)((double)lVar2 < dVar3) + lVar2;
    lVar1 = lVar2 / 1000000000 + (long)param_1;
    lVar2 = lVar2 % 1000000000;
    if (-1 < lVar2) {
      return CONCAT88(lVar2,lVar1);
    }
    return CONCAT88(lVar2 + 1000000000,lVar1 + -1);
  }
  return CONCAT88(999999999,0x7fffffffffffffff);
}

