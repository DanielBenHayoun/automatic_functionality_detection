
undefined8 buffer_or_output(undefined8 param_1,long *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    func_0x00101640(param_1,stdout);
    return 0;
  }
  uVar2 = func_0x00101570();
  if (*param_3 < uVar2 || *param_3 == uVar2) {
    return 1;
  }
  func_0x00101670(lVar1,param_1,uVar2 + 1);
  *param_2 = *param_2 + uVar2;
  *param_3 = *param_3 - uVar2;
  return 0;
}

