
undefined  [16] __udivti3(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      return CONCAT88(param_2,param_1) / ZEXT816(param_3) & (undefined  [16])0xffffffffffffffff |
             ZEXT816(0) << 0x40;
    }
    if (param_3 == 0) {
      param_3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(1)) / ZEXT816(0),0);
    }
    param_2 = param_2 / param_3;
    uVar6 = SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(param_1)) / ZEXT816(param_3),0);
code_r0x001010ad:
    return CONCAT88(param_2,uVar6);
  }
  if (param_2 < param_4) {
    return ZEXT816(0);
  }
  uVar7 = 0x3f;
  if (param_4 != 0) {
    while (param_4 >> uVar7 == 0) {
      uVar7 = uVar7 - 1;
    }
  }
  bVar5 = (byte)(uVar7 ^ 0x3f);
  if ((int)(uVar7 ^ 0x3f) != 0) {
    bVar4 = 0x40 - bVar5;
    auVar1 = ZEXT816(param_3 >> (bVar4 & 0x3f) | param_4 << (bVar5 & 0x3f));
    auVar2 = CONCAT88(param_2 >> (bVar4 & 0x3f),
                      param_1 >> (bVar4 & 0x3f) | param_2 << (bVar5 & 0x3f));
    auVar3 = auVar2 / auVar1;
    uVar7 = SUB168(auVar2 % auVar1,0);
    auVar1 = (auVar3 & (undefined  [16])0xffffffffffffffff) * ZEXT816(param_3 << (bVar5 & 0x3f));
    uVar8 = SUB168(auVar1 >> 0x40,0);
    if ((uVar8 <= uVar7) && ((SUB168(auVar1,0) <= param_1 << (bVar5 & 0x3f) || (uVar7 != uVar8)))) {
      return auVar3 & (undefined  [16])0xffffffffffffffff | ZEXT816(0) << 0x40;
    }
    return ZEXT816(SUB168(auVar3,0) - 1);
  }
  if (param_2 <= param_4) {
    param_2 = 0;
    uVar6 = 0;
    if (param_1 < param_3) goto code_r0x001010ad;
  }
  return ZEXT816(1);
}

