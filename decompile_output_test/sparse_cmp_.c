
ulong sparse_cmp_(ulong *param_1,ulong *param_2)

{
  return *param_2 & 0xffffffffffffff00 | (ulong)(*param_1 == *param_2);
}

