
ulong compare_ranges(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 <= *param_1) {
    return (ulong)(*param_1 != iVar1 && iVar1 <= *param_1);
  }
  return 0xffffffff;
}

