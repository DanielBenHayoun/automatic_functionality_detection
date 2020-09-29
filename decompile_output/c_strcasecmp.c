
ulong c_strcasecmp(byte *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar2 = 0;
  if (param_1 != param_2) {
    do {
      bVar1 = *param_1;
      bVar3 = *param_2;
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 + 0x20;
      }
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 + 0x20;
      }
      if (bVar1 == 0) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (bVar1 == bVar3);
    uVar2 = (ulong)((uint)bVar1 - (uint)bVar3);
  }
  return uVar2;
}

