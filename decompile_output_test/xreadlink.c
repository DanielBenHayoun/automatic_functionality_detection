
ulong xreadlink(byte *param_1,byte **param_2,undefined8 param_3,ulong *param_4,ulong param_5)

{
  byte bVar1;
  byte bVar2;
  undefined auVar3 [16];
  int *piVar4;
  long *plVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint extraout_EDX;
  uint uVar12;
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
  long lStack56;
  
  lStack56 = areadlink();
  if ((lStack56 != 0) || (piVar4 = (int *)func_0x001015a0(), *piVar4 != 0xc)) {
    return lStack56;
  }
  xalloc_die();
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = param_5;
  if (0x24 < extraout_EDX) goto code_r0x001051f5;
  unaff_R15 = param_2;
  if (param_2 == (byte **)0x0) {
    unaff_R15 = &pbStack80;
  }
  piVar4 = (int *)func_0x001015a0();
  *piVar4 = 0;
  bVar1 = *param_1;
  plVar5 = (long *)func_0x00101880();
  pbVar6 = param_1;
  while ((*(byte *)(*plVar5 + 1 + (ulong)bVar1 * 2) & 0x20) != 0) {
    pbVar6 = pbVar6 + 1;
    bVar1 = *pbVar6;
  }
  if (bVar1 == 0x2d) goto code_r0x00104f48;
  uVar7 = func_0x001016c0(param_1,unaff_R15,(ulong)extraout_EDX,0);
  puVar11 = *unaff_R15;
  if (puVar11 == param_1) {
    if ((param_5 == 0) || (bVar1 = *param_1, bVar1 == 0)) {
code_r0x00104f48:
      unaff_RBP = 4;
      goto code_r0x00104f4d;
    }
    unaff_RBP = 0;
    lVar8 = func_0x00101680(param_5,(ulong)(uint)(int)(char)bVar1);
    uVar7 = 1;
    if (lVar8 == 0) goto code_r0x00104f48;
  }
  else {
    if (*piVar4 == 0) {
      unaff_RBP = 0;
    }
    else {
      unaff_RBP = 1;
      if (*piVar4 != 0x22) goto code_r0x00104f48;
    }
    if ((param_5 == 0) || (bVar1 = *puVar11, bVar1 == 0)) {
      *param_4 = uVar7;
      goto code_r0x00104f4d;
    }
  }
  lVar8 = func_0x00101680(param_5,(ulong)(uint)(int)(char)bVar1);
  uVar12 = (uint)unaff_RBP;
  if (lVar8 == 0) goto code_r0x0010508c;
  if ((((byte)((uint)bVar1 - 0x45) < 0x30) &&
      ((0x814400308945U >> ((ulong)((uint)bVar1 - 0x45) & 0x1f) & 1) != 0)) &&
     (lVar8 = func_0x00101680(param_5,0x30), lVar8 != 0)) {
    bVar2 = puVar11[1];
    if (bVar2 != 0x44) {
      if (bVar2 == 0x69) {
        puVar13 = (undefined *)0x400;
        puVar15 = (undefined *)(ulong)((uint)(puVar11[2] == 0x42) + 1 + (uint)(puVar11[2] == 0x42));
        goto code_r0x0010502a;
      }
      if (bVar2 != 0x42) goto code_r0x00105020;
    }
    puVar15 = (undefined *)0x2;
    puVar13 = (undefined *)0x3e8;
  }
  else {
code_r0x00105020:
    puVar15 = (undefined *)0x1;
    puVar13 = (undefined *)0x400;
  }
code_r0x0010502a:
  iVar14 = (int)puVar15;
  switch(bVar1) {
  case 0x42:
    if (SUB168(ZEXT816(0x400) * ZEXT816(uVar7) >> 0x40,0) == 0) {
      uVar7 = uVar7 << 10;
      goto code_r0x00105070;
    }
    break;
  default:
code_r0x0010508c:
    *param_4 = uVar7;
    unaff_RBP = (ulong)(uVar12 | 2);
    goto code_r0x00104f4d;
  case 0x45:
    uVar17 = 6;
    uVar18 = 0;
    goto code_r0x0010517c;
  case 0x47:
  case 0x67:
    uVar10 = SUB168(ZEXT816(uVar7) * ZEXT816(puVar13),0);
    bVar19 = SUB168(ZEXT816(uVar7) * ZEXT816(puVar13) >> 0x40,0) != 0;
    if (bVar19) {
      uVar10 = 0xffffffffffffffff;
    }
    uVar17 = (ulong)bVar19;
    uVar9 = SUB168(ZEXT816(uVar10) * ZEXT816(puVar13),0);
    if (SUB168(ZEXT816(uVar10) * ZEXT816(puVar13) >> 0x40,0) != 0) {
      uVar17 = 1;
      uVar9 = 0xffffffffffffffff;
    }
    goto code_r0x00105057;
  case 0x4b:
  case 0x6b:
    auVar3 = ZEXT816(uVar7);
    uVar7 = SUB168(auVar3 * ZEXT816(puVar13),0);
    if (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) == 0) goto code_r0x00105070;
    break;
  case 0x4d:
  case 0x6d:
    uVar9 = SUB168(ZEXT816(uVar7) * ZEXT816(puVar13),0);
    if (SUB168(ZEXT816(uVar7) * ZEXT816(puVar13) >> 0x40,0) == 0) {
      uVar17 = 0;
    }
    else {
      uVar9 = 0xffffffffffffffff;
      uVar17 = 1;
    }
code_r0x00105057:
    uVar7 = SUB168(ZEXT816(uVar9) * ZEXT816(puVar13),0);
    if (SUB168(ZEXT816(uVar9) * ZEXT816(puVar13) >> 0x40,0) != 0) {
      uVar17 = 1;
      uVar7 = 0xffffffffffffffff;
    }
    unaff_RBP = (ulong)(uVar12 | (uint)uVar17);
    goto code_r0x00105070;
  case 0x50:
    uVar17 = 5;
    uVar18 = 0;
    do {
      auVar3 = ZEXT816(uVar7);
      uVar7 = SUB168(auVar3 * ZEXT816(puVar13),0);
      if (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) != 0) {
        uVar18 = 1;
        uVar7 = 0xffffffffffffffff;
      }
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar16;
      if (uVar16 == 0) goto code_r0x001050e5;
    } while( true );
  case 0x54:
  case 0x74:
    uVar17 = 4;
    uVar18 = 0;
    do {
      auVar3 = ZEXT816(uVar7);
      uVar7 = SUB168(auVar3 * ZEXT816(puVar13),0);
      if (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) != 0) {
        uVar18 = 1;
        uVar7 = 0xffffffffffffffff;
      }
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar16;
      if (uVar16 == 0) goto code_r0x001050e5;
    } while( true );
  case 0x59:
    uVar17 = 8;
    uVar18 = 0;
    do {
      auVar3 = ZEXT816(uVar7);
      uVar7 = SUB168(auVar3 * ZEXT816(puVar13),0);
      if (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) != 0) {
        uVar18 = 1;
        uVar7 = 0xffffffffffffffff;
      }
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar16;
      if (uVar16 == 0) goto code_r0x001050e5;
    } while( true );
  case 0x5a:
    uVar17 = 7;
    uVar18 = 0;
    do {
      auVar3 = ZEXT816(uVar7);
      uVar7 = SUB168(auVar3 * ZEXT816(puVar13),0);
      if (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) != 0) {
        uVar18 = 1;
        uVar7 = 0xffffffffffffffff;
      }
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar16;
      if (uVar16 == 0) goto code_r0x001050e5;
    } while( true );
  case 0x62:
    if (SUB168(ZEXT816(0x200) * ZEXT816(uVar7) >> 0x40,0) == 0) {
      uVar7 = uVar7 << 9;
    }
    break;
  case 99:
    goto code_r0x00105070;
  case 0x77:
    if (SUB168(ZEXT816(2) * ZEXT816(uVar7) >> 0x40,0) == 0) {
      uVar7 = uVar7 * 2;
      goto code_r0x00105070;
    }
  }
  unaff_RBP = 1;
  uVar7 = 0xffffffffffffffff;
