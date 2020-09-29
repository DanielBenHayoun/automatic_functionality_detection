
void base32_decode_ctx_wrapper(undefined4 *param_1)

{
  base32_decode_ctx(param_1 + 1);
  *param_1 = param_1[1];
  return;
}

