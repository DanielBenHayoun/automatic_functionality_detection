
ulong hash_table_ok(long **param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = *param_1;
  plVar3 = (long *)0x0;
  plVar4 = (long *)0x0;
  while (plVar2 < param_1[1]) {
    if (*plVar2 != 0) {
      lVar1 = plVar2[1];
      plVar4 = (long *)((long)plVar4 + 1);
      while (plVar3 = (long *)((long)plVar3 + 1), lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 8);
      }
    }
    plVar2 = plVar2 + 2;
  }
  if (param_1[3] == plVar4) {
    return (ulong)(param_1[4] == plVar3);
  }
  return 0;
}

