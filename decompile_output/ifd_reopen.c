
ulong ifd_reopen(uint param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  
  do {
    process_signals();
    uVar1 = fd_reopen((ulong)param_1,param_2,param_3 & 0xffffffff,(ulong)param_4);
    if (-1 < (int)uVar1) {
      return (ulong)uVar1;
    }
    piVar2 = (int *)func_0x00101a80();
  } while (*piVar2 == 4);
  return (ulong)uVar1;
}

