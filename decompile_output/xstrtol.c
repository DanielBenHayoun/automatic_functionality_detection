
ulong xstrtol(ulong *param_1,ulong **param_2,uint param_3,ulong *param_4,ulong **param_5)

{
  char cVar1;
  byte bVar2;
  undefined auVar3 [16];
  uint uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined1 *puVar14;
  uint extraout_EDX;
  ulong **unaff_RBX;
  ulong unaff_RBP;
  long lVar15;
  ulong **ppuVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  ulong *puVar20;
  undefined *puVar21;
  uint uVar22;
  ulong **ppuVar23;
  ulong **ppuVar24;
  uint uVar25;
  ulong unaff_R12;
  byte bVar26;
  int *unaff_R13;
  ulong *unaff_R14;
  ulong **unaff_R15;
  ulong **ppuVar27;
  long in_FS_OFFSET;
  bool bVar28;
  ulong *puStack160;
  long lStack152;
  ulong **ppuStack136;
  ulong uStack128;
  ulong uStack120;
  int *piStack112;
  ulong *puStack104;
  ulong **ppuStack96;
  ulong *puStack80;
  ulong *puStack72;
  ulong uStack64;
  
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (0x24 < param_3) {
    puVar13 = &__PRETTY_FUNCTION___4162;
    ppuVar16 = (ulong **)&UNK_0010e360;
    puVar20 = (ulong *)&UNK_0010e370;
    ppuStack96 = (ulong **)&UNK_0010882e;
    func_0x001025a0(&UNK_0010e370,&UNK_0010e360,0x54);
    ppuVar23 = param_5;
    goto code_r0x0010882e;
  }
  unaff_RBX = param_2;
  if (param_2 == (ulong **)0x0) {
    unaff_RBX = &puStack72;
  }
  ppuStack96 = (ulong **)&UNK_001081c6;
  ppuVar23 = param_5;
  unaff_R13 = (int *)func_0x00102450();
  *unaff_R13 = 0;
  ppuStack96 = (ulong **)&UNK_001081dc;
  ppuVar16 = unaff_RBX;
  unaff_RBP = func_0x00102630(param_1,unaff_RBX,(ulong)param_3);
  puVar13 = *unaff_RBX;
  if (puVar13 == param_1) {
    if (param_5 == (ulong **)0x0) {
      unaff_R12 = 4;
    }
    else {
      bVar26 = *(byte *)puVar13;
      unaff_R13 = (int *)(ulong)bVar26;
      unaff_R12 = 4;
      puStack80 = puVar13;
      if (bVar26 != 0) {
        ppuVar16 = (ulong **)(ulong)(uint)(int)(char)bVar26;
        ppuStack96 = (ulong **)&UNK_00108271;
        lVar10 = func_0x00102560(param_5);
        puVar13 = puStack80;
        if (lVar10 != 0) {
          uVar9 = 1;
          unaff_R12 = 0;
          goto code_r0x00108283;
        }
      }
    }
    goto code_r0x00108207;
  }
  if (*unaff_R13 == 0) {
    unaff_R12 = 0;
  }
  else {
    unaff_R12 = 4;
    if (*unaff_R13 != 0x22) goto code_r0x00108207;
    unaff_R12 = 1;
  }
  if ((param_5 == (ulong **)0x0) ||
     (unaff_R13 = (int *)(ulong)*(byte *)puVar13, uVar9 = unaff_RBP, *(byte *)puVar13 == 0))
  goto code_r0x00108204;
code_r0x00108283:
  ppuVar16 = (ulong **)(ulong)(uint)(int)(char)unaff_R13;
  ppuStack96 = (ulong **)&UNK_00108294;
  puStack80 = puVar13;
  lVar10 = func_0x00102560(param_5);
  uVar25 = (uint)unaff_R12;
  unaff_RBP = uVar9;
  if (lVar10 == 0) {
code_r0x001082f8:
    *param_4 = uVar9;
    unaff_R12 = (ulong)(uVar25 | 2);
    puVar13 = puStack80;
    goto code_r0x00108207;
  }
  uVar4 = (int)unaff_R13 - 0x45;
  if (((byte)uVar4 < 0x30) && ((0x814400308945U >> ((ulong)uVar4 & 0x1f) & 1) != 0)) {
    ppuStack96 = (ulong **)&UNK_001082c8;
    lVar10 = func_0x00102560();
    if (lVar10 == 0) goto code_r0x00108308;
    cVar1 = *(char *)((long)puStack80 + 1);
    if (cVar1 == 'D') {
code_r0x001082e6:
      iVar18 = 2;
      iVar19 = 1000;
    }
    else {
      if (cVar1 != 'i') {
        if (cVar1 != 'B') goto code_r0x00108308;
        goto code_r0x001082e6;
      }
      bVar28 = *(char *)((long)puStack80 + 2) == 'B';
      iVar19 = 0x400;
      iVar18 = (uint)bVar28 + 1 + (uint)bVar28;
    }
  }
  else {
code_r0x00108308:
    iVar18 = 1;
    iVar19 = 0x400;
  }
  bVar26 = (char)unaff_R13 + 0xbe;
  ppuVar16 = (ulong **)&UNK_0010e398;
  unaff_R13 = (int *)(ulong)bVar26;
  switch(bVar26) {
  case 0:
    if ((long)uVar9 < -0x20000000000000) {
code_r0x001086f0:
      unaff_R12 = 1;
      unaff_RBP = 0x8000000000000000;
    }
    else {
      if ((long)uVar9 < 0x20000000000000) {
        unaff_RBP = uVar9 << 10;
      }
      else {
code_r0x001087b0:
        unaff_R12 = 1;
        unaff_RBP = 0x7fffffffffffffff;
      }
    }
    break;
  default:
    goto code_r0x001082f8;
  case 3:
    lVar10 = (long)iVar19;
    ppuVar23 = (ulong **)0x6;
    uVar4 = 0;
    do {
      if ((long)uVar9 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0))
      {
        uVar4 = 1;
        uVar9 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0)
            < (long)uVar9) {
          uVar4 = 1;
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = uVar9 * lVar10;
        }
      }
      uVar22 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar22;
    } while (uVar22 != 0);
    goto code_r0x00108580;
  case 5:
  case 0x25:
    lVar10 = (long)iVar19;
    ppuVar23 = (ulong **)0x3;
    uVar4 = 0;
    do {
      if ((long)uVar9 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0))
      {
        uVar4 = 1;
        uVar9 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0)
            < (long)uVar9) {
          uVar4 = 1;
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = uVar9 * lVar10;
        }
      }
      uVar22 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar22;
    } while (uVar22 != 0);
    goto code_r0x00108580;
  case 9:
  case 0x29:
    ppuVar23 = (ulong **)0x8000000000000000;
    ppuVar16 = (ulong **)(long)iVar19;
    if ((long)uVar9 <
        SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
               SEXT816((long)ppuVar16),0)) goto code_r0x001086f0;
    ppuVar23 = (ulong **)0x7fffffffffffffff;
    if (0x7fffffffffffffff / (long)ppuVar16 < (long)uVar9) goto code_r0x001087b0;
    unaff_RBP = uVar9 * (long)ppuVar16;
    break;
  case 0xb:
  case 0x2b:
    ppuVar23 = (ulong **)0x8000000000000000;
    ppuVar16 = (ulong **)(long)iVar19;
    lVar10 = SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
                    SEXT816((long)ppuVar16),0);
    if ((long)uVar9 < lVar10) {
code_r0x001087f5:
      uVar4 = 1;
      unaff_RBP = 0x8000000000000000;
    }
    else {
      unaff_RBP = 0x7fffffffffffffff;
      lVar5 = SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) /
                     SEXT816((long)ppuVar16),0);
      if (lVar5 < (long)uVar9) {
code_r0x00108802:
        uVar4 = 1;
      }
      else {
        lVar15 = uVar9 * (long)ppuVar16;
        if (lVar15 < lVar10) goto code_r0x001087f5;
        if (lVar5 < lVar15) goto code_r0x00108802;
        unaff_RBP = lVar15 * (long)ppuVar16;
        uVar4 = 0;
      }
    }
    unaff_R12 = (ulong)(uVar25 | uVar4);
    break;
  case 0xe:
    lVar10 = (long)iVar19;
    ppuVar23 = (ulong **)0x5;
    uVar4 = 0;
    do {
      if ((long)uVar9 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0))
      {
        uVar4 = 1;
        uVar9 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0)
            < (long)uVar9) {
          uVar4 = 1;
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = uVar9 * lVar10;
        }
      }
      uVar22 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar22;
    } while (uVar22 != 0);
    goto code_r0x00108580;
  case 0x12:
  case 0x32:
    lVar10 = (long)iVar19;
    ppuVar23 = (ulong **)0x4;
    uVar4 = 0;
    do {
      if ((long)uVar9 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0))
      {
        uVar4 = 1;
        uVar9 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0)
            < (long)uVar9) {
          uVar4 = 1;
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = uVar9 * lVar10;
        }
      }
      uVar22 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar22;
    } while (uVar22 != 0);
    goto code_r0x00108580;
  case 0x17:
    lVar10 = (long)iVar19;
    ppuVar23 = (ulong **)0x8;
    uVar4 = 0;
    do {
      if ((long)uVar9 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0))
      {
        uVar4 = 1;
        uVar9 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0)
            < (long)uVar9) {
          uVar4 = 1;
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = uVar9 * lVar10;
        }
      }
      uVar22 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar22;
    } while (uVar22 != 0);
    goto code_r0x00108580;
  case 0x18:
    lVar10 = (long)iVar19;
    ppuVar23 = (ulong **)0x7;
    uVar4 = 0;
    do {
      if ((long)uVar9 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar10),0))
      {
        uVar4 = 1;
        uVar9 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar10),0)
            < (long)uVar9) {
          uVar4 = 1;
          uVar9 = 0x7fffffffffffffff;
        }
        else {
          uVar9 = uVar9 * lVar10;
        }
      }
      uVar22 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar22;
    } while (uVar22 != 0);
