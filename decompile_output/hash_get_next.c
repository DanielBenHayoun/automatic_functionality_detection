
long hash_get_next(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)safe_hasher();
  lVar1 = *plVar3;
  plVar2 = (long *)plVar3[1];
  while (lVar1 != param_2) {
    if (plVar2 == (long *)0x0) goto code_r0x0010de2e;
    lVar1 = *plVar2;
    plVar2 = (long *)plVar2[1];
  }
  if (plVar2 != (long *)0x0) {
    return *plVar2;
  }
code_r0x0010de2e:
  do {
    plVar3 = plVar3 + 2;
    if (*(long **)(param_1 + 8) <= plVar3) {
      return 0;
    }
  } while (*plVar3 == 0);
  return *plVar3;
}