code_r0x00105070:
  *unaff_R15 = puVar11 + iVar14;
  bVar1 = puVar11[iVar14];
  *param_4 = uVar7;
  if (bVar1 != 0) {
    unaff_RBP = (ulong)((uint)unaff_RBP | 2);
  }
code_r0x00104f4d:
  if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
    return unaff_RBP;
  }
  func_0x00101650();
  unaff_R14 = param_4;
code_r0x001051f5:
  param_4 = unaff_R14;
  puVar11 = __PRETTY_FUNCTION___4162;
  puVar13 = &UNK_00108ae0;
  puVar15 = &UNK_00108af0;
  func_0x001016b0(&UNK_00108af0,&UNK_00108ae0,0x54);
  do {
    uVar18 = 1;
    uVar7 = 0xffffffffffffffff;
    do {
      iVar14 = (int)puVar15;
      uVar12 = (uint)unaff_RBP;
      uVar16 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar16;
      if (uVar16 == 0) goto code_r0x001050e5;
code_r0x0010517c:
      auVar3 = ZEXT816(uVar7);
      uVar7 = SUB168(auVar3 * ZEXT816(puVar13),0);
    } while (SUB168(auVar3 * ZEXT816(puVar13) >> 0x40,0) == 0);
  } while( true );
code_r0x001050e5:
  unaff_RBP = (ulong)(uVar12 | uVar18);
  goto code_r0x00105070;
}

