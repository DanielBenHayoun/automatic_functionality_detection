
ulong mkstemp_safer(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  uVar2 = func_0x00101b00();
  uVar5 = (ulong)uVar2;
  if (uVar2 < 3) {
    uVar3 = dup_safer();
    uVar5 = (ulong)uVar3;
    puVar4 = (undefined4 *)func_0x001018a0();
    uVar1 = *puVar4;
    func_0x00101a20((ulong)uVar2);
    *puVar4 = uVar1;
  }
  return uVar5;
}

