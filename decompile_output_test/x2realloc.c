
long x2realloc(long param_1,ulong **param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong *unaff_RBX;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 auStack32 [2];
  
  puVar2 = *param_2;
  if (param_1 == 0) {
    if (puVar2 == (ulong *)0x0) {
      puVar2 = (ulong *)0x80;
    }
    if ((long)puVar2 < 0) goto code_r0x0010cfa1;
  }
  else {
    if ((ulong *)0x5555555555555553 < puVar2) {
code_r0x0010cfa1:
      xalloc_die();
      uVar3 = xmalloc();
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)PTR_memset_00317e88)(uVar3,0,param_1);
      return uVar3;
    }
    puVar2 = (ulong *)(((ulong)puVar2 >> 1) + 1 + (long)puVar2);
  }
  *param_2 = puVar2;
  puVar6 = (undefined *)register0x00000020;
  while( true ) {
    puVar8 = puVar2;
    puVar5 = puVar6;
    *(ulong **)(puVar5 + -8) = unaff_RBX;
    if ((puVar8 == (ulong *)0x0) && (param_1 != 0)) {
      *(undefined8 *)(puVar5 + -0x10) = 0x10ce8d;
      func_0x00102750();
      return 0;
    }
    *(undefined8 *)(puVar5 + -0x10) = 0x10ce76;
    puVar9 = puVar8;
    lVar1 = func_0x00102a40();
    if ((lVar1 != 0) || (puVar8 == (ulong *)0x0)) break;
    *(undefined8 *)(puVar5 + -0x10) = 0x10ce96;
    xalloc_die();
    puVar2 = SUB168(ZEXT816(puVar9) * ZEXT816(extraout_RDX),0);
    unaff_RBX = puVar8;
    if (((long)puVar2 < 0) ||
       (puVar6 = puVar5 + -8, SUB168(ZEXT816(puVar9) * ZEXT816(extraout_RDX) >> 0x40,0) != 0)) {
      puVar6 = puVar5 + -0x10;
      puVar7 = puVar5 + -0x10;
      *(undefined8 *)(puVar5 + -0x18) = 0x10cec4;
      xalloc_die();
      uVar4 = *puVar2;
      uVar10 = extraout_RDX_00;
      if (param_1 == 0) {
        if (uVar4 == 0) goto code_r0x0010cf38;
        goto code_r0x0010cf15;
      }
      puVar6 = puVar5 + -0x10;
      if (uVar4 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554)) /
                         ZEXT816(extraout_RDX_00),0)) {
        uVar4 = (uVar4 >> 1) + 1 + uVar4;
        puVar6 = puVar5 + -0x10;
      }
      else {
        do {
          puVar7 = puVar6 + -8;
          *(undefined8 *)(puVar6 + -0x10) = 0x10cf34;
          xalloc_die();
code_r0x0010cf38:
          lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(uVar10),0);
          uVar4 = (ulong)(lVar1 == 0) + lVar1;
          puVar6 = puVar7;
code_r0x0010cf15:
        } while ((SUB168(ZEXT816(uVar4) * ZEXT816(uVar10),0) < 0) ||
                (SUB168(ZEXT816(uVar4) * ZEXT816(uVar10) >> 0x40,0) != 0));
      }
      *puVar2 = uVar4;
      puVar2 = (ulong *)(uVar4 * uVar10);
    }
  }
  return lVar1;
}

