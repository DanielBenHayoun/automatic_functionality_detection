
undefined *
factor(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
      undefined8 param_5,undefined *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  uint *puVar4;
  undefined8 in_RAX;
  byte bVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  undefined *extraout_RDX;
  undefined *extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined1 *unaff_RBX;
  undefined *unaff_RBP;
  ulong uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined *puVar23;
  undefined *in_R11;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *unaff_R12;
  ulong uVar26;
  undefined8 uVar27;
  undefined *unaff_R13;
  undefined8 *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  long unaff_R14;
  undefined *unaff_R15;
  long in_FS_OFFSET;
  bool bVar32;
  undefined auVar33 [16];
  
  auVar33 = CONCAT88(param_3,in_RAX);
code_r0x00103340:
  puVar20 = SUB168(auVar33 >> 0x40,0);
  *(undefined **)((undefined *)register0x00000020 + -8) = unaff_R15;
  *(long *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
  *(undefined **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
  *(undefined **)((undefined *)register0x00000020 + -0x20) = unaff_R12;
  *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
  *(undefined1 **)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
  *(undefined *)((long)puVar20 + 0xfa) = 0;
  puVar20[1] = 0;
  if ((param_1 == (undefined *)0x0) && (param_2 < (undefined *)0x2)) {
    return (undefined *)SUB168(auVar33,0);
  }
  if (((ulong)param_2 & 1) == 0) {
    if (param_2 != (undefined *)0x0) {
      lVar12 = 0;
      bVar5 = 0;
      if (param_2 != (undefined *)0x0) {
        while (bVar5 = (byte)lVar12, ((ulong)param_2 >> lVar12 & 1) == 0) {
          lVar12 = lVar12 + 1;
        }
      }
      *(ulong *)((undefined *)register0x00000020 + -0x60) = (ulong)param_1 >> (bVar5 & 0x3f);
      param_2 = (undefined *)
                ((ulong)param_2 >> (bVar5 & 0x3f) | (long)param_1 << (0x40 - bVar5 & 0x3f));
      *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x103a1e;
      factor_insert_multiplicity(puVar20,2);
      param_1 = *(undefined **)((undefined *)register0x00000020 + -0x60);
      goto code_r0x00103389;
    }
    lVar12 = 0;
    iVar19 = 0;
    if (param_1 != (undefined *)0x0) {
      while (iVar19 = (int)lVar12, ((ulong)param_1 >> lVar12 & 1) == 0) {
        lVar12 = lVar12 + 1;
      }
    }
    param_2 = (undefined *)((ulong)param_1 >> ((byte)iVar19 & 0x3f));
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x103973;
    factor_insert_multiplicity(puVar20,2,(ulong)(iVar19 + 0x40));
    param_1 = (undefined *)0x0;
  }
  else {
code_r0x00103389:
    if (param_1 != (undefined *)0x0) {
      param_6 = (undefined *)0xaaaaaaaaaaaaaaab;
      uVar26 = 2;
      uVar18 = 3;
      puVar8 = (undefined8 *)(primes_dtab + 8);
      uVar14 = 1;
      do {
        puVar7 = (undefined *)((long)param_6 * (long)param_2);
        puVar16 = SUB168(ZEXT816(puVar7) * ZEXT816(uVar18) >> 0x40,0);
        puVar23 = puVar7;
        if (puVar16 <= param_1) {
          in_R11 = (undefined *)*puVar8;
          puVar16 = (undefined *)((long)(param_1 + -(long)puVar16) * (long)param_6);
          if (puVar16 < in_R11 || puVar16 + -(long)in_R11 == (undefined *)0x0) {
            do {
              param_1 = puVar16;
              *(undefined **)((undefined *)register0x00000020 + -0x48) = in_R11;
              *(undefined **)((undefined *)register0x00000020 + -0x50) = puVar7;
              *(undefined8 **)((undefined *)register0x00000020 + -0x58) = puVar8;
              *(undefined **)((undefined *)register0x00000020 + -0x60) = param_6;
              *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x10343a;
              factor_insert_multiplicity(puVar20,uVar18,1);
              param_6 = *(undefined **)((undefined *)register0x00000020 + -0x60);
              param_2 = *(undefined **)((undefined *)register0x00000020 + -0x50);
              puVar8 = *(undefined8 **)((undefined *)register0x00000020 + -0x58);
              in_R11 = *(undefined **)((undefined *)register0x00000020 + -0x48);
              puVar7 = (undefined *)((long)param_6 * (long)param_2);
              puVar16 = SUB168(ZEXT816(puVar7) * ZEXT816(uVar18) >> 0x40,0);
              puVar23 = param_2;
              if (param_1 < puVar16) break;
              puVar16 = (undefined *)((long)(param_1 + -(long)puVar16) * (long)param_6);
            } while (puVar16 < in_R11 || puVar16 + -(long)in_R11 == (undefined *)0x0);
          }
        }
        uVar15 = uVar14 & 0xffffffff;
        uVar18 = uVar18 + uVar26;
        if ((param_1 == (undefined *)0x0) || (0x29b < (uint)uVar15)) goto code_r0x00103480;
        param_6 = (undefined *)puVar8[1];
        uVar26 = (ulong)(byte)primes_diff[uVar14 + 1];
        puVar8 = puVar8 + 2;
        uVar14 = uVar14 + 1;
      } while( true );
    }
  }
  uVar14 = 0x1a;
  in_R11 = (undefined *)0x5555555555555555;
  puVar23 = (undefined *)0xaaaaaaaaaaaaaaab;
  uVar18 = 3;
  *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x10b9a0;
  uVar15 = 0;
  goto code_r0x00103588;
code_r0x00102fc0:
  *(undefined **)((undefined *)register0x00000020 + -0x98) = unaff_R13;
  *(undefined1 **)((undefined *)register0x00000020 + -0x90) = unaff_RBX;
  puVar16 = *(undefined **)((undefined *)register0x00000020 + -0xa8);
  unaff_RBX = *(undefined1 **)((undefined *)register0x00000020 + -200);
  do {
    *(long *)((undefined *)register0x00000020 + -0xe0) = unaff_R14;
    *(undefined **)((undefined *)register0x00000020 + -0xe8) = unaff_R12;
    *(undefined8 *)((undefined *)register0x00000020 + -0xf0) = 0x10300a;
    param_6 = unaff_RBP;
    uVar14 = mulredc2(unaff_RBX,*(undefined8 *)((undefined *)register0x00000020 + -0x58),unaff_R15,
                      *(undefined8 *)((undefined *)register0x00000020 + -0x58),unaff_R15);
    unaff_R15 = (undefined *)(uVar14 + *(ulong *)((undefined *)register0x00000020 + -0xb0));
    puVar23 = (undefined *)
              (*(long *)((undefined *)register0x00000020 + -0x48) +
              (ulong)CARRY8(uVar14,*(ulong *)((undefined *)register0x00000020 + -0xb0)));
    *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar23;
    if ((unaff_RBP < puVar23) || ((unaff_RBP == puVar23 && (unaff_R12 <= unaff_R15)))) {
      bVar32 = unaff_R15 < unaff_R12;
      unaff_R15 = unaff_R15 + -(long)unaff_R12;
      puVar23 = puVar23 + (-(ulong)bVar32 - (long)unaff_RBP);
      *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar23;
    }
    puVar7 = puVar16 + -(long)unaff_R15;
    puVar23 = (undefined *)
              ((*(long *)((undefined *)register0x00000020 + -0x60) - (long)puVar23) -
              (ulong)(puVar16 < unaff_R15));
    if ((long)puVar23 < 0) {
      bVar32 = CARRY8((ulong)puVar7,(ulong)unaff_R12);
      puVar7 = puVar7 + (long)unaff_R12;
      puVar23 = unaff_RBP + (long)(puVar23 + bVar32);
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103074;
    puVar7 = (undefined *)
             gcd2_odd(*(undefined8 *)((undefined *)register0x00000020 + -0xa0),puVar23,puVar7,
                      unaff_RBP,unaff_R12);
    puVar23 = *(undefined **)((undefined *)register0x00000020 + -0x50);
    if (puVar23 != (undefined *)0x0) {
      unaff_R13 = unaff_R15;
      if ((unaff_R12 == puVar7) && (unaff_RBP == puVar23)) {
        *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x1032d9;
        puVar23 = unaff_R12;
        param_1 = unaff_RBP;
        factor_using_pollard_rho2
                  (unaff_RBP,unaff_R12,*(long *)((undefined *)register0x00000020 + -0xb0) + 1,
                   *(undefined8 *)((undefined *)register0x00000020 + -0x88));
        unaff_R15 = puVar16;
        goto code_r0x0010313a;
      }
      unaff_RBX = binvert_table;
      *(undefined **)((undefined *)register0x00000020 + -0xd0) = puVar7;
      uVar14 = (ulong)(byte)binvert_table[(uint)((ulong)puVar7 >> 1) & 0x7f];
      lVar12 = uVar14 * 2 - uVar14 * uVar14 * (long)puVar7;
      lVar12 = lVar12 * 2 - lVar12 * lVar12 * (long)puVar7;
      unaff_R12 = (undefined *)((long)unaff_R12 * (lVar12 * 2 - lVar12 * lVar12 * (long)puVar7));
      *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x1030e3;
      cVar3 = prime2_p(puVar23,puVar7);
      if (cVar3 == '\0') {
        *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103331;
        factor_using_pollard_rho2
                  (*(undefined8 *)((undefined *)register0x00000020 + -0x50),
                   *(undefined8 *)((undefined *)register0x00000020 + -0xd0),
                   *(long *)((undefined *)register0x00000020 + -0xb0) + 1,
                   *(undefined8 *)((undefined *)register0x00000020 + -0x88));
        unaff_R15 = puVar16;
      }
      else {
        *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103105;
        factor_insert_large(*(undefined8 *)((undefined *)register0x00000020 + -0x88),
                            *(undefined8 *)((undefined *)register0x00000020 + -0x50),
                            *(undefined8 *)((undefined *)register0x00000020 + -0xd0));
        unaff_R15 = puVar16;
      }
      goto code_r0x00103105;
    }
  } while (puVar7 == (undefined *)0x1);
  *(undefined **)((undefined *)register0x00000020 + -0xa8) = puVar16;
  *(undefined1 **)((undefined *)register0x00000020 + -200) = unaff_RBX;
  uVar14 = (ulong)(byte)binvert_table[(uint)((ulong)puVar7 >> 1) & 0x7f];
  unaff_RBX = *(undefined1 **)((undefined *)register0x00000020 + -0x90);
  unaff_R13 = *(undefined **)((undefined *)register0x00000020 + -0x98);
  lVar12 = uVar14 * 2 - uVar14 * uVar14 * (long)puVar7;
  lVar12 = lVar12 * 2 - lVar12 * lVar12 * (long)puVar7;
  lVar12 = lVar12 * 2 - lVar12 * lVar12 * (long)puVar7;
  unaff_R12 = (undefined *)((long)unaff_R12 * lVar12);
  if (unaff_RBP < puVar7) {
    unaff_RBP = (undefined *)0x0;
  }
  else {
    unaff_RBP = (undefined *)
                ((long)(unaff_RBP + -SUB168(ZEXT816(unaff_R12) * ZEXT816(puVar7) >> 0x40,0)) *
                lVar12);
  }
  if (puVar7 < (undefined *)0x2) {
code_r0x00103207:
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10321d;
    factor_using_pollard_rho
              (puVar7,*(long *)((undefined *)register0x00000020 + -0xb0) + 1,
               *(undefined8 *)((undefined *)register0x00000020 + -0x88));
  }
  else {
    if ((undefined *)0x17ded78 < puVar7) {
      *(undefined **)((undefined *)register0x00000020 + -0x98) = puVar7;
      *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x1031fa;
      cVar3 = prime_p_part_4(puVar7);
      puVar7 = *(undefined **)((undefined *)register0x00000020 + -0x98);
      if (cVar3 == '\0') goto code_r0x00103207;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x1032b2;
    factor_insert_multiplicity(*(undefined8 *)((undefined *)register0x00000020 + -0x88),puVar7,1);
  }
  if (unaff_RBP != (undefined *)0x0) {
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103231;
    cVar3 = prime2_p(unaff_RBP,unaff_R12);
    if (cVar3 != '\0') goto code_r0x001032fe;
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103251;
    unaff_RBX = (undefined1 *)
                mod2(*(undefined8 *)((undefined *)register0x00000020 + -0x80),
                     *(undefined8 *)((undefined *)register0x00000020 + -0x68),unaff_RBX,unaff_RBP,
                     unaff_R12);
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10326e;
    uVar17 = mod2(*(undefined8 *)((undefined *)register0x00000020 + -0x78),
                  *(undefined8 *)((undefined *)register0x00000020 + -0x60),
                  *(undefined8 *)((undefined *)register0x00000020 + -0xa8),unaff_RBP,unaff_R12);
    *(undefined8 *)((undefined *)register0x00000020 + -0xa8) = uVar17;
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10328e;
    unaff_R15 = (undefined *)
                mod2(*(undefined8 *)((undefined *)register0x00000020 + -0x70),
                     *(undefined8 *)((undefined *)register0x00000020 + -0x58),unaff_R15,unaff_RBP,
                     unaff_R12);
    puVar23 = *(undefined **)((undefined *)register0x00000020 + -0x68);
    goto code_r0x00102da0;
  }
code_r0x00103105:
  if ((undefined *)0x1 < unaff_R12) {
    if ((undefined *)0x17ded78 < unaff_R12) {
      *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103120;
      cVar3 = prime_p_part_4(unaff_R12);
      if (cVar3 == '\0') goto code_r0x001032e7;
    }
    param_1 = *(undefined **)((undefined *)register0x00000020 + -0x88);
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10313a;
    puVar23 = unaff_R12;
    factor_insert_multiplicity(param_1,unaff_R12,1);
    goto code_r0x0010313a;
  }
code_r0x001032e7:
  puVar23 = *(undefined **)((undefined *)register0x00000020 + -0xb0);
  *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x1032f9;
  param_1 = unaff_R12;
  factor_using_pollard_rho
            (unaff_R12,puVar23,*(undefined8 *)((undefined *)register0x00000020 + -0x88));
  goto code_r0x0010313a;
code_r0x001032fe:
  param_1 = *(undefined **)((undefined *)register0x00000020 + -0x88);
  *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10330e;
  puVar23 = unaff_RBP;
  factor_insert_large(param_1,unaff_RBP,unaff_R12);
code_r0x0010313a:
  if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)0x0;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10333b;
  auVar33 = func_0x001016f0();
  register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0xd8);
  param_2 = puVar23;
  goto code_r0x00103340;
code_r0x00103480:
  if ((uint)uVar15 < 0x29c) {
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x10b9a0;
    puVar23 = *(undefined **)(primes_dtab + uVar15 * 0x10);
    in_R11 = *(undefined **)(primes_dtab + uVar15 * 0x10 + 8);
    uVar14 = (ulong)(byte)primes_diff8[uVar15];
code_r0x00103588:
    do {
      puVar16 = (undefined *)((long)param_2 * (long)puVar23);
      lVar12 = *(long *)((undefined *)register0x00000020 + -0x60) + uVar15 * 0x10;
      if (puVar16 < in_R11 || puVar16 + -(long)in_R11 == (undefined *)0x0) {
        do {
          param_2 = puVar16;
          *(undefined **)((undefined *)register0x00000020 + -0x40) = param_1;
          *(undefined **)((undefined *)register0x00000020 + -0x48) = in_R11;
          *(undefined **)((undefined *)register0x00000020 + -0x50) = puVar23;
          *(int *)((undefined *)register0x00000020 + -0x58) = (int)uVar15;
          *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1035cb;
          factor_insert_multiplicity(puVar20,uVar18,1);
          puVar23 = *(undefined **)((undefined *)register0x00000020 + -0x50);
          in_R11 = *(undefined **)((undefined *)register0x00000020 + -0x48);
          uVar15 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x58);
          param_1 = *(undefined **)((undefined *)register0x00000020 + -0x40);
          puVar16 = (undefined *)((long)param_2 * (long)puVar23);
        } while (puVar16 < in_R11 || puVar16 + -(long)in_R11 == (undefined *)0x0);
        puVar16 = (undefined *)(*(long *)(lVar12 + 0x10) * (long)param_2);
        if (puVar16 < *(undefined **)(long *)(lVar12 + 0x18) ||
            puVar16 + -*(long *)(lVar12 + 0x18) == (undefined *)0x0) goto code_r0x00103600;
code_r0x001034da:
        puVar16 = (undefined *)(*(long *)(lVar12 + 0x20) * (long)param_2);
        if (*(undefined **)(long *)(lVar12 + 0x28) <= puVar16 &&
            puVar16 + -*(long *)(lVar12 + 0x28) != (undefined *)0x0) goto code_r0x001034ec;
code_r0x00103660:
        *(ulong *)((undefined *)register0x00000020 + -0x48) =
             (ulong)(byte)primes_diff[(int)uVar15 + 1] + (ulong)(byte)primes_diff[(int)uVar15 + 2] +
             uVar18;
        do {
          param_2 = puVar16;
          *(undefined **)((undefined *)register0x00000020 + -0x50) = param_1;
          *(int *)((undefined *)register0x00000020 + -0x58) = (int)uVar15;
          *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x10369a;
          factor_insert_multiplicity
                    (puVar20,*(undefined8 *)((undefined *)register0x00000020 + -0x48),1);
          uVar15 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x58);
          param_1 = *(undefined **)((undefined *)register0x00000020 + -0x50);
          puVar16 = (undefined *)(*(long *)(lVar12 + 0x20) * (long)param_2);
        } while (puVar16 < *(undefined **)(long *)(lVar12 + 0x28) ||
                 puVar16 + -*(long *)(lVar12 + 0x28) == (undefined *)0x0);
        puVar16 = (undefined *)(*(long *)(lVar12 + 0x30) * (long)param_2);
        if (puVar16 <= *(undefined **)(lVar12 + 0x38)) goto code_r0x001036c8;
code_r0x001034fe:
        puVar16 = (undefined *)(*(long *)(lVar12 + 0x40) * (long)param_2);
        if (puVar16 <= *(undefined **)(lVar12 + 0x48)) goto code_r0x00103740;
      }
      else {
        puVar16 = (undefined *)(*(long *)(lVar12 + 0x10) * (long)param_2);
        if (*(undefined **)(long *)(lVar12 + 0x18) <= puVar16 &&
            puVar16 + -*(long *)(lVar12 + 0x18) != (undefined *)0x0) goto code_r0x001034da;
code_r0x00103600:
        *(ulong *)((undefined *)register0x00000020 + -0x48) =
             (byte)primes_diff[(int)uVar15 + 1] + uVar18;
        do {
          param_2 = puVar16;
          *(undefined **)((undefined *)register0x00000020 + -0x50) = param_1;
          *(int *)((undefined *)register0x00000020 + -0x58) = (int)uVar15;
          *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x10362f;
          factor_insert_multiplicity
                    (puVar20,*(undefined8 *)((undefined *)register0x00000020 + -0x48),1);
          uVar15 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x58);
          param_1 = *(undefined **)((undefined *)register0x00000020 + -0x50);
          puVar16 = (undefined *)(*(long *)(lVar12 + 0x10) * (long)param_2);
        } while (puVar16 < *(undefined **)(long *)(lVar12 + 0x18) ||
                 puVar16 + -*(long *)(lVar12 + 0x18) == (undefined *)0x0);
        puVar16 = (undefined *)(*(long *)(lVar12 + 0x20) * (long)param_2);
        if (puVar16 < *(undefined **)(long *)(lVar12 + 0x28) ||
            puVar16 + -*(long *)(lVar12 + 0x28) == (undefined *)0x0) goto code_r0x00103660;
code_r0x001034ec:
        puVar16 = (undefined *)(*(long *)(lVar12 + 0x30) * (long)param_2);
        if (*(undefined **)(lVar12 + 0x38) < puVar16) goto code_r0x001034fe;
code_r0x001036c8:
        iVar19 = (int)uVar15;
        *(ulong *)((undefined *)register0x00000020 + -0x48) =
             (ulong)(byte)primes_diff[iVar19 + 1] + (ulong)(byte)primes_diff[iVar19 + 3] + uVar18 +
             (ulong)(byte)primes_diff[iVar19 + 2];
        do {
          param_2 = puVar16;
          *(undefined **)((undefined *)register0x00000020 + -0x50) = param_1;
          *(int *)((undefined *)register0x00000020 + -0x58) = (int)uVar15;
          *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x10370d;
          factor_insert_multiplicity
                    (puVar20,*(undefined8 *)((undefined *)register0x00000020 + -0x48),1);
          uVar15 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x58);
          param_1 = *(undefined **)((undefined *)register0x00000020 + -0x50);
          puVar16 = (undefined *)(*(long *)(lVar12 + 0x30) * (long)param_2);
        } while (puVar16 < *(undefined **)(long *)(lVar12 + 0x38) ||
                 puVar16 + -*(long *)(lVar12 + 0x38) == (undefined *)0x0);
        puVar16 = (undefined *)(*(long *)(lVar12 + 0x40) * (long)param_2);
        if (puVar16 <= *(undefined **)(lVar12 + 0x48)) {
code_r0x00103740:
          puVar23 = (undefined *)(ulong)((int)uVar15 + 5);
          *(int *)((undefined *)register0x00000020 + -0x58) = (int)uVar15 + 1;
          do {
            param_2 = puVar16;
            uVar10 = *(uint *)((undefined *)register0x00000020 + -0x58);
            uVar26 = uVar18;
            do {
              uVar13 = (ulong)uVar10;
              uVar10 = uVar10 + 1;
              uVar26 = uVar26 + (byte)primes_diff[uVar13];
            } while ((uint)puVar23 != uVar10);
            *(uint *)((undefined *)register0x00000020 + -0x40) = (uint)puVar23;
            *(undefined **)((undefined *)register0x00000020 + -0x48) = param_1;
            *(int *)((undefined *)register0x00000020 + -0x50) = (int)uVar15;
            *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x103782;
            factor_insert_multiplicity(puVar20,uVar26,1);
            uVar15 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x50);
            param_1 = *(undefined **)((undefined *)register0x00000020 + -0x48);
            puVar23 = (undefined *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x40);
            puVar16 = (undefined *)(*(long *)(lVar12 + 0x40) * (long)param_2);
          } while (puVar16 < *(undefined **)(long *)(lVar12 + 0x48) ||
                   puVar16 + -*(long *)(lVar12 + 0x48) == (undefined *)0x0);
        }
      }
      puVar16 = (undefined *)(*(long *)(lVar12 + 0x50) * (long)param_2);
      if (puVar16 < *(undefined **)(long *)(lVar12 + 0x58) ||
          puVar16 + -*(long *)(lVar12 + 0x58) == (undefined *)0x0) {
        puVar23 = (undefined *)(ulong)((int)uVar15 + 6);
        *(int *)((undefined *)register0x00000020 + -0x58) = (int)uVar15 + 1;
        do {
          param_2 = puVar16;
          uVar10 = *(uint *)((undefined *)register0x00000020 + -0x58);
          uVar26 = uVar18;
          do {
            uVar13 = (ulong)uVar10;
            uVar10 = uVar10 + 1;
            uVar26 = uVar26 + (byte)primes_diff[uVar13];
          } while ((uint)puVar23 != uVar10);
          *(uint *)((undefined *)register0x00000020 + -0x40) = (uint)puVar23;
          *(undefined **)((undefined *)register0x00000020 + -0x48) = param_1;
          *(int *)((undefined *)register0x00000020 + -0x50) = (int)uVar15;
          *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x103922;
          factor_insert_multiplicity(puVar20,uVar26,1);
          uVar15 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x50);
          param_1 = *(undefined **)((undefined *)register0x00000020 + -0x48);
          puVar23 = (undefined *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x40);
          puVar16 = (undefined *)(*(long *)(lVar12 + 0x50) * (long)param_2);
        } while (puVar16 < *(undefined **)(long *)(lVar12 + 0x58) ||
                 puVar16 + -*(long *)(lVar12 + 0x58) == (undefined *)0x0);
      }
      puVar16 = (undefined *)(*(long *)(lVar12 + 0x60) * (long)param_2);
      if (puVar16 <= *(undefined **)(lVar12 + 0x68)) {
        puVar23 = (undefined *)(ulong)((int)uVar15 + 7);
        *(int *)((undefined *)register0x00000020 + -0x58) = (int)uVar15 + 1;
        do {
          param_2 = puVar16;
          uVar10 = *(uint *)((undefined *)register0x00000020 + -0x58);
          uVar26 = uVar18;
          do {
            uVar13 = (ulong)uVar10;
            uVar10 = uVar10 + 1;
            uVar26 = uVar26 + (byte)primes_diff[uVar13];
          } while ((uint)puVar23 != uVar10);
          *(uint *)((undefined *)register0x00000020 + -0x40) = (uint)puVar23;
          *(undefined **)((undefined *)register0x00000020 + -0x48) = param_1;
          *(int *)((undefined *)register0x00000020 + -0x50) = (int)uVar15;
          *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1038b5;
          factor_insert_multiplicity(puVar20,uVar26,1);
          uVar15 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x50);
          param_1 = *(undefined **)((undefined *)register0x00000020 + -0x48);
          puVar23 = (undefined *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x40);
          puVar16 = (undefined *)(*(long *)(lVar12 + 0x60) * (long)param_2);
        } while (puVar16 < *(undefined **)(long *)(lVar12 + 0x68) ||
                 puVar16 + -*(long *)(lVar12 + 0x68) == (undefined *)0x0);
      }
      puVar16 = (undefined *)(*(long *)(lVar12 + 0x70) * (long)param_2);
      if (puVar16 < *(undefined **)(long *)(lVar12 + 0x78) ||
          puVar16 + -*(long *)(lVar12 + 0x78) == (undefined *)0x0) {
        puVar23 = (undefined *)(ulong)((int)uVar15 + 8);
        *(int *)((undefined *)register0x00000020 + -0x58) = (int)uVar15 + 1;
        do {
          param_2 = puVar16;
          uVar10 = *(uint *)((undefined *)register0x00000020 + -0x58);
          uVar26 = uVar18;
          do {
            uVar13 = (ulong)uVar10;
            uVar10 = uVar10 + 1;
            uVar26 = uVar26 + (byte)primes_diff[uVar13];
          } while ((uint)puVar23 != uVar10);
          *(uint *)((undefined *)register0x00000020 + -0x40) = (uint)puVar23;
          *(undefined **)((undefined *)register0x00000020 + -0x48) = param_1;
          *(int *)((undefined *)register0x00000020 + -0x50) = (int)uVar15;
          *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x103845;
          factor_insert_multiplicity(puVar20,uVar26,1);
          uVar15 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x50);
          param_1 = *(undefined **)((undefined *)register0x00000020 + -0x48);
          puVar23 = (undefined *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x40);
          puVar16 = (undefined *)(*(long *)(lVar12 + 0x70) * (long)param_2);
        } while (puVar16 < *(undefined **)(long *)(lVar12 + 0x78) ||
                 puVar16 + -*(long *)(lVar12 + 0x78) == (undefined *)0x0);
      }
      uVar18 = uVar18 + uVar14;
      if (param_2 < (undefined *)(uVar18 * uVar18)) break;
      uVar10 = (int)uVar15 + 8;
      uVar15 = (ulong)uVar10;
      if (0x29b < uVar10) break;
      uVar15 = (ulong)uVar10;
      uVar14 = (ulong)(byte)primes_diff8[uVar15];
      puVar23 = *(undefined **)
                 (undefined8 *)(uVar15 * 0x10 + *(long *)((undefined *)register0x00000020 + -0x60));
      in_R11 = (undefined *)
               ((undefined8 *)(uVar15 * 0x10 + *(long *)((undefined *)register0x00000020 + -0x60)))
               [1];
    } while( true );
  }
  if (param_1 == (undefined *)0x0) {
    if (param_2 < (undefined *)0x2) {
      return (undefined *)uVar15;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1037d2;
    cVar3 = prime2_p(0,param_2);
    unaff_RBP = *(undefined **)((undefined *)register0x00000020 + -0x60);
    if (cVar3 == '\0') {
      *(undefined8 *)((undefined *)register0x00000020 + -8) =
           *(undefined8 *)((undefined *)register0x00000020 + -8);
      *(undefined8 *)((undefined *)register0x00000020 + -0x10) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x10);
      *(undefined8 *)((undefined *)register0x00000020 + -0x18) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x18);
      *(undefined8 *)((undefined *)register0x00000020 + -0x20) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x20);
      *(undefined8 *)((undefined *)register0x00000020 + -0x28) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x28);
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x30);
      *(undefined8 **)((undefined *)register0x00000020 + -0x60) = puVar20;
      if (param_2 < (undefined *)0x2) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x102c50;
        uVar17 = func_0x00101750(&UNK_0010b464,&UNK_0010b424,0x5c2,__PRETTY_FUNCTION___7311);
        return (undefined *)uVar17;
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x48) = 2;
      puVar16 = param_2;
