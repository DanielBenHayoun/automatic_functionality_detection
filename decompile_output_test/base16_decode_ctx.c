
ulong base16_decode_ctx(long param_1,long param_2,long param_3,char *param_4,long *param_5)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  
  *param_5 = 0;
  if (param_3 == 0) {
    return (ulong)((uint)*(byte *)(param_1 + 5) ^ 1);
  }
  lVar5 = param_2 + 1;
  do {
    cVar2 = *(char *)(lVar5 + -1);
    pcVar3 = param_4;
    if (cVar2 != '\n') {
      if ((byte)(cVar2 + 0xbfU) < 6) {
        bVar4 = *(byte *)(param_1 + 5);
        cVar2 = cVar2 + -0x37;
        if (bVar4 != 0) goto code_r0x001028eb;
code_r0x00102932:
        *(char *)(param_1 + 4) = cVar2;
      }
      else {
        if (9 < (byte)(cVar2 - 0x30U)) {
          return 0;
        }
        bVar4 = *(byte *)(param_1 + 5);
        cVar2 = cVar2 + -0x30;
        if (bVar4 == 0) goto code_r0x00102932;
code_r0x001028eb:
        cVar1 = *(char *)(param_1 + 4);
        *param_5 = *param_5 + 1;
        pcVar3 = param_4 + 1;
        *param_4 = cVar2 + cVar1 * '\x10';
      }
      *(byte *)(param_1 + 5) = bVar4 ^ 1;
    }
    lVar5 = lVar5 + 1;
    param_4 = pcVar3;
    if (param_2 + 1 + param_3 == lVar5) {
      return 1;
    }
  } while( true );
}

