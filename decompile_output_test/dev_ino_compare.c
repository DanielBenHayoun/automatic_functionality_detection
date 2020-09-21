
ulong dev_ino_compare(long *param_1,long *param_2)

{
  if (*param_1 != *param_2) {
    return 0;
  }
  return param_2[1] & 0xffffffffffffff00U | (ulong)(param_1[1] == param_2[1]);
}

