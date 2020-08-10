
/* WARNING: Could not reconcile some variable overlaps */

char ** getndelim2(char **param_1,char **param_2,char **param_3,char **param_4,uint param_5,
                  uint param_6,char **param_7)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  char **ppcVar7;
  long lVar8;
  char **ppcVar9;
  long lVar10;
  ulong uVar11;
  char **ppcVar12;
  char **ppcVar13;
  char cVar14;
  uint extraout_EDX;
  char **ppcVar15;
  char **ppcVar16;
  char cVar17;
  uint uVar18;
  ulong uVar19;
  char **ppcVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  long in_FS_OFFSET;
  uint uStack132;
  char **ppcStack112;
  uint uStack104;
  uint uStack100;
  char **ppcStack72;
  
  uVar18 = (uint)param_2;
  ppcStack112 = (char **)*param_1;
  ppcVar20 = (char **)*param_2;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  ppcVar13 = param_4;
  ppcVar12 = param_1;
  uVar23 = uVar18;
  if (ppcStack112 == (char **)0x0) {
    ppcVar20 = (char **)0x40;
    if (param_4 < (char **)0x41) {
      ppcVar20 = param_4;
    }
    ppcVar12 = ppcVar20;
    ppcStack112 = (char **)func_0x00101890();
    if (ppcStack112 != (char **)0x0) goto code_r0x00103443;
code_r0x0010345a:
    uVar18 = uVar23;
    ppcVar7 = (char **)0xffffffffffffffff;
  }
  else {
code_r0x00103443:
    if ((ppcVar20 < param_3) ||
       (ppcVar16 = (char **)((long)ppcVar20 - (long)param_3),
       ppcVar16 == (char **)0x0 && param_4 <= ppcVar20)) {
code_r0x0010344a:
      *(char ***)param_1 = ppcStack112;
      *(char ***)param_2 = ppcVar20;
      goto code_r0x0010345a;
    }
    uStack132 = param_6;
    uStack100 = param_6;
    if ((param_5 != 0xffffffff) && (uStack132 = param_5, param_6 == 0xffffffff)) {
      uStack100 = param_5;
    }
    ppcVar7 = (char **)((long)ppcStack112 + (long)param_3);
    do {
      uVar23 = 0xffffffb8;
      lVar8 = freadptr(param_7);
      ppcVar15 = ppcVar20;
      if (lVar8 == 0) {
        pbVar3 = (byte *)param_7[1];
        if (pbVar3 < param_7[2]) {
          *(byte **)(param_7 + 1) = pbVar3 + 1;
          uStack104 = (uint)*pbVar3;
        }
        else {
          ppcVar12 = param_7;
          uStack104 = func_0x00101670();
          if (uStack104 == 0xffffffff) {
            if (ppcVar7 == ppcStack112) goto code_r0x0010344a;
            break;
          }
        }
        ppcVar13 = (char **)0x2;
        ppcStack72 = (char **)0x1;
        bVar4 = uStack132 == uStack104 || uStack100 == uStack104;
      }
      else {
        if ((uStack132 == 0xffffffff) ||
           (lVar10 = memchr2(lVar8,(ulong)uStack132,(ulong)uStack100,ppcStack72), lVar10 == 0)) {
          ppcVar13 = (char **)((long)ppcStack72 + 1);
          bVar4 = false;
        }
        else {
          bVar4 = true;
          ppcStack72 = (char **)((lVar10 - lVar8) + 1);
          ppcVar13 = (char **)((lVar10 - lVar8) + 2);
        }
      }
      ppcVar12 = param_4;
      if ((ppcVar20 < param_4) && (ppcVar16 < ppcVar13)) {
        ppcVar15 = (char **)((long)ppcVar20 * 2);
        if (ppcVar20 < (char **)0x40) {
          ppcVar15 = ppcVar20 + 8;
        }
        ppcVar7 = (char **)((long)ppcVar7 - (long)ppcStack112);
        uVar23 = (uint)(char **)((long)ppcVar15 - (long)ppcVar7);
        if ((char **)((long)ppcVar15 - (long)ppcVar7) < ppcVar13) {
          ppcVar15 = (char **)((long)ppcVar7 + (long)ppcVar13);
        }
        if ((ppcVar15 <= ppcVar20) || (param_4 < ppcVar15)) {
          ppcVar15 = param_4;
        }
        if (((long)((long)ppcVar15 - (long)param_3) < 0) &&
           (ppcVar15 = param_3 + -0x1000000000000000, ppcVar20 == ppcVar15)) goto code_r0x0010344a;
        uVar23 = (uint)ppcVar15;
        ppcVar16 = (char **)((long)ppcVar15 - (long)ppcVar7);
        ppcVar12 = ppcStack112;
        ppcVar9 = (char **)func_0x001018f0();
        if (ppcVar9 == (char **)0x0) goto code_r0x0010344a;
        ppcVar7 = (char **)((long)ppcVar7 + (long)ppcVar9);
        ppcStack112 = ppcVar9;
      }
      if ((char **)0x1 < ppcVar16) {
        ppcVar13 = (char **)((long)ppcVar16 + -1);
        if (ppcStack72 <= (char **)((long)ppcVar16 + -1)) {
          ppcVar13 = ppcStack72;
        }
        if (lVar8 == 0) {
          *(char *)ppcVar7 = (char)uStack104;
        }
        else {
          ppcVar12 = ppcVar7;
          func_0x00101870(ppcVar7,lVar8,ppcVar13);
        }
        ppcVar7 = (char **)((long)ppcVar7 + (long)ppcVar13);
        ppcVar16 = (char **)((long)ppcVar16 - (long)ppcVar13);
      }
      ppcVar20 = ppcVar15;
      if (lVar8 != 0) {
        uVar23 = (uint)ppcStack72;
        ppcVar12 = param_7;
        iVar5 = freadseek();
        if (iVar5 != 0) goto code_r0x0010344a;
      }
    } while (!bVar4);
    *(char *)ppcVar7 = '\0';
    *(char ***)param_1 = ppcStack112;
    ppcVar7 = (char **)((long)ppcVar7 - ((long)param_3 + (long)ppcStack112));
    *(char ***)param_2 = ppcVar15;
    uVar23 = uVar18;
    if (ppcVar7 == (char **)0x0) goto code_r0x0010345a;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ppcVar7;
  }
  func_0x00101770();
  cVar14 = (char)extraout_EDX;
  cVar17 = (char)uVar18;
  if (cVar17 == cVar14) {
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)PTR_memchr_00308ef8)();
    return (char **)uVar6;
  }
  if ((ppcVar13 != (char **)0x0) && (((ulong)ppcVar12 & 7) != 0)) {
    cVar1 = *(char *)ppcVar12;
    while( true ) {
      if ((cVar1 == cVar14) || (cVar1 == cVar17)) {
        return ppcVar12;
      }
      ppcVar12 = (char **)((long)ppcVar12 + 1);
      ppcVar13 = (char **)((long)ppcVar13 + -1);
      if ((ppcVar13 == (char **)0x0) || (((ulong)ppcVar12 & 7) == 0)) break;
      cVar1 = *(char *)ppcVar12;
    }
  }
  uVar21 = SEXT48((int)((uVar18 & 0xff) << 8 | uVar18 & 0xff));
  uVar22 = SEXT48((int)((extraout_EDX & 0xff) << 8 | extraout_EDX & 0xff));
  uVar21 = uVar21 | uVar21 << 0x10;
  uVar22 = uVar22 | uVar22 << 0x10;
  uVar21 = uVar21 | uVar21 << 0x20;
  uVar22 = uVar22 | uVar22 << 0x20;
  if ((char **)0x7 < ppcVar13) {
    uVar19 = uVar21 ^ (ulong)*ppcVar12;
    uVar11 = (ulong)*ppcVar12 ^ uVar22;
    if (((~uVar11 & uVar11 + 0xfefefefefefefeff | uVar19 + 0xfefefefefefefeff & ~uVar19) &
        0x8080808080808080) != 0) goto code_r0x001038bd;
    ppcVar13 = ppcVar13 + -1;
    uVar23 = (uint)ppcVar13;
    while ((ppcVar12 = ppcVar12 + 1, ppcVar13 != (char **)(ulong)(uVar23 & 7) &&
           (uVar11 = (ulong)*ppcVar12 ^ uVar22, uVar19 = (ulong)*ppcVar12 ^ uVar21,
           ((uVar19 + 0xfefefefefefefeff & ~uVar19 | ~uVar11 & uVar11 + 0xfefefefefefefeff) &
           0x8080808080808080) == 0))) {
      ppcVar13 = ppcVar13 + -1;
    }
  }
  if (ppcVar13 == (char **)0x0) {
    return (char **)0;
  }
code_r0x001038bd:
  if ((*(char *)ppcVar12 != cVar14) && (*(char *)ppcVar12 != cVar17)) {
    ppcVar13 = (char **)((long)ppcVar12 + (long)ppcVar13);
    do {
      ppcVar12 = (char **)((long)ppcVar12 + 1);
      if (ppcVar12 == ppcVar13) {
        return (char **)0;
      }
    } while ((*(char *)ppcVar12 != cVar17) && (*(char *)ppcVar12 != cVar14));
  }
  return ppcVar12;
}

