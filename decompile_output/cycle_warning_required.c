
ulong cycle_warning_required(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = 1;
  uVar2 = *(uint *)(param_1 + 0x48) & 0x11;
  if ((uVar2 != 0x10) && (uVar1 = 0, uVar2 == 0x11)) {
    return (ulong)(*(long *)(param_2 + 0x58) != 0);
  }
  return uVar1;
}

