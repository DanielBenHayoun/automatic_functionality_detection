
void sha224_init_ctx(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0x367cd507c1059ed8;
  param_1[1] = 0xf70e59393070dd17;
  param_1[2] = 0x68581511ffc00b31;
  param_1[3] = 0xbefa4fa464f98fa7;
  return;
}