code_r0x00102879:
      iVar19 = 0x40;
      puVar24 = (undefined *)0x0;
      puVar11 = (undefined *)0x1;
      *(long *)((undefined *)register0x00000020 + -0x68) =
           *(long *)((undefined *)register0x00000020 + -0x48) + -1;
      puVar29 = (undefined *)0x0;
      puVar7 = puVar16;
      do {
        puVar30 = (undefined *)((ulong)puVar7 >> 1);
        puVar29 = (undefined *)((ulong)puVar29 >> 1 | (long)puVar7 << 0x3f);
        if ((puVar30 < puVar11) || ((puVar30 == puVar11 && (puVar29 <= puVar24)))) {
          bVar32 = puVar24 < puVar29;
          puVar24 = puVar24 + -(long)puVar29;
          puVar11 = puVar11 + (-(ulong)bVar32 - (long)puVar30);
        }
        iVar19 = iVar19 + -1;
        puVar7 = puVar30;
      } while (iVar19 != 0);
      uVar18 = ((long)puVar24 * 2 - (long)puVar16) +
               (-(ulong)(puVar24 < puVar16 + -(long)puVar24) & (ulong)puVar16);
      uVar14 = uVar18;
      if (puVar16 < *(undefined **)((undefined *)register0x00000020 + -0x68) ||
          puVar16 == *(undefined **)((undefined *)register0x00000020 + -0x68))
      goto code_r0x00102b8b;
      puVar7 = (undefined *)0x1;
      puVar29 = (undefined *)0x1;
      uVar26 = uVar18;
      uVar15 = uVar18;
