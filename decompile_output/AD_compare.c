
ulong AD_compare(ulong *param_1,ulong *param_2)

{
  if (param_1[1] != param_2[1]) {
    return 0;
  }
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}

