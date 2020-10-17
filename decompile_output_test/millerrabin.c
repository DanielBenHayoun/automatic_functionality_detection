
ulong millerrabin(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_6;
  uVar1 = powm(param_3,param_4,param_1,param_2);
  uVar5 = param_1 - param_6;
  uVar6 = uVar6 & 0xffffffffffffff00 | (ulong)(param_6 == uVar1 || uVar1 == uVar5);
  if ((param_6 != uVar1 && uVar1 != uVar5) && (1 < param_5)) {
    uVar4 = 1;
    while( true ) {
      uVar2 = SUB168(ZEXT816(uVar1) * ZEXT816(uVar1) >> 0x40,0);
      uVar3 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar1) * ZEXT816(uVar1),0) * param_2)) *
                     ZEXT816(param_1) >> 0x40,0);
      uVar1 = uVar2 - uVar3;
      if (uVar2 < uVar3) {
        uVar1 = uVar1 + param_1;
      }
      if (uVar5 == uVar1) break;
      if ((param_6 == uVar1) || (uVar4 = uVar4 + 1, param_5 == uVar4)) goto code_r0x00101f75;
    }
    uVar6 = 1;
  }
code_r0x00101f75:
  return uVar6 & 0xffffffff;
}

