
ulong base2lsbf_decode_ctx(uint *param_1,long param_2,long param_3,undefined *param_4,long *param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  *param_5 = 0;
  if (param_3 == 0) {
    return (ulong)(*param_1 & 0xffffff00 | (uint)(*param_1 == 0));
  }
  lVar4 = param_2 + 1;
  do {
    cVar1 = *(char *)(lVar4 + -1);
    if (cVar1 != '\n') {
      if (1 < (byte)(cVar1 - 0x30U)) {
        return 0;
      }
      uVar2 = (uint)(cVar1 == '1') << ((byte)*param_1 & 0x1f) | param_1[1];
      uVar3 = *param_1 + 1;
      *param_1 = uVar3;
      param_1[1] = uVar2;
      if (uVar3 == 8) {
        *param_4 = (char)uVar2;
        param_1[1] = 0;
        param_4 = param_4 + 1;
        *param_5 = *param_5 + 1;
        *param_1 = 0;
      }
    }
    lVar4 = lVar4 + 1;
  } while (param_2 + 1 + param_3 != lVar4);
  return 1;
}

