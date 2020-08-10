
void chopt_init(undefined4 *param_1)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined *)(param_1 + 4) = 1;
  *(undefined *)(param_1 + 1) = 0;
  *(undefined *)((long)param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

