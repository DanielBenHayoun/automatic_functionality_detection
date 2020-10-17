
uint * sha1_process_block(ulong param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  long in_FS_OFFSET;
  byte bVar35;
  uint uStack180;
  uint uStack176;
  uint uStack172;
  uint uStack168;
  uint auStack136 [18];
  long lStack64;
  
  bVar35 = 0;
  uStack176 = param_3[2];
  uStack168 = param_3[4];
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (param_2 & 0xfffffffffffffffc) + param_1;
  uVar1 = param_3[5];
  uStack172 = param_3[3];
  puVar11 = (uint *)(ulong)uStack172;
  uVar2 = *param_3;
  uStack180 = param_3[1];
  param_3[5] = (uint)param_2 + param_3[5];
  puVar7 = (uint *)(param_2 >> 0x20);
  param_3[6] = param_3[6] + (int)(param_2 >> 0x20) + (uint)CARRY4((uint)param_2,uVar1);
  if (param_1 < uVar3) {
    puVar7 = (uint *)(ulong)uStack176;
    do {
      lVar20 = 0;
      do {
        uVar1 = *(uint *)(param_1 + lVar20);
        *(uint *)((long)auStack136 + lVar20) =
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        lVar20 = lVar20 + 4;
      } while (lVar20 != 0x40);
      param_1 = param_1 + 0x40;
      uVar5 = (uint)puVar7;
      uVar9 = (uint)puVar11;
      uVar4 = uStack180 >> 2 | uStack180 << 0x1e;
      uVar16 = ((uVar5 ^ uVar9) & uStack180 ^ uVar9) +
               (uVar2 << 5 | uVar2 >> 0x1b) + auStack136[0] + 0x5a827999 + uStack168;
      uVar1 = uVar2 >> 2 | uVar2 << 0x1e;
      uVar14 = ((uVar4 ^ uVar5) & uVar2 ^ uVar5) + auStack136[1] + 0x5a827999 + uVar9 +
               (uVar16 * 0x20 | uVar16 >> 0x1b);
      uVar17 = uVar16 >> 2 | uVar16 * 0x40000000;
      uVar9 = ((uVar4 ^ uVar1) & uVar16 ^ uVar4) + auStack136[2] + 0x5a827999 + uVar5 +
              (uVar14 * 0x20 | uVar14 >> 0x1b);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar5 = ((uVar1 ^ uVar17) & uVar14 ^ uVar1) + auStack136[3] + 0x5a827999 + uVar4 +
              (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar14 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar4 = ((uVar17 ^ uVar16) & uVar9 ^ uVar17) + auStack136[4] + 0x5a827999 + uVar1 +
              (uVar5 * 0x20 | uVar5 >> 0x1b);
      uVar9 = uVar5 >> 2 | uVar5 * 0x40000000;
      uVar1 = ((uVar16 ^ uVar14) & uVar5 ^ uVar16) + auStack136[5] + 0x5a827999 + uVar17 +
              (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar16 = ((uVar14 ^ uVar9) & uVar4 ^ uVar14) + auStack136[6] + 0x5a827999 + uVar16 +
               (uVar1 * 0x20 | uVar1 >> 0x1b);
      uVar4 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar1 = ((uVar9 ^ uVar5) & uVar1 ^ uVar9) + auStack136[7] + 0x5a827999 + uVar14 +
              (uVar16 * 0x20 | uVar16 >> 0x1b);
      uVar17 = uVar16 >> 2 | uVar16 * 0x40000000;
      uVar9 = ((uVar5 ^ uVar4) & uVar16 ^ uVar5) + auStack136[8] + 0x5a827999 + uVar9 +
              (uVar1 * 0x20 | uVar1 >> 0x1b);
      uVar16 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar1 = ((uVar4 ^ uVar17) & uVar1 ^ uVar4) + auStack136[9] + 0x5a827999 + uVar5 +
              (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar14 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar4 = ((uVar17 ^ uVar16) & uVar9 ^ uVar17) + auStack136[10] + 0x5a827999 + uVar4 +
              (uVar1 * 0x20 | uVar1 >> 0x1b);
      uVar9 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar1 = ((uVar16 ^ uVar14) & uVar1 ^ uVar16) + auStack136[11] + 0x5a827999 + uVar17 +
              (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar16 = ((uVar14 ^ uVar9) & uVar4 ^ uVar14) + auStack136[12] + 0x5a827999 + uVar16 +
               (uVar1 * 0x20 | uVar1 >> 0x1b);
      uVar4 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar1 = ((uVar9 ^ uVar5) & uVar1 ^ uVar9) + auStack136[13] + 0x5a827999 + uVar14 +
              (uVar16 * 0x20 | uVar16 >> 0x1b);
      uVar17 = auStack136[0] ^ auStack136[2] ^ auStack136[8] ^ auStack136[13];
      uVar18 = uVar16 >> 2 | uVar16 * 0x40000000;
      uVar14 = auStack136[1] ^ auStack136[3] ^ auStack136[9] ^ auStack136[14];
      uVar23 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar9 = ((uVar5 ^ uVar4) & uVar16 ^ uVar5) + auStack136[14] + 0x5a827999 + uVar9 +
              (uVar1 * 0x20 | uVar1 >> 0x1b);
      uVar21 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar17 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar1 = ((uVar4 ^ uVar18) & uVar1 ^ uVar4) + auStack136[15] + 0x5a827999 + uVar5 +
              (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar14 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar5 = ((uVar18 ^ uVar17) & uVar9 ^ uVar18) + uVar23 + 0x5a827999 + uVar4 +
              (uVar1 * 0x20 | uVar1 >> 0x1b);
      uVar16 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar9 = uVar5 >> 2 | uVar5 * 0x40000000;
      uVar1 = ((uVar17 ^ uVar14) & uVar1 ^ uVar17) + uVar21 + 0x5a827999 + uVar18 +
              (uVar5 * 0x20 | uVar5 >> 0x1b);
      uVar4 = auStack136[10] ^ auStack136[2] ^ auStack136[4] ^ auStack136[15];
      uVar19 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar4 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar17 = ((uVar14 ^ uVar16) & uVar5 ^ uVar14) + uVar19 + 0x5a827999 + uVar17 +
               (uVar1 * 0x20 | uVar1 >> 0x1b);
      uVar5 = auStack136[3] ^ auStack136[5] ^ auStack136[11] ^ uVar23;
      uVar15 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar1 = ((uVar16 ^ uVar9) & uVar1 ^ uVar16) + uVar15 + 0x5a827999 + uVar14 +
              (uVar17 * 0x20 | uVar17 >> 0x1b);
      uVar5 = auStack136[6] ^ auStack136[4] ^ auStack136[12] ^ uVar21;
      uVar10 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar24 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar14 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar16 = (uVar1 * 0x20 | uVar1 >> 0x1b) +
               uVar10 + 0x6ed9eba1 + uVar16 + (uVar9 ^ uVar4 ^ uVar17);
      uVar5 = auStack136[7] ^ auStack136[5] ^ auStack136[13] ^ uVar19;
      uVar6 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      uVar31 = uVar16 >> 2 | uVar16 * 0x40000000;
      uVar9 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
              uVar6 + 0x6ed9eba1 + uVar9 + (uVar4 ^ uVar24 ^ uVar1);
      uVar1 = auStack136[6] ^ auStack136[8] ^ auStack136[14] ^ uVar15;
      uVar5 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar16 = (uVar9 * 0x20 | uVar9 >> 0x1b) +
               uVar5 + 0x6ed9eba1 + uVar4 + (uVar24 ^ uVar14 ^ uVar16);
      uVar1 = auStack136[7] ^ auStack136[9] ^ auStack136[15] ^ uVar10;
      uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar18 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar17 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
               uVar1 + 0x6ed9eba1 + uVar24 + (uVar14 ^ uVar31 ^ uVar9);
      uVar4 = auStack136[8] ^ auStack136[10] ^ uVar23 ^ uVar6;
      uVar25 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar29 = uVar16 >> 2 | uVar16 * 0x40000000;
      uVar9 = (uVar17 * 0x20 | uVar17 >> 0x1b) +
              uVar25 + 0x6ed9eba1 + uVar14 + (uVar31 ^ uVar18 ^ uVar16);
      uVar4 = auStack136[9] ^ auStack136[11] ^ uVar21 ^ uVar5;
      uVar16 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar27 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar31 = (uVar9 * 0x20 | uVar9 >> 0x1b) +
               (uVar18 ^ uVar29 ^ uVar17) + uVar16 + 0x6ed9eba1 + uVar31;
      uVar4 = auStack136[10] ^ auStack136[12] ^ uVar19 ^ uVar1;
      uVar17 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar14 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar4 = (uVar29 ^ uVar27 ^ uVar9) + uVar17 + 0x6ed9eba1 + uVar18 +
              (uVar31 * 0x20 | uVar31 >> 0x1b);
      uVar9 = auStack136[11] ^ auStack136[13] ^ uVar15 ^ uVar25;
      uVar24 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar32 = uVar31 >> 2 | uVar31 * 0x40000000;
      uVar31 = (uVar4 * 0x20 | uVar4 >> 0x1b) +
               (uVar27 ^ uVar14 ^ uVar31) + uVar24 + 0x6ed9eba1 + uVar29;
      uVar9 = auStack136[12] ^ auStack136[14] ^ uVar10 ^ uVar16;
      uVar29 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar9 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar18 = (uVar31 * 0x20 | uVar31 >> 0x1b) +
               (uVar14 ^ uVar32 ^ uVar4) + uVar29 + 0x6ed9eba1 + uVar27;
      uVar4 = auStack136[13] ^ auStack136[15] ^ uVar6 ^ uVar17;
      uVar27 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar26 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
               (uVar32 ^ uVar9 ^ uVar31) + uVar27 + 0x6ed9eba1 + uVar14;
      uVar30 = uVar31 >> 2 | uVar31 * 0x40000000;
      uVar4 = uVar23 ^ auStack136[14] ^ uVar5 ^ uVar24;
      uVar31 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar28 = uVar18 >> 2 | uVar18 * 0x40000000;
      uVar14 = (uVar9 ^ uVar30 ^ uVar18) + uVar31 + 0x6ed9eba1 + uVar32 +
               (uVar26 * 0x20 | uVar26 >> 0x1b);
      uVar4 = auStack136[15] ^ uVar21 ^ uVar1 ^ uVar29;
      uVar33 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar32 = uVar26 >> 2 | uVar26 * 0x40000000;
      uVar18 = uVar23 ^ uVar19 ^ uVar25 ^ uVar27;
      uVar4 = uVar33 + 0x6ed9eba1 + uVar9 + (uVar30 ^ uVar28 ^ uVar26) +
              (uVar14 * 0x20 | uVar14 >> 0x1b);
      uVar34 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      uVar18 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar26 = (uVar28 ^ uVar32 ^ uVar14) + uVar34 + 0x6ed9eba1 + uVar30 +
               (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar14 = uVar21 ^ uVar15 ^ uVar16 ^ uVar31;
      uVar9 = uVar19 ^ uVar10 ^ uVar17 ^ uVar33;
      uVar22 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar30 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar14 = uVar15 ^ uVar6 ^ uVar24 ^ uVar34;
      uVar9 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar23 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar14 = uVar10 ^ uVar5 ^ uVar29 ^ uVar22;
      uVar4 = (uVar32 ^ uVar18 ^ uVar4) + uVar22 + 0x6ed9eba1 + uVar28 +
              (uVar26 * 0x20 | uVar26 >> 0x1b);
      uVar28 = uVar26 >> 2 | uVar26 * 0x40000000;
      uVar10 = (uVar18 ^ uVar9 ^ uVar26) + uVar30 + 0x6ed9eba1 + uVar32 +
               (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar32 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar18 = (uVar9 ^ uVar28 ^ uVar4) + uVar23 + 0x6ed9eba1 + uVar18 +
               (uVar10 * 0x20 | uVar10 >> 0x1b);
      uVar19 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar26 = uVar10 >> 2 | uVar10 * 0x40000000;
      uVar4 = uVar6 ^ uVar1 ^ uVar27 ^ uVar30;
      uVar15 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar9 = (uVar28 ^ uVar32 ^ uVar10) + uVar19 + 0x6ed9eba1 + uVar9 +
              (uVar18 * 0x20 | uVar18 >> 0x1b);
      uVar21 = uVar18 >> 2 | uVar18 * 0x40000000;
      uVar18 = (uVar32 ^ uVar26 ^ uVar18) + uVar15 + 0x6ed9eba1 + uVar28 +
               (uVar9 * 0x20 | uVar9 >> 0x1b);
      uVar4 = uVar5 ^ uVar25 ^ uVar31 ^ uVar23;
      uVar14 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar1 = uVar1 ^ uVar16 ^ uVar33 ^ uVar19;
      uVar9 = (uVar26 ^ uVar21 ^ uVar9) + uVar14 + 0x6ed9eba1 + uVar32 +
              (uVar18 * 0x20 | uVar18 >> 0x1b);
      uVar4 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar6 = uVar18 >> 2 | uVar18 * 0x40000000;
      uVar18 = (uVar9 * 0x20 | uVar9 >> 0x1b) +
               (uVar21 ^ uVar10 ^ uVar18) + uVar4 + 0x6ed9eba1 + uVar26;
      uVar1 = uVar25 ^ uVar17 ^ uVar34 ^ uVar15;
      uVar16 = uVar24 ^ uVar16 ^ uVar22 ^ uVar14;
      uVar5 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar1 = uVar9 >> 2 | uVar9 * 0x40000000;
      uVar28 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      uVar16 = uVar5 + 0x8f1bbcdc + uVar21 + (uVar18 * 0x20 | uVar18 >> 0x1b) +
               ((uVar9 | uVar6) & uVar10 | uVar9 & uVar6);
      uVar9 = uVar29 ^ uVar17 ^ uVar30 ^ uVar4;
      uVar32 = uVar18 >> 2 | uVar18 * 0x40000000;
      uVar17 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
               (uVar18 & uVar1 | (uVar18 | uVar1) & uVar6) + uVar28 + 0x8f1bbcdc + uVar10;
      uVar18 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar9 = uVar24 ^ uVar27 ^ uVar23 ^ uVar5;
      uVar26 = uVar16 >> 2 | uVar16 * 0x40000000;
      uVar16 = uVar18 + 0x8f1bbcdc + uVar6 + (uVar17 * 0x20 | uVar17 >> 0x1b) +
               ((uVar16 | uVar32) & uVar1 | uVar16 & uVar32);
      uVar6 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar21 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar9 = uVar29 ^ uVar31 ^ uVar19 ^ uVar28;
      uVar1 = (uVar16 * 0x20 | uVar16 >> 0x1b) +
              (uVar17 & uVar26 | (uVar17 | uVar26) & uVar32) + uVar6 + 0x8f1bbcdc + uVar1;
      uVar10 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar29 = uVar10 + 0x8f1bbcdc + uVar32 + (uVar1 * 0x20 | uVar1 >> 0x1b) +
               ((uVar16 | uVar21) & uVar26 | uVar16 & uVar21);
      uVar17 = uVar16 >> 2 | uVar16 * 0x40000000;
      uVar16 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar9 = uVar15 ^ uVar27 ^ uVar33 ^ uVar18;
      uVar24 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar9 = uVar31 ^ uVar34 ^ uVar14 ^ uVar6;
      uVar31 = (uVar29 * 0x20 | uVar29 >> 0x1b) +
               (uVar1 & uVar17 | (uVar1 | uVar17) & uVar21) + uVar24 + 0x8f1bbcdc + uVar26;
      uVar27 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar32 = uVar29 >> 2 | uVar29 * 0x40000000;
      uVar29 = uVar27 + 0x8f1bbcdc + uVar21 + (uVar31 * 0x20 | uVar31 >> 0x1b) +
               ((uVar29 | uVar16) & uVar17 | uVar29 & uVar16);
      uVar1 = uVar33 ^ uVar22 ^ uVar4 ^ uVar10;
      uVar9 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar1 = uVar34 ^ uVar30 ^ uVar5 ^ uVar24;
      uVar26 = uVar31 >> 2 | uVar31 * 0x40000000;
      uVar17 = (uVar29 * 0x20 | uVar29 >> 0x1b) +
               (uVar31 & uVar32 | (uVar31 | uVar32) & uVar16) + uVar9 + 0x8f1bbcdc + uVar17;
      uVar33 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar21 = uVar29 >> 2 | uVar29 * 0x40000000;
      uVar1 = uVar33 + 0x8f1bbcdc + uVar16 + (uVar17 * 0x20 | uVar17 >> 0x1b) +
              ((uVar29 | uVar26) & uVar32 | uVar29 & uVar26);
      uVar16 = uVar22 ^ uVar23 ^ uVar28 ^ uVar27;
      uVar31 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar25 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      uVar17 = (uVar1 * 0x20 | uVar1 >> 0x1b) +
               (uVar17 & uVar21 | (uVar17 | uVar21) & uVar26) + uVar25 + 0x8f1bbcdc + uVar32;
      uVar16 = uVar19 ^ uVar30 ^ uVar18 ^ uVar9;
      uVar30 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      uVar16 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar1 = ((uVar1 | uVar31) & uVar21 | uVar1 & uVar31) +
              uVar30 + 0x8f1bbcdc + uVar26 + (uVar17 * 0x20 | uVar17 >> 0x1b);
      uVar29 = uVar15 ^ uVar23 ^ uVar6 ^ uVar33;
      uVar23 = uVar29 << 1 | (uint)((int)uVar29 < 0);
      uVar29 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar19 = uVar19 ^ uVar14 ^ uVar10 ^ uVar25;
      uVar26 = (uVar1 * 0x20 | uVar1 >> 0x1b) +
               (uVar17 & uVar16 | (uVar17 | uVar16) & uVar31) + uVar23 + 0x8f1bbcdc + uVar21;
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar21 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar1 = ((uVar1 | uVar29) & uVar16 | uVar1 & uVar29) +
              uVar19 + 0x8f1bbcdc + uVar31 + (uVar26 * 0x20 | uVar26 >> 0x1b);
      uVar17 = uVar15 ^ uVar4 ^ uVar24 ^ uVar30;
      uVar31 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar32 = uVar26 >> 2 | uVar26 * 0x40000000;
      uVar17 = (uVar1 * 0x20 | uVar1 >> 0x1b) +
               (uVar26 & uVar21 | (uVar26 | uVar21) & uVar29) + uVar31 + 0x8f1bbcdc + uVar16;
      uVar14 = uVar14 ^ uVar5 ^ uVar27 ^ uVar23;
      uVar16 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar15 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar14 = uVar16 + 0x8f1bbcdc + uVar29 + (uVar17 * 0x20 | uVar17 >> 0x1b) +
               ((uVar1 | uVar32) & uVar21 | uVar1 & uVar32);
      uVar1 = uVar4 ^ uVar28 ^ uVar9 ^ uVar19;
      uVar4 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar29 = (uVar14 * 0x20 | uVar14 >> 0x1b) +
               (uVar17 & uVar15 | (uVar17 | uVar15) & uVar32) + uVar4 + 0x8f1bbcdc + uVar21;
      uVar21 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar1 = uVar5 ^ uVar18 ^ uVar33 ^ uVar31;
      uVar17 = uVar28 ^ uVar6 ^ uVar25 ^ uVar16;
      uVar5 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar22 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar17 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar1 = ((uVar14 | uVar21) & uVar15 | uVar14 & uVar21) +
              uVar5 + 0x8f1bbcdc + uVar32 + (uVar29 * 0x20 | uVar29 >> 0x1b);
      uVar26 = uVar29 >> 2 | uVar29 * 0x40000000;
      uVar14 = uVar18 ^ uVar10 ^ uVar30 ^ uVar4;
      uVar18 = (uVar1 * 0x20 | uVar1 >> 0x1b) +
               (uVar29 & uVar17 | (uVar29 | uVar17) & uVar21) + uVar22 + 0x8f1bbcdc + uVar15;
      uVar29 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar32 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar14 = uVar10 ^ uVar27 ^ uVar19 ^ uVar22;
      uVar1 = ((uVar1 | uVar26) & uVar17 | uVar1 & uVar26) +
              uVar29 + 0x8f1bbcdc + uVar21 + (uVar18 * 0x20 | uVar18 >> 0x1b);
      uVar28 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar14 = uVar6 ^ uVar24 ^ uVar23 ^ uVar5;
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar6 = uVar18 >> 2 | uVar18 * 0x40000000;
      uVar17 = (uVar1 * 0x20 | uVar1 >> 0x1b) +
               (uVar18 & uVar32 | (uVar18 | uVar32) & uVar26) + uVar14 + 0x8f1bbcdc + uVar17;
      uVar18 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar15 = (uVar17 * 0x20 | uVar17 >> 0x1b) +
               (uVar32 ^ uVar6 ^ uVar1) + uVar28 + 0xca62c1d6 + uVar26;
      uVar1 = uVar24 ^ uVar9 ^ uVar31 ^ uVar29;
      uVar10 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar1 = uVar27 ^ uVar33 ^ uVar16 ^ uVar14;
      uVar26 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar27 = (uVar15 * 0x20 | uVar15 >> 0x1b) +
               uVar10 + 0xca62c1d6 + uVar32 + (uVar6 ^ uVar18 ^ uVar17);
      uVar24 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar21 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar1 = uVar33 ^ uVar30 ^ uVar5 ^ uVar10;
      uVar17 = (uVar27 * 0x20 | uVar27 >> 0x1b) +
               (uVar18 ^ uVar26 ^ uVar15) + uVar24 + 0xca62c1d6 + uVar6;
      auStack136[0] = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar1 = uVar9 ^ uVar25 ^ uVar4 ^ uVar28;
      uVar9 = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar15 = uVar27 >> 2 | uVar27 * 0x40000000;
      uVar1 = (uVar17 * 0x20 | uVar17 >> 0x1b) +
              (uVar26 ^ uVar21 ^ uVar27) + uVar9 + 0xca62c1d6 + uVar18;
      uVar6 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar17 = (uVar1 * 0x20 | uVar1 >> 0x1b) +
               auStack136[0] + 0xca62c1d6 + uVar26 + (uVar21 ^ uVar15 ^ uVar17);
      uVar18 = uVar25 ^ uVar23 ^ uVar22 ^ uVar24;
      uVar27 = uVar1 >> 2 | uVar1 * 0x40000000;
      auStack136[1] = uVar18 << 1 | (uint)((int)uVar18 < 0);
      uVar18 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar1 = (uVar15 ^ uVar6 ^ uVar1) + auStack136[1] + 0xca62c1d6 + uVar21 +
              (uVar17 * 0x20 | uVar17 >> 0x1b);
      uVar21 = uVar30 ^ uVar19 ^ uVar29 ^ uVar9;
      auStack136[2] = uVar21 << 1 | (uint)((int)uVar21 < 0);
      uVar15 = (uVar1 * 0x20 | uVar1 >> 0x1b) +
               auStack136[2] + 0xca62c1d6 + uVar15 + (uVar6 ^ uVar27 ^ uVar17);
      uVar17 = uVar14 ^ uVar23 ^ uVar31 ^ auStack136[0];
      auStack136[3] = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar21 = (uVar15 * 0x20 | uVar15 >> 0x1b) +
               auStack136[3] + 0xca62c1d6 + uVar6 + (uVar27 ^ uVar18 ^ uVar1);
      uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar6 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar17 = uVar28 ^ uVar19 ^ uVar16 ^ auStack136[1];
      auStack136[4] = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar15 = (uVar21 * 0x20 | uVar21 >> 0x1b) +
               auStack136[4] + 0xca62c1d6 + uVar27 + (uVar18 ^ uVar1 ^ uVar15);
      uVar27 = uVar21 >> 2 | uVar21 * 0x40000000;
      uVar17 = uVar31 ^ uVar4 ^ uVar10 ^ auStack136[2];
      auStack136[5] = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar18 = (uVar15 * 0x20 | uVar15 >> 0x1b) +
               auStack136[5] + 0xca62c1d6 + uVar18 + (uVar1 ^ uVar6 ^ uVar21);
      uVar16 = uVar16 ^ uVar5 ^ uVar24 ^ auStack136[3];
      auStack136[6] = uVar16 << 1 | (uint)((int)uVar16 < 0);
      uVar17 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
               auStack136[6] + 0xca62c1d6 + uVar1 + (uVar6 ^ uVar27 ^ uVar15);
      uVar31 = uVar18 >> 2 | uVar18 * 0x40000000;
      uVar1 = uVar22 ^ uVar4 ^ uVar9 ^ auStack136[4];
      auStack136[7] = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar1 = uVar29 ^ uVar5 ^ auStack136[0] ^ auStack136[5];
      auStack136[8] = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar4 = (uVar17 * 0x20 | uVar17 >> 0x1b) +
              auStack136[7] + 0xca62c1d6 + uVar6 + (uVar27 ^ uVar19 ^ uVar18);
      uVar18 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar16 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar5 = (uVar19 ^ uVar31 ^ uVar17) + auStack136[8] + 0xca62c1d6 + uVar27 +
              (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar1 = uVar22 ^ uVar14 ^ auStack136[1] ^ auStack136[6];
      auStack136[9] = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar4 = (uVar31 ^ uVar18 ^ uVar4) + auStack136[9] + 0xca62c1d6 + uVar19 +
              (uVar5 * 0x20 | uVar5 >> 0x1b);
      uVar1 = auStack136[2] ^ uVar29 ^ uVar28 ^ auStack136[7];
      auStack136[10] = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar17 = auStack136[10] + 0xca62c1d6 + uVar31 + (uVar18 ^ uVar16 ^ uVar5) +
               (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar29 = uVar5 >> 2 | uVar5 * 0x40000000;
      uVar1 = auStack136[8] ^ auStack136[3] ^ uVar14 ^ uVar10;
      auStack136[11] = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
      uVar1 = (uVar16 ^ uVar29 ^ uVar4) + auStack136[11] + 0xca62c1d6 + uVar18 +
              (uVar17 * 0x20 | uVar17 >> 0x1b);
      uVar4 = auStack136[9] ^ auStack136[4] ^ uVar28 ^ uVar24;
      auStack136[12] = uVar4 << 1 | (uint)((int)uVar4 < 0);
      uVar18 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar4 = (uVar29 ^ uVar5 ^ uVar17) + auStack136[12] + 0xca62c1d6 + uVar16 +
              (uVar1 * 0x20 | uVar1 >> 0x1b);
      uVar14 = auStack136[10] ^ auStack136[5] ^ uVar10 ^ uVar9;
      auStack136[13] = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar17 = uVar1 >> 2 | uVar1 * 0x40000000;
      uVar14 = (uVar5 ^ uVar18 ^ uVar1) + auStack136[13] + 0xca62c1d6 + uVar29 +
               (uVar4 * 0x20 | uVar4 >> 0x1b);
      uVar1 = auStack136[11] ^ auStack136[6] ^ uVar24 ^ auStack136[0];
      auStack136[14] = uVar1 << 1 | (uint)((int)uVar1 < 0);
      uVar16 = uVar4 >> 2 | uVar4 * 0x40000000;
      uStack172 = uStack172 + uVar16;
      uVar4 = (uVar18 ^ uVar17 ^ uVar4) + auStack136[14] + 0xca62c1d6 + uVar5 +
              (uVar14 * 0x20 | uVar14 >> 0x1b);
      uStack180 = uStack180 + uVar4;
      uVar1 = auStack136[7] ^ auStack136[1] ^ uVar9 ^ auStack136[12];
      auStack136[15] = uVar1 << 1 | (uint)((int)uVar1 < 0);
      puVar11 = (uint *)(ulong)uStack172;
      uStack176 = uStack176 + (uVar14 >> 2 | uVar14 * 0x40000000);
      puVar7 = (uint *)(ulong)uStack176;
      param_3[3] = uStack172;
      uVar2 = (uVar4 * 0x20 | uVar4 >> 0x1b) +
              uVar18 + uVar2 + 0xca62c1d6 + auStack136[15] + (uVar17 ^ uVar16 ^ uVar14);
      *param_3 = uVar2;
      param_3[1] = uStack180;
      param_3[2] = uStack176;
      uStack168 = uStack168 + uVar17;
      param_3[4] = uStack168;
    } while (param_1 < uVar3);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uint *)0x0;
  }
  func_0x00101690();
  uVar1 = puVar11[7];
  uVar2 = puVar11[6];
  lVar20 = (-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80;
  uVar4 = puVar11[5];
  uVar5 = uVar1 + puVar11[5];
  puVar11[5] = uVar5;
  if (CARRY4(uVar1,uVar4) != false) {
    uVar2 = uVar2 + 1;
    puVar11[6] = uVar2;
  }
  uVar2 = uVar2 << 3;
  uVar4 = uVar5 * 8;
  puVar11[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x26] =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
       (uVar2 | uVar5 >> 0x1d) << 0x18;
  puVar11[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x27] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar5 * 0x8000000;
  lVar12 = lVar20 - (ulong)uVar1;
  puVar13 = (undefined8 *)((long)(puVar11 + 8) + (ulong)uVar1);
  uVar3 = lVar12 - 8;
  if (uVar3 < 8) {
    if ((uVar3 & 4) == 0) {
      if ((uVar3 != 0) && (*(char *)puVar13 = (char)fillbuf._0_4_, (uVar3 & 2) != 0)) {
        *(undefined2 *)((long)puVar13 + lVar12 + -10) = *(undefined2 *)(&UNK_00108536 + lVar12);
      }
    }
    else {
      *(undefined4 *)puVar13 = fillbuf._0_4_;
      *(undefined4 *)((long)puVar13 + lVar12 + -0xc) = *(undefined4 *)(&UNK_00108534 + lVar12);
    }
  }
  else {
    *puVar13 = CONCAT44(fillbuf._4_4_,fillbuf._0_4_);
    *(undefined8 *)((long)puVar13 + lVar12 + -0x10) = *(undefined8 *)(&UNK_00108530 + lVar12);
    puVar8 = (undefined8 *)
             ((long)puVar13 - (long)(undefined8 *)((ulong)(puVar13 + 1) & 0xfffffffffffffff8));
    uVar3 = uVar3 + (long)puVar8 >> 3;
    puVar8 = (undefined8 *)(fillbuf + -(long)puVar8);
    puVar13 = (undefined8 *)((ulong)(puVar13 + 1) & 0xfffffffffffffff8);
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      *puVar13 = *puVar8;
      puVar8 = puVar8 + (ulong)bVar35 * 0x1ffffffffffffffe + 1;
      puVar13 = puVar13 + (ulong)bVar35 * 0x1ffffffffffffffe + 1;
    }
  }
  sha1_process_block(puVar11 + 8,lVar20,puVar11);
  uVar1 = *puVar11;
  *puVar7 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = puVar11[1];
  puVar7[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = puVar11[2];
  puVar7[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = puVar11[3];
  puVar7[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = puVar11[4];
  puVar7[4] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return puVar7;
}

