
long _obstack_memory_used(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar1 = 0;
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  do {
    lVar2 = *plVar3 - (long)plVar3;
    plVar3 = (long *)plVar3[1];
    lVar1 = lVar1 + lVar2;
  } while (plVar3 != (long *)0x0);
  return lVar1;
}

