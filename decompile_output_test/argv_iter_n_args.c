
long argv_iter_n_args(long *param_1)

{
  if (*param_1 != 0) {
    return param_1[1];
  }
  return param_1[5] - param_1[4] >> 3;
}

