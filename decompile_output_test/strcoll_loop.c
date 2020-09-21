
ulong strcoll_loop(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined4 *)func_0x001014b0();
  while( true ) {
    *puVar1 = 0;
    uVar4 = func_0x00101670(param_1,param_3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar2 = func_0x00101550(param_1);
    lVar3 = func_0x00101550(param_3);
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

