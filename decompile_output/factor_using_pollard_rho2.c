
undefined *
factor_using_pollard_rho2
          (undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 param_5,undefined *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  undefined *extraout_RDX;
  undefined *extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 unaff_RBX;
  undefined1 *puVar21;
  undefined8 unaff_RBP;
  int iVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined *puVar25;
  undefined *in_R11;
  undefined8 uVar26;
  undefined8 unaff_R12;
  ulong uVar27;
  undefined8 uVar28;
  undefined *unaff_R13;
  undefined8 *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  long unaff_R14;
  undefined *unaff_R15;
  long in_FS_OFFSET;
  bool bVar32;
  undefined auVar33 [16];
  
code_r0x00102c60:
  *(undefined **)((undefined *)register0x00000020 + -8) = unaff_R15;
  *(long *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
  *(undefined **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
  *(undefined8 *)((undefined *)register0x00000020 + -0x20) = unaff_R12;
  *(undefined8 *)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
  *(undefined8 *)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
  puVar10 = (undefined *)register0x00000020 + -0xd8;
  *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 **)((undefined *)register0x00000020 + -0x88) = param_4;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = param_3;
  lVar5 = (ulong)(-(uint)(param_1 < (undefined *)0x2) & 0x40) + 0x40;
  puVar19 = (undefined *)(ulong)(param_1 >= (undefined *)0x2);
  puVar12 = (undefined *)(ulong)(param_1 < (undefined *)0x2);
  while (lVar5 = lVar5 + -1, lVar5 != -1) {
    while( true ) {
      puVar25 = (undefined *)((long)puVar12 * 2);
      puVar19 = (undefined *)((long)puVar19 * 2 | (ulong)puVar12 >> 0x3f);
      if ((puVar19 <= param_1) && ((puVar12 = puVar25, param_1 != puVar19 || (puVar25 < param_2))))
      break;
      lVar5 = lVar5 + -1;
      puVar12 = puVar25 + -(long)param_2;
      puVar19 = puVar19 + (-(ulong)(puVar25 < param_2) - (long)param_1);
      if (lVar5 == -1) goto code_r0x00102ceb;
    }
  }
code_r0x00102ceb:
  *(undefined **)((undefined *)register0x00000020 + -0xc0) = puVar19;
  puVar21 = (undefined1 *)((long)puVar12 * 2);
  puVar19 = (undefined *)((long)puVar19 * 2 + (ulong)CARRY8((ulong)puVar12,(ulong)puVar12));
  *(undefined **)((undefined *)register0x00000020 + -0xb8) = puVar12;
  *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar19;
  if ((param_1 < puVar19) || ((puVar19 == param_1 && (param_2 <= puVar21)))) {
    bVar32 = puVar21 < param_2;
    puVar21 = puVar21 + -(long)param_2;
    puVar19 = puVar19 + (-(ulong)bVar32 - (long)param_1);
    *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar19;
  }
  *(undefined **)((undefined *)register0x00000020 + -0x60) = puVar19;
  *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar19;
  if ((param_2 != (undefined *)0x1) || (puVar12 = param_1, param_1 != (undefined *)0x0)) {
    *(undefined1 **)((undefined *)register0x00000020 + -0xa8) = puVar21;
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
    unaff_R15 = puVar21;
code_r0x00102da0:
    uVar6 = (ulong)(byte)binvert_table[(uint)((ulong)param_2 >> 1) & 0x7f];
    lVar5 = uVar6 * 2 - uVar6 * uVar6 * (long)param_2;
    lVar5 = lVar5 * 2 - lVar5 * lVar5 * (long)param_2;
    unaff_R14 = lVar5 * 2 - lVar5 * lVar5 * (long)param_2;
    do {
      *(long *)((undefined *)register0x00000020 + -0xe0) = unaff_R14;
      *(undefined **)((undefined *)register0x00000020 + -0xe8) = param_2;
      *(undefined8 *)((undefined *)register0x00000020 + -0xf0) = 0x102e0a;
      uVar6 = mulredc2(*(undefined8 *)((undefined *)register0x00000020 + -200),puVar19,puVar21,
                       puVar19,puVar21,param_1);
      puVar21 = (undefined1 *)(uVar6 + *(ulong *)((undefined *)register0x00000020 + -0xb0));
      puVar19 = (undefined *)
                (*(long *)((undefined *)register0x00000020 + -0x48) +
                (ulong)CARRY8(uVar6,*(ulong *)((undefined *)register0x00000020 + -0xb0)));
      *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar19;
      if ((param_1 < puVar19) || ((param_1 == puVar19 && (param_2 <= puVar21)))) {
        bVar32 = puVar21 < param_2;
        puVar21 = puVar21 + -(long)param_2;
        puVar19 = puVar19 + (-(ulong)bVar32 - (long)param_1);
        *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar19;
      }
      puVar12 = *(undefined **)((undefined *)register0x00000020 + -0xa8) + -(long)puVar21;
      puVar19 = (undefined *)
                ((*(long *)((undefined *)register0x00000020 + -0x60) - (long)puVar19) -
                (ulong)(*(undefined **)((undefined *)register0x00000020 + -0xa8) < puVar21));
      if ((long)puVar19 < 0) {
        bVar32 = CARRY8((ulong)puVar12,(ulong)param_2);
        puVar12 = puVar12 + (long)param_2;
        puVar19 = param_1 + (long)(puVar19 + bVar32);
      }
      *(long *)((undefined *)register0x00000020 + -0xe0) = unaff_R14;
      *(undefined **)((undefined *)register0x00000020 + -0xe8) = param_2;
      *(undefined8 *)((undefined *)register0x00000020 + -0xf0) = 0x102e7e;
      uVar7 = mulredc2(*(undefined8 *)((undefined *)register0x00000020 + -200),
                       *(undefined8 *)((undefined *)register0x00000020 + -0xc0),
                       *(undefined8 *)((undefined *)register0x00000020 + -0xb8),puVar19,puVar12,
                       param_1);
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = uVar7;
      *(undefined8 *)((undefined *)register0x00000020 + -0xc0) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x48);
      in_R11 = *(undefined **)((undefined *)register0x00000020 + -0xe0);
      if (((uint)unaff_R13 & 0x1f) == 1) {
        *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x102f9a;
        lVar5 = gcd2_odd(*(undefined8 *)((undefined *)register0x00000020 + -0xa0),
                         *(undefined8 *)((undefined *)register0x00000020 + -0xc0),
                         *(undefined8 *)((undefined *)register0x00000020 + -0xb8),param_1,param_2);
        if ((*(long *)((undefined *)register0x00000020 + -0x50) != 0) || (lVar5 != 1))
        goto code_r0x00102fc0;
        puVar19 = *(undefined **)((undefined *)register0x00000020 + -0x68);
        *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar19;
        unaff_R15 = puVar21;
      }
      else {
        puVar19 = *(undefined **)((undefined *)register0x00000020 + -0x68);
      }
      unaff_R13 = unaff_R13 + -1;
      if (unaff_R13 == (undefined *)0x0) {
        *(undefined **)((undefined *)register0x00000020 + -0x60) = puVar19;
        *(long *)((undefined *)register0x00000020 + -0xa8) =
             *(long *)((undefined *)register0x00000020 + -0xd0) * 2;
        puVar12 = puVar21;
        if (*(long *)((undefined *)register0x00000020 + -0xd0) != 0) {
          *(undefined1 **)((undefined *)register0x00000020 + -0x98) = puVar21;
          uVar7 = *(undefined8 *)((undefined *)register0x00000020 + -200);
          uVar6 = *(ulong *)((undefined *)register0x00000020 + -0xb0);
          do {
            *(long *)((undefined *)register0x00000020 + -0xe0) = unaff_R14;
            *(undefined **)((undefined *)register0x00000020 + -0xe8) = param_2;
            *(undefined8 *)((undefined *)register0x00000020 + -0xf0) = 0x102f05;
            uVar8 = mulredc2(uVar7,puVar19,puVar21,puVar19,puVar21,param_1);
            puVar21 = (undefined1 *)(uVar8 + uVar6);
            puVar19 = (undefined *)
                      (*(long *)((undefined *)register0x00000020 + -0x48) +
                      (ulong)CARRY8(uVar8,uVar6));
            *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar19;
            if ((param_1 < puVar19) || ((param_1 == puVar19 && (param_2 <= puVar21)))) {
              bVar32 = puVar21 < param_2;
              puVar21 = puVar21 + -(long)param_2;
              puVar19 = puVar19 + (-(ulong)bVar32 - (long)param_1);
              *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar19;
            }
            unaff_R13 = unaff_R13 + 1;
          } while (*(undefined **)((undefined *)register0x00000020 + -0xd0) != unaff_R13);
          puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x98);
        }
        uVar7 = *(undefined8 *)((undefined *)register0x00000020 + -0xa8);
        unaff_R13 = *(undefined **)((undefined *)register0x00000020 + -0xd0);
        *(undefined **)((undefined *)register0x00000020 + -0xa8) = puVar12;
        *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar19;
        *(undefined8 *)((undefined *)register0x00000020 + -0xd0) = uVar7;
        unaff_R15 = puVar21;
      }
    } while( true );
  }
  goto code_r0x0010313a;
