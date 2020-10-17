
void factor_using_pollard_rho
               (undefined *param_1,long param_2,long param_3,undefined8 param_4,undefined *param_5,
               undefined *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined auVar5 [16];
  char cVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  undefined *in_R10;
  undefined *in_R11;
  undefined *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  bool bVar25;
  long lStack72;
  
  if (param_1 < (undefined *)0x2) {
    func_0x00101750(&UNK_0010b464,&UNK_0010b424,0x5c2,__PRETTY_FUNCTION___7311);
    return;
  }
  lStack72 = param_2 + 1;
code_r0x00102879:
  iVar17 = 0x40;
  puVar20 = (undefined *)0x0;
  puVar9 = (undefined *)0x1;
  puVar15 = (undefined *)(lStack72 + -1);
  puVar23 = (undefined *)0x0;
  puVar8 = param_1;
  do {
    puVar24 = (undefined *)((ulong)puVar8 >> 1);
    puVar23 = (undefined *)((ulong)puVar23 >> 1 | (long)puVar8 << 0x3f);
    if ((puVar24 < puVar9) || ((puVar24 == puVar9 && (puVar23 <= puVar20)))) {
      bVar25 = puVar20 < puVar23;
      puVar20 = puVar20 + -(long)puVar23;
      puVar9 = puVar9 + (-(ulong)bVar25 - (long)puVar24);
    }
    iVar17 = iVar17 + -1;
    puVar8 = puVar24;
  } while (iVar17 != 0);
  uVar16 = ((long)puVar20 * 2 - (long)param_1) +
           (-(ulong)(puVar20 < param_1 + -(long)puVar20) & (ulong)param_1);
  uVar13 = uVar16;
  if (param_1 <= puVar15) goto code_r0x00102b8b;
  puVar8 = (undefined *)0x1;
  puVar23 = (undefined *)0x1;
  uVar11 = uVar16;
  uVar14 = uVar16;
code_r0x00102904:
  uVar13 = (ulong)(byte)binvert_table[(uint)((ulong)param_1 >> 1) & 0x7f];
  lVar10 = uVar13 * 2 - uVar13 * uVar13 * (long)param_1;
  lVar10 = lVar10 * 2 - lVar10 * lVar10 * (long)param_1;
  param_5 = (undefined *)(lVar10 * 2 - lVar10 * lVar10 * (long)param_1);
  in_R10 = param_1 + -(long)puVar15;
  param_6 = puVar15 + -(long)param_1;
  uVar13 = uVar16;
  do {
    while( true ) {
      uVar16 = SUB168(ZEXT816(uVar11) * ZEXT816(uVar11) >> 0x40,0);
      uVar11 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar11) * ZEXT816(uVar11),0) * (long)param_5))
                      * ZEXT816(param_1) >> 0x40,0);
      puVar9 = (undefined *)(uVar16 - uVar11);
      if (uVar16 < uVar11) {
        puVar9 = puVar9 + (long)param_1;
      }
      uVar11 = (-(ulong)(puVar9 < in_R10) & (ulong)param_1) + (long)puVar9 + (long)param_6;
      auVar5 = ZEXT816(puVar20) *
               ZEXT816((-(ulong)(uVar14 < uVar11) & (ulong)param_1) + (uVar14 - uVar11));
      uVar16 = SUB168(auVar5 >> 0x40,0);
      uVar12 = SUB168(ZEXT816((ulong)(SUB168(auVar5,0) * (long)param_5)) * ZEXT816(param_1) >> 0x40,
                      0);
      puVar20 = (undefined *)(uVar16 - uVar12);
      if (uVar16 < uVar12) {
        puVar20 = puVar20 + (long)param_1;
      }
      uVar16 = uVar13;
      puVar9 = puVar8;
      if ((((uint)puVar23 & 0x1f) == 1) &&
         (lVar10 = gcd_odd(puVar20,param_1), uVar16 = uVar11, puVar9 = puVar8, lVar10 != 1)) break;
      puVar24 = puVar23 + -1;
      uVar13 = uVar16;
      puVar8 = puVar9;
      puVar23 = puVar24;
      if ((puVar24 == (undefined *)0x0) &&
         (puVar8 = (undefined *)((long)puVar9 * 2), uVar13 = uVar11, puVar23 = puVar9,
         uVar14 = uVar11, puVar9 != (undefined *)0x0)) {
        do {
          uVar16 = SUB168(ZEXT816(uVar13) * ZEXT816(uVar13) >> 0x40,0);
          uVar13 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar13) * ZEXT816(uVar13),0) *
                                         (long)param_5)) * ZEXT816(param_1) >> 0x40,0);
          puVar23 = (undefined *)(uVar16 - uVar13);
          if (uVar16 < uVar13) {
            puVar23 = puVar23 + (long)param_1;
          }
          puVar24 = puVar24 + 1;
          uVar13 = (-(ulong)(puVar23 < in_R10) & (ulong)param_1) + (long)puVar23 + (long)param_6;
          uVar11 = uVar13;
          puVar23 = puVar24;
        } while (puVar9 != puVar24);
      }
    }
    do {
      uVar16 = SUB168(ZEXT816(uVar13) * ZEXT816(uVar13) >> 0x40,0);
      uVar13 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar13) * ZEXT816(uVar13),0) * (long)param_5))
                      * ZEXT816(param_1) >> 0x40,0);
      puVar9 = (undefined *)(uVar16 - uVar13);
      if (uVar16 < uVar13) {
        puVar9 = puVar9 + (long)param_1;
      }
      uVar13 = (-(ulong)(puVar9 < in_R10) & (ulong)param_1) + (long)puVar9 + (long)param_6;
      in_R11 = (undefined *)
               gcd_odd((-(ulong)(uVar14 < uVar13) & (ulong)param_1) + (uVar14 - uVar13),param_1);
    } while (in_R11 == (undefined *)0x1);
    if (param_1 == in_R11) {
      lStack72 = lStack72 + 1;
      goto code_r0x00102879;
    }
    param_5 = (undefined *)((ulong)param_1 / (ulong)in_R11);
    if ((in_R11 < (undefined *)0x2) ||
       (((undefined *)0x17ded78 < in_R11 && (cVar6 = prime_p_part_4(in_R11), cVar6 == '\0')))) {
      factor_using_pollard_rho(in_R11,lStack72,param_3);
      if ((undefined *)0x1 < param_5) goto code_r0x00102b2f;
code_r0x00102bf8:
      if (param_5 == (undefined *)0x1) {
        return;
      }
      uVar16 = 0;
      uVar14 = 0;
      uVar11 = 0;
    }
    else {
      factor_insert_multiplicity(param_3,in_R11,1);
      if (param_5 < (undefined *)0x2) goto code_r0x00102bf8;
code_r0x00102b2f:
      if ((param_5 < (undefined *)0x17ded79) || (cVar6 = prime_p_part_4(param_5), cVar6 != '\0')) {
        puVar1 = (undefined8 *)(param_3 + 0x10);
        bVar4 = *(byte *)(param_3 + 0xfa);
        puVar8 = (undefined *)(param_3 + 0xe0);
        uVar21 = (uint)bVar4 - 1;
        puVar20 = puVar8;
        puVar22 = puVar1;
        if (uVar21 == 0xffffffff) goto code_r0x00101e17;
        lVar10 = (long)(int)uVar21;
        puVar15 = *(undefined **)(param_3 + 0x10 + lVar10 * 8);
        if (param_5 < puVar15) {
          lVar2 = lVar10 + -1;
          lVar7 = lVar2;
          uVar19 = uVar21;
          break;
        }
        lVar18 = lVar10;
        if (param_5 == puVar15) goto code_r0x00101e55;
        puVar20 = (undefined *)(param_3 + 0xe1 + lVar10);
        puVar22 = (undefined8 *)(param_3 + 0x18 + lVar10 * 8);
        goto code_r0x00101e17;
      }
      uVar11 = uVar11 % (ulong)param_5;
      uVar14 = uVar14 % (ulong)param_5;
      uVar16 = uVar13 % (ulong)param_5;
    }
    uVar13 = uVar11;
    param_1 = param_5;
    if (puVar15 < param_5) goto code_r0x00102904;
