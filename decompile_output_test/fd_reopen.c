
ulong fd_reopen(uint param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  uVar2 = func_0x00102a80(param_2,(ulong)param_3,(ulong)param_4);
  uVar5 = (ulong)uVar2;
  if ((param_1 != uVar2) && (-1 < (int)uVar2)) {
    uVar3 = func_0x00102860((ulong)uVar2,(ulong)param_1);
    uVar5 = (ulong)uVar3;
    puVar4 = (undefined4 *)func_0x00102750();
    uVar1 = *puVar4;
    func_0x00102900((ulong)uVar2);
    *puVar4 = uVar1;
  }
  return uVar5;
}

