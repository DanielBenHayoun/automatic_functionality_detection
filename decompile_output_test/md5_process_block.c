
void md5_process_block(int *param_1,ulong param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uStack80;
  int iStack72;
  
  piVar1 = (int *)((long)param_1 + (param_2 & 0xfffffffffffffffc));
  iStack72 = *param_3;
  uVar23 = param_3[1];
  uVar24 = param_3[2];
  uStack80 = param_3[3];
  uVar18 = param_3[4];
  param_3[4] = (uint)param_2 + param_3[4];
  param_3[5] = (int)(param_2 >> 0x20) + param_3[5] + (uint)CARRY4((uint)param_2,uVar18);
  if (param_1 < piVar1) {
    do {
      iVar2 = *param_1;
      iVar3 = param_1[1];
      iVar4 = param_1[3];
      iVar5 = param_1[5];
      iVar6 = param_1[6];
      iVar7 = param_1[7];
      iVar8 = param_1[9];
      iVar9 = param_1[0xb];
      uVar18 = ((uStack80 ^ uVar24) & uVar23 ^ uStack80) + iVar2 + -0x28955b88 + iStack72;
      uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar23;
      uVar19 = ((uVar23 ^ uVar24) & uVar18 ^ uVar24) + iVar3 + -0x173848aa + uStack80;
      iVar10 = param_1[2];
      uVar20 = (uVar19 * 0x1000 | uVar19 >> 0x14) + uVar18;
      uVar19 = ((uVar18 ^ uVar23) & uVar20 ^ uVar23) + iVar10 + 0x242070db + uVar24;
      iVar11 = param_1[4];
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
      uVar21 = ((uVar18 ^ uVar20) & uVar19 ^ uVar18) + iVar4 + -0x3e423112 + uVar23;
      iVar12 = param_1[0xf];
      uVar21 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar19;
      uVar18 = ((uVar20 ^ uVar19) & uVar21 ^ uVar20) + iVar11 + -0xa83f051 + uVar18;
      uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar21;
      uVar20 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + iVar5 + 0x4787c62a + uVar20;
      uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar18;
      uVar19 = ((uVar21 ^ uVar18) & uVar20 ^ uVar21) + iVar6 + -0x57cfb9ed + uVar19;
      iVar13 = param_1[8];
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
      uVar21 = ((uVar18 ^ uVar20) & uVar19 ^ uVar18) + iVar7 + -0x2b96aff + uVar21;
      iVar14 = param_1[0xc];
      uVar21 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar19;
      uVar18 = ((uVar20 ^ uVar19) & uVar21 ^ uVar20) + iVar13 + 0x698098d8 + uVar18;
      iVar15 = param_1[0xe];
      uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar21;
      uVar20 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + iVar8 + -0x74bb0851 + uVar20;
      iVar16 = param_1[10];
      uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar18;
      uVar19 = ((uVar21 ^ uVar18) & uVar20 ^ uVar21) + iVar16 + -0xa44f + uVar19;
      iVar17 = param_1[0xd];
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
      param_1 = param_1 + 0x10;
      uVar21 = ((uVar18 ^ uVar20) & uVar19 ^ uVar18) + iVar9 + -0x76a32842 + uVar21;
      uVar21 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar19;
      uVar18 = ((uVar20 ^ uVar19) & uVar21 ^ uVar20) + iVar14 + 0x6b901122 + uVar18;
      uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar21;
      uVar20 = ((uVar19 ^ uVar21) & uVar18 ^ uVar19) + iVar17 + -0x2678e6d + uVar20;
      uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar18;
      uVar19 = ((uVar21 ^ uVar18) & uVar20 ^ uVar21) + iVar15 + -0x5986bc72 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
      uVar21 = ((uVar18 ^ uVar20) & uVar19 ^ uVar18) + iVar12 + 0x49b40821 + uVar21;
      uVar21 = (uVar21 >> 10 | uVar21 * 0x400000) + uVar19;
      uVar18 = ((uVar19 ^ uVar21) & uVar20 ^ uVar19) + iVar3 + -0x9e1da9e + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar21;
      uVar20 = ((uVar21 ^ uVar18) & uVar19 ^ uVar21) + iVar6 + -0x3fbf4cc0 + uVar20;
      uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
      uVar19 = ((uVar18 ^ uVar20) & uVar21 ^ uVar18) + iVar9 + 0x265e5a51 + uVar19;
      uVar19 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar20;
      uVar21 = ((uVar20 ^ uVar19) & uVar18 ^ uVar20) + iVar2 + -0x16493856 + uVar21;
      uVar21 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar19;
      uVar18 = ((uVar19 ^ uVar21) & uVar20 ^ uVar19) + iVar5 + -0x29d0efa3 + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar21;
      uVar20 = ((uVar21 ^ uVar18) & uVar19 ^ uVar21) + iVar16 + 0x2441453 + uVar20;
      uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
      uVar19 = ((uVar18 ^ uVar20) & uVar21 ^ uVar18) + iVar12 + -0x275e197f + uVar19;
      uVar19 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar20;
      uVar21 = ((uVar20 ^ uVar19) & uVar18 ^ uVar20) + iVar11 + -0x182c0438 + uVar21;
      uVar21 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar19;
      uVar18 = ((uVar19 ^ uVar21) & uVar20 ^ uVar19) + iVar8 + 0x21e1cde6 + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar21;
      uVar20 = ((uVar21 ^ uVar18) & uVar19 ^ uVar21) + iVar15 + -0x3cc8f82a + uVar20;
      uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
      uVar19 = ((uVar18 ^ uVar20) & uVar21 ^ uVar18) + iVar4 + -0xb2af279 + uVar19;
      uVar19 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar20;
      uVar21 = ((uVar20 ^ uVar19) & uVar18 ^ uVar20) + iVar13 + 0x455a14ed + uVar21;
      uVar22 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar19;
      uVar18 = ((uVar19 ^ uVar22) & uVar20 ^ uVar19) + iVar17 + -0x561c16fb + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar22;
      uVar20 = ((uVar22 ^ uVar18) & uVar19 ^ uVar22) + iVar10 + -0x3105c08 + uVar20;
      uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
      uVar19 = ((uVar18 ^ uVar20) & uVar22 ^ uVar18) + iVar7 + 0x676f02d9 + uVar19;
      uVar21 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar20;
      uVar19 = ((uVar20 ^ uVar21) & uVar18 ^ uVar20) + iVar14 + -0x72d5b376 + uVar22;
      uVar22 = (uVar19 >> 0xc | uVar19 * 0x100000) + uVar21;
      uVar18 = (uVar20 ^ uVar21 ^ uVar22) + iVar5 + -0x5c6be + uVar18;
      uVar19 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar22;
      uVar18 = (uVar21 ^ uVar22 ^ uVar19) + iVar13 + -0x788e097f + uVar20;
      uVar20 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar19;
      uVar18 = (uVar22 ^ uVar19 ^ uVar20) + iVar9 + 0x6d9d6122 + uVar21;
      uVar21 = (uVar18 * 0x10000 | uVar18 >> 0x10) + uVar20;
      uVar18 = (uVar19 ^ uVar20 ^ uVar21) + iVar15 + -0x21ac7f4 + uVar22;
      uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar21;
      uVar19 = (uVar20 ^ uVar21 ^ uVar18) + iVar3 + -0x5b4115bc + uVar19;
      uVar19 = (uVar19 * 0x10 | uVar19 >> 0x1c) + uVar18;
      uVar20 = (uVar21 ^ uVar18 ^ uVar19) + iVar11 + 0x4bdecfa9 + uVar20;
      uVar22 = (uVar20 * 0x800 | uVar20 >> 0x15) + uVar19;
      uVar20 = (uVar18 ^ uVar19 ^ uVar22) + iVar7 + -0x944b4a0 + uVar21;
      uVar20 = (uVar20 * 0x10000 | uVar20 >> 0x10) + uVar22;
      uVar18 = (uVar19 ^ uVar22 ^ uVar20) + iVar16 + -0x41404390 + uVar18;
      uVar21 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar20;
      uVar18 = (uVar22 ^ uVar20 ^ uVar21) + iVar17 + 0x289b7ec6 + uVar19;
      uVar19 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar21;
      uVar18 = (uVar20 ^ uVar21 ^ uVar19) + iVar2 + -0x155ed806 + uVar22;
      uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar19;
      uVar20 = (uVar21 ^ uVar19 ^ uVar18) + iVar4 + -0x2b10cf7b + uVar20;
      uVar22 = (uVar20 * 0x10000 | uVar20 >> 0x10) + uVar18;
      uVar20 = (uVar19 ^ uVar18 ^ uVar22) + iVar6 + 0x4881d05 + uVar21;
      uVar21 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar22;
      uVar19 = (uVar18 ^ uVar22 ^ uVar21) + iVar8 + -0x262b2fc7 + uVar19;
      uVar20 = (uVar19 * 0x10 | uVar19 >> 0x1c) + uVar21;
      uVar18 = (uVar22 ^ uVar21 ^ uVar20) + iVar14 + -0x1924661b + uVar18;
      uVar19 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar20;
      uVar18 = (uVar21 ^ uVar20 ^ uVar19) + iVar12 + 0x1fa27cf8 + uVar22;
      uVar22 = (uVar18 * 0x10000 | uVar18 >> 0x10) + uVar19;
      uVar18 = (uVar20 ^ uVar19 ^ uVar22) + iVar10 + -0x3b53a99b + uVar21;
      uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar22;
      uVar20 = ((~uVar19 | uVar18) ^ uVar22) + iVar2 + -0xbd6ddbc + uVar20;
      uVar20 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar18;
      uVar19 = ((~uVar22 | uVar20) ^ uVar18) + iVar7 + 0x432aff97 + uVar19;
      uVar19 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar20;
      uVar21 = ((~uVar18 | uVar19) ^ uVar20) + iVar15 + -0x546bdc59 + uVar22;
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar19;
      uVar18 = ((~uVar20 | uVar21) ^ uVar19) + iVar5 + -0x36c5fc7 + uVar18;
      uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar21;
      uVar20 = ((~uVar19 | uVar18) ^ uVar21) + iVar14 + 0x655b59c3 + uVar20;
      uVar20 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar18;
      uVar19 = ((~uVar21 | uVar20) ^ uVar18) + iVar4 + -0x70f3336e + uVar19;
      uVar19 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar20;
      uVar21 = ((~uVar18 | uVar19) ^ uVar20) + iVar16 + -0x100b83 + uVar21;
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar19;
      uVar18 = ((~uVar20 | uVar21) ^ uVar19) + iVar3 + -0x7a7ba22f + uVar18;
      uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar21;
      uVar20 = ((~uVar19 | uVar18) ^ uVar21) + iVar13 + 0x6fa87e4f + uVar20;
      uVar20 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar18;
      uVar19 = ((~uVar21 | uVar20) ^ uVar18) + iVar12 + -0x1d31920 + uVar19;
      uVar19 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar20;
      uVar21 = ((~uVar18 | uVar19) ^ uVar20) + iVar6 + -0x5cfebcec + uVar21;
      uVar21 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar19;
      uVar18 = ((~uVar20 | uVar21) ^ uVar19) + iVar17 + 0x4e0811a1 + uVar18;
      uVar22 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar21;
      uVar18 = ((~uVar19 | uVar22) ^ uVar21) + iVar11 + -0x8ac817e + uVar20;
      uVar18 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar22;
      uVar19 = ((~uVar21 | uVar18) ^ uVar22) + iVar9 + -0x42c50dcb + uVar19;
      uVar20 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar18;
      uVar19 = ((~uVar22 | uVar20) ^ uVar18) + iVar10 + 0x2ad7d2bb + uVar21;
      uVar19 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar20;
      uVar21 = ((~uVar18 | uVar19) ^ uVar20) + iVar8 + -0x14792c6f + uVar22;
      iStack72 = iStack72 + uVar18;
      uVar24 = uVar24 + uVar19;
      uVar23 = uVar23 + (uVar21 >> 0xb | uVar21 * 0x200000) + uVar19;
      uStack80 = uStack80 + uVar20;
    } while (param_1 < piVar1);
  }
  *param_3 = iStack72;
  param_3[1] = uVar23;
  param_3[2] = uVar24;
  param_3[3] = uStack80;
  return;
}

