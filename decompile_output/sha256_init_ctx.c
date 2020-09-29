
void sha256_init_ctx(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0xbb67ae856a09e667;
  param_1[1] = 0xa54ff53a3c6ef372;
  param_1[2] = 0x9b05688c510e527f;
  param_1[3] = 0x5be0cd191f83d9ab;
  return;
}

