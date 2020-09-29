
ulong memcoll0(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  if (param_2 == param_4) {
    iVar1 = func_0x00101900(param_1,param_3,param_2);
    if (iVar1 == 0) {
      puVar5 = (undefined4 *)func_0x00101790();
      *puVar5 = 0;
      return 0;
    }
  }
  puVar5 = (undefined4 *)func_0x00101790(param_1,param_2,param_3);
  while( true ) {
    *puVar5 = 0;
    uVar4 = func_0x001019a0(param_1,param_3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar2 = func_0x00101820(param_1);
    lVar3 = func_0x00101820(param_3);
    param_1 = param_1 + lVar2 + 1;
    param_3 = param_3 + lVar3 + 1;
    param_4 = param_4 - (lVar3 + 1);
    param_2 = param_2 - (lVar2 + 1);
    if (param_2 == 0) break;
    if (param_4 == 0) {
      return 1;
    }
  }
  return (ulong)-(uint)(param_4 != 0);
}

