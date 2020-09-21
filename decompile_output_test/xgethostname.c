
uint * xgethostname(void)

{
  byte bVar1;
  byte bVar2;
  undefined auVar3 [16];
  ulong *puVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *in_RCX;
  undefined1 *puVar13;
  uint extraout_EDX;
  uint uVar14;
  uint *puVar15;
  byte **ppbVar16;
  undefined *puVar17;
  byte *pbVar18;
  undefined *puVar19;
  uint uVar20;
  ulong in_R8;
  ulong uVar21;
  uint uVar22;
  byte **unaff_R15;
  long in_FS_OFFSET;
  bool bVar23;
  byte *pbStack128;
  long lStack120;
  byte *pbStack104;
  uint *puStack96;
  long *plStack88;
  undefined8 uStack80;
  ulong *puStack72;
  long lStack56;
  long lStack48;
  
  pbVar8 = (byte *)0x0;
  plStack88 = &lStack56;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  lStack56 = 0x22;
  puVar15 = (uint *)func_0x001032a0();
  do {
    while( true ) {
      pbVar8 = (byte *)x2realloc(pbVar8,&lStack56);
      puStack72 = (ulong *)(pbVar8 + lStack56 + -2);
      ppbVar16 = (byte **)(lStack56 + -1);
      *(byte *)puStack72 = 0;
      *puVar15 = 0;
      pbVar18 = pbVar8;
      iVar5 = func_0x001037c0();
      if (iVar5 != 0) break;
      pbStack104 = pbVar8;
      if (*(byte *)puStack72 == 0) goto code_r0x001149f8;
    }
    uVar14 = *puVar15;
    puStack72 = (ulong *)(ulong)uVar14;
  } while ((uVar14 < 0x25) && (((ulong)puVar15 >> ((ulong)puStack72 & 0x1f) & 1) != 0));
  pbStack104 = (byte *)0x0;
  func_0x00103880();
  *puVar15 = uVar14;
  pbVar18 = pbVar8;
code_r0x001149f8:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uint *)pbStack104;
  }
  func_0x00103420();
  uStack80 = 0x1000401001;
  lStack120 = *(long *)(in_FS_OFFSET + 0x28);
  uVar21 = in_R8;
  puVar4 = puStack72;
  puStack96 = puVar15;
  plVar7 = &lStack56;
  if (0x24 < extraout_EDX) goto code_r0x00114de5;
  unaff_R15 = ppbVar16;
  if (ppbVar16 == (byte **)0x0) {
    unaff_R15 = &pbStack128;
  }
  piVar6 = (int *)func_0x001032a0();
  *piVar6 = 0;
  bVar1 = *pbVar18;
  plVar7 = (long *)func_0x00103860();
  pbVar8 = pbVar18;
  while ((*(byte *)(*plVar7 + 1 + (ulong)bVar1 * 2) & 0x20) != 0) {
    pbVar8 = pbVar8 + 1;
    bVar1 = *pbVar8;
  }
  if (bVar1 == 0x2d) goto code_r0x00114b38;
  uVar9 = func_0x00103790(pbVar18,unaff_R15);
  puVar13 = *unaff_R15;
  if (puVar13 == pbVar18) {
    if ((in_R8 == 0) || (bVar1 = *pbVar18, bVar1 == 0)) {
code_r0x00114b38:
      puVar15 = (uint *)0x4;
      goto code_r0x00114b3d;
    }
    puVar15 = (uint *)0x0;
    lVar10 = func_0x00103450(in_R8,(ulong)(uint)(int)(char)bVar1);
    uVar9 = 1;
    if (lVar10 == 0) goto code_r0x00114b38;
  }
  else {
    if (*piVar6 == 0) {
      puVar15 = (uint *)0x0;
    }
    else {
      puVar15 = (uint *)0x1;
      if (*piVar6 != 0x22) goto code_r0x00114b38;
    }
    if ((in_R8 == 0) || (bVar1 = *puVar13, bVar1 == 0)) {
      *in_RCX = uVar9;
      goto code_r0x00114b3d;
    }
  }
  lVar10 = func_0x00103450(in_R8,(ulong)(uint)(int)(char)bVar1);
  uVar14 = (uint)puVar15;
  if (lVar10 == 0) goto code_r0x00114c7c;
  if ((((byte)((uint)bVar1 - 0x45) < 0x30) &&
      ((0x814400308945U >> ((ulong)((uint)bVar1 - 0x45) & 0x1f) & 1) != 0)) &&
     (lVar10 = func_0x00103450(in_R8,0x30), lVar10 != 0)) {
    bVar2 = puVar13[1];
    if (bVar2 != 0x44) {
      if (bVar2 == 0x69) {
        puVar17 = (undefined *)0x400;
        puVar19 = (undefined *)(ulong)((uint)(puVar13[2] == 0x42) + 1 + (uint)(puVar13[2] == 0x42));
        goto code_r0x00114c1a;
      }
      if (bVar2 != 0x42) goto code_r0x00114c10;
    }
    puVar19 = (undefined *)0x2;
    puVar17 = (undefined *)0x3e8;
  }
  else {
code_r0x00114c10:
    puVar19 = (undefined *)0x1;
    puVar17 = (undefined *)0x400;
  }
