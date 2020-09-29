
ulong * _obstack_newchunk(ulong **param_1,ulong param_2)

{
  ulong *puVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong **ppuVar6;
  
  puVar4 = (ulong *)((long)param_1[3] - (long)param_1[2]);
  puVar1 = param_1[1];
  puVar5 = (ulong *)(param_2 + (long)puVar4 + (long)param_1[6]);
  puVar3 = (ulong *)((long)puVar5 + ((ulong)puVar4 >> 3) + 100);
  if (puVar5 <= *param_1) {
    puVar5 = *param_1;
  }
  if (puVar3 <= puVar5) {
    puVar3 = puVar5;
  }
  ppuVar6 = param_1;
  if ((CARRY8(param_2,(ulong)puVar4) == false) &&
     (CARRY8(param_2 + (long)puVar4,(ulong)param_1[6]) == false)) {
    puVar5 = puVar3;
    ppuVar2 = (ulong **)call_chunkfun();
    if (ppuVar2 != (ulong **)0x0) {
      *(ulong ***)(param_1 + 1) = ppuVar2;
      ppuVar2[1] = puVar1;
      param_1[4] = (ulong *)((long)ppuVar2 + (long)puVar3);
      *ppuVar2 = (ulong *)((long)ppuVar2 + (long)puVar3);
      puVar5 = (ulong *)((long)((long)ppuVar2 + 0x10) + (long)param_1[6] & ~(ulong)param_1[6]);
      puVar3 = (ulong *)func_0x00101bf0(puVar5,param_1[2],puVar4);
      if ((*(byte *)(param_1 + 10) & 2) == 0) {
        puVar3 = (ulong *)(~(ulong)param_1[6] & (long)((long)puVar1 + 0x10U) + (long)param_1[6]);
        if (param_1[2] == puVar3) {
          ppuVar2[1] = (ulong *)puVar1[1];
          puVar3 = (ulong *)call_freefun(param_1,puVar1);
        }
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfd;
      param_1[2] = puVar5;
      param_1[3] = (ulong *)((long)puVar4 + (long)puVar5);
      return puVar3;
    }
  }
  (*obstack_alloc_failed_handler)();
  puVar3 = ppuVar6[1];
  if (puVar3 != (ulong *)0x0) {
    while ((puVar5 <= puVar3 || ((ulong *)*puVar3 < puVar5))) {
      puVar3 = (ulong *)puVar3[1];
      if (puVar3 == (ulong *)0x0) {
        return (ulong *)0;
      }
    }
    return (ulong *)1;
  }
  return puVar3;
}

