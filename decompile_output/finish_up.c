
ulong finish_up(ulong param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ulong extraout_RDX;
  ulong unaff_RBX;
  uint uVar4;
  long in_FS_OFFSET;
  undefined *puVar5;
  undefined auStack168 [136];
  long lStack32;
  
  cleanup();
  if (status_level != 1) {
    print_stats_part_2();
  }
  puVar5 = auStack168;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar3 = (uint)param_4;
    uVar4 = (uint)param_1;
    if ((interrupt_signal == 0) && (info_signal_count == 0)) break;
    func_0x00101a30(0,caught_signals,auStack168);
    uVar3 = interrupt_signal;
    unaff_RBX = (ulong)interrupt_signal;
    if (info_signal_count != 0) {
      info_signal_count = info_signal_count + -1;
    }
    param_1 = 2;
    param_2 = auStack168;
    func_0x00101a30(2,auStack168,0);
    if (uVar3 == 0) {
      if (status_level != 1) {
        print_stats_part_2();
      }
    }
    else {
      cleanup();
      if (status_level != 1) {
        print_stats_part_2();
      }
      param_1 = (ulong)uVar3;
      func_0x00101a50();
    }
  }
  if (lStack32 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101b90();
    do {
      process_signals();
      uVar1 = fd_reopen((ulong)uVar4,param_2,extraout_RDX & 0xffffffff,(ulong)uVar3,param_5,param_6,
                        unaff_RBX,puVar5);
      if (-1 < (int)uVar1) {
        return (ulong)uVar1;
      }
      piVar2 = (int *)func_0x00101a80();
    } while (*piVar2 == 4);
    return (ulong)uVar1;
  }
  return 0;
}

