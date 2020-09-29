
ulong prime_p_part_4(ulong *param_1)

{
  undefined4 uVar1;
  undefined auVar2 [16];
  byte bVar3;
  char cVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong *unaff_RBX;
  undefined *puVar13;
  ulong *unaff_RBP;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined1 *unaff_R12;
  undefined1 *unaff_R13;
  undefined *unaff_R14;
  ulong *unaff_R15;
  long in_FS_OFFSET;
  bool bVar17;
  
  do {
    *(ulong **)((undefined *)register0x00000020 + -8) = unaff_R15;
    *(undefined **)((undefined *)register0x00000020 + -0x10) = unaff_R14;
    *(undefined1 **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
    *(undefined1 **)((undefined *)register0x00000020 + -0x20) = unaff_R12;
    pbVar9 = (byte *)((long)param_1 - 1);
    *(ulong **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
    *(ulong **)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    iVar5 = 0;
    *(byte **)((undefined *)register0x00000020 + -0x178) = pbVar9;
    if (((ulong)pbVar9 & 1) == 0) {
      do {
        pbVar9 = (byte *)((ulong)pbVar9 >> 1);
        iVar5 = iVar5 + 1;
      } while (((ulong)pbVar9 & 1) == 0);
      *(int *)((undefined *)register0x00000020 + -0x164) = iVar5;
    }
    else {
      pbVar9 = *(byte **)((undefined *)register0x00000020 + -0x178);
      *(undefined4 *)((undefined *)register0x00000020 + -0x164) = 0;
    }
    iVar5 = 0x40;
    puVar16 = (ulong *)0x0;
    puVar10 = (ulong *)0x1;
    uVar7 = (ulong)(byte)binvert_table[(uint)((ulong)param_1 >> 1) & 0x7f];
    lVar11 = uVar7 * 2 - uVar7 * uVar7 * (long)param_1;
    lVar11 = lVar11 * 2 - lVar11 * lVar11 * (long)param_1;
    unaff_R14 = (undefined *)(lVar11 * 2 - lVar11 * lVar11 * (long)param_1);
    puVar6 = (ulong *)0x0;
    puVar12 = param_1;
    do {
      puVar14 = (ulong *)((ulong)puVar12 >> 1);
      puVar6 = (ulong *)((ulong)puVar6 >> 1 | (long)puVar12 << 0x3f);
      if ((puVar14 < puVar10) || ((puVar14 == puVar10 && (puVar6 <= puVar16)))) {
        bVar17 = puVar16 < puVar6;
        puVar16 = (ulong *)((long)puVar16 - (long)puVar6);
        puVar10 = (ulong *)((long)puVar10 + (-(ulong)bVar17 - (long)puVar14));
      }
      iVar5 = iVar5 + -1;
      puVar12 = puVar14;
    } while (iVar5 != 0);
    *(ulong **)((undefined *)register0x00000020 + -0x170) = puVar16;
    puVar12 = (ulong *)((-(ulong)(puVar16 < (ulong *)((long)param_1 - (long)puVar16)) &
                        (ulong)param_1) + ((long)puVar16 * 2 - (long)param_1));
    *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103b71;
    cVar4 = millerrabin(param_1,unaff_R14,puVar12,pbVar9,
                        (ulong)*(uint *)((undefined *)register0x00000020 + -0x164),puVar16);
    ((undefined *)register0x00000020)[-0x149] = cVar4;
    unaff_R12 = pbVar9;
    unaff_R15 = puVar12;
    if (cVar4 == '\0') {
code_r0x00103d00:
      ((undefined *)register0x00000020)[-0x149] = 0;
    }
    else {
      unaff_R13 = primes_diff;
      *(undefined **)((undefined *)register0x00000020 + -0x158) =
           (undefined *)register0x00000020 + -0x148;
      *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103b9c;
      factor(0,*(undefined8 *)((undefined *)register0x00000020 + -0x178),
             (undefined *)register0x00000020 + -0x148);
      unaff_R12 = *(undefined1 **)((undefined *)register0x00000020 + -0x170);
      *(byte **)((undefined *)register0x00000020 + -0x160) = pbVar9;
      *(uint *)((undefined *)register0x00000020 + -0x150) =
           (uint)(byte)((undefined *)register0x00000020)[-0x4e];
      unaff_R15 = (ulong *)((undefined *)register0x00000020 +
                           (ulong)((uint)(byte)((undefined *)register0x00000020)[-0x4e] - 1) * 8 +
                           -0x138);
      unaff_RBP = (ulong *)0x2;
      while (*(int *)((undefined *)register0x00000020 + -0x150) != 0) {
        *(ulong **)((undefined *)register0x00000020 + -0x170) = unaff_RBP;
        puVar6 = (ulong *)(*(long *)((undefined *)register0x00000020 + -0x158) + 0x10);
        do {
          uVar7 = *puVar6;
          *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103c0e;
          pbVar9 = (byte *)powm(puVar12,*(ulong *)((undefined *)register0x00000020 + -0x178) / uVar7
                                ,param_1);
          if (unaff_R15 == puVar6) goto code_r0x00103cb8;
          puVar6 = puVar6 + 1;
        } while (pbVar9 != unaff_R12);
        unaff_RBP = *(ulong **)((undefined *)register0x00000020 + -0x170);
        while( true ) {
          unaff_RBP = (ulong *)((long)unaff_RBP + (ulong)(byte)*unaff_R13);
          auVar2 = ZEXT816(unaff_R12) * ZEXT816(unaff_RBP);
          puVar12 = SUB168(auVar2 >> 0x40,0);
          uVar7 = SUB168(auVar2,0);
          if (puVar12 == (ulong *)0x0) {
            uVar7 = SUB168((ZEXT816(0) << 0x40 | auVar2 & (undefined  [16])0xffffffffffffffff) %
                           ZEXT816(param_1),0);
          }
          else {
            if (param_1 <= puVar12) goto code_r0x00103d62;
            iVar5 = 0x40;
            uVar15 = 0;
            puVar6 = param_1;
            do {
              puVar10 = (ulong *)((ulong)puVar6 >> 1);
              uVar15 = uVar15 >> 1 | (long)puVar6 << 0x3f;
              if ((puVar10 < puVar12) || ((puVar10 == puVar12 && (uVar15 <= uVar7)))) {
                bVar17 = uVar7 < uVar15;
                uVar7 = uVar7 - uVar15;
                puVar12 = (ulong *)((long)puVar12 + (-(ulong)bVar17 - (long)puVar10));
              }
              iVar5 = iVar5 + -1;
              puVar6 = puVar10;
            } while (iVar5 != 0);
          }
          *(ulong *)((undefined *)register0x00000020 + -0x170) = uVar7;
          *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103c6a;
          cVar4 = millerrabin(param_1,unaff_R14,uVar7,
                              *(undefined8 *)((undefined *)register0x00000020 + -0x160),
                              (ulong)*(uint *)((undefined *)register0x00000020 + -0x164),unaff_R12);
          if (cVar4 == '\0') goto code_r0x00103d00;
          unaff_R13 = (undefined1 *)((long)unaff_R13 + 1);
          puVar12 = *(ulong **)((undefined *)register0x00000020 + -0x170);
          if (unaff_R13 != primes_diff + 0x29c) break;
          *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103c9e;
          uVar8 = func_0x001016c0(0,&UNK_0010b618,5);
          *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103cac;
          func_0x001018b0(0,0,uVar8);
          *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103cb1;
          pbVar9 = (byte *)func_0x00101600();
code_r0x00103cb8:
          unaff_RBP = *(ulong **)((undefined *)register0x00000020 + -0x170);
          if (pbVar9 != unaff_R12) goto code_r0x00103cd0;
        }
      }
    }
code_r0x00103cd0:
    param_1 = (ulong *)(*(ulong *)((undefined *)register0x00000020 + -0x40) ^
                       *(ulong *)(in_FS_OFFSET + 0x28));
    if (param_1 == (ulong *)0x0) {
      return (ulong)(byte)((undefined *)register0x00000020)[-0x149];
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103d62;
    func_0x001016f0();
code_r0x00103d62:
    puVar6 = (ulong *)&UNK_0010b424;
    puVar10 = (ulong *)&UNK_0010b474;
    *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103d81;
    func_0x00101750(&UNK_0010b474,&UNK_0010b424,0x4f4,&__PRETTY_FUNCTION___7209);
    puVar12 = param_1;
    puVar13 = (undefined *)register0x00000020 + -0x178;
    do {
      unaff_RBX = puVar10;
      *(ulong **)(puVar13 + -8) = unaff_R15;
      *(undefined **)(puVar13 + -0x10) = unaff_R14;
      *(undefined1 **)(puVar13 + -0x18) = unaff_R13;
      *(undefined1 **)(puVar13 + -0x20) = unaff_R12;
      *(ulong **)(puVar13 + -0x28) = unaff_RBP;
      *(ulong **)(puVar13 + -0x30) = puVar12;
      register0x00000020 = (BADSPACEBASE *)(puVar13 + -0x238);
      *(undefined8 *)(puVar13 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
      puVar12 = (ulong *)((long)unaff_RBX - (ulong)(puVar6 == (ulong *)0x0));
      *(ulong **)(puVar13 + -0x210) = puVar12;
      *(long *)(puVar13 + -0x220) = (long)puVar6 + -1;
      if ((long)puVar6 + -1 == 0) {
        lVar11 = 0;
        iVar5 = 0;
        if (puVar12 != (ulong *)0x0) {
          while (iVar5 = (int)lVar11, ((ulong)puVar12 >> lVar11 & 1) == 0) {
            lVar11 = lVar11 + 1;
          }
        }
        *(undefined8 *)(puVar13 + -0x1a0) = 0;
        *(ulong *)(puVar13 + -0x1a8) = (ulong)puVar12 >> ((byte)iVar5 & 0x3f);
        *(int *)(puVar13 + -0x1c8) = iVar5 + 0x40;
      }
      else {
        uVar7 = *(ulong *)(puVar13 + -0x220);
        lVar11 = 0;
        uVar1 = 0;
        if (uVar7 != 0) {
          while (uVar1 = (undefined4)lVar11, (uVar7 >> lVar11 & 1) == 0) {
            lVar11 = lVar11 + 1;
          }
        }
        bVar3 = (byte)uVar1;
        *(undefined4 *)(puVar13 + -0x1c8) = uVar1;
        *(ulong *)(puVar13 + -0x1a8) =
             *(ulong *)(puVar13 + -0x210) << (0x40 - bVar3 & 0x3f) | uVar7 >> (bVar3 & 0x3f);
        *(ulong *)(puVar13 + -0x1a0) = *(ulong *)(puVar13 + -0x210) >> (bVar3 & 0x3f);
      }
      uVar7 = (ulong)(byte)binvert_table[(uint)((ulong)puVar6 >> 1) & 0x7f];
      lVar11 = uVar7 * 2 - uVar7 * uVar7 * (long)puVar6;
      lVar11 = lVar11 * 2 - lVar11 * lVar11 * (long)puVar6;
      *(long *)(puVar13 + -0x218) = lVar11 * 2 - lVar11 * lVar11 * (long)puVar6;
      lVar11 = (ulong)(-(uint)(unaff_RBX < (ulong *)0x2) & 0x40) + 0x40;
      puVar12 = (ulong *)(ulong)(unaff_RBX >= (ulong *)0x2);
      puVar10 = (ulong *)(ulong)(unaff_RBX < (ulong *)0x2);
      while (lVar11 = lVar11 + -1, lVar11 != -1) {
        while( true ) {
          puVar16 = (ulong *)((long)puVar10 * 2);
          puVar12 = (ulong *)((long)puVar12 * 2 | (ulong)puVar10 >> 0x3f);
          if ((puVar12 <= unaff_RBX) &&
             ((puVar10 = puVar16, unaff_RBX != puVar12 || (puVar16 < puVar6)))) break;
          lVar11 = lVar11 + -1;
          puVar10 = (ulong *)((long)puVar16 - (long)puVar6);
          puVar12 = (ulong *)((long)puVar12 + (-(ulong)(puVar16 < puVar6) - (long)unaff_RBX));
          if (lVar11 == -1) goto code_r0x00103e9b;
        }
      }
code_r0x00103e9b:
      *(ulong **)(puVar13 + -0x180) = puVar12;
      *(ulong **)(puVar13 + -0x188) = puVar10;
      puVar16 = (ulong *)((long)puVar10 * 2);
      puVar12 = (ulong *)((long)puVar12 * 2 + (ulong)CARRY8((ulong)puVar10,(ulong)puVar10));
      *(ulong **)(puVar13 + -400) = puVar12;
      *(ulong **)(puVar13 + -0x198) = puVar16;
      if ((unaff_RBX < puVar12) || ((unaff_RBX == puVar12 && (puVar6 <= puVar16)))) {
        *(ulong *)(puVar13 + -400) = (long)puVar12 + (-(ulong)(puVar16 < puVar6) - (long)unaff_RBX);
        *(ulong **)(puVar13 + -0x198) = (ulong *)((long)puVar16 - (long)puVar6);
      }
      unaff_R14 = puVar13 + -0x178;
      param_1 = *(ulong **)(puVar13 + -0x218);
      *(ulong **)(puVar13 + -0x178) = puVar6;
      *(ulong **)(puVar13 + -0x170) = unaff_RBX;
      *(undefined **)(puVar13 + -0x230) = puVar13 + -0x188;
      *(undefined **)(puVar13 + -0x200) = puVar13 + -0x1a8;
      *(undefined **)(puVar13 + -0x208) = puVar13 + -0x198;
      *(undefined8 *)(puVar13 + -0x240) = 0x103f27;
      cVar4 = millerrabin2(unaff_R14,param_1,puVar13 + -0x198);
      puVar13[-0x1c1] = cVar4;
      unaff_R15 = puVar6;
      if (cVar4 != '\0') {
        uVar7 = *(ulong *)(puVar13 + -0x210);
        unaff_R13 = *(undefined1 **)(puVar13 + -0x220);
        unaff_R12 = primes_diff;
        *(undefined **)(puVar13 + -0x1c0) = puVar13 + -0x148;
        *(undefined8 *)(puVar13 + -0x240) = 0x103f5f;
        param_1 = (ulong *)unaff_R13;
        factor(uVar7,unaff_R13,puVar13 + -0x148);
        *(ulong *)(puVar13 + -0x1f0) = uVar7 >> 1;
        *(ulong *)(puVar13 + -0x1f8) = uVar7 << 0x3f | (ulong)unaff_R13 >> 1;
        unaff_RBP = (ulong *)0x2;
        *(undefined **)(puVar13 + -0x228) = puVar13 + -0x168;
        *(undefined **)(puVar13 + -0x1b8) = puVar13 + -0x158;
        *(undefined **)(puVar13 + -0x1b0) = puVar13 + -0x150;
code_r0x00103fb8:
        if (*(long *)(puVar13 + -0x140) != 0) {
          uVar7 = *(ulong *)(puVar13 + -0x148);
          param_1 = *(ulong **)(puVar13 + -0x208);
          *(undefined8 *)(puVar13 + -0x160) = 0;
          uVar15 = (ulong)(byte)binvert_table[(uint)(uVar7 >> 1) & 0x7f];
          lVar11 = uVar15 * 2 - uVar15 * uVar15 * uVar7;
          lVar11 = lVar11 * 2 - lVar11 * lVar11 * uVar7;
          *(ulong *)(puVar13 + -0x168) =
               *(long *)(puVar13 + -0x220) * (lVar11 * 2 - lVar11 * lVar11 * uVar7);
          *(undefined8 *)(puVar13 + -0x240) = 0x10431a;
          lVar11 = powm2(*(undefined8 *)(puVar13 + -0x1b0),param_1,*(undefined8 *)(puVar13 + -0x228)
                         ,unaff_R14,*(undefined8 *)(puVar13 + -0x218),
                         *(undefined8 *)(puVar13 + -0x230));
          *(long *)(puVar13 + -0x158) = lVar11;
          if (lVar11 == *(long *)(puVar13 + -0x188)) {
            bVar17 = *(long *)(puVar13 + -0x150) != *(long *)(puVar13 + -0x180);
            if (puVar13[-0x4e] == '\0') goto code_r0x001043b8;
            if (*(long *)(puVar13 + -0x150) == *(long *)(puVar13 + -0x180)) goto code_r0x00104140;
            goto code_r0x00103fd5;
          }
        }
        if (puVar13[-0x4e] != '\0') {
code_r0x00103fd5:
          *(ulong **)(puVar13 + -0x1e8) = unaff_RBP;
          *(undefined1 **)(puVar13 + -0x1e0) = unaff_R12;
          *(ulong **)(puVar13 + -0x1d8) = unaff_RBX;
          *(ulong **)(puVar13 + -0x1d0) = unaff_R15;
          unaff_R12 = *(undefined1 **)(puVar13 + -0x218);
          unaff_R15 = (ulong *)0x1;
          unaff_RBP = (ulong *)(*(long *)(puVar13 + -0x1b8) + 8);
          unaff_R13 = *(undefined1 **)(puVar13 + -0x1c0);
          unaff_RBX = *(ulong **)(puVar13 + -0x208);
          do {
            uVar7 = ((ulong *)unaff_R13)[(long)((long)unaff_R15 + 1)];
            if (uVar7 == 2) {
              *(undefined8 *)(puVar13 + -0x168) = *(undefined8 *)(puVar13 + -0x1f8);
              *(undefined8 *)(puVar13 + -0x160) = *(undefined8 *)(puVar13 + -0x1f0);
            }
            else {
              uVar15 = (ulong)(byte)binvert_table[(uint)(uVar7 >> 1) & 0x7f];
              lVar11 = uVar15 * 2 - uVar15 * uVar15 * uVar7;
              lVar11 = lVar11 * 2 - lVar11 * lVar11 * uVar7;
              lVar11 = lVar11 * 2 - lVar11 * lVar11 * uVar7;
              uVar15 = *(long *)(puVar13 + -0x220) * lVar11;
              if (*(ulong *)(puVar13 + -0x210) < uVar7) goto code_r0x00104210;
              *(ulong *)(puVar13 + -0x168) = uVar15;
              *(ulong *)(puVar13 + -0x160) =
                   lVar11 * (*(ulong *)(puVar13 + -0x210) -
                            SUB168(ZEXT816(uVar15) * ZEXT816(uVar7) >> 0x40,0));
            }
            while( true ) {
              *(undefined8 *)(puVar13 + -0x240) = 0x1040ab;
              param_1 = unaff_RBX;
              lVar11 = powm2(unaff_RBP,unaff_RBX,*(undefined8 *)(puVar13 + -0x228),unaff_R14,
                             unaff_R12,*(undefined8 *)(puVar13 + -0x230));
              *(long *)(puVar13 + -0x158) = lVar11;
              if (lVar11 != *(long *)(puVar13 + -0x188)) break;
              param_1 = (ulong *)(ulong)(byte)puVar13[-0x4e];
              bVar17 = *(long *)(puVar13 + -0x150) != *(long *)(puVar13 + -0x180);
              if ((uint)unaff_R15 < (uint)(byte)puVar13[-0x4e]) {
                if (*(long *)(puVar13 + -0x150) != *(long *)(puVar13 + -0x180))
                goto code_r0x001040ce;
                unaff_RBP = *(ulong **)(puVar13 + -0x1e8);
                unaff_R12 = *(undefined1 **)(puVar13 + -0x1e0);
                unaff_RBX = *(ulong **)(puVar13 + -0x1d8);
                unaff_R15 = *(ulong **)(puVar13 + -0x1d0);
              }
              else {
                unaff_RBP = *(ulong **)(puVar13 + -0x1e8);
                unaff_R12 = *(undefined1 **)(puVar13 + -0x1e0);
                unaff_RBX = *(ulong **)(puVar13 + -0x1d8);
                unaff_R15 = *(ulong **)(puVar13 + -0x1d0);
code_r0x001043b8:
                if (bVar17) goto code_r0x00104230;
              }
code_r0x00104140:
              unaff_RBP = (ulong *)((long)unaff_RBP + (ulong)(byte)*unaff_R12);
              puVar12 = (ulong *)0x0;
              if (unaff_RBP < unaff_RBX) {
                puVar12 = unaff_RBP;
              }
              lVar11 = (-(ulong)(unaff_RBP < unaff_RBX) & 0xffffffffffffffc0) + 0x80;
              puVar6 = (ulong *)0x0;
              if (unaff_RBX <= unaff_RBP) {
                puVar6 = unaff_RBP;
              }
              while (lVar11 = lVar11 + -1, lVar11 != -1) {
                while( true ) {
                  puVar10 = (ulong *)((long)puVar6 * 2);
                  puVar12 = (ulong *)((long)puVar12 * 2 | (ulong)puVar6 >> 0x3f);
                  if ((puVar12 <= unaff_RBX) &&
                     ((puVar6 = puVar10, unaff_RBX != puVar12 || (puVar10 < unaff_R15)))) break;
                  lVar11 = lVar11 + -1;
                  puVar6 = (ulong *)((long)puVar10 - (long)unaff_R15);
                  puVar12 = (ulong *)((long)puVar12 +
                                     (-(ulong)(puVar10 < unaff_R15) - (long)unaff_RBX));
                  if (lVar11 == -1) goto code_r0x0010419f;
                }
              }
code_r0x0010419f:
              *(ulong **)(puVar13 + -0x198) = puVar6;
              param_1 = *(ulong **)(puVar13 + -0x218);
              *(ulong **)(puVar13 + -400) = puVar12;
              *(undefined8 *)(puVar13 + -0x240) = 0x1041d0;
              cVar4 = millerrabin2(unaff_R14,param_1,*(undefined8 *)(puVar13 + -0x208),
                                   *(undefined8 *)(puVar13 + -0x200),
                                   (ulong)*(uint *)(puVar13 + -0x1c8),
                                   *(undefined8 *)(puVar13 + -0x230));
              if (cVar4 == '\0') {
                puVar13[-0x1c1] = 0;
                goto code_r0x00104230;
              }
              unaff_R12 = unaff_R12 + 1;
              if (unaff_R12 != primes_diff + 0x29c) goto code_r0x00103fb8;
              *(undefined8 *)(puVar13 + -0x240) = 0x1041fb;
              uVar8 = func_0x001016c0(0,&UNK_0010b618,5);
              uVar15 = 0;
              *(undefined8 *)(puVar13 + -0x240) = 0x104209;
              func_0x001018b0(0,0,uVar8);
              *(undefined8 *)(puVar13 + -0x240) = 0x10420e;
              func_0x00101600();
code_r0x00104210:
              *(ulong *)(puVar13 + -0x168) = uVar15;
              *(undefined8 *)(puVar13 + -0x160) = 0;
            }
            if ((uint)(byte)puVar13[-0x4e] <= (uint)unaff_R15) break;
code_r0x001040ce:
            unaff_R15 = (ulong *)((long)unaff_R15 + 1);
          } while( true );
        }
      }
code_r0x00104230:
      puVar10 = (ulong *)(*(ulong *)(puVar13 + -0x40) ^ *(ulong *)(in_FS_OFFSET + 0x28));
      if (puVar10 == (ulong *)0x0) {
        return (ulong)(byte)puVar13[-0x1c1];
      }
      *(undefined8 *)(puVar13 + -0x240) = 0x1043ca;
      func_0x001016f0();
      puVar12 = unaff_RBX;
      puVar13 = puVar13 + -0x238;
      puVar6 = param_1;
    } while (puVar10 != (ulong *)0x0);
    if (param_1 < (ulong *)0x2) {
      return 0;
    }
    if (param_1 < (ulong *)0x17ded79) {
      return 1;
    }
  } while( true );
}

