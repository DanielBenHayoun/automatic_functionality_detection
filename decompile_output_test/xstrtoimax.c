
ulong xstrtoimax(ulong *param_1,ulong **param_2,uint param_3,ulong *param_4,ulong **param_5)

{
  byte bVar1;
  undefined auVar2 [16];
  uint uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint extraout_EDX;
  ulong **unaff_RBX;
  ulong unaff_RBP;
  long lVar14;
  ulong **ppuVar15;
  undefined *puVar16;
  int iVar17;
  int iVar18;
  ulong *puVar19;
  undefined *puVar20;
  uint uVar21;
  ulong **ppuVar22;
  ulong **ppuVar23;
  uint uVar24;
  ulong unaff_R12;
  byte bVar25;
  int *unaff_R13;
  ulong *unaff_R14;
  ulong **unaff_R15;
  ulong **ppuVar26;
  long in_FS_OFFSET;
  bool bVar27;
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
    puVar12 = __PRETTY_FUNCTION___4162;
    ppuVar15 = (ulong **)&UNK_001173cf;
    puVar19 = (ulong *)&UNK_001173e0;
    ppuStack96 = (ulong **)&UNK_0010735e;
    func_0x00101c90(&UNK_001173e0,&UNK_001173cf,0x54);
    ppuVar22 = param_5;
    goto code_r0x0010735e;
  }
  unaff_RBX = param_2;
  if (param_2 == (ulong **)0x0) {
    unaff_RBX = &puStack72;
  }
  ppuStack96 = (ulong **)&UNK_00106cf6;
  ppuVar22 = param_5;
  unaff_R13 = (int *)func_0x00101b20();
  *unaff_R13 = 0;
  ppuStack96 = (ulong **)&UNK_00106d0e;
  ppuVar15 = unaff_RBX;
  unaff_RBP = func_0x00101bb0(param_1,unaff_RBX,(ulong)param_3,0);
  puVar12 = (undefined1 *)*unaff_RBX;
  if ((ulong *)puVar12 == param_1) {
    if (param_5 == (ulong **)0x0) {
      unaff_R12 = 4;
    }
    else {
      bVar25 = *puVar12;
      unaff_R13 = (int *)(ulong)bVar25;
      unaff_R12 = 4;
      puStack80 = (ulong *)puVar12;
      if (bVar25 != 0) {
        ppuVar15 = (ulong **)(ulong)(uint)(int)(char)bVar25;
        ppuStack96 = (ulong **)&UNK_00106da1;
        lVar9 = func_0x00101c60(param_5);
        puVar12 = (undefined1 *)puStack80;
        if (lVar9 != 0) {
          uVar8 = 1;
          unaff_R12 = 0;
          goto code_r0x00106db3;
        }
      }
    }
    goto code_r0x00106d39;
  }
  if (*unaff_R13 == 0) {
    unaff_R12 = 0;
  }
  else {
    unaff_R12 = 4;
    if (*unaff_R13 != 0x22) goto code_r0x00106d39;
    unaff_R12 = 1;
  }
  if ((param_5 == (ulong **)0x0) ||
     (unaff_R13 = (int *)(ulong)(byte)*puVar12, uVar8 = unaff_RBP, *puVar12 == 0))
  goto code_r0x00106d36;
