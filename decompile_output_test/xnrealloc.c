
long xnrealloc(long param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong *unaff_RBX;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 auStack24 [3];
  
  while( true ) {
    puVar2 = SUB168(ZEXT816(param_2) * ZEXT816(param_3),0);
    if (((long)puVar2 < 0) ||
       (puVar4 = (undefined *)register0x00000020,
       SUB168(ZEXT816(param_2) * ZEXT816(param_3) >> 0x40,0) != 0)) {
      puVar4 = (undefined *)register0x00000020 + -8;
      puVar5 = (undefined *)register0x00000020 + -8;
      *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x104354;
      xalloc_die();
      uVar3 = *puVar2;
      uVar6 = extraout_RDX_00;
      if (param_1 == 0) {
        if (uVar3 == 0) goto code_r0x001043c8;
        goto code_r0x001043a5;
      }
      puVar4 = (undefined *)register0x00000020 + -8;
      if (uVar3 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554)) /
                         ZEXT816(extraout_RDX_00),0)) {
        uVar3 = (uVar3 >> 1) + 1 + uVar3;
        puVar4 = (undefined *)register0x00000020 + -8;
      }
      else {
        do {
          puVar5 = puVar4 + -8;
          *(undefined8 *)(puVar4 + -0x10) = 0x1043c4;
          xalloc_die();
code_r0x001043c8:
          lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(uVar6),0);
          uVar3 = (ulong)(lVar1 == 0) + lVar1;
          puVar4 = puVar5;
code_r0x001043a5:
        } while ((SUB168(ZEXT816(uVar3) * ZEXT816(uVar6),0) < 0) ||
                (SUB168(ZEXT816(uVar3) * ZEXT816(uVar6) >> 0x40,0) != 0));
      }
      *puVar2 = uVar3;
      puVar2 = (ulong *)(uVar3 * uVar6);
    }
    register0x00000020 = (BADSPACEBASE *)(puVar4 + -8);
    *(ulong **)(puVar4 + -8) = unaff_RBX;
    if ((puVar2 == (ulong *)0x0) && (param_1 != 0)) break;
    *(undefined8 *)(puVar4 + -0x10) = 0x104306;
    param_2 = puVar2;
    lVar1 = func_0x001013a0();
    if ((lVar1 != 0) || (puVar2 == (ulong *)0x0)) {
      return lVar1;
    }
    *(undefined8 *)(puVar4 + -0x10) = 0x104326;
    xalloc_die();
    param_3 = extraout_RDX;
    unaff_RBX = puVar2;
  }
  *(undefined8 *)(puVar4 + -0x10) = 0x10431d;
  func_0x001011e0();
  return 0;
}