code_r0x00108580:
    ppuVar16 = (ulong **)(long)iVar19;
    unaff_R12 = (ulong)(uVar25 | uVar4);
    unaff_RBP = uVar9;
    break;
  case 0x20:
    if ((long)uVar9 < -0x40000000000000) goto code_r0x001086f0;
    if (0x3fffffffffffff < (long)uVar9) goto code_r0x001087b0;
    unaff_RBP = uVar9 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar9 < -0x4000000000000000) goto code_r0x001086f0;
    if (0x3fffffffffffffff < (long)uVar9) goto code_r0x001087b0;
    unaff_RBP = uVar9 * 2;
  }
  puVar13 = (ulong *)((long)puStack80 + (long)iVar18);
  *unaff_RBX = puVar13;
  if (*(char *)puVar13 != '\0') {
    unaff_R12 = (ulong)((uint)unaff_R12 | 2);
  }
code_r0x00108204:
  *param_4 = unaff_RBP;
code_r0x00108207:
  puVar20 = (ulong *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  unaff_R14 = param_4;
  unaff_R15 = param_5;
  if (puVar20 == (ulong *)0x0) {
    return unaff_R12;
  }
code_r0x0010882e:
  ppuStack96 = (ulong **)&UNK_00108833;
  func_0x00102520();
  lStack152 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar24 = ppuVar23;
  ppuVar27 = unaff_R15;
  ppuStack136 = unaff_RBX;
  uStack128 = unaff_RBP;
  uStack120 = unaff_R12;
  piStack112 = unaff_R13;
  puStack104 = unaff_R14;
  ppuStack96 = unaff_R15;
  if (0x24 < extraout_EDX) goto code_r0x00108bc5;
  ppuVar27 = ppuVar16;
  if (ppuVar16 == (ulong **)0x0) {
    ppuVar27 = &puStack160;
  }
  piVar6 = (int *)func_0x00102450();
  *piVar6 = 0;
  bVar26 = *(byte *)puVar20;
  plVar7 = (long *)func_0x001027b0();
  puVar8 = puVar20;
  while ((*(byte *)(*plVar7 + 1 + (ulong)bVar26 * 2) & 0x20) != 0) {
    puVar8 = (ulong *)((long)puVar8 + 1);
    bVar26 = *(byte *)puVar8;
  }
  if (bVar26 == 0x2d) goto code_r0x00108918;
  uVar9 = func_0x001025b0(puVar20,ppuVar27,(ulong)extraout_EDX,0);
  puVar14 = (undefined1 *)*ppuVar27;
  if ((ulong *)puVar14 == puVar20) {
    if ((ppuVar23 == (ulong **)0x0) || (bVar26 = *(byte *)puVar20, bVar26 == 0)) {
code_r0x00108918:
      unaff_RBP = 4;
      goto code_r0x0010891d;
    }
    unaff_RBP = 0;
    lVar10 = func_0x00102560(ppuVar23,(ulong)(uint)(int)(char)bVar26);
    uVar9 = 1;
    if (lVar10 == 0) goto code_r0x00108918;
  }
  else {
    if (*piVar6 == 0) {
      unaff_RBP = 0;
    }
    else {
      unaff_RBP = 1;
      if (*piVar6 != 0x22) goto code_r0x00108918;
    }
    if ((ppuVar23 == (ulong **)0x0) || (bVar26 = *puVar14, bVar26 == 0)) {
      *puVar13 = uVar9;
      goto code_r0x0010891d;
    }
  }
  lVar10 = func_0x00102560(ppuVar23,(ulong)(uint)(int)(char)bVar26);
  uVar25 = (uint)unaff_RBP;
  if (lVar10 == 0) goto code_r0x00108a5c;
  if ((((byte)((uint)bVar26 - 0x45) < 0x30) &&
      ((0x814400308945U >> ((ulong)((uint)bVar26 - 0x45) & 0x1f) & 1) != 0)) &&
     (lVar10 = func_0x00102560(ppuVar23,0x30), lVar10 != 0)) {
    bVar2 = *(byte *)((long)puVar14 + 1);
    if (bVar2 != 0x44) {
      if (bVar2 == 0x69) {
        bVar28 = *(byte *)((long)puVar14 + 2) == 0x42;
        puVar17 = (undefined *)0x400;
        puVar21 = (undefined *)(ulong)((uint)bVar28 + 1 + (uint)bVar28);
        goto code_r0x001089fa;
      }
      if (bVar2 != 0x42) goto code_r0x001089f0;
    }
    puVar21 = (undefined *)0x2;
    puVar17 = (undefined *)0x3e8;
  }
  else {
code_r0x001089f0:
    puVar21 = (undefined *)0x1;
    puVar17 = (undefined *)0x400;
  }
code_r0x001089fa:
  iVar19 = (int)puVar21;
  switch(bVar26) {
  case 0x42:
    if (SUB168(ZEXT816(0x400) * ZEXT816(uVar9) >> 0x40,0) == 0) {
      uVar9 = uVar9 << 10;
      goto code_r0x00108a40;
    }
    break;
  default:
code_r0x00108a5c:
    *puVar13 = uVar9;
    unaff_RBP = (ulong)(uVar25 | 2);
    goto code_r0x0010891d;
  case 0x45:
    ppuVar24 = (ulong **)0x6;
    uVar4 = 0;
    goto code_r0x00108b4c;
  case 0x47:
  case 0x67:
    uVar12 = SUB168(ZEXT816(uVar9) * ZEXT816(puVar17),0);
    bVar28 = SUB168(ZEXT816(uVar9) * ZEXT816(puVar17) >> 0x40,0) != 0;
    if (bVar28) {
      uVar12 = 0xffffffffffffffff;
    }
    ppuVar24 = (ulong **)(ulong)bVar28;
    uVar11 = SUB168(ZEXT816(uVar12) * ZEXT816(puVar17),0);
    if (SUB168(ZEXT816(uVar12) * ZEXT816(puVar17) >> 0x40,0) != 0) {
      ppuVar24 = (ulong **)0x1;
      uVar11 = 0xffffffffffffffff;
    }
    goto code_r0x00108a27;
  case 0x4b:
  case 0x6b:
    auVar3 = ZEXT816(uVar9);
    uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
    if (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) == 0) goto code_r0x00108a40;
    break;
  case 0x4d:
  case 0x6d:
    uVar11 = SUB168(ZEXT816(uVar9) * ZEXT816(puVar17),0);
    if (SUB168(ZEXT816(uVar9) * ZEXT816(puVar17) >> 0x40,0) == 0) {
      ppuVar24 = (ulong **)0x0;
    }
    else {
      uVar11 = 0xffffffffffffffff;
      ppuVar24 = (ulong **)0x1;
    }
code_r0x00108a27:
    uVar9 = SUB168(ZEXT816(uVar11) * ZEXT816(puVar17),0);
    if (SUB168(ZEXT816(uVar11) * ZEXT816(puVar17) >> 0x40,0) != 0) {
      ppuVar24 = (ulong **)0x1;
      uVar9 = 0xffffffffffffffff;
    }
    unaff_RBP = (ulong)(uVar25 | (uint)ppuVar24);
    goto code_r0x00108a40;
  case 0x50:
    ppuVar24 = (ulong **)0x5;
    uVar4 = 0;
    do {
      auVar3 = ZEXT816(uVar9);
      uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
      if (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) != 0) {
        uVar4 = 1;
        uVar9 = 0xffffffffffffffff;
      }
      uVar22 = (int)ppuVar24 - 1;
      ppuVar24 = (ulong **)(ulong)uVar22;
      if (uVar22 == 0) goto code_r0x00108ab5;
    } while( true );
  case 0x54:
  case 0x74:
    ppuVar24 = (ulong **)0x4;
    uVar4 = 0;
    do {
      auVar3 = ZEXT816(uVar9);
      uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
      if (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) != 0) {
        uVar4 = 1;
        uVar9 = 0xffffffffffffffff;
      }
      uVar22 = (int)ppuVar24 - 1;
      ppuVar24 = (ulong **)(ulong)uVar22;
      if (uVar22 == 0) goto code_r0x00108ab5;
    } while( true );
  case 0x59:
    ppuVar24 = (ulong **)0x8;
    uVar4 = 0;
    do {
      auVar3 = ZEXT816(uVar9);
      uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
      if (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) != 0) {
        uVar4 = 1;
        uVar9 = 0xffffffffffffffff;
      }
      uVar22 = (int)ppuVar24 - 1;
      ppuVar24 = (ulong **)(ulong)uVar22;
      if (uVar22 == 0) goto code_r0x00108ab5;
    } while( true );
  case 0x5a:
    ppuVar24 = (ulong **)0x7;
    uVar4 = 0;
    do {
      auVar3 = ZEXT816(uVar9);
      uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
      if (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) != 0) {
        uVar4 = 1;
        uVar9 = 0xffffffffffffffff;
      }
      uVar22 = (int)ppuVar24 - 1;
      ppuVar24 = (ulong **)(ulong)uVar22;
      if (uVar22 == 0) goto code_r0x00108ab5;
    } while( true );
  case 0x62:
    if (SUB168(ZEXT816(0x200) * ZEXT816(uVar9) >> 0x40,0) == 0) {
      uVar9 = uVar9 << 9;
    }
    break;
  case 99:
    goto code_r0x00108a40;
  case 0x77:
    if (SUB168(ZEXT816(2) * ZEXT816(uVar9) >> 0x40,0) == 0) {
      uVar9 = uVar9 * 2;
      goto code_r0x00108a40;
    }
  }
  unaff_RBP = 1;
  uVar9 = 0xffffffffffffffff;
