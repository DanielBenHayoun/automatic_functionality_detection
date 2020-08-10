
ulong star_digits_closebracket(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + param_2) == '*') &&
     (lVar2 = param_1[1], *(char *)(lVar2 + param_2) == '\0')) {
    uVar4 = param_2 + 1;
    if (uVar4 < (ulong)param_1[2]) {
      bVar5 = *(byte *)(lVar1 + 1 + param_2);
      if ((uint)bVar5 - 0x30 < 10) {
        bVar5 = *(byte *)(lVar2 + 1 + param_2);
        uVar3 = (ulong)bVar5;
        if (bVar5 != 0) {
          return 0;
        }
        while( true ) {
          uVar4 = uVar4 + 1;
          if ((ulong)param_1[2] <= uVar4) {
            return uVar3;
          }
          bVar5 = *(byte *)(lVar1 + uVar4);
          if (9 < (uint)bVar5 - 0x30) break;
          if (*(char *)(lVar2 + uVar4) != '\0') {
            return uVar3;
          }
        }
      }
      if (bVar5 == 0x5d) {
        return (ulong)((uint)*(byte *)(lVar2 + uVar4) ^ 1);
      }
    }
  }
  return 0;
}