code_r0x00102fc0:
  *(undefined **)((undefined *)register0x00000020 + -0x98) = unaff_R13;
  *(undefined1 **)((undefined *)register0x00000020 + -0x90) = puVar21;
  puVar25 = *(undefined **)((undefined *)register0x00000020 + -0xa8);
  puVar21 = *(undefined1 **)((undefined *)register0x00000020 + -200);
  do {
    *(long *)((undefined *)register0x00000020 + -0xe0) = unaff_R14;
    *(undefined **)((undefined *)register0x00000020 + -0xe8) = param_2;
    *(undefined8 *)((undefined *)register0x00000020 + -0xf0) = 0x10300a;
    param_6 = param_1;
    uVar6 = mulredc2(puVar21,*(undefined8 *)((undefined *)register0x00000020 + -0x58),unaff_R15,
                     *(undefined8 *)((undefined *)register0x00000020 + -0x58),unaff_R15);
    unaff_R15 = (undefined *)(uVar6 + *(ulong *)((undefined *)register0x00000020 + -0xb0));
    puVar19 = (undefined *)
              (*(long *)((undefined *)register0x00000020 + -0x48) +
              (ulong)CARRY8(uVar6,*(ulong *)((undefined *)register0x00000020 + -0xb0)));
    *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar19;
    if ((param_1 < puVar19) || ((param_1 == puVar19 && (param_2 <= unaff_R15)))) {
      bVar32 = unaff_R15 < param_2;
      unaff_R15 = unaff_R15 + -(long)param_2;
      puVar19 = puVar19 + (-(ulong)bVar32 - (long)param_1);
      *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar19;
    }
    puVar12 = puVar25 + -(long)unaff_R15;
    puVar19 = (undefined *)
              ((*(long *)((undefined *)register0x00000020 + -0x60) - (long)puVar19) -
              (ulong)(puVar25 < unaff_R15));
    if ((long)puVar19 < 0) {
      bVar32 = CARRY8((ulong)puVar12,(ulong)param_2);
      puVar12 = puVar12 + (long)param_2;
      puVar19 = param_1 + (long)(puVar19 + bVar32);
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103074;
    puVar12 = (undefined *)
              gcd2_odd(*(undefined8 *)((undefined *)register0x00000020 + -0xa0),puVar19,puVar12,
                       param_1,param_2);
    puVar19 = *(undefined **)((undefined *)register0x00000020 + -0x50);
    if (puVar19 != (undefined *)0x0) {
      unaff_R13 = unaff_R15;
      if ((param_2 == puVar12) && (param_1 == puVar19)) {
        *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x1032d9;
        puVar19 = param_2;
        puVar12 = param_1;
        factor_using_pollard_rho2
                  (param_1,param_2,*(long *)((undefined *)register0x00000020 + -0xb0) + 1,
                   *(undefined8 *)((undefined *)register0x00000020 + -0x88));
        unaff_R15 = puVar25;
        goto code_r0x0010313a;
      }
      puVar21 = binvert_table;
      *(undefined **)((undefined *)register0x00000020 + -0xd0) = puVar12;
      uVar6 = (ulong)(byte)binvert_table[(uint)((ulong)puVar12 >> 1) & 0x7f];
      lVar5 = uVar6 * 2 - uVar6 * uVar6 * (long)puVar12;
      lVar5 = lVar5 * 2 - lVar5 * lVar5 * (long)puVar12;
      param_2 = (undefined *)((long)param_2 * (lVar5 * 2 - lVar5 * lVar5 * (long)puVar12));
      *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x1030e3;
      cVar3 = prime2_p(puVar19,puVar12);
      if (cVar3 == '\0') {
        *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103331;
        factor_using_pollard_rho2
                  (*(undefined8 *)((undefined *)register0x00000020 + -0x50),
                   *(undefined8 *)((undefined *)register0x00000020 + -0xd0),
                   *(long *)((undefined *)register0x00000020 + -0xb0) + 1,
                   *(undefined8 *)((undefined *)register0x00000020 + -0x88));
        unaff_R15 = puVar25;
      }
      else {
        *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103105;
        factor_insert_large(*(undefined8 *)((undefined *)register0x00000020 + -0x88),
                            *(undefined8 *)((undefined *)register0x00000020 + -0x50),
                            *(undefined8 *)((undefined *)register0x00000020 + -0xd0));
        unaff_R15 = puVar25;
      }
      goto code_r0x00103105;
    }
  } while (puVar12 == (undefined *)0x1);
  *(undefined **)((undefined *)register0x00000020 + -0xa8) = puVar25;
  *(undefined1 **)((undefined *)register0x00000020 + -200) = puVar21;
  uVar6 = (ulong)(byte)binvert_table[(uint)((ulong)puVar12 >> 1) & 0x7f];
  puVar21 = *(undefined1 **)((undefined *)register0x00000020 + -0x90);
  unaff_R13 = *(undefined **)((undefined *)register0x00000020 + -0x98);
  lVar5 = uVar6 * 2 - uVar6 * uVar6 * (long)puVar12;
  lVar5 = lVar5 * 2 - lVar5 * lVar5 * (long)puVar12;
  lVar5 = lVar5 * 2 - lVar5 * lVar5 * (long)puVar12;
  param_2 = (undefined *)((long)param_2 * lVar5);
  if (param_1 < puVar12) {
    param_1 = (undefined *)0x0;
  }
  else {
    param_1 = (undefined *)
              ((long)(param_1 + -SUB168(ZEXT816(param_2) * ZEXT816(puVar12) >> 0x40,0)) * lVar5);
  }
  if (puVar12 < (undefined *)0x2) {
code_r0x00103207:
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10321d;
    factor_using_pollard_rho
              (puVar12,*(long *)((undefined *)register0x00000020 + -0xb0) + 1,
               *(undefined8 *)((undefined *)register0x00000020 + -0x88));
  }
  else {
    if ((undefined *)0x17ded78 < puVar12) {
      *(undefined **)((undefined *)register0x00000020 + -0x98) = puVar12;
      *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x1031fa;
      cVar3 = prime_p_part_4(puVar12);
      puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x98);
      if (cVar3 == '\0') goto code_r0x00103207;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x1032b2;
    factor_insert_multiplicity(*(undefined8 *)((undefined *)register0x00000020 + -0x88),puVar12,1);
  }
  if (param_1 != (undefined *)0x0) {
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103231;
    cVar3 = prime2_p(param_1,param_2);
    if (cVar3 != '\0') goto code_r0x001032fe;
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103251;
    puVar21 = (undefined1 *)
              mod2(*(undefined8 *)((undefined *)register0x00000020 + -0x80),
                   *(undefined8 *)((undefined *)register0x00000020 + -0x68),puVar21,param_1,param_2)
    ;
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10326e;
    uVar7 = mod2(*(undefined8 *)((undefined *)register0x00000020 + -0x78),
                 *(undefined8 *)((undefined *)register0x00000020 + -0x60),
                 *(undefined8 *)((undefined *)register0x00000020 + -0xa8),param_1,param_2);
    *(undefined8 *)((undefined *)register0x00000020 + -0xa8) = uVar7;
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10328e;
    unaff_R15 = (undefined *)
                mod2(*(undefined8 *)((undefined *)register0x00000020 + -0x70),
                     *(undefined8 *)((undefined *)register0x00000020 + -0x58),unaff_R15,param_1,
                     param_2);
    puVar19 = *(undefined **)((undefined *)register0x00000020 + -0x68);
    goto code_r0x00102da0;
  }
code_r0x00103105:
  if ((undefined *)0x1 < param_2) {
    if ((undefined *)0x17ded78 < param_2) {
      *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x103120;
      cVar3 = prime_p_part_4(param_2);
      if (cVar3 == '\0') goto code_r0x001032e7;
    }
    puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x88);
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10313a;
    puVar19 = param_2;
    factor_insert_multiplicity(puVar12,param_2,1);
    goto code_r0x0010313a;
  }