code_r0x00108a40:
  *ppuVar27 = (ulong *)((long)puVar14 + (long)iVar19);
  bVar26 = *(byte *)(ulong *)((long)puVar14 + (long)iVar19);
  *puVar13 = uVar9;
  if (bVar26 != 0) {
    unaff_RBP = (ulong)((uint)unaff_RBP | 2);
  }
code_r0x0010891d:
  if (lStack152 == *(long *)(in_FS_OFFSET + 0x28)) {
    return unaff_RBP;
  }
  func_0x00102520();
  unaff_R14 = puVar13;
code_r0x00108bc5:
  puVar13 = unaff_R14;
  puVar14 = __PRETTY_FUNCTION___4162;
  puVar17 = &UNK_0010e360;
  puVar21 = &UNK_0010e370;
  func_0x001025a0(&UNK_0010e370,&UNK_0010e360,0x54);
  do {
    uVar4 = 1;
    uVar9 = 0xffffffffffffffff;
    do {
      iVar19 = (int)puVar21;
      uVar25 = (uint)unaff_RBP;
      uVar22 = (int)ppuVar24 - 1;
      ppuVar24 = (ulong **)(ulong)uVar22;
      if (uVar22 == 0) goto code_r0x00108ab5;
code_r0x00108b4c:
      auVar3 = ZEXT816(uVar9);
      uVar9 = SUB168(auVar3 * ZEXT816(puVar17),0);
    } while (SUB168(auVar3 * ZEXT816(puVar17) >> 0x40,0) == 0);
  } while( true );
code_r0x00108ab5:
  unaff_RBP = (ulong)(uVar25 | uVar4);
  goto code_r0x00108a40;
}

