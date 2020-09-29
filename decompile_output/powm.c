
ulong powm(ulong param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if ((param_2 & 1) == 0) goto code_r0x00101ee0;
  do {
    while( true ) {
      uVar1 = SUB168(ZEXT816(param_1) * ZEXT816(param_1) >> 0x40,0);
      uVar2 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(param_1) * ZEXT816(param_1),0) * param_4)) *
                     ZEXT816(param_3) >> 0x40,0);
      param_1 = uVar1 - uVar2;
      if (uVar1 < uVar2) {
        param_1 = param_1 + param_3;
      }
      param_2 = param_2 >> 1;
      param_5 = uVar3;
      if ((param_2 & 1) == 0) break;
      uVar1 = SUB168(ZEXT816(uVar3) * ZEXT816(param_1) >> 0x40,0);
      uVar2 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar3) * ZEXT816(param_1),0) * param_4)) *
                     ZEXT816(param_3) >> 0x40,0);
      uVar3 = uVar1 - uVar2;
      if (uVar1 < uVar2) {
        uVar3 = uVar3 + param_3;
      }
    }
code_r0x00101ee0:
    uVar3 = param_5;
  } while (param_2 != 0);
  return param_5;
}

