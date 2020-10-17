
void sha512_process_block(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 unaff_RBX;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 unaff_RBP;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 unaff_R12;
  ulong unaff_R13;
  ulong uVar27;
  long unaff_R14;
  ulong uVar28;
  undefined8 *unaff_R15;
  long in_FS_OFFSET;
  
  while( true ) {
    *(undefined8 **)((undefined *)register0x00000020 + -8) = unaff_R15;
    *(long *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
    *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = unaff_R12;
    *(undefined8 *)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
    uVar9 = param_3[1];
    unaff_R13 = param_3[2];
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    lVar8 = param_3[3];
    uVar12 = param_3[4];
    uVar7 = param_3[5];
    lVar22 = param_3[7];
    puVar5 = (undefined8 *)((param_2 & 0xfffffffffffffff8) + (long)param_1);
    uVar16 = param_3[8];
    uVar15 = param_3[8];
    *(undefined8 **)((undefined *)register0x00000020 + -0x130) = param_1;
    puVar1 = (undefined8 *)param_3[6];
    *(undefined8 **)((undefined *)register0x00000020 + -0xd8) = param_3;
    *(undefined8 **)((undefined *)register0x00000020 + -0xe0) = puVar5;
    puVar6 = (undefined8 *)*param_3;
    param_3[8] = param_2 + uVar15;
    param_3[9] = param_3[9] + (ulong)CARRY8(param_2,uVar16);
    puVar14 = param_3;
    param_3 = puVar1;
    unaff_R15 = param_1;
    if (param_1 < puVar5) {
      *(long *)((undefined *)register0x00000020 + -0xf8) = lVar22;
      *(undefined8 **)((undefined *)register0x00000020 + -0x100) = puVar1;
      *(ulong *)((undefined *)register0x00000020 + -0x108) = uVar7;
      *(ulong *)((undefined *)register0x00000020 + -0x110) = uVar12;
      *(long *)((undefined *)register0x00000020 + -0x118) = lVar8;
      *(ulong *)((undefined *)register0x00000020 + -0x120) = unaff_R13;
      *(ulong *)((undefined *)register0x00000020 + -0x128) = uVar9;
      *(undefined8 **)((undefined *)register0x00000020 + -0xe8) = puVar6;
      *(undefined **)((undefined *)register0x00000020 + -0xd0) =
           (undefined *)register0x00000020 + -200;
      do {
        lVar2 = *(long *)((undefined *)register0x00000020 + -0x130);
        lVar3 = *(long *)((undefined *)register0x00000020 + -0xd0);
        lVar10 = 0;
        do {
          uVar15 = *(ulong *)(lVar2 + lVar10);
          *(ulong *)(lVar3 + lVar10) =
               uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
               (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
               (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 | (uVar15 & 0xff00) << 0x28
               | uVar15 << 0x38;
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0x80);
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0xc0);
        *(long *)((undefined *)register0x00000020 + -0x130) =
             *(long *)((undefined *)register0x00000020 + -0x130) + 0x80;
        lVar22 = lVar22 + *(long *)((undefined *)register0x00000020 + -200) + 0x428a2f98d728ae22 +
                 ((uVar12 << 0x17 | uVar12 >> 0x29) ^
                 (uVar12 >> 0xe | uVar12 << 0x32) ^ (uVar12 >> 0x12 | uVar12 << 0x2e)) +
                 ((uVar7 ^ (ulong)param_3) & uVar12 ^ (ulong)param_3);
        uVar18 = lVar8 + lVar22;
        uVar11 = (((ulong)puVar6 | uVar9) & unaff_R13 | (ulong)puVar6 & uVar9) +
                 (((long)puVar6 << 0x1e | (ulong)puVar6 >> 0x22) ^
                  ((ulong)puVar6 >> 0x1c | (long)puVar6 << 0x24) ^
                 ((long)puVar6 << 0x19 | (ulong)puVar6 >> 0x27)) + lVar22;
        lVar8 = (long)param_3 +
                ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                ((uVar12 ^ uVar7) & uVar18 ^ uVar7) + uVar16 + 0x7137449123ef65cd;
        uVar15 = lVar8 + unaff_R13;
        uVar25 = ((uVar11 | (ulong)puVar6) & uVar9 | uVar11 & (ulong)puVar6) +
                 ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                 (uVar11 * 0x2000000 | uVar11 >> 0x27)) + lVar8;
        lVar8 = ((uVar15 * 0x800000 | uVar15 >> 0x29) ^
                (uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32)) +
                *(long *)((undefined *)register0x00000020 + -0xb8) + -0x4a3f043013b2c4d1 + uVar7 +
                ((uVar18 ^ uVar12) & uVar15 ^ uVar12);
        uVar9 = lVar8 + uVar9;
        uVar13 = ((uVar11 | uVar25) & (ulong)puVar6 | uVar11 & uVar25) +
                 ((uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
                 (uVar25 * 0x2000000 | uVar25 >> 0x27)) + lVar8;
        lVar8 = ((uVar9 * 0x800000 | uVar9 >> 0x29) ^
                (uVar9 >> 0x12 | uVar9 << 0x2e) ^ (uVar9 >> 0xe | uVar9 << 0x32)) +
                ((uVar18 ^ uVar15) & uVar9 ^ uVar18) +
                uVar12 + *(long *)((undefined *)register0x00000020 + -0xb0) + -0x164a245a7e762444;
        uVar12 = lVar8 + (long)puVar6;
        uVar23 = ((uVar25 | uVar13) & uVar11 | uVar25 & uVar13) +
                 ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24) ^
                 (uVar13 * 0x2000000 | uVar13 >> 0x27)) + lVar8;
        lVar8 = ((uVar12 * 0x800000 | uVar12 >> 0x29) ^
                (uVar12 >> 0x12 | uVar12 << 0x2e) ^ (uVar12 >> 0xe | uVar12 << 0x32)) +
                uVar18 + *(long *)((undefined *)register0x00000020 + -0xa8) + 0x3956c25bf348b538 +
                ((uVar15 ^ uVar9) & uVar12 ^ uVar15);
        uVar11 = uVar11 + lVar8;
        uVar20 = ((uVar13 | uVar23) & uVar25 | uVar13 & uVar23) +
                 ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 * 0x2000000 | uVar23 >> 0x27)) + lVar8;
        lVar8 = ((uVar11 * 0x800000 | uVar11 >> 0x29) ^
                (uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32)) +
                ((uVar9 ^ uVar12) & uVar11 ^ uVar9) +
                uVar15 + *(long *)((undefined *)register0x00000020 + -0xa0) + 0x59f111f1b605d019;
        uVar25 = uVar25 + lVar8;
        uVar7 = ((uVar23 | uVar20) & uVar13 | uVar23 & uVar20) +
                ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar8;
        lVar8 = ((uVar25 * 0x800000 | uVar25 >> 0x29) ^
                (uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32)) +
                ((uVar12 ^ uVar11) & uVar25 ^ uVar12) +
                uVar9 + *(long *)((undefined *)register0x00000020 + -0x98) + -0x6dc07d5b50e6b065;
        uVar13 = uVar13 + lVar8;
        uVar19 = ((uVar20 | uVar7) & uVar23 | uVar20 & uVar7) +
                 ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
                 (uVar7 * 0x2000000 | uVar7 >> 0x27)) + lVar8;
        lVar8 = ((uVar13 * 0x800000 | uVar13 >> 0x29) ^
                (uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32)) +
                ((uVar11 ^ uVar25) & uVar13 ^ uVar11) +
                uVar12 + *(long *)((undefined *)register0x00000020 + -0x90) + -0x54e3a12a25927ee8;
        uVar23 = uVar23 + lVar8;
        uVar18 = ((uVar7 | uVar19) & uVar20 | uVar7 & uVar19) +
                 ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
                 (uVar19 * 0x2000000 | uVar19 >> 0x27)) + lVar8;
        lVar8 = ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
                (uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32)) +
                ((uVar25 ^ uVar13) & uVar23 ^ uVar25) +
                uVar11 + *(long *)((undefined *)register0x00000020 + -0x88) + -0x27f855675cfcfdbe;
        uVar20 = uVar20 + lVar8;
        uVar15 = ((uVar19 | uVar18) & uVar7 | uVar19 & uVar18) +
                 ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar8;
        lVar8 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
                (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
                uVar25 + *(long *)((undefined *)register0x00000020 + -0x80) + 0x12835b0145706fbe +
                ((uVar13 ^ uVar23) & uVar20 ^ uVar13);
        uVar7 = uVar7 + lVar8;
        uVar9 = ((uVar18 | uVar15) & uVar19 | uVar18 & uVar15) +
                ((uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
                (uVar15 * 0x2000000 | uVar15 >> 0x27)) + lVar8;
        lVar8 = ((uVar7 * 0x800000 | uVar7 >> 0x29) ^
                (uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32)) +
                uVar13 + *(long *)((undefined *)register0x00000020 + -0x78) + 0x243185be4ee4b28c +
                ((uVar23 ^ uVar20) & uVar7 ^ uVar23);
        uVar19 = uVar19 + lVar8;
        uVar12 = ((uVar15 | uVar9) & uVar18 | uVar15 & uVar9) +
                 ((uVar9 * 0x40000000 | uVar9 >> 0x22) ^ (uVar9 >> 0x1c | uVar9 << 0x24) ^
                 (uVar9 * 0x2000000 | uVar9 >> 0x27)) + lVar8;
        lVar8 = ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
                (uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32)) +
                ((uVar20 ^ uVar7) & uVar19 ^ uVar20) +
                uVar23 + *(long *)((undefined *)register0x00000020 + -0x70) + 0x550c7dc3d5ffb4e2;
        uVar18 = uVar18 + lVar8;
        uVar23 = ((uVar9 | uVar12) & uVar15 | uVar9 & uVar12) +
                 ((uVar12 * 0x40000000 | uVar12 >> 0x22) ^ (uVar12 >> 0x1c | uVar12 << 0x24) ^
                 (uVar12 * 0x2000000 | uVar12 >> 0x27)) + lVar8;
        lVar8 = ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                ((uVar7 ^ uVar19) & uVar18 ^ uVar7) +
                uVar20 + *(long *)((undefined *)register0x00000020 + -0x68) + 0x72be5d74f27b896f;
        uVar15 = uVar15 + lVar8;
        uVar25 = ((uVar12 | uVar23) & uVar9 | uVar12 & uVar23) +
                 ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 * 0x2000000 | uVar23 >> 0x27)) + lVar8;
        lVar8 = ((uVar15 * 0x800000 | uVar15 >> 0x29) ^
                (uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32)) +
                ((uVar19 ^ uVar18) & uVar15 ^ uVar19) +
                uVar7 + *(long *)((undefined *)register0x00000020 + -0x60) + -0x7f214e01c4e9694f;
        uVar9 = uVar9 + lVar8;
        uVar20 = ((uVar23 | uVar25) & uVar12 | uVar23 & uVar25) +
                 ((uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
                 (uVar25 * 0x2000000 | uVar25 >> 0x27)) + lVar8;
        lVar8 = ((uVar9 * 0x800000 | uVar9 >> 0x29) ^
                (uVar9 >> 0x12 | uVar9 << 0x2e) ^ (uVar9 >> 0xe | uVar9 << 0x32)) +
                uVar19 + *(long *)((undefined *)register0x00000020 + -0x58) + -0x6423f958da38edcb +
                ((uVar18 ^ uVar15) & uVar9 ^ uVar18);
        uVar12 = uVar12 + lVar8;
        uVar13 = ((uVar25 | uVar20) & uVar23 | uVar25 & uVar20) +
                 ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar8;
        lVar8 = ((uVar12 * 0x800000 | uVar12 >> 0x29) ^
                (uVar12 >> 0x12 | uVar12 << 0x2e) ^ (uVar12 >> 0xe | uVar12 << 0x32)) +
                uVar18 + *(long *)((undefined *)register0x00000020 + -0x50) + -0x3e640e8b3096d96c +
                ((uVar15 ^ uVar9) & uVar12 ^ uVar15);
        uVar23 = uVar23 + lVar8;
        uVar19 = ((uVar20 | uVar13) & uVar25 | uVar20 & uVar13) +
                 ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24) ^
                 (uVar13 * 0x2000000 | uVar13 >> 0x27)) + lVar8;
        uVar11 = ((uVar16 >> 8 | uVar16 << 0x38) ^
                  (uVar16 >> 1 | (ulong)((uVar16 & 1) != 0) << 0x3f) ^ uVar16 >> 7) +
                 (*(ulong *)((undefined *)register0x00000020 + -0x58) >> 6 ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x58) << 3 |
                 *(ulong *)((undefined *)register0x00000020 + -0x58) >> 0x3d) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x58) >> 0x13 |
                 *(ulong *)((undefined *)register0x00000020 + -0x58) << 0x2d)) +
                 *(long *)((undefined *)register0x00000020 + -200) +
                 *(long *)((undefined *)register0x00000020 + -0x80);
        lVar8 = ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
                (uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32)) +
                uVar15 + uVar11 + 0xe49b69c19ef14ad2 + ((uVar9 ^ uVar12) & uVar23 ^ uVar9);
        uVar25 = uVar25 + lVar8;
        uVar18 = ((uVar13 | uVar19) & uVar20 | uVar13 & uVar19) +
                 ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
                 (uVar19 * 0x2000000 | uVar19 >> 0x27)) + lVar8;
        uVar26 = ((*(ulong *)((undefined *)register0x00000020 + -0xb8) >> 8 |
                  *(ulong *)((undefined *)register0x00000020 + -0xb8) << 0x38) ^
                  (*(ulong *)((undefined *)register0x00000020 + -0xb8) >> 1 |
                  (ulong)((*(ulong *)((undefined *)register0x00000020 + -0xb8) & 1) != 0) << 0x3f) ^
                 *(ulong *)((undefined *)register0x00000020 + -0xb8) >> 7) +
                 (*(ulong *)((undefined *)register0x00000020 + -0x50) >> 6 ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x50) << 3 |
                 *(ulong *)((undefined *)register0x00000020 + -0x50) >> 0x3d) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x50) >> 0x13 |
                 *(ulong *)((undefined *)register0x00000020 + -0x50) << 0x2d)) +
                 *(long *)((undefined *)register0x00000020 + -0x78) + uVar16;
        lVar8 = ((uVar25 * 0x800000 | uVar25 >> 0x29) ^
                (uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32)) +
                uVar9 + uVar26 + 0xefbe4786384f25e3 + ((uVar12 ^ uVar23) & uVar25 ^ uVar12);
        uVar20 = uVar20 + lVar8;
        uVar16 = ((uVar19 | uVar18) & uVar13 | uVar19 & uVar18) +
                 ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar8;
        uVar24 = ((uVar11 * 8 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6) +
                 (*(ulong *)((undefined *)register0x00000020 + -0xb0) >> 7 ^
                 (*(ulong *)((undefined *)register0x00000020 + -0xb0) >> 8 |
                 *(ulong *)((undefined *)register0x00000020 + -0xb0) << 0x38) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0xb0) >> 1 |
                 (ulong)((*(ulong *)((undefined *)register0x00000020 + -0xb0) & 1) != 0) << 0x3f)) +
                 *(long *)((undefined *)register0x00000020 + -0xb8) +
                 *(long *)((undefined *)register0x00000020 + -0x70);
        lVar8 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
                (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
                uVar12 + uVar24 + 0xfc19dc68b8cd5b5 + ((uVar23 ^ uVar25) & uVar20 ^ uVar23);
        uVar13 = uVar13 + lVar8;
        uVar12 = ((uVar18 | uVar16) & uVar19 | uVar18 & uVar16) +
                 ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                 (uVar16 * 0x2000000 | uVar16 >> 0x27)) + lVar8;
        uVar21 = ((uVar26 * 8 | uVar26 >> 0x3d) ^ (uVar26 >> 0x13 | uVar26 << 0x2d) ^ uVar26 >> 6) +
                 (*(ulong *)((undefined *)register0x00000020 + -0xa8) >> 7 ^
                 (*(ulong *)((undefined *)register0x00000020 + -0xa8) >> 8 |
                 *(ulong *)((undefined *)register0x00000020 + -0xa8) << 0x38) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0xa8) >> 1 |
                 (ulong)((*(ulong *)((undefined *)register0x00000020 + -0xa8) & 1) != 0) << 0x3f)) +
                 *(long *)((undefined *)register0x00000020 + -0xb0) +
                 *(long *)((undefined *)register0x00000020 + -0x68);
        lVar8 = ((uVar13 * 0x800000 | uVar13 >> 0x29) ^
                (uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32)) +
                uVar23 + uVar21 + 0x240ca1cc77ac9c65 + ((uVar25 ^ uVar20) & uVar13 ^ uVar25);
        uVar19 = uVar19 + lVar8;
        uVar7 = ((uVar16 | uVar12) & uVar18 | uVar16 & uVar12) +
                ((uVar12 * 0x40000000 | uVar12 >> 0x22) ^ (uVar12 >> 0x1c | uVar12 << 0x24) ^
                (uVar12 * 0x2000000 | uVar12 >> 0x27)) + lVar8;
        lVar8 = (*(ulong *)((undefined *)register0x00000020 + -0xa0) >> 7 ^
                (*(ulong *)((undefined *)register0x00000020 + -0xa0) >> 1 |
                (ulong)((*(ulong *)((undefined *)register0x00000020 + -0xa0) & 1) != 0) << 0x3f) ^
                (*(ulong *)((undefined *)register0x00000020 + -0xa0) >> 8 |
                *(ulong *)((undefined *)register0x00000020 + -0xa0) << 0x38)) +
                *(long *)((undefined *)register0x00000020 + -0xa8) +
                *(long *)((undefined *)register0x00000020 + -0x60) +
                ((uVar24 * 8 | uVar24 >> 0x3d) ^ (uVar24 >> 0x13 | uVar24 << 0x2d) ^ uVar24 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x178) = lVar8;
        lVar8 = ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
                (uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32)) +
                uVar25 + lVar8 + 0x2de92c6f592b0275 + ((uVar20 ^ uVar13) & uVar19 ^ uVar20);
        uVar18 = uVar18 + lVar8;
        uVar15 = ((uVar12 | uVar7) & uVar16 | uVar12 & uVar7) +
                 ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
                 (uVar7 * 0x2000000 | uVar7 >> 0x27)) + lVar8;
        *(ulong *)((undefined *)register0x00000020 + -400) =
             (*(ulong *)((undefined *)register0x00000020 + -0x98) >> 7 ^
             (*(ulong *)((undefined *)register0x00000020 + -0x98) >> 1 |
             (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x98) & 1) != 0) << 0x3f) ^
             (*(ulong *)((undefined *)register0x00000020 + -0x98) >> 8 |
             *(ulong *)((undefined *)register0x00000020 + -0x98) << 0x38)) +
             *(long *)((undefined *)register0x00000020 + -0xa0) +
             *(long *)((undefined *)register0x00000020 + -0x58) +
             ((uVar21 * 8 | uVar21 >> 0x3d) ^ (uVar21 >> 0x13 | uVar21 << 0x2d) ^ uVar21 >> 6);
        lVar8 = ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                ((uVar13 ^ uVar19) & uVar18 ^ uVar13) +
                uVar20 + *(long *)((undefined *)register0x00000020 + -400) + 0x4a7484aa6ea6e483;
        uVar16 = uVar16 + lVar8;
        uVar20 = ((uVar7 | uVar15) & uVar12 | uVar7 & uVar15) +
                 ((uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
                 (uVar15 * 0x2000000 | uVar15 >> 0x27)) + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        *(ulong *)((undefined *)register0x00000020 + -0x188) =
             (*(ulong *)((undefined *)register0x00000020 + -0x90) >> 7 ^
             (*(ulong *)((undefined *)register0x00000020 + -0x90) >> 1 |
             (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x90) & 1) != 0) << 0x3f) ^
             (*(ulong *)((undefined *)register0x00000020 + -0x90) >> 8 |
             *(ulong *)((undefined *)register0x00000020 + -0x90) << 0x38)) +
             *(long *)((undefined *)register0x00000020 + -0x98) +
             *(long *)((undefined *)register0x00000020 + -0x50) +
             ((uVar9 << 3 | uVar9 >> 0x3d) ^ (uVar9 >> 0x13 | uVar9 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x178) >> 6);
        lVar8 = ((uVar16 * 0x800000 | uVar16 >> 0x29) ^
                (uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32)) +
                ((uVar19 ^ uVar18) & uVar16 ^ uVar19) +
                uVar13 + *(long *)((undefined *)register0x00000020 + -0x188) + 0x5cb0a9dcbd41fbd4;
        uVar12 = uVar12 + lVar8;
        uVar23 = ((uVar15 | uVar20) & uVar7 | uVar15 & uVar20) +
                 ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -400);
        *(ulong *)((undefined *)register0x00000020 + -0x1b8) =
             ((*(ulong *)((undefined *)register0x00000020 + -0x88) >> 8 |
              *(ulong *)((undefined *)register0x00000020 + -0x88) << 0x38) ^
              (*(ulong *)((undefined *)register0x00000020 + -0x88) >> 1 |
              (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x88) & 1) != 0) << 0x3f) ^
             *(ulong *)((undefined *)register0x00000020 + -0x88) >> 7) +
             *(long *)((undefined *)register0x00000020 + -0x90) + uVar11 +
             ((uVar9 << 3 | uVar9 >> 0x3d) ^ (uVar9 >> 0x13 | uVar9 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -400) >> 6);
        lVar8 = ((uVar12 * 0x800000 | uVar12 >> 0x29) ^
                (uVar12 >> 0x12 | uVar12 << 0x2e) ^ (uVar12 >> 0xe | uVar12 << 0x32)) +
                ((uVar18 ^ uVar16) & uVar12 ^ uVar18) +
                uVar19 + *(long *)((undefined *)register0x00000020 + -0x1b8) + 0x76f988da831153b5;
        uVar7 = uVar7 + lVar8;
        uVar19 = ((uVar20 | uVar23) & uVar15 | uVar20 & uVar23) +
                 ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 * 0x2000000 | uVar23 >> 0x27)) + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        *(ulong *)((undefined *)register0x00000020 + -0x180) =
             ((*(ulong *)((undefined *)register0x00000020 + -0x80) >> 8 |
              *(ulong *)((undefined *)register0x00000020 + -0x80) << 0x38) ^
              (*(ulong *)((undefined *)register0x00000020 + -0x80) >> 1 |
              (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x80) & 1) != 0) << 0x3f) ^
             *(ulong *)((undefined *)register0x00000020 + -0x80) >> 7) +
             *(long *)((undefined *)register0x00000020 + -0x88) + uVar26 +
             ((uVar9 << 3 | uVar9 >> 0x3d) ^ (uVar9 >> 0x13 | uVar9 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x188) >> 6);
        lVar8 = ((uVar7 * 0x800000 | uVar7 >> 0x29) ^
                (uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32)) +
                ((uVar16 ^ uVar12) & uVar7 ^ uVar16) +
                uVar18 + *(long *)((undefined *)register0x00000020 + -0x180) + -0x67c1aead11992055;
        uVar15 = uVar15 + lVar8;
        uVar13 = ((uVar23 | uVar19) & uVar20 | uVar23 & uVar19) +
                 ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
                 (uVar19 * 0x2000000 | uVar19 >> 0x27)) + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        *(ulong *)((undefined *)register0x00000020 + -0x1b0) =
             ((*(ulong *)((undefined *)register0x00000020 + -0x78) >> 8 |
              *(ulong *)((undefined *)register0x00000020 + -0x78) << 0x38) ^
              (*(ulong *)((undefined *)register0x00000020 + -0x78) >> 1 |
              (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x78) & 1) != 0) << 0x3f) ^
             *(ulong *)((undefined *)register0x00000020 + -0x78) >> 7) +
             *(long *)((undefined *)register0x00000020 + -0x80) + uVar24 +
             ((uVar9 << 3 | uVar9 >> 0x3d) ^ (uVar9 >> 0x13 | uVar9 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x1b8) >> 6);
        lVar8 = ((uVar15 * 0x800000 | uVar15 >> 0x29) ^
                (uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32)) +
                ((uVar12 ^ uVar7) & uVar15 ^ uVar12) +
                uVar16 + *(long *)((undefined *)register0x00000020 + -0x1b0) + -0x57ce3992d24bcdf0;
        uVar20 = uVar20 + lVar8;
        uVar18 = ((uVar19 | uVar13) & uVar23 | uVar19 & uVar13) +
                 ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24) ^
                 (uVar13 * 0x2000000 | uVar13 >> 0x27)) + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        *(ulong *)((undefined *)register0x00000020 + -0x1a8) =
             ((*(ulong *)((undefined *)register0x00000020 + -0x70) >> 8 |
              *(ulong *)((undefined *)register0x00000020 + -0x70) << 0x38) ^
              (*(ulong *)((undefined *)register0x00000020 + -0x70) >> 1 |
              (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x70) & 1) != 0) << 0x3f) ^
             *(ulong *)((undefined *)register0x00000020 + -0x70) >> 7) +
             *(long *)((undefined *)register0x00000020 + -0x78) + uVar21 +
             ((uVar9 << 3 | uVar9 >> 0x3d) ^ (uVar9 >> 0x13 | uVar9 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x180) >> 6);
        lVar8 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
                (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
                ((uVar7 ^ uVar15) & uVar20 ^ uVar7) +
                uVar12 + *(long *)((undefined *)register0x00000020 + -0x1a8) + -0x4ffcd8376704dec1;
        uVar23 = uVar23 + lVar8;
        uVar9 = ((uVar13 | uVar18) & uVar19 | uVar13 & uVar18) +
                ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar8;
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -0x1b0);
        lVar8 = ((*(ulong *)((undefined *)register0x00000020 + -0x68) >> 8 |
                 *(ulong *)((undefined *)register0x00000020 + -0x68) << 0x38) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x68) >> 1 |
                 (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x68) & 1) != 0) << 0x3f) ^
                *(ulong *)((undefined *)register0x00000020 + -0x68) >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x70) +
                *(long *)((undefined *)register0x00000020 + -0x178) +
                ((uVar12 << 3 | uVar12 >> 0x3d) ^ (uVar12 >> 0x13 | uVar12 << 0x2d) ^
                *(ulong *)((undefined *)register0x00000020 + -0x1b0) >> 6);
        *(long *)((undefined *)register0x00000020 + -0x170) = lVar8;
        lVar8 = ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
                (uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32)) +
                ((uVar15 ^ uVar20) & uVar23 ^ uVar15) + uVar7 + lVar8 + -0x40a680384110f11c;
        uVar19 = uVar19 + lVar8;
        uVar12 = ((uVar18 | uVar9) & uVar13 | uVar18 & uVar9) +
                 ((uVar9 * 0x40000000 | uVar9 >> 0x22) ^ (uVar9 >> 0x1c | uVar9 << 0x24) ^
                 (uVar9 * 0x2000000 | uVar9 >> 0x27)) + lVar8;
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
        lVar8 = ((uVar19 * 0x800000 | uVar19 >> 0x29) ^
                (uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32)) +
                ((uVar20 ^ uVar23) & uVar19 ^ uVar20) +
                uVar15 + *(long *)((undefined *)register0x00000020 + -0x1a0) + -0x391ff40cc257703e;
        uVar13 = uVar13 + lVar8;
        uVar17 = ((uVar9 | uVar12) & uVar18 | uVar9 & uVar12) +
                 ((uVar12 * 0x40000000 | uVar12 >> 0x22) ^ (uVar12 >> 0x1c | uVar12 << 0x24) ^
                 (uVar12 * 0x2000000 | uVar12 >> 0x27)) + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        lVar8 = ((*(ulong *)((undefined *)register0x00000020 + -0x58) >> 8 |
                 *(ulong *)((undefined *)register0x00000020 + -0x58) << 0x38) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x58) >> 1 |
                 (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x58) & 1) != 0) << 0x3f) ^
                *(ulong *)((undefined *)register0x00000020 + -0x58) >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x60) +
                *(long *)((undefined *)register0x00000020 + -0x188) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^
                *(ulong *)((undefined *)register0x00000020 + -0x170) >> 6);
        *(long *)((undefined *)register0x00000020 + -0x198) = lVar8;
        lVar8 = ((uVar13 * 0x800000 | uVar13 >> 0x29) ^
                (uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32)) +
                uVar20 + lVar8 + -0x2a586eb86cf558db + ((uVar23 ^ uVar19) & uVar13 ^ uVar23);
        uVar18 = uVar18 + lVar8;
        uVar20 = ((uVar12 | uVar17) & uVar9 | uVar12 & uVar17) +
                 ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24) ^
                 (uVar17 * 0x2000000 | uVar17 >> 0x27)) + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x1a0);
        lVar8 = ((*(ulong *)((undefined *)register0x00000020 + -0x50) >> 8 |
                 *(ulong *)((undefined *)register0x00000020 + -0x50) << 0x38) ^
                 (*(ulong *)((undefined *)register0x00000020 + -0x50) >> 1 |
                 (ulong)((*(ulong *)((undefined *)register0x00000020 + -0x50) & 1) != 0) << 0x3f) ^
                *(ulong *)((undefined *)register0x00000020 + -0x50) >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x58) +
                *(long *)((undefined *)register0x00000020 + -0x1b8) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^
                *(ulong *)((undefined *)register0x00000020 + -0x1a0) >> 6);
        *(long *)((undefined *)register0x00000020 + -0x160) = lVar8;
        lVar8 = ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                uVar23 + lVar8 + 0x6ca6351e003826f + ((uVar19 ^ uVar13) & uVar18 ^ uVar19);
        uVar9 = uVar9 + lVar8;
        uVar23 = ((uVar17 | uVar20) & uVar12 | uVar17 & uVar20) +
                 ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x198);
        *(ulong *)((undefined *)register0x00000020 + -0x168) =
             ((uVar11 >> 8 | uVar11 << 0x38) ^ (uVar11 >> 1 | (ulong)((uVar11 & 1) != 0) << 0x3f) ^
             uVar11 >> 7) + *(long *)((undefined *)register0x00000020 + -0x50) +
             *(long *)((undefined *)register0x00000020 + -0x180) +
             ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^
             *(ulong *)((undefined *)register0x00000020 + -0x198) >> 6);
        lVar8 = ((uVar9 >> 0x12 | uVar9 << 0x2e) ^ (uVar9 >> 0xe | uVar9 << 0x32) ^
                (uVar9 * 0x800000 | uVar9 >> 0x29)) +
                ((uVar13 ^ uVar18) & uVar9 ^ uVar13) +
                uVar19 + *(long *)((undefined *)register0x00000020 + -0x168) + 0x142929670a0e6e70;
        uVar12 = uVar12 + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        uVar16 = lVar8 + ((uVar20 | uVar23) & uVar17 | uVar20 & uVar23) +
                         ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24)
                         ^ (uVar23 * 0x2000000 | uVar23 >> 0x27));
        uVar7 = uVar11 + ((uVar26 >> 8 | uVar26 << 0x38) ^
                          (uVar26 >> 1 | (ulong)((uVar26 & 1) != 0) << 0x3f) ^ uVar26 >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x1b0) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
        lVar8 = ((uVar12 >> 0x12 | uVar12 << 0x2e) ^ (uVar12 >> 0xe | uVar12 << 0x32) ^
                (uVar12 * 0x800000 | uVar12 >> 0x29)) +
                uVar13 + uVar7 + 0x27b70a8546d22ffc + ((uVar18 ^ uVar9) & uVar12 ^ uVar18);
        uVar17 = uVar17 + lVar8;
        uVar15 = *(ulong *)((undefined *)register0x00000020 + -0x168);
        uVar25 = ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                 (uVar16 * 0x2000000 | uVar16 >> 0x27)) +
                 ((uVar23 | uVar16) & uVar20 | uVar23 & uVar16) + lVar8;
        uVar15 = uVar26 + ((uVar24 >> 8 | uVar24 << 0x38) ^
                           (uVar24 >> 1 | (ulong)((uVar24 & 1) != 0) << 0x3f) ^ uVar24 >> 7) +
                 *(long *)((undefined *)register0x00000020 + -0x1a8) +
                 ((uVar15 << 3 | uVar15 >> 0x3d) ^ (uVar15 >> 0x13 | uVar15 << 0x2d) ^ uVar15 >> 6);
        lVar8 = ((uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32) ^
                (uVar17 * 0x800000 | uVar17 >> 0x29)) +
                uVar18 + uVar15 + 0x2e1b21385c26c926 + ((uVar9 ^ uVar12) & uVar17 ^ uVar9);
        uVar20 = uVar20 + lVar8;
        uVar11 = ((uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
                 (uVar25 * 0x2000000 | uVar25 >> 0x27)) +
                 ((uVar16 | uVar25) & uVar23 | uVar16 & uVar25) + lVar8;
        lVar8 = uVar24 + ((uVar21 >> 8 | uVar21 << 0x38) ^
                          (uVar21 >> 1 | (ulong)((uVar21 & 1) != 0) << 0x3f) ^ uVar21 >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x170) +
                ((uVar7 * 8 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x158) = lVar8;
        lVar8 = ((uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32) ^
                (uVar20 * 0x800000 | uVar20 >> 0x29)) +
                uVar9 + lVar8 + 0x4d2c6dfc5ac42aed + ((uVar12 ^ uVar17) & uVar20 ^ uVar12);
        uVar13 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        uVar23 = uVar23 + lVar8;
        uVar24 = ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                 (uVar11 * 0x2000000 | uVar11 >> 0x27)) +
                 ((uVar25 | uVar11) & uVar16 | uVar25 & uVar11) + lVar8;
        lVar8 = uVar21 + ((uVar13 >> 8 | uVar13 << 0x38) ^
                          (uVar13 >> 1 | (ulong)((uVar13 & 1) != 0) << 0x3f) ^ uVar13 >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x1a0) +
                ((uVar15 * 8 | uVar15 >> 0x3d) ^ (uVar15 >> 0x13 | uVar15 << 0x2d) ^ uVar15 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x178) = lVar8;
        lVar8 = ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
                (uVar23 * 0x800000 | uVar23 >> 0x29)) +
                uVar12 + lVar8 + 0x53380d139d95b3df + ((uVar17 ^ uVar20) & uVar23 ^ uVar17);
        uVar16 = uVar16 + lVar8;
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -400);
        uVar9 = ((uVar24 * 0x40000000 | uVar24 >> 0x22) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
                (uVar24 * 0x2000000 | uVar24 >> 0x27)) +
                ((uVar11 | uVar24) & uVar25 | uVar11 & uVar24) + lVar8;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x158);
        lVar8 = ((uVar12 >> 8 | uVar12 << 0x38) ^ (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f)
                ^ uVar12 >> 7) + uVar13 + *(long *)((undefined *)register0x00000020 + -0x198) +
                ((uVar18 << 3 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^ uVar18 >> 6);
        *(long *)((undefined *)register0x00000020 + -400) = lVar8;
        uVar19 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        lVar8 = ((uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32) ^
                (uVar16 * 0x800000 | uVar16 >> 0x29)) +
                uVar17 + lVar8 + 0x650a73548baf63de + ((uVar20 ^ uVar23) & uVar16 ^ uVar20);
        uVar25 = uVar25 + lVar8;
        uVar13 = ((uVar9 * 0x40000000 | uVar9 >> 0x22) ^ (uVar9 >> 0x1c | uVar9 << 0x24) ^
                 (uVar9 * 0x2000000 | uVar9 >> 0x27)) + ((uVar24 | uVar9) & uVar11 | uVar24 & uVar9)
                 + lVar8;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        lVar8 = ((uVar19 >> 8 | uVar19 << 0x38) ^ (uVar19 >> 1 | (ulong)((uVar19 & 1) != 0) << 0x3f)
                ^ uVar19 >> 7) + uVar12 + *(long *)((undefined *)register0x00000020 + -0x160) +
                ((uVar18 << 3 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^ uVar18 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x188) = lVar8;
        lVar8 = ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32) ^
                (uVar25 * 0x800000 | uVar25 >> 0x29)) +
                uVar20 + lVar8 + 0x766a0abb3c77b2a8 + ((uVar23 ^ uVar16) & uVar25 ^ uVar23);
        uVar11 = uVar11 + lVar8;
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -400);
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        uVar18 = ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24) ^
                 (uVar13 * 0x2000000 | uVar13 >> 0x27)) +
                 ((uVar9 | uVar13) & uVar24 | uVar9 & uVar13) + lVar8;
        lVar8 = ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
                ^ uVar20 >> 7) + uVar19 + *(long *)((undefined *)register0x00000020 + -0x168) +
                ((uVar12 << 3 | uVar12 >> 0x3d) ^ (uVar12 >> 0x13 | uVar12 << 0x2d) ^ uVar12 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x150) = lVar8;
        uVar19 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        lVar8 = ((uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32) ^
                (uVar11 * 0x800000 | uVar11 >> 0x29)) +
                uVar23 + lVar8 + -0x7e3d36d1b812511a + ((uVar16 ^ uVar25) & uVar11 ^ uVar16);
        uVar24 = uVar24 + lVar8;
        uVar17 = ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) +
                 ((uVar13 | uVar18) & uVar9 | uVar13 & uVar18) + lVar8;
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        lVar8 = ((uVar12 << 3 | uVar12 >> 0x3d) ^ (uVar12 >> 0x13 | uVar12 << 0x2d) ^ uVar12 >> 6) +
                ((uVar19 >> 8 | uVar19 << 0x38) ^ (uVar19 >> 1 | (ulong)((uVar19 & 1) != 0) << 0x3f)
                ^ uVar19 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1b8) + uVar7;
        *(long *)((undefined *)register0x00000020 + -0x180) = lVar8;
        lVar8 = ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32) ^
                (uVar24 * 0x800000 | uVar24 >> 0x29)) +
                uVar16 + lVar8 + -0x6d8dd37aeb7dcac5 + ((uVar25 ^ uVar11) & uVar24 ^ uVar25);
        uVar9 = uVar9 + lVar8;
        uVar12 = ((uVar18 | uVar17) & uVar13 | uVar18 & uVar17) +
                 ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24) ^
                 (uVar17 * 0x2000000 | uVar17 >> 0x27)) + lVar8;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x1b0);
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x150);
        lVar8 = ((uVar16 >> 8 | uVar16 << 0x38) ^ (uVar16 >> 1 | (ulong)((uVar16 & 1) != 0) << 0x3f)
                ^ uVar16 >> 7) + uVar19 + uVar15 +
                ((uVar20 << 3 | uVar20 >> 0x3d) ^ (uVar20 >> 0x13 | uVar20 << 0x2d) ^ uVar20 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x1b8) = lVar8;
        lVar8 = ((uVar9 >> 0x12 | uVar9 << 0x2e) ^ (uVar9 >> 0xe | uVar9 << 0x32) ^
                (uVar9 * 0x800000 | uVar9 >> 0x29)) +
                uVar25 + lVar8 + -0x5d40175eb30efc9c + ((uVar11 ^ uVar24) & uVar9 ^ uVar11);
        uVar13 = uVar13 + lVar8;
        uVar19 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        uVar16 = ((uVar17 | uVar12) & uVar18 | uVar17 & uVar12) +
                 ((uVar12 * 0x40000000 | uVar12 >> 0x22) ^ (uVar12 >> 0x1c | uVar12 << 0x24) ^
                 (uVar12 * 0x2000000 | uVar12 >> 0x27)) + lVar8;
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        lVar8 = ((uVar19 << 3 | uVar19 >> 0x3d) ^ (uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6) +
                ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
                ^ uVar20 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1b0) +
                *(long *)((undefined *)register0x00000020 + -0x158);
        *(long *)((undefined *)register0x00000020 + -0x148) = lVar8;
        lVar8 = ((uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32) ^
                (uVar13 * 0x800000 | uVar13 >> 0x29)) +
                lVar8 + -0x57e599b443bdcfff + uVar11 + ((uVar24 ^ uVar9) & uVar13 ^ uVar24);
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        uVar18 = uVar18 + lVar8;
        uVar19 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        uVar11 = ((uVar12 | uVar16) & uVar17 | uVar12 & uVar16) +
                 ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                 (uVar16 * 0x2000000 | uVar16 >> 0x27)) + lVar8;
        lVar8 = ((uVar19 << 3 | uVar19 >> 0x3d) ^ (uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6) +
                ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
                ^ uVar20 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1a8) +
                *(long *)((undefined *)register0x00000020 + -0x178);
        uVar23 = *(ulong *)((undefined *)register0x00000020 + -0x1a0);
        *(long *)((undefined *)register0x00000020 + -0x1a8) = lVar8;
        lVar8 = ((uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32) ^
                (uVar18 * 0x800000 | uVar18 >> 0x29)) +
                uVar24 + lVar8 + -0x3db4748f2f07686f + ((uVar9 ^ uVar13) & uVar18 ^ uVar9);
        uVar17 = uVar17 + lVar8;
        uVar19 = ((uVar16 | uVar11) & uVar12 | uVar16 & uVar11) +
                 ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24) ^
                 (uVar11 * 0x2000000 | uVar11 >> 0x27)) + lVar8;
        uVar25 = *(ulong *)((undefined *)register0x00000020 + -0x148);
        lVar8 = ((uVar25 << 3 | uVar25 >> 0x3d) ^ (uVar25 >> 0x13 | uVar25 << 0x2d) ^ uVar25 >> 6) +
                ((uVar23 >> 8 | uVar23 << 0x38) ^ (uVar23 >> 1 | (ulong)((uVar23 & 1) != 0) << 0x3f)
                ^ uVar23 >> 7) + uVar20 + *(long *)((undefined *)register0x00000020 + -400);
        *(long *)((undefined *)register0x00000020 + -0x170) = lVar8;
        lVar8 = ((uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32) ^
                (uVar17 * 0x800000 | uVar17 >> 0x29)) +
                lVar8 + -0x3893ae5cf9ab41d0 + uVar9 + ((uVar13 ^ uVar18) & uVar17 ^ uVar13);
        uVar12 = uVar12 + lVar8;
        uVar9 = ((uVar11 | uVar19) & uVar16 | uVar11 & uVar19) +
                ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
                (uVar19 * 0x2000000 | uVar19 >> 0x27)) + lVar8;
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x198);
        uVar23 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        lVar8 = ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
                ^ uVar20 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1a0) +
                *(long *)((undefined *)register0x00000020 + -0x188) +
                ((uVar23 << 3 | uVar23 >> 0x3d) ^ (uVar23 >> 0x13 | uVar23 << 0x2d) ^ uVar23 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x140) = lVar8;
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        lVar8 = ((uVar12 >> 0x12 | uVar12 << 0x2e) ^ (uVar12 >> 0xe | uVar12 << 0x32) ^
                (uVar12 * 0x800000 | uVar12 >> 0x29)) +
                lVar8 + -0x2e6d17e62910ade8 + uVar13 + ((uVar18 ^ uVar17) & uVar12 ^ uVar18);
        uVar16 = uVar16 + lVar8;
        uVar23 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        uVar13 = ((uVar19 | uVar9) & uVar11 | uVar19 & uVar9) +
                 ((uVar9 * 0x40000000 | uVar9 >> 0x22) ^ (uVar9 >> 0x1c | uVar9 << 0x24) ^
                 (uVar9 * 0x2000000 | uVar9 >> 0x27)) + lVar8;
        lVar8 = ((uVar23 << 3 | uVar23 >> 0x3d) ^ (uVar23 >> 0x13 | uVar23 << 0x2d) ^ uVar23 >> 6) +
                ((uVar20 >> 8 | uVar20 << 0x38) ^ (uVar20 >> 1 | (ulong)((uVar20 & 1) != 0) << 0x3f)
                ^ uVar20 >> 7) + *(long *)((undefined *)register0x00000020 + -0x198) +
                *(long *)((undefined *)register0x00000020 + -0x150);
        *(long *)((undefined *)register0x00000020 + -0x160) = lVar8;
        lVar8 = ((uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32) ^
                (uVar16 * 0x800000 | uVar16 >> 0x29)) +
                lVar8 + -0x2966f9dbaa9a56f0 + uVar18 + ((uVar17 ^ uVar12) & uVar16 ^ uVar17);
        uVar11 = uVar11 + lVar8;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x168);
        uVar24 = ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24) ^
                 (uVar13 * 0x2000000 | uVar13 >> 0x27)) +
                 ((uVar9 | uVar13) & uVar19 | uVar9 & uVar13) + lVar8;
        uVar23 = *(ulong *)((undefined *)register0x00000020 + -0x140);
        uVar23 = ((uVar18 >> 8 | uVar18 << 0x38) ^
                  (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f) ^ uVar18 >> 7) + uVar20 +
                 *(long *)((undefined *)register0x00000020 + -0x180) +
                 ((uVar23 << 3 | uVar23 >> 0x3d) ^ (uVar23 >> 0x13 | uVar23 << 0x2d) ^ uVar23 >> 6);
        *(ulong *)((undefined *)register0x00000020 + -0xf0) = uVar23;
        lVar8 = ((uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32) ^
                (uVar11 * 0x800000 | uVar11 >> 0x29)) +
                uVar17 + uVar23 + 0xf40e35855771202a + ((uVar12 ^ uVar16) & uVar11 ^ uVar12);
        uVar19 = uVar19 + lVar8;
        uVar25 = ((uVar24 * 0x40000000 | uVar24 >> 0x22) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
                 (uVar24 * 0x2000000 | uVar24 >> 0x27)) +
                 ((uVar13 | uVar24) & uVar9 | uVar13 & uVar24) + lVar8;
        uVar20 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        lVar8 = ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                uVar7 >> 7) + uVar18 + *(long *)((undefined *)register0x00000020 + -0x1b8) +
                ((uVar20 << 3 | uVar20 >> 0x3d) ^ (uVar20 >> 0x13 | uVar20 << 0x2d) ^ uVar20 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x168) = lVar8;
        lVar8 = ((uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32) ^
                (uVar19 * 0x800000 | uVar19 >> 0x29)) +
                uVar12 + lVar8 + 0x106aa07032bbd1b8 + ((uVar16 ^ uVar11) & uVar19 ^ uVar16);
        uVar9 = uVar9 + lVar8;
        uVar20 = ((uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
                 (uVar25 * 0x2000000 | uVar25 >> 0x27)) +
                 ((uVar24 | uVar25) & uVar13 | uVar24 & uVar25) + lVar8;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x158);
        uVar12 = ((uVar15 >> 8 | uVar15 << 0x38) ^
                  (uVar15 >> 1 | (ulong)((uVar15 & 1) != 0) << 0x3f) ^ uVar15 >> 7) + uVar7 +
                 *(long *)((undefined *)register0x00000020 + -0x148) +
                 ((uVar23 * 8 | uVar23 >> 0x3d) ^ (uVar23 >> 0x13 | uVar23 << 0x2d) ^ uVar23 >> 6);
        lVar8 = ((uVar9 >> 0x12 | uVar9 << 0x2e) ^ (uVar9 >> 0xe | uVar9 << 0x32) ^
                (uVar9 * 0x800000 | uVar9 >> 0x29)) +
                uVar16 + uVar12 + 0x19a4c116b8d2d0c8 + ((uVar11 ^ uVar19) & uVar9 ^ uVar11);
        uVar13 = uVar13 + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x168);
        uVar21 = ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) +
                 ((uVar25 | uVar20) & uVar24 | uVar25 & uVar20) + lVar8;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        lVar8 = ((uVar18 >> 8 | uVar18 << 0x38) ^ (uVar18 >> 1 | (ulong)((uVar18 & 1) != 0) << 0x3f)
                ^ uVar18 >> 7) + uVar15 + *(long *)((undefined *)register0x00000020 + -0x1a8) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x158) = lVar8;
        lVar8 = ((uVar13 >> 0x12 | uVar13 << 0x2e) ^ (uVar13 >> 0xe | uVar13 << 0x32) ^
                (uVar13 * 0x800000 | uVar13 >> 0x29)) +
                uVar11 + lVar8 + 0x1e376c085141ab53 + ((uVar19 ^ uVar9) & uVar13 ^ uVar19);
        uVar24 = uVar24 + lVar8;
        uVar17 = ((uVar20 | uVar21) & uVar25 | uVar20 & uVar21) +
                 ((uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 >> 0x1c | uVar21 << 0x24) ^
                 (uVar21 * 0x2000000 | uVar21 >> 0x27)) + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -400);
        lVar8 = ((uVar16 >> 8 | uVar16 << 0x38) ^ (uVar16 >> 1 | (ulong)((uVar16 & 1) != 0) << 0x3f)
                ^ uVar16 >> 7) + uVar18 + *(long *)((undefined *)register0x00000020 + -0x170) +
                ((uVar12 * 8 | uVar12 >> 0x3d) ^ (uVar12 >> 0x13 | uVar12 << 0x2d) ^ uVar12 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x178) = lVar8;
        uVar15 = *(ulong *)((undefined *)register0x00000020 + -0x158);
        lVar8 = ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32) ^
                (uVar24 * 0x800000 | uVar24 >> 0x29)) +
                uVar19 + lVar8 + 0x2748774cdf8eeb99 + ((uVar9 ^ uVar13) & uVar24 ^ uVar9);
        uVar25 = uVar25 + lVar8;
        uVar19 = ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24) ^
                 (uVar17 * 0x2000000 | uVar17 >> 0x27)) +
                 ((uVar21 | uVar17) & uVar20 | uVar21 & uVar17) + lVar8;
        uVar11 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        uVar15 = ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                 uVar7 >> 7) + uVar16 + *(long *)((undefined *)register0x00000020 + -0x140) +
                 ((uVar15 << 3 | uVar15 >> 0x3d) ^ (uVar15 >> 0x13 | uVar15 << 0x2d) ^ uVar15 >> 6);
        lVar8 = ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32) ^
                (uVar25 * 0x800000 | uVar25 >> 0x29)) +
                uVar9 + uVar15 + 0x34b0bcb5e19b48a8 + ((uVar13 ^ uVar24) & uVar25 ^ uVar13);
        uVar20 = uVar20 + lVar8;
        uVar18 = ((uVar19 * 0x40000000 | uVar19 >> 0x22) ^ (uVar19 >> 0x1c | uVar19 << 0x24) ^
                 (uVar19 * 0x2000000 | uVar19 >> 0x27)) +
                 ((uVar17 | uVar19) & uVar21 | uVar17 & uVar19) + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        lVar8 = ((uVar9 << 3 | uVar9 >> 0x3d) ^ (uVar9 >> 0x13 | uVar9 << 0x2d) ^ uVar9 >> 6) +
                ((uVar11 >> 8 | uVar11 << 0x38) ^ (uVar11 >> 1 | (ulong)((uVar11 & 1) != 0) << 0x3f)
                ^ uVar11 >> 7) + uVar7 + *(long *)((undefined *)register0x00000020 + -0x160);
        *(long *)((undefined *)register0x00000020 + -0x138) = lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x150);
        lVar8 = ((uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32) ^
                (uVar20 * 0x800000 | uVar20 >> 0x29)) +
                uVar13 + lVar8 + 0x391c0cb3c5c95a63 + ((uVar24 ^ uVar25) & uVar20 ^ uVar24);
        uVar21 = uVar21 + lVar8;
        uVar26 = ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) +
                 ((uVar19 | uVar18) & uVar17 | uVar19 & uVar18) + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        *(ulong *)((undefined *)register0x00000020 + -0x150) = uVar15;
        uVar16 = ((uVar15 * 8 | uVar15 >> 0x3d) ^ (uVar15 >> 0x13 | uVar15 << 0x2d) ^ uVar15 >> 6) +
                 ((uVar9 >> 8 | uVar9 << 0x38) ^ (uVar9 >> 1 | (ulong)((uVar9 & 1) != 0) << 0x3f) ^
                 uVar9 >> 7) + uVar11 + *(long *)((undefined *)register0x00000020 + -0xf0);
        lVar8 = ((uVar21 >> 0x12 | uVar21 << 0x2e) ^ (uVar21 >> 0xe | uVar21 << 0x32) ^
                (uVar21 * 0x800000 | uVar21 >> 0x29)) +
                uVar24 + uVar16 + 0x4ed8aa4ae3418acb + ((uVar25 ^ uVar20) & uVar21 ^ uVar25);
        uVar17 = uVar17 + lVar8;
        uVar24 = ((uVar26 * 0x40000000 | uVar26 >> 0x22) ^ (uVar26 >> 0x1c | uVar26 << 0x24) ^
                 (uVar26 * 0x2000000 | uVar26 >> 0x27)) +
                 ((uVar18 | uVar26) & uVar19 | uVar18 & uVar26) + lVar8;
        uVar15 = *(ulong *)((undefined *)register0x00000020 + -0x138);
        lVar8 = ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                uVar7 >> 7) + uVar9 + *(long *)((undefined *)register0x00000020 + -0x168) +
                ((uVar15 << 3 | uVar15 >> 0x3d) ^ (uVar15 >> 0x13 | uVar15 << 0x2d) ^ uVar15 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x1b0) = lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        lVar8 = ((uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32) ^
                (uVar17 * 0x800000 | uVar17 >> 0x29)) +
                uVar25 + lVar8 + 0x5b9cca4f7763e373 + ((uVar20 ^ uVar21) & uVar17 ^ uVar20);
        uVar19 = uVar19 + lVar8;
        uVar23 = ((uVar24 * 0x40000000 | uVar24 >> 0x22) ^ (uVar24 >> 0x1c | uVar24 << 0x24) ^
                 (uVar24 * 0x2000000 | uVar24 >> 0x27)) +
                 ((uVar26 | uVar24) & uVar18 | uVar26 & uVar24) + lVar8;
        uVar15 = *(ulong *)((undefined *)register0x00000020 + -0x1b0);
        *(ulong *)((undefined *)register0x00000020 + -0x180) = uVar16;
        uVar11 = ((uVar9 >> 8 | uVar9 << 0x38) ^ (uVar9 >> 1 | (ulong)((uVar9 & 1) != 0) << 0x3f) ^
                 uVar9 >> 7) + uVar7 + uVar12 +
                 ((uVar16 * 8 | uVar16 >> 0x3d) ^ (uVar16 >> 0x13 | uVar16 << 0x2d) ^ uVar16 >> 6);
        lVar8 = ((uVar19 >> 0x12 | uVar19 << 0x2e) ^ (uVar19 >> 0xe | uVar19 << 0x32) ^
                (uVar19 * 0x800000 | uVar19 >> 0x29)) +
                uVar20 + uVar11 + 0x682e6ff3d6b2b8a3 + ((uVar21 ^ uVar17) & uVar19 ^ uVar21);
        uVar18 = uVar18 + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x148);
        *(ulong *)((undefined *)register0x00000020 + -0x148) = uVar11;
        uVar9 = ((uVar24 | uVar23) & uVar26 | uVar24 & uVar23) +
                ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                (uVar23 * 0x2000000 | uVar23 >> 0x27)) + lVar8;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        lVar8 = ((uVar15 << 3 | uVar15 >> 0x3d) ^ (uVar15 >> 0x13 | uVar15 << 0x2d) ^ uVar15 >> 6) +
                *(long *)((undefined *)register0x00000020 + -0x158) +
                ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                uVar7 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1b8);
        *(long *)((undefined *)register0x00000020 + -0x1b8) = lVar8;
        lVar8 = ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                uVar21 + lVar8 + 0x748f82ee5defb2fc + ((uVar17 ^ uVar19) & uVar18 ^ uVar17);
        uVar26 = uVar26 + lVar8;
        uVar20 = ((uVar23 | uVar9) & uVar24 | uVar23 & uVar9) +
                 ((uVar9 * 0x40000000 | uVar9 >> 0x22) ^ (uVar9 >> 0x1c | uVar9 << 0x24) ^
                 (uVar9 * 0x2000000 | uVar9 >> 0x27)) + lVar8;
        lVar8 = *(long *)((undefined *)register0x00000020 + -0x178) +
                ((uVar16 >> 8 | uVar16 << 0x38) ^ (uVar16 >> 1 | (ulong)((uVar16 & 1) != 0) << 0x3f)
                ^ uVar16 >> 7) + uVar7 +
                ((uVar11 * 8 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x1a8) = lVar8;
        lVar8 = ((uVar26 * 0x800000 | uVar26 >> 0x29) ^
                (uVar26 >> 0x12 | uVar26 << 0x2e) ^ (uVar26 >> 0xe | uVar26 << 0x32)) +
                uVar17 + lVar8 + 0x78a5636f43172f60 + ((uVar19 ^ uVar18) & uVar26 ^ uVar19);
        uVar24 = uVar24 + lVar8;
        uVar15 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        uVar11 = *(ulong *)((undefined *)register0x00000020 + -0x140);
        uVar25 = ((uVar9 | uVar20) & uVar23 | uVar9 & uVar20) +
                 ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        lVar8 = *(long *)((undefined *)register0x00000020 + -0x150) +
                ((uVar15 >> 8 | uVar15 << 0x38) ^ (uVar15 >> 1 | (ulong)((uVar15 & 1) != 0) << 0x3f)
                ^ uVar15 >> 7) + uVar16 +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x1a0) = lVar8;
        lVar8 = ((uVar24 * 0x800000 | uVar24 >> 0x29) ^
                (uVar24 >> 0x12 | uVar24 << 0x2e) ^ (uVar24 >> 0xe | uVar24 << 0x32)) +
                ((uVar18 ^ uVar26) & uVar24 ^ uVar18) + uVar19 + lVar8 + -0x7b3787eb5e0f548e;
        uVar23 = uVar23 + lVar8;
        uVar7 = ((uVar20 | uVar25) & uVar9 | uVar20 & uVar25) +
                ((uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
                (uVar25 * 0x2000000 | uVar25 >> 0x27)) + lVar8;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        uVar13 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        lVar8 = ((uVar16 << 3 | uVar16 >> 0x3d) ^ (uVar16 >> 0x13 | uVar16 << 0x2d) ^ uVar16 >> 6) +
                *(long *)((undefined *)register0x00000020 + -0x138) +
                ((uVar11 >> 8 | uVar11 << 0x38) ^ (uVar11 >> 1 | (ulong)((uVar11 & 1) != 0) << 0x3f)
                ^ uVar11 >> 7) + uVar15;
        *(long *)((undefined *)register0x00000020 + -0x198) = lVar8;
        lVar8 = ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
                (uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32)) +
                uVar18 + lVar8 + -0x7338fdf7e59bc614 + ((uVar26 ^ uVar24) & uVar23 ^ uVar26);
        uVar9 = uVar9 + lVar8;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x168);
        uVar15 = ((uVar25 | uVar7) & uVar20 | uVar25 & uVar7) +
                 ((uVar7 * 0x40000000 | uVar7 >> 0x22) ^ (uVar7 >> 0x1c | uVar7 << 0x24) ^
                 (uVar7 * 0x2000000 | uVar7 >> 0x27)) + lVar8;
        uVar18 = *(ulong *)((undefined *)register0x00000020 + -0x1a0);
        uVar19 = *(ulong *)((undefined *)register0x00000020 + -0xf0);
        lVar8 = ((uVar13 >> 8 | uVar13 << 0x38) ^ (uVar13 >> 1 | (ulong)((uVar13 & 1) != 0) << 0x3f)
                ^ uVar13 >> 7) + uVar11 + *(long *)((undefined *)register0x00000020 + -0x180) +
                ((uVar18 << 3 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d) ^ uVar18 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x170) = lVar8;
        lVar8 = ((uVar9 * 0x800000 | uVar9 >> 0x29) ^
                (uVar9 >> 0x12 | uVar9 << 0x2e) ^ (uVar9 >> 0xe | uVar9 << 0x32)) +
                uVar26 + lVar8 + -0x6f410005dc9ce1d8 + ((uVar24 ^ uVar23) & uVar9 ^ uVar24);
        uVar20 = uVar20 + lVar8;
        uVar27 = ((uVar7 | uVar15) & uVar25 | uVar7 & uVar15) +
                 ((uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 >> 0x1c | uVar15 << 0x24) ^
                 (uVar15 * 0x2000000 | uVar15 >> 0x27)) + lVar8;
        uVar11 = *(ulong *)((undefined *)register0x00000020 + -0x198);
        lVar8 = ((uVar19 >> 8 | uVar19 << 0x38) ^ (uVar19 >> 1 | (ulong)((uVar19 & 1) != 0) << 0x3f)
                ^ uVar19 >> 7) + uVar13 + *(long *)((undefined *)register0x00000020 + -0x1b0) +
                ((uVar11 << 3 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6);
        *(long *)((undefined *)register0x00000020 + -400) = lVar8;
        lVar8 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
                (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
                uVar24 + lVar8 + -0x5baf9314217d4217 + ((uVar23 ^ uVar9) & uVar20 ^ uVar23);
        uVar25 = uVar25 + lVar8;
        uVar28 = ((uVar15 | uVar27) & uVar7 | uVar15 & uVar27) +
                 ((uVar27 * 0x40000000 | uVar27 >> 0x22) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
                 (uVar27 * 0x2000000 | uVar27 >> 0x27)) + lVar8;
        uVar11 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        uVar13 = ((uVar16 >> 8 | uVar16 << 0x38) ^
                  (uVar16 >> 1 | (ulong)((uVar16 & 1) != 0) << 0x3f) ^ uVar16 >> 7) + uVar19 +
                 *(long *)((undefined *)register0x00000020 + -0x148) +
                 ((uVar11 << 3 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6);
        *(ulong *)((undefined *)register0x00000020 + -0x168) = uVar13;
        lVar8 = ((uVar25 * 0x800000 | uVar25 >> 0x29) ^
                (uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32)) +
                ((uVar9 ^ uVar20) & uVar25 ^ uVar9) + uVar23 + uVar13 + 0xbef9a3f7b2c67915;
        uVar7 = uVar7 + lVar8;
        uVar11 = *(ulong *)((undefined *)register0x00000020 + -400);
        uVar18 = ((uVar27 | uVar28) & uVar15 | uVar27 & uVar28) +
                 ((uVar28 * 0x40000000 | uVar28 >> 0x22) ^ (uVar28 >> 0x1c | uVar28 << 0x24) ^
                 (uVar28 * 0x2000000 | uVar28 >> 0x27)) + lVar8;
        lVar8 = ((uVar12 >> 8 | uVar12 << 0x38) ^ (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f)
                ^ uVar12 >> 7) + uVar16 + *(long *)((undefined *)register0x00000020 + -0x1b8) +
                ((uVar11 << 3 | uVar11 >> 0x3d) ^ (uVar11 >> 0x13 | uVar11 << 0x2d) ^ uVar11 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x188) = lVar8;
        lVar8 = ((uVar7 * 0x800000 | uVar7 >> 0x29) ^
                (uVar7 >> 0x12 | uVar7 << 0x2e) ^ (uVar7 >> 0xe | uVar7 << 0x32)) +
                ((uVar20 ^ uVar25) & uVar7 ^ uVar20) + uVar9 + lVar8 + -0x398e870d1c8dacd5;
        uVar15 = uVar15 + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x158);
        uVar23 = ((uVar28 | uVar18) & uVar27 | uVar28 & uVar18) +
                 ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24) ^
                 (uVar18 * 0x2000000 | uVar18 >> 0x27)) + lVar8;
        lVar8 = ((uVar13 * 8 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6) +
                uVar12 + ((uVar9 >> 8 | uVar9 << 0x38) ^
                          (uVar9 >> 1 | (ulong)((uVar9 & 1) != 0) << 0x3f) ^ uVar9 >> 7) +
                *(long *)((undefined *)register0x00000020 + -0x1a8);
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        *(long *)((undefined *)register0x00000020 + -200) = lVar8;
        *(long *)((undefined *)register0x00000020 + -0x160) = lVar8;
        lVar8 = ((uVar15 * 0x800000 | uVar15 >> 0x29) ^
                (uVar15 >> 0x12 | uVar15 << 0x2e) ^ (uVar15 >> 0xe | uVar15 << 0x32)) +
                ((uVar25 ^ uVar7) & uVar15 ^ uVar25) + uVar20 + lVar8 + -0x35d8c13115d99e64;
        uVar27 = uVar27 + lVar8;
        uVar21 = ((uVar18 | uVar23) & uVar28 | uVar18 & uVar23) +
                 ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24) ^
                 (uVar23 * 0x2000000 | uVar23 >> 0x27)) + lVar8;
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        uVar11 = *(ulong *)((undefined *)register0x00000020 + -0x150);
        uVar26 = ((uVar16 << 3 | uVar16 >> 0x3d) ^ (uVar16 >> 0x13 | uVar16 << 0x2d) ^ uVar16 >> 6)
                 + ((uVar12 >> 8 | uVar12 << 0x38) ^
                    (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f) ^ uVar12 >> 7) + uVar9 +
                   *(long *)((undefined *)register0x00000020 + -0x1a0);
        *(ulong *)((undefined *)register0x00000020 + -0xc0) = uVar26;
        lVar8 = ((uVar27 * 0x800000 | uVar27 >> 0x29) ^
                (uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32)) +
                uVar25 + uVar26 + 0xd186b8c721c0c207 + ((uVar7 ^ uVar15) & uVar27 ^ uVar7);
        uVar28 = uVar28 + lVar8;
        uVar17 = ((uVar23 | uVar21) & uVar18 | uVar23 & uVar21) +
                 ((uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 >> 0x1c | uVar21 << 0x24) ^
                 (uVar21 * 0x2000000 | uVar21 >> 0x27)) + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        uVar16 = *(ulong *)((undefined *)register0x00000020 + -0x138);
        uVar19 = ((uVar9 << 3 | uVar9 >> 0x3d) ^ (uVar9 >> 0x13 | uVar9 << 0x2d) ^ uVar9 >> 6) +
                 ((uVar11 >> 8 | uVar11 << 0x38) ^
                  (uVar11 >> 1 | (ulong)((uVar11 & 1) != 0) << 0x3f) ^ uVar11 >> 7) + uVar12 +
                 *(long *)((undefined *)register0x00000020 + -0x198);
        *(ulong *)((undefined *)register0x00000020 + -0xb8) = uVar19;
        lVar8 = ((uVar28 * 0x800000 | uVar28 >> 0x29) ^
                (uVar28 >> 0x12 | uVar28 << 0x2e) ^ (uVar28 >> 0xe | uVar28 << 0x32)) +
                uVar7 + uVar19 + 0xeada7dd6cde0eb1e + ((uVar15 ^ uVar27) & uVar28 ^ uVar15);
        uVar18 = uVar18 + lVar8;
        uVar25 = ((uVar21 | uVar17) & uVar23 | uVar21 & uVar17) +
                 ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24) ^
                 (uVar17 * 0x2000000 | uVar17 >> 0x27)) + lVar8;
        uVar13 = ((uVar26 * 8 | uVar26 >> 0x3d) ^ (uVar26 >> 0x13 | uVar26 << 0x2d) ^ uVar26 >> 6) +
                 ((uVar16 >> 8 | uVar16 << 0x38) ^
                  (uVar16 >> 1 | (ulong)((uVar16 & 1) != 0) << 0x3f) ^ uVar16 >> 7) +
                 *(long *)((undefined *)register0x00000020 + -0x150) +
                 *(long *)((undefined *)register0x00000020 + -0x170);
        *(ulong *)((undefined *)register0x00000020 + -0xb0) = uVar13;
        lVar8 = ((uVar18 * 0x800000 | uVar18 >> 0x29) ^
                (uVar18 >> 0x12 | uVar18 << 0x2e) ^ (uVar18 >> 0xe | uVar18 << 0x32)) +
                ((uVar27 ^ uVar28) & uVar18 ^ uVar27) + uVar15 + uVar13 + 0xf57d4f7fee6ed178;
        uVar23 = uVar23 + lVar8;
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        uVar9 = ((uVar17 | uVar25) & uVar21 | uVar17 & uVar25) +
                ((uVar25 * 0x40000000 | uVar25 >> 0x22) ^ (uVar25 >> 0x1c | uVar25 << 0x24) ^
                (uVar25 * 0x2000000 | uVar25 >> 0x27)) + lVar8;
        uVar24 = ((uVar19 * 8 | uVar19 >> 0x3d) ^ (uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6) +
                 *(long *)((undefined *)register0x00000020 + -400) +
                 ((uVar12 >> 8 | uVar12 << 0x38) ^
                  (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f) ^ uVar12 >> 7) + uVar16;
        *(ulong *)((undefined *)register0x00000020 + -0xa8) = uVar24;
        lVar8 = ((uVar23 * 0x800000 | uVar23 >> 0x29) ^
                (uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32)) +
                uVar27 + uVar24 + 0x6f067aa72176fba + ((uVar28 ^ uVar18) & uVar23 ^ uVar28);
        uVar21 = uVar21 + lVar8;
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -0x1b0);
        uVar20 = ((uVar25 | uVar9) & uVar17 | uVar25 & uVar9) +
                 ((uVar9 * 0x40000000 | uVar9 >> 0x22) ^ (uVar9 >> 0x1c | uVar9 << 0x24) ^
                 (uVar9 * 0x2000000 | uVar9 >> 0x27)) + lVar8;
        lVar8 = ((uVar12 >> 8 | uVar12 << 0x38) ^ (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f)
                ^ uVar12 >> 7) + *(long *)((undefined *)register0x00000020 + -0x180) +
                *(long *)((undefined *)register0x00000020 + -0x168) +
                ((uVar13 * 8 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x180) = lVar8;
        *(long *)((undefined *)register0x00000020 + -0xa0) = lVar8;
        lVar8 = ((uVar21 * 0x800000 | uVar21 >> 0x29) ^
                (uVar21 >> 0x12 | uVar21 << 0x2e) ^ (uVar21 >> 0xe | uVar21 << 0x32)) +
                uVar28 + lVar8 + 0xa637dc5a2c898a6 + ((uVar18 ^ uVar23) & uVar21 ^ uVar18);
        uVar17 = uVar17 + lVar8;
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -0x148);
        uVar16 = ((uVar9 | uVar20) & uVar25 | uVar9 & uVar20) +
                 ((uVar20 * 0x40000000 | uVar20 >> 0x22) ^ (uVar20 >> 0x1c | uVar20 << 0x24) ^
                 (uVar20 * 0x2000000 | uVar20 >> 0x27)) + lVar8;
        lVar8 = ((uVar12 >> 8 | uVar12 << 0x38) ^ (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f)
                ^ uVar12 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1b0) +
                *(long *)((undefined *)register0x00000020 + -0x188) +
                ((uVar24 * 8 | uVar24 >> 0x3d) ^ (uVar24 >> 0x13 | uVar24 << 0x2d) ^ uVar24 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x98) = lVar8;
        *(long *)((undefined *)register0x00000020 + -0x1b0) = lVar8;
        lVar8 = ((uVar17 * 0x800000 | uVar17 >> 0x29) ^
                (uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32)) +
                ((uVar23 ^ uVar21) & uVar17 ^ uVar23) + uVar18 + lVar8 + 0x113f9804bef90dae;
        uVar25 = uVar25 + lVar8;
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -0x1b8);
        uVar11 = ((uVar20 | uVar16) & uVar9 | uVar20 & uVar16) +
                 ((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                 (uVar16 * 0x2000000 | uVar16 >> 0x27)) + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x180);
        lVar8 = ((uVar12 >> 8 | uVar12 << 0x38) ^ (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f)
                ^ uVar12 >> 7) + *(long *)((undefined *)register0x00000020 + -0x148) +
                *(long *)((undefined *)register0x00000020 + -0x160) +
                ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^
                *(ulong *)((undefined *)register0x00000020 + -0x180) >> 6);
        *(long *)((undefined *)register0x00000020 + -0x90) = lVar8;
        *(long *)((undefined *)register0x00000020 + -0x178) = lVar8;
        lVar8 = ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ (uVar25 >> 0xe | uVar25 << 0x32) ^
                (uVar25 * 0x800000 | uVar25 >> 0x29)) +
                uVar23 + lVar8 + 0x1b710b35131c471b + ((uVar21 ^ uVar17) & uVar25 ^ uVar21);
        uVar9 = uVar9 + lVar8;
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -0x1a8);
        uVar27 = lVar8 + ((uVar16 | uVar11) & uVar20 | uVar16 & uVar11) +
                         ((uVar11 * 0x40000000 | uVar11 >> 0x22) ^ (uVar11 >> 0x1c | uVar11 << 0x24)
                         ^ (uVar11 * 0x2000000 | uVar11 >> 0x27));
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x1b0);
        uVar12 = uVar26 + ((uVar12 >> 8 | uVar12 << 0x38) ^
                           (uVar12 >> 1 | (ulong)((uVar12 & 1) != 0) << 0x3f) ^ uVar12 >> 7) +
                          *(long *)((undefined *)register0x00000020 + -0x1b8) +
                 ((uVar7 << 3 | uVar7 >> 0x3d) ^ (uVar7 >> 0x13 | uVar7 << 0x2d) ^ uVar7 >> 6);
        *(ulong *)((undefined *)register0x00000020 + -0x88) = uVar12;
        lVar8 = ((uVar9 * 0x800000 | uVar9 >> 0x29) ^
                (uVar9 >> 0x12 | uVar9 << 0x2e) ^ (uVar9 >> 0xe | uVar9 << 0x32)) +
                ((uVar17 ^ uVar25) & uVar9 ^ uVar17) + uVar21 + uVar12 + 0x28db77f523047d84;
        uVar20 = uVar20 + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x1a0);
        uVar21 = ((uVar11 | uVar27) & uVar16 | uVar11 & uVar27) +
                 ((uVar27 * 0x40000000 | uVar27 >> 0x22) ^ (uVar27 >> 0x1c | uVar27 << 0x24) ^
                 (uVar27 * 0x2000000 | uVar27 >> 0x27)) + lVar8;
        uVar15 = *(ulong *)((undefined *)register0x00000020 + -0x178);
        uVar15 = ((uVar15 << 3 | uVar15 >> 0x3d) ^ (uVar15 >> 0x13 | uVar15 << 0x2d) ^ uVar15 >> 6)
                 + ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f)
                   ^ uVar7 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1a8) + uVar19;
        *(ulong *)((undefined *)register0x00000020 + -0x80) = uVar15;
        lVar8 = ((uVar20 * 0x800000 | uVar20 >> 0x29) ^
                (uVar20 >> 0x12 | uVar20 << 0x2e) ^ (uVar20 >> 0xe | uVar20 << 0x32)) +
                ((uVar25 ^ uVar9) & uVar20 ^ uVar25) + uVar17 + uVar15 + 0x32caab7b40c72493;
        uVar16 = uVar16 + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x198);
        uVar17 = ((uVar27 | uVar21) & uVar11 | uVar27 & uVar21) +
                 ((uVar21 * 0x40000000 | uVar21 >> 0x22) ^ (uVar21 >> 0x1c | uVar21 << 0x24) ^
                 (uVar21 * 0x2000000 | uVar21 >> 0x27)) + lVar8;
        uVar13 = ((uVar12 * 8 | uVar12 >> 0x3d) ^ (uVar12 >> 0x13 | uVar12 << 0x2d) ^ uVar12 >> 6) +
                 ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                 uVar7 >> 7) + *(long *)((undefined *)register0x00000020 + -0x1a0) + uVar13;
        *(ulong *)((undefined *)register0x00000020 + -0x78) = uVar13;
        lVar8 = ((uVar16 >> 0x12 | uVar16 << 0x2e) ^ (uVar16 >> 0xe | uVar16 << 0x32) ^
                (uVar16 * 0x800000 | uVar16 >> 0x29)) +
                ((uVar9 ^ uVar20) & uVar16 ^ uVar9) + uVar25 + uVar13 + 0x3c9ebe0a15c9bebc;
        uVar11 = uVar11 + lVar8;
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x170);
        uVar23 = lVar8 + ((uVar21 | uVar17) & uVar27 | uVar21 & uVar17) +
                         ((uVar17 * 0x40000000 | uVar17 >> 0x22) ^ (uVar17 >> 0x1c | uVar17 << 0x24)
                         ^ (uVar17 * 0x2000000 | uVar17 >> 0x27));
        uVar18 = ((uVar15 * 8 | uVar15 >> 0x3d) ^ (uVar15 >> 0x13 | uVar15 << 0x2d) ^ uVar15 >> 6) +
                 ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                 uVar7 >> 7) + *(long *)((undefined *)register0x00000020 + -0x198) + uVar24;
        *(ulong *)((undefined *)register0x00000020 + -0x70) = uVar18;
        lVar8 = ((uVar11 >> 0x12 | uVar11 << 0x2e) ^ (uVar11 >> 0xe | uVar11 << 0x32) ^
                (uVar11 * 0x800000 | uVar11 >> 0x29)) +
                uVar9 + uVar18 + 0x431d67c49c100d4c + ((uVar20 ^ uVar16) & uVar11 ^ uVar20);
        uVar27 = uVar27 + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -400);
        uVar15 = lVar8 + ((uVar17 | uVar23) & uVar21 | uVar17 & uVar23) +
                         ((uVar23 * 0x40000000 | uVar23 >> 0x22) ^ (uVar23 >> 0x1c | uVar23 << 0x24)
                         ^ (uVar23 * 0x2000000 | uVar23 >> 0x27));
        uVar19 = ((uVar13 * 8 | uVar13 >> 0x3d) ^ (uVar13 >> 0x13 | uVar13 << 0x2d) ^ uVar13 >> 6) +
                 ((uVar9 >> 8 | uVar9 << 0x38) ^ (uVar9 >> 1 | (ulong)((uVar9 & 1) != 0) << 0x3f) ^
                 uVar9 >> 7) + uVar7 + *(long *)((undefined *)register0x00000020 + -0x180);
        *(ulong *)((undefined *)register0x00000020 + -0x68) = uVar19;
        lVar8 = ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ (uVar27 >> 0xe | uVar27 << 0x32) ^
                (uVar27 * 0x800000 | uVar27 >> 0x29)) +
                uVar20 + uVar19 + 0x4cc5d4becb3e42b6 + ((uVar16 ^ uVar11) & uVar27 ^ uVar16);
        uVar21 = uVar21 + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x168);
        uVar13 = lVar8 + ((uVar23 | uVar15) & uVar17 | uVar23 & uVar15) +
                         ((uVar15 * 0x40000000 | uVar15 >> 0x22) ^ (uVar15 >> 0x1c | uVar15 << 0x24)
                         ^ (uVar15 * 0x2000000 | uVar15 >> 0x27));
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x160);
        uVar20 = (uVar18 >> 6 ^ (uVar18 * 8 | uVar18 >> 0x3d) ^ (uVar18 >> 0x13 | uVar18 << 0x2d)) +
                 ((uVar9 >> 8 | uVar9 << 0x38) ^ (uVar9 >> 1 | (ulong)((uVar9 & 1) != 0) << 0x3f) ^
                 uVar9 >> 7) + *(long *)((undefined *)register0x00000020 + -400) +
                 *(long *)((undefined *)register0x00000020 + -0x1b0);
        *(ulong *)((undefined *)register0x00000020 + -0x60) = uVar20;
        lVar8 = ((uVar21 >> 0x12 | uVar21 << 0x2e) ^ (uVar21 >> 0xe | uVar21 << 0x32) ^
                (uVar21 * 0x800000 | uVar21 >> 0x29)) +
                uVar16 + uVar20 + 0x597f299cfc657e2a + ((uVar11 ^ uVar27) & uVar21 ^ uVar11);
        uVar17 = uVar17 + lVar8;
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x188);
        uVar18 = lVar8 + ((uVar15 | uVar13) & uVar23 | uVar15 & uVar13) +
                         ((uVar13 * 0x40000000 | uVar13 >> 0x22) ^ (uVar13 >> 0x1c | uVar13 << 0x24)
                         ^ (uVar13 * 0x2000000 | uVar13 >> 0x27));
        lVar8 = ((uVar9 >> 8 | uVar9 << 0x38) ^ (uVar9 >> 1 | (ulong)((uVar9 & 1) != 0) << 0x3f) ^
                uVar9 >> 7) + *(long *)((undefined *)register0x00000020 + -0x168) +
                *(long *)((undefined *)register0x00000020 + -0x178) +
                ((uVar19 * 8 | uVar19 >> 0x3d) ^ (uVar19 >> 0x13 | uVar19 << 0x2d) ^ uVar19 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x58) = lVar8;
        unaff_R14 = lVar8 + 0x5fcb6fab3ad6faec;
        lVar8 = ((uVar17 >> 0x12 | uVar17 << 0x2e) ^ (uVar17 >> 0xe | uVar17 << 0x32) ^
                (uVar17 * 0x800000 | uVar17 >> 0x29)) +
                ((uVar27 ^ uVar21) & uVar17 ^ uVar27) + uVar11 + unaff_R14;
        uVar23 = uVar23 + lVar8;
        uVar16 = lVar8 + ((uVar13 | uVar18) & uVar15 | uVar13 & uVar18) +
                         ((uVar18 * 0x40000000 | uVar18 >> 0x22) ^ (uVar18 >> 0x1c | uVar18 << 0x24)
                         ^ (uVar18 * 0x2000000 | uVar18 >> 0x27));
        *(ulong *)((undefined *)register0x00000020 + -0x128) =
             *(long *)((undefined *)register0x00000020 + -0x128) + uVar16;
        lVar8 = ((uVar7 >> 8 | uVar7 << 0x38) ^ (uVar7 >> 1 | (ulong)((uVar7 & 1) != 0) << 0x3f) ^
                uVar7 >> 7) + *(long *)((undefined *)register0x00000020 + -0x188) + uVar12 +
                ((uVar20 * 8 | uVar20 >> 0x3d) ^ (uVar20 >> 0x13 | uVar20 << 0x2d) ^ uVar20 >> 6);
        *(long *)((undefined *)register0x00000020 + -0x50) = lVar8;
        lVar8 = ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ (uVar23 >> 0xe | uVar23 << 0x32) ^
                (uVar23 * 0x800000 | uVar23 >> 0x29)) +
                uVar27 + lVar8 + 0x6c44198c4a475817 + ((uVar21 ^ uVar17) & uVar23 ^ uVar21);
        uVar9 = *(ulong *)((undefined *)register0x00000020 + -0x128);
        puVar6 = (undefined8 *)
                 (((uVar16 * 0x40000000 | uVar16 >> 0x22) ^ (uVar16 >> 0x1c | uVar16 << 0x24) ^
                  (uVar16 * 0x2000000 | uVar16 >> 0x27)) +
                  ((uVar18 | uVar16) & uVar13 | uVar18 & uVar16) +
                  *(long *)((undefined *)register0x00000020 + -0xe8) + lVar8);
        plVar4 = *(long **)((undefined *)register0x00000020 + -0xd8);
        *(undefined8 **)((undefined *)register0x00000020 + -0xe8) = puVar6;
        *(undefined8 **)plVar4 = puVar6;
        plVar4[1] = uVar9;
        *(ulong *)((undefined *)register0x00000020 + -0x120) =
             *(long *)((undefined *)register0x00000020 + -0x120) + uVar18;
        unaff_R13 = *(ulong *)((undefined *)register0x00000020 + -0x120);
        *(ulong *)((undefined *)register0x00000020 + -0x118) =
             *(long *)((undefined *)register0x00000020 + -0x118) + uVar13;
        *(ulong *)((undefined *)register0x00000020 + -0x110) =
             *(long *)((undefined *)register0x00000020 + -0x110) + uVar15 + lVar8;
        plVar4[2] = unaff_R13;
        lVar8 = *(long *)((undefined *)register0x00000020 + -0x118);
        *(ulong *)((undefined *)register0x00000020 + -0x108) =
             *(long *)((undefined *)register0x00000020 + -0x108) + uVar23;
        *(ulong *)((undefined *)register0x00000020 + -0x100) =
             *(long *)((undefined *)register0x00000020 + -0x100) + uVar17;
        uVar12 = *(ulong *)((undefined *)register0x00000020 + -0x110);
        uVar7 = *(ulong *)((undefined *)register0x00000020 + -0x108);
        *(ulong *)((undefined *)register0x00000020 + -0xf8) =
             *(long *)((undefined *)register0x00000020 + -0xf8) + uVar21;
        plVar4[3] = lVar8;
        param_3 = *(undefined8 **)((undefined *)register0x00000020 + -0x100);
        lVar22 = *(long *)((undefined *)register0x00000020 + -0xf8);
        plVar4[4] = uVar12;
        plVar4[5] = uVar7;
        *(undefined8 **)(plVar4 + 6) = param_3;
        plVar4[7] = lVar22;
        puVar14 = *(undefined8 **)((undefined *)register0x00000020 + -0x130);
        unaff_R15 = puVar6;
      } while (puVar14 <= *(undefined8 **)((undefined *)register0x00000020 + -0xe0) &&
               *(undefined8 **)((undefined *)register0x00000020 + -0xe0) != puVar14);
    }
    if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) break;
    *(undefined8 *)((undefined *)register0x00000020 + -0x1c0) = 0x107243;
    func_0x00101690();
    *(ulong *)((undefined *)register0x00000020 + -0x1c0) = uVar7;
    *(ulong *)((undefined *)register0x00000020 + -0x1c8) = uVar9;
    *(undefined8 **)((undefined *)register0x00000020 + -0x1d0) = puVar14;
    uVar9 = param_3[10];
    lVar8 = param_3[9];
    param_2 = (-(ulong)(uVar9 < 0x70) & 0xffffffffffffff80) + 0x100;
    uVar12 = param_3[8];
    uVar7 = uVar9 + param_3[8];
    param_3[8] = uVar7;
    if (CARRY8(uVar9,uVar12) != false) {
      lVar8 = lVar8 + 1;
      param_3[9] = lVar8;
    }
    uVar12 = lVar8 << 3;
    param_1 = param_3 + 0xb;
    uVar15 = uVar7 * 8;
    param_3[(-(ulong)(uVar9 < 0x70) & 0xfffffffffffffff0) + 0x29] =
         uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 | (uVar12 & 0xff0000000000) >> 0x18 |
         (uVar12 & 0xff00000000) >> 8 | (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
         (uVar12 & 0xff00) << 0x28 | (uVar12 | uVar7 >> 0x3d) << 0x38;
    param_3[(-(ulong)(uVar9 < 0x70) & 0xfffffffffffffff0) + 0x2a] =
         uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 | (uVar15 & 0xff0000000000) >> 0x18 |
         (uVar15 & 0xff00000000) >> 8 | (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 |
         (uVar15 & 0xff00) << 0x28 | uVar7 << 0x3b;
    *(undefined8 *)((undefined *)register0x00000020 + -0x1d8) = 0x1072ee;
    func_0x00101770((long)param_1 + uVar9,fillbuf,(param_2 - uVar9) + -0x10);
    unaff_RBX = *(undefined8 *)((undefined *)register0x00000020 + -0x1d0);
    unaff_RBP = *(undefined8 *)((undefined *)register0x00000020 + -0x1c8);
    unaff_R12 = *(undefined8 *)((undefined *)register0x00000020 + -0x1c0);
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x1b8);
  }
  return;
}

