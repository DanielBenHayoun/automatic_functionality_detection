
ulong prime2_p(ulong *param_1,ulong *param_2)

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
  ulong *unaff_RBP;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined1 *unaff_R12;
  undefined1 *unaff_R13;
  undefined *unaff_R14;
  ulong *unaff_R15;
  long in_FS_OFFSET;
  bool bVar16;
  
  do {
    if (param_1 == (ulong *)0x0) {
      if (param_2 < (ulong *)0x2) {
        return 0;
      }
      if (param_2 < (ulong *)0x17ded79) {
        return 1;
      }
      *(ulong **)((undefined *)register0x00000020 + -8) = unaff_R15;
      *(undefined **)((undefined *)register0x00000020 + -0x10) = unaff_R14;
      *(undefined1 **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
      *(undefined1 **)((undefined *)register0x00000020 + -0x20) = unaff_R12;
      pbVar9 = (byte *)((long)param_2 - 1);
      *(ulong **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
      *(ulong **)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
      *(undefined8 *)((undefined *)register0x00000020 + -0x40) =
           *(undefined8 *)(in_FS_OFFSET + 0x28);
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
      puVar15 = (ulong *)0x0;
      puVar10 = (ulong *)0x1;
      uVar7 = (ulong)(byte)binvert_table[(uint)((ulong)param_2 >> 1) & 0x7f];
      lVar11 = uVar7 * 2 - uVar7 * uVar7 * (long)param_2;
      lVar11 = lVar11 * 2 - lVar11 * lVar11 * (long)param_2;
      unaff_R14 = (undefined *)(lVar11 * 2 - lVar11 * lVar11 * (long)param_2);
      puVar6 = (ulong *)0x0;
      puVar12 = param_2;
      do {
        puVar13 = (ulong *)((ulong)puVar12 >> 1);
        puVar6 = (ulong *)((ulong)puVar6 >> 1 | (long)puVar12 << 0x3f);
        if ((puVar13 < puVar10) || ((puVar13 == puVar10 && (puVar6 <= puVar15)))) {
          bVar16 = puVar15 < puVar6;
          puVar15 = (ulong *)((long)puVar15 - (long)puVar6);
          puVar10 = (ulong *)((long)puVar10 + (-(ulong)bVar16 - (long)puVar13));
        }
        iVar5 = iVar5 + -1;
        puVar12 = puVar13;
      } while (iVar5 != 0);
      *(ulong **)((undefined *)register0x00000020 + -0x170) = puVar15;
      puVar12 = (ulong *)((-(ulong)(puVar15 < (ulong *)((long)param_2 - (long)puVar15)) &
                          (ulong)param_2) + ((long)puVar15 * 2 - (long)param_2));
      *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103b71;
      cVar4 = millerrabin(param_2,unaff_R14,puVar12,pbVar9,
                          (ulong)*(uint *)((undefined *)register0x00000020 + -0x164),puVar15);
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
            pbVar9 = (byte *)powm(puVar12,*(ulong *)((undefined *)register0x00000020 + -0x178) /
                                          uVar7,param_2);
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
                             ZEXT816(param_2),0);
            }
            else {
              if (param_2 <= puVar12) goto code_r0x00103d62;
              iVar5 = 0x40;
              uVar14 = 0;
              puVar6 = param_2;
              do {
                puVar10 = (ulong *)((ulong)puVar6 >> 1);
                uVar14 = uVar14 >> 1 | (long)puVar6 << 0x3f;
                if ((puVar10 < puVar12) || ((puVar10 == puVar12 && (uVar14 <= uVar7)))) {
                  bVar16 = uVar7 < uVar14;
                  uVar7 = uVar7 - uVar14;
                  puVar12 = (ulong *)((long)puVar12 + (-(ulong)bVar16 - (long)puVar10));
                }
                iVar5 = iVar5 + -1;
                puVar6 = puVar10;
              } while (iVar5 != 0);
            }
            *(ulong *)((undefined *)register0x00000020 + -0x170) = uVar7;
            *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103c6a;
            cVar4 = millerrabin(param_2,unaff_R14,uVar7,
                                *(undefined8 *)((undefined *)register0x00000020 + -0x160),
                                (ulong)*(uint *)((undefined *)register0x00000020 + -0x164),unaff_R12
                               );
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
      param_2 = (ulong *)(*(ulong *)((undefined *)register0x00000020 + -0x40) ^
                         *(ulong *)(in_FS_OFFSET + 0x28));
      if (param_2 == (ulong *)0x0) {
        return (ulong)(byte)((undefined *)register0x00000020)[-0x149];
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103d62;
      func_0x001016f0();
code_r0x00103d62:
      puVar12 = (ulong *)&UNK_0010b424;
      param_1 = (ulong *)&UNK_0010b474;
      *(undefined8 *)((undefined *)register0x00000020 + -0x180) = 0x103d81;
      func_0x00101750(&UNK_0010b474,&UNK_0010b424,0x4f4,&__PRETTY_FUNCTION___7209);
      unaff_RBX = param_2;
      register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x178);
      param_2 = puVar12;
    }
    *(ulong **)((undefined *)register0x00000020 + -8) = unaff_R15;
    *(undefined **)((undefined *)register0x00000020 + -0x10) = unaff_R14;
    *(undefined1 **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
    *(undefined1 **)((undefined *)register0x00000020 + -0x20) = unaff_R12;
    *(ulong **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
    *(ulong **)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    puVar12 = (ulong *)((long)param_1 - (ulong)(param_2 == (ulong *)0x0));
    *(ulong **)((undefined *)register0x00000020 + -0x210) = puVar12;
    *(long *)((undefined *)register0x00000020 + -0x220) = (long)param_2 + -1;
    if ((long)param_2 + -1 == 0) {
      lVar11 = 0;
      iVar5 = 0;
      if (puVar12 != (ulong *)0x0) {
        while (iVar5 = (int)lVar11, ((ulong)puVar12 >> lVar11 & 1) == 0) {
          lVar11 = lVar11 + 1;
        }
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x1a0) = 0;
      *(ulong *)((undefined *)register0x00000020 + -0x1a8) = (ulong)puVar12 >> ((byte)iVar5 & 0x3f);
      *(int *)((undefined *)register0x00000020 + -0x1c8) = iVar5 + 0x40;
    }
    else {
      uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x220);
      lVar11 = 0;
      uVar1 = 0;
      if (uVar7 != 0) {
        while (uVar1 = (undefined4)lVar11, (uVar7 >> lVar11 & 1) == 0) {
          lVar11 = lVar11 + 1;
        }
      }
      bVar3 = (byte)uVar1;
      *(undefined4 *)((undefined *)register0x00000020 + -0x1c8) = uVar1;
      *(ulong *)((undefined *)register0x00000020 + -0x1a8) =
           *(ulong *)((undefined *)register0x00000020 + -0x210) << (0x40 - bVar3 & 0x3f) |
           uVar7 >> (bVar3 & 0x3f);
      *(ulong *)((undefined *)register0x00000020 + -0x1a0) =
           *(ulong *)((undefined *)register0x00000020 + -0x210) >> (bVar3 & 0x3f);
    }
    uVar7 = (ulong)(byte)binvert_table[(uint)((ulong)param_2 >> 1) & 0x7f];
    lVar11 = uVar7 * 2 - uVar7 * uVar7 * (long)param_2;
    lVar11 = lVar11 * 2 - lVar11 * lVar11 * (long)param_2;
    *(long *)((undefined *)register0x00000020 + -0x218) =
         lVar11 * 2 - lVar11 * lVar11 * (long)param_2;
    lVar11 = (ulong)(-(uint)(param_1 < (ulong *)0x2) & 0x40) + 0x40;
    puVar12 = (ulong *)(ulong)(param_1 >= (ulong *)0x2);
    puVar6 = (ulong *)(ulong)(param_1 < (ulong *)0x2);
    while (lVar11 = lVar11 + -1, lVar11 != -1) {
      while( true ) {
        puVar10 = (ulong *)((long)puVar6 * 2);
        puVar12 = (ulong *)((long)puVar12 * 2 | (ulong)puVar6 >> 0x3f);
        if ((puVar12 <= param_1) && ((puVar6 = puVar10, param_1 != puVar12 || (puVar10 < param_2))))
        break;
        lVar11 = lVar11 + -1;
        puVar6 = (ulong *)((long)puVar10 - (long)param_2);
        puVar12 = (ulong *)((long)puVar12 + (-(ulong)(puVar10 < param_2) - (long)param_1));
        if (lVar11 == -1) goto code_r0x00103e9b;
      }
    }
code_r0x00103e9b:
    *(ulong **)((undefined *)register0x00000020 + -0x180) = puVar12;
    *(ulong **)((undefined *)register0x00000020 + -0x188) = puVar6;
    puVar10 = (ulong *)((long)puVar6 * 2);
    puVar12 = (ulong *)((long)puVar12 * 2 + (ulong)CARRY8((ulong)puVar6,(ulong)puVar6));
    *(ulong **)((undefined *)register0x00000020 + -400) = puVar12;
    *(ulong **)((undefined *)register0x00000020 + -0x198) = puVar10;
    if ((param_1 < puVar12) || ((param_1 == puVar12 && (param_2 <= puVar10)))) {
      *(ulong *)((undefined *)register0x00000020 + -400) =
           (long)puVar12 + (-(ulong)(puVar10 < param_2) - (long)param_1);
      *(ulong **)((undefined *)register0x00000020 + -0x198) =
           (ulong *)((long)puVar10 - (long)param_2);
    }
    unaff_R14 = (undefined *)register0x00000020 + -0x178;
    puVar12 = *(ulong **)((undefined *)register0x00000020 + -0x218);
    *(ulong **)((undefined *)register0x00000020 + -0x178) = param_2;
    *(ulong **)((undefined *)register0x00000020 + -0x170) = param_1;
    *(undefined **)((undefined *)register0x00000020 + -0x230) =
         (undefined *)register0x00000020 + -0x188;
    *(undefined **)((undefined *)register0x00000020 + -0x200) =
         (undefined *)register0x00000020 + -0x1a8;
    *(undefined **)((undefined *)register0x00000020 + -0x208) =
         (undefined *)register0x00000020 + -0x198;
    *(undefined8 *)((undefined *)register0x00000020 + -0x240) = 0x103f27;
    cVar4 = millerrabin2(unaff_R14,puVar12,(undefined *)register0x00000020 + -0x198);
    ((undefined *)register0x00000020)[-0x1c1] = cVar4;
    unaff_R15 = param_2;
    if (cVar4 != '\0') {
      uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x210);
      unaff_R13 = *(undefined1 **)((undefined *)register0x00000020 + -0x220);
      unaff_R12 = primes_diff;
      *(undefined **)((undefined *)register0x00000020 + -0x1c0) =
           (undefined *)register0x00000020 + -0x148;
      *(undefined8 *)((undefined *)register0x00000020 + -0x240) = 0x103f5f;
      puVar12 = (ulong *)unaff_R13;
      factor(uVar7,unaff_R13,(undefined *)register0x00000020 + -0x148);
      *(ulong *)((undefined *)register0x00000020 + -0x1f0) = uVar7 >> 1;
      *(ulong *)((undefined *)register0x00000020 + -0x1f8) = uVar7 << 0x3f | (ulong)unaff_R13 >> 1;
      unaff_RBP = (ulong *)0x2;
      *(undefined **)((undefined *)register0x00000020 + -0x228) =
           (undefined *)register0x00000020 + -0x168;
      *(undefined **)((undefined *)register0x00000020 + -0x1b8) =
           (undefined *)register0x00000020 + -0x158;
      *(undefined **)((undefined *)register0x00000020 + -0x1b0) =
           (undefined *)register0x00000020 + -0x150;
code_r0x00103fb8:
      if (*(long *)((undefined *)register0x00000020 + -0x140) != 0) {
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x148);
        puVar12 = *(ulong **)((undefined *)register0x00000020 + -0x208);
        *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0;
        uVar14 = (ulong)(byte)binvert_table[(uint)(uVar7 >> 1) & 0x7f];
        lVar11 = uVar14 * 2 - uVar14 * uVar14 * uVar7;
        lVar11 = lVar11 * 2 - lVar11 * lVar11 * uVar7;
        *(ulong *)((undefined *)register0x00000020 + -0x168) =
             *(long *)((undefined *)register0x00000020 + -0x220) *
             (lVar11 * 2 - lVar11 * lVar11 * uVar7);
        *(undefined8 *)((undefined *)register0x00000020 + -0x240) = 0x10431a;
        lVar11 = powm2(*(undefined8 *)((undefined *)register0x00000020 + -0x1b0),puVar12,
                       *(undefined8 *)((undefined *)register0x00000020 + -0x228),unaff_R14,
                       *(undefined8 *)((undefined *)register0x00000020 + -0x218),
                       *(undefined8 *)((undefined *)register0x00000020 + -0x230));
        *(long *)((undefined *)register0x00000020 + -0x158) = lVar11;
        if (lVar11 == *(long *)((undefined *)register0x00000020 + -0x188)) {
          bVar16 = *(long *)((undefined *)register0x00000020 + -0x150) !=
                   *(long *)((undefined *)register0x00000020 + -0x180);
          if (((undefined *)register0x00000020)[-0x4e] == '\0') goto code_r0x001043b8;
          if (*(long *)((undefined *)register0x00000020 + -0x150) ==
              *(long *)((undefined *)register0x00000020 + -0x180)) goto code_r0x00104140;
          goto code_r0x00103fd5;
        }
      }
      if (((undefined *)register0x00000020)[-0x4e] != '\0') {
code_r0x00103fd5:
        *(ulong **)((undefined *)register0x00000020 + -0x1e8) = unaff_RBP;
        *(undefined1 **)((undefined *)register0x00000020 + -0x1e0) = unaff_R12;
        *(ulong **)((undefined *)register0x00000020 + -0x1d8) = param_1;
        *(ulong **)((undefined *)register0x00000020 + -0x1d0) = unaff_R15;
        unaff_R12 = *(undefined1 **)((undefined *)register0x00000020 + -0x218);
        unaff_R15 = (ulong *)0x1;
        unaff_RBP = (ulong *)(*(long *)((undefined *)register0x00000020 + -0x1b8) + 8);
        unaff_R13 = *(undefined1 **)((undefined *)register0x00000020 + -0x1c0);
        param_1 = *(ulong **)((undefined *)register0x00000020 + -0x208);
        do {
          uVar7 = ((ulong *)unaff_R13)[(long)((long)unaff_R15 + 1)];
          if (uVar7 == 2) {
            *(undefined8 *)((undefined *)register0x00000020 + -0x168) =
                 *(undefined8 *)((undefined *)register0x00000020 + -0x1f8);
            *(undefined8 *)((undefined *)register0x00000020 + -0x160) =
                 *(undefined8 *)((undefined *)register0x00000020 + -0x1f0);
          }
          else {
            uVar14 = (ulong)(byte)binvert_table[(uint)(uVar7 >> 1) & 0x7f];
            lVar11 = uVar14 * 2 - uVar14 * uVar14 * uVar7;
            lVar11 = lVar11 * 2 - lVar11 * lVar11 * uVar7;
            lVar11 = lVar11 * 2 - lVar11 * lVar11 * uVar7;
            uVar14 = *(long *)((undefined *)register0x00000020 + -0x220) * lVar11;
            if (*(ulong *)((undefined *)register0x00000020 + -0x210) < uVar7) goto code_r0x00104210;
            *(ulong *)((undefined *)register0x00000020 + -0x168) = uVar14;
            *(ulong *)((undefined *)register0x00000020 + -0x160) =
                 lVar11 * (*(ulong *)((undefined *)register0x00000020 + -0x210) -
                          SUB168(ZEXT816(uVar14) * ZEXT816(uVar7) >> 0x40,0));
          }
          while( true ) {
            *(undefined8 *)((undefined *)register0x00000020 + -0x240) = 0x1040ab;
            puVar12 = param_1;
            lVar11 = powm2(unaff_RBP,param_1,
                           *(undefined8 *)((undefined *)register0x00000020 + -0x228),unaff_R14,
                           unaff_R12,*(undefined8 *)((undefined *)register0x00000020 + -0x230));
            *(long *)((undefined *)register0x00000020 + -0x158) = lVar11;
            if (lVar11 != *(long *)((undefined *)register0x00000020 + -0x188)) break;
            puVar12 = (ulong *)(ulong)(byte)((undefined *)register0x00000020)[-0x4e];
            bVar16 = *(long *)((undefined *)register0x00000020 + -0x150) !=
                     *(long *)((undefined *)register0x00000020 + -0x180);
            if ((uint)unaff_R15 < (uint)(byte)((undefined *)register0x00000020)[-0x4e]) {
              if (*(long *)((undefined *)register0x00000020 + -0x150) !=
                  *(long *)((undefined *)register0x00000020 + -0x180)) goto code_r0x001040ce;
              unaff_RBP = *(ulong **)((undefined *)register0x00000020 + -0x1e8);
              unaff_R12 = *(undefined1 **)((undefined *)register0x00000020 + -0x1e0);
              param_1 = *(ulong **)((undefined *)register0x00000020 + -0x1d8);
              unaff_R15 = *(ulong **)((undefined *)register0x00000020 + -0x1d0);
            }
            else {
              unaff_RBP = *(ulong **)((undefined *)register0x00000020 + -0x1e8);
              unaff_R12 = *(undefined1 **)((undefined *)register0x00000020 + -0x1e0);
              param_1 = *(ulong **)((undefined *)register0x00000020 + -0x1d8);
              unaff_R15 = *(ulong **)((undefined *)register0x00000020 + -0x1d0);
code_r0x001043b8:
              if (bVar16) goto code_r0x00104230;
            }
code_r0x00104140:
            unaff_RBP = (ulong *)((long)unaff_RBP + (ulong)(byte)*unaff_R12);
            puVar6 = (ulong *)0x0;
            if (unaff_RBP < param_1) {
              puVar6 = unaff_RBP;
            }
            lVar11 = (-(ulong)(unaff_RBP < param_1) & 0xffffffffffffffc0) + 0x80;
            puVar12 = (ulong *)0x0;
            if (param_1 <= unaff_RBP) {
              puVar12 = unaff_RBP;
            }
            while (lVar11 = lVar11 + -1, lVar11 != -1) {
              while( true ) {
                puVar10 = (ulong *)((long)puVar12 * 2);
                puVar6 = (ulong *)((long)puVar6 * 2 | (ulong)puVar12 >> 0x3f);
                if ((puVar6 <= param_1) &&
                   ((puVar12 = puVar10, param_1 != puVar6 || (puVar10 < unaff_R15)))) break;
                lVar11 = lVar11 + -1;
                puVar12 = (ulong *)((long)puVar10 - (long)unaff_R15);
                puVar6 = (ulong *)((long)puVar6 + (-(ulong)(puVar10 < unaff_R15) - (long)param_1));
                if (lVar11 == -1) goto code_r0x0010419f;
              }
            }
code_r0x0010419f:
            *(ulong **)((undefined *)register0x00000020 + -0x198) = puVar12;
            puVar12 = *(ulong **)((undefined *)register0x00000020 + -0x218);
            *(ulong **)((undefined *)register0x00000020 + -400) = puVar6;
            *(undefined8 *)((undefined *)register0x00000020 + -0x240) = 0x1041d0;
            cVar4 = millerrabin2(unaff_R14,puVar12,
                                 *(undefined8 *)((undefined *)register0x00000020 + -0x208),
                                 *(undefined8 *)((undefined *)register0x00000020 + -0x200),
                                 (ulong)*(uint *)((undefined *)register0x00000020 + -0x1c8),
                                 *(undefined8 *)((undefined *)register0x00000020 + -0x230));
            if (cVar4 == '\0') {
              ((undefined *)register0x00000020)[-0x1c1] = 0;
              goto code_r0x00104230;
            }
            unaff_R12 = unaff_R12 + 1;
            if (unaff_R12 != primes_diff + 0x29c) goto code_r0x00103fb8;
            *(undefined8 *)((undefined *)register0x00000020 + -0x240) = 0x1041fb;
            uVar8 = func_0x001016c0(0,&UNK_0010b618,5);
            uVar14 = 0;
            *(undefined8 *)((undefined *)register0x00000020 + -0x240) = 0x104209;
            func_0x001018b0(0,0,uVar8);
            *(undefined8 *)((undefined *)register0x00000020 + -0x240) = 0x10420e;
            func_0x00101600();
code_r0x00104210:
            *(ulong *)((undefined *)register0x00000020 + -0x168) = uVar14;
            *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0;
          }
          if ((uint)(byte)((undefined *)register0x00000020)[-0x4e] <= (uint)unaff_R15) break;
code_r0x001040ce:
          unaff_R15 = (ulong *)((long)unaff_R15 + 1);
        } while( true );
      }
    }
code_r0x00104230:
    puVar6 = (ulong *)(*(ulong *)((undefined *)register0x00000020 + -0x40) ^
                      *(ulong *)(in_FS_OFFSET + 0x28));
    if (puVar6 == (ulong *)0x0) {
      return (ulong)(byte)((undefined *)register0x00000020)[-0x1c1];
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x240) = 0x1043ca;
    func_0x001016f0();
    unaff_RBX = param_1;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x238);
    param_2 = puVar12;
    param_1 = puVar6;
  } while( true );
}

