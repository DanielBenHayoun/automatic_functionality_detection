
void base16_decode_ctx_init(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 6) = 0x1400;
  uVar1 = xmalloc(0x1400);
  *(undefined *)((long)param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