code_r0x001032e7:
  puVar19 = *(undefined **)((undefined *)register0x00000020 + -0xb0);
  *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x1032f9;
  puVar12 = param_2;
  factor_using_pollard_rho(param_2,puVar19,*(undefined8 *)((undefined *)register0x00000020 + -0x88))
  ;
  goto code_r0x0010313a;
code_r0x001032fe:
  puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x88);
  *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10330e;
  puVar19 = param_1;
  factor_insert_large(puVar12,param_1,param_2);
code_r0x0010313a:
  if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)0x0;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x10333b;
  auVar33 = func_0x001016f0();
  param_4 = SUB168(auVar33 >> 0x40,0);
  *(undefined **)((undefined *)register0x00000020 + -0xe0) = unaff_R15;
  *(long *)((undefined *)register0x00000020 + -0xe8) = unaff_R14;
  *(undefined **)((undefined *)register0x00000020 + -0xf0) = unaff_R13;
  *(undefined **)((undefined *)register0x00000020 + -0xf8) = param_2;
  *(undefined **)((undefined *)register0x00000020 + -0x100) = param_1;
  *(undefined1 **)((undefined *)register0x00000020 + -0x108) = puVar21;
  *(undefined *)((long)param_4 + 0xfa) = 0;
  param_4[1] = 0;
  if ((puVar12 == (undefined *)0x0) && (puVar19 < (undefined *)0x2)) {
    return (undefined *)SUB168(auVar33,0);
  }
  if (((ulong)puVar19 & 1) == 0) {
    if (puVar19 != (undefined *)0x0) {
      lVar5 = 0;
      bVar9 = 0;
      if (puVar19 != (undefined *)0x0) {
        while (bVar9 = (byte)lVar5, ((ulong)puVar19 >> lVar5 & 1) == 0) {
          lVar5 = lVar5 + 1;
        }
      }
      *(ulong *)((undefined *)register0x00000020 + -0x138) = (ulong)puVar12 >> (bVar9 & 0x3f);
      puVar19 = (undefined *)
                ((ulong)puVar19 >> (bVar9 & 0x3f) | (long)puVar12 << (0x40 - bVar9 & 0x3f));
      *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x103a1e;
      factor_insert_multiplicity(param_4,2);
      puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x138);
      goto code_r0x00103389;
    }
    lVar5 = 0;
    iVar22 = 0;
    if (puVar12 != (undefined *)0x0) {
      while (iVar22 = (int)lVar5, ((ulong)puVar12 >> lVar5 & 1) == 0) {
        lVar5 = lVar5 + 1;
      }
    }
    puVar19 = (undefined *)((ulong)puVar12 >> ((byte)iVar22 & 0x3f));
    *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x103973;
    factor_insert_multiplicity(param_4,2,(ulong)(iVar22 + 0x40));
    puVar12 = (undefined *)0x0;
  }
  else {
code_r0x00103389:
    if (puVar12 != (undefined *)0x0) {
      param_6 = (undefined *)0xaaaaaaaaaaaaaaab;
      uVar27 = 2;
      uVar8 = 3;
      puVar13 = (undefined8 *)(primes_dtab + 8);
      uVar6 = 1;
      do {
        puVar11 = (undefined *)((long)param_6 * (long)puVar19);
        puVar20 = SUB168(ZEXT816(puVar11) * ZEXT816(uVar8) >> 0x40,0);
        puVar25 = puVar11;
        if (puVar20 <= puVar12) {
          in_R11 = (undefined *)*puVar13;
          puVar20 = (undefined *)((long)(puVar12 + -(long)puVar20) * (long)param_6);
          if (puVar20 < in_R11 || puVar20 + -(long)in_R11 == (undefined *)0x0) {
            do {
              puVar12 = puVar20;
              *(undefined **)((undefined *)register0x00000020 + -0x120) = in_R11;
              *(undefined **)((undefined *)register0x00000020 + -0x128) = puVar11;
              *(undefined8 **)((undefined *)register0x00000020 + -0x130) = puVar13;
              *(undefined **)((undefined *)register0x00000020 + -0x138) = param_6;
              *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x10343a;
              factor_insert_multiplicity(param_4,uVar8,1);
              param_6 = *(undefined **)((undefined *)register0x00000020 + -0x138);
              puVar19 = *(undefined **)((undefined *)register0x00000020 + -0x128);
              puVar13 = *(undefined8 **)((undefined *)register0x00000020 + -0x130);
              in_R11 = *(undefined **)((undefined *)register0x00000020 + -0x120);
              puVar11 = (undefined *)((long)param_6 * (long)puVar19);
              puVar20 = SUB168(ZEXT816(puVar11) * ZEXT816(uVar8) >> 0x40,0);
              puVar25 = puVar19;
              if (puVar12 < puVar20) break;
              puVar20 = (undefined *)((long)(puVar12 + -(long)puVar20) * (long)param_6);
            } while (puVar20 < in_R11 || puVar20 + -(long)in_R11 == (undefined *)0x0);
          }
        }
        uVar18 = uVar6 & 0xffffffff;
        uVar8 = uVar8 + uVar27;
        if ((puVar12 == (undefined *)0x0) || (0x29b < (uint)uVar18)) goto code_r0x00103480;
        param_6 = (undefined *)puVar13[1];
        uVar27 = (ulong)(byte)primes_diff[uVar6 + 1];
        puVar13 = puVar13 + 2;
        uVar6 = uVar6 + 1;
      } while( true );
    }
  }
  uVar6 = 0x1a;
  in_R11 = (undefined *)0x5555555555555555;
  puVar25 = (undefined *)0xaaaaaaaaaaaaaaab;
  uVar8 = 3;
  *(undefined8 *)((undefined *)register0x00000020 + -0x138) = 0x10b9a0;
  uVar18 = 0;