code_r0x00106db3:
  ppuVar15 = (ulong **)(ulong)(uint)(int)(char)unaff_R13;
  ppuStack96 = (ulong **)&UNK_00106dc4;
  puStack80 = (ulong *)puVar12;
  lVar9 = func_0x00101c60(param_5);
  uVar24 = (uint)unaff_R12;
  unaff_RBP = uVar8;
  if (lVar9 == 0) {
code_r0x00106e28:
    *param_4 = uVar8;
    unaff_R12 = (ulong)(uVar24 | 2);
    puVar12 = (undefined1 *)puStack80;
    goto code_r0x00106d39;
  }
  uVar3 = (int)unaff_R13 - 0x45;
  if (((byte)uVar3 < 0x30) && ((0x814400308945U >> ((ulong)uVar3 & 0x1f) & 1) != 0)) {
    ppuStack96 = (ulong **)&UNK_00106df8;
    lVar9 = func_0x00101c60();
    if (lVar9 == 0) goto code_r0x00106e38;
    bVar25 = *(byte *)((long)puStack80 + 1);
    if (bVar25 == 0x44) {
code_r0x00106e16:
      iVar17 = 2;
      iVar18 = 1000;
    }
    else {
      if (bVar25 != 0x69) {
        if (bVar25 != 0x42) goto code_r0x00106e38;
        goto code_r0x00106e16;
      }
      bVar27 = *(byte *)((long)puStack80 + 2) == 0x42;
      iVar18 = 0x400;
      iVar17 = (uint)bVar27 + 1 + (uint)bVar27;
    }
  }
  else {
code_r0x00106e38:
    iVar17 = 1;
    iVar18 = 0x400;
  }
  bVar25 = (char)unaff_R13 + 0xbe;
  ppuVar15 = (ulong **)&UNK_00117408;
  unaff_R13 = (int *)(ulong)bVar25;
  switch(bVar25) {
  case 0:
    if ((long)uVar8 < -0x20000000000000) {
code_r0x00107220:
      unaff_R12 = 1;
      unaff_RBP = 0x8000000000000000;
    }
    else {
      if ((long)uVar8 < 0x20000000000000) {
        unaff_RBP = uVar8 << 10;
      }
      else {
code_r0x001072e0:
        unaff_R12 = 1;
        unaff_RBP = 0x7fffffffffffffff;
      }
    }
    break;
  default:
    goto code_r0x00106e28;
  case 3:
    lVar9 = (long)iVar18;
    ppuVar22 = (ulong **)0x6;
    uVar3 = 0;
    do {
      if ((long)uVar8 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar9),0)) {
        uVar3 = 1;
        uVar8 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0)
            < (long)uVar8) {
          uVar3 = 1;
          uVar8 = 0x7fffffffffffffff;
        }
        else {
          uVar8 = uVar8 * lVar9;
        }
      }
      uVar21 = (int)ppuVar22 - 1;
      ppuVar22 = (ulong **)(ulong)uVar21;
    } while (uVar21 != 0);
    goto code_r0x001070b0;
  case 5:
  case 0x25:
    lVar9 = (long)iVar18;
    ppuVar22 = (ulong **)0x3;
    uVar3 = 0;
    do {
      if ((long)uVar8 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar9),0)) {
        uVar3 = 1;
        uVar8 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0)
            < (long)uVar8) {
          uVar3 = 1;
          uVar8 = 0x7fffffffffffffff;
        }
        else {
          uVar8 = uVar8 * lVar9;
        }
      }
      uVar21 = (int)ppuVar22 - 1;
      ppuVar22 = (ulong **)(ulong)uVar21;
    } while (uVar21 != 0);
    goto code_r0x001070b0;
  case 9:
  case 0x29:
    ppuVar22 = (ulong **)0x8000000000000000;
    ppuVar15 = (ulong **)(long)iVar18;
    if ((long)uVar8 <
        SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
               SEXT816((long)ppuVar15),0)) goto code_r0x00107220;
    ppuVar22 = (ulong **)0x7fffffffffffffff;
    if (0x7fffffffffffffff / (long)ppuVar15 < (long)uVar8) goto code_r0x001072e0;
    unaff_RBP = uVar8 * (long)ppuVar15;
    break;
  case 0xb:
  case 0x2b:
    ppuVar22 = (ulong **)0x8000000000000000;
    ppuVar15 = (ulong **)(long)iVar18;
    lVar9 = SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) /
                   SEXT816((long)ppuVar15),0);
    if ((long)uVar8 < lVar9) {
code_r0x00107325:
      uVar3 = 1;
      unaff_RBP = 0x8000000000000000;
    }
    else {
      unaff_RBP = 0x7fffffffffffffff;
      lVar4 = SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) /
                     SEXT816((long)ppuVar15),0);
      if (lVar4 < (long)uVar8) {
code_r0x00107332:
        uVar3 = 1;
      }
      else {
        lVar14 = uVar8 * (long)ppuVar15;
        if (lVar14 < lVar9) goto code_r0x00107325;
        if (lVar4 < lVar14) goto code_r0x00107332;
        unaff_RBP = lVar14 * (long)ppuVar15;
        uVar3 = 0;
      }
    }
    unaff_R12 = (ulong)(uVar24 | uVar3);
    break;
  case 0xe:
    lVar9 = (long)iVar18;
    ppuVar22 = (ulong **)0x5;
    uVar3 = 0;
    do {
      if ((long)uVar8 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar9),0)) {
        uVar3 = 1;
        uVar8 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0)
            < (long)uVar8) {
          uVar3 = 1;
          uVar8 = 0x7fffffffffffffff;
        }
        else {
          uVar8 = uVar8 * lVar9;
        }
      }
      uVar21 = (int)ppuVar22 - 1;
      ppuVar22 = (ulong **)(ulong)uVar21;
    } while (uVar21 != 0);
    goto code_r0x001070b0;
  case 0x12:
  case 0x32:
    lVar9 = (long)iVar18;
    ppuVar22 = (ulong **)0x4;
    uVar3 = 0;
    do {
      if ((long)uVar8 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar9),0)) {
        uVar3 = 1;
        uVar8 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0)
            < (long)uVar8) {
          uVar3 = 1;
          uVar8 = 0x7fffffffffffffff;
        }
        else {
          uVar8 = uVar8 * lVar9;
        }
      }
      uVar21 = (int)ppuVar22 - 1;
      ppuVar22 = (ulong **)(ulong)uVar21;
    } while (uVar21 != 0);
    goto code_r0x001070b0;
  case 0x17:
    lVar9 = (long)iVar18;
    ppuVar22 = (ulong **)0x8;
    uVar3 = 0;
    do {
      if ((long)uVar8 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar9),0)) {
        uVar3 = 1;
        uVar8 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0)
            < (long)uVar8) {
          uVar3 = 1;
          uVar8 = 0x7fffffffffffffff;
        }
        else {
          uVar8 = uVar8 * lVar9;
        }
      }
      uVar21 = (int)ppuVar22 - 1;
      ppuVar22 = (ulong **)(ulong)uVar21;
    } while (uVar21 != 0);
    goto code_r0x001070b0;
  case 0x18:
    lVar9 = (long)iVar18;
    ppuVar22 = (ulong **)0x7;
    uVar3 = 0;
    do {
      if ((long)uVar8 <
          SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000)) / SEXT816(lVar9),0)) {
        uVar3 = 1;
        uVar8 = 0x8000000000000000;
      }
      else {
        if (SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0)
            < (long)uVar8) {
          uVar3 = 1;
          uVar8 = 0x7fffffffffffffff;
        }
        else {
          uVar8 = uVar8 * lVar9;
        }
      }
      uVar21 = (int)ppuVar22 - 1;
      ppuVar22 = (ulong **)(ulong)uVar21;
    } while (uVar21 != 0);
