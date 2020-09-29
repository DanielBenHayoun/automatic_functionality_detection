
ulong nextarg(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = args;
  uVar3 = 0;
  if (*args != 0) {
    uVar3 = func_0x001018b0(*args,param_1);
    uVar1 = (ulong)((int)uVar3 == 0);
    uVar3 = uVar3 & 0xffffffffffffff00 | uVar1;
    args = plVar2 + uVar1;
  }
  return uVar3;
}