code_r0x00103588:
  do {
    puVar20 = (undefined *)((long)puVar19 * (long)puVar25);
    lVar5 = *(long *)((undefined *)register0x00000020 + -0x138) + uVar18 * 0x10;
    if (puVar20 < in_R11 || puVar20 + -(long)in_R11 == (undefined *)0x0) {
      do {
        puVar19 = puVar20;
        *(undefined **)((undefined *)register0x00000020 + -0x118) = puVar12;
        *(undefined **)((undefined *)register0x00000020 + -0x120) = in_R11;
        *(undefined **)((undefined *)register0x00000020 + -0x128) = puVar25;
        *(int *)((undefined *)register0x00000020 + -0x130) = (int)uVar18;
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x1035cb;
        factor_insert_multiplicity(param_4,uVar8,1);
        puVar25 = *(undefined **)((undefined *)register0x00000020 + -0x128);
        in_R11 = *(undefined **)((undefined *)register0x00000020 + -0x120);
        uVar18 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x130);
        puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x118);
        puVar20 = (undefined *)((long)puVar19 * (long)puVar25);
      } while (puVar20 < in_R11 || puVar20 + -(long)in_R11 == (undefined *)0x0);
      puVar20 = (undefined *)(*(long *)(lVar5 + 0x10) * (long)puVar19);
      if (puVar20 < *(undefined **)(long *)(lVar5 + 0x18) ||
          puVar20 + -*(long *)(lVar5 + 0x18) == (undefined *)0x0) goto code_r0x00103600;
code_r0x001034da:
      puVar20 = (undefined *)(*(long *)(lVar5 + 0x20) * (long)puVar19);
      if (*(undefined **)(long *)(lVar5 + 0x28) <= puVar20 &&
          puVar20 + -*(long *)(lVar5 + 0x28) != (undefined *)0x0) goto code_r0x001034ec;
code_r0x00103660:
      *(ulong *)((undefined *)register0x00000020 + -0x120) =
           (ulong)(byte)primes_diff[(int)uVar18 + 1] + (ulong)(byte)primes_diff[(int)uVar18 + 2] +
           uVar8;
      do {
        puVar19 = puVar20;
        *(undefined **)((undefined *)register0x00000020 + -0x128) = puVar12;
        *(int *)((undefined *)register0x00000020 + -0x130) = (int)uVar18;
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x10369a;
        factor_insert_multiplicity
                  (param_4,*(undefined8 *)((undefined *)register0x00000020 + -0x120),1);
        uVar18 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x130);
        puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x128);
        puVar20 = (undefined *)(*(long *)(lVar5 + 0x20) * (long)puVar19);
      } while (puVar20 < *(undefined **)(long *)(lVar5 + 0x28) ||
               puVar20 + -*(long *)(lVar5 + 0x28) == (undefined *)0x0);
      puVar20 = (undefined *)(*(long *)(lVar5 + 0x30) * (long)puVar19);
      if (puVar20 <= *(undefined **)(lVar5 + 0x38)) goto code_r0x001036c8;
code_r0x001034fe:
      puVar20 = (undefined *)(*(long *)(lVar5 + 0x40) * (long)puVar19);
      if (puVar20 <= *(undefined **)(lVar5 + 0x48)) goto code_r0x00103740;
    }
    else {
      puVar20 = (undefined *)(*(long *)(lVar5 + 0x10) * (long)puVar19);
      if (*(undefined **)(long *)(lVar5 + 0x18) <= puVar20 &&
          puVar20 + -*(long *)(lVar5 + 0x18) != (undefined *)0x0) goto code_r0x001034da;
code_r0x00103600:
      *(ulong *)((undefined *)register0x00000020 + -0x120) =
           (byte)primes_diff[(int)uVar18 + 1] + uVar8;
      do {
        puVar19 = puVar20;
        *(undefined **)((undefined *)register0x00000020 + -0x128) = puVar12;
        *(int *)((undefined *)register0x00000020 + -0x130) = (int)uVar18;
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x10362f;
        factor_insert_multiplicity
                  (param_4,*(undefined8 *)((undefined *)register0x00000020 + -0x120),1);
        uVar18 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x130);
        puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x128);
        puVar20 = (undefined *)(*(long *)(lVar5 + 0x10) * (long)puVar19);
      } while (puVar20 < *(undefined **)(long *)(lVar5 + 0x18) ||
               puVar20 + -*(long *)(lVar5 + 0x18) == (undefined *)0x0);
      puVar20 = (undefined *)(*(long *)(lVar5 + 0x20) * (long)puVar19);
      if (puVar20 < *(undefined **)(long *)(lVar5 + 0x28) ||
          puVar20 + -*(long *)(lVar5 + 0x28) == (undefined *)0x0) goto code_r0x00103660;
code_r0x001034ec:
      puVar20 = (undefined *)(*(long *)(lVar5 + 0x30) * (long)puVar19);
      if (*(undefined **)(lVar5 + 0x38) < puVar20) goto code_r0x001034fe;
