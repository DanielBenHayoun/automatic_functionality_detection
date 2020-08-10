
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * hash_initialize(ulong param_1,long param_2,code *param_3,code *param_4,long param_5)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if (param_3 == (code *)0x0) {
    param_3 = raw_hasher;
  }
  if (param_4 == (code *)0x0) {
    param_4 = raw_comparator;
  }
  plVar2 = (long *)func_0x00103888(0x50);
  if (plVar2 == (long *)0x0) {
    return (long *)0;
  }
  if (param_2 == 0) {
    plVar2[5] = 0x11a000;
    cVar1 = check_tuning_isra_0(plVar2 + 5);
    if (cVar1 == '\0') goto code_r0x0010e0a0;
    fVar6 = _UNK_0011a028;
    if ((long)param_1 < 0) goto code_r0x0010e12b;
code_r0x0010e0e1:
    fVar5 = (float)param_1;
code_r0x0010e0ea:
    fVar5 = fVar5 / fVar6;
    if (_UNK_0011a02c <= fVar5) goto code_r0x0010e0a0;
    if (fVar5 < _UNK_0011a030) {
      param_1 = (ulong)fVar5;
    }
    else {
      param_1 = (long)(fVar5 - _UNK_0011a030) ^ 0x8000000000000000;
    }
  }
  else {
    plVar2[5] = param_2;
    cVar1 = check_tuning_isra_0(plVar2 + 5);
    if (cVar1 == '\0') goto code_r0x0010e0a0;
    if (*(char *)(param_2 + 0x10) == '\0') {
      fVar6 = *(float *)(param_2 + 8);
      if (-1 < (long)param_1) goto code_r0x0010e0e1;
code_r0x0010e12b:
      fVar5 = (float)(param_1 >> 1 | (ulong)((uint)param_1 & 1));
      fVar5 = fVar5 + fVar5;
      goto code_r0x0010e0ea;
    }
  }
  uVar3 = next_prime(param_1);
  if ((SUB168(ZEXT816(8) * ZEXT816(uVar3) >> 0x40,0) == 0) && (plVar2[2] = uVar3, uVar3 != 0)) {
    lVar4 = func_0x00103580(uVar3,0x10);
    *plVar2 = lVar4;
    if (lVar4 != 0) {
      plVar2[3] = 0;
      plVar2[4] = 0;
      *(code **)(plVar2 + 6) = param_3;
      *(code **)(plVar2 + 7) = param_4;
      plVar2[1] = uVar3 * 0x10 + lVar4;
      plVar2[8] = param_5;
      plVar2[9] = 0;
      return plVar2;
    }
  }
code_r0x0010e0a0:
  func_0x00103880(plVar2);
  return (long *)0;
}

