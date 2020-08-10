
long openat_restore_fail(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  uint *puVar6;
  ulong extraout_RDX;
  long in_FS_OFFSET;
  
  uVar3 = func_0x00101940(0,&UNK_0010b2c8,5);
  func_0x00101ba0((ulong)exit_failure,param_1 & 0xffffffff,uVar3);
  func_0x00101890();
  puVar6 = (uint *)0x0;
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if ((extraout_RDX & 0x40) != 0) {
    puVar6 = (uint *)(param_4 & 0xffffffff);
  }
  uVar2 = func_0x00101980();
  uVar3 = fd_safer((ulong)uVar2);
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
  func_0x001019a0();
  uVar2 = openat_safer();
  if ((int)uVar2 < 0) {
    return 0;
  }
  lVar4 = func_0x00101bf0((ulong)uVar2);
  if (lVar4 != 0) {
    *puVar6 = uVar2;
    return lVar4;
  }
  puVar5 = (undefined4 *)func_0x001018a0();
  uVar1 = *puVar5;
  func_0x00101a30((ulong)uVar2);
  *puVar5 = uVar1;
  return 0;
}

