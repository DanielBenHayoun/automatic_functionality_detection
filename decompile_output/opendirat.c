
long opendirat(undefined8 param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  uVar2 = openat_safer(param_1,param_2,(ulong)(param_3 | 0x90900));
  if ((int)uVar2 < 0) {
    return 0;
  }
  lVar3 = func_0x00101d10((ulong)uVar2);
  if (lVar3 != 0) {
    *param_4 = uVar2;
    return lVar3;
  }
  puVar4 = (undefined4 *)func_0x001019a0();
  uVar1 = *puVar4;
  func_0x00101b50((ulong)uVar2);
  *puVar4 = uVar1;
  return 0;
}

