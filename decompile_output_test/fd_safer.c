
ulong fd_safer(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_1;
  if (param_1 < 3) {
    uVar2 = dup_safer();
    uVar4 = (ulong)uVar2;
    puVar3 = (undefined4 *)func_0x001019c0();
    uVar1 = *puVar3;
    func_0x00101b70((ulong)param_1);
    *puVar3 = uVar1;
  }
  return uVar4;
}