code_r0x001036c8:
      iVar22 = (int)uVar18;
      *(ulong *)((undefined *)register0x00000020 + -0x120) =
           (ulong)(byte)primes_diff[iVar22 + 1] + (ulong)(byte)primes_diff[iVar22 + 3] + uVar8 +
           (ulong)(byte)primes_diff[iVar22 + 2];
      do {
        puVar19 = puVar20;
        *(undefined **)((undefined *)register0x00000020 + -0x128) = puVar12;
        *(int *)((undefined *)register0x00000020 + -0x130) = (int)uVar18;
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x10370d;
        factor_insert_multiplicity
                  (param_4,*(undefined8 *)((undefined *)register0x00000020 + -0x120),1);
        uVar18 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x130);
        puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x128);
        puVar20 = (undefined *)(*(long *)(lVar5 + 0x30) * (long)puVar19);
      } while (puVar20 < *(undefined **)(long *)(lVar5 + 0x38) ||
               puVar20 + -*(long *)(lVar5 + 0x38) == (undefined *)0x0);
      puVar20 = (undefined *)(*(long *)(lVar5 + 0x40) * (long)puVar19);
      if (puVar20 <= *(undefined **)(lVar5 + 0x48)) {
code_r0x00103740:
        puVar25 = (undefined *)(ulong)((int)uVar18 + 5);
        *(int *)((undefined *)register0x00000020 + -0x130) = (int)uVar18 + 1;
        do {
          puVar19 = puVar20;
          uVar15 = *(uint *)((undefined *)register0x00000020 + -0x130);
          uVar27 = uVar8;
          do {
            uVar17 = (ulong)uVar15;
            uVar15 = uVar15 + 1;
            uVar27 = uVar27 + (byte)primes_diff[uVar17];
          } while ((uint)puVar25 != uVar15);
          *(uint *)((undefined *)register0x00000020 + -0x118) = (uint)puVar25;
          *(undefined **)((undefined *)register0x00000020 + -0x120) = puVar12;
          *(int *)((undefined *)register0x00000020 + -0x128) = (int)uVar18;
          *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x103782;
          factor_insert_multiplicity(param_4,uVar27,1);
          uVar18 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x128);
          puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x120);
          puVar25 = (undefined *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x118);
          puVar20 = (undefined *)(*(long *)(lVar5 + 0x40) * (long)puVar19);
        } while (puVar20 < *(undefined **)(long *)(lVar5 + 0x48) ||
                 puVar20 + -*(long *)(lVar5 + 0x48) == (undefined *)0x0);
      }
    }
    puVar20 = (undefined *)(*(long *)(lVar5 + 0x50) * (long)puVar19);
    if (puVar20 < *(undefined **)(long *)(lVar5 + 0x58) ||
        puVar20 + -*(long *)(lVar5 + 0x58) == (undefined *)0x0) {
      puVar25 = (undefined *)(ulong)((int)uVar18 + 6);
      *(int *)((undefined *)register0x00000020 + -0x130) = (int)uVar18 + 1;
      do {
        puVar19 = puVar20;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x130);
        uVar27 = uVar8;
        do {
          uVar17 = (ulong)uVar15;
          uVar15 = uVar15 + 1;
          uVar27 = uVar27 + (byte)primes_diff[uVar17];
        } while ((uint)puVar25 != uVar15);
        *(uint *)((undefined *)register0x00000020 + -0x118) = (uint)puVar25;
        *(undefined **)((undefined *)register0x00000020 + -0x120) = puVar12;
        *(int *)((undefined *)register0x00000020 + -0x128) = (int)uVar18;
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x103922;
        factor_insert_multiplicity(param_4,uVar27,1);
        uVar18 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x128);
        puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x120);
        puVar25 = (undefined *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x118);
        puVar20 = (undefined *)(*(long *)(lVar5 + 0x50) * (long)puVar19);
      } while (puVar20 < *(undefined **)(long *)(lVar5 + 0x58) ||
               puVar20 + -*(long *)(lVar5 + 0x58) == (undefined *)0x0);
    }
    puVar20 = (undefined *)(*(long *)(lVar5 + 0x60) * (long)puVar19);
    if (puVar20 <= *(undefined **)(lVar5 + 0x68)) {
      puVar25 = (undefined *)(ulong)((int)uVar18 + 7);
      *(int *)((undefined *)register0x00000020 + -0x130) = (int)uVar18 + 1;
      do {
        puVar19 = puVar20;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x130);
        uVar27 = uVar8;
        do {
          uVar17 = (ulong)uVar15;
          uVar15 = uVar15 + 1;
          uVar27 = uVar27 + (byte)primes_diff[uVar17];
        } while ((uint)puVar25 != uVar15);
        *(uint *)((undefined *)register0x00000020 + -0x118) = (uint)puVar25;
        *(undefined **)((undefined *)register0x00000020 + -0x120) = puVar12;
        *(int *)((undefined *)register0x00000020 + -0x128) = (int)uVar18;
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x1038b5;
        factor_insert_multiplicity(param_4,uVar27,1);
        uVar18 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x128);
        puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x120);
        puVar25 = (undefined *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x118);
        puVar20 = (undefined *)(*(long *)(lVar5 + 0x60) * (long)puVar19);
      } while (puVar20 < *(undefined **)(long *)(lVar5 + 0x68) ||
               puVar20 + -*(long *)(lVar5 + 0x68) == (undefined *)0x0);
    }
    puVar20 = (undefined *)(*(long *)(lVar5 + 0x70) * (long)puVar19);
    if (puVar20 < *(undefined **)(long *)(lVar5 + 0x78) ||
        puVar20 + -*(long *)(lVar5 + 0x78) == (undefined *)0x0) {
      puVar25 = (undefined *)(ulong)((int)uVar18 + 8);
      *(int *)((undefined *)register0x00000020 + -0x130) = (int)uVar18 + 1;
      do {
        puVar19 = puVar20;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x130);
        uVar27 = uVar8;
        do {
          uVar17 = (ulong)uVar15;
          uVar15 = uVar15 + 1;
          uVar27 = uVar27 + (byte)primes_diff[uVar17];
        } while ((uint)puVar25 != uVar15);
        *(uint *)((undefined *)register0x00000020 + -0x118) = (uint)puVar25;
        *(undefined **)((undefined *)register0x00000020 + -0x120) = puVar12;
        *(int *)((undefined *)register0x00000020 + -0x128) = (int)uVar18;
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x103845;
        factor_insert_multiplicity(param_4,uVar27,1);
        uVar18 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x128);
        puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x120);
        puVar25 = (undefined *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x118);
        puVar20 = (undefined *)(*(long *)(lVar5 + 0x70) * (long)puVar19);
      } while (puVar20 < *(undefined **)(long *)(lVar5 + 0x78) ||
               puVar20 + -*(long *)(lVar5 + 0x78) == (undefined *)0x0);
    }
    uVar8 = uVar8 + uVar6;
    if (puVar19 < (undefined *)(uVar8 * uVar8)) goto code_r0x001037b0;
    uVar15 = (int)uVar18 + 8;
    uVar18 = (ulong)uVar15;
    if (0x29b < uVar15) goto code_r0x001037b0;
    uVar18 = (ulong)uVar15;
    uVar6 = (ulong)(byte)primes_diff8[uVar18];
    puVar25 = *(undefined **)
               (undefined8 *)(uVar18 * 0x10 + *(long *)((undefined *)register0x00000020 + -0x138));
    in_R11 = (undefined *)
             ((undefined8 *)(uVar18 * 0x10 + *(long *)((undefined *)register0x00000020 + -0x138)))
             [1];
  } while( true );
code_r0x00103480:
  if (0x29b < (uint)uVar18) {
code_r0x001037b0:
    if (puVar12 != (undefined *)0x0) {
      *(undefined **)((undefined *)register0x00000020 + -0x138) = puVar12;
      *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x1039c0;
      cVar3 = prime2_p(puVar12,puVar19);
      param_1 = *(undefined **)((undefined *)register0x00000020 + -0x138);
      if (cVar3 != '\0') goto code_r0x00103a30;
      unaff_RBX = *(undefined8 *)((undefined *)register0x00000020 + -0x108);
      unaff_RBP = *(undefined8 *)((undefined *)register0x00000020 + -0x100);
      unaff_R12 = *(undefined8 *)((undefined *)register0x00000020 + -0xf8);
      unaff_R13 = *(undefined **)((undefined *)register0x00000020 + -0xf0);
      unaff_R14 = *(long *)((undefined *)register0x00000020 + -0xe8);
      unaff_R15 = *(undefined **)((undefined *)register0x00000020 + -0xe0);
      param_3 = 1;
      register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0xd8);
      param_2 = puVar19;
      goto code_r0x00102c60;
    }
    if (puVar19 < (undefined *)0x2) {
      return (undefined *)uVar18;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x138) = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x1037d2;
    cVar3 = prime2_p(0,puVar19);
    param_1 = *(undefined **)((undefined *)register0x00000020 + -0x138);
    if (cVar3 == '\0') {
      *(undefined8 *)((undefined *)register0x00000020 + -0xe0) =
           *(undefined8 *)((undefined *)register0x00000020 + -0xe0);
      *(undefined8 *)((undefined *)register0x00000020 + -0xe8) =
           *(undefined8 *)((undefined *)register0x00000020 + -0xe8);
      *(undefined8 *)((undefined *)register0x00000020 + -0xf0) =
           *(undefined8 *)((undefined *)register0x00000020 + -0xf0);
      *(undefined8 *)((undefined *)register0x00000020 + -0xf8) =
           *(undefined8 *)((undefined *)register0x00000020 + -0xf8);
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x100);
      *(undefined8 *)((undefined *)register0x00000020 + -0x108) =
           *(undefined8 *)((undefined *)register0x00000020 + -0x108);
      *(undefined8 **)((undefined *)register0x00000020 + -0x138) = param_4;
      if (puVar19 < (undefined *)0x2) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x102c50;
        uVar7 = func_0x00101750(&UNK_0010b464,&UNK_0010b424,0x5c2,__PRETTY_FUNCTION___7311);
        return (undefined *)uVar7;
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x120) = 2;
      puVar12 = puVar19;
code_r0x00102879:
      iVar22 = 0x40;
      puVar20 = (undefined *)0x0;
      puVar16 = (undefined *)0x1;
      *(long *)((undefined *)register0x00000020 + -0x140) =
           *(long *)((undefined *)register0x00000020 + -0x120) + -1;
      puVar11 = (undefined *)0x0;
      puVar19 = puVar12;
      do {
        puVar30 = (undefined *)((ulong)puVar19 >> 1);
        puVar11 = (undefined *)((ulong)puVar11 >> 1 | (long)puVar19 << 0x3f);
        if ((puVar30 < puVar16) || ((puVar30 == puVar16 && (puVar11 <= puVar20)))) {
          bVar32 = puVar20 < puVar11;
          puVar20 = puVar20 + -(long)puVar11;
          puVar16 = puVar16 + (-(ulong)bVar32 - (long)puVar30);
        }
        iVar22 = iVar22 + -1;
        puVar19 = puVar30;
      } while (iVar22 != 0);
      uVar8 = ((long)puVar20 * 2 - (long)puVar12) +
              (-(ulong)(puVar20 < puVar12 + -(long)puVar20) & (ulong)puVar12);
      uVar6 = uVar8;
      if (puVar12 < *(undefined **)((undefined *)register0x00000020 + -0x140) ||
          puVar12 == *(undefined **)((undefined *)register0x00000020 + -0x140))
      goto code_r0x00102b8b;
      puVar11 = (undefined *)0x1;
      puVar16 = (undefined *)0x1;
      uVar27 = uVar8;
      uVar18 = uVar8;
