
void isaac_seed(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar3 = 0x98f5704f6c44c0ab;
  uVar13 = 0xae985bf2cbfc89ed;
  uVar7 = 0x48fe4a0fa5a09315;
  uVar9 = 0x82f053db8355e0ce;
  uVar10 = 0xb29b2e824a595524;
  uVar5 = 0x8c0ea5053d4712a0;
  uVar14 = 0xb9f8b322c73ac862;
  uVar11 = 0x647c4677a2884b7c;
  puVar1 = param_1;
  do {
    lVar12 = uVar11 + (*puVar1 - (uVar9 + puVar1[4]));
    uVar8 = uVar7 + puVar1[5] ^ uVar3 + puVar1[7] >> 9;
    uVar14 = uVar14 + (puVar1[1] - uVar8);
    uVar7 = uVar13 + puVar1[6] ^ lVar12 * 0x200;
    lVar6 = uVar5 + (puVar1[2] - uVar7);
    uVar3 = uVar3 + puVar1[7] + lVar12 ^ uVar14 >> 0x17;
    uVar10 = uVar10 + (puVar1[3] - uVar3);
    uVar11 = lVar12 + uVar14 ^ lVar6 * 0x8000;
    lVar12 = (uVar9 + puVar1[4]) - uVar11;
    *puVar1 = uVar11;
    uVar14 = uVar14 + lVar6 ^ uVar10 >> 0xe;
    uVar8 = uVar8 - uVar14;
    puVar1[1] = uVar14;
    uVar5 = lVar6 + uVar10 ^ lVar12 * 0x100000;
    lVar6 = uVar7 - uVar5;
    puVar1[2] = uVar5;
    uVar10 = uVar10 + lVar12 ^ uVar8 >> 0x11;
    uVar7 = uVar8 + lVar6;
    uVar3 = uVar3 - uVar10;
    puVar1[3] = uVar10;
    uVar9 = lVar6 * 0x4000 ^ lVar12 + uVar8;
    uVar13 = lVar6 + uVar3;
    puVar1[5] = uVar7;
    puVar1[4] = uVar9;
    puVar1[6] = uVar13;
    puVar2 = puVar1 + 8;
    puVar1[7] = uVar3;
    puVar1 = puVar2;
    puVar4 = param_1;
  } while (param_1 + 0x100 != puVar2);
  do {
    lVar12 = uVar11 + (*puVar4 - (uVar9 + puVar4[4]));
    uVar8 = uVar7 + puVar4[5] ^ uVar3 + puVar4[7] >> 9;
    uVar14 = uVar14 + (puVar4[1] - uVar8);
    uVar7 = uVar13 + puVar4[6] ^ lVar12 * 0x200;
    lVar6 = uVar5 + (puVar4[2] - uVar7);
    uVar3 = uVar3 + puVar4[7] + lVar12 ^ uVar14 >> 0x17;
    uVar10 = uVar10 + (puVar4[3] - uVar3);
    uVar11 = lVar12 + uVar14 ^ lVar6 * 0x8000;
    lVar12 = (uVar9 + puVar4[4]) - uVar11;
    *puVar4 = uVar11;
    uVar14 = uVar14 + lVar6 ^ uVar10 >> 0xe;
    uVar8 = uVar8 - uVar14;
    puVar4[1] = uVar14;
    uVar5 = lVar6 + uVar10 ^ lVar12 * 0x100000;
    lVar6 = uVar7 - uVar5;
    puVar4[2] = uVar5;
    uVar10 = uVar10 + lVar12 ^ uVar8 >> 0x11;
    uVar7 = uVar8 + lVar6;
    uVar3 = uVar3 - uVar10;
    puVar4[3] = uVar10;
    uVar9 = lVar6 * 0x4000 ^ lVar12 + uVar8;
    uVar13 = lVar6 + uVar3;
    puVar4[5] = uVar7;
    puVar4[4] = uVar9;
    puVar4[6] = uVar13;
    puVar1 = puVar4 + 8;
    puVar4[7] = uVar3;
    puVar4 = puVar1;
  } while (puVar2 != puVar1);
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  param_1[0x100] = 0;
  return;
}

