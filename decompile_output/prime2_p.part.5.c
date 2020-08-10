
ulong prime2_p_part_5(ulong *param_1,ulong *param_2)

{
  undefined4 uVar1;
  undefined auVar2 [16];
  byte bVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  ulong *unaff_RBX;
  undefined *puVar15;
  ulong *unaff_RBP;
  ulong *puVar16;
  ulong *puVar17;
  undefined1 *unaff_R12;
  undefined1 *unaff_R13;
  undefined *unaff_R14;
  ulong *unaff_R15;
  long in_FS_OFFSET;
  bool bVar18;
  
  puVar4 = (undefined *)register0x00000020;
  do {
    puVar15 = puVar4;
    *(ulong **)(puVar15 + -8) = unaff_R15;
    *(undefined **)(puVar15 + -0x10) = unaff_R14;
    *(undefined1 **)(puVar15 + -0x18) = unaff_R13;
    *(undefined1 **)(puVar15 + -0x20) = unaff_R12;
    *(ulong **)(puVar15 + -0x28) = unaff_RBP;
    *(ulong **)(puVar15 + -0x30) = unaff_RBX;
    *(undefined8 *)(puVar15 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    puVar13 = (ulong *)((long)param_1 - (ulong)(param_2 == (ulong *)0x0));
    *(ulong **)(puVar15 + -0x210) = puVar13;
    *(long *)(puVar15 + -0x220) = (long)param_2 + -1;
    if ((long)param_2 + -1 == 0) {
      lVar14 = 0;
      iVar6 = 0;
      if (puVar13 != (ulong *)0x0) {
        while (iVar6 = (int)lVar14, ((ulong)puVar13 >> lVar14 & 1) == 0) {
          lVar14 = lVar14 + 1;
        }
      }
      *(undefined8 *)(puVar15 + -0x1a0) = 0;
      *(ulong *)(puVar15 + -0x1a8) = (ulong)puVar13 >> ((byte)iVar6 & 0x3f);
      *(int *)(puVar15 + -0x1c8) = iVar6 + 0x40;
    }
    else {
      uVar8 = *(ulong *)(puVar15 + -0x220);
      lVar14 = 0;
      uVar1 = 0;
      if (uVar8 != 0) {
        while (uVar1 = (undefined4)lVar14, (uVar8 >> lVar14 & 1) == 0) {
          lVar14 = lVar14 + 1;
        }
      }
      bVar3 = (byte)uVar1;
      *(undefined4 *)(puVar15 + -0x1c8) = uVar1;
      *(ulong *)(puVar15 + -0x1a8) =
           *(ulong *)(puVar15 + -0x210) << (0x40 - bVar3 & 0x3f) | uVar8 >> (bVar3 & 0x3f);
      *(ulong *)(puVar15 + -0x1a0) = *(ulong *)(puVar15 + -0x210) >> (bVar3 & 0x3f);
    }
    uVar8 = (ulong)(byte)binvert_table[(uint)((ulong)param_2 >> 1) & 0x7f];
    lVar14 = uVar8 * 2 - uVar8 * uVar8 * (long)param_2;
    lVar14 = lVar14 * 2 - lVar14 * lVar14 * (long)param_2;
    *(long *)(puVar15 + -0x218) = lVar14 * 2 - lVar14 * lVar14 * (long)param_2;
    lVar14 = (ulong)(-(uint)(param_1 < (ulong *)0x2) & 0x40) + 0x40;
    puVar13 = (ulong *)(ulong)(param_1 >= (ulong *)0x2);
    puVar7 = (ulong *)(ulong)(param_1 < (ulong *)0x2);
    while (lVar14 = lVar14 + -1, lVar14 != -1) {
      while( true ) {
        puVar11 = (ulong *)((long)puVar7 * 2);
        puVar13 = (ulong *)((long)puVar13 * 2 | (ulong)puVar7 >> 0x3f);
        if ((puVar13 <= param_1) && ((puVar7 = puVar11, param_1 != puVar13 || (puVar11 < param_2))))
        break;
        lVar14 = lVar14 + -1;
        puVar7 = (ulong *)((long)puVar11 - (long)param_2);
        puVar13 = (ulong *)((long)puVar13 + (-(ulong)(puVar11 < param_2) - (long)param_1));
        if (lVar14 == -1) goto code_r0x00103e9b;
      }
    }
code_r0x00103e9b:
    *(ulong **)(puVar15 + -0x180) = puVar13;
    *(ulong **)(puVar15 + -0x188) = puVar7;
    puVar11 = (ulong *)((long)puVar7 * 2);
    puVar13 = (ulong *)((long)puVar13 * 2 + (ulong)CARRY8((ulong)puVar7,(ulong)puVar7));
    *(ulong **)(puVar15 + -400) = puVar13;
    *(ulong **)(puVar15 + -0x198) = puVar11;
    if ((param_1 < puVar13) || ((param_1 == puVar13 && (param_2 <= puVar11)))) {
      *(ulong *)(puVar15 + -400) = (long)puVar13 + (-(ulong)(puVar11 < param_2) - (long)param_1);
      *(ulong **)(puVar15 + -0x198) = (ulong *)((long)puVar11 - (long)param_2);
    }
    unaff_R14 = puVar15 + -0x178;
    puVar13 = *(ulong **)(puVar15 + -0x218);
    *(ulong **)(puVar15 + -0x178) = param_2;
    *(ulong **)(puVar15 + -0x170) = param_1;
    *(undefined **)(puVar15 + -0x230) = puVar15 + -0x188;
    *(undefined **)(puVar15 + -0x200) = puVar15 + -0x1a8;
    *(undefined **)(puVar15 + -0x208) = puVar15 + -0x198;
    *(undefined8 *)(puVar15 + -0x240) = 0x103f27;
    cVar5 = millerrabin2(unaff_R14,puVar13,puVar15 + -0x198,puVar15 + -0x1a8,
                         (ulong)*(uint *)(puVar15 + -0x1c8));
    puVar15[-0x1c1] = cVar5;
    unaff_RBX = param_1;
    unaff_R15 = param_2;
    if (cVar5 != '\0') {
      uVar8 = *(ulong *)(puVar15 + -0x210);
      unaff_R13 = *(undefined1 **)(puVar15 + -0x220);
      unaff_R12 = primes_diff;
      *(undefined **)(puVar15 + -0x1c0) = puVar15 + -0x148;
      *(undefined8 *)(puVar15 + -0x240) = 0x103f5f;
      puVar13 = (ulong *)unaff_R13;
      factor(uVar8,unaff_R13,puVar15 + -0x148);
      *(ulong *)(puVar15 + -0x1f0) = uVar8 >> 1;
      *(ulong *)(puVar15 + -0x1f8) = uVar8 << 0x3f | (ulong)unaff_R13 >> 1;
      unaff_RBP = (ulong *)0x2;
      *(undefined **)(puVar15 + -0x228) = puVar15 + -0x168;
      *(undefined **)(puVar15 + -0x1b8) = puVar15 + -0x158;
      *(undefined **)(puVar15 + -0x1b0) = puVar15 + -0x150;
code_r0x00103fb8:
      if (*(long *)(puVar15 + -0x140) != 0) {
        uVar8 = *(ulong *)(puVar15 + -0x148);
        puVar13 = *(ulong **)(puVar15 + -0x208);
        *(undefined8 *)(puVar15 + -0x160) = 0;
        uVar12 = (ulong)(byte)binvert_table[(uint)(uVar8 >> 1) & 0x7f];
        lVar14 = uVar12 * 2 - uVar12 * uVar12 * uVar8;
        lVar14 = lVar14 * 2 - lVar14 * lVar14 * uVar8;
        *(ulong *)(puVar15 + -0x168) =
             *(long *)(puVar15 + -0x220) * (lVar14 * 2 - lVar14 * lVar14 * uVar8);
        *(undefined8 *)(puVar15 + -0x240) = 0x10431a;
        lVar14 = powm2(*(undefined8 *)(puVar15 + -0x1b0),puVar13,*(undefined8 *)(puVar15 + -0x228),
                       unaff_R14,*(undefined8 *)(puVar15 + -0x218),*(undefined8 *)(puVar15 + -0x230)
                      );
        *(long *)(puVar15 + -0x158) = lVar14;
        if (lVar14 == *(long *)(puVar15 + -0x188)) {
          bVar18 = *(long *)(puVar15 + -0x150) != *(long *)(puVar15 + -0x180);
          if (puVar15[-0x4e] == '\0') goto code_r0x001043b8;
          if (*(long *)(puVar15 + -0x150) == *(long *)(puVar15 + -0x180)) goto code_r0x00104140;
          goto code_r0x00103fd5;
        }
      }
      if (puVar15[-0x4e] != '\0') {
code_r0x00103fd5:
        *(ulong **)(puVar15 + -0x1e8) = unaff_RBP;
        *(undefined1 **)(puVar15 + -0x1e0) = unaff_R12;
        *(ulong **)(puVar15 + -0x1d8) = unaff_RBX;
        *(ulong **)(puVar15 + -0x1d0) = unaff_R15;
        unaff_R12 = *(undefined1 **)(puVar15 + -0x218);
        unaff_R15 = (ulong *)0x1;
        unaff_RBP = (ulong *)(*(long *)(puVar15 + -0x1b8) + 8);
        unaff_R13 = *(undefined1 **)(puVar15 + -0x1c0);
        unaff_RBX = *(ulong **)(puVar15 + -0x208);
        do {
          uVar8 = ((ulong *)unaff_R13)[(long)((long)unaff_R15 + 1)];
          if (uVar8 == 2) {
            *(undefined8 *)(puVar15 + -0x168) = *(undefined8 *)(puVar15 + -0x1f8);
            *(undefined8 *)(puVar15 + -0x160) = *(undefined8 *)(puVar15 + -0x1f0);
          }
          else {
            uVar12 = (ulong)(byte)binvert_table[(uint)(uVar8 >> 1) & 0x7f];
            lVar14 = uVar12 * 2 - uVar12 * uVar12 * uVar8;
            lVar14 = lVar14 * 2 - lVar14 * lVar14 * uVar8;
            lVar14 = lVar14 * 2 - lVar14 * lVar14 * uVar8;
            uVar12 = *(long *)(puVar15 + -0x220) * lVar14;
            if (*(ulong *)(puVar15 + -0x210) < uVar8) goto code_r0x00104210;
            *(ulong *)(puVar15 + -0x168) = uVar12;
            *(ulong *)(puVar15 + -0x160) =
                 lVar14 * (*(ulong *)(puVar15 + -0x210) -
                          SUB168(ZEXT816(uVar12) * ZEXT816(uVar8) >> 0x40,0));
          }
          while( true ) {
            *(undefined8 *)(puVar15 + -0x240) = 0x1040ab;
            puVar13 = unaff_RBX;
            lVar14 = powm2(unaff_RBP,unaff_RBX,*(undefined8 *)(puVar15 + -0x228),unaff_R14,unaff_R12
                           ,*(undefined8 *)(puVar15 + -0x230));
            *(long *)(puVar15 + -0x158) = lVar14;
            if (lVar14 != *(long *)(puVar15 + -0x188)) break;
            puVar13 = (ulong *)(ulong)(byte)puVar15[-0x4e];
            bVar18 = *(long *)(puVar15 + -0x150) != *(long *)(puVar15 + -0x180);
            if ((uint)unaff_R15 < (uint)(byte)puVar15[-0x4e]) {
              if (*(long *)(puVar15 + -0x150) != *(long *)(puVar15 + -0x180)) goto code_r0x001040ce;
              unaff_RBP = *(ulong **)(puVar15 + -0x1e8);
              unaff_R12 = *(undefined1 **)(puVar15 + -0x1e0);
              unaff_RBX = *(ulong **)(puVar15 + -0x1d8);
              unaff_R15 = *(ulong **)(puVar15 + -0x1d0);
            }
            else {
              unaff_RBP = *(ulong **)(puVar15 + -0x1e8);
              unaff_R12 = *(undefined1 **)(puVar15 + -0x1e0);
              unaff_RBX = *(ulong **)(puVar15 + -0x1d8);
              unaff_R15 = *(ulong **)(puVar15 + -0x1d0);
code_r0x001043b8:
              if (bVar18) goto code_r0x00104230;
            }
code_r0x00104140:
            unaff_RBP = (ulong *)((long)unaff_RBP + (ulong)(byte)*unaff_R12);
            puVar7 = (ulong *)0x0;
            if (unaff_RBP < unaff_RBX) {
              puVar7 = unaff_RBP;
            }
            lVar14 = (-(ulong)(unaff_RBP < unaff_RBX) & 0xffffffffffffffc0) + 0x80;
            puVar13 = (ulong *)0x0;
            if (unaff_RBX <= unaff_RBP) {
              puVar13 = unaff_RBP;
            }
            while (lVar14 = lVar14 + -1, lVar14 != -1) {
              while( true ) {
                puVar11 = (ulong *)((long)puVar13 * 2);
                puVar7 = (ulong *)((long)puVar7 * 2 | (ulong)puVar13 >> 0x3f);
                if ((puVar7 <= unaff_RBX) &&
                   ((puVar13 = puVar11, unaff_RBX != puVar7 || (puVar11 < unaff_R15)))) break;
                lVar14 = lVar14 + -1;
                puVar13 = (ulong *)((long)puVar11 - (long)unaff_R15);
                puVar7 = (ulong *)((long)puVar7 + (-(ulong)(puVar11 < unaff_R15) - (long)unaff_RBX))
                ;
                if (lVar14 == -1) goto code_r0x0010419f;
              }
            }
code_r0x0010419f:
            *(ulong **)(puVar15 + -0x198) = puVar13;
            puVar13 = *(ulong **)(puVar15 + -0x218);
            *(ulong **)(puVar15 + -400) = puVar7;
            *(undefined8 *)(puVar15 + -0x240) = 0x1041d0;
            cVar5 = millerrabin2(unaff_R14,puVar13,*(undefined8 *)(puVar15 + -0x208),
                                 *(undefined8 *)(puVar15 + -0x200),
                                 (ulong)*(uint *)(puVar15 + -0x1c8),
                                 *(undefined8 *)(puVar15 + -0x230));
            if (cVar5 == '\0') {
              puVar15[-0x1c1] = 0;
              goto code_r0x00104230;
            }
            unaff_R12 = unaff_R12 + 1;
            if (unaff_R12 != primes_diff + 0x29c) goto code_r0x00103fb8;
            *(undefined8 *)(puVar15 + -0x240) = 0x1041fb;
            uVar9 = func_0x001016c0(0,&UNK_0010b618,5);
            uVar12 = 0;
            *(undefined8 *)(puVar15 + -0x240) = 0x104209;
            func_0x001018b0(0,0,uVar9);
            *(undefined8 *)(puVar15 + -0x240) = 0x10420e;
            func_0x00101600();
code_r0x00104210:
            *(ulong *)(puVar15 + -0x168) = uVar12;
            *(undefined8 *)(puVar15 + -0x160) = 0;
          }
          if ((uint)(byte)puVar15[-0x4e] <= (uint)unaff_R15) break;
code_r0x001040ce:
          unaff_R15 = (ulong *)((long)unaff_R15 + 1);
        } while( true );
      }
    }
code_r0x00104230:
    param_2 = puVar13;
    param_1 = (ulong *)(*(ulong *)(puVar15 + -0x40) ^ *(ulong *)(in_FS_OFFSET + 0x28));
    if (param_1 == (ulong *)0x0) {
      return (ulong)(byte)puVar15[-0x1c1];
    }
    *(undefined8 *)(puVar15 + -0x240) = 0x1043ca;
    func_0x001016f0();
    puVar4 = puVar15 + -0x238;
    if (param_1 == (ulong *)0x0) {
      if (param_2 < (ulong *)0x2) {
        return 0;
      }
      if (param_2 < (ulong *)0x17ded79) {
        return 1;
      }
      *(ulong **)(puVar15 + -0x240) = unaff_R15;
      *(undefined **)(puVar15 + -0x248) = unaff_R14;
      *(undefined1 **)(puVar15 + -0x250) = unaff_R13;
      *(undefined1 **)(puVar15 + -600) = unaff_R12;
      pbVar10 = (byte *)((long)param_2 - 1);
      *(ulong **)(puVar15 + -0x260) = unaff_RBP;
      *(ulong **)(puVar15 + -0x268) = unaff_RBX;
      *(undefined8 *)(puVar15 + -0x278) = *(undefined8 *)(in_FS_OFFSET + 0x28);
      iVar6 = 0;
      *(byte **)(puVar15 + -0x3b0) = pbVar10;
      if (((ulong)pbVar10 & 1) == 0) {
        do {
          pbVar10 = (byte *)((ulong)pbVar10 >> 1);
          iVar6 = iVar6 + 1;
        } while (((ulong)pbVar10 & 1) == 0);
        *(int *)(puVar15 + -0x39c) = iVar6;
      }
      else {
        pbVar10 = *(byte **)(puVar15 + -0x3b0);
        *(undefined4 *)(puVar15 + -0x39c) = 0;
      }
      iVar6 = 0x40;
      puVar17 = (ulong *)0x0;
      puVar11 = (ulong *)0x1;
      uVar8 = (ulong)(byte)binvert_table[(uint)((ulong)param_2 >> 1) & 0x7f];
      lVar14 = uVar8 * 2 - uVar8 * uVar8 * (long)param_2;
      lVar14 = lVar14 * 2 - lVar14 * lVar14 * (long)param_2;
      unaff_R14 = (undefined *)(lVar14 * 2 - lVar14 * lVar14 * (long)param_2);
      puVar7 = (ulong *)0x0;
      puVar13 = param_2;
      do {
        puVar16 = (ulong *)((ulong)puVar13 >> 1);
        puVar7 = (ulong *)((ulong)puVar7 >> 1 | (long)puVar13 << 0x3f);
        if ((puVar16 < puVar11) || ((puVar16 == puVar11 && (puVar7 <= puVar17)))) {
          bVar18 = puVar17 < puVar7;
          puVar17 = (ulong *)((long)puVar17 - (long)puVar7);
          puVar11 = (ulong *)((long)puVar11 + (-(ulong)bVar18 - (long)puVar16));
        }
        iVar6 = iVar6 + -1;
        puVar13 = puVar16;
      } while (iVar6 != 0);
      *(ulong **)(puVar15 + -0x3a8) = puVar17;
      puVar13 = (ulong *)((-(ulong)(puVar17 < (ulong *)((long)param_2 - (long)puVar17)) &
                          (ulong)param_2) + ((long)puVar17 * 2 - (long)param_2));
      *(undefined8 *)(puVar15 + -0x3b8) = 0x103b71;
      cVar5 = millerrabin(param_2,unaff_R14,puVar13,pbVar10,(ulong)*(uint *)(puVar15 + -0x39c),
                          puVar17);
      puVar15[-0x381] = cVar5;
      unaff_R12 = pbVar10;
      unaff_R15 = puVar13;
      if (cVar5 == '\0') {
code_r0x00103d00:
        puVar15[-0x381] = 0;
      }
      else {
        unaff_R13 = primes_diff;
        *(undefined **)(puVar15 + -0x390) = puVar15 + -0x380;
        *(undefined8 *)(puVar15 + -0x3b8) = 0x103b9c;
        factor(0,*(undefined8 *)(puVar15 + -0x3b0),puVar15 + -0x380);
        unaff_R12 = *(undefined1 **)(puVar15 + -0x3a8);
        *(byte **)(puVar15 + -0x398) = pbVar10;
        *(uint *)(puVar15 + -0x388) = (uint)(byte)puVar15[-0x286];
        unaff_R15 = (ulong *)(puVar15 + (ulong)((uint)(byte)puVar15[-0x286] - 1) * 8 + -0x370);
        unaff_RBP = (ulong *)0x2;
        while (*(int *)(puVar15 + -0x388) != 0) {
          *(ulong **)(puVar15 + -0x3a8) = unaff_RBP;
          puVar7 = (ulong *)(*(long *)(puVar15 + -0x390) + 0x10);
          do {
            uVar8 = *puVar7;
            *(undefined8 *)(puVar15 + -0x3b8) = 0x103c0e;
            pbVar10 = (byte *)powm(puVar13,*(ulong *)(puVar15 + -0x3b0) / uVar8,param_2);
            if (unaff_R15 == puVar7) goto code_r0x00103cb8;
            puVar7 = puVar7 + 1;
          } while (pbVar10 != unaff_R12);
          unaff_RBP = *(ulong **)(puVar15 + -0x3a8);
          while( true ) {
            unaff_RBP = (ulong *)((long)unaff_RBP + (ulong)(byte)*unaff_R13);
            auVar2 = ZEXT816(unaff_R12) * ZEXT816(unaff_RBP);
            puVar13 = SUB168(auVar2 >> 0x40,0);
            uVar8 = SUB168(auVar2,0);
            if (puVar13 == (ulong *)0x0) {
              uVar8 = SUB168((ZEXT816(0) << 0x40 | auVar2 & (undefined  [16])0xffffffffffffffff) %
                             ZEXT816(param_2),0);
            }
            else {
              if (param_2 <= puVar13) goto code_r0x00103d62;
              iVar6 = 0x40;
              uVar12 = 0;
              puVar7 = param_2;
              do {
                puVar11 = (ulong *)((ulong)puVar7 >> 1);
                uVar12 = uVar12 >> 1 | (long)puVar7 << 0x3f;
                if ((puVar11 < puVar13) || ((puVar11 == puVar13 && (uVar12 <= uVar8)))) {
                  bVar18 = uVar8 < uVar12;
                  uVar8 = uVar8 - uVar12;
                  puVar13 = (ulong *)((long)puVar13 + (-(ulong)bVar18 - (long)puVar11));
                }
                iVar6 = iVar6 + -1;
                puVar7 = puVar11;
              } while (iVar6 != 0);
            }
            *(ulong *)(puVar15 + -0x3a8) = uVar8;
            *(undefined8 *)(puVar15 + -0x3b8) = 0x103c6a;
            cVar5 = millerrabin(param_2,unaff_R14,uVar8,*(undefined8 *)(puVar15 + -0x398),
                                (ulong)*(uint *)(puVar15 + -0x39c),unaff_R12);
            if (cVar5 == '\0') goto code_r0x00103d00;
            unaff_R13 = (undefined1 *)((long)unaff_R13 + 1);
            puVar13 = *(ulong **)(puVar15 + -0x3a8);
            if (unaff_R13 != primes_diff + 0x29c) break;
            *(undefined8 *)(puVar15 + -0x3b8) = 0x103c9e;
            uVar9 = func_0x001016c0(0,&UNK_0010b618,5);
            *(undefined8 *)(puVar15 + -0x3b8) = 0x103cac;
            func_0x001018b0(0,0,uVar9);
            *(undefined8 *)(puVar15 + -0x3b8) = 0x103cb1;
            pbVar10 = (byte *)func_0x00101600();
code_r0x00103cb8:
            unaff_RBP = *(ulong **)(puVar15 + -0x3a8);
            if (pbVar10 != unaff_R12) goto code_r0x00103cd0;
          }
        }
      }
code_r0x00103cd0:
      param_2 = (ulong *)(*(ulong *)(puVar15 + -0x278) ^ *(ulong *)(in_FS_OFFSET + 0x28));
      if (param_2 == (ulong *)0x0) {
        return (ulong)(byte)puVar15[-0x381];
      }
      *(undefined8 *)(puVar15 + -0x3b8) = 0x103d62;
      func_0x001016f0();
code_r0x00103d62:
      puVar13 = (ulong *)&UNK_0010b424;
      param_1 = (ulong *)&UNK_0010b474;
      *(undefined8 *)(puVar15 + -0x3b8) = 0x103d81;
      func_0x00101750(&UNK_0010b474,&UNK_0010b424,0x4f4,&__PRETTY_FUNCTION___7209);
      unaff_RBX = param_2;
      puVar4 = puVar15 + -0x3b0;
      param_2 = puVar13;
    }
  } while( true );
}