code_r0x00102904:
      uVar6 = (ulong)(byte)binvert_table[(uint)((ulong)puVar12 >> 1) & 0x7f];
      lVar5 = uVar6 * 2 - uVar6 * uVar6 * (long)puVar12;
      lVar5 = lVar5 * 2 - lVar5 * lVar5 * (long)puVar12;
      param_1 = (undefined *)(lVar5 * 2 - lVar5 * lVar5 * (long)puVar12);
      puVar25 = puVar12 + -*(long *)((undefined *)register0x00000020 + -0x140);
      param_6 = (undefined *)(*(long *)((undefined *)register0x00000020 + -0x140) - (long)puVar12);
      uVar6 = uVar8;
      do {
        while( true ) {
          uVar8 = SUB168(ZEXT816(uVar27) * ZEXT816(uVar27) >> 0x40,0);
          uVar27 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar27) * ZEXT816(uVar27),0) *
                                         (long)param_1)) * ZEXT816(puVar12) >> 0x40,0);
          puVar19 = (undefined *)(uVar8 - uVar27);
          if (uVar8 < uVar27) {
            puVar19 = puVar19 + (long)puVar12;
          }
          uVar27 = (-(ulong)(puVar19 < puVar25) & (ulong)puVar12) + (long)puVar19 + (long)param_6;
          auVar33 = ZEXT816(puVar20) *
                    ZEXT816((-(ulong)(uVar18 < uVar27) & (ulong)puVar12) + (uVar18 - uVar27));
          uVar8 = SUB168(auVar33 >> 0x40,0);
          uVar17 = SUB168(ZEXT816((ulong)(SUB168(auVar33,0) * (long)param_1)) * ZEXT816(puVar12) >>
                          0x40,0);
          puVar20 = (undefined *)(uVar8 - uVar17);
          if (uVar8 < uVar17) {
            puVar20 = puVar20 + (long)puVar12;
          }
          uVar8 = uVar6;
          puVar19 = puVar11;
          if (((uint)puVar16 & 0x1f) == 1) break;
code_r0x001029cf:
          puVar30 = puVar16 + -1;
          uVar6 = uVar8;
          puVar11 = puVar19;
          puVar16 = puVar30;
          if ((puVar30 == (undefined *)0x0) &&
             (puVar11 = (undefined *)((long)puVar19 * 2), uVar6 = uVar27, puVar16 = puVar19,
             uVar18 = uVar27, puVar19 != (undefined *)0x0)) {
            do {
              uVar8 = SUB168(ZEXT816(uVar6) * ZEXT816(uVar6) >> 0x40,0);
              uVar6 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar6) * ZEXT816(uVar6),0) *
                                            (long)param_1)) * ZEXT816(puVar12) >> 0x40,0);
              puVar16 = (undefined *)(uVar8 - uVar6);
              if (uVar8 < uVar6) {
                puVar16 = puVar16 + (long)puVar12;
              }
              puVar30 = puVar30 + 1;
              uVar6 = (-(ulong)(puVar16 < puVar25) & (ulong)puVar12) + (long)puVar16 + (long)param_6
              ;
              uVar27 = uVar6;
              puVar16 = puVar30;
            } while (puVar19 != puVar30);
          }
        }
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x102a3b;
        lVar5 = gcd_odd(puVar20,puVar12);
        uVar8 = uVar27;
        puVar19 = puVar11;
        if (lVar5 == 1) goto code_r0x001029cf;
        do {
          uVar8 = SUB168(ZEXT816(uVar6) * ZEXT816(uVar6) >> 0x40,0);
          uVar6 = SUB168(ZEXT816((ulong)(SUB168(ZEXT816(uVar6) * ZEXT816(uVar6),0) * (long)param_1))
                         * ZEXT816(puVar12) >> 0x40,0);
          puVar19 = (undefined *)(uVar8 - uVar6);
          if (uVar8 < uVar6) {
            puVar19 = puVar19 + (long)puVar12;
          }
          uVar6 = (-(ulong)(puVar19 < puVar25) & (ulong)puVar12) + (long)puVar19 + (long)param_6;
          *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x102a9b;
          in_R11 = (undefined *)
                   gcd_odd((-(ulong)(uVar18 < uVar6) & (ulong)puVar12) + (uVar18 - uVar6),puVar12);
        } while (in_R11 == (undefined *)0x1);
        if (puVar12 == in_R11) {
          *(long *)((undefined *)register0x00000020 + -0x120) =
               *(long *)((undefined *)register0x00000020 + -0x120) + 1;
          goto code_r0x00102879;
        }
        puVar12 = (undefined *)((ulong)puVar12 / (ulong)in_R11);
        puVar19 = puVar12;
        if ((undefined *)0x1 < in_R11) {
          if ((undefined *)0x17ded78 < in_R11) {
            *(undefined **)((undefined *)register0x00000020 + -0x128) = puVar11;
            *(undefined **)((undefined *)register0x00000020 + -0x130) = in_R11;
            *(undefined **)((undefined *)register0x00000020 + -0x118) = puVar12;
            *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x102ae8;
            cVar3 = prime_p_part_4(in_R11);
            in_R11 = *(undefined **)((undefined *)register0x00000020 + -0x130);
            puVar11 = *(undefined **)((undefined *)register0x00000020 + -0x128);
            puVar19 = *(undefined **)((undefined *)register0x00000020 + -0x118);
            if (cVar3 == '\0') goto code_r0x00102aff;
          }
          *(undefined **)((undefined *)register0x00000020 + -0x128) = puVar19;
          *(undefined **)((undefined *)register0x00000020 + -0x130) = puVar11;
          *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x102be4;
          puVar19 = (undefined *)
                    factor_insert_multiplicity
                              (*(undefined8 *)((undefined *)register0x00000020 + -0x138),in_R11,1);
          param_1 = *(undefined **)((undefined *)register0x00000020 + -0x128);
          puVar11 = *(undefined **)((undefined *)register0x00000020 + -0x130);
          if (param_1 < (undefined *)0x2) goto code_r0x00102bf8;
code_r0x00102b2f:
          if ((undefined *)0x17ded78 < param_1) {
            *(undefined **)((undefined *)register0x00000020 + -0x128) = puVar11;
            *(undefined **)((undefined *)register0x00000020 + -0x130) = param_1;
            *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x102b4e;
            puVar19 = (undefined *)prime_p_part_4(param_1);
            param_1 = *(undefined **)((undefined *)register0x00000020 + -0x130);
            puVar11 = *(undefined **)((undefined *)register0x00000020 + -0x128);
            if ((char)puVar19 == '\0') {
              uVar27 = uVar27 % (ulong)param_1;
              uVar18 = uVar18 % (ulong)param_1;
              uVar8 = uVar6 % (ulong)param_1;
              goto code_r0x00102b81;
            }
          }
          param_4 = *(undefined8 **)((undefined *)register0x00000020 + -0x138);
          uVar7 = *(undefined8 *)((undefined *)register0x00000020 + -0x108);
          puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x100);
          uVar26 = *(undefined8 *)((undefined *)register0x00000020 + -0xf8);
          uVar28 = *(undefined8 *)((undefined *)register0x00000020 + -0xf0);
          uVar31 = *(undefined8 *)((undefined *)register0x00000020 + -0xe8);
          puVar25 = param_1;
          goto code_r0x00101d70;
        }
