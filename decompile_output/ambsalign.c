
long ambsalign(undefined8 param_1,ulong *param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *param_2;
  uVar4 = uVar2;
  lVar5 = 0;
  while( true ) {
    uVar1 = uVar4 + 1;
    lVar3 = func_0x001036e0(lVar5,uVar1);
    if (lVar3 == 0) {
      func_0x00103880(lVar5);
      return 0;
    }
    *param_2 = uVar2;
    uVar4 = mbsalign(param_1,lVar3,uVar1,param_2,(ulong)param_3,(ulong)param_4);
    if (uVar4 == 0xffffffffffffffff) break;
    lVar5 = lVar3;
    if (uVar4 < uVar1) {
      return lVar3;
    }
  }
  func_0x00103880(lVar3);
  return 0;
}

