
undefined8 optimize_subexps(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  byte bVar5;
  
  if (*(char *)(param_2 + 0x30) == '\x04') {
    if (*(long *)(param_1 + 0xe0) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xe0) + (long)*(int *)(param_2 + 0x28) * 8);
      *(undefined8 *)(param_2 + 0x28) = uVar4;
      *(ulong *)(param_1 + 0xa0) = *(ulong *)(param_1 + 0xa0) | (long)(1 << ((byte)uVar4 & 0x1f));
      return 0;
    }
  }
  else {
    if (((*(char *)(param_2 + 0x30) == '\x11') && (lVar1 = *(long *)(param_2 + 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x30) == '\x11')) {
      lVar2 = *(long *)(lVar1 + 0x28);
      plVar3 = *(long **)(lVar1 + 8);
      *(long **)(param_2 + 8) = plVar3;
      if (plVar3 != (long *)0x0) {
        *plVar3 = param_2;
      }
      *(undefined8 *)(*(long *)(param_1 + 0xe0) + lVar2 * 8) =
           *(undefined8 *)(*(long *)(param_1 + 0xe0) + *(long *)(param_2 + 0x28) * 8);
      if (lVar2 < 0x40) {
        bVar5 = (byte)lVar2 & 0x3f;
        *(ulong *)(param_1 + 0xa0) =
             *(ulong *)(param_1 + 0xa0) & (-2 << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
      }
    }
  }
  return 0;
}

