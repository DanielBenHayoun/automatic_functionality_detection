
void base64url_decode_ctx_init_wrapper(long param_1)

{
  undefined8 uVar1;
  
  base64_decode_ctx_init(param_1 + 4);
  *(undefined8 *)(param_1 + 0x18) = 0x1400;
  uVar1 = xmalloc(0x1400);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

