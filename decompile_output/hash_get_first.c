
long hash_get_first(long **param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1[4] == (long *)0x0) {
    return 0;
  }
  plVar3 = *param_1;
  if (plVar3 < param_1[1]) {
    if (*plVar3 != 0) {
      return *plVar3;
    }
    while (plVar3 = plVar3 + 2, plVar3 < param_1[1]) {
      if (*plVar3 != 0) {
        return *plVar3;
      }
    }
  }
  func_0x00103290();
  plVar2 = (long *)safe_hasher();
  lVar1 = *plVar2;
  plVar3 = (long *)plVar2[1];
  while (lVar1 != param_2) {
    if (plVar3 == (long *)0x0) goto code_r0x0010de2e;
    lVar1 = *plVar3;
    plVar3 = (long *)plVar3[1];
  }
  if (plVar3 != (long *)0x0) {
    return *plVar3;
  }
code_r0x0010de2e:
  do {
    plVar2 = plVar2 + 2;
    if (param_1[1] <= plVar2) {
      return 0;
    }
  } while (*plVar2 == 0);
  return *plVar2;
}

