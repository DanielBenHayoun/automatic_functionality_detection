
undefined8 fdutimensat(undefined8 param_1,uint param_2,long param_3,undefined8 param_4,uint param_5)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if ((int)param_1 < 0) {
    if (param_3 == 0) goto code_r0x00103fc0;
code_r0x00103f6f:
    uVar1 = func_0x00102720((ulong)param_2,param_3,param_4,(ulong)param_5);
  }
  else {
    uVar1 = func_0x00102ab0(param_1,param_4);
    if ((param_3 != 0) && ((int)uVar1 == -1)) {
      piVar2 = (int *)func_0x00102750();
      if (*piVar2 != 0x26) {
        return 0xffffffff;
      }
      goto code_r0x00103f6f;
    }
  }
  if ((int)uVar1 != 1) {
    return uVar1;
  }
code_r0x00103fc0:
  puVar3 = (undefined4 *)func_0x00102750();
  *puVar3 = 9;
  return 0xffffffff;
}

