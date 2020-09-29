
ulong c_strncasecmp(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  
  if ((param_1 == param_2) || (param_3 == 0)) {
    return 0;
  }
  do {
    bVar1 = *param_1;
    bVar2 = *param_2;
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 + 0x20;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 + 0x20;
    }
    param_3 = param_3 + -1;
    if ((param_3 == 0) || (bVar1 == 0)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar1 == bVar2);
  return (ulong)((uint)bVar1 - (uint)bVar2);
}

