
ulong mkostemp_safer(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = func_0x001019e0();
  uVar5 = (ulong)uVar2;
  uVar4 = uVar5;
  if (uVar2 < 3) {
    uVar2 = dup_safer_flag(uVar5,param_2 & 0xffffffff);
    uVar4 = (ulong)uVar2;
    puVar3 = (undefined4 *)func_0x001018a0();
    uVar1 = *puVar3;
    func_0x00101a20(uVar5);
    *puVar3 = uVar1;
  }
  return uVar4;
}