code_r0x00102904:
      uVar14 = (ulong)(byte)binvert_table[(uint)((ulong)puVar16 >> 1) & 0x7f];
      lVar12 = uVar14 * 2 - uVar14 * uVar14 * (long)puVar16;
      lVar12 = lVar12 * 2 - lVar12 * lVar12 * (long)puVar16;
      unaff_RBP = (undefined *)(lVar12 * 2 - lVar12 * lVar12 * (long)puVar16);
      puVar23 = puVar16 + -*(long *)((undefined *)register0x00000020 + -0x68);
      param_6 = (undefined *)(*(long *)((undefined *)register0x00000020 + -0x68) - (long)puVar16);
      uVar14 = uVar18;
      do {
        while( true ) {
          uVar18 = SUB168(ZEXT816(uVar26) * ZEXT816(uVar26) >> 0x40,0);
          uVar26 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar26) * ZEXT816(uVar26),0) *
                                         (long)unaff_RBP)) * ZEXT816(puVar16) >> 0x40,0);
          puVar11 = (undefined *)(uVar18 - uVar26);
          if (uVar18 < uVar26) {
            puVar11 = puVar11 + (long)puVar16;
          }
          uVar26 = (-(ulong)(puVar11 < puVar23) & (ulong)puVar16) + (long)puVar11 + (long)param_6;
          auVar33 = ZEXT816(puVar24) *
                    ZEXT816((-(ulong)(uVar15 < uVar26) & (ulong)puVar16) + (uVar15 - uVar26));
          uVar18 = SUB168(auVar33 >> 0x40,0);
          uVar13 = SUB168(ZEXT816((ulong)(SUB168(auVar33,0) * (long)unaff_RBP)) * ZEXT816(puVar16)
                          >> 0x40,0);
          puVar24 = (undefined *)(uVar18 - uVar13);
          if (uVar18 < uVar13) {
            puVar24 = puVar24 + (long)puVar16;
          }
          uVar18 = uVar14;
          puVar11 = puVar7;
          if (((uint)puVar29 & 0x1f) == 1) break;
