
ulong iftruncate_constprop_6(undefined8 param_1)

{
  uint uVar1;
  int *piVar2;
  
  do {
    process_signals();
    uVar1 = func_0x00101c00(1,param_1);
    if (-1 < (int)uVar1) {
      return (ulong)uVar1;
    }
    piVar2 = (int *)func_0x00101a80();
  } while (*piVar2 == 4);
  return (ulong)uVar1;
}

