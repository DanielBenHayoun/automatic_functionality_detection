
long freadahead(uint *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if ((*(ulong *)(param_1 + 10) < *(ulong *)(param_1 + 8) ||
       *(ulong *)(param_1 + 10) == *(ulong *)(param_1 + 8)) &&
     (lVar1 = *(long *)(param_1 + 4) - *(long *)(param_1 + 2), (*param_1 & 0x100) != 0)) {
    lVar1 = lVar1 + (*(long *)(param_1 + 0x16) - *(long *)(param_1 + 0x12));
  }
  return lVar1;
}

