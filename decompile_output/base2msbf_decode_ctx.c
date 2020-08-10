
ulong base2msbf_decode_ctx(uint *param_1,long param_2,long param_3,undefined *param_4,long *param_5)

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
      if (*param_1 == 0) {
        *param_1 = 7;
        param_1[1] = (uint)(cVar1 == '1') << 7 | param_1[1];
      }
      else {
        uVar3 = *param_1 - 1;
        *param_1 = uVar3;
        uVar2 = (uint)(cVar1 == '1') << ((byte)uVar3 & 0x1f) | param_1[1];
        param_1[1] = uVar2;
        if (uVar3 == 0) {
          *param_4 = (char)uVar2;
          param_1[1] = 0;
          param_4 = param_4 + 1;
          *param_5 = *param_5 + 1;
          *param_1 = 0;
        }
      }
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != param_2 + 1 + param_3);
  return 1;
}