code_r0x001070b0:
    ppuVar15 = (ulong **)(long)iVar18;
    unaff_R12 = (ulong)(uVar24 | uVar3);
    unaff_RBP = uVar8;
    break;
  case 0x20:
    if ((long)uVar8 < -0x40000000000000) goto code_r0x00107220;
    if (0x3fffffffffffff < (long)uVar8) goto code_r0x001072e0;
    unaff_RBP = uVar8 << 9;
    break;
  case 0x21:
    break;
  case 0x35:
    if ((long)uVar8 < -0x4000000000000000) goto code_r0x00107220;
    if (0x3fffffffffffffff < (long)uVar8) goto code_r0x001072e0;
    unaff_RBP = uVar8 * 2;
  }
  puVar12 = (undefined1 *)((long)puStack80 + (long)iVar17);
  *(undefined1 **)unaff_RBX = puVar12;
  if (*puVar12 != 0) {
    unaff_R12 = (ulong)((uint)unaff_R12 | 2);
  }
code_r0x00106d36:
  *param_4 = unaff_RBP;
code_r0x00106d39:
  puVar19 = (ulong *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  unaff_R14 = param_4;
  unaff_R15 = param_5;
  if (puVar19 == (ulong *)0x0) {
    return unaff_R12;
  }
code_r0x0010735e:
  ppuStack96 = (ulong **)&UNK_00107363;
  func_0x00101c20();
  lStack152 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar23 = ppuVar22;
  ppuVar26 = unaff_R15;
  ppuStack136 = unaff_RBX;
  uStack128 = unaff_RBP;
  uStack120 = unaff_R12;
  piStack112 = unaff_R13;
  puStack104 = unaff_R14;
  ppuStack96 = unaff_R15;
  if (0x24 < extraout_EDX) goto code_r0x001076f5;
  ppuVar26 = ppuVar15;
  if (ppuVar15 == (ulong **)0x0) {
    ppuVar26 = &puStack160;
  }
  piVar5 = (int *)func_0x00101b20();
  *piVar5 = 0;
  bVar25 = *(byte *)puVar19;
  plVar6 = (long *)func_0x00101f50();
  puVar7 = puVar19;
  while ((*(byte *)(*plVar6 + 1 + (ulong)bVar25 * 2) & 0x20) != 0) {
    puVar7 = (ulong *)((long)puVar7 + 1);
    bVar25 = *(byte *)puVar7;
  }
  if (bVar25 == 0x2d) goto code_r0x00107448;
  uVar8 = func_0x00101ca0(puVar19,ppuVar26,(ulong)extraout_EDX,0);
  puVar13 = (undefined1 *)*ppuVar26;
  if ((ulong *)puVar13 == puVar19) {
    if ((ppuVar22 == (ulong **)0x0) || (bVar25 = *(byte *)puVar19, bVar25 == 0)) {
code_r0x00107448:
      unaff_RBP = 4;
      goto code_r0x0010744d;
    }
    unaff_RBP = 0;
    lVar9 = func_0x00101c60(ppuVar22,(ulong)(uint)(int)(char)bVar25);
    uVar8 = 1;
    if (lVar9 == 0) goto code_r0x00107448;
  }
  else {
    if (*piVar5 == 0) {
      unaff_RBP = 0;
    }
    else {
      unaff_RBP = 1;
      if (*piVar5 != 0x22) goto code_r0x00107448;
    }
    if ((ppuVar22 == (ulong **)0x0) || (bVar25 = *puVar13, bVar25 == 0)) {
      *(ulong *)puVar12 = uVar8;
      goto code_r0x0010744d;
    }
  }
  lVar9 = func_0x00101c60(ppuVar22,(ulong)(uint)(int)(char)bVar25);
  uVar24 = (uint)unaff_RBP;
  if (lVar9 == 0) goto code_r0x0010758c;
  if ((((byte)((uint)bVar25 - 0x45) < 0x30) &&
      ((0x814400308945U >> ((ulong)((uint)bVar25 - 0x45) & 0x1f) & 1) != 0)) &&
     (lVar9 = func_0x00101c60(ppuVar22,0x30), lVar9 != 0)) {
    bVar1 = *(byte *)((long)puVar13 + 1);
    if (bVar1 != 0x44) {
      if (bVar1 == 0x69) {
        bVar27 = *(byte *)((long)puVar13 + 2) == 0x42;
        puVar16 = (undefined *)0x400;
        puVar20 = (undefined *)(ulong)((uint)bVar27 + 1 + (uint)bVar27);
        goto code_r0x0010752a;
      }
      if (bVar1 != 0x42) goto code_r0x00107520;
    }
    puVar20 = (undefined *)0x2;
    puVar16 = (undefined *)0x3e8;
  }
  else {
code_r0x00107520:
    puVar20 = (undefined *)0x1;
    puVar16 = (undefined *)0x400;
  }
code_r0x0010752a:
  iVar18 = (int)puVar20;
  switch(bVar25) {
  case 0x42:
    if (SUB168(ZEXT816(0x400) * ZEXT816(uVar8) >> 0x40,0) == 0) {
      uVar8 = uVar8 << 10;
      goto code_r0x00107570;
    }
    break;
  default:
code_r0x0010758c:
    *(ulong *)puVar12 = uVar8;
    unaff_RBP = (ulong)(uVar24 | 2);
    goto code_r0x0010744d;
  case 0x45:
    ppuVar23 = (ulong **)0x6;
    uVar3 = 0;
    goto code_r0x0010767c;
  case 0x47:
  case 0x67:
    uVar11 = SUB168(ZEXT816(uVar8) * ZEXT816(puVar16),0);
    bVar27 = SUB168(ZEXT816(uVar8) * ZEXT816(puVar16) >> 0x40,0) != 0;
    if (bVar27) {
      uVar11 = 0xffffffffffffffff;
    }
    ppuVar23 = (ulong **)(ulong)bVar27;
    uVar10 = SUB168(ZEXT816(uVar11) * ZEXT816(puVar16),0);
    if (SUB168(ZEXT816(uVar11) * ZEXT816(puVar16) >> 0x40,0) != 0) {
      ppuVar23 = (ulong **)0x1;
      uVar10 = 0xffffffffffffffff;
    }
    goto code_r0x00107557;
  case 0x4b:
  case 0x6b:
    auVar2 = ZEXT816(uVar8);
    uVar8 = SUB168(auVar2 * ZEXT816(puVar16),0);
    if (SUB168(auVar2 * ZEXT816(puVar16) >> 0x40,0) == 0) goto code_r0x00107570;
    break;
  case 0x4d:
  case 0x6d:
    uVar10 = SUB168(ZEXT816(uVar8) * ZEXT816(puVar16),0);
    if (SUB168(ZEXT816(uVar8) * ZEXT816(puVar16) >> 0x40,0) == 0) {
      ppuVar23 = (ulong **)0x0;
    }
    else {
      uVar10 = 0xffffffffffffffff;
      ppuVar23 = (ulong **)0x1;
    }
code_r0x00107557:
    uVar8 = SUB168(ZEXT816(uVar10) * ZEXT816(puVar16),0);
    if (SUB168(ZEXT816(uVar10) * ZEXT816(puVar16) >> 0x40,0) != 0) {
      ppuVar23 = (ulong **)0x1;
      uVar8 = 0xffffffffffffffff;
    }
    unaff_RBP = (ulong)(uVar24 | (uint)ppuVar23);
    goto code_r0x00107570;
  case 0x50:
    ppuVar23 = (ulong **)0x5;
    uVar3 = 0;
    do {
      auVar2 = ZEXT816(uVar8);
      uVar8 = SUB168(auVar2 * ZEXT816(puVar16),0);
      if (SUB168(auVar2 * ZEXT816(puVar16) >> 0x40,0) != 0) {
        uVar3 = 1;
        uVar8 = 0xffffffffffffffff;
      }
      uVar21 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar21;
      if (uVar21 == 0) goto code_r0x001075e5;
    } while( true );
  case 0x54:
  case 0x74:
    ppuVar23 = (ulong **)0x4;
    uVar3 = 0;
    do {
      auVar2 = ZEXT816(uVar8);
      uVar8 = SUB168(auVar2 * ZEXT816(puVar16),0);
      if (SUB168(auVar2 * ZEXT816(puVar16) >> 0x40,0) != 0) {
        uVar3 = 1;
        uVar8 = 0xffffffffffffffff;
      }
      uVar21 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar21;
      if (uVar21 == 0) goto code_r0x001075e5;
    } while( true );
  case 0x59:
    ppuVar23 = (ulong **)0x8;
    uVar3 = 0;
    do {
      auVar2 = ZEXT816(uVar8);
      uVar8 = SUB168(auVar2 * ZEXT816(puVar16),0);
      if (SUB168(auVar2 * ZEXT816(puVar16) >> 0x40,0) != 0) {
        uVar3 = 1;
        uVar8 = 0xffffffffffffffff;
      }
      uVar21 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar21;
      if (uVar21 == 0) goto code_r0x001075e5;
    } while( true );
  case 0x5a:
    ppuVar23 = (ulong **)0x7;
    uVar3 = 0;
    do {
      auVar2 = ZEXT816(uVar8);
      uVar8 = SUB168(auVar2 * ZEXT816(puVar16),0);
      if (SUB168(auVar2 * ZEXT816(puVar16) >> 0x40,0) != 0) {
        uVar3 = 1;
        uVar8 = 0xffffffffffffffff;
      }
      uVar21 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar21;
      if (uVar21 == 0) goto code_r0x001075e5;
    } while( true );
  case 0x62:
    if (SUB168(ZEXT816(0x200) * ZEXT816(uVar8) >> 0x40,0) == 0) {
      uVar8 = uVar8 << 9;
    }
    break;
  case 99:
    goto code_r0x00107570;
  case 0x77:
    if (SUB168(ZEXT816(2) * ZEXT816(uVar8) >> 0x40,0) == 0) {
      uVar8 = uVar8 * 2;
      goto code_r0x00107570;
    }
  }
  unaff_RBP = 1;
  uVar8 = 0xffffffffffffffff;
code_r0x00107570:
  *ppuVar26 = (ulong *)((long)puVar13 + (long)iVar18);
  bVar25 = *(byte *)(ulong *)((long)puVar13 + (long)iVar18);
  *(ulong *)puVar12 = uVar8;
  if (bVar25 != 0) {
    unaff_RBP = (ulong)((uint)unaff_RBP | 2);
  }
code_r0x0010744d:
  if (lStack152 == *(long *)(in_FS_OFFSET + 0x28)) {
    return unaff_RBP;
  }
  func_0x00101c20();
  unaff_R14 = (ulong *)puVar12;
code_r0x001076f5:
  puVar12 = (undefined1 *)unaff_R14;
  puVar13 = __PRETTY_FUNCTION___4162;
  puVar16 = &UNK_001173cf;
  puVar20 = &UNK_001173e0;
  func_0x00101c90(&UNK_001173e0,&UNK_001173cf,0x54);
  do {
    uVar3 = 1;
    uVar8 = 0xffffffffffffffff;
    do {
      iVar18 = (int)puVar20;
      uVar24 = (uint)unaff_RBP;
      uVar21 = (int)ppuVar23 - 1;
      ppuVar23 = (ulong **)(ulong)uVar21;
      if (uVar21 == 0) goto code_r0x001075e5;
code_r0x0010767c:
      auVar2 = ZEXT816(uVar8);
      uVar8 = SUB168(auVar2 * ZEXT816(puVar16),0);
    } while (SUB168(auVar2 * ZEXT816(puVar16) >> 0x40,0) == 0);
  } while( true );
code_r0x001075e5:
  unaff_RBP = (ulong)(uVar24 | uVar3);
  goto code_r0x00107570;
}

