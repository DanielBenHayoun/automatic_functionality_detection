
ulong z85_length(int param_1)

{
  int iVar1;
  
  param_1 = param_1 * 5;
  iVar1 = param_1 + 3;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return (ulong)(uint)(iVar1 >> 2);
}

