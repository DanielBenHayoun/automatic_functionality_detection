
ulong savewd_errno(int *param_1)

{
  if (*param_1 != 4) {
    return 0;
  }
  return (ulong)(uint)param_1[1];
}

