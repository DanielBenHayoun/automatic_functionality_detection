
undefined8 clean_state_log_if_needed(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  if ((param_2 < *(long *)(param_1 + 0x40)) ||
     (*(long *)(param_1 + 0x58) <= *(long *)(param_1 + 0x40))) {
    if ((param_2 < *(long *)(param_1 + 0x30)) ||
       (*(long *)(param_1 + 0x58) <= *(long *)(param_1 + 0x30))) goto code_r0x00106adf;
    uVar3 = extend_buffers(param_1,(ulong)((int)param_2 + 1));
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = extend_buffers(param_1,(ulong)((int)param_2 + 1));
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    return uVar3;
  }
code_r0x00106adf:
  if (lVar1 < param_2) {
    func_0x00101a10(*(long *)(param_1 + 0xb8) + 8 + lVar1 * 8,0,(param_2 - lVar1) * 8);
    *(long *)(param_1 + 0xc0) = param_2;
  }
  return 0;
}

