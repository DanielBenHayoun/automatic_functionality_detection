
void i_ring_init(undefined4 *param_1,undefined4 param_2)

{
  *(undefined *)(param_1 + 7) = 1;
  *(undefined8 *)(param_1 + 5) = 0;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = param_2;
  return;
}

