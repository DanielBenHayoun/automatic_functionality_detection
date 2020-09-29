
long freadptr(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(ulong *)(param_1 + 0x28) < *(ulong *)(param_1 + 0x20) ||
      *(ulong *)(param_1 + 0x28) == *(ulong *)(param_1 + 0x20)) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10) - lVar1;
    if (lVar2 != 0) {
      *param_2 = lVar2;
      return lVar1;
    }
  }
  return 0;
}

