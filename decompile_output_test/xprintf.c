
ulong xprintf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  undefined4 uStack216;
  undefined4 uStack212;
  undefined *puStack208;
  undefined *puStack200;
  long lStack192;
  undefined auStack184 [8];
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined8 uStack144;
  undefined4 uStack136;
  undefined4 uStack120;
  undefined4 uStack104;
  undefined4 uStack88;
  undefined4 uStack72;
  undefined4 uStack56;
  undefined4 uStack40;
  undefined4 uStack24;
  
  if (in_AL != '\0') {
    uStack136 = param_1;
    uStack120 = param_2;
    uStack104 = param_3;
    uStack88 = param_4;
    uStack72 = param_5;
    uStack56 = param_6;
    uStack40 = param_7;
    uStack24 = param_8;
  }
  lStack192 = *(long *)(in_FS_OFFSET + 0x28);
  puStack208 = &stack0x00000008;
  puStack200 = auStack184;
  uStack216 = 8;
  uStack212 = 0x30;
  uStack176 = param_10;
  uStack168 = param_11;
  uStack160 = param_12;
  uStack152 = param_13;
  uStack144 = param_14;
  uVar3 = xvprintf(param_9,&uStack216);
  if (lStack192 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
  func_0x00101520();
  uVar1 = rpl_vfprintf();
  if ((int)uVar1 < 0) {
    iVar2 = func_0x001014a0(param_9);
    if (iVar2 == 0) {
      uVar3 = func_0x001014f0(0,&UNK_00109820,5);
      puVar4 = (uint *)func_0x00101450();
      func_0x001016b0((ulong)exit_failure,(ulong)*puVar4,uVar3);
    }
  }
  return (ulong)uVar1;
}

