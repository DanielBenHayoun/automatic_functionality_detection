
ulong xgetgroups(byte *param_1,byte **param_2,undefined8 param_3,ulong *param_4,ulong param_5)

{
  byte bVar1;
  byte bVar2;
  undefined auVar3 [16];
  uint uVar4;
  int *piVar5;
  long *plVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  uint extraout_EDX;
  ulong unaff_RBP;
  undefined *puVar13;
  int iVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong *unaff_R14;
  byte **unaff_R15;
  long in_FS_OFFSET;
  bool bVar19;
  byte *pbStack80;
  long lStack72;
  ulong uStack56;
  
  uVar4 = mgetgroups();
  uStack56 = (ulong)uVar4;
  if ((uVar4 != 0xffffffff) || (piVar5 = (int *)func_0x00101710(), *piVar5 != 0xc)) {
    return uStack56;
  }
  xalloc_die();
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = param_5;
  if (0x24 < extraout_EDX) goto code_r0x00105895;
  unaff_R15 = param_2;
  if (param_2 == (byte **)0x0) {
    unaff_R15 = &pbStack80;
  }
  piVar5 = (int *)func_0x00101710();
  *piVar5 = 0;
  bVar1 = *param_1;
  plVar6 = (long *)func_0x00101a80();
  pbVar7 = param_1;
  while ((*(byte *)(*plVar6 + 1 + (ulong)bVar1 * 2) & 0x20) != 0) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  if (bVar1 == 0x2d) goto code_r0x001055e8;
  uVar8 = func_0x001019f0(param_1,unaff_R15);
  puVar12 = *unaff_R15;
  if (puVar12 == param_1) {
    if ((param_5 == 0) || (bVar1 = *param_1, bVar1 == 0)) {
code_r0x001055e8:
      unaff_RBP = 4;
      goto code_r0x001055ed;
    }
    unaff_RBP = 0;
    lVar9 = func_0x00101810(param_5,(ulong)(uint)(int)(char)bVar1);
    uVar8 = 1;
    if (lVar9 == 0) goto code_r0x001055e8;
  }
  else {
    if (*piVar5 == 0) {
      unaff_RBP = 0;
    }
    else {
      unaff_RBP = 1;
      if (*piVar5 != 0x22) goto code_r0x001055e8;
    }
    if ((param_5 == 0) || (bVar1 = *puVar12, bVar1 == 0)) {
      *param_4 = uVar8;
      goto code_r0x001055ed;
    }
  }
  lVar9 = func_0x00101810(param_5,(ulong)(uint)(int)(char)bVar1);
  uVar4 = (uint)unaff_RBP;
  if (lVar9 == 0) goto code_r0x0010572c;
  if ((((byte)((uint)bVar1 - 0x45) < 0x30) &&
      ((0x814400308945U >> ((ulong)((uint)bVar1 - 0x45) & 0x1f) & 1) != 0)) &&
     (lVar9 = func_0x00101810(param_5,0x30), lVar9 != 0)) {
    bVar2 = puVar12[1];
    if (bVar2 != 0x44) {
      if (bVar2 == 0x69) {
        puVar13 = (undefined *)0x400;
        puVar15 = (undefined *)(ulong)((uint)(puVar12[2] == 0x42) + 1 + (uint)(puVar12[2] == 0x42));
        goto code_r0x001056ca;
      }
      if (bVar2 != 0x42) goto code_r0x001056c0;
    }
    puVar15 = (undefined *)0x2;
    puVar13 = (undefined *)0x3e8;
  }
  else {
code_r0x001056c0:
    puVar15 = (undefined *)0x1;
    puVar13 = (undefined *)0x400;
  }
code_r0x001056ca:
  iVar14 = (int)puVar15;
  switch(bVar1) {
  case 0x42:
    if (SUB168(ZEXT816(0x400) * ZEXT816(uVar8) >> 0x40,0) == 0) {
      uVar8 = uVar8 << 10;
      goto code_r0x00105710;
    }
    break;
  default:
code_r0x0010572c:
    *param_4 = uVar8;
    unaff_RBP = (ulong)(uVar4 | 2);
    goto code_r0x001055ed;
  case 0x45:
    uVar17 = 6;
    uVar18 = 0;
    goto code_r0x0010581c;
  case 0x47:
  case 0x67:
    uVar11 = SUB168(ZEXT816(uVar8) * ZEXT816(puVar13),0);
    bVar19 = SUB168(ZEXT816(uVar8) * ZEXT816(puVar13) >> 0x40,0) != 0;
    if (bVar19) {
      uVar11 = 0xffffffffffffffff;
    }
    uVar17 = (ulong)bVar19;
    uVar10 = SUB168(ZEXT816(uVar11) * ZEXT816(puVar13),0);
    if (SUB168(ZEXT816(uVar11) * ZEXT816(puVar13) >> 0x40,0) != 0) {
      uVar17 = 1;
      uVar10 = 0xffffffffffffffff;
    }
    goto code_r0x001056f7;
  case 0x4b:
  case 0x6b:
    auVar3 = ZEXT816(uVar8);
    uVar8 = SUB168(auVar3 * ZEXT816(puVar13),0);
    if (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) == 0) goto code_r0x00105710;
    break;
  case 0x4d:
  case 0x6d:
    uVar10 = SUB168(ZEXT816(uVar8) * ZEXT816(puVar13),0);
    if (SUB168(ZEXT816(uVar8) * ZEXT816(puVar13) >> 0x40,0) == 0) {
      uVar17 = 0;
    }
    else {
      uVar10 = 0xffffffffffffffff;
      uVar17 = 1;
    }
code_r0x001056f7:
    uVar8 = SUB168(ZEXT816(uVar10) * ZEXT816(puVar13),0);
    if (SUB168(ZEXT816(uVar10) * ZEXT816(puVar13) >> 0x40,0) != 0) {
      uVar17 = 1;
      uVar8 = 0xffffffffffffffff;
    }
    unaff_RBP = (ulong)(uVar4 | (uint)uVar17);
    goto code_r0x00105710;
  case 0x50:
    uVar17 = 5;
    uVar18 = 0;
    do {
      auVar3 = ZEXT816(uVar8);
      uVar8 = SUB168(auVar3 * ZEXT816(puVar13),0);
      if (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) != 0) {
        uVar18 = 1;
        uVar8 = 0xffffffffffffffff;
      }
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar16;
      if (uVar16 == 0) goto code_r0x00105785;
    } while( true );
  case 0x54:
  case 0x74:
    uVar17 = 4;
    uVar18 = 0;
    do {
      auVar3 = ZEXT816(uVar8);
      uVar8 = SUB168(auVar3 * ZEXT816(puVar13),0);
      if (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) != 0) {
        uVar18 = 1;
        uVar8 = 0xffffffffffffffff;
      }
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar16;
      if (uVar16 == 0) goto code_r0x00105785;
    } while( true );
  case 0x59:
    uVar17 = 8;
    uVar18 = 0;
    do {
      auVar3 = ZEXT816(uVar8);
      uVar8 = SUB168(auVar3 * ZEXT816(puVar13),0);
      if (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) != 0) {
        uVar18 = 1;
        uVar8 = 0xffffffffffffffff;
      }
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar16;
      if (uVar16 == 0) goto code_r0x00105785;
    } while( true );
  case 0x5a:
    uVar17 = 7;
    uVar18 = 0;
    do {
      auVar3 = ZEXT816(uVar8);
      uVar8 = SUB168(auVar3 * ZEXT816(puVar13),0);
      if (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) != 0) {
        uVar18 = 1;
        uVar8 = 0xffffffffffffffff;
      }
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar16;
      if (uVar16 == 0) goto code_r0x00105785;
    } while( true );
  case 0x62:
    if (SUB168(ZEXT816(0x200) * ZEXT816(uVar8) >> 0x40,0) == 0) {
      uVar8 = uVar8 << 9;
    }
    break;
  case 99:
    goto code_r0x00105710;
  case 0x77:
    if (SUB168(ZEXT816(2) * ZEXT816(uVar8) >> 0x40,0) == 0) {
      uVar8 = uVar8 * 2;
      goto code_r0x00105710;
    }
  }
  unaff_RBP = 1;
  uVar8 = 0xffffffffffffffff;