code_r0x001029cf:
          puVar30 = puVar29 + -1;
          uVar14 = uVar18;
          puVar7 = puVar11;
          puVar29 = puVar30;
          if ((puVar30 == (undefined *)0x0) &&
             (puVar7 = (undefined *)((long)puVar11 * 2), uVar14 = uVar26, puVar29 = puVar11,
             uVar15 = uVar26, puVar11 != (undefined *)0x0)) {
            do {
              uVar18 = SUB168(ZEXT816(uVar14) * ZEXT816(uVar14) >> 0x40,0);
              uVar14 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar14) * ZEXT816(uVar14),0) *
                                             (long)unaff_RBP)) * ZEXT816(puVar16) >> 0x40,0);
              puVar29 = (undefined *)(uVar18 - uVar14);
              if (uVar18 < uVar14) {
                puVar29 = puVar29 + (long)puVar16;
              }
              puVar30 = puVar30 + 1;
              uVar14 = (-(ulong)(puVar29 < puVar23) & (ulong)puVar16) +
                       (long)puVar29 + (long)param_6;
              uVar26 = uVar14;
              puVar29 = puVar30;
            } while (puVar11 != puVar30);
          }
        }
        *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x102a3b;
        lVar12 = gcd_odd(puVar24,puVar16);
        uVar18 = uVar26;
        puVar11 = puVar7;
        if (lVar12 == 1) goto code_r0x001029cf;
        do {
          uVar18 = SUB168(ZEXT816(uVar14) * ZEXT816(uVar14) >> 0x40,0);
          uVar14 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar14) * ZEXT816(uVar14),0) *
                                         (long)unaff_RBP)) * ZEXT816(puVar16) >> 0x40,0);
          puVar11 = (undefined *)(uVar18 - uVar14);
          if (uVar18 < uVar14) {
            puVar11 = puVar11 + (long)puVar16;
          }
          uVar14 = (-(ulong)(puVar11 < puVar23) & (ulong)puVar16) + (long)puVar11 + (long)param_6;
          *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x102a9b;
          in_R11 = (undefined *)
                   gcd_odd((-(ulong)(uVar15 < uVar14) & (ulong)puVar16) + (uVar15 - uVar14),puVar16)
          ;
        } while (in_R11 == (undefined *)0x1);
        if (puVar16 == in_R11) {
          *(long *)((undefined *)register0x00000020 + -0x48) =
               *(long *)((undefined *)register0x00000020 + -0x48) + 1;
          goto code_r0x00102879;
        }
        puVar16 = (undefined *)((ulong)puVar16 / (ulong)in_R11);
        puVar11 = puVar16;
        if ((undefined *)0x1 < in_R11) {
          if ((undefined *)0x17ded78 < in_R11) {
            *(undefined **)((undefined *)register0x00000020 + -0x50) = puVar7;
            *(undefined **)((undefined *)register0x00000020 + -0x58) = in_R11;
            *(undefined **)((undefined *)register0x00000020 + -0x40) = puVar16;
            *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x102ae8;
            cVar3 = prime_p_part_4(in_R11);
            in_R11 = *(undefined **)((undefined *)register0x00000020 + -0x58);
            puVar7 = *(undefined **)((undefined *)register0x00000020 + -0x50);
            puVar11 = *(undefined **)((undefined *)register0x00000020 + -0x40);
            if (cVar3 == '\0') goto code_r0x00102aff;
          }
          *(undefined **)((undefined *)register0x00000020 + -0x50) = puVar11;
          *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar7;
          *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x102be4;
          param_2 = (undefined *)
                    factor_insert_multiplicity
                              (*(undefined8 *)((undefined *)register0x00000020 + -0x60),in_R11,1);
          unaff_RBP = *(undefined **)((undefined *)register0x00000020 + -0x50);
          puVar7 = *(undefined **)((undefined *)register0x00000020 + -0x58);
          if (unaff_RBP < (undefined *)0x2) goto code_r0x00102bf8;
code_r0x00102b2f:
          if ((undefined *)0x17ded78 < unaff_RBP) {
            *(undefined **)((undefined *)register0x00000020 + -0x50) = puVar7;
            *(undefined **)((undefined *)register0x00000020 + -0x58) = unaff_RBP;
            *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x102b4e;
            param_2 = (undefined *)prime_p_part_4(unaff_RBP);
            unaff_RBP = *(undefined **)((undefined *)register0x00000020 + -0x58);
            puVar7 = *(undefined **)((undefined *)register0x00000020 + -0x50);
            if ((char)param_2 == '\0') {
              uVar26 = uVar26 % (ulong)unaff_RBP;
              uVar15 = uVar15 % (ulong)unaff_RBP;
              uVar18 = uVar14 % (ulong)unaff_RBP;
              goto code_r0x00102b81;
            }
          }
          puVar20 = *(undefined8 **)((undefined *)register0x00000020 + -0x60);
          uVar17 = *(undefined8 *)((undefined *)register0x00000020 + -0x30);
          puVar23 = *(undefined **)((undefined *)register0x00000020 + -0x28);
          uVar25 = *(undefined8 *)((undefined *)register0x00000020 + -0x20);
          uVar27 = *(undefined8 *)((undefined *)register0x00000020 + -0x18);
          uVar31 = *(undefined8 *)((undefined *)register0x00000020 + -0x10);
          puVar16 = unaff_RBP;
          goto code_r0x00101d70;
        }
