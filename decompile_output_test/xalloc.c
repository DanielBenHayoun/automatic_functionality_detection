
long xalloc(void)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  byte bVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong extraout_RDX;
  ulong uVar10;
  ulong uVar11;
  
  lVar7 = func_0x00100970();
  if (lVar7 != 0) {
    return lVar7;
  }
  uVar10 = 1;
  uVar8 = stderr;
  func_0x001009a0(&UNK_00101219,1,0x1a);
  uVar11 = 1;
  func_0x00100990();
  if (uVar8 == 0) {
    if (uVar10 < extraout_RDX) {
      return SUB168(CONCAT88(uVar10,uVar11) / ZEXT816(extraout_RDX),0);
    }
    uVar8 = extraout_RDX;
    if (extraout_RDX == 0) {
      uVar8 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(1)) / ZEXT816(0),0);
    }
    uVar9 = SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(uVar11)) / ZEXT816(uVar8),0);
  }
  else {
    if (uVar10 < uVar8) {
      return 0;
    }
    uVar1 = 0x3f;
    if (uVar8 != 0) {
      while (uVar8 >> uVar1 == 0) {
        uVar1 = uVar1 - 1;
      }
    }
    bVar6 = (byte)(uVar1 ^ 0x3f);
    if ((int)(uVar1 ^ 0x3f) != 0) {
      bVar5 = 0x40 - bVar6;
      auVar2 = ZEXT816(extraout_RDX >> (bVar5 & 0x3f) | uVar8 << (bVar6 & 0x3f));
      auVar3 = CONCAT88(uVar10 >> (bVar5 & 0x3f),uVar11 >> (bVar5 & 0x3f) | uVar10 << (bVar6 & 0x3f)
                       );
      auVar4 = auVar3 / auVar2;
      lVar7 = SUB168(auVar4,0);
      uVar8 = SUB168(auVar3 % auVar2,0);
      auVar2 = (auVar4 & (undefined  [16])0xffffffffffffffff) *
               ZEXT816(extraout_RDX << (bVar6 & 0x3f));
      uVar10 = SUB168(auVar2 >> 0x40,0);
      if ((uVar10 <= uVar8) && ((SUB168(auVar2,0) <= uVar11 << (bVar6 & 0x3f) || (uVar8 != uVar10)))
         ) {
        return lVar7;
      }
      return lVar7 + -1;
    }
    if ((uVar8 < uVar10) || (uVar9 = 0, extraout_RDX <= uVar11)) {
      return 1;
    }
  }
  return uVar9;
}