code_r0x00102aff:
        *(undefined **)((undefined *)register0x00000020 + -0x128) = puVar19;
        *(undefined **)((undefined *)register0x00000020 + -0x130) = puVar11;
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x102b1b;
        puVar19 = (undefined *)
                  factor_using_pollard_rho
                            (in_R11,*(undefined8 *)((undefined *)register0x00000020 + -0x120),
                             *(undefined8 *)((undefined *)register0x00000020 + -0x138));
        param_1 = *(undefined **)((undefined *)register0x00000020 + -0x128);
        puVar11 = *(undefined **)((undefined *)register0x00000020 + -0x130);
        if ((undefined *)0x1 < param_1) goto code_r0x00102b2f;
code_r0x00102bf8:
        if (param_1 == (undefined *)0x1) {
          return puVar19;
        }
        uVar8 = 0;
        uVar18 = 0;
        uVar27 = 0;
code_r0x00102b81:
        uVar6 = uVar27;
        if (*(undefined **)((undefined *)register0x00000020 + -0x140) <= param_1 &&
            param_1 != *(undefined **)((undefined *)register0x00000020 + -0x140))
        goto code_r0x00102904;
code_r0x00102b8b:
        puVar11 = &UNK_0010b424;
        *(undefined8 *)((undefined *)register0x00000020 + -0x148) = 0x102baa;
        func_0x00101750(&UNK_0010b46e,&UNK_0010b424,0x5c8,__PRETTY_FUNCTION___7311);
        uVar27 = uVar6;
        puVar16 = in_R11;
        uVar18 = uVar6;
      } while( true );
    }
code_r0x00103a30:
    uVar7 = *(undefined8 *)((undefined *)register0x00000020 + -0x108);
    uVar26 = *(undefined8 *)((undefined *)register0x00000020 + -0xf8);
    uVar28 = *(undefined8 *)((undefined *)register0x00000020 + -0xf0);
    uVar31 = *(undefined8 *)((undefined *)register0x00000020 + -0xe8);
    puVar10 = (undefined *)register0x00000020 + -0xd8;
    puVar12 = *(undefined **)((undefined *)register0x00000020 + -0x100);
    puVar20 = param_1;
    while (puVar25 = puVar19, param_1 != (undefined *)0x0) {
      if (param_4[1] == 0) {
        *(undefined **)param_4 = puVar19;
        *(undefined **)(param_4 + 1) = param_1;
        return puVar19;
      }
      puVar21 = __PRETTY_FUNCTION___7027;
      puVar19 = &UNK_0010b424;
      puVar13 = (undefined8 *)&UNK_0010b43d;
      *(undefined8 *)(puVar10 + -0x10) = 0x102500;
      func_0x00101750(&UNK_0010b43d,&UNK_0010b424,0x235);
      if (((ulong)puVar20 & 1) != 0) {
        puVar12 = extraout_RDX_00;
        if (((ulong)extraout_RDX_00 | (ulong)puVar19) == 0) {
          *(undefined1 **)puVar13 = puVar21;
          return puVar20;
        }
        while (((ulong)puVar12 & 1) == 0) {
          puVar12 = (undefined *)((ulong)puVar12 >> 1 | (long)puVar19 << 0x3f);
          puVar19 = (undefined *)((ulong)puVar19 >> 1);
        }
        while (((ulong)puVar19 | (ulong)puVar21) != 0) {
          while ((puVar19 <= puVar21 && ((puVar12 <= puVar20 || (puVar19 != puVar21))))) {
            if ((puVar21 <= puVar19) && ((puVar20 <= puVar12 || (puVar19 != puVar21)))) {
              *(undefined **)puVar13 = puVar19;
              return puVar12;
            }
            bVar32 = puVar20 < puVar12;
            puVar20 = puVar20 + -(long)puVar12;
            puVar10 = puVar21 + (-(ulong)bVar32 - (long)puVar19);
            do {
              uVar6 = (ulong)puVar20 >> 1;
              puVar21 = (undefined1 *)((ulong)puVar10 >> 1);
              puVar20 = (undefined *)(uVar6 | (long)puVar10 << 0x3f);
              puVar10 = puVar21;
            } while ((uVar6 & 1) == 0);
            if (((ulong)puVar19 | (ulong)puVar21) == 0) goto code_r0x00102586;
          }
          bVar32 = puVar12 < puVar20;
          puVar12 = puVar12 + -(long)puVar20;
          puVar10 = puVar19 + (-(ulong)bVar32 - (long)puVar21);
          do {
            uVar6 = (ulong)puVar12 >> 1;
            puVar19 = (undefined *)((ulong)puVar10 >> 1);
            puVar12 = (undefined *)(uVar6 | (long)puVar10 << 0x3f);
            puVar10 = puVar19;
          } while ((uVar6 & 1) == 0);
        }
code_r0x00102586:
        *puVar13 = 0;
        puVar19 = puVar12;
        if (((ulong)puVar12 & 1) != 0) {
          puVar19 = puVar20;
          puVar20 = puVar12;
        }
        uVar6 = (ulong)puVar20 >> 1;
        if (puVar19 == (undefined *)0x0) {
          return puVar20;
        }
        while( true ) {
          do {
            puVar12 = puVar19;
            puVar19 = (undefined *)((ulong)puVar12 >> 1);
          } while (((ulong)puVar12 & 1) == 0);
          puVar19 = (undefined *)((ulong)puVar12 >> 1) + -uVar6;
          if (puVar19 == (undefined *)0x0) break;
          uVar8 = (long)puVar19 >> 0x3f;
          uVar6 = uVar6 + ((ulong)puVar19 & uVar8);
          puVar19 = (undefined *)(((ulong)puVar19 ^ uVar8) - uVar8);
        }
        return (undefined *)((ulong)puVar12 | 1);
      }
      puVar21 = __PRETTY_FUNCTION___6996;
      puVar19 = &UNK_0010b424;
      puVar13 = (undefined8 *)&UNK_0010b455;
      *(undefined8 *)(puVar10 + -0x18) = 0x102601;
      func_0x00101750(&UNK_0010b455,&UNK_0010b424,0x1e3);
      if (puVar21 != (undefined1 *)0x0) {
        if (puVar19 != (undefined *)0x0) {
          lVar5 = 0x3f;
          uVar15 = 0x3f;
          if (puVar21 != (undefined1 *)0x0) {
            while (uVar15 = (uint)lVar5, (ulong)puVar21 >> lVar5 == 0) {
              lVar5 = lVar5 + -1;
            }
          }
          lVar5 = 0x3f;
          uVar24 = 0x3f;
          if (puVar19 != (undefined *)0x0) {
            while (uVar24 = (uint)lVar5, (ulong)puVar19 >> lVar5 == 0) {
              lVar5 = lVar5 + -1;
            }
          }
          iVar22 = (uVar15 ^ 0x3f) - (uVar24 ^ 0x3f);
          bVar9 = (byte)iVar22;
          puVar12 = (undefined *)
                    ((ulong)puVar20 >> (0x40 - bVar9 & 0x3f) | (long)puVar21 << (bVar9 & 0x3f));
          uVar8 = (long)puVar20 << (bVar9 & 0x3f);
          uVar6 = extraout_RDX_01;
          if (0 < iVar22) {
            iVar14 = 0;
            do {
              if ((puVar12 < puVar19) || ((puVar12 == puVar19 && (uVar8 <= uVar6)))) {
                bVar32 = uVar6 < uVar8;
                uVar6 = uVar6 - uVar8;
                puVar19 = puVar19 + (-(ulong)bVar32 - (long)puVar12);
              }
              iVar14 = iVar14 + 1;
              uVar27 = (long)puVar12 << 0x3f;
              puVar12 = (undefined *)((ulong)puVar12 >> 1);
              uVar8 = uVar8 >> 1 | uVar27;
            } while (iVar22 != iVar14);
          }
          *(undefined **)puVar13 = puVar19;
          return (undefined *)uVar6;
        }
        *puVar13 = 0;
        return (undefined *)extraout_RDX_01;
      }
      puVar19 = &UNK_0010b424;
      puVar25 = &UNK_0010b45c;
      *(undefined8 *)(puVar10 + -0x20) = 0x1026bb;
      func_0x00101750(&UNK_0010b45c,&UNK_0010b424,0x1a3,&__PRETTY_FUNCTION___6970);
      if (puVar25 == (undefined *)0x0) {
        puVar25 = (undefined *)0x0;
      }
      else {
        iVar22 = 0x40;
        lVar5 = 0;
        uVar6 = ((ulong)puVar25 >> 9) / 0x1dcd65;
        puVar25 = puVar25 + uVar6 * -1000000000;
        puVar11 = (undefined *)0x0;
        puVar20 = (undefined *)0x3b9aca00;
        do {
          puVar16 = (undefined *)((ulong)puVar20 >> 1);
          lVar5 = lVar5 * 2;
          puVar11 = (undefined *)((ulong)puVar11 >> 1 | (long)puVar20 << 0x3f);
          if ((puVar16 < puVar25) || ((puVar16 == puVar25 && (puVar11 <= puVar19)))) {
            lVar5 = lVar5 + 1;
            bVar32 = puVar19 < puVar11;
            puVar19 = puVar19 + -(long)puVar11;
            puVar25 = puVar25 + (-(ulong)bVar32 - (long)puVar16);
          }
          iVar22 = iVar22 + -1;
          puVar20 = puVar16;
        } while (iVar22 != 0);
        *(undefined **)(puVar10 + -0x28) = puVar19;
        *(undefined8 *)(puVar10 + -0x38) = 0x10274c;
        print_uintmaxes(uVar6,lVar5);
        puVar19 = *(undefined **)(puVar10 + -0x28);
        puVar25 = (undefined *)0x9;
      }
      *(undefined **)(puVar10 + -0x20) = puVar12;
      *(undefined8 *)(puVar10 + -0x28) = uVar7;
      *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
      *(undefined8 *)(puVar10 + -0x58) = 0x1023c4;
      lVar5 = umaxtostr(puVar19,puVar10 + -0x50);
      puVar19 = lbuf._8_8_;
      puVar12 = puVar10 + (-0x3c - lVar5);
      if (puVar12 < puVar25) {
        lVar2 = (long)puVar25 + (long)lbuf._8_8_;
        puVar20 = lbuf._8_8_;
        do {
          *puVar20 = 0x30;
          puVar20 = puVar20 + 1;
        } while (puVar20 != (undefined *)(lVar2 - (long)puVar12));
        puVar25 = puVar25 + -(long)puVar12;
        puVar19 = puVar19 + (long)puVar25;
      }
      *(undefined8 *)(puVar10 + -0x58) = 0x10240e;
      lVar5 = func_0x001017d0(puVar19,lVar5,puVar12);
      puVar20 = puVar12 + lVar5;
      if (*(long *)(puVar10 + -0x38) == *(long *)(in_FS_OFFSET + 0x28)) {
        lbuf._8_8_ = puVar20;
        return (undefined *)0x0;
      }
      *(undefined8 *)(puVar10 + -0x58) = 0x102437;
      lbuf._8_8_ = puVar20;
      func_0x001016f0();
      *(undefined **)(puVar10 + -0x58) = puVar12;
      puVar12 = lbuf._8_8_ + -lbuf._0_8_;
      *(undefined8 *)(puVar10 + -0x60) = 0x10245f;
      puVar19 = (undefined *)full_write(1,lbuf._0_8_,puVar12);
      if (puVar19 == puVar12) {
        lbuf._8_8_ = (undefined *)lbuf._0_8_;
        return (undefined *)lbuf._0_8_;
      }
      *(undefined8 *)(puVar10 + -0x60) = 0x102487;
      uVar7 = func_0x001016c0(0,&UNK_0010b431,5);
      *(undefined8 *)(puVar10 + -0x60) = 0x10248f;
      puVar4 = (uint *)func_0x00101610();
      param_1 = (undefined *)(ulong)*puVar4;
      param_4 = (undefined8 *)0x1;
      *(undefined8 *)(puVar10 + -0x60) = 0x1024a7;
      func_0x001018b0(1,param_1,&UNK_0010e94c,uVar7);
      puVar19 = extraout_RDX;
      puVar10 = puVar10 + -0x58;
      puVar12 = puVar25;
    }
