
void sha512_init_ctx(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  *param_1 = 0x6a09e667f3bcc908;
  param_1[10] = 0;
  param_1[1] = 0xbb67ae8584caa73b;
  param_1[2] = 0x3c6ef372fe94f82b;
  param_1[3] = 0xa54ff53a5f1d36f1;
  param_1[4] = 0x510e527fade682d1;
  param_1[5] = 0x9b05688c2b3e6c1f;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[7] = 0x5be0cd19137e2179;
  return;
}

