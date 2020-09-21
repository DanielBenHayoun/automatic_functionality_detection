
ulong z85_decode_ctx(undefined4 *param_1,long param_2,long param_3,undefined *param_4,long *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  *param_5 = 0;
  if (param_3 == 0) {
    return (ulong)(param_1[1] & 0xffffff00 | (uint)((int)param_1[1] < 1));
  }
  lVar4 = param_2 + 1;
  do {
    bVar1 = *(byte *)(lVar4 + -1);
    if (bVar1 != 10) {
      if ((0x5c < (byte)(bVar1 - 0x21)) ||
         (cVar2 = z85_decoding[(int)((uint)bVar1 - 0x21)], cVar2 == -1)) {
        return 0;
      }
      iVar3 = param_1[1];
      iVar5 = iVar3 + 1;
      param_1[1] = iVar5;
      *(char *)((long)param_1 + (long)iVar3 + 8) = cVar2;
      if (iVar5 == 5) {
        bVar1 = *(byte *)(param_1 + 2);
        uVar6 = (uint)*(byte *)(param_1 + 3) +
                (uint)*(byte *)((long)param_1 + 9) * 0x95eed +
                (uint)*(byte *)((long)param_1 + 10) * 0x1c39 +
                (uint)*(byte *)((long)param_1 + 0xb) * 0x55;
        if ((byte)(bVar1 + 0xad) < 2) {
          return 0;
        }
        if ((bVar1 == 0x52) && (0xdd7f4d < uVar6)) {
          return 0;
        }
        *param_5 = *param_5 + 4;
        param_1[1] = 0;
        uVar6 = (uint)bVar1 * 0x31c84b1 + uVar6;
        param_4[2] = (char)((ulong)uVar6 >> 8);
        param_4[3] = (char)uVar6;
        *param_4 = (char)(uVar6 >> 0x18);
        param_4[1] = (char)(uVar6 >> 0x10);
        param_4 = param_4 + 4;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == param_2 + 1 + param_3) {
      *param_1 = param_1[1];
      return 1;
    }
  } while( true );
}

