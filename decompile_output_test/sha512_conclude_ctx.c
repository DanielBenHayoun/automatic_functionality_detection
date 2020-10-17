
void sha512_conclude_ctx(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *unaff_RBX;
  undefined8 uVar12;
  ulong unaff_RBP;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong unaff_R12;
  undefined8 uVar26;
  ulong uVar27;
  ulong unaff_R13;
  ulong uVar28;
  long unaff_R14;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  
  while( true ) {
    *(ulong *)((undefined *)register0x00000020 + -8) = unaff_R12;
    *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_RBP;
    *(undefined8 **)((undefined *)register0x00000020 + -0x18) = unaff_RBX;
    uVar18 = param_1[10];
    lVar5 = param_1[9];
    uVar13 = (-(ulong)(uVar18 < 0x70) & 0xffffffffffffff80) + 0x100;
    uVar6 = param_1[8];
    uVar7 = uVar18 + param_1[8];
    param_1[8] = uVar7;
    if (CARRY8(uVar18,uVar6) != false) {
      lVar5 = lVar5 + 1;
      param_1[9] = lVar5;
    }
    uVar6 = lVar5 << 3;
    puVar1 = param_1 + 0xb;
    uVar8 = uVar7 * 8;
    param_1[(-(ulong)(uVar18 < 0x70) & 0xfffffffffffffff0) + 0x29] =
         uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
         (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
         (uVar6 & 0xff00) << 0x28 | (uVar6 | uVar7 >> 0x3d) << 0x38;
    param_1[(-(ulong)(uVar18 < 0x70) & 0xfffffffffffffff0) + 0x2a] =
         uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
         (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
         (uVar8 & 0xff00) << 0x28 | uVar7 << 0x3b;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = 0x1072ee;
    func_0x00101770((long)puVar1 + uVar18,fillbuf,(uVar13 - uVar18) + -0x10);
    uVar12 = *(undefined8 *)((undefined *)register0x00000020 + -0x18);
    uVar14 = *(undefined8 *)((undefined *)register0x00000020 + -0x10);
    uVar26 = *(undefined8 *)((undefined *)register0x00000020 + -8);
    *(undefined8 **)((undefined *)register0x00000020 + -8) = unaff_R15;
    *(long *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
    *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = uVar26;
    *(undefined8 *)((undefined *)register0x00000020 + -0x28) = uVar14;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = uVar12;
    unaff_RBP = param_1[1];
    unaff_R13 = param_1[2];
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    uVar18 = param_1[3];
    uVar6 = param_1[4];
    unaff_R12 = param_1[5];
    uVar7 = param_1[7];
    uVar10 = param_1[8];
    uVar8 = param_1[8];
    *(undefined8 **)((undefined *)register0x00000020 + -0x130) = puVar1;
    puVar17 = (undefined8 *)param_1[6];
    *(undefined8 **)((undefined *)register0x00000020 + -0xd8) = param_1;
    *(undefined8 **)((undefined *)register0x00000020 + -0xe0) =
         (undefined8 *)(uVar13 + (long)puVar1);
    puVar4 = (undefined8 *)*param_1;
    param_1[8] = uVar13 + uVar8;
    param_1[9] = param_1[9] + (ulong)CARRY8(uVar13,uVar10);
    unaff_R15 = puVar1;
    if (puVar1 < (undefined8 *)(uVar13 + (long)puVar1)) {
      *(ulong *)((undefined *)register0x00000020 + -0xf8) = uVar7;
      *(undefined8 **)((undefined *)register0x00000020 + -0x100) = puVar17;
      *(ulong *)((undefined *)register0x00000020 + -0x108) = unaff_R12;
      *(ulong *)((undefined *)register0x00000020 + -0x110) = uVar6;
      *(ulong *)((undefined *)register0x00000020 + -0x118) = uVar18;
      *(ulong *)((undefined *)register0x00000020 + -0x120) = unaff_R13;
      *(ulong *)((undefined *)register0x00000020 + -0x128) = unaff_RBP;
      *(undefined8 **)((undefined *)register0x00000020 + -0xe8) = puVar4;
      *(undefined **)((undefined *)register0x00000020 + -0xd0) =
           (undefined *)register0x00000020 + -200;
      do {
        lVar5 = *(long *)((undefined *)register0x00000020 + -0x130);
        lVar2 = *(long *)((undefined *)register0x00000020 + -0xd0);
        lVar9 = 0;
        do {
          uVar13 = *(ulong *)(lVar5 + lVar9);
          *(ulong *)(lVar2 + lVar9) =
               uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
               (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
               (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28
               | uVar13 << 0x38;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0x80);
        uVar8 = *(ulong *)((undefined *)register0x00000020 + -0xc0);
        *(long *)((undefined *)register0x00000020 + -0x130) =
             *(long *)((undefined *)register0x00000020 + -0x130) + 0x80;
        lVar5 = uVar7 + *(long *)((undefined *)register0x00000020 + -200) + 0x428a2f98d728ae22 +
                ((uVar6 << 0x17 | uVar6 >> 0x29) ^
                (uVar6 >> 0xe | uVar6 << 0x32) ^ (uVar6 >> 0x12 | uVar6 << 0x2e)) +
                ((unaff_R12 ^ (ulong)puVar17) & uVar6 ^ (ulong)puVar17);
        uVar18 = uVar18 + lVar5;
        uVar10 = (((ulong)puVar4 | unaff_RBP) & unaff_R13 | (ulong)puVar4 & unaff_RBP) +
                 (((long)puVar4 << 0x1e | (ulong)puVar4 >> 0x22) ^
                  ((ulong)puVar4 >> 0x1c | (long)puVar4 << 0x24) ^
                 ((long)puVar4 << 0x19 | (ulong)puVar4 >> 0x27)) + lVar5;
        lVar5 = (long)puVar17 +
                ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                ((uVar6 ^ unaff_R12) & uVar18 ^ unaff_R12) + uVar8 + 0x7137449123ef65cd;
        uVar7 = lVar5 + unaff_R13;
        uVar24 = ((uVar10 | (ulong)puVar4) & unaff_RBP | uVar10 & (ulong)puVar4) +
                 ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
                 (uVar10 * 0x2000000 | uVar10 >> 0x27)) + lVar5;
        lVar5 = ((uVar7 * 0x800000 | uVar7 >> 0x29) ^
                (uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32)) +
                *(long *)((undefined *)register0x00000020 + -0xb8) + -0x4a3f043013b2c4d1 + unaff_R12
                + ((uVar18 ^ uVar6) & uVar7 ^ uVar6);
        uVar13 = lVar5 + unaff_RBP;
        uVar11 = ((uVar10 | uVar24) & (ulong)puVar4 | uVar10 & uVar24) +
                 ((uVar24 * 0x40000000 | uVar24 >> 0x22) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
                 (uVar24 * 0x2000000 | uVar24 >> 0x27)) + lVar5;
        lVar5 = ((uVar13 * 0x800000 | uVar13 >> 0x29) ^
                (uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32)) +
                ((uVar18 ^ uVar7) & uVar13 ^ uVar18) +
                uVar6 + *(long *)((undefined *)register0x00000020 + -0xb0) + -0x164a245a7e762444;
        uVar6 = lVar5 + (long)puVar4;
        uVar22 = ((uVar24 | uVar11) & uVar10 | uVar24 & uVar11) +
                 ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                 (uVar11 * 0x2000000 | uVar11 >> 0x27)) + lVar5;
        lVar5 = ((uVar6 * 0x800000 | uVar6 >> 0x29) ^
                (uVar6 >> 0x12 | uVar6 << 0x2e) ^ (uVar6 >> 0xe | uVar6 << 0x32)) +
                uVar18 + *(long *)((undefined *)register0x00000020 + -0xa8) + 0x3956c25bf348b538 +
                ((uVar7 ^ uVar13) & uVar6 ^ uVar7);
        uVar10 = uVar10 + lVar5;
        uVar20 = ((uVar11 | uVar22) & uVar24 | uVar11 & uVar22) +
                 ((uVar22 * 0x40000000 | uVar22 >> 0x22) ^ (uVar22 >> 0x1c | uVar22 << 0x24) ^
                 (uVar22 * 0x2000000 | uVar22 >> 0x27)) + lVar5;
        lVar5 = ((uVar10 * 0x800000 | uVar10 >> 0x29) ^
                (uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32)) +
                ((uVar13 ^ uVar6) & uVar10 ^ uVar13) +
                uVar7 + *(long *)((undefined *)register0x00000020 + -0xa0) + 0x59f111f1b605d019;
        uVar24 = uVar24 + lVar5;
        uVar18 = ((uVar22 | uVar20) & uVar11 | uVar22 & uVar20) +
                 ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar5;
        lVar5 = ((uVar24 * 0x800000 | uVar24 >> 0x29) ^
                (uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32)) +
                ((uVar6 ^ uVar10) & uVar24 ^ uVar6) +
                uVar13 + *(long *)((undefined *)register0x00000020 + -0x98) + -0x6dc07d5b50e6b065;
        uVar11 = uVar11 + lVar5;
        uVar19 = ((uVar20 | uVar18) & uVar22 | uVar20 & uVar18) +
                 ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar5;
        lVar5 = ((uVar11 * 0x800000 | uVar11 >> 0x29) ^
                (uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32)) +
                ((uVar10 ^ uVar24) & uVar11 ^ uVar10) +
                uVar6 + *(long *)((undefined *)register0x00000020 + -0x90) + -0x54e3a12a25927ee8;
        uVar22 = uVar22 + lVar5;
        uVar16 = ((uVar18 | uVar19) & uVar20 | uVar18 & uVar19) +
                 ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
                 (uVar19 * 0x2000000 | uVar19 >> 0x27)) + lVar5;
        lVar5 = ((uVar22 * 0x800000 | uVar22 >> 0x29) ^
                (uVar22 >> 0x12 | uVar22 << 0x2e) ^ (uVar22 >> 0xe | uVar22 << 0x32)) +
                ((uVar24 ^ uVar11) & uVar22 ^ uVar24) +
                uVar10 + *(long *)((undefined *)register0x00000020 + -0x88) + -0x27f855675cfcfdbe;
        uVar20 = uVar20 + lVar5;
        uVar13 = ((uVar19 | uVar16) & uVar18 | uVar19 & uVar16) +
                 ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                 (uVar16 * 0x2000000 | uVar16 >> 0x27)) + lVar5;
        lVar5 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
                (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
                uVar24 + *(long *)((undefined *)register0x00000020 + -0x80) + 0x12835b0145706fbe +
                ((uVar11 ^ uVar22) & uVar20 ^ uVar11);
        uVar18 = uVar18 + lVar5;
        uVar6 = ((uVar16 | uVar13) & uVar19 | uVar16 & uVar13) +
                ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24) ^
                (uVar13 * 0x2000000 | uVar13 >> 0x27)) + lVar5;
        lVar5 = ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                uVar11 + *(long *)((undefined *)register0x00000020 + -0x78) + 0x243185be4ee4b28c +
                ((uVar22 ^ uVar20) & uVar18 ^ uVar22);
        uVar19 = uVar19 + lVar5;
        uVar7 = ((uVar13 | uVar6) & uVar16 | uVar13 & uVar6) +
                ((uVar6 * 0x40000000 | uVar6 >> 0x22) ^ (uVar6 >> 0x1c | uVar6 << 0x24) ^
                (uVar6 * 0x2000000 | uVar6 >> 0x27)) + lVar5;
        lVar5 = ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
                (uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32)) +
                ((uVar20 ^ uVar18) & uVar19 ^ uVar20) +
                uVar22 + *(long *)((undefined *)register0x00000020 + -0x70) + 0x550c7dc3d5ffb4e2;
        uVar16 = uVar16 + lVar5;
        uVar22 = ((uVar6 | uVar7) & uVar13 | uVar6 & uVar7) +
                 ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
                 (uVar7 * 0x2000000 | uVar7 >> 0x27)) + lVar5;
        lVar5 = ((uVar16 * 0x800000 | uVar16 >> 0x29) ^
                (uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32)) +
                ((uVar18 ^ uVar19) & uVar16 ^ uVar18) +
                uVar20 + *(long *)((undefined *)register0x00000020 + -0x68) + 0x72be5d74f27b896f;
        uVar13 = uVar13 + lVar5;
        uVar20 = ((uVar7 | uVar22) & uVar6 | uVar7 & uVar22) +
                 ((uVar22 * 0x40000000 | uVar22 >> 0x22) ^ (uVar22 >> 0x1c | uVar22 << 0x24) ^
                 (uVar22 * 0x2000000 | uVar22 >> 0x27)) + lVar5;
        lVar5 = ((uVar13 * 0x800000 | uVar13 >> 0x29) ^
                (uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32)) +
                ((uVar19 ^ uVar16) & uVar13 ^ uVar19) +
                uVar18 + *(long *)((undefined *)register0x00000020 + -0x60) + -0x7f214e01c4e9694f;
        uVar6 = uVar6 + lVar5;
        uVar18 = ((uVar22 | uVar20) & uVar7 | uVar22 & uVar20) +
                 ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar5;
        lVar5 = ((uVar6 * 0x800000 | uVar6 >> 0x29) ^
                (uVar6 >> 0x12 | uVar6 << 0x2e) ^ (uVar6 >> 0xe | uVar6 << 0x32)) +
                uVar19 + *(long *)((undefined *)register0x00000020 + -0x58) + -0x6423f958da38edcb +
                ((uVar16 ^ uVar13) & uVar6 ^ uVar16);
        uVar7 = uVar7 + lVar5;
        uVar11 = ((uVar20 | uVar18) & uVar22 | uVar20 & uVar18) +
                 ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar5;
        lVar5 = ((uVar7 * 0x800000 | uVar7 >> 0x29) ^
                (uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32)) +
                uVar16 + *(long *)((undefined *)register0x00000020 + -0x50) + -0x3e640e8b3096d96c +
                ((uVar13 ^ uVar6) & uVar7 ^ uVar13);
        uVar22 = uVar22 + lVar5;
        uVar19 = ((uVar18 | uVar11) & uVar20 | uVar18 & uVar11) +
                 ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                 (uVar11 * 0x2000000 | uVar11 >> 0x27)) + lVar5;
        uVar10 = ((uVar8 >> 8 | uVar8 << 0x38) ^ (uVar8 >> 1 | (ulong)((uVar8 & 1) != 0) << 0x3f) ^
                 uVar8 >> 7) +
                 (*(ulong *)((undefined *)register0x00000020 + -0x58) >> 6 ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x58) << 3 |
                 *(ulong *)((undefined *)register0x00000020 + -0x58) >> 0x3d) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x58) >> 0x13 |
                 *(ulong *)((undefined *)register0x00000020 + -0x58) << 0x2d)) +
                 *(long *)((undefined *)register0x00000020 + -200) +
                 *(long *)((undefined *)register0x00000020 + -0x80);
        lVar5 = ((uVar22 * 0x800000 | uVar22 >> 0x29) ^
                (uVar22 >> 0x12 | uVar22 << 0x2e) ^ (uVar22 >> 0xe | uVar22 << 0x32)) +
                uVar13 + uVar10 + 0xe49b69c19ef14ad2 + ((uVar6 ^ uVar7) & uVar22 ^ uVar6);
        uVar20 = uVar20 + lVar5;
        uVar16 = ((uVar11 | uVar19) & uVar18 | uVar11 & uVar19) +
                 ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
                 (uVar19 * 0x2000000 | uVar19 >> 0x27)) + lVar5;
        uVar25 = ((*(ulong *)((undefined *)register0x00000020 + -0xb8) >> 8 |
                  *(ulong *)((undefined *)register0x00000020 + -0xb8) << 0x38) ^
                  (*(ulong *)((undefined *)register0x00000020 + -0xb8) >> 1 |
                  (ulong)((*(ulong *)((undefined *)register0x00000020 + -0xb8) & 1) != 0) << 0x3f) ^
                 *(ulong *)((undefined *)register0x00000020 + -0xb8) >> 7) +
                 (*(ulong *)((undefined *)register0x00000020 + -0x50) >> 6 ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x50) << 3 |
                 *(ulong *)((undefined *)register0x00000020 + -0x50) >> 0x3d) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x50) >> 0x13 |
                 *(ulong *)((undefined *)register0x00000020 + -0x50) << 0x2d)) +
                 *(long *)((undefined *)register0x00000020 + -0x78) + uVar8;
        lVar5 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
                (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
                uVar6 + uVar25 + 0xefbe4786384f25e3 + ((uVar7 ^ uVar22) & uVar20 ^ uVar7);
        uVar18 = uVar18 + lVar5;
        uVar8 = ((uVar19 | uVar16) & uVar11 | uVar19 & uVar16) +
                ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                (uVar16 * 0x2000000 | uVar16 >> 0x27)) + lVar5;
        uVar23 = ((uVar10 * 8 | uVar10 >> 0x3d) ^ (uVar10 >> 0x13 | uVar10 << 0x2d) ^ uVar10 >> 6) +
                 (*(ulong *)((undefined *)register0x00000020 + -0xb0) >> 7 ^
                 (*(ulong *)((undefined *)register0x00000020 + -0xb0) >> 8 |
                 *(ulong *)((undefined *)register0x00000020 + -0xb0) << 0x38) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0xb0) >> 1 |
                 (ulong)((*(ulong *)((undefined *)register0x00000020 + -0xb0) & 1) != 0) << 0x3f)) +
                 *(long *)((undefined *)register0x00000020 + -0xb8) +
                 *(long *)((undefined *)register0x00000020 + -0x70);
        lVar5 = ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                uVar7 + uVar23 + 0xfc19dc68b8cd5b5 + ((uVar22 ^ uVar20) & uVar18 ^ uVar22);
        uVar11 = uVar11 + lVar5;
        uVar6 = ((uVar16 | uVar8) & uVar19 | uVar16 & uVar8) +
                ((uVar8 * 0x40000000 | uVar8 >> 0x22) ^ (uVar8 >> 0x1c | uVar8 << 0x24) ^
                (uVar8 * 0x2000000 | uVar8 >> 0x27)) + lVar5;
        uVar21 = ((uVar25 * 8 | uVar25 >> 0x3d) ^ (uVar25 >> 0x13 | uVar25 << 0x2d) ^ uVar25 >> 6) +
                 (*(ulong *)((undefined *)register0x00000020 + -0xa8) >> 7 ^
                 (*(ulong *)((undefined *)register0x00000020 + -0xa8) >> 8 |
                 *(ulong *)((undefined *)register0x00000020 + -0xa8) << 0x38) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0xa8) >> 1 |
                 (ulong)((*(ulong *)((undefined *)register0x00000020 + -0xa8) & 1) != 0) << 0x3f)) +
                 *(long *)((undefined *)register0x00000020 + -0xb0) +
                 *(long *)((undefined *)register0x00000020 + -0x68);
        lVar5 = ((uVar11 * 0x800000 | uVar11 >> 0x29) ^
                (uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32)) +
                uVar22 + uVar21 + 0x240ca1cc77ac9c65 + ((uVar20 ^ uVar18) & uVar11 ^ uVar20);
        uVar19 = uVar19 + lVar5;
        uVar7 = ((uVar8 | uVar6) & uVar16 | uVar8 & uVar6) +
                ((uVar6 * 0x40000000 | uVar6 >> 0x22) ^ (uVar6 >> 0x1c | uVar6 << 0x24) ^
                (uVar6 * 0x2000000 | uVar6 >> 0x27)) + lVar5;
        lVar5 = (*(ulong *)((undefined *)register0x00000020 + -0xa0) >> 7 ^
                (*(ulong *)((undefined *)register0x00000020 + -0xa0) >> 1 |
                (ulong)((*(ulong *)((undefined *)register0x00000020 + -0xa0) & 1) != 0) << 0x3f) ^
                (*(ulong *)((undefined *)register0x00000020 + -0xa0) >> 8 |
                *(ulong *)((undefined *)register0x00000020 + -0xa0) << 0x38)) +
                *(long *)((undefined *)register0x00000020 + -0xa8) +
                *(long *)((undefined *)register0x00000020 + -0x60) +
                ((uVar23 * 8 | uVar23 >> 0x3d) ^ (uVar23 >> 0x13 | uVar23 << 0x2d) ^ uVar23 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x178) = lVar5;
        lVar5 = ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
                (uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32)) +
                uVar20 + lVar5 + 0x2de92c6f592b0275 + ((uVar18 ^ uVar11) & uVar19 ^ uVar18);
        uVar16 = uVar16 + lVar5;
        uVar13 = ((uVar6 | uVar7) & uVar8 | uVar6 & uVar7) +
                 ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
                 (uVar7 * 0x2000000 | uVar7 >> 0x27)) + lVar5;
        *(ulong *)((undefined *)register0x00000020 + -400) =
             (*(ulong *)((undefined *)register0x00000020 + -0x98) >> 7 ^
             (*(ulong *)((undefined *)register0x00000020 + -0x98) >> 1 |
             (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x98) & 1) != 0) << 0x3f) ^
             (*(ulong *)((undefined *)register0x00000020 + -0x98) >> 8 |
             *(ulong *)((undefined *)register0x00000020 + -0x98) << 0x38)) +
             *(long *)((undefined *)register0x00000020 + -0xa0) +
             *(long *)((undefined *)register0x00000020 + -0x58) +
             ((uVar21 * 8 | uVar21 >> 0x3d) ^ (uVar21 >> 0x13 | uVar21 << 0x2d) ^ uVar21 >> 6);
        lVar5 = ((uVar16 * 0x800000 | uVar16 >> 0x29) ^
                (uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32)) +
                ((uVar11 ^ uVar19) & uVar16 ^ uVar11) +
                uVar18 + *(long *)((undefined *)register0x00000020 + -400) + 0x4a7484aa6ea6e483;
        uVar8 = uVar8 + lVar5;
        uVar20 = ((uVar7 | uVar13) & uVar6 | uVar7 & uVar13) +
                 ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24) ^
                 (uVar13 * 0x2000000 | uVar13 >> 0x27)) + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        *(ulong *)((undefined *)register0x00000020 + -0x188) =
             (*(ulong *)((undefined *)register0x00000020 + -0x90) >> 7 ^
             (*(ulong *)((undefined *)register0x00000020 + -0x90) >> 1 |
             (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x90) & 1) != 0) << 0x3f) ^
             (*(ulong *)((undefined *)register0x00000020 + -0x90) >> 8 |
             *(ulong *)((undefined *)register0x00000020 + -0x90) << 0x38)) +
             *(long *)((undefined *)register0x00000020 + -0x98) +
             *(long *)((undefined *)register0x00000020 + -0x50) +
             ((uVar18 << 3 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x178) >> 6);
        lVar5 = ((uVar8 * 0x800000 | uVar8 >> 0x29) ^
                (uVar8 >> 0x12 | uVar8 << 0x2e) ^ (uVar8 >> 0xe | uVar8 << 0x32)) +
                ((uVar19 ^ uVar16) & uVar8 ^ uVar19) +
                uVar11 + *(long *)((undefined *)register0x00000020 + -0x188) + 0x5cb0a9dcbd41fbd4;
        uVar6 = uVar6 + lVar5;
        uVar22 = ((uVar13 | uVar20) & uVar7 | uVar13 & uVar20) +
                 ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -400);
        *(ulong *)((undefined *)register0x00000020 + -0x1b8) =
             ((*(ulong *)((undefined *)register0x00000020 + -0x88) >> 8 |
              *(ulong *)((undefined *)register0x00000020 + -0x88) << 0x38) ^
              (*(ulong *)((undefined *)register0x00000020 + -0x88) >> 1 |
              (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x88) & 1) != 0) << 0x3f) ^
             *(ulong *)((undefined *)register0x00000020 + -0x88) >> 7) +
             *(long *)((undefined *)register0x00000020 + -0x90) + uVar10 +
             ((uVar18 << 3 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -400) >> 6);
        lVar5 = ((uVar6 * 0x800000 | uVar6 >> 0x29) ^
                (uVar6 >> 0x12 | uVar6 << 0x2e) ^ (uVar6 >> 0xe | uVar6 << 0x32)) +
                ((uVar16 ^ uVar8) & uVar6 ^ uVar16) +
                uVar19 + *(long *)((undefined *)register0x00000020 + -0x1b8) + 0x76f988da831153b5;
        uVar7 = uVar7 + lVar5;
        uVar19 = ((uVar20 | uVar22) & uVar13 | uVar20 & uVar22) +
                 ((uVar22 * 0x40000000 | uVar22 >> 0x22) ^ (uVar22 >> 0x1c | uVar22 << 0x24) ^
                 (uVar22 * 0x2000000 | uVar22 >> 0x27)) + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        *(ulong *)((undefined *)register0x00000020 + -0x180) =
             ((*(ulong *)((undefined *)register0x00000020 + -0x80) >> 8 |
              *(ulong *)((undefined *)register0x00000020 + -0x80) << 0x38) ^
              (*(ulong *)((undefined *)register0x00000020 + -0x80) >> 1 |
              (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x80) & 1) != 0) << 0x3f) ^
             *(ulong *)((undefined *)register0x00000020 + -0x80) >> 7) +
             *(long *)((undefined *)register0x00000020 + -0x88) + uVar25 +
             ((uVar18 << 3 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x188) >> 6);
        lVar5 = ((uVar7 * 0x800000 | uVar7 >> 0x29) ^
                (uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32)) +
                ((uVar8 ^ uVar6) & uVar7 ^ uVar8) +
                uVar16 + *(long *)((undefined *)register0x00000020 + -0x180) + -0x67c1aead11992055;
        uVar13 = uVar13 + lVar5;
        uVar11 = ((uVar22 | uVar19) & uVar20 | uVar22 & uVar19) +
                 ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
                 (uVar19 * 0x2000000 | uVar19 >> 0x27)) + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        *(ulong *)((undefined *)register0x00000020 + -0x1b0) =
             ((*(ulong *)((undefined *)register0x00000020 + -0x78) >> 8 |
              *(ulong *)((undefined *)register0x00000020 + -0x78) << 0x38) ^
              (*(ulong *)((undefined *)register0x00000020 + -0x78) >> 1 |
              (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x78) & 1) != 0) << 0x3f) ^
             *(ulong *)((undefined *)register0x00000020 + -0x78) >> 7) +
             *(long *)((undefined *)register0x00000020 + -0x80) + uVar23 +
             ((uVar18 << 3 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x1b8) >> 6);
        lVar5 = ((uVar13 * 0x800000 | uVar13 >> 0x29) ^
                (uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32)) +
                ((uVar6 ^ uVar7) & uVar13 ^ uVar6) +
                uVar8 + *(long *)((undefined *)register0x00000020 + -0x1b0) + -0x57ce3992d24bcdf0;
        uVar20 = uVar20 + lVar5;
        uVar16 = ((uVar19 | uVar11) & uVar22 | uVar19 & uVar11) +
                 ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                 (uVar11 * 0x2000000 | uVar11 >> 0x27)) + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        *(ulong *)((undefined *)register0x00000020 + -0x1a8) =
             ((*(ulong *)((undefined *)register0x00000020 + -0x70) >> 8 |
              *(ulong *)((undefined *)register0x00000020 + -0x70) << 0x38) ^
              (*(ulong *)((undefined *)register0x00000020 + -0x70) >> 1 |
              (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x70) & 1) != 0) << 0x3f) ^
             *(ulong *)((undefined *)register0x00000020 + -0x70) >> 7) +
             *(long *)((undefined *)register0x00000020 + -0x78) + uVar21 +
             ((uVar18 << 3 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x180) >> 6);
        lVar5 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
                (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
                ((uVar7 ^ uVar13) & uVar20 ^ uVar7) +
                uVar6 + *(long *)((undefined *)register0x00000020 + -0x1a8) + -0x4ffcd8376704dec1;
        uVar22 = uVar22 + lVar5;
        uVar18 = ((uVar11 | uVar16) & uVar19 | uVar11 & uVar16) +
                 ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                 (uVar16 * 0x2000000 | uVar16 >> 0x27)) + lVar5;
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -0x1b0);
        lVar5 = ((*(ulong *)((undefined *)register0x00000020 + -0x68) >> 8 |
                 *(ulong *)((undefined *)register0x00000020 + -0x68) << 0x38) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x68) >> 1 |
                 (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x68) & 1) != 0) << 0x3f) ^
                *(ulong *)((undefined *)register0x00000020 + -0x68) >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x70) +
                *(long *)((undefined *)register0x00000020 + -0x178) +
                ((uVar6 << 3 | uVar6 >> 0x3d) ^ (uVar6 >> 0x13 | uVar6 << 0x2d) ^
                *(ulong *)((undefined *)register0x00000020 + -0x1b0) >> 6);
        *(long *)((undefined *)register0x00000020 + -0x170) = lVar5;
        lVar5 = ((uVar22 * 0x800000 | uVar22 >> 0x29) ^
                (uVar22 >> 0x12 | uVar22 << 0x2e) ^ (uVar22 >> 0xe | uVar22 << 0x32)) +
                ((uVar13 ^ uVar20) & uVar22 ^ uVar13) + uVar7 + lVar5 + -0x40a680384110f11c;
        uVar19 = uVar19 + lVar5;
        uVar6 = ((uVar16 | uVar18) & uVar11 | uVar16 & uVar18) +
                ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        *(ulong *)((undefined *)register0x00000020 + -0x1a0) =
             ((*(ulong *)((undefined *)register0x00000020 + -0x60) >> 8 |
              *(ulong *)((undefined *)register0x00000020 + -0x60) << 0x38) ^
              (*(ulong *)((undefined *)register0x00000020 + -0x60) >> 1 |
              (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x60) & 1) != 0) << 0x3f) ^
             *(ulong *)((undefined *)register0x00000020 + -0x60) >> 7) +
             *(long *)((undefined *)register0x00000020 + -0x68) +
             *(long *)((undefined *)register0x00000020 + -400) +
             ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x1a8) >> 6);
        lVar5 = ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
                (uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32)) +
                ((uVar20 ^ uVar22) & uVar19 ^ uVar20) +
                uVar13 + *(long *)((undefined *)register0x00000020 + -0x1a0) + -0x391ff40cc257703e;
        uVar11 = uVar11 + lVar5;
        uVar15 = ((uVar18 | uVar6) & uVar16 | uVar18 & uVar6) +
                 ((uVar6 * 0x40000000 | uVar6 >> 0x22) ^ (uVar6 >> 0x1c | uVar6 << 0x24) ^
                 (uVar6 * 0x2000000 | uVar6 >> 0x27)) + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        lVar5 = ((*(ulong *)((undefined *)register0x00000020 + -0x58) >> 8 |
                 *(ulong *)((undefined *)register0x00000020 + -0x58) << 0x38) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x58) >> 1 |
                 (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x58) & 1) != 0) << 0x3f) ^
                *(ulong *)((undefined *)register0x00000020 + -0x58) >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x60) +
                *(long *)((undefined *)register0x00000020 + -0x188) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^
                *(ulong *)((undefined *)register0x00000020 + -0x170) >> 6);
        *(long *)((undefined *)register0x00000020 + -0x198) = lVar5;
        lVar5 = ((uVar11 * 0x800000 | uVar11 >> 0x29) ^
                (uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32)) +
                uVar20 + lVar5 + -0x2a586eb86cf558db + ((uVar22 ^ uVar19) & uVar11 ^ uVar22);
        uVar16 = uVar16 + lVar5;
        uVar20 = ((uVar6 | uVar15) & uVar18 | uVar6 & uVar15) +
                 ((uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
                 (uVar15 * 0x2000000 | uVar15 >> 0x27)) + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x1a0);
        lVar5 = ((*(ulong *)((undefined *)register0x00000020 + -0x50) >> 8 |
                 *(ulong *)((undefined *)register0x00000020 + -0x50) << 0x38) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x50) >> 1 |
                 (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x50) & 1) != 0) << 0x3f) ^
                *(ulong *)((undefined *)register0x00000020 + -0x50) >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x58) +
                *(long *)((undefined *)register0x00000020 + -0x1b8) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^
                *(ulong *)((undefined *)register0x00000020 + -0x1a0) >> 6);
        *(long *)((undefined *)register0x00000020 + -0x160) = lVar5;
        lVar5 = ((uVar16 * 0x800000 | uVar16 >> 0x29) ^
                (uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32)) +
                uVar22 + lVar5 + 0x6ca6351e003826f + ((uVar19 ^ uVar11) & uVar16 ^ uVar19);
        uVar18 = uVar18 + lVar5;
        uVar22 = ((uVar15 | uVar20) & uVar6 | uVar15 & uVar20) +
                 ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x198);
        *(ulong *)((undefined *)register0x00000020 + -0x168) =
             ((uVar10 >> 8 | uVar10 << 0x38) ^ (uVar10 >> 1 | (ulong)((uVar10 & 1) != 0) << 0x3f) ^
             uVar10 >> 7) + *(long *)((undefined *)register0x00000020 + -0x50) +
             *(long *)((undefined *)register0x00000020 + -0x180) +
             ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x198) >> 6);
        lVar5 = ((uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32) ^
                (uVar18 * 0x800000 | uVar18 >> 0x29)) +
                ((uVar11 ^ uVar16) & uVar18 ^ uVar11) +
                uVar19 + *(long *)((undefined *)register0x00000020 + -0x168) + 0x142929670a0e6e70;
        uVar6 = uVar6 + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        uVar8 = lVar5 + ((uVar20 | uVar22) & uVar15 | uVar20 & uVar22) +
                        ((uVar22 * 0x40000000 | uVar22 >> 0x22) ^ (uVar22 >> 0x1c | uVar22 << 0x24)
                        ^ (uVar22 * 0x2000000 | uVar22 >> 0x27));
        uVar7 = uVar10 + ((uVar25 >> 8 | uVar25 << 0x38) ^
                          (uVar25 >> 1 | (ulong)((uVar25 & 1) != 0) << 0x3f) ^ uVar25 >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x1b0) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
        lVar5 = ((uVar6 >> 0x12 | uVar6 << 0x2e) ^ (uVar6 >> 0xe | uVar6 << 0x32) ^
                (uVar6 * 0x800000 | uVar6 >> 0x29)) +
                uVar11 + uVar7 + 0x27b70a8546d22ffc + ((uVar16 ^ uVar18) & uVar6 ^ uVar16);
        uVar15 = uVar15 + lVar5;
        uVar13 = *(ulong *)((undefined *)register0x00000020 + -0x168);
        uVar24 = ((uVar8 * 0x40000000 | uVar8 >> 0x22) ^ (uVar8 >> 0x1c | uVar8 << 0x24) ^
                 (uVar8 * 0x2000000 | uVar8 >> 0x27)) + ((uVar22 | uVar8) & uVar20 | uVar22 & uVar8)
                 + lVar5;
        uVar13 = uVar25 + ((uVar23 >> 8 | uVar23 << 0x38) ^
                           (uVar23 >> 1 | (ulong)((uVar23 & 1) != 0) << 0x3f) ^ uVar23 >> 7) +
                 *(long *)((undefined *)register0x00000020 + -0x1a8) +
                 ((uVar13 << 3 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6);
        lVar5 = ((uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32) ^
                (uVar15 * 0x800000 | uVar15 >> 0x29)) +
                uVar16 + uVar13 + 0x2e1b21385c26c926 + ((uVar18 ^ uVar6) & uVar15 ^ uVar18);
        uVar20 = uVar20 + lVar5;
        uVar10 = ((uVar24 * 0x40000000 | uVar24 >> 0x22) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
                 (uVar24 * 0x2000000 | uVar24 >> 0x27)) +
                 ((uVar8 | uVar24) & uVar22 | uVar8 & uVar24) + lVar5;
        lVar5 = uVar23 + ((uVar21 >> 8 | uVar21 << 0x38) ^
                          (uVar21 >> 1 | (ulong)((uVar21 & 1) != 0) << 0x3f) ^ uVar21 >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x170) +
                ((uVar7 * 8 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x158) = lVar5;
        lVar5 = ((uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32) ^
                (uVar20 * 0x800000 | uVar20 >> 0x29)) +
                uVar18 + lVar5 + 0x4d2c6dfc5ac42aed + ((uVar6 ^ uVar15) & uVar20 ^ uVar6);
        uVar11 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        uVar22 = uVar22 + lVar5;
        uVar23 = ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
                 (uVar10 * 0x2000000 | uVar10 >> 0x27)) +
                 ((uVar24 | uVar10) & uVar8 | uVar24 & uVar10) + lVar5;
        lVar5 = uVar21 + ((uVar11 >> 8 | uVar11 << 0x38) ^
                          (uVar11 >> 1 | (ulong)((uVar11 & 1) != 0) << 0x3f) ^ uVar11 >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x1a0) +
                ((uVar13 * 8 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x178) = lVar5;
        lVar5 = ((uVar22 >> 0x12 | uVar22 << 0x2e) ^ (uVar22 >> 0xe | uVar22 << 0x32) ^
                (uVar22 * 0x800000 | uVar22 >> 0x29)) +
                uVar6 + lVar5 + 0x53380d139d95b3df + ((uVar15 ^ uVar20) & uVar22 ^ uVar15);
        uVar8 = uVar8 + lVar5;
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -400);
        uVar18 = ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 * 0x2000000 | uVar23 >> 0x27)) +
                 ((uVar10 | uVar23) & uVar24 | uVar10 & uVar23) + lVar5;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x158);
        lVar5 = ((uVar6 >> 8 | uVar6 << 0x38) ^ (uVar6 >> 1 | (ulong)((uVar6 & 1) != 0) << 0x3f) ^
                uVar6 >> 7) + uVar11 + *(long *)((undefined *)register0x00000020 + -0x198) +
                ((uVar16 << 3 | uVar16 >> 0x3d) ^ (uVar16 >> 0x13 | uVar16 << 0x2d) ^ uVar16 >> 6);
        *(long *)((undefined *)register0x00000020 + -400) = lVar5;
        uVar19 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        lVar5 = ((uVar8 >> 0x12 | uVar8 << 0x2e) ^ (uVar8 >> 0xe | uVar8 << 0x32) ^
                (uVar8 * 0x800000 | uVar8 >> 0x29)) +
                uVar15 + lVar5 + 0x650a73548baf63de + ((uVar20 ^ uVar22) & uVar8 ^ uVar20);
        uVar24 = uVar24 + lVar5;
        uVar11 = ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) +
                 ((uVar23 | uVar18) & uVar10 | uVar23 & uVar18) + lVar5;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        lVar5 = ((uVar19 >> 8 | uVar19 << 0x38) ^ (uVar19 >> 1 | (ulong)((uVar19 & 1) != 0) << 0x3f)
                ^ uVar19 >> 7) + uVar6 + *(long *)((undefined *)register0x00000020 + -0x160) +
                ((uVar16 << 3 | uVar16 >> 0x3d) ^ (uVar16 >> 0x13 | uVar16 << 0x2d) ^ uVar16 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x188) = lVar5;
        lVar5 = ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32) ^
                (uVar24 * 0x800000 | uVar24 >> 0x29)) +
                uVar20 + lVar5 + 0x766a0abb3c77b2a8 + ((uVar22 ^ uVar8) & uVar24 ^ uVar22);
        uVar10 = uVar10 + lVar5;
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -400);
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        uVar16 = ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                 (uVar11 * 0x2000000 | uVar11 >> 0x27)) +
                 ((uVar18 | uVar11) & uVar23 | uVar18 & uVar11) + lVar5;
        lVar5 = ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
                ^ uVar20 >> 7) + uVar19 + *(long *)((undefined *)register0x00000020 + -0x168) +
                ((uVar6 << 3 | uVar6 >> 0x3d) ^ (uVar6 >> 0x13 | uVar6 << 0x2d) ^ uVar6 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x150) = lVar5;
        uVar19 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        lVar5 = ((uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32) ^
                (uVar10 * 0x800000 | uVar10 >> 0x29)) +
                uVar22 + lVar5 + -0x7e3d36d1b812511a + ((uVar8 ^ uVar24) & uVar10 ^ uVar8);
        uVar23 = uVar23 + lVar5;
        uVar15 = ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                 (uVar16 * 0x2000000 | uVar16 >> 0x27)) +
                 ((uVar11 | uVar16) & uVar18 | uVar11 & uVar16) + lVar5;
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        lVar5 = ((uVar6 << 3 | uVar6 >> 0x3d) ^ (uVar6 >> 0x13 | uVar6 << 0x2d) ^ uVar6 >> 6) +
                ((uVar19 >> 8 | uVar19 << 0x38) ^ (uVar19 >> 1 | (ulong)((uVar19 & 1) != 0) << 0x3f)
                ^ uVar19 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1b8) + uVar7;
        *(long *)((undefined *)register0x00000020 + -0x180) = lVar5;
        lVar5 = ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
                (uVar23 * 0x800000 | uVar23 >> 0x29)) +
                uVar8 + lVar5 + -0x6d8dd37aeb7dcac5 + ((uVar24 ^ uVar10) & uVar23 ^ uVar24);
        uVar18 = uVar18 + lVar5;
        uVar6 = ((uVar16 | uVar15) & uVar11 | uVar16 & uVar15) +
                ((uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
                (uVar15 * 0x2000000 | uVar15 >> 0x27)) + lVar5;
        uVar8 = *(ulong *)((undefined *)register0x00000020 + -0x1b0);
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x150);
        lVar5 = ((uVar8 >> 8 | uVar8 << 0x38) ^ (uVar8 >> 1 | (ulong)((uVar8 & 1) != 0) << 0x3f) ^
                uVar8 >> 7) + uVar19 + uVar13 +
                ((uVar20 << 3 | uVar20 >> 0x3d) ^ (uVar20 >> 0x13 | uVar20 << 0x2d) ^ uVar20 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x1b8) = lVar5;
        lVar5 = ((uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32) ^
                (uVar18 * 0x800000 | uVar18 >> 0x29)) +
                uVar24 + lVar5 + -0x5d40175eb30efc9c + ((uVar10 ^ uVar23) & uVar18 ^ uVar10);
        uVar11 = uVar11 + lVar5;
        uVar19 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        uVar8 = ((uVar15 | uVar6) & uVar16 | uVar15 & uVar6) +
                ((uVar6 * 0x40000000 | uVar6 >> 0x22) ^ (uVar6 >> 0x1c | uVar6 << 0x24) ^
                (uVar6 * 0x2000000 | uVar6 >> 0x27)) + lVar5;
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        lVar5 = ((uVar19 << 3 | uVar19 >> 0x3d) ^ (uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6) +
                ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
                ^ uVar20 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1b0) +
                *(long *)((undefined *)register0x00000020 + -0x158);
        *(long *)((undefined *)register0x00000020 + -0x148) = lVar5;
        lVar5 = ((uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32) ^
                (uVar11 * 0x800000 | uVar11 >> 0x29)) +
                lVar5 + -0x57e599b443bdcfff + uVar10 + ((uVar23 ^ uVar18) & uVar11 ^ uVar23);
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        uVar16 = uVar16 + lVar5;
        uVar19 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        uVar10 = ((uVar6 | uVar8) & uVar15 | uVar6 & uVar8) +
                 ((uVar8 * 0x40000000 | uVar8 >> 0x22) ^ (uVar8 >> 0x1c | uVar8 << 0x24) ^
                 (uVar8 * 0x2000000 | uVar8 >> 0x27)) + lVar5;
        lVar5 = ((uVar19 << 3 | uVar19 >> 0x3d) ^ (uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6) +
                ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
                ^ uVar20 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1a8) +
                *(long *)((undefined *)register0x00000020 + -0x178);
        uVar22 = *(ulong *)((undefined *)register0x00000020 + -0x1a0);
        *(long *)((undefined *)register0x00000020 + -0x1a8) = lVar5;
        lVar5 = ((uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32) ^
                (uVar16 * 0x800000 | uVar16 >> 0x29)) +
                uVar23 + lVar5 + -0x3db4748f2f07686f + ((uVar18 ^ uVar11) & uVar16 ^ uVar18);
        uVar15 = uVar15 + lVar5;
        uVar19 = ((uVar8 | uVar10) & uVar6 | uVar8 & uVar10) +
                 ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24) ^
                 (uVar10 * 0x2000000 | uVar10 >> 0x27)) + lVar5;
        uVar24 = *(ulong *)((undefined *)register0x00000020 + -0x148);
        lVar5 = ((uVar24 << 3 | uVar24 >> 0x3d) ^ (uVar24 >> 0x13 | uVar24 << 0x2d) ^ uVar24 >> 6) +
                ((uVar22 >> 8 | uVar22 << 0x38) ^ (uVar22 >> 1 | (ulong)((uVar22 & 1) != 0) << 0x3f)
                ^ uVar22 >> 7) + uVar20 + *(long *)((undefined *)register0x00000020 + -400);
        *(long *)((undefined *)register0x00000020 + -0x170) = lVar5;
        lVar5 = ((uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32) ^
                (uVar15 * 0x800000 | uVar15 >> 0x29)) +
                lVar5 + -0x3893ae5cf9ab41d0 + uVar18 + ((uVar11 ^ uVar16) & uVar15 ^ uVar11);
        uVar6 = uVar6 + lVar5;
        uVar18 = ((uVar10 | uVar19) & uVar8 | uVar10 & uVar19) +
                 ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
                 (uVar19 * 0x2000000 | uVar19 >> 0x27)) + lVar5;
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x198);
        uVar22 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        lVar5 = ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
                ^ uVar20 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1a0) +
                *(long *)((undefined *)register0x00000020 + -0x188) +
                ((uVar22 << 3 | uVar22 >> 0x3d) ^ (uVar22 >> 0x13 | uVar22 << 0x2d) ^ uVar22 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x140) = lVar5;
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        lVar5 = ((uVar6 >> 0x12 | uVar6 << 0x2e) ^ (uVar6 >> 0xe | uVar6 << 0x32) ^
                (uVar6 * 0x800000 | uVar6 >> 0x29)) +
                lVar5 + -0x2e6d17e62910ade8 + uVar11 + ((uVar16 ^ uVar15) & uVar6 ^ uVar16);
        uVar8 = uVar8 + lVar5;
        uVar22 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        uVar11 = ((uVar19 | uVar18) & uVar10 | uVar19 & uVar18) +
                 ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar5;
        lVar5 = ((uVar22 << 3 | uVar22 >> 0x3d) ^ (uVar22 >> 0x13 | uVar22 << 0x2d) ^ uVar22 >> 6) +
                ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
                ^ uVar20 >> 7) + *(long *)((undefined *)register0x00000020 + -0x198) +
                *(long *)((undefined *)register0x00000020 + -0x150);
        *(long *)((undefined *)register0x00000020 + -0x160) = lVar5;
        lVar5 = ((uVar8 >> 0x12 | uVar8 << 0x2e) ^ (uVar8 >> 0xe | uVar8 << 0x32) ^
                (uVar8 * 0x800000 | uVar8 >> 0x29)) +
                lVar5 + -0x2966f9dbaa9a56f0 + uVar16 + ((uVar15 ^ uVar6) & uVar8 ^ uVar15);
        uVar10 = uVar10 + lVar5;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x168);
        uVar23 = ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                 (uVar11 * 0x2000000 | uVar11 >> 0x27)) +
                 ((uVar18 | uVar11) & uVar19 | uVar18 & uVar11) + lVar5;
        uVar22 = *(ulong *)((undefined *)register0x00000020 + -0x140);
        uVar22 = ((uVar16 >> 8 | uVar16 << 0x38) ^
                  (uVar16 >> 1 | (ulong)((uVar16 & 1) != 0) << 0x3f) ^ uVar16 >> 7) + uVar20 +
                 *(long *)((undefined *)register0x00000020 + -0x180) +
                 ((uVar22 << 3 | uVar22 >> 0x3d) ^ (uVar22 >> 0x13 | uVar22 << 0x2d) ^ uVar22 >> 6);
        *(ulong *)((undefined *)register0x00000020 + -0xf0) = uVar22;
        lVar5 = ((uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32) ^
                (uVar10 * 0x800000 | uVar10 >> 0x29)) +
                uVar15 + uVar22 + 0xf40e35855771202a + ((uVar6 ^ uVar8) & uVar10 ^ uVar6);
        uVar19 = uVar19 + lVar5;
        uVar24 = ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 * 0x2000000 | uVar23 >> 0x27)) +
                 ((uVar11 | uVar23) & uVar18 | uVar11 & uVar23) + lVar5;
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        lVar5 = ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                uVar7 >> 7) + uVar16 + *(long *)((undefined *)register0x00000020 + -0x1b8) +
                ((uVar20 << 3 | uVar20 >> 0x3d) ^ (uVar20 >> 0x13 | uVar20 << 0x2d) ^ uVar20 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x168) = lVar5;
        lVar5 = ((uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32) ^
                (uVar19 * 0x800000 | uVar19 >> 0x29)) +
                uVar6 + lVar5 + 0x106aa07032bbd1b8 + ((uVar8 ^ uVar10) & uVar19 ^ uVar8);
        uVar18 = uVar18 + lVar5;
        uVar20 = ((uVar24 * 0x40000000 | uVar24 >> 0x22) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
                 (uVar24 * 0x2000000 | uVar24 >> 0x27)) +
                 ((uVar23 | uVar24) & uVar11 | uVar23 & uVar24) + lVar5;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x158);
        uVar6 = ((uVar13 >> 8 | uVar13 << 0x38) ^ (uVar13 >> 1 | (ulong)((uVar13 & 1) != 0) << 0x3f)
                ^ uVar13 >> 7) + uVar7 + *(long *)((undefined *)register0x00000020 + -0x148) +
                ((uVar22 * 8 | uVar22 >> 0x3d) ^ (uVar22 >> 0x13 | uVar22 << 0x2d) ^ uVar22 >> 6);
        lVar5 = ((uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32) ^
                (uVar18 * 0x800000 | uVar18 >> 0x29)) +
                uVar8 + uVar6 + 0x19a4c116b8d2d0c8 + ((uVar10 ^ uVar19) & uVar18 ^ uVar10);
        uVar11 = uVar11 + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x168);
        uVar21 = ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) +
                 ((uVar24 | uVar20) & uVar23 | uVar24 & uVar20) + lVar5;
        uVar8 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        lVar5 = ((uVar16 >> 8 | uVar16 << 0x38) ^ (uVar16 >> 1 | (ulong)((uVar16 & 1) != 0) << 0x3f)
                ^ uVar16 >> 7) + uVar13 + *(long *)((undefined *)register0x00000020 + -0x1a8) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x158) = lVar5;
        lVar5 = ((uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32) ^
                (uVar11 * 0x800000 | uVar11 >> 0x29)) +
                uVar10 + lVar5 + 0x1e376c085141ab53 + ((uVar19 ^ uVar18) & uVar11 ^ uVar19);
        uVar23 = uVar23 + lVar5;
        uVar15 = ((uVar20 | uVar21) & uVar24 | uVar20 & uVar21) +
                 ((uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 >> 0x1c | uVar21 << 0x24) ^
                 (uVar21 * 0x2000000 | uVar21 >> 0x27)) + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -400);
        lVar5 = ((uVar8 >> 8 | uVar8 << 0x38) ^ (uVar8 >> 1 | (ulong)((uVar8 & 1) != 0) << 0x3f) ^
                uVar8 >> 7) + uVar16 + *(long *)((undefined *)register0x00000020 + -0x170) +
                ((uVar6 * 8 | uVar6 >> 0x3d) ^ (uVar6 >> 0x13 | uVar6 << 0x2d) ^ uVar6 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x178) = lVar5;
        uVar13 = *(ulong *)((undefined *)register0x00000020 + -0x158);
        lVar5 = ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
                (uVar23 * 0x800000 | uVar23 >> 0x29)) +
                uVar19 + lVar5 + 0x2748774cdf8eeb99 + ((uVar18 ^ uVar11) & uVar23 ^ uVar18);
        uVar24 = uVar24 + lVar5;
        uVar19 = ((uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
                 (uVar15 * 0x2000000 | uVar15 >> 0x27)) +
                 ((uVar21 | uVar15) & uVar20 | uVar21 & uVar15) + lVar5;
        uVar10 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        uVar13 = ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                 uVar7 >> 7) + uVar8 + *(long *)((undefined *)register0x00000020 + -0x140) +
                 ((uVar13 << 3 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6);
        lVar5 = ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32) ^
                (uVar24 * 0x800000 | uVar24 >> 0x29)) +
                uVar18 + uVar13 + 0x34b0bcb5e19b48a8 + ((uVar11 ^ uVar23) & uVar24 ^ uVar11);
        uVar20 = uVar20 + lVar5;
        uVar16 = ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
                 (uVar19 * 0x2000000 | uVar19 >> 0x27)) +
                 ((uVar15 | uVar19) & uVar21 | uVar15 & uVar19) + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        lVar5 = ((uVar18 << 3 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^ uVar18 >> 6) +
                ((uVar10 >> 8 | uVar10 << 0x38) ^ (uVar10 >> 1 | (ulong)((uVar10 & 1) != 0) << 0x3f)
                ^ uVar10 >> 7) + uVar7 + *(long *)((undefined *)register0x00000020 + -0x160);
        *(long *)((undefined *)register0x00000020 + -0x138) = lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x150);
        lVar5 = ((uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32) ^
                (uVar20 * 0x800000 | uVar20 >> 0x29)) +
                uVar11 + lVar5 + 0x391c0cb3c5c95a63 + ((uVar23 ^ uVar24) & uVar20 ^ uVar23);
        uVar21 = uVar21 + lVar5;
        uVar25 = ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                 (uVar16 * 0x2000000 | uVar16 >> 0x27)) +
                 ((uVar19 | uVar16) & uVar15 | uVar19 & uVar16) + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        *(ulong *)((undefined *)register0x00000020 + -0x150) = uVar13;
        uVar8 = ((uVar13 * 8 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6) +
                ((uVar18 >> 8 | uVar18 << 0x38) ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)
                ^ uVar18 >> 7) + uVar10 + *(long *)((undefined *)register0x00000020 + -0xf0);
        lVar5 = ((uVar21 >> 0x12 | uVar21 << 0x2e) ^ (uVar21 >> 0xe | uVar21 << 0x32) ^
                (uVar21 * 0x800000 | uVar21 >> 0x29)) +
                uVar23 + uVar8 + 0x4ed8aa4ae3418acb + ((uVar24 ^ uVar20) & uVar21 ^ uVar24);
        uVar15 = uVar15 + lVar5;
        uVar23 = ((uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
                 (uVar25 * 0x2000000 | uVar25 >> 0x27)) +
                 ((uVar16 | uVar25) & uVar19 | uVar16 & uVar25) + lVar5;
        uVar13 = *(ulong *)((undefined *)register0x00000020 + -0x138);
        lVar5 = ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                uVar7 >> 7) + uVar18 + *(long *)((undefined *)register0x00000020 + -0x168) +
                ((uVar13 << 3 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x1b0) = lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        lVar5 = ((uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32) ^
                (uVar15 * 0x800000 | uVar15 >> 0x29)) +
                uVar24 + lVar5 + 0x5b9cca4f7763e373 + ((uVar20 ^ uVar21) & uVar15 ^ uVar20);
        uVar19 = uVar19 + lVar5;
        uVar22 = ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 * 0x2000000 | uVar23 >> 0x27)) +
                 ((uVar25 | uVar23) & uVar16 | uVar25 & uVar23) + lVar5;
        uVar13 = *(ulong *)((undefined *)register0x00000020 + -0x1b0);
        *(ulong *)((undefined *)register0x00000020 + -0x180) = uVar8;
        uVar10 = ((uVar18 >> 8 | uVar18 << 0x38) ^
                  (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f) ^ uVar18 >> 7) + uVar7 + uVar6
                 + ((uVar8 * 8 | uVar8 >> 0x3d) ^ (uVar8 >> 0x13 | uVar8 << 0x2d) ^ uVar8 >> 6);
        lVar5 = ((uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32) ^
                (uVar19 * 0x800000 | uVar19 >> 0x29)) +
                uVar20 + uVar10 + 0x682e6ff3d6b2b8a3 + ((uVar21 ^ uVar15) & uVar19 ^ uVar21);
        uVar16 = uVar16 + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x148);
        *(ulong *)((undefined *)register0x00000020 + -0x148) = uVar10;
        uVar18 = ((uVar23 | uVar22) & uVar25 | uVar23 & uVar22) +
                 ((uVar22 * 0x40000000 | uVar22 >> 0x22) ^ (uVar22 >> 0x1c | uVar22 << 0x24) ^
                 (uVar22 * 0x2000000 | uVar22 >> 0x27)) + lVar5;
        uVar8 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        lVar5 = ((uVar13 << 3 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6) +
                *(long *)((undefined *)register0x00000020 + -0x158) +
                ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                uVar7 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1b8);
        *(long *)((undefined *)register0x00000020 + -0x1b8) = lVar5;
        lVar5 = ((uVar16 * 0x800000 | uVar16 >> 0x29) ^
                (uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32)) +
                uVar21 + lVar5 + 0x748f82ee5defb2fc + ((uVar15 ^ uVar19) & uVar16 ^ uVar15);
        uVar25 = uVar25 + lVar5;
        uVar20 = ((uVar22 | uVar18) & uVar23 | uVar22 & uVar18) +
                 ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar5;
        lVar5 = *(long *)((undefined *)register0x00000020 + -0x178) +
                ((uVar8 >> 8 | uVar8 << 0x38) ^ (uVar8 >> 1 | (ulong)((uVar8 & 1) != 0) << 0x3f) ^
                uVar8 >> 7) + uVar7 +
                ((uVar10 * 8 | uVar10 >> 0x3d) ^ (uVar10 >> 0x13 | uVar10 << 0x2d) ^ uVar10 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x1a8) = lVar5;
        lVar5 = ((uVar25 * 0x800000 | uVar25 >> 0x29) ^
                (uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32)) +
                uVar15 + lVar5 + 0x78a5636f43172f60 + ((uVar19 ^ uVar16) & uVar25 ^ uVar19);
        uVar23 = uVar23 + lVar5;
        uVar13 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        uVar10 = *(ulong *)((undefined *)register0x00000020 + -0x140);
        uVar24 = ((uVar18 | uVar20) & uVar22 | uVar18 & uVar20) +
                 ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        lVar5 = *(long *)((undefined *)register0x00000020 + -0x150) +
                ((uVar13 >> 8 | uVar13 << 0x38) ^ (uVar13 >> 1 | (ulong)((uVar13 & 1) != 0) << 0x3f)
                ^ uVar13 >> 7) + uVar8 +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x1a0) = lVar5;
        lVar5 = ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
                (uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32)) +
                ((uVar16 ^ uVar25) & uVar23 ^ uVar16) + uVar19 + lVar5 + -0x7b3787eb5e0f548e;
        uVar22 = uVar22 + lVar5;
        uVar7 = ((uVar20 | uVar24) & uVar18 | uVar20 & uVar24) +
                ((uVar24 * 0x40000000 | uVar24 >> 0x22) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
                (uVar24 * 0x2000000 | uVar24 >> 0x27)) + lVar5;
        uVar8 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        uVar11 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        lVar5 = ((uVar8 << 3 | uVar8 >> 0x3d) ^ (uVar8 >> 0x13 | uVar8 << 0x2d) ^ uVar8 >> 6) +
                *(long *)((undefined *)register0x00000020 + -0x138) +
                ((uVar10 >> 8 | uVar10 << 0x38) ^ (uVar10 >> 1 | (ulong)((uVar10 & 1) != 0) << 0x3f)
                ^ uVar10 >> 7) + uVar13;
        *(long *)((undefined *)register0x00000020 + -0x198) = lVar5;
        lVar5 = ((uVar22 * 0x800000 | uVar22 >> 0x29) ^
                (uVar22 >> 0x12 | uVar22 << 0x2e) ^ (uVar22 >> 0xe | uVar22 << 0x32)) +
                uVar16 + lVar5 + -0x7338fdf7e59bc614 + ((uVar25 ^ uVar23) & uVar22 ^ uVar25);
        uVar18 = uVar18 + lVar5;
        uVar8 = *(ulong *)((undefined *)register0x00000020 + -0x168);
        uVar13 = ((uVar24 | uVar7) & uVar20 | uVar24 & uVar7) +
                 ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
                 (uVar7 * 0x2000000 | uVar7 >> 0x27)) + lVar5;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x1a0);
        uVar19 = *(ulong *)((undefined *)register0x00000020 + -0xf0);
        lVar5 = ((uVar11 >> 8 | uVar11 << 0x38) ^ (uVar11 >> 1 | (ulong)((uVar11 & 1) != 0) << 0x3f)
                ^ uVar11 >> 7) + uVar10 + *(long *)((undefined *)register0x00000020 + -0x180) +
                ((uVar16 << 3 | uVar16 >> 0x3d) ^ (uVar16 >> 0x13 | uVar16 << 0x2d) ^ uVar16 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x170) = lVar5;
        lVar5 = ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                uVar25 + lVar5 + -0x6f410005dc9ce1d8 + ((uVar23 ^ uVar22) & uVar18 ^ uVar23);
        uVar20 = uVar20 + lVar5;
        uVar27 = ((uVar7 | uVar13) & uVar24 | uVar7 & uVar13) +
                 ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24) ^
                 (uVar13 * 0x2000000 | uVar13 >> 0x27)) + lVar5;
        uVar10 = *(ulong *)((undefined *)register0x00000020 + -0x198);
        lVar5 = ((uVar19 >> 8 | uVar19 << 0x38) ^ (uVar19 >> 1 | (ulong)((uVar19 & 1) != 0) << 0x3f)
                ^ uVar19 >> 7) + uVar11 + *(long *)((undefined *)register0x00000020 + -0x1b0) +
                ((uVar10 << 3 | uVar10 >> 0x3d) ^ (uVar10 >> 0x13 | uVar10 << 0x2d) ^ uVar10 >> 6);
        *(long *)((undefined *)register0x00000020 + -400) = lVar5;
        lVar5 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
                (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
                uVar23 + lVar5 + -0x5baf9314217d4217 + ((uVar22 ^ uVar18) & uVar20 ^ uVar22);
        uVar24 = uVar24 + lVar5;
        uVar28 = ((uVar13 | uVar27) & uVar7 | uVar13 & uVar27) +
                 ((uVar27 * 0x40000000 | uVar27 >> 0x22) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
                 (uVar27 * 0x2000000 | uVar27 >> 0x27)) + lVar5;
        uVar10 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        uVar11 = ((uVar8 >> 8 | uVar8 << 0x38) ^ (uVar8 >> 1 | (ulong)((uVar8 & 1) != 0) << 0x3f) ^
                 uVar8 >> 7) + uVar19 + *(long *)((undefined *)register0x00000020 + -0x148) +
                 ((uVar10 << 3 | uVar10 >> 0x3d) ^ (uVar10 >> 0x13 | uVar10 << 0x2d) ^ uVar10 >> 6);
        *(ulong *)((undefined *)register0x00000020 + -0x168) = uVar11;
        lVar5 = ((uVar24 * 0x800000 | uVar24 >> 0x29) ^
                (uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32)) +
                ((uVar18 ^ uVar20) & uVar24 ^ uVar18) + uVar22 + uVar11 + 0xbef9a3f7b2c67915;
        uVar7 = uVar7 + lVar5;
        uVar10 = *(ulong *)((undefined *)register0x00000020 + -400);
        uVar16 = ((uVar27 | uVar28) & uVar13 | uVar27 & uVar28) +
                 ((uVar28 * 0x40000000 | uVar28 >> 0x22) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
                 (uVar28 * 0x2000000 | uVar28 >> 0x27)) + lVar5;
        lVar5 = ((uVar6 >> 8 | uVar6 << 0x38) ^ (uVar6 >> 1 | (ulong)((uVar6 & 1) != 0) << 0x3f) ^
                uVar6 >> 7) + uVar8 + *(long *)((undefined *)register0x00000020 + -0x1b8) +
                ((uVar10 << 3 | uVar10 >> 0x3d) ^ (uVar10 >> 0x13 | uVar10 << 0x2d) ^ uVar10 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x188) = lVar5;
        lVar5 = ((uVar7 * 0x800000 | uVar7 >> 0x29) ^
                (uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32)) +
                ((uVar20 ^ uVar24) & uVar7 ^ uVar20) + uVar18 + lVar5 + -0x398e870d1c8dacd5;
        uVar13 = uVar13 + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x158);
        uVar22 = ((uVar28 | uVar16) & uVar27 | uVar28 & uVar16) +
                 ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                 (uVar16 * 0x2000000 | uVar16 >> 0x27)) + lVar5;
        lVar5 = ((uVar11 * 8 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6) +
                uVar6 + ((uVar18 >> 8 | uVar18 << 0x38) ^
                         (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f) ^ uVar18 >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x1a8);
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        *(long *)((undefined *)register0x00000020 + -200) = lVar5;
        *(long *)((undefined *)register0x00000020 + -0x160) = lVar5;
        lVar5 = ((uVar13 * 0x800000 | uVar13 >> 0x29) ^
                (uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32)) +
                ((uVar24 ^ uVar7) & uVar13 ^ uVar24) + uVar20 + lVar5 + -0x35d8c13115d99e64;
        uVar27 = uVar27 + lVar5;
        uVar21 = ((uVar16 | uVar22) & uVar28 | uVar16 & uVar22) +
                 ((uVar22 * 0x40000000 | uVar22 >> 0x22) ^ (uVar22 >> 0x1c | uVar22 << 0x24) ^
                 (uVar22 * 0x2000000 | uVar22 >> 0x27)) + lVar5;
        uVar8 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        uVar10 = *(ulong *)((undefined *)register0x00000020 + -0x150);
        uVar25 = ((uVar8 << 3 | uVar8 >> 0x3d) ^ (uVar8 >> 0x13 | uVar8 << 0x2d) ^ uVar8 >> 6) +
                 ((uVar6 >> 8 | uVar6 << 0x38) ^ (uVar6 >> 1 | (ulong)((uVar6 & 1) != 0) << 0x3f) ^
                 uVar6 >> 7) + uVar18 + *(long *)((undefined *)register0x00000020 + -0x1a0);
        *(ulong *)((undefined *)register0x00000020 + -0xc0) = uVar25;
        lVar5 = ((uVar27 * 0x800000 | uVar27 >> 0x29) ^
                (uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32)) +
                uVar24 + uVar25 + 0xd186b8c721c0c207 + ((uVar7 ^ uVar13) & uVar27 ^ uVar7);
        uVar28 = uVar28 + lVar5;
        uVar15 = ((uVar22 | uVar21) & uVar16 | uVar22 & uVar21) +
                 ((uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 >> 0x1c | uVar21 << 0x24) ^
                 (uVar21 * 0x2000000 | uVar21 >> 0x27)) + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        uVar8 = *(ulong *)((undefined *)register0x00000020 + -0x138);
        uVar19 = ((uVar18 << 3 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^ uVar18 >> 6)
                 + ((uVar10 >> 8 | uVar10 << 0x38) ^
                    (uVar10 >> 1 | (ulong)((uVar10 & 1) != 0) << 0x3f) ^ uVar10 >> 7) + uVar6 +
                   *(long *)((undefined *)register0x00000020 + -0x198);
        *(ulong *)((undefined *)register0x00000020 + -0xb8) = uVar19;
        lVar5 = ((uVar28 * 0x800000 | uVar28 >> 0x29) ^
                (uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32)) +
                uVar7 + uVar19 + 0xeada7dd6cde0eb1e + ((uVar13 ^ uVar27) & uVar28 ^ uVar13);
        uVar16 = uVar16 + lVar5;
        uVar24 = ((uVar21 | uVar15) & uVar22 | uVar21 & uVar15) +
                 ((uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
                 (uVar15 * 0x2000000 | uVar15 >> 0x27)) + lVar5;
        uVar11 = ((uVar25 * 8 | uVar25 >> 0x3d) ^ (uVar25 >> 0x13 | uVar25 << 0x2d) ^ uVar25 >> 6) +
                 ((uVar8 >> 8 | uVar8 << 0x38) ^ (uVar8 >> 1 | (ulong)((uVar8 & 1) != 0) << 0x3f) ^
                 uVar8 >> 7) + *(long *)((undefined *)register0x00000020 + -0x150) +
                 *(long *)((undefined *)register0x00000020 + -0x170);
        *(ulong *)((undefined *)register0x00000020 + -0xb0) = uVar11;
        lVar5 = ((uVar16 * 0x800000 | uVar16 >> 0x29) ^
                (uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32)) +
                ((uVar27 ^ uVar28) & uVar16 ^ uVar27) + uVar13 + uVar11 + 0xf57d4f7fee6ed178;
        uVar22 = uVar22 + lVar5;
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        uVar18 = ((uVar15 | uVar24) & uVar21 | uVar15 & uVar24) +
                 ((uVar24 * 0x40000000 | uVar24 >> 0x22) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
                 (uVar24 * 0x2000000 | uVar24 >> 0x27)) + lVar5;
        uVar23 = ((uVar19 * 8 | uVar19 >> 0x3d) ^ (uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6) +
                 *(long *)((undefined *)register0x00000020 + -400) +
                 ((uVar6 >> 8 | uVar6 << 0x38) ^ (uVar6 >> 1 | (ulong)((uVar6 & 1) != 0) << 0x3f) ^
                 uVar6 >> 7) + uVar8;
        *(ulong *)((undefined *)register0x00000020 + -0xa8) = uVar23;
        lVar5 = ((uVar22 * 0x800000 | uVar22 >> 0x29) ^
                (uVar22 >> 0x12 | uVar22 << 0x2e) ^ (uVar22 >> 0xe | uVar22 << 0x32)) +
                uVar27 + uVar23 + 0x6f067aa72176fba + ((uVar28 ^ uVar16) & uVar22 ^ uVar28);
        uVar21 = uVar21 + lVar5;
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -0x1b0);
        uVar20 = ((uVar24 | uVar18) & uVar15 | uVar24 & uVar18) +
                 ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar5;
        lVar5 = ((uVar6 >> 8 | uVar6 << 0x38) ^ (uVar6 >> 1 | (ulong)((uVar6 & 1) != 0) << 0x3f) ^
                uVar6 >> 7) + *(long *)((undefined *)register0x00000020 + -0x180) +
                *(long *)((undefined *)register0x00000020 + -0x168) +
                ((uVar11 * 8 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x180) = lVar5;
        *(long *)((undefined *)register0x00000020 + -0xa0) = lVar5;
        lVar5 = ((uVar21 * 0x800000 | uVar21 >> 0x29) ^
                (uVar21 >> 0x12 | uVar21 << 0x2e) ^ (uVar21 >> 0xe | uVar21 << 0x32)) +
                uVar28 + lVar5 + 0xa637dc5a2c898a6 + ((uVar16 ^ uVar22) & uVar21 ^ uVar16);
        uVar15 = uVar15 + lVar5;
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -0x148);
        uVar8 = ((uVar18 | uVar20) & uVar24 | uVar18 & uVar20) +
                ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar5;
        lVar5 = ((uVar6 >> 8 | uVar6 << 0x38) ^ (uVar6 >> 1 | (ulong)((uVar6 & 1) != 0) << 0x3f) ^
                uVar6 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1b0) +
                *(long *)((undefined *)register0x00000020 + -0x188) +
                ((uVar23 * 8 | uVar23 >> 0x3d) ^ (uVar23 >> 0x13 | uVar23 << 0x2d) ^ uVar23 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x98) = lVar5;
        *(long *)((undefined *)register0x00000020 + -0x1b0) = lVar5;
        lVar5 = ((uVar15 * 0x800000 | uVar15 >> 0x29) ^
                (uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32)) +
                ((uVar22 ^ uVar21) & uVar15 ^ uVar22) + uVar16 + lVar5 + 0x113f9804bef90dae;
        uVar24 = uVar24 + lVar5;
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        uVar10 = ((uVar20 | uVar8) & uVar18 | uVar20 & uVar8) +
                 ((uVar8 * 0x40000000 | uVar8 >> 0x22) ^ (uVar8 >> 0x1c | uVar8 << 0x24) ^
                 (uVar8 * 0x2000000 | uVar8 >> 0x27)) + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        lVar5 = ((uVar6 >> 8 | uVar6 << 0x38) ^ (uVar6 >> 1 | (ulong)((uVar6 & 1) != 0) << 0x3f) ^
                uVar6 >> 7) + *(long *)((undefined *)register0x00000020 + -0x148) +
                *(long *)((undefined *)register0x00000020 + -0x160) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^
                *(ulong *)((undefined *)register0x00000020 + -0x180) >> 6);
        *(long *)((undefined *)register0x00000020 + -0x90) = lVar5;
        *(long *)((undefined *)register0x00000020 + -0x178) = lVar5;
        lVar5 = ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32) ^
                (uVar24 * 0x800000 | uVar24 >> 0x29)) +
                uVar22 + lVar5 + 0x1b710b35131c471b + ((uVar21 ^ uVar15) & uVar24 ^ uVar21);
        uVar18 = uVar18 + lVar5;
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        uVar27 = lVar5 + ((uVar8 | uVar10) & uVar20 | uVar8 & uVar10) +
                         ((uVar10 * 0x40000000 | uVar10 >> 0x22) ^ (uVar10 >> 0x1c | uVar10 << 0x24)
                         ^ (uVar10 * 0x2000000 | uVar10 >> 0x27));
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x1b0);
        uVar6 = uVar25 + ((uVar6 >> 8 | uVar6 << 0x38) ^
                          (uVar6 >> 1 | (ulong)((uVar6 & 1) != 0) << 0x3f) ^ uVar6 >> 7) +
                         *(long *)((undefined *)register0x00000020 + -0x1b8) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
        *(ulong *)((undefined *)register0x00000020 + -0x88) = uVar6;
        lVar5 = ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                ((uVar15 ^ uVar24) & uVar18 ^ uVar15) + uVar21 + uVar6 + 0x28db77f523047d84;
        uVar20 = uVar20 + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x1a0);
        uVar21 = ((uVar10 | uVar27) & uVar8 | uVar10 & uVar27) +
                 ((uVar27 * 0x40000000 | uVar27 >> 0x22) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
                 (uVar27 * 0x2000000 | uVar27 >> 0x27)) + lVar5;
        uVar13 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        uVar13 = ((uVar13 << 3 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6)
                 + ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f)
                   ^ uVar7 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1a8) + uVar19;
        *(ulong *)((undefined *)register0x00000020 + -0x80) = uVar13;
        lVar5 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
                (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
                ((uVar24 ^ uVar18) & uVar20 ^ uVar24) + uVar15 + uVar13 + 0x32caab7b40c72493;
        uVar8 = uVar8 + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x198);
        uVar22 = ((uVar27 | uVar21) & uVar10 | uVar27 & uVar21) +
                 ((uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 >> 0x1c | uVar21 << 0x24) ^
                 (uVar21 * 0x2000000 | uVar21 >> 0x27)) + lVar5;
        uVar11 = ((uVar6 * 8 | uVar6 >> 0x3d) ^ (uVar6 >> 0x13 | uVar6 << 0x2d) ^ uVar6 >> 6) +
                 ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                 uVar7 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1a0) + uVar11;
        *(ulong *)((undefined *)register0x00000020 + -0x78) = uVar11;
        lVar5 = ((uVar8 >> 0x12 | uVar8 << 0x2e) ^ (uVar8 >> 0xe | uVar8 << 0x32) ^
                (uVar8 * 0x800000 | uVar8 >> 0x29)) +
                ((uVar18 ^ uVar20) & uVar8 ^ uVar18) + uVar24 + uVar11 + 0x3c9ebe0a15c9bebc;
        uVar10 = uVar10 + lVar5;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        uVar19 = lVar5 + ((uVar21 | uVar22) & uVar27 | uVar21 & uVar22) +
                         ((uVar22 * 0x40000000 | uVar22 >> 0x22) ^ (uVar22 >> 0x1c | uVar22 << 0x24)
                         ^ (uVar22 * 0x2000000 | uVar22 >> 0x27));
        uVar24 = ((uVar13 * 8 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6) +
                 ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                 uVar7 >> 7) + *(long *)((undefined *)register0x00000020 + -0x198) + uVar23;
        *(ulong *)((undefined *)register0x00000020 + -0x70) = uVar24;
        lVar5 = ((uVar10 >> 0x12 | uVar10 << 0x2e) ^ (uVar10 >> 0xe | uVar10 << 0x32) ^
                (uVar10 * 0x800000 | uVar10 >> 0x29)) +
                uVar18 + uVar24 + 0x431d67c49c100d4c + ((uVar20 ^ uVar8) & uVar10 ^ uVar20);
        uVar27 = uVar27 + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -400);
        uVar13 = lVar5 + ((uVar22 | uVar19) & uVar21 | uVar22 & uVar19) +
                         ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24)
                         ^ (uVar19 * 0x2000000 | uVar19 >> 0x27));
        uVar16 = ((uVar11 * 8 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6) +
                 ((uVar18 >> 8 | uVar18 << 0x38) ^
                  (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f) ^ uVar18 >> 7) + uVar7 +
                 *(long *)((undefined *)register0x00000020 + -0x180);
        *(ulong *)((undefined *)register0x00000020 + -0x68) = uVar16;
        lVar5 = ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32) ^
                (uVar27 * 0x800000 | uVar27 >> 0x29)) +
                uVar20 + uVar16 + 0x4cc5d4becb3e42b6 + ((uVar8 ^ uVar10) & uVar27 ^ uVar8);
        uVar21 = uVar21 + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x168);
        uVar11 = lVar5 + ((uVar19 | uVar13) & uVar22 | uVar19 & uVar13) +
                         ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24)
                         ^ (uVar13 * 0x2000000 | uVar13 >> 0x27));
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        uVar20 = (uVar24 >> 6 ^ (uVar24 * 8 | uVar24 >> 0x3d) ^ (uVar24 >> 0x13 | uVar24 << 0x2d)) +
                 ((uVar18 >> 8 | uVar18 << 0x38) ^
                  (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f) ^ uVar18 >> 7) +
                 *(long *)((undefined *)register0x00000020 + -400) +
                 *(long *)((undefined *)register0x00000020 + -0x1b0);
        *(ulong *)((undefined *)register0x00000020 + -0x60) = uVar20;
        lVar5 = ((uVar21 >> 0x12 | uVar21 << 0x2e) ^ (uVar21 >> 0xe | uVar21 << 0x32) ^
                (uVar21 * 0x800000 | uVar21 >> 0x29)) +
                uVar8 + uVar20 + 0x597f299cfc657e2a + ((uVar10 ^ uVar27) & uVar21 ^ uVar10);
        uVar22 = uVar22 + lVar5;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        uVar8 = lVar5 + ((uVar13 | uVar11) & uVar19 | uVar13 & uVar11) +
                        ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24)
                        ^ (uVar11 * 0x2000000 | uVar11 >> 0x27));
        lVar5 = ((uVar18 >> 8 | uVar18 << 0x38) ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)
                ^ uVar18 >> 7) + *(long *)((undefined *)register0x00000020 + -0x168) +
                *(long *)((undefined *)register0x00000020 + -0x178) +
                ((uVar16 * 8 | uVar16 >> 0x3d) ^ (uVar16 >> 0x13 | uVar16 << 0x2d) ^ uVar16 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x58) = lVar5;
        unaff_R14 = lVar5 + 0x5fcb6fab3ad6faec;
        lVar5 = ((uVar22 >> 0x12 | uVar22 << 0x2e) ^ (uVar22 >> 0xe | uVar22 << 0x32) ^
                (uVar22 * 0x800000 | uVar22 >> 0x29)) +
                ((uVar27 ^ uVar21) & uVar22 ^ uVar27) + uVar10 + unaff_R14;
        uVar19 = uVar19 + lVar5;
        uVar18 = lVar5 + ((uVar11 | uVar8) & uVar13 | uVar11 & uVar8) +
                         ((uVar8 * 0x40000000 | uVar8 >> 0x22) ^ (uVar8 >> 0x1c | uVar8 << 0x24) ^
                         (uVar8 * 0x2000000 | uVar8 >> 0x27));
        *(ulong *)((undefined *)register0x00000020 + -0x128) =
             *(long *)((undefined *)register0x00000020 + -0x128) + uVar18;
        lVar5 = ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                uVar7 >> 7) + *(long *)((undefined *)register0x00000020 + -0x188) + uVar6 +
                ((uVar20 * 8 | uVar20 >> 0x3d) ^ (uVar20 >> 0x13 | uVar20 << 0x2d) ^ uVar20 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x50) = lVar5;
        lVar5 = ((uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32) ^
                (uVar19 * 0x800000 | uVar19 >> 0x29)) +
                uVar27 + lVar5 + 0x6c44198c4a475817 + ((uVar21 ^ uVar22) & uVar19 ^ uVar21);
        unaff_RBP = *(ulong *)((undefined *)register0x00000020 + -0x128);
        puVar4 = (undefined8 *)
                 (((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                  (uVar18 * 0x2000000 | uVar18 >> 0x27)) +
                  ((uVar8 | uVar18) & uVar11 | uVar8 & uVar18) +
                  *(long *)((undefined *)register0x00000020 + -0xe8) + lVar5);
        puVar3 = *(ulong **)((undefined *)register0x00000020 + -0xd8);
        *(undefined8 **)((undefined *)register0x00000020 + -0xe8) = puVar4;
        *(undefined8 **)puVar3 = puVar4;
        puVar3[1] = unaff_RBP;
        *(ulong *)((undefined *)register0x00000020 + -0x120) =
             *(long *)((undefined *)register0x00000020 + -0x120) + uVar8;
        unaff_R13 = *(ulong *)((undefined *)register0x00000020 + -0x120);
        *(ulong *)((undefined *)register0x00000020 + -0x118) =
             *(long *)((undefined *)register0x00000020 + -0x118) + uVar11;
        *(ulong *)((undefined *)register0x00000020 + -0x110) =
             *(long *)((undefined *)register0x00000020 + -0x110) + uVar13 + lVar5;
        puVar3[2] = unaff_R13;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x118);
        *(ulong *)((undefined *)register0x00000020 + -0x108) =
             *(long *)((undefined *)register0x00000020 + -0x108) + uVar19;
        *(ulong *)((undefined *)register0x00000020 + -0x100) =
             *(long *)((undefined *)register0x00000020 + -0x100) + uVar22;
        uVar6 = *(ulong *)((undefined *)register0x00000020 + -0x110);
        unaff_R12 = *(ulong *)((undefined *)register0x00000020 + -0x108);
        *(ulong *)((undefined *)register0x00000020 + -0xf8) =
             *(long *)((undefined *)register0x00000020 + -0xf8) + uVar21;
        puVar3[3] = uVar18;
        puVar17 = *(undefined8 **)((undefined *)register0x00000020 + -0x100);
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0xf8);
        puVar3[4] = uVar6;
        puVar3[5] = unaff_R12;
        *(undefined8 **)(puVar3 + 6) = puVar17;
        puVar3[7] = uVar7;
        param_1 = *(undefined8 **)((undefined *)register0x00000020 + -0x130);
        unaff_R15 = puVar4;
      } while (param_1 <= *(undefined8 **)((undefined *)register0x00000020 + -0xe0) &&
               *(undefined8 **)((undefined *)register0x00000020 + -0xe0) != param_1);
    }
    if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) break;
    *(undefined8 *)((undefined *)register0x00000020 + -0x1c0) = 0x107243;
    func_0x00101690();
    unaff_RBX = param_1;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x1b8);
    param_1 = puVar17;
  }
  return;
}

