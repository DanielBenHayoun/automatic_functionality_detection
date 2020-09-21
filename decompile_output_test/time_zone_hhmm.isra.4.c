
ulong time_zone_hhmm_isra_4(int *param_1,char param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  if (param_4 < 3) {
    if (-1 < param_5) {
code_r0x00106332:
      lVar2 = param_3 * 0x3c;
      lVar1 = SUB168(SEXT816(param_3) * SEXT816(0x3c) >> 0x40,0);
      if (param_2 == '\0') {
        bVar3 = SCARRY8(lVar2,param_5);
        lVar2 = lVar2 + param_5;
      }
      else {
        bVar3 = SBORROW8(lVar2,param_5);
        lVar2 = lVar2 - param_5;
      }
      if (((lVar1 != 0 && lVar1 != -1) | bVar3) != 0) {
        return 0;
      }
      goto code_r0x0010634e;
    }
    lVar2 = 0;
    param_3 = param_3 * 100;
  }
  else {
    if (-1 < param_5) goto code_r0x00106332;
    lVar2 = param_3 % 100;
  }
  lVar2 = lVar2 + (param_3 / 100) * 0x3c;
code_r0x0010634e:
  bVar3 = lVar2 + 0x5a0U < 0xb41;
  if (bVar3) {
    *param_1 = (int)lVar2 * 0x3c;
  }
  return (ulong)bVar3;
}

