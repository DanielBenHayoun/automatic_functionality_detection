
void md5_init_ctx(undefined8 *param_1)

{
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = 0xefcdab8967452301;
  param_1[1] = 0x1032547698badcfe;
  return;
}

