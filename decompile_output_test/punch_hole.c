
ulong punch_hole(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = func_0x00102aa0(param_1,3,param_2,param_3);
  if ((int)uVar1 < 0) {
    piVar2 = (int *)func_0x00102770();
    if ((*piVar2 == 0x26) || (*piVar2 == 0x5f)) {
      return 0;
    }
  }
  return (ulong)uVar1;
}