code_r0x00114c1a:
  iVar5 = (int)puVar19;
  switch(bVar1) {
  case 0x42:
    if (SUB168(ZEXT816(0x400) * ZEXT816(uVar9) >> 0x40,0) == 0) {
      uVar9 = uVar9 << 10;
      goto code_r0x00114c60;
    }
    break;
  default:
code_r0x00114c7c:
    *in_RCX = uVar9;
    puVar15 = (uint *)(ulong)(uVar14 | 2);
    goto code_r0x00114b3d;
  case 0x45:
    uVar21 = 6;
    uVar22 = 0;
    goto code_r0x00114d6c;
  case 0x47:
  case 0x67:
    uVar12 = SUB168(ZEXT816(uVar9) * ZEXT816(puVar17),0);
    bVar23 = SUB168(ZEXT816(uVar9) * ZEXT816(puVar17) >> 0x40,0) != 0;
    if (bVar23) {
      uVar12 = 0xffffffffffffffff;
    }
    uVar21 = (ulong)bVar23;
    uVar11 = SUB168(ZEXT816(uVar12) * ZEXT816(puVar17),0);
    if (SUB168(ZEXT816(uVar12) * ZEXT816(puVar17) >> 0x40,0) != 0) {
      uVar21 = 1;
      uVar11 = 0xffffffffffffffff;
    }
    goto code_r0x00114c47;
  case 0x4b:
  case 0x6b:
    auVar3 = ZEXT816(uVar9);
    uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
    if (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) == 0) goto code_r0x00114c60;
    break;
  case 0x4d:
  case 0x6d:
    uVar11 = SUB168(ZEXT816(uVar9) * ZEXT816(puVar17),0);
    if (SUB168(ZEXT816(uVar9) * ZEXT816(puVar17) >> 0x40,0) == 0) {
      uVar21 = 0;
    }
    else {
      uVar11 = 0xffffffffffffffff;
      uVar21 = 1;
    }
code_r0x00114c47:
    uVar9 = SUB168(ZEXT816(uVar11) * ZEXT816(puVar17),0);
    if (SUB168(ZEXT816(uVar11) * ZEXT816(puVar17) >> 0x40,0) != 0) {
      uVar21 = 1;
      uVar9 = 0xffffffffffffffff;
    }
    puVar15 = (uint *)(ulong)(uVar14 | (uint)uVar21);
    goto code_r0x00114c60;
  case 0x50:
    uVar21 = 5;
    uVar22 = 0;
    do {
      auVar3 = ZEXT816(uVar9);
      uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
      if (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) != 0) {
        uVar22 = 1;
        uVar9 = 0xffffffffffffffff;
      }
      uVar20 = (int)uVar21 - 1;
      uVar21 = (ulong)uVar20;
      if (uVar20 == 0) goto code_r0x00114cd5;
    } while( true );
  case 0x54:
  case 0x74:
    uVar21 = 4;
    uVar22 = 0;
    do {
      auVar3 = ZEXT816(uVar9);
      uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
      if (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) != 0) {
        uVar22 = 1;
        uVar9 = 0xffffffffffffffff;
      }
      uVar20 = (int)uVar21 - 1;
      uVar21 = (ulong)uVar20;
      if (uVar20 == 0) goto code_r0x00114cd5;
    } while( true );
  case 0x59:
    uVar21 = 8;
    uVar22 = 0;
    do {
      auVar3 = ZEXT816(uVar9);
      uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
      if (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) != 0) {
        uVar22 = 1;
        uVar9 = 0xffffffffffffffff;
      }
      uVar20 = (int)uVar21 - 1;
      uVar21 = (ulong)uVar20;
      if (uVar20 == 0) goto code_r0x00114cd5;
    } while( true );
  case 0x5a:
    uVar21 = 7;
    uVar22 = 0;
    do {
      auVar3 = ZEXT816(uVar9);
      uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
      if (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) != 0) {
        uVar22 = 1;
        uVar9 = 0xffffffffffffffff;
      }
      uVar20 = (int)uVar21 - 1;
      uVar21 = (ulong)uVar20;
      if (uVar20 == 0) goto code_r0x00114cd5;
    } while( true );
  case 0x62:
    if (SUB168(ZEXT816(0x200) * ZEXT816(uVar9) >> 0x40,0) == 0) {
      uVar9 = uVar9 << 9;
    }
    break;
  case 99:
    goto code_r0x00114c60;
  case 0x77:
    if (SUB168(ZEXT816(2) * ZEXT816(uVar9) >> 0x40,0) == 0) {
      uVar9 = uVar9 * 2;
      goto code_r0x00114c60;
    }
  }
  puVar15 = (uint *)0x1;
  uVar9 = 0xffffffffffffffff;
code_r0x00114c60:
  *unaff_R15 = puVar13 + iVar5;
  bVar1 = puVar13[iVar5];
  *in_RCX = uVar9;
  if (bVar1 != 0) {
    puVar15 = (uint *)(ulong)((uint)puVar15 | 2);
  }
code_r0x00114b3d:
  if (lStack120 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar15;
  }
  func_0x00103420();
  puVar4 = in_RCX;
  plVar7 = plStack88;
code_r0x00114de5:
  plStack88 = plVar7;
  in_RCX = puVar4;
  puVar13 = __PRETTY_FUNCTION___4162;
  puVar17 = &UNK_0011ab40;
  puVar19 = &UNK_0011ab50;
  func_0x001034d0(&UNK_0011ab50,&UNK_0011ab40,0x54);
  do {
    uVar22 = 1;
    uVar9 = 0xffffffffffffffff;
    do {
      iVar5 = (int)puVar19;
      uVar14 = (uint)puVar15;
      uVar20 = (int)uVar21 - 1;
      uVar21 = (ulong)uVar20;
      if (uVar20 == 0) goto code_r0x00114cd5;
code_r0x00114d6c:
      auVar3 = ZEXT816(uVar9);
      uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
    } while (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) == 0);
  } while( true );
code_r0x00114cd5:
  puVar15 = (uint *)(ulong)(uVar14 | uVar22);
  goto code_r0x00114c60;
}

