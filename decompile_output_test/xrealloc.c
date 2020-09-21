
long xrealloc(long param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong *unaff_RBX;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 auStack32 [4];
  
  puVar4 = (undefined *)register0x00000020;
  while( true ) {
    puVar6 = param_2;
    puVar3 = puVar4;
    *(ulong **)(puVar3 + -8) = unaff_RBX;
    if ((puVar6 == (ulong *)0x0) && (param_1 != 0)) {
      *(undefined8 *)(puVar3 + -0x10) = 0x10431d;
      func_0x001011e0();
      return 0;
    }
    *(undefined8 *)(puVar3 + -0x10) = 0x104306;
    puVar7 = puVar6;
    lVar1 = func_0x001013a0();
    if ((lVar1 != 0) || (puVar6 == (ulong *)0x0)) break;
    *(undefined8 *)(puVar3 + -0x10) = 0x104326;
    xalloc_die();
    param_2 = SUB168(ZEXT816(puVar7) * ZEXT816(extraout_RDX),0);
    unaff_RBX = puVar6;
    if (((long)param_2 < 0) ||
       (puVar4 = puVar3 + -8, SUB168(ZEXT816(puVar7) * ZEXT816(extraout_RDX) >> 0x40,0) != 0)) {
      puVar4 = puVar3 + -0x10;
      puVar5 = puVar3 + -0x10;
      *(undefined8 *)(puVar3 + -0x18) = 0x104354;
      xalloc_die();
      uVar2 = *param_2;
      uVar8 = extraout_RDX_00;
      if (param_1 == 0) {
        if (uVar2 == 0) goto code_r0x001043c8;
        goto code_r0x001043a5;
      }
      puVar4 = puVar3 + -0x10;
      if (uVar2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554)) /
                         ZEXT816(extraout_RDX_00),0)) {
        uVar2 = (uVar2 >> 1) + 1 + uVar2;
        puVar4 = puVar3 + -0x10;
      }
      else {
        do {
          puVar5 = puVar4 + -8;
          *(undefined8 *)(puVar4 + -0x10) = 0x1043c4;
          xalloc_die();
code_r0x001043c8:
          lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(uVar8),0);
          uVar2 = (ulong)(lVar1 == 0) + lVar1;
          puVar4 = puVar5;
code_r0x001043a5:
        } while ((SUB168(ZEXT816(uVar2) * ZEXT816(uVar8),0) < 0) ||
                (SUB168(ZEXT816(uVar2) * ZEXT816(uVar8) >> 0x40,0) != 0));
      }
      *param_2 = uVar2;
      param_2 = (ulong *)(uVar2 * uVar8);
    }
  }
  return lVar1;
}

