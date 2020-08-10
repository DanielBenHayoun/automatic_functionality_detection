
void base2_decode_ctx_init(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[3] = 0x1400;
  uVar1 = xmalloc(0x1400);
  *param_1 = 0;
  param_1[2] = uVar1;
  return;
}

