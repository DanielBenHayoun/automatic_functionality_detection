
ulong triple_compare_ino_str(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    uVar1 = func_0x00103590(*param_1,*param_2);
    return uVar1 & 0xffffffffffffff00 | (ulong)((int)uVar1 == 0);
  }
  return 0;
}

