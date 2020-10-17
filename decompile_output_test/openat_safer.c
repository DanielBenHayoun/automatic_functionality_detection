
long openat_safer(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  uint *puVar6;
  long in_FS_OFFSET;
  
  puVar6 = (uint *)0x0;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 & 0x40) != 0) {
    puVar6 = (uint *)(param_4 & 0xffffffff);
  }
  uVar2 = func_0x00101aa0();
  uVar3 = fd_safer((ulong)uVar2);
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
  func_0x00101ab0();
  uVar2 = openat_safer();
  if ((int)uVar2 < 0) {
    return 0;
  }
  lVar4 = func_0x00101d10((ulong)uVar2);
  if (lVar4 != 0) {
    *puVar6 = uVar2;
    return lVar4;
  }
  puVar5 = (undefined4 *)func_0x001019a0();
  uVar1 = *puVar5;
  func_0x00101b50((ulong)uVar2);
  *puVar5 = uVar1;
  return 0;
}

