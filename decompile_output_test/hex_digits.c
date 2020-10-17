
ulong hex_digits(byte *param_1)

{
  ulong uVar1;
  long *plVar2;
  byte *pbVar3;
  
  uVar1 = digest_hex_bytes;
  pbVar3 = param_1;
  if (digest_hex_bytes != 0) {
    plVar2 = (long *)func_0x001018e0();
    do {
      if ((*(byte *)(*plVar2 + 1 + (ulong)*pbVar3 * 2) & 0x10) == 0) {
        return 0;
      }
      pbVar3 = pbVar3 + 1;
    } while ((uint)((int)pbVar3 - (int)param_1) < uVar1);
  }
  return (ulong)pbVar3 & 0xffffffffffffff00 | (ulong)(*pbVar3 == 0);
}