code_r0x00102b8b:
    puVar8 = &UNK_0010b424;
    func_0x00101750(&UNK_0010b46e,&UNK_0010b424,0x5c8,__PRETTY_FUNCTION___7311);
    uVar11 = uVar13;
    puVar23 = in_R11;
    uVar14 = uVar13;
  } while( true );
  while( true ) {
    puVar3 = (undefined8 *)(param_3 + 0x18 + (lVar18 + -1) * 8);
    bVar25 = (undefined *)*puVar3 == param_5;
    lVar7 = lVar18 + -1;
    if ((undefined *)*puVar3 < param_5 || bVar25) break;
    lVar18 = lVar7;
    uVar19 = uVar19 - 1;
    if ((lVar10 - (ulong)uVar21) + -1 == lVar18) {
      uVar19 = 0xffffffff;
      goto code_r0x00101e00;
    }
  }
  if (bVar25) {
code_r0x00101e55:
    puVar8[lVar18] = puVar8[lVar18] + '\x01';
    return;
  }
  puVar22 = puVar1 + lVar18 + 1;
  puVar20 = puVar8 + lVar18 + 1;
  if ((int)uVar19 < (int)uVar21) {
code_r0x00101e00:
    while( true ) {
      lVar7 = lVar2;
      *(undefined **)(param_3 + 0x18 + lVar10 * 8) = puVar15;
      *(undefined *)(param_3 + 0xe1 + lVar10) = puVar8[lVar10];
      if ((int)lVar7 <= (int)uVar19) break;
      puVar15 = (undefined *)puVar1[lVar7];
      lVar2 = lVar7 + -1;
      lVar10 = lVar7;
    }
  }
code_r0x00101e17:
  *(undefined **)puVar22 = param_5;
  *puVar20 = 1;
  *(char *)(param_3 + 0xfa) = bVar4 + 1;
  return;
}

