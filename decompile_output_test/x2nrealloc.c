
long x2nrealloc(long param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong *puVar3;
  ulong *unaff_RBX;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  
  do {
    uVar2 = *param_2;
    if (param_1 == 0) {
      if (uVar2 == 0) goto code_r0x0010cf38;
      goto code_r0x0010cf15;
    }
    puVar5 = (undefined *)register0x00000020;
    if (uVar2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x5555555555555554)) / ZEXT816(param_3),0)) {
      uVar2 = (uVar2 >> 1) + 1 + uVar2;
    }
    else {
      do {
        register0x00000020 = (BADSPACEBASE *)(puVar5 + -8);
        *(undefined8 *)(puVar5 + -0x10) = 0x10cf34;
        xalloc_die();
code_r0x0010cf38:
        lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x80)) / ZEXT816(param_3),0);
        uVar2 = (ulong)(lVar1 == 0) + lVar1;
code_r0x0010cf15:
        puVar5 = (undefined *)register0x00000020;
      } while ((SUB168(ZEXT816(uVar2) * ZEXT816(param_3),0) < 0) ||
              (SUB168(ZEXT816(uVar2) * ZEXT816(param_3) >> 0x40,0) != 0));
    }
    *param_2 = uVar2;
    puVar3 = unaff_RBX;
    puVar5 = (undefined *)register0x00000020;
    param_2 = (ulong *)(uVar2 * param_3);
    do {
      unaff_RBX = param_2;
      puVar4 = puVar5;
      *(ulong **)(puVar4 + -8) = puVar3;
      if ((unaff_RBX == (ulong *)0x0) && (param_1 != 0)) {
        *(undefined8 *)(puVar4 + -0x10) = 0x10ce8d;
        func_0x00102750();
        return 0;
      }
      *(undefined8 *)(puVar4 + -0x10) = 0x10ce76;
      puVar6 = unaff_RBX;
      lVar1 = func_0x00102a40();
      if ((lVar1 != 0) || (unaff_RBX == (ulong *)0x0)) {
        return lVar1;
      }
      *(undefined8 *)(puVar4 + -0x10) = 0x10ce96;
      xalloc_die();
      param_2 = SUB168(ZEXT816(puVar6) * ZEXT816(extraout_RDX),0);
    } while ((-1 < (long)param_2) &&
            (puVar3 = unaff_RBX, puVar5 = puVar4 + -8,
            SUB168(ZEXT816(puVar6) * ZEXT816(extraout_RDX) >> 0x40,0) == 0));
    register0x00000020 = (BADSPACEBASE *)(puVar4 + -0x10);
    *(undefined8 *)(puVar4 + -0x18) = 0x10cec4;
    xalloc_die();
    param_3 = extraout_RDX_00;
  } while( true );
}

