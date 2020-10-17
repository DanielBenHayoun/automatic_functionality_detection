
ulong _obstack_free(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = *(ulong **)(param_1 + 8);
  lVar3 = param_1;
  while (puVar1 != (ulong *)0x0) {
    if (puVar1 < param_2) {
      puVar2 = (ulong *)*puVar1;
      if (param_2 <= puVar2) {
        *(ulong **)(param_1 + 0x18) = param_2;
        *(ulong **)(param_1 + 0x10) = param_2;
        *(ulong **)(param_1 + 0x20) = puVar2;
        *(ulong **)(param_1 + 8) = puVar1;
        return (ulong)puVar2;
      }
    }
    puVar1 = (ulong *)puVar1[1];
    lVar3 = param_1;
    in_RAX = call_freefun();
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  }
  if (param_2 == (ulong *)0x0) {
    return in_RAX;
  }
  func_0x001019e0();
  plVar5 = *(long **)(lVar3 + 8);
  lVar3 = 0;
  if (plVar5 != (long *)0x0) {
    do {
      lVar4 = *plVar5 - (long)plVar5;
      plVar5 = (long *)plVar5[1];
      lVar3 = lVar3 + lVar4;
    } while (plVar5 != (long *)0x0);
    return lVar3;
  }
  return 0;
}