code_r0x00105710:
  *unaff_R15 = puVar12 + iVar14;
  bVar1 = puVar12[iVar14];
  *param_4 = uVar8;
  if (bVar1 != 0) {
    unaff_RBP = (ulong)((uint)unaff_RBP | 2);
  }
code_r0x001055ed:
  if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
    return unaff_RBP;
  }
  func_0x001017e0();
  unaff_R14 = param_4;
code_r0x00105895:
  param_4 = unaff_R14;
  puVar12 = __PRETTY_FUNCTION___4162;
  puVar13 = &UNK_00106da0;
  puVar15 = &UNK_00106db0;
  func_0x00101850(&UNK_00106db0,&UNK_00106da0,0x54);
  do {
    uVar18 = 1;
    uVar8 = 0xffffffffffffffff;
    do {
      iVar14 = (int)puVar15;
      uVar4 = (uint)unaff_RBP;
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar16;
      if (uVar16 == 0) goto code_r0x00105785;
code_r0x0010581c:
      auVar3 = ZEXT816(uVar8);
      uVar8 = SUB168(auVar3 * ZEXT816(puVar13),0);
    } while (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) == 0);
  } while( true );
code_r0x00105785:
  unaff_RBP = (ulong)(uVar4 | uVar18);
  goto code_r0x00105710;
}

