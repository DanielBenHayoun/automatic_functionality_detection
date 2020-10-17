
void sha256_process_block(uint *param_1,ulong param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 unaff_RBX;
  uint *puVar12;
  ulong unaff_RBP;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 unaff_R12;
  ulong uVar22;
  uint uVar23;
  ulong unaff_R13;
  uint uVar24;
  uint uVar25;
  ulong unaff_R14;
  uint *unaff_R15;
  long in_FS_OFFSET;
  bool bVar26;
  
  while( true ) {
    *(uint **)((undefined *)register0x00000020 + -8) = unaff_R15;
    *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
    *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = unaff_R12;
    *(ulong *)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
    uVar3 = param_3[1];
    uVar22 = (ulong)uVar3;
    uVar15 = param_3[2];
    unaff_R13 = (ulong)uVar15;
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(uint **)((undefined *)register0x00000020 + -0xd8) = param_1;
    *(uint **)((undefined *)register0x00000020 + -0x98) = param_3;
    uVar10 = *param_3;
    uVar9 = param_3[3];
    unaff_R14 = (ulong)uVar9;
    puVar5 = (uint *)((param_2 & 0xfffffffffffffffc) + (long)param_1);
    uVar4 = param_3[4];
    *(uint **)((undefined *)register0x00000020 + -0xa0) = puVar5;
    bVar26 = CARRY4((uint)param_2,param_3[8]);
    uVar8 = param_3[5];
    uVar11 = param_3[6];
    uVar13 = param_3[7];
    param_3[8] = (uint)param_2 + param_3[8];
    param_3[9] = param_3[9] + (int)(param_2 >> 0x20) + (uint)bVar26;
    puVar12 = param_3;
    param_3 = (uint *)(ulong)bVar26;
    unaff_R15 = param_1;
    if (param_1 < puVar5) {
      *(uint *)((undefined *)register0x00000020 + -0xb4) = uVar13;
      *(uint *)((undefined *)register0x00000020 + -0xb8) = uVar11;
      *(uint *)((undefined *)register0x00000020 + -0xbc) = uVar8;
      *(uint *)((undefined *)register0x00000020 + -0xc0) = uVar4;
      puVar12 = (uint *)(ulong)uVar8;
      *(uint *)((undefined *)register0x00000020 + -0xc4) = uVar9;
      *(uint *)((undefined *)register0x00000020 + -200) = uVar15;
      *(uint *)((undefined *)register0x00000020 + -0xcc) = uVar3;
      *(uint *)((undefined *)register0x00000020 + -0xa4) = uVar10;
      *(undefined **)((undefined *)register0x00000020 + -0x90) =
           (undefined *)register0x00000020 + -0x88;
      unaff_RBP = uVar22;
      do {
        lVar1 = *(long *)((undefined *)register0x00000020 + -0xd8);
        lVar2 = *(long *)((undefined *)register0x00000020 + -0x90);
        lVar6 = 0;
        do {
          uVar3 = *(uint *)(lVar1 + lVar6);
          *(uint *)(lVar2 + lVar6) =
               uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0x40);
        uVar8 = (uint)unaff_RBP;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x84);
        *(long *)((undefined *)register0x00000020 + -0xd8) =
             *(long *)((undefined *)register0x00000020 + -0xd8) + 0x40;
        uVar9 = *(uint *)((undefined *)register0x00000020 + -0x80);
        uVar14 = (uint)puVar12;
        iVar7 = ((uVar14 ^ uVar11) & uVar4 ^ uVar11) +
                ((uVar4 << 7 | uVar4 >> 0x19) ^
                (uVar4 >> 0xb | uVar4 << 0x15) ^ (uVar4 >> 6 | uVar4 << 0x1a)) +
                *(int *)((undefined *)register0x00000020 + -0x88) + 0x428a2f98 + uVar13;
        uVar13 = iVar7 + (int)unaff_R14;
        uVar3 = ((uVar10 | uVar8) & (uint)unaff_R13 | uVar10 & uVar8) +
                ((uVar10 >> 0xd | uVar10 << 0x13) ^ (uVar10 >> 2 | uVar10 << 0x1e) ^
                (uVar10 << 10 | uVar10 >> 0x16)) + iVar7;
        iVar7 = ((uVar13 * 0x80 | uVar13 >> 0x19) ^
                (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 6 | uVar13 * 0x4000000)) +
                uVar15 + 0x71374491 + uVar11 + ((uVar4 ^ uVar14) & uVar13 ^ uVar14);
        uVar16 = iVar7 + (uint)unaff_R13;
        uVar19 = ((uVar3 | uVar10) & uVar8 | uVar3 & uVar10) +
                 ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
                 (uVar3 * 0x400 | uVar3 >> 0x16)) + iVar7;
        iVar7 = ((uVar16 * 0x80 | uVar16 >> 0x19) ^
                (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 6 | uVar16 * 0x4000000)) +
                uVar9 + 0xb5c0fbcf + uVar14 + ((uVar13 ^ uVar4) & uVar16 ^ uVar4);
        uVar8 = iVar7 + uVar8;
        uVar11 = ((uVar3 | uVar19) & uVar10 | uVar3 & uVar19) +
                 ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
                 (uVar19 * 0x400 | uVar19 >> 0x16)) + iVar7;
        iVar7 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
                (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
                *(int *)((undefined *)register0x00000020 + -0x7c) + -0x164a245b + uVar4 +
                ((uVar13 ^ uVar16) & uVar8 ^ uVar13);
        uVar10 = uVar10 + iVar7;
        uVar14 = ((uVar19 | uVar11) & uVar3 | uVar19 & uVar11) +
                 ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
                 (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar7;
        iVar7 = ((uVar10 * 0x80 | uVar10 >> 0x19) ^
                (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000)) +
                *(int *)((undefined *)register0x00000020 + -0x78) + 0x3956c25b + uVar13 +
                ((uVar16 ^ uVar8) & uVar10 ^ uVar16);
        uVar3 = uVar3 + iVar7;
        uVar13 = ((uVar11 | uVar14) & uVar19 | uVar11 & uVar14) +
                 ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^
                 (uVar14 * 0x400 | uVar14 >> 0x16)) + iVar7;
        iVar7 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
                (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
                ((uVar8 ^ uVar10) & uVar3 ^ uVar8) +
                *(int *)((undefined *)register0x00000020 + -0x74) + 0x59f111f1 + uVar16;
        uVar19 = uVar19 + iVar7;
        uVar4 = ((uVar14 | uVar13) & uVar11 | uVar14 & uVar13) +
                ((uVar13 >> 0xd | uVar13 * 0x80000) ^ (uVar13 >> 2 | uVar13 * 0x40000000) ^
                (uVar13 * 0x400 | uVar13 >> 0x16)) + iVar7;
        iVar7 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
                (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
                *(int *)((undefined *)register0x00000020 + -0x70) + -0x6dc07d5c + uVar8 +
                ((uVar10 ^ uVar3) & uVar19 ^ uVar10);
        uVar11 = uVar11 + iVar7;
        uVar8 = ((uVar13 | uVar4) & uVar14 | uVar13 & uVar4) +
                ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
                (uVar4 * 0x400 | uVar4 >> 0x16)) + iVar7;
        iVar7 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
                (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
                *(int *)((undefined *)register0x00000020 + -0x6c) + -0x54e3a12b + uVar10 +
                ((uVar3 ^ uVar19) & uVar11 ^ uVar3);
        uVar14 = uVar14 + iVar7;
        uVar10 = ((uVar4 | uVar8) & uVar13 | uVar4 & uVar8) +
                 ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
                 (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar7;
        iVar7 = ((uVar14 * 0x80 | uVar14 >> 0x19) ^
                (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 6 | uVar14 * 0x4000000)) +
                ((uVar19 ^ uVar11) & uVar14 ^ uVar19) +
                *(int *)((undefined *)register0x00000020 + -0x68) + -0x27f85568 + uVar3;
        uVar13 = uVar13 + iVar7;
        uVar18 = ((uVar8 | uVar10) & uVar4 | uVar8 & uVar10) +
                 ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
                 (uVar10 * 0x400 | uVar10 >> 0x16)) + iVar7;
        iVar7 = ((uVar13 * 0x80 | uVar13 >> 0x19) ^
                (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 6 | uVar13 * 0x4000000)) +
                *(int *)((undefined *)register0x00000020 + -100) + 0x12835b01 + uVar19 +
                ((uVar11 ^ uVar14) & uVar13 ^ uVar11);
        uVar4 = uVar4 + iVar7;
        uVar17 = ((uVar10 | uVar18) & uVar8 | uVar10 & uVar18) +
                 ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
                 (uVar18 * 0x400 | uVar18 >> 0x16)) + iVar7;
        iVar7 = ((uVar4 * 0x80 | uVar4 >> 0x19) ^
                (uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000)) +
                *(int *)((undefined *)register0x00000020 + -0x60) + 0x243185be + uVar11 +
                ((uVar14 ^ uVar13) & uVar4 ^ uVar14);
        uVar8 = uVar8 + iVar7;
        uVar19 = ((uVar18 | uVar17) & uVar10 | uVar18 & uVar17) +
                 ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 2 | uVar17 * 0x40000000) ^
                 (uVar17 * 0x400 | uVar17 >> 0x16)) + iVar7;
        iVar7 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
                (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
                ((uVar13 ^ uVar4) & uVar8 ^ uVar13) +
                *(int *)((undefined *)register0x00000020 + -0x5c) + 0x550c7dc3 + uVar14;
        uVar10 = uVar10 + iVar7;
        uVar3 = ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19) +
                ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
                (uVar19 * 0x400 | uVar19 >> 0x16)) + iVar7;
        iVar7 = ((uVar10 * 0x80 | uVar10 >> 0x19) ^
                (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000)) +
                *(int *)((undefined *)register0x00000020 + -0x58) + 0x72be5d74 + uVar13 +
                ((uVar4 ^ uVar8) & uVar10 ^ uVar4);
        uVar18 = uVar18 + iVar7;
        uVar11 = ((uVar19 | uVar3) & uVar17 | uVar19 & uVar3) +
                 ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
                 (uVar3 * 0x400 | uVar3 >> 0x16)) + iVar7;
        iVar7 = ((uVar18 * 0x80 | uVar18 >> 0x19) ^
                (uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 6 | uVar18 * 0x4000000)) +
                ((uVar8 ^ uVar10) & uVar18 ^ uVar8) +
                *(int *)((undefined *)register0x00000020 + -0x54) + -0x7f214e02 + uVar4;
        uVar17 = uVar17 + iVar7;
        uVar16 = ((uVar3 | uVar11) & uVar19 | uVar3 & uVar11) +
                 ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
                 (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar7;
        iVar7 = ((uVar17 * 0x80 | uVar17 >> 0x19) ^
                (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 6 | uVar17 * 0x4000000)) +
                *(int *)((undefined *)register0x00000020 + -0x50) + -0x6423f959 + uVar8 +
                ((uVar10 ^ uVar18) & uVar17 ^ uVar10);
        uVar19 = uVar19 + iVar7;
        uVar24 = ((uVar11 | uVar16) & uVar3 | uVar11 & uVar16) +
                 ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 2 | uVar16 * 0x40000000) ^
                 (uVar16 * 0x400 | uVar16 >> 0x16)) + iVar7;
        iVar7 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
                (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
                *(int *)((undefined *)register0x00000020 + -0x4c) + -0x3e640e8c + uVar10 +
                ((uVar18 ^ uVar17) & uVar19 ^ uVar18);
        uVar3 = uVar3 + iVar7;
        uVar4 = ((uVar16 | uVar24) & uVar11 | uVar16 & uVar24) +
                ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 2 | uVar24 * 0x40000000) ^
                (uVar24 * 0x400 | uVar24 >> 0x16)) + iVar7;
        uVar20 = ((uVar15 << 0xe | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 << 0x19) ^ uVar15 >> 3) +
                 (*(uint *)((undefined *)register0x00000020 + -0x50) >> 10 ^
                 (*(uint *)((undefined *)register0x00000020 + -0x50) << 0xd |
                 *(uint *)((undefined *)register0x00000020 + -0x50) >> 0x13) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x50) << 0xf |
                 *(uint *)((undefined *)register0x00000020 + -0x50) >> 0x11)) +
                 *(int *)((undefined *)register0x00000020 + -0x88) +
                 *(int *)((undefined *)register0x00000020 + -100);
        iVar7 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
                (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
                uVar18 + 0xe49b69c1 + uVar20 + ((uVar17 ^ uVar19) & uVar3 ^ uVar17);
        uVar11 = uVar11 + iVar7;
        uVar8 = ((uVar24 | uVar4) & uVar16 | uVar24 & uVar4) +
                ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
                (uVar4 * 0x400 | uVar4 >> 0x16)) + iVar7;
        uVar18 = ((uVar9 << 0xe | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 << 0x19) ^ uVar9 >> 3) +
                 (*(uint *)((undefined *)register0x00000020 + -0x4c) >> 10 ^
                 (*(uint *)((undefined *)register0x00000020 + -0x4c) << 0xd |
                 *(uint *)((undefined *)register0x00000020 + -0x4c) >> 0x13) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x4c) << 0xf |
                 *(uint *)((undefined *)register0x00000020 + -0x4c) >> 0x11)) +
                 uVar15 + *(int *)((undefined *)register0x00000020 + -0x60);
        iVar7 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
                (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
                uVar17 + 0xefbe4786 + uVar18 + ((uVar19 ^ uVar3) & uVar11 ^ uVar19);
        uVar16 = uVar16 + iVar7;
        uVar23 = ((uVar4 | uVar8) & uVar24 | uVar4 & uVar8) +
                 ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
                 (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar7;
        uVar17 = (*(uint *)((undefined *)register0x00000020 + -0x7c) >> 3 ^
                 (*(uint *)((undefined *)register0x00000020 + -0x7c) >> 7 |
                 *(uint *)((undefined *)register0x00000020 + -0x7c) << 0x19) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x7c) << 0xe |
                 *(uint *)((undefined *)register0x00000020 + -0x7c) >> 0x12)) +
                 uVar9 + *(int *)((undefined *)register0x00000020 + -0x5c) +
                 (uVar20 >> 10 ^
                 (uVar20 * 0x2000 | uVar20 >> 0x13) ^ (uVar20 * 0x8000 | uVar20 >> 0x11));
        iVar7 = ((uVar16 * 0x80 | uVar16 >> 0x19) ^
                (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 6 | uVar16 * 0x4000000)) +
                uVar19 + 0xfc19dc6 + uVar17 + ((uVar3 ^ uVar11) & uVar16 ^ uVar3);
        uVar24 = uVar24 + iVar7;
        uVar21 = ((uVar8 | uVar23) & uVar4 | uVar8 & uVar23) +
                 ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
                 (uVar23 * 0x400 | uVar23 >> 0x16)) + iVar7;
        uVar19 = (*(uint *)((undefined *)register0x00000020 + -0x78) >> 3 ^
                 (*(uint *)((undefined *)register0x00000020 + -0x78) >> 7 |
                 *(uint *)((undefined *)register0x00000020 + -0x78) << 0x19) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x78) << 0xe |
                 *(uint *)((undefined *)register0x00000020 + -0x78) >> 0x12)) +
                 *(int *)((undefined *)register0x00000020 + -0x7c) +
                 *(int *)((undefined *)register0x00000020 + -0x58) +
                 (uVar18 >> 10 ^
                 (uVar18 * 0x2000 | uVar18 >> 0x13) ^ (uVar18 * 0x8000 | uVar18 >> 0x11));
        iVar7 = ((uVar24 * 0x80 | uVar24 >> 0x19) ^
                (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000)) +
                uVar3 + 0x240ca1cc + uVar19 + ((uVar11 ^ uVar16) & uVar24 ^ uVar11);
        uVar4 = uVar4 + iVar7;
        uVar14 = ((uVar23 | uVar21) & uVar8 | uVar23 & uVar21) +
                 ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 2 | uVar21 * 0x40000000) ^
                 (uVar21 * 0x400 | uVar21 >> 0x16)) + iVar7;
        iVar7 = ((uVar17 * 0x2000 | uVar17 >> 0x13) ^ (uVar17 * 0x8000 | uVar17 >> 0x11) ^
                uVar17 >> 10) +
                *(int *)((undefined *)register0x00000020 + -0x78) +
                *(int *)((undefined *)register0x00000020 + -0x54) +
                (*(uint *)((undefined *)register0x00000020 + -0x74) >> 3 ^
                (*(uint *)((undefined *)register0x00000020 + -0x74) >> 7 |
                *(uint *)((undefined *)register0x00000020 + -0x74) << 0x19) ^
                (*(uint *)((undefined *)register0x00000020 + -0x74) << 0xe |
                *(uint *)((undefined *)register0x00000020 + -0x74) >> 0x12));
        *(int *)((undefined *)register0x00000020 + -0x110) = iVar7;
        iVar7 = ((uVar4 * 0x80 | uVar4 >> 0x19) ^
                (uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000)) +
                uVar11 + 0x2de92c6f + iVar7 + ((uVar16 ^ uVar24) & uVar4 ^ uVar16);
        uVar8 = uVar8 + iVar7;
        uVar13 = ((uVar21 | uVar14) & uVar23 | uVar21 & uVar14) +
                 ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^
                 (uVar14 * 0x400 | uVar14 >> 0x16)) + iVar7;
        iVar7 = *(int *)((undefined *)register0x00000020 + -0x74) +
                *(int *)((undefined *)register0x00000020 + -0x50) +
                (*(uint *)((undefined *)register0x00000020 + -0x70) >> 3 ^
                (*(uint *)((undefined *)register0x00000020 + -0x70) >> 7 |
                *(uint *)((undefined *)register0x00000020 + -0x70) << 0x19) ^
                (*(uint *)((undefined *)register0x00000020 + -0x70) << 0xe |
                *(uint *)((undefined *)register0x00000020 + -0x70) >> 0x12)) +
                ((uVar19 * 0x2000 | uVar19 >> 0x13) ^ (uVar19 * 0x8000 | uVar19 >> 0x11) ^
                uVar19 >> 10);
        *(int *)((undefined *)register0x00000020 + -0x10c) = iVar7;
        iVar7 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
                (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
                uVar16 + 0x4a7484aa + iVar7 + ((uVar24 ^ uVar4) & uVar8 ^ uVar24);
        uVar23 = uVar23 + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x110);
        uVar3 = ((uVar14 | uVar13) & uVar21 | uVar14 & uVar13) +
                ((uVar13 >> 0xd | uVar13 * 0x80000) ^ (uVar13 >> 2 | uVar13 * 0x40000000) ^
                (uVar13 * 0x400 | uVar13 >> 0x16)) + iVar7;
        iVar7 = ((uVar15 << 0xd | uVar15 >> 0x13) ^ (uVar15 << 0xf | uVar15 >> 0x11) ^ uVar15 >> 10)
                + *(int *)((undefined *)register0x00000020 + -0x70) +
                  *(int *)((undefined *)register0x00000020 + -0x4c) +
                  (*(uint *)((undefined *)register0x00000020 + -0x6c) >> 3 ^
                  (*(uint *)((undefined *)register0x00000020 + -0x6c) >> 7 |
                  *(uint *)((undefined *)register0x00000020 + -0x6c) << 0x19) ^
                  (*(uint *)((undefined *)register0x00000020 + -0x6c) << 0xe |
                  *(uint *)((undefined *)register0x00000020 + -0x6c) >> 0x12));
        *(int *)((undefined *)register0x00000020 + -0x108) = iVar7;
        iVar7 = ((uVar23 * 0x80 | uVar23 >> 0x19) ^
                (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000)) +
                uVar24 + 0x5cb0a9dc + iVar7 + ((uVar4 ^ uVar8) & uVar23 ^ uVar4);
        uVar21 = uVar21 + iVar7;
        uVar10 = *(uint *)((undefined *)register0x00000020 + -0x10c);
        uVar15 = ((uVar13 | uVar3) & uVar14 | uVar13 & uVar3) +
                 ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
                 (uVar3 * 0x400 | uVar3 >> 0x16)) + iVar7;
        iVar7 = ((*(uint *)((undefined *)register0x00000020 + -0x68) << 0xe |
                 *(uint *)((undefined *)register0x00000020 + -0x68) >> 0x12) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x68) >> 7 |
                 *(uint *)((undefined *)register0x00000020 + -0x68) << 0x19) ^
                *(uint *)((undefined *)register0x00000020 + -0x68) >> 3) +
                *(int *)((undefined *)register0x00000020 + -0x6c) + uVar20 +
                ((uVar10 << 0xd | uVar10 >> 0x13) ^ (uVar10 << 0xf | uVar10 >> 0x11) ^ uVar10 >> 10)
        ;
        *(int *)((undefined *)register0x00000020 + -0x100) = iVar7;
        iVar7 = ((uVar21 * 0x80 | uVar21 >> 0x19) ^
                (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 6 | uVar21 * 0x4000000)) +
                ((uVar8 ^ uVar23) & uVar21 ^ uVar8) + uVar4 + 0x76f988da + iVar7;
        uVar14 = uVar14 + iVar7;
        uVar9 = *(uint *)((undefined *)register0x00000020 + -0x108);
        uVar10 = ((uVar3 | uVar15) & uVar13 | uVar3 & uVar15) +
                 ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 2 | uVar15 * 0x40000000) ^
                 (uVar15 * 0x400 | uVar15 >> 0x16)) + iVar7;
        iVar7 = ((*(uint *)((undefined *)register0x00000020 + -100) << 0xe |
                 *(uint *)((undefined *)register0x00000020 + -100) >> 0x12) ^
                 (*(uint *)((undefined *)register0x00000020 + -100) >> 7 |
                 *(uint *)((undefined *)register0x00000020 + -100) << 0x19) ^
                *(uint *)((undefined *)register0x00000020 + -100) >> 3) +
                *(int *)((undefined *)register0x00000020 + -0x68) + uVar18 +
                ((uVar9 << 0xd | uVar9 >> 0x13) ^ (uVar9 << 0xf | uVar9 >> 0x11) ^ uVar9 >> 10);
        *(int *)((undefined *)register0x00000020 + -0xfc) = iVar7;
        iVar7 = ((uVar14 * 0x80 | uVar14 >> 0x19) ^
                (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 6 | uVar14 * 0x4000000)) +
                ((uVar23 ^ uVar21) & uVar14 ^ uVar23) + uVar8 + 0x983e5152 + iVar7;
        uVar13 = uVar13 + iVar7;
        uVar4 = *(uint *)((undefined *)register0x00000020 + -0x100);
        uVar9 = ((uVar15 | uVar10) & uVar3 | uVar15 & uVar10) +
                ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
                (uVar10 * 0x400 | uVar10 >> 0x16)) + iVar7;
        iVar7 = ((*(uint *)((undefined *)register0x00000020 + -0x60) << 0xe |
                 *(uint *)((undefined *)register0x00000020 + -0x60) >> 0x12) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x60) >> 7 |
                 *(uint *)((undefined *)register0x00000020 + -0x60) << 0x19) ^
                *(uint *)((undefined *)register0x00000020 + -0x60) >> 3) +
                *(int *)((undefined *)register0x00000020 + -100) + uVar17 +
                ((uVar4 << 0xd | uVar4 >> 0x13) ^ (uVar4 << 0xf | uVar4 >> 0x11) ^ uVar4 >> 10);
        *(int *)((undefined *)register0x00000020 + -0xf8) = iVar7;
        iVar7 = ((uVar13 * 0x80 | uVar13 >> 0x19) ^
                (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 6 | uVar13 * 0x4000000)) +
                uVar23 + 0xa831c66d + iVar7 + ((uVar21 ^ uVar14) & uVar13 ^ uVar21);
        uVar3 = uVar3 + iVar7;
        uVar8 = *(uint *)((undefined *)register0x00000020 + -0xfc);
        uVar4 = ((uVar10 | uVar9) & uVar15 | uVar10 & uVar9) +
                ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
                (uVar9 * 0x400 | uVar9 >> 0x16)) + iVar7;
        iVar7 = ((*(uint *)((undefined *)register0x00000020 + -0x5c) << 0xe |
                 *(uint *)((undefined *)register0x00000020 + -0x5c) >> 0x12) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x5c) >> 7 |
                 *(uint *)((undefined *)register0x00000020 + -0x5c) << 0x19) ^
                *(uint *)((undefined *)register0x00000020 + -0x5c) >> 3) +
                *(int *)((undefined *)register0x00000020 + -0x60) + uVar19 +
                ((uVar8 << 0xd | uVar8 >> 0x13) ^ (uVar8 << 0xf | uVar8 >> 0x11) ^ uVar8 >> 10);
        *(int *)((undefined *)register0x00000020 + -0xf4) = iVar7;
        iVar7 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
                (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
                uVar21 + 0xb00327c8 + iVar7 + ((uVar14 ^ uVar13) & uVar3 ^ uVar14);
        uVar15 = uVar15 + iVar7;
        uVar11 = *(uint *)((undefined *)register0x00000020 + -0xf8);
        uVar8 = ((uVar9 | uVar4) & uVar10 | uVar9 & uVar4) +
                ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
                (uVar4 * 0x400 | uVar4 >> 0x16)) + iVar7;
        iVar7 = ((*(uint *)((undefined *)register0x00000020 + -0x58) << 0xe |
                 *(uint *)((undefined *)register0x00000020 + -0x58) >> 0x12) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x58) >> 7 |
                 *(uint *)((undefined *)register0x00000020 + -0x58) << 0x19) ^
                *(uint *)((undefined *)register0x00000020 + -0x58) >> 3) +
                *(int *)((undefined *)register0x00000020 + -0x5c) +
                *(int *)((undefined *)register0x00000020 + -0x110) +
                ((uVar11 << 0xd | uVar11 >> 0x13) ^ (uVar11 << 0xf | uVar11 >> 0x11) ^ uVar11 >> 10)
        ;
        *(int *)((undefined *)register0x00000020 + -0xf0) = iVar7;
        iVar7 = ((uVar15 * 0x80 | uVar15 >> 0x19) ^
                (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 6 | uVar15 * 0x4000000)) +
                uVar14 + 0xbf597fc7 + iVar7 + ((uVar13 ^ uVar3) & uVar15 ^ uVar13);
        uVar10 = uVar10 + iVar7;
        uVar11 = *(uint *)((undefined *)register0x00000020 + -0xf4);
        uVar16 = ((uVar4 | uVar8) & uVar9 | uVar4 & uVar8) +
                 ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
                 (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar7;
        iVar7 = ((*(uint *)((undefined *)register0x00000020 + -0x54) << 0xe |
                 *(uint *)((undefined *)register0x00000020 + -0x54) >> 0x12) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x54) >> 7 |
                 *(uint *)((undefined *)register0x00000020 + -0x54) << 0x19) ^
                *(uint *)((undefined *)register0x00000020 + -0x54) >> 3) +
                *(int *)((undefined *)register0x00000020 + -0x58) +
                *(int *)((undefined *)register0x00000020 + -0x10c) +
                ((uVar11 << 0xd | uVar11 >> 0x13) ^ (uVar11 << 0xf | uVar11 >> 0x11) ^ uVar11 >> 10)
        ;
        *(int *)((undefined *)register0x00000020 + -0xec) = iVar7;
        iVar7 = ((uVar10 * 0x80 | uVar10 >> 0x19) ^
                (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000)) +
                uVar13 + 0xc6e00bf3 + iVar7 + ((uVar3 ^ uVar15) & uVar10 ^ uVar3);
        uVar9 = uVar9 + iVar7;
        uVar11 = *(uint *)((undefined *)register0x00000020 + -0xf0);
        uVar14 = ((uVar8 | uVar16) & uVar4 | uVar8 & uVar16) +
                 ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 2 | uVar16 * 0x40000000) ^
                 (uVar16 * 0x400 | uVar16 >> 0x16)) + iVar7;
        iVar7 = ((*(uint *)((undefined *)register0x00000020 + -0x50) << 0xe |
                 *(uint *)((undefined *)register0x00000020 + -0x50) >> 0x12) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x50) >> 7 |
                 *(uint *)((undefined *)register0x00000020 + -0x50) << 0x19) ^
                *(uint *)((undefined *)register0x00000020 + -0x50) >> 3) +
                *(int *)((undefined *)register0x00000020 + -0x54) +
                *(int *)((undefined *)register0x00000020 + -0x108) +
                ((uVar11 << 0xd | uVar11 >> 0x13) ^ (uVar11 << 0xf | uVar11 >> 0x11) ^ uVar11 >> 10)
        ;
        *(int *)((undefined *)register0x00000020 + -0xe8) = iVar7;
        iVar7 = ((uVar9 * 0x80 | uVar9 >> 0x19) ^
                (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000)) +
                uVar3 + 0xd5a79147 + iVar7 + ((uVar15 ^ uVar10) & uVar9 ^ uVar15);
        uVar4 = uVar4 + iVar7;
        uVar3 = *(uint *)((undefined *)register0x00000020 + -0xec);
        uVar13 = ((uVar16 | uVar14) & uVar8 | uVar16 & uVar14) +
                 ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^
                 (uVar14 * 0x400 | uVar14 >> 0x16)) + iVar7;
        iVar7 = ((*(uint *)((undefined *)register0x00000020 + -0x4c) << 0xe |
                 *(uint *)((undefined *)register0x00000020 + -0x4c) >> 0x12) ^
                 (*(uint *)((undefined *)register0x00000020 + -0x4c) >> 7 |
                 *(uint *)((undefined *)register0x00000020 + -0x4c) << 0x19) ^
                *(uint *)((undefined *)register0x00000020 + -0x4c) >> 3) +
                *(int *)((undefined *)register0x00000020 + -0x50) +
                *(int *)((undefined *)register0x00000020 + -0x100) +
                ((uVar3 << 0xd | uVar3 >> 0x13) ^ (uVar3 << 0xf | uVar3 >> 0x11) ^ uVar3 >> 10);
        *(int *)((undefined *)register0x00000020 + -0xe4) = iVar7;
        iVar7 = ((uVar4 * 0x80 | uVar4 >> 0x19) ^
                (uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000)) +
                ((uVar10 ^ uVar9) & uVar4 ^ uVar10) + uVar15 + 0x6ca6351 + iVar7;
        uVar8 = uVar8 + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0xe8);
        uVar3 = ((uVar14 | uVar13) & uVar16 | uVar14 & uVar13) +
                ((uVar13 >> 0xd | uVar13 * 0x80000) ^ (uVar13 >> 2 | uVar13 * 0x40000000) ^
                (uVar13 * 0x400 | uVar13 >> 0x16)) + iVar7;
        iVar7 = ((uVar20 * 0x4000 | uVar20 >> 0x12) ^ (uVar20 >> 7 | uVar20 * 0x2000000) ^
                uVar20 >> 3) + *(int *)((undefined *)register0x00000020 + -0x4c) +
                *(int *)((undefined *)register0x00000020 + -0xfc) +
                ((uVar15 << 0xd | uVar15 >> 0x13) ^ (uVar15 << 0xf | uVar15 >> 0x11) ^ uVar15 >> 10)
        ;
        *(int *)((undefined *)register0x00000020 + -0xe0) = iVar7;
        iVar7 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
                (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
                ((uVar9 ^ uVar4) & uVar8 ^ uVar9) + uVar10 + 0x14292967 + iVar7;
        uVar16 = uVar16 + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0xe4);
        uVar11 = ((uVar13 | uVar3) & uVar14 | uVar13 & uVar3) +
                 ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
                 (uVar3 * 0x400 | uVar3 >> 0x16)) + iVar7;
        uVar10 = uVar20 + ((uVar18 * 0x4000 | uVar18 >> 0x12) ^ (uVar18 >> 7 | uVar18 * 0x2000000) ^
                          uVar18 >> 3) + *(int *)((undefined *)register0x00000020 + -0xf8) +
                 ((uVar15 << 0xd | uVar15 >> 0x13) ^ (uVar15 << 0xf | uVar15 >> 0x11) ^ uVar15 >> 10
                 );
        *(uint *)((undefined *)register0x00000020 + -0xb0) = uVar10;
        iVar7 = ((uVar16 * 0x80 | uVar16 >> 0x19) ^
                (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 6 | uVar16 * 0x4000000)) +
                ((uVar4 ^ uVar8) & uVar16 ^ uVar4) + uVar9 + 0x27b70a85 + uVar10;
        uVar14 = uVar14 + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0xe0);
        uVar20 = ((uVar3 | uVar11) & uVar13 | uVar3 & uVar11) +
                 ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
                 (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar7;
        iVar7 = uVar18 + ((uVar17 * 0x4000 | uVar17 >> 0x12) ^ (uVar17 >> 7 | uVar17 * 0x2000000) ^
                         uVar17 >> 3) + *(int *)((undefined *)register0x00000020 + -0xf4) +
                ((uVar15 << 0xd | uVar15 >> 0x13) ^ (uVar15 << 0xf | uVar15 >> 0x11) ^ uVar15 >> 10)
        ;
        *(int *)((undefined *)register0x00000020 + -0xdc) = iVar7;
        iVar7 = ((uVar14 * 0x80 | uVar14 >> 0x19) ^
                (uVar14 >> 0xb | uVar14 * 0x200000) ^ (uVar14 >> 6 | uVar14 * 0x4000000)) +
                uVar4 + 0x2e1b2138 + iVar7 + ((uVar8 ^ uVar16) & uVar14 ^ uVar8);
        uVar13 = uVar13 + iVar7;
        uVar18 = ((uVar11 | uVar20) & uVar3 | uVar11 & uVar20) +
                 ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 2 | uVar20 * 0x40000000) ^
                 (uVar20 * 0x400 | uVar20 >> 0x16)) + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x110);
        uVar4 = uVar17 + ((uVar19 * 0x4000 | uVar19 >> 0x12) ^ (uVar19 >> 7 | uVar19 * 0x2000000) ^
                         uVar19 >> 3) + *(int *)((undefined *)register0x00000020 + -0xf0) +
                ((uVar10 * 0x2000 | uVar10 >> 0x13) ^ (uVar10 * 0x8000 | uVar10 >> 0x11) ^
                uVar10 >> 10);
        uVar10 = *(uint *)((undefined *)register0x00000020 + -0x10c);
        *(uint *)((undefined *)register0x00000020 + -0xac) = uVar4;
        iVar7 = ((uVar13 * 0x80 | uVar13 >> 0x19) ^
                (uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 6 | uVar13 * 0x4000000)) +
                uVar8 + 0x4d2c6dfc + uVar4 + ((uVar16 ^ uVar14) & uVar13 ^ uVar16);
        uVar3 = uVar3 + iVar7;
        uVar9 = *(uint *)((undefined *)register0x00000020 + -0xdc);
        uVar17 = ((uVar20 | uVar18) & uVar11 | uVar20 & uVar18) +
                 ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
                 (uVar18 * 0x400 | uVar18 >> 0x16)) + iVar7;
        uVar9 = uVar19 + ((uVar15 << 0xe | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 << 0x19) ^
                         uVar15 >> 3) + *(int *)((undefined *)register0x00000020 + -0xec) +
                ((uVar9 << 0xd | uVar9 >> 0x13) ^ (uVar9 << 0xf | uVar9 >> 0x11) ^ uVar9 >> 10);
        *(uint *)((undefined *)register0x00000020 + -0xa8) = uVar9;
        iVar7 = ((uVar3 * 0x80 | uVar3 >> 0x19) ^
                (uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000)) +
                uVar16 + 0x53380d13 + uVar9 + ((uVar14 ^ uVar13) & uVar3 ^ uVar14);
        uVar11 = uVar11 + iVar7;
        uVar19 = ((uVar18 | uVar17) & uVar20 | uVar18 & uVar17) +
                 ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 2 | uVar17 * 0x40000000) ^
                 (uVar17 * 0x400 | uVar17 >> 0x16)) + iVar7;
        uVar4 = ((uVar4 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 0x8000 | uVar4 >> 0x11) ^ uVar4 >> 10)
                + ((uVar10 << 0xe | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 << 0x19) ^ uVar10 >> 3)
                  + uVar15 + *(int *)((undefined *)register0x00000020 + -0xe8);
        iVar7 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
                (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
                uVar14 + 0x650a7354 + uVar4 + ((uVar13 ^ uVar3) & uVar11 ^ uVar13);
        uVar20 = uVar20 + iVar7;
        uVar16 = ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19) +
                 ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
                 (uVar19 * 0x400 | uVar19 >> 0x16)) + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x108);
        iVar7 = ((uVar9 * 0x2000 | uVar9 >> 0x13) ^ (uVar9 * 0x8000 | uVar9 >> 0x11) ^ uVar9 >> 10)
                + ((uVar15 << 0xe | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 << 0x19) ^ uVar15 >> 3)
                  + uVar10 + *(int *)((undefined *)register0x00000020 + -0xe4);
        *(int *)((undefined *)register0x00000020 + -0x104) = iVar7;
        *(uint *)((undefined *)register0x00000020 + -0xd0) = uVar4;
        uVar9 = *(uint *)((undefined *)register0x00000020 + -0x100);
        iVar7 = ((uVar20 * 0x80 | uVar20 >> 0x19) ^
                (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 6 | uVar20 * 0x4000000)) +
                uVar13 + 0x766a0abb + iVar7 + ((uVar3 ^ uVar11) & uVar20 ^ uVar3);
        uVar18 = uVar18 + iVar7;
        uVar21 = ((uVar19 | uVar16) & uVar17 | uVar19 & uVar16) +
                 ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 2 | uVar16 * 0x40000000) ^
                 (uVar16 * 0x400 | uVar16 >> 0x16)) + iVar7;
        uVar15 = ((uVar4 * 0x2000 | uVar4 >> 0x13) ^ (uVar4 * 0x8000 | uVar4 >> 0x11) ^ uVar4 >> 10)
                 + ((uVar9 << 0xe | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 << 0x19) ^ uVar9 >> 3) +
                   uVar15 + *(int *)((undefined *)register0x00000020 + -0xe0);
        uVar4 = *(uint *)((undefined *)register0x00000020 + -0xfc);
        *(uint *)((undefined *)register0x00000020 + -0xfc) = uVar15;
        iVar7 = ((uVar18 * 0x80 | uVar18 >> 0x19) ^
                (uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 6 | uVar18 * 0x4000000)) +
                uVar3 + 0x81c2c92e + uVar15 + ((uVar11 ^ uVar20) & uVar18 ^ uVar11);
        uVar17 = uVar17 + iVar7;
        uVar3 = *(uint *)((undefined *)register0x00000020 + -0x104);
        uVar10 = ((uVar16 | uVar21) & uVar19 | uVar16 & uVar21) +
                 ((uVar21 >> 0xd | uVar21 * 0x80000) ^ (uVar21 >> 2 | uVar21 * 0x40000000) ^
                 (uVar21 * 0x400 | uVar21 >> 0x16)) + iVar7;
        uVar8 = *(uint *)((undefined *)register0x00000020 + -0xf8);
        iVar7 = ((uVar3 << 0xd | uVar3 >> 0x13) ^ (uVar3 << 0xf | uVar3 >> 0x11) ^ uVar3 >> 10) +
                ((uVar4 << 0xe | uVar4 >> 0x12) ^ (uVar4 >> 7 | uVar4 << 0x19) ^ uVar4 >> 3) + uVar9
                + *(int *)((undefined *)register0x00000020 + -0xb0);
        *(int *)((undefined *)register0x00000020 + -0x110) = iVar7;
        iVar7 = ((uVar17 * 0x80 | uVar17 >> 0x19) ^
                (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 6 | uVar17 * 0x4000000)) +
                ((uVar20 ^ uVar18) & uVar17 ^ uVar20) + uVar11 + 0x92722c85 + iVar7;
        uVar19 = uVar19 + iVar7;
        uVar9 = ((uVar21 | uVar10) & uVar16 | uVar21 & uVar10) +
                ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
                (uVar10 * 0x400 | uVar10 >> 0x16)) + iVar7;
        uVar3 = *(uint *)((undefined *)register0x00000020 + -0x110);
        uVar14 = ((uVar15 * 0x2000 | uVar15 >> 0x13) ^ (uVar15 * 0x8000 | uVar15 >> 0x11) ^
                 uVar15 >> 10) +
                 ((uVar8 << 0xe | uVar8 >> 0x12) ^ (uVar8 >> 7 | uVar8 << 0x19) ^ uVar8 >> 3) +
                 uVar4 + *(int *)((undefined *)register0x00000020 + -0xdc);
        *(uint *)((undefined *)register0x00000020 + -0xf8) = uVar14;
        iVar7 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
                (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
                uVar20 + 0xa2bfe8a1 + uVar14 + ((uVar18 ^ uVar17) & uVar19 ^ uVar18);
        uVar16 = uVar16 + iVar7;
        uVar15 = ((uVar10 | uVar9) & uVar21 | uVar10 & uVar9) +
                 ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
                 (uVar9 * 0x400 | uVar9 >> 0x16)) + iVar7;
        uVar11 = *(uint *)((undefined *)register0x00000020 + -0xf4);
        uVar13 = *(uint *)((undefined *)register0x00000020 + -0xf0);
        iVar7 = ((uVar11 << 0xe | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 << 0x19) ^ uVar11 >> 3) +
                uVar8 + *(int *)((undefined *)register0x00000020 + -0xac) +
                ((uVar3 << 0xd | uVar3 >> 0x13) ^ (uVar3 << 0xf | uVar3 >> 0x11) ^ uVar3 >> 10);
        *(int *)((undefined *)register0x00000020 + -0x10c) = iVar7;
        iVar7 = ((uVar16 * 0x80 | uVar16 >> 0x19) ^
                (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 6 | uVar16 * 0x4000000)) +
                uVar18 + 0xa81a664b + iVar7 + ((uVar17 ^ uVar19) & uVar16 ^ uVar17);
        uVar21 = uVar21 + iVar7;
        uVar4 = ((uVar9 | uVar15) & uVar10 | uVar9 & uVar15) +
                ((uVar15 >> 0xd | uVar15 * 0x80000) ^ (uVar15 >> 2 | uVar15 * 0x40000000) ^
                (uVar15 * 0x400 | uVar15 >> 0x16)) + iVar7;
        uVar3 = ((uVar14 * 0x2000 | uVar14 >> 0x13) ^ (uVar14 * 0x8000 | uVar14 >> 0x11) ^
                uVar14 >> 10) +
                ((uVar13 << 0xe | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 << 0x19) ^ uVar13 >> 3) +
                uVar11 + *(int *)((undefined *)register0x00000020 + -0xa8);
        *(uint *)((undefined *)register0x00000020 + -0xf4) = uVar3;
        iVar7 = ((uVar21 * 0x80 | uVar21 >> 0x19) ^
                (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 6 | uVar21 * 0x4000000)) +
                uVar17 + 0xc24b8b70 + uVar3 + ((uVar19 ^ uVar16) & uVar21 ^ uVar19);
        uVar10 = uVar10 + iVar7;
        uVar11 = *(uint *)((undefined *)register0x00000020 + -0x10c);
        uVar8 = ((uVar15 | uVar4) & uVar9 | uVar15 & uVar4) +
                ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
                (uVar4 * 0x400 | uVar4 >> 0x16)) + iVar7;
        uVar14 = *(uint *)((undefined *)register0x00000020 + -0xec);
        iVar7 = ((uVar11 << 0xd | uVar11 >> 0x13) ^ (uVar11 << 0xf | uVar11 >> 0x11) ^ uVar11 >> 10)
                + ((uVar14 << 0xe | uVar14 >> 0x12) ^ (uVar14 >> 7 | uVar14 << 0x19) ^ uVar14 >> 3)
                  + uVar13 + *(int *)((undefined *)register0x00000020 + -0xd0);
        *(int *)((undefined *)register0x00000020 + -0x108) = iVar7;
        iVar7 = ((uVar10 * 0x80 | uVar10 >> 0x19) ^
                (uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000)) +
                uVar19 + 0xc76c51a3 + iVar7 + ((uVar16 ^ uVar21) & uVar10 ^ uVar16);
        uVar9 = uVar9 + iVar7;
        uVar19 = ((uVar4 | uVar8) & uVar15 | uVar4 & uVar8) +
                 ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
                 (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar7;
        uVar11 = *(uint *)((undefined *)register0x00000020 + -0xe8);
        uVar13 = *(uint *)((undefined *)register0x00000020 + -0x108);
        iVar7 = ((uVar11 << 0xe | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 << 0x19) ^ uVar11 >> 3) +
                uVar14 + *(int *)((undefined *)register0x00000020 + -0x104) +
                ((uVar3 * 0x2000 | uVar3 >> 0x13) ^ (uVar3 * 0x8000 | uVar3 >> 0x11) ^ uVar3 >> 10);
        *(int *)((undefined *)register0x00000020 + -0x100) = iVar7;
        uVar14 = *(uint *)((undefined *)register0x00000020 + -0xe4);
        iVar7 = ((uVar9 * 0x80 | uVar9 >> 0x19) ^
                (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000)) +
                uVar16 + 0xd192e819 + iVar7 + ((uVar21 ^ uVar10) & uVar9 ^ uVar21);
        uVar15 = uVar15 + iVar7;
        uVar16 = ((uVar8 | uVar19) & uVar4 | uVar8 & uVar19) +
                 ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
                 (uVar19 * 0x400 | uVar19 >> 0x16)) + iVar7;
        uVar3 = ((uVar13 << 0xd | uVar13 >> 0x13) ^ (uVar13 << 0xf | uVar13 >> 0x11) ^ uVar13 >> 10)
                + ((uVar14 << 0xe | uVar14 >> 0x12) ^ (uVar14 >> 7 | uVar14 << 0x19) ^ uVar14 >> 3)
                  + uVar11 + *(int *)((undefined *)register0x00000020 + -0xfc);
        uVar11 = *(uint *)((undefined *)register0x00000020 + -0xe0);
        *(uint *)((undefined *)register0x00000020 + -0xf0) = uVar3;
        iVar7 = ((uVar15 * 0x80 | uVar15 >> 0x19) ^
                (uVar15 >> 0xb | uVar15 * 0x200000) ^ (uVar15 >> 6 | uVar15 * 0x4000000)) +
                uVar21 + 0xd6990624 + uVar3 + ((uVar10 ^ uVar9) & uVar15 ^ uVar10);
        uVar4 = uVar4 + iVar7;
        uVar13 = *(uint *)((undefined *)register0x00000020 + -0x100);
        uVar24 = ((uVar19 | uVar16) & uVar8 | uVar19 & uVar16) +
                 ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 2 | uVar16 * 0x40000000) ^
                 (uVar16 * 0x400 | uVar16 >> 0x16)) + iVar7;
        iVar7 = ((uVar13 << 0xd | uVar13 >> 0x13) ^ (uVar13 << 0xf | uVar13 >> 0x11) ^ uVar13 >> 10)
                + ((uVar11 << 0xe | uVar11 >> 0x12) ^ (uVar11 >> 7 | uVar11 << 0x19) ^ uVar11 >> 3)
                  + uVar14 + *(int *)((undefined *)register0x00000020 + -0x110);
        *(int *)((undefined *)register0x00000020 + -0xec) = iVar7;
        uVar13 = *(uint *)((undefined *)register0x00000020 + -0xb0);
        iVar7 = ((uVar4 * 0x80 | uVar4 >> 0x19) ^
                (uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000)) +
                uVar10 + 0xf40e3585 + iVar7 + ((uVar9 ^ uVar15) & uVar4 ^ uVar9);
        uVar8 = uVar8 + iVar7;
        uVar25 = ((uVar16 | uVar24) & uVar19 | uVar16 & uVar24) +
                 ((uVar24 >> 0xd | uVar24 * 0x80000) ^ (uVar24 >> 2 | uVar24 * 0x40000000) ^
                 (uVar24 * 0x400 | uVar24 >> 0x16)) + iVar7;
        uVar10 = *(uint *)((undefined *)register0x00000020 + -0xdc);
        uVar14 = ((uVar3 * 0x2000 | uVar3 >> 0x13) ^ (uVar3 * 0x8000 | uVar3 >> 0x11) ^ uVar3 >> 10)
                 + ((uVar13 << 0xe | uVar13 >> 0x12) ^ (uVar13 >> 7 | uVar13 << 0x19) ^ uVar13 >> 3)
                   + uVar11 + *(int *)((undefined *)register0x00000020 + -0xf8);
        *(uint *)((undefined *)register0x00000020 + -0xe4) = uVar14;
        iVar7 = ((uVar8 * 0x80 | uVar8 >> 0x19) ^
                (uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000)) +
                uVar9 + 0x106aa070 + uVar14 + ((uVar15 ^ uVar4) & uVar8 ^ uVar15);
        uVar19 = uVar19 + iVar7;
        uVar3 = *(uint *)((undefined *)register0x00000020 + -0xec);
        uVar11 = ((uVar24 | uVar25) & uVar16 | uVar24 & uVar25) +
                 ((uVar25 >> 0xd | uVar25 * 0x80000) ^ (uVar25 >> 2 | uVar25 * 0x40000000) ^
                 (uVar25 * 0x400 | uVar25 >> 0x16)) + iVar7;
        iVar7 = ((uVar3 << 0xd | uVar3 >> 0x13) ^ (uVar3 << 0xf | uVar3 >> 0x11) ^ uVar3 >> 10) +
                ((uVar10 << 0xe | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 << 0x19) ^ uVar10 >> 3) +
                uVar13 + *(int *)((undefined *)register0x00000020 + -0x10c);
        *(int *)((undefined *)register0x00000020 + -0xe8) = iVar7;
        *(int *)((undefined *)register0x00000020 + -0x88) = iVar7;
        iVar7 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
                (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
                uVar15 + 0x19a4c116 + iVar7 + ((uVar4 ^ uVar8) & uVar19 ^ uVar4);
        uVar16 = uVar16 + iVar7;
        uVar3 = *(uint *)((undefined *)register0x00000020 + -0xac);
        uVar20 = ((uVar25 | uVar11) & uVar24 | uVar25 & uVar11) +
                 ((uVar11 >> 0xd | uVar11 * 0x80000) ^ (uVar11 >> 2 | uVar11 * 0x40000000) ^
                 (uVar11 * 0x400 | uVar11 >> 0x16)) + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0xa8);
        uVar23 = ((uVar14 * 0x2000 | uVar14 >> 0x13) ^ (uVar14 * 0x8000 | uVar14 >> 0x11) ^
                 uVar14 >> 10) +
                 ((uVar3 << 0xe | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 << 0x19) ^ uVar3 >> 3) +
                 uVar10 + *(int *)((undefined *)register0x00000020 + -0xf4);
        *(uint *)((undefined *)register0x00000020 + -0x84) = uVar23;
        iVar7 = ((uVar16 * 0x80 | uVar16 >> 0x19) ^
                (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 6 | uVar16 * 0x4000000)) +
                uVar4 + 0x1e376c08 + uVar23 + ((uVar8 ^ uVar19) & uVar16 ^ uVar8);
        uVar24 = uVar24 + iVar7;
        uVar10 = *(uint *)((undefined *)register0x00000020 + -0xe8);
        uVar18 = ((uVar11 | uVar20) & uVar25 | uVar11 & uVar20) +
                 ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 2 | uVar20 * 0x40000000) ^
                 (uVar20 * 0x400 | uVar20 >> 0x16)) + iVar7;
        uVar9 = *(uint *)((undefined *)register0x00000020 + -0xd0);
        uVar14 = ((uVar10 << 0xd | uVar10 >> 0x13) ^ (uVar10 << 0xf | uVar10 >> 0x11) ^ uVar10 >> 10
                 ) + ((uVar15 << 0xe | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 << 0x19) ^
                     uVar15 >> 3) + uVar3 + *(int *)((undefined *)register0x00000020 + -0x108);
        *(uint *)((undefined *)register0x00000020 + -0x80) = uVar14;
        iVar7 = ((uVar24 * 0x80 | uVar24 >> 0x19) ^
                (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 6 | uVar24 * 0x4000000)) +
                ((uVar19 ^ uVar16) & uVar24 ^ uVar19) + uVar8 + 0x2748774c + uVar14;
        uVar25 = uVar25 + iVar7;
        uVar17 = ((uVar20 | uVar18) & uVar11 | uVar20 & uVar18) +
                 ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
                 (uVar18 * 0x400 | uVar18 >> 0x16)) + iVar7;
        uVar9 = ((uVar23 * 0x2000 | uVar23 >> 0x13) ^ (uVar23 * 0x8000 | uVar23 >> 0x11) ^
                uVar23 >> 10) +
                ((uVar9 << 0xe | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 << 0x19) ^ uVar9 >> 3) +
                uVar15 + *(int *)((undefined *)register0x00000020 + -0x100);
        *(uint *)((undefined *)register0x00000020 + -0x7c) = uVar9;
        iVar7 = ((uVar25 * 0x80 | uVar25 >> 0x19) ^
                (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 6 | uVar25 * 0x4000000)) +
                ((uVar16 ^ uVar24) & uVar25 ^ uVar16) + uVar19 + 0x34b0bcb5 + uVar9;
        uVar11 = uVar11 + iVar7;
        uVar3 = *(uint *)((undefined *)register0x00000020 + -0x104);
        uVar19 = ((uVar18 | uVar17) & uVar20 | uVar18 & uVar17) +
                 ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 2 | uVar17 * 0x40000000) ^
                 (uVar17 * 0x400 | uVar17 >> 0x16)) + iVar7;
        uVar21 = ((uVar14 * 0x2000 | uVar14 >> 0x13) ^ (uVar14 * 0x8000 | uVar14 >> 0x11) ^
                 uVar14 >> 10) +
                 ((uVar3 << 0xe | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 << 0x19) ^ uVar3 >> 3) +
                 *(int *)((undefined *)register0x00000020 + -0xd0) +
                 *(int *)((undefined *)register0x00000020 + -0xf0);
        *(uint *)((undefined *)register0x00000020 + -0x78) = uVar21;
        iVar7 = ((uVar11 * 0x80 | uVar11 >> 0x19) ^
                (uVar11 >> 0xb | uVar11 * 0x200000) ^ (uVar11 >> 6 | uVar11 * 0x4000000)) +
                uVar16 + 0x391c0cb3 + uVar21 + ((uVar24 ^ uVar25) & uVar11 ^ uVar24);
        uVar20 = uVar20 + iVar7;
        uVar16 = ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19) +
                 ((uVar19 >> 0xd | uVar19 * 0x80000) ^ (uVar19 >> 2 | uVar19 * 0x40000000) ^
                 (uVar19 * 0x400 | uVar19 >> 0x16)) + iVar7;
        uVar3 = *(uint *)((undefined *)register0x00000020 + -0xfc);
        iVar7 = ((uVar9 * 0x2000 | uVar9 >> 0x13) ^ (uVar9 * 0x8000 | uVar9 >> 0x11) ^ uVar9 >> 10)
                + ((uVar3 << 0xe | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 << 0x19) ^
                  *(uint *)((undefined *)register0x00000020 + -0xfc) >> 3) +
                  *(int *)((undefined *)register0x00000020 + -0x104) +
                  *(int *)((undefined *)register0x00000020 + -0xec);
        *(int *)((undefined *)register0x00000020 + -0x74) = iVar7;
        *(int *)((undefined *)register0x00000020 + -0x104) = iVar7;
        iVar7 = ((uVar20 * 0x80 | uVar20 >> 0x19) ^
                (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 6 | uVar20 * 0x4000000)) +
                uVar24 + 0x4ed8aa4a + iVar7 + ((uVar25 ^ uVar11) & uVar20 ^ uVar25);
        uVar18 = uVar18 + iVar7;
        uVar8 = ((uVar19 | uVar16) & uVar17 | uVar19 & uVar16) +
                ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 2 | uVar16 * 0x40000000) ^
                (uVar16 * 0x400 | uVar16 >> 0x16)) + iVar7;
        uVar3 = *(uint *)((undefined *)register0x00000020 + -0x110);
        iVar7 = ((uVar3 << 0xe | uVar3 >> 0x12) ^ (uVar3 >> 7 | uVar3 << 0x19) ^
                *(uint *)((undefined *)register0x00000020 + -0x110) >> 3) +
                *(int *)((undefined *)register0x00000020 + -0xfc) +
                *(int *)((undefined *)register0x00000020 + -0xe4) +
                ((uVar21 * 0x2000 | uVar21 >> 0x13) ^ (uVar21 * 0x8000 | uVar21 >> 0x11) ^
                uVar21 >> 10);
        *(int *)((undefined *)register0x00000020 + -0x70) = iVar7;
        *(int *)((undefined *)register0x00000020 + -0xfc) = iVar7;
        iVar7 = ((uVar18 * 0x80 | uVar18 >> 0x19) ^
                (uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 6 | uVar18 * 0x4000000)) +
                uVar25 + 0x5b9cca4f + iVar7 + ((uVar11 ^ uVar20) & uVar18 ^ uVar11);
        uVar17 = uVar17 + iVar7;
        uVar3 = *(uint *)((undefined *)register0x00000020 + -0x104);
        uVar13 = ((uVar16 | uVar8) & uVar19 | uVar16 & uVar8) +
                 ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
                 (uVar8 * 0x400 | uVar8 >> 0x16)) + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0xf8);
        iVar7 = ((uVar3 << 0xd | uVar3 >> 0x13) ^ (uVar3 << 0xf | uVar3 >> 0x11) ^ uVar3 >> 10) +
                ((uVar15 << 0xe | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 << 0x19) ^
                *(uint *)((undefined *)register0x00000020 + -0xf8) >> 3) +
                *(int *)((undefined *)register0x00000020 + -0x110) +
                *(int *)((undefined *)register0x00000020 + -0xe8);
        *(int *)((undefined *)register0x00000020 + -0x110) = iVar7;
        *(int *)((undefined *)register0x00000020 + -0x6c) = iVar7;
        iVar7 = ((uVar17 * 0x80 | uVar17 >> 0x19) ^
                (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 6 | uVar17 * 0x4000000)) +
                uVar11 + 0x682e6ff3 + iVar7 + ((uVar20 ^ uVar18) & uVar17 ^ uVar20);
        uVar19 = uVar19 + iVar7;
        uVar3 = *(uint *)((undefined *)register0x00000020 + -0xfc);
        uVar4 = ((uVar8 | uVar13) & uVar16 | uVar8 & uVar13) +
                ((uVar13 >> 0xd | uVar13 * 0x80000) ^ (uVar13 >> 2 | uVar13 * 0x40000000) ^
                (uVar13 * 0x400 | uVar13 >> 0x16)) + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x10c);
        uVar3 = ((uVar3 << 0xd | uVar3 >> 0x13) ^ (uVar3 << 0xf | uVar3 >> 0x11) ^ uVar3 >> 10) +
                uVar23 + ((uVar15 << 0xe | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 << 0x19) ^
                         *(uint *)((undefined *)register0x00000020 + -0x10c) >> 3) +
                         *(int *)((undefined *)register0x00000020 + -0xf8);
        unaff_R15 = (uint *)(ulong)uVar3;
        *(uint *)((undefined *)register0x00000020 + -0x68) = uVar3;
        iVar7 = ((uVar19 * 0x80 | uVar19 >> 0x19) ^
                (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 6 | uVar19 * 0x4000000)) +
                uVar20 + 0x748f82ee + uVar3 + ((uVar18 ^ uVar17) & uVar19 ^ uVar18);
        uVar16 = uVar16 + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x110);
        uVar20 = ((uVar13 | uVar4) & uVar8 | uVar13 & uVar4) +
                 ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
                 (uVar4 * 0x400 | uVar4 >> 0x16)) + iVar7;
        uVar10 = *(uint *)((undefined *)register0x00000020 + -0xf4);
        uVar10 = uVar14 + ((uVar10 << 0xe | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 << 0x19) ^
                          *(uint *)((undefined *)register0x00000020 + -0xf4) >> 3) +
                          *(int *)((undefined *)register0x00000020 + -0x10c) +
                 ((uVar15 << 0xd | uVar15 >> 0x13) ^ (uVar15 << 0xf | uVar15 >> 0x11) ^ uVar15 >> 10
                 );
        *(uint *)((undefined *)register0x00000020 + -100) = uVar10;
        iVar7 = ((uVar16 * 0x80 | uVar16 >> 0x19) ^
                (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 6 | uVar16 * 0x4000000)) +
                uVar18 + 0x78a5636f + uVar10 + ((uVar17 ^ uVar19) & uVar16 ^ uVar17);
        uVar8 = uVar8 + iVar7;
        uVar18 = ((uVar4 | uVar20) & uVar13 | uVar4 & uVar20) +
                 ((uVar20 >> 0xd | uVar20 * 0x80000) ^ (uVar20 >> 2 | uVar20 * 0x40000000) ^
                 (uVar20 * 0x400 | uVar20 >> 0x16)) + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x108);
        uVar11 = uVar9 + ((uVar15 << 0xe | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 << 0x19) ^
                         *(uint *)((undefined *)register0x00000020 + -0x108) >> 3) +
                         *(int *)((undefined *)register0x00000020 + -0xf4) +
                 ((uVar3 * 0x2000 | uVar3 >> 0x13) ^ (uVar3 * 0x8000 | uVar3 >> 0x11) ^ uVar3 >> 10)
        ;
        *(uint *)((undefined *)register0x00000020 + -0x60) = uVar11;
        iVar7 = ((uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000) ^
                (uVar8 * 0x80 | uVar8 >> 0x19)) +
                uVar17 + 0x84c87814 + uVar11 + ((uVar19 ^ uVar16) & uVar8 ^ uVar19);
        uVar13 = uVar13 + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0x100);
        uVar23 = iVar7 + ((uVar20 | uVar18) & uVar4 | uVar20 & uVar18) +
                         ((uVar18 >> 0xd | uVar18 * 0x80000) ^ (uVar18 >> 2 | uVar18 * 0x40000000) ^
                         (uVar18 * 0x400 | uVar18 >> 0x16));
        uVar21 = uVar21 + ((uVar15 << 0xe | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 << 0x19) ^
                          uVar15 >> 3) + *(int *)((undefined *)register0x00000020 + -0x108) +
                 (uVar10 >> 10 ^
                 (uVar10 * 0x2000 | uVar10 >> 0x13) ^ (uVar10 * 0x8000 | uVar10 >> 0x11));
        *(uint *)((undefined *)register0x00000020 + -0x5c) = uVar21;
        iVar7 = ((uVar13 >> 0xb | uVar13 * 0x200000) ^ (uVar13 >> 6 | uVar13 * 0x4000000) ^
                (uVar13 * 0x80 | uVar13 >> 0x19)) +
                uVar19 + 0x8cc70208 + uVar21 + ((uVar16 ^ uVar8) & uVar13 ^ uVar16);
        uVar4 = uVar4 + iVar7;
        uVar10 = *(uint *)((undefined *)register0x00000020 + -0xf0);
        uVar17 = iVar7 + ((uVar18 | uVar23) & uVar20 | uVar18 & uVar23) +
                         ((uVar23 >> 0xd | uVar23 * 0x80000) ^ (uVar23 >> 2 | uVar23 * 0x40000000) ^
                         (uVar23 * 0x400 | uVar23 >> 0x16));
        uVar9 = *(uint *)((undefined *)register0x00000020 + -0xec);
        uVar19 = ((uVar10 << 0xe | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 << 0x19) ^ uVar10 >> 3) +
                 uVar15 + *(int *)((undefined *)register0x00000020 + -0x104) +
                 (uVar11 >> 10 ^
                 (uVar11 * 0x2000 | uVar11 >> 0x13) ^ (uVar11 * 0x8000 | uVar11 >> 0x11));
        *(uint *)((undefined *)register0x00000020 + -0x58) = uVar19;
        iVar7 = ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
                (uVar4 * 0x80 | uVar4 >> 0x19)) +
                uVar16 + 0x90befffa + uVar19 + ((uVar8 ^ uVar13) & uVar4 ^ uVar8);
        uVar20 = uVar20 + iVar7;
        uVar14 = iVar7 + ((uVar23 | uVar17) & uVar18 | uVar23 & uVar17) +
                         ((uVar17 >> 0xd | uVar17 * 0x80000) ^ (uVar17 >> 2 | uVar17 * 0x40000000) ^
                         (uVar17 * 0x400 | uVar17 >> 0x16));
        uVar11 = ((uVar9 << 0xe | uVar9 >> 0x12) ^ (uVar9 >> 7 | uVar9 << 0x19) ^ uVar9 >> 3) +
                 *(int *)((undefined *)register0x00000020 + -0xf0) +
                 *(int *)((undefined *)register0x00000020 + -0xfc) +
                 (uVar21 >> 10 ^
                 (uVar21 * 0x2000 | uVar21 >> 0x13) ^ (uVar21 * 0x8000 | uVar21 >> 0x11));
        *(uint *)((undefined *)register0x00000020 + -0x54) = uVar11;
        iVar7 = ((uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 6 | uVar20 * 0x4000000) ^
                (uVar20 * 0x80 | uVar20 >> 0x19)) +
                uVar8 + 0xa4506ceb + uVar11 + ((uVar13 ^ uVar4) & uVar20 ^ uVar13);
        uVar18 = uVar18 + iVar7;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0xe4);
        uVar16 = iVar7 + ((uVar17 | uVar14) & uVar23 | uVar17 & uVar14) +
                         ((uVar14 >> 0xd | uVar14 * 0x80000) ^ (uVar14 >> 2 | uVar14 * 0x40000000) ^
                         (uVar14 * 0x400 | uVar14 >> 0x16));
        uVar10 = *(uint *)((undefined *)register0x00000020 + -0xe8);
        iVar7 = (uVar19 >> 10 ^
                (uVar19 * 0x2000 | uVar19 >> 0x13) ^ (uVar19 * 0x8000 | uVar19 >> 0x11)) +
                ((uVar15 << 0xe | uVar15 >> 0x12) ^ (uVar15 >> 7 | uVar15 << 0x19) ^ uVar15 >> 3) +
                uVar9 + *(int *)((undefined *)register0x00000020 + -0x110);
        *(int *)((undefined *)register0x00000020 + -0x50) = iVar7;
        iVar7 = ((uVar18 >> 0xb | uVar18 * 0x200000) ^ (uVar18 >> 6 | uVar18 * 0x4000000) ^
                (uVar18 * 0x80 | uVar18 >> 0x19)) +
                uVar13 + 0xbef9a3f7 + iVar7 + ((uVar4 ^ uVar20) & uVar18 ^ uVar4);
        uVar23 = uVar23 + iVar7;
        uVar22 = (ulong)uVar23;
        uVar8 = iVar7 + ((uVar14 | uVar16) & uVar17 | uVar14 & uVar16) +
                        ((uVar16 >> 0xd | uVar16 * 0x80000) ^ (uVar16 >> 2 | uVar16 * 0x40000000) ^
                        (uVar16 * 0x400 | uVar16 >> 0x16));
        iVar7 = (uVar11 >> 10 ^
                (uVar11 * 0x2000 | uVar11 >> 0x13) ^ (uVar11 * 0x8000 | uVar11 >> 0x11)) +
                ((uVar10 << 0xe | uVar10 >> 0x12) ^ (uVar10 >> 7 | uVar10 << 0x19) ^ uVar10 >> 3) +
                uVar15 + uVar3;
        *(int *)((undefined *)register0x00000020 + -0x4c) = iVar7;
        *(uint *)((undefined *)register0x00000020 + -0xcc) =
             *(int *)((undefined *)register0x00000020 + -0xcc) + uVar8;
        param_3 = (uint *)(ulong)(uVar16 & uVar8);
        *(uint *)((undefined *)register0x00000020 + -0xc4) =
             *(int *)((undefined *)register0x00000020 + -0xc4) + uVar14;
        *(uint *)((undefined *)register0x00000020 + -200) =
             *(int *)((undefined *)register0x00000020 + -200) + uVar16;
        iVar7 = ((uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 6 | uVar23 * 0x4000000) ^
                (uVar23 * 0x80 | uVar23 >> 0x19)) +
                ((uVar20 ^ uVar18) & uVar23 ^ uVar20) + uVar4 + 0xc67178f2 + iVar7;
        unaff_RBP = (ulong)*(uint *)((undefined *)register0x00000020 + -0xcc);
        uVar3 = *(uint *)((undefined *)register0x00000020 + -200);
        unaff_R13 = (ulong)uVar3;
        uVar15 = *(uint *)((undefined *)register0x00000020 + -0xc4);
        unaff_R14 = (ulong)uVar15;
        *(uint *)((undefined *)register0x00000020 + -0xc0) =
             *(int *)((undefined *)register0x00000020 + -0xc0) + uVar17 + iVar7;
        *(uint *)((undefined *)register0x00000020 + -0xbc) =
             *(int *)((undefined *)register0x00000020 + -0xbc) + uVar23;
        uVar9 = *(uint *)((undefined *)register0x00000020 + -0xbc);
        puVar12 = (uint *)(ulong)uVar9;
        *(uint *)((undefined *)register0x00000020 + -0xb8) =
             *(int *)((undefined *)register0x00000020 + -0xb8) + uVar18;
        puVar5 = *(uint **)((undefined *)register0x00000020 + -0x98);
        uVar11 = *(uint *)((undefined *)register0x00000020 + -0xb8);
        uVar10 = ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
                 (uVar8 * 0x400 | uVar8 >> 0x16)) + ((uVar16 | uVar8) & uVar14 | uVar16 & uVar8) +
                 *(int *)((undefined *)register0x00000020 + -0xa4) + iVar7;
        puVar5[1] = *(uint *)((undefined *)register0x00000020 + -0xcc);
        *puVar5 = uVar10;
        puVar5[2] = uVar3;
        puVar5[3] = uVar15;
        uVar4 = *(uint *)((undefined *)register0x00000020 + -0xc0);
        puVar5[5] = uVar9;
        *(uint *)((undefined *)register0x00000020 + -0xa4) = uVar10;
        puVar5[4] = uVar4;
        puVar5[6] = uVar11;
        *(uint *)((undefined *)register0x00000020 + -0xb4) =
             *(int *)((undefined *)register0x00000020 + -0xb4) + uVar20;
        uVar13 = *(uint *)((undefined *)register0x00000020 + -0xb4);
        puVar5[7] = uVar13;
      } while (*(ulong *)((undefined *)register0x00000020 + -0xd8) <=
               *(ulong *)((undefined *)register0x00000020 + -0xa0) &&
               *(ulong *)((undefined *)register0x00000020 + -0xa0) !=
               *(ulong *)((undefined *)register0x00000020 + -0xd8));
    }
    if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) break;
    *(undefined8 *)((undefined *)register0x00000020 + -0x120) = 0x105e3b;
    func_0x00101690();
    *(ulong *)((undefined *)register0x00000020 + -0x120) = uVar22;
    *(ulong *)((undefined *)register0x00000020 + -0x128) = unaff_RBP;
    *(uint **)((undefined *)register0x00000020 + -0x130) = puVar12;
    uVar22 = *(ulong *)(param_3 + 10);
    uVar3 = param_3[9];
    param_2 = (-(ulong)(uVar22 < 0x38) & 0xffffffffffffffc0) + 0x80;
    uVar15 = param_3[8] + (int)uVar22;
    param_3[8] = uVar15;
    if (uVar15 < uVar22) {
      uVar3 = uVar3 + 1;
      param_3[9] = uVar3;
    }
    uVar3 = uVar3 << 3;
    param_1 = param_3 + 0xc;
    uVar10 = uVar15 * 8;
    param_3[(-(ulong)(uVar22 < 0x38) & 0xfffffffffffffff0) + 0x2a] =
         uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
         (uVar3 | uVar15 >> 0x1d) << 0x18;
    param_3[(-(ulong)(uVar22 < 0x38) & 0xfffffffffffffff0) + 0x2b] =
         uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar15 * 0x8000000;
    *(undefined8 *)((undefined *)register0x00000020 + -0x138) = 0x105ecb;
    func_0x00101770((long)param_1 + uVar22,fillbuf,(param_2 - uVar22) + -8);
    unaff_RBX = *(undefined8 *)((undefined *)register0x00000020 + -0x130);
    unaff_RBP = *(ulong *)((undefined *)register0x00000020 + -0x128);
    unaff_R12 = *(undefined8 *)((undefined *)register0x00000020 + -0x120);
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x118);
  }
  return;
}

