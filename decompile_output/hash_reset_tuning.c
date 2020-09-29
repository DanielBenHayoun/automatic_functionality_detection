
void hash_reset_tuning(undefined8 *param_1)

{
  *(undefined *)(param_1 + 2) = 0;
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x3fb4fdf43f4ccccd;
  return;
}

