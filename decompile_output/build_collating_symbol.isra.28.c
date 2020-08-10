
undefined8 build_collating_symbol_isra_28(long param_1,byte *param_2)

{
  ulong *puVar1;
  long lVar2;
  
  lVar2 = func_0x00101980(param_2);
  if (lVar2 == 1) {
    puVar1 = (ulong *)(param_1 + (ulong)((uint)(*param_2 >> 3) & 0x18));
    *puVar1 = *puVar1 | 1 << (*param_2 & 0x3f);
    return 0;
  }
  return 3;
}

