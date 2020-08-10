
ulong memcmp2(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = param_4;
  if (param_2 <= param_4) {
    uVar1 = param_2;
  }
  uVar1 = func_0x001015e0(param_1,param_3,uVar1);
  if ((int)uVar1 == 0) {
    if (param_2 < param_4) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (ulong)(param_2 >= param_4 && param_2 != param_4);
    }
  }
  return uVar1;
}

