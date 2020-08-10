
undefined8 blake2b_init_param(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  param_1[8] = 0;
  param_1[0x1e] = 0;
  uVar3 = 0x6a09e667f3bcc908;
  uVar2 = (ulong)(((int)param_1 - (int)(undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8)) +
                  0xf8U >> 3);
  puVar4 = (undefined8 *)((ulong)(param_1 + 9) & 0xfffffffffffffff8);
  while (uVar2 != 0) {
    uVar2 = uVar2 - 1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_1 = 0x6a09e667f3bcc908;
  param_1[1] = 0xbb67ae8584caa73b;
  param_1[2] = 0x3c6ef372fe94f82b;
  param_1[3] = 0xa54ff53a5f1d36f1;
  param_1[4] = 0x510e527fade682d1;
  param_1[5] = 0x9b05688c2b3e6c1f;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[7] = 0x5be0cd19137e2179;
  lVar1 = 0;
  while( true ) {
    param_1[lVar1] = uVar3 ^ *(ulong *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
    if (lVar1 == 8) break;
    uVar3 = param_1[lVar1];
  }
  param_1[0x1d] = (ulong)*param_2;
  return 0;
}

