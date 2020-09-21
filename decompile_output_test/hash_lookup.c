
long hash_lookup(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)safe_hasher();
  lVar3 = *plVar2;
  if (lVar3 == 0) {
code_r0x0010670d:
    lVar3 = 0;
  }
  else {
    while (lVar3 != param_2) {
      cVar1 = (**(code **)(param_1 + 0x38))(param_2);
      if (cVar1 != '\0') {
        return *plVar2;
      }
      plVar2 = (long *)plVar2[1];
      if (plVar2 == (long *)0x0) goto code_r0x0010670d;
      lVar3 = *plVar2;
    }
  }
  return lVar3;
}