code_r0x00101d70:
    *(undefined8 *)(puVar10 + -8) = uVar31;
    *(undefined8 *)(puVar10 + -0x10) = uVar28;
    puVar13 = param_4 + 2;
    bVar9 = *(byte *)((long)param_4 + 0xfa);
    *(undefined8 *)(puVar10 + -0x18) = uVar26;
    *(undefined **)(puVar10 + -0x20) = puVar12;
    *(undefined8 *)(puVar10 + -0x28) = uVar7;
    puVar1 = param_4 + 0x1c;
    uVar15 = (uint)bVar9 - 1;
    puVar23 = puVar1;
    puVar29 = puVar13;
    if (uVar15 != 0xffffffff) {
      puVar10 = (undefined *)(long)(int)uVar15;
      puVar19 = (undefined *)((long)puVar10 * 8);
      puVar12 = (undefined *)(param_4 + 2)[(long)puVar10];
      if (puVar25 < puVar12) {
        puVar19 = puVar10 + -1;
        puVar11 = puVar19;
        uVar24 = uVar15;
        do {
          puVar20 = puVar11;
          uVar24 = uVar24 - 1;
          puVar16 = puVar19;
          if (puVar10 + (-1 - (ulong)uVar15) == puVar20) {
            uVar24 = 0xffffffff;
            goto code_r0x00101e00;
          }
          bVar32 = (undefined *)param_4[(long)(puVar20 + -1 + 3)] == puVar25;
          puVar11 = puVar20 + -1;
        } while (puVar25 <= (undefined *)param_4[(long)(puVar20 + -1 + 3)] && !bVar32);
        if (bVar32) {
code_r0x00101e55:
          *(char *)((long)puVar1 + (long)puVar20) = *(char *)((long)puVar1 + (long)puVar20) + '\x01'
          ;
          return puVar19;
        }
        puVar29 = puVar13 + (long)(puVar20 + 1);
        puVar23 = (undefined8 *)(puVar20 + 1 + (long)puVar1);
        if ((int)uVar24 < (int)uVar15) {
code_r0x00101e00:
          while( true ) {
            puVar19 = puVar16;
            *(undefined **)(param_4 + (long)(puVar10 + 3)) = puVar12;
            puVar10[(long)param_4 + 0xe1] = *(undefined *)((long)puVar1 + (long)puVar10);
            if ((int)puVar19 <= (int)uVar24) break;
            puVar12 = (undefined *)puVar13[(long)puVar19];
            puVar16 = puVar19 + -1;
            puVar10 = puVar19;
          }
        }
      }
      else {
        puVar20 = puVar10;
        if (puVar25 == puVar12) goto code_r0x00101e55;
        puVar23 = (undefined8 *)(puVar10 + (long)param_4 + 0xe1);
        puVar29 = param_4 + 3 + (long)puVar10;
      }
    }
    *(undefined **)puVar29 = puVar25;
    *(undefined *)puVar23 = 1;
    *(char *)((long)param_4 + 0xfa) = bVar9 + 1;
    return puVar19;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x138) = 0x10b9a0;
  puVar25 = *(undefined **)(primes_dtab + uVar18 * 0x10);
  in_R11 = *(undefined **)(primes_dtab + uVar18 * 0x10 + 8);
  uVar6 = (ulong)(byte)primes_diff8[uVar18];
  goto code_r0x00103588;
}