code_r0x00102aff:
        *(undefined **)((undefined *)register0x00000020 + -0x50) = puVar11;
        *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar7;
        *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x102b1b;
        param_2 = (undefined *)
                  factor_using_pollard_rho
                            (in_R11,*(undefined8 *)((undefined *)register0x00000020 + -0x48),
                             *(undefined8 *)((undefined *)register0x00000020 + -0x60));
        unaff_RBP = *(undefined **)((undefined *)register0x00000020 + -0x50);
        puVar7 = *(undefined **)((undefined *)register0x00000020 + -0x58);
        if ((undefined *)0x1 < unaff_RBP) goto code_r0x00102b2f;
code_r0x00102bf8:
        if (unaff_RBP == (undefined *)0x1) {
          return param_2;
        }
        uVar18 = 0;
        uVar15 = 0;
        uVar26 = 0;
code_r0x00102b81:
        uVar14 = uVar26;
        if (*(undefined **)((undefined *)register0x00000020 + -0x68) <= unaff_RBP &&
            unaff_RBP != *(undefined **)((undefined *)register0x00000020 + -0x68))
        goto code_r0x00102904;
code_r0x00102b8b:
        puVar7 = &UNK_0010b424;
        *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x102baa;
        func_0x00101750(&UNK_0010b46e,&UNK_0010b424,0x5c8,__PRETTY_FUNCTION___7311);
        uVar26 = uVar14;
        puVar29 = in_R11;
        uVar15 = uVar14;
      } while( true );
    }
  }
  else {
    *(undefined **)((undefined *)register0x00000020 + -0x60) = param_1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1039c0;
    cVar3 = prime2_p(param_1,param_2);
    unaff_RBP = *(undefined **)((undefined *)register0x00000020 + -0x60);
    if (cVar3 == '\0') {
      unaff_R13 = *(undefined **)((undefined *)register0x00000020 + -0x18);
      unaff_R14 = *(long *)((undefined *)register0x00000020 + -0x10);
      unaff_R15 = *(undefined **)((undefined *)register0x00000020 + -8);
      *(undefined **)((undefined *)register0x00000020 + -8) = unaff_R15;
      *(long *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
      *(undefined **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
      *(undefined8 *)((undefined *)register0x00000020 + -0x20) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x20);
      *(undefined8 *)((undefined *)register0x00000020 + -0x28) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x28);
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x30);
      *(undefined8 *)((undefined *)register0x00000020 + -0x40) =
           *(undefined8 *)(in_FS_OFFSET + 0x28);
      *(undefined8 **)((undefined *)register0x00000020 + -0x88) = puVar20;
      *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 1;
      lVar12 = (ulong)(-(uint)(unaff_RBP < (undefined *)0x2) & 0x40) + 0x40;
      puVar23 = (undefined *)(ulong)(unaff_RBP >= (undefined *)0x2);
      puVar16 = (undefined *)(ulong)(unaff_RBP < (undefined *)0x2);
      while (lVar12 = lVar12 + -1, lVar12 != -1) {
        while( true ) {
          puVar7 = (undefined *)((long)puVar16 * 2);
          puVar23 = (undefined *)((long)puVar23 * 2 | (ulong)puVar16 >> 0x3f);
          if ((puVar23 <= unaff_RBP) &&
             ((puVar16 = puVar7, unaff_RBP != puVar23 || (puVar7 < param_2)))) break;
          lVar12 = lVar12 + -1;
          puVar16 = puVar7 + -(long)param_2;
          puVar23 = puVar23 + (-(ulong)(puVar7 < param_2) - (long)unaff_RBP);
          if (lVar12 == -1) goto code_r0x00102ceb;
        }
      }
code_r0x00102ceb:
      *(undefined **)((undefined *)register0x00000020 + -0xc0) = puVar23;
      unaff_RBX = (undefined1 *)((long)puVar16 * 2);
      puVar23 = (undefined *)((long)puVar23 * 2 + (ulong)CARRY8((ulong)puVar16,(ulong)puVar16));
      *(undefined **)((undefined *)register0x00000020 + -0xb8) = puVar16;
      *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar23;
      if ((unaff_RBP < puVar23) || ((puVar23 == unaff_RBP && (param_2 <= unaff_RBX)))) {
        bVar32 = unaff_RBX < param_2;
        unaff_RBX = unaff_RBX + -(long)param_2;
        puVar23 = puVar23 + (-(ulong)bVar32 - (long)unaff_RBP);
        *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar23;
      }
      *(undefined **)((undefined *)register0x00000020 + -0x60) = puVar23;
      *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar23;
      unaff_R12 = param_2;
      if ((param_2 != (undefined *)0x1) || (param_1 = unaff_RBP, unaff_RBP != (undefined *)0x0)) {
        *(undefined1 **)((undefined *)register0x00000020 + -0xa8) = unaff_RBX;
        *(undefined8 *)((undefined *)register0x00000020 + -0xd0) = 1;
        unaff_R13 = (undefined *)0x1;
        *(undefined **)((undefined *)register0x00000020 + -200) =
             (undefined *)register0x00000020 + -0x48;
        *(undefined **)((undefined *)register0x00000020 + -0xa0) =
             (undefined *)register0x00000020 + -0x50;
        *(undefined **)((undefined *)register0x00000020 + -0x80) =
             (undefined *)register0x00000020 + -0x68;
        *(undefined **)((undefined *)register0x00000020 + -0x78) =
             (undefined *)register0x00000020 + -0x60;
        *(undefined **)((undefined *)register0x00000020 + -0x70) =
             (undefined *)register0x00000020 + -0x58;
        unaff_R15 = unaff_RBX;
code_r0x00102da0:
        uVar14 = (ulong)(byte)binvert_table[(uint)((ulong)unaff_R12 >> 1) & 0x7f];
        lVar12 = uVar14 * 2 - uVar14 * uVar14 * (long)unaff_R12;
        lVar12 = lVar12 * 2 - lVar12 * lVar12 * (long)unaff_R12;
        unaff_R14 = lVar12 * 2 - lVar12 * lVar12 * (long)unaff_R12;
        do {
          *(long *)((undefined *)register0x00000020 + -0xe0) = unaff_R14;
          *(undefined **)((undefined *)register0x00000020 + -0xe8) = unaff_R12;
          *(undefined8 *)((undefined *)register0x00000020 + -0xf0) = 0x102e0a;
          uVar14 = mulredc2(*(undefined8 *)((undefined *)register0x00000020 + -200),puVar23,
                            unaff_RBX,puVar23,unaff_RBX,unaff_RBP);
          unaff_RBX = (undefined1 *)(uVar14 + *(ulong *)((undefined *)register0x00000020 + -0xb0));
          puVar23 = (undefined *)
                    (*(long *)((undefined *)register0x00000020 + -0x48) +
                    (ulong)CARRY8(uVar14,*(ulong *)((undefined *)register0x00000020 + -0xb0)));
          *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar23;
          if ((unaff_RBP < puVar23) || ((unaff_RBP == puVar23 && (unaff_R12 <= unaff_RBX)))) {
            bVar32 = unaff_RBX < unaff_R12;
            unaff_RBX = unaff_RBX + -(long)unaff_R12;
            puVar23 = puVar23 + (-(ulong)bVar32 - (long)unaff_RBP);
            *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar23;
          }
          puVar16 = *(undefined **)((undefined *)register0x00000020 + -0xa8) + -(long)unaff_RBX;
          puVar23 = (undefined *)
                    ((*(long *)((undefined *)register0x00000020 + -0x60) - (long)puVar23) -
                    (ulong)(*(undefined **)((undefined *)register0x00000020 + -0xa8) < unaff_RBX));
          if ((long)puVar23 < 0) {
            bVar32 = CARRY8((ulong)puVar16,(ulong)unaff_R12);
            puVar16 = puVar16 + (long)unaff_R12;
            puVar23 = unaff_RBP + (long)(puVar23 + bVar32);
          }
          *(long *)((undefined *)register0x00000020 + -0xe0) = unaff_R14;
          *(undefined **)((undefined *)register0x00000020 + -0xe8) = unaff_R12;
          *(undefined8 *)((undefined *)register0x00000020 + -0xf0) = 0x102e7e;
          uVar17 = mulredc2(*(undefined8 *)((undefined *)register0x00000020 + -200),
                            *(undefined8 *)((undefined *)register0x00000020 + -0xc0),
                            *(undefined8 *)((undefined *)register0x00000020 + -0xb8),puVar23,puVar16
                            ,unaff_RBP);
          *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = uVar17;
          *(undefined8 *)((undefined *)register0x00000020 + -0xc0) =
               *(undefined8 *)((undefined *)register0x00000020 + -0x48);
          in_R11 = *(undefined **)((undefined *)register0x00000020 + -0xe0);
          if (((uint)unaff_R13 & 0x1f) == 1) {
            *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x102f9a;
            lVar12 = gcd2_odd(*(undefined8 *)((undefined *)register0x00000020 + -0xa0),
                              *(undefined8 *)((undefined *)register0x00000020 + -0xc0),
                              *(undefined8 *)((undefined *)register0x00000020 + -0xb8),unaff_RBP,
                              unaff_R12);
            if ((*(long *)((undefined *)register0x00000020 + -0x50) != 0) || (lVar12 != 1))
            goto code_r0x00102fc0;
            puVar23 = *(undefined **)((undefined *)register0x00000020 + -0x68);
            *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar23;
            unaff_R15 = unaff_RBX;
          }
          else {
            puVar23 = *(undefined **)((undefined *)register0x00000020 + -0x68);
          }
          unaff_R13 = unaff_R13 + -1;
          if (unaff_R13 == (undefined *)0x0) {
            *(undefined **)((undefined *)register0x00000020 + -0x60) = puVar23;
            *(long *)((undefined *)register0x00000020 + -0xa8) =
                 *(long *)((undefined *)register0x00000020 + -0xd0) * 2;
            puVar16 = unaff_RBX;
            if (*(long *)((undefined *)register0x00000020 + -0xd0) != 0) {
              *(undefined1 **)((undefined *)register0x00000020 + -0x98) = unaff_RBX;
              uVar17 = *(undefined8 *)((undefined *)register0x00000020 + -200);
              uVar14 = *(ulong *)((undefined *)register0x00000020 + -0xb0);
              do {
                *(long *)((undefined *)register0x00000020 + -0xe0) = unaff_R14;
                *(undefined **)((undefined *)register0x00000020 + -0xe8) = unaff_R12;
                *(undefined8 *)((undefined *)register0x00000020 + -0xf0) = 0x102f05;
                uVar18 = mulredc2(uVar17,puVar23,unaff_RBX,puVar23,unaff_RBX,unaff_RBP);
                unaff_RBX = (undefined1 *)(uVar18 + uVar14);
                puVar23 = (undefined *)
                          (*(long *)((undefined *)register0x00000020 + -0x48) +
                          (ulong)CARRY8(uVar18,uVar14));
                *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar23;
                if ((unaff_RBP < puVar23) || ((unaff_RBP == puVar23 && (unaff_R12 <= unaff_RBX)))) {
                  bVar32 = unaff_RBX < unaff_R12;
                  unaff_RBX = unaff_RBX + -(long)unaff_R12;
                  puVar23 = puVar23 + (-(ulong)bVar32 - (long)unaff_RBP);
                  *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar23;
                }
                unaff_R13 = unaff_R13 + 1;
              } while (*(undefined **)((undefined *)register0x00000020 + -0xd0) != unaff_R13);
              puVar16 = *(undefined **)((undefined *)register0x00000020 + -0x98);
            }
            uVar17 = *(undefined8 *)((undefined *)register0x00000020 + -0xa8);
            unaff_R13 = *(undefined **)((undefined *)register0x00000020 + -0xd0);
            *(undefined **)((undefined *)register0x00000020 + -0xa8) = puVar16;
            *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar23;
            *(undefined8 *)((undefined *)register0x00000020 + -0xd0) = uVar17;
            unaff_R15 = unaff_RBX;
          }
        } while( true );
      }
      goto code_r0x0010313a;
    }
  }
  uVar17 = *(undefined8 *)((undefined *)register0x00000020 + -0x30);
  uVar25 = *(undefined8 *)((undefined *)register0x00000020 + -0x20);
  uVar27 = *(undefined8 *)((undefined *)register0x00000020 + -0x18);
  uVar31 = *(undefined8 *)((undefined *)register0x00000020 + -0x10);
  puVar23 = *(undefined **)((undefined *)register0x00000020 + -0x28);
  puVar7 = unaff_RBP;
  while (puVar16 = param_2, unaff_RBP != (undefined *)0x0) {
    if (puVar20[1] == 0) {
      *(undefined **)puVar20 = param_2;
      *(undefined **)(puVar20 + 1) = unaff_RBP;
      return param_2;
    }
    puVar6 = __PRETTY_FUNCTION___7027;
    puVar16 = &UNK_0010b424;
    puVar20 = (undefined8 *)&UNK_0010b43d;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102500;
    func_0x00101750(&UNK_0010b43d,&UNK_0010b424,0x235);
    if (((ulong)puVar7 & 1) != 0) {
      puVar23 = extraout_RDX_00;
      if (((ulong)extraout_RDX_00 | (ulong)puVar16) == 0) {
        *(undefined1 **)puVar20 = puVar6;
        return puVar7;
      }
      while (((ulong)puVar23 & 1) == 0) {
        puVar23 = (undefined *)((ulong)puVar23 >> 1 | (long)puVar16 << 0x3f);
        puVar16 = (undefined *)((ulong)puVar16 >> 1);
      }
      while (((ulong)puVar16 | (ulong)puVar6) != 0) {
        while ((puVar16 <= puVar6 && ((puVar23 <= puVar7 || (puVar16 != puVar6))))) {
          if ((puVar6 <= puVar16) && ((puVar7 <= puVar23 || (puVar16 != puVar6)))) {
            *(undefined **)puVar20 = puVar16;
            return puVar23;
          }
          bVar32 = puVar7 < puVar23;
          puVar7 = puVar7 + -(long)puVar23;
          puVar24 = puVar6 + (-(ulong)bVar32 - (long)puVar16);
          do {
            uVar14 = (ulong)puVar7 >> 1;
            puVar6 = (undefined1 *)((ulong)puVar24 >> 1);
            puVar7 = (undefined *)(uVar14 | (long)puVar24 << 0x3f);
            puVar24 = puVar6;
          } while ((uVar14 & 1) == 0);
          if (((ulong)puVar16 | (ulong)puVar6) == 0) goto code_r0x00102586;
        }
        bVar32 = puVar23 < puVar7;
        puVar23 = puVar23 + -(long)puVar7;
        puVar24 = puVar16 + (-(ulong)bVar32 - (long)puVar6);
        do {
          uVar14 = (ulong)puVar23 >> 1;
          puVar16 = (undefined *)((ulong)puVar24 >> 1);
          puVar23 = (undefined *)(uVar14 | (long)puVar24 << 0x3f);
          puVar24 = puVar16;
        } while ((uVar14 & 1) == 0);
      }
code_r0x00102586:
      *puVar20 = 0;
      puVar16 = puVar23;
      if (((ulong)puVar23 & 1) != 0) {
        puVar16 = puVar7;
        puVar7 = puVar23;
      }
      uVar14 = (ulong)puVar7 >> 1;
      if (puVar16 == (undefined *)0x0) {
        return puVar7;
      }
      while( true ) {
        do {
          puVar23 = puVar16;
          puVar16 = (undefined *)((ulong)puVar23 >> 1);
        } while (((ulong)puVar23 & 1) == 0);
        puVar16 = (undefined *)((ulong)puVar23 >> 1) + -uVar14;
        if (puVar16 == (undefined *)0x0) break;
        uVar18 = (long)puVar16 >> 0x3f;
        uVar14 = uVar14 + ((ulong)puVar16 & uVar18);
        puVar16 = (undefined *)(((ulong)puVar16 ^ uVar18) - uVar18);
      }
      return (undefined *)((ulong)puVar23 | 1);
    }
    puVar6 = __PRETTY_FUNCTION___6996;
    puVar16 = &UNK_0010b424;
    puVar20 = (undefined8 *)&UNK_0010b455;
    *(undefined8 *)((undefined *)register0x00000020 + -0x18) = 0x102601;
    func_0x00101750(&UNK_0010b455,&UNK_0010b424,0x1e3);
    if (puVar6 != (undefined1 *)0x0) {
      if (puVar16 != (undefined *)0x0) {
        lVar12 = 0x3f;
        uVar10 = 0x3f;
        if (puVar6 != (undefined1 *)0x0) {
          while (uVar10 = (uint)lVar12, (ulong)puVar6 >> lVar12 == 0) {
            lVar12 = lVar12 + -1;
          }
        }
        lVar12 = 0x3f;
        uVar22 = 0x3f;
        if (puVar16 != (undefined *)0x0) {
          while (uVar22 = (uint)lVar12, (ulong)puVar16 >> lVar12 == 0) {
            lVar12 = lVar12 + -1;
          }
        }
        iVar19 = (uVar10 ^ 0x3f) - (uVar22 ^ 0x3f);
        bVar5 = (byte)iVar19;
        puVar23 = (undefined *)
                  ((ulong)puVar7 >> (0x40 - bVar5 & 0x3f) | (long)puVar6 << (bVar5 & 0x3f));
        uVar18 = (long)puVar7 << (bVar5 & 0x3f);
        uVar14 = extraout_RDX_01;
        if (0 < iVar19) {
          iVar9 = 0;
          do {
            if ((puVar23 < puVar16) || ((puVar23 == puVar16 && (uVar18 <= uVar14)))) {
              bVar32 = uVar14 < uVar18;
              uVar14 = uVar14 - uVar18;
              puVar16 = puVar16 + (-(ulong)bVar32 - (long)puVar23);
            }
            iVar9 = iVar9 + 1;
            uVar26 = (long)puVar23 << 0x3f;
            puVar23 = (undefined *)((ulong)puVar23 >> 1);
            uVar18 = uVar18 >> 1 | uVar26;
          } while (iVar19 != iVar9);
        }
        *(undefined **)puVar20 = puVar16;
        return (undefined *)uVar14;
      }
      *puVar20 = 0;
      return (undefined *)extraout_RDX_01;
    }
    puVar16 = &UNK_0010b424;
    puVar7 = &UNK_0010b45c;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = 0x1026bb;
    func_0x00101750(&UNK_0010b45c,&UNK_0010b424,0x1a3,&__PRETTY_FUNCTION___6970);
    if (puVar7 == (undefined *)0x0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      iVar19 = 0x40;
      lVar12 = 0;
      uVar14 = ((ulong)puVar7 >> 9) / 0x1dcd65;
      puVar7 = puVar7 + uVar14 * -1000000000;
      puVar29 = (undefined *)0x0;
      puVar24 = (undefined *)0x3b9aca00;
      do {
        puVar11 = (undefined *)((ulong)puVar24 >> 1);
        lVar12 = lVar12 * 2;
        puVar29 = (undefined *)((ulong)puVar29 >> 1 | (long)puVar24 << 0x3f);
        if ((puVar11 < puVar7) || ((puVar11 == puVar7 && (puVar29 <= puVar16)))) {
          lVar12 = lVar12 + 1;
          bVar32 = puVar16 < puVar29;
          puVar16 = puVar16 + -(long)puVar29;
          puVar7 = puVar7 + (-(ulong)bVar32 - (long)puVar11);
        }
        iVar19 = iVar19 + -1;
        puVar24 = puVar11;
      } while (iVar19 != 0);
      *(undefined **)((undefined *)register0x00000020 + -0x28) = puVar16;
      *(undefined8 *)((undefined *)register0x00000020 + -0x38) = 0x10274c;
      print_uintmaxes(uVar14,lVar12);
      puVar16 = *(undefined **)((undefined *)register0x00000020 + -0x28);
      puVar24 = (undefined *)0x9;
    }
    *(undefined **)((undefined *)register0x00000020 + -0x20) = puVar23;
    *(undefined8 *)((undefined *)register0x00000020 + -0x28) = uVar17;
    *(undefined8 *)((undefined *)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x1023c4;
    lVar12 = umaxtostr(puVar16,(undefined *)register0x00000020 + -0x50);
    puVar23 = lbuf._8_8_;
    puVar16 = (undefined *)register0x00000020 + (-0x3c - lVar12);
    if (puVar16 < puVar24) {
      lVar2 = (long)puVar24 + (long)lbuf._8_8_;
      puVar7 = lbuf._8_8_;
      do {
        *puVar7 = 0x30;
        puVar7 = puVar7 + 1;
      } while (puVar7 != (undefined *)(lVar2 - (long)puVar16));
      puVar24 = puVar24 + -(long)puVar16;
      puVar23 = puVar23 + (long)puVar24;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x10240e;
    lVar12 = func_0x001017d0(puVar23,lVar12,puVar16);
    puVar7 = puVar16 + lVar12;
    if (*(long *)((undefined *)register0x00000020 + -0x38) == *(long *)(in_FS_OFFSET + 0x28)) {
      lbuf._8_8_ = puVar7;
      return (undefined *)0x0;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102437;
    lbuf._8_8_ = puVar7;
    func_0x001016f0();
    *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar16;
    puVar16 = lbuf._8_8_ + -lbuf._0_8_;
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x10245f;
    puVar23 = (undefined *)full_write(1,lbuf._0_8_,puVar16);
    if (puVar23 == puVar16) {
      lbuf._8_8_ = (undefined *)lbuf._0_8_;
      return (undefined *)lbuf._0_8_;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x102487;
    uVar17 = func_0x001016c0(0,&UNK_0010b431,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x10248f;
    puVar4 = (uint *)func_0x00101610();
    unaff_RBP = (undefined *)(ulong)*puVar4;
    puVar20 = (undefined8 *)0x1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x1024a7;
    func_0x001018b0(1,unaff_RBP,&UNK_0010e94c,uVar17);
    param_2 = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x58);
    puVar23 = puVar24;
  }
code_r0x00101d70:
  *(undefined8 *)((undefined *)register0x00000020 + -8) = uVar31;
  *(undefined8 *)((undefined *)register0x00000020 + -0x10) = uVar27;
  puVar8 = puVar20 + 2;
  bVar5 = *(byte *)((long)puVar20 + 0xfa);
  *(undefined8 *)((undefined *)register0x00000020 + -0x18) = uVar25;
  *(undefined **)((undefined *)register0x00000020 + -0x20) = puVar23;
  *(undefined8 *)((undefined *)register0x00000020 + -0x28) = uVar17;
  puVar1 = puVar20 + 0x1c;
  uVar10 = (uint)bVar5 - 1;
  puVar21 = puVar1;
  puVar28 = puVar8;
  if (uVar10 != 0xffffffff) {
    puVar7 = (undefined *)(long)(int)uVar10;
    param_2 = (undefined *)((long)puVar7 * 8);
    puVar23 = (undefined *)(puVar20 + 2)[(long)puVar7];
    if (puVar16 < puVar23) {
      param_2 = puVar7 + -1;
      puVar29 = param_2;
      uVar22 = uVar10;
      do {
        puVar24 = puVar29;
        uVar22 = uVar22 - 1;
        puVar11 = param_2;
        if (puVar7 + (-1 - (ulong)uVar10) == puVar24) {
          uVar22 = 0xffffffff;
          goto code_r0x00101e00;
        }
        bVar32 = (undefined *)puVar20[(long)(puVar24 + -1 + 3)] == puVar16;
        puVar29 = puVar24 + -1;
      } while (puVar16 <= (undefined *)puVar20[(long)(puVar24 + -1 + 3)] && !bVar32);
      if (bVar32) {
code_r0x00101e55:
        *(char *)((long)puVar1 + (long)puVar24) = *(char *)((long)puVar1 + (long)puVar24) + '\x01';
        return param_2;
      }
      puVar28 = puVar8 + (long)(puVar24 + 1);
      puVar21 = (undefined8 *)(puVar24 + 1 + (long)puVar1);
      if ((int)uVar22 < (int)uVar10) {
code_r0x00101e00:
        while( true ) {
          param_2 = puVar11;
          *(undefined **)(puVar20 + (long)(puVar7 + 3)) = puVar23;
          puVar7[(long)puVar20 + 0xe1] = *(undefined *)((long)puVar1 + (long)puVar7);
          if ((int)param_2 <= (int)uVar22) break;
          puVar23 = (undefined *)puVar8[(long)param_2];
          puVar11 = param_2 + -1;
          puVar7 = param_2;
        }
      }
    }
    else {
      puVar24 = puVar7;
      if (puVar16 == puVar23) goto code_r0x00101e55;
      puVar21 = (undefined8 *)(puVar7 + (long)puVar20 + 0xe1);
      puVar28 = puVar20 + 3 + (long)puVar7;
    }
  }
  *(undefined **)puVar28 = puVar16;
  *(undefined *)puVar21 = 1;
  *(char *)((long)puVar20 + 0xfa) = bVar5 + 1;
  return param_2;
}

