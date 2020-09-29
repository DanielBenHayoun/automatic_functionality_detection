
void factor_insert_multiplicity(long param_1,ulong param_2,char param_3)

{
  ulong *puVar1;
  long lVar2;
  char *pcVar3;
  ulong *puVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  bool bVar14;
  
  puVar1 = (ulong *)(param_1 + 0x10);
  bVar5 = *(byte *)(param_1 + 0xfa);
  pcVar3 = (char *)(param_1 + 0xe0);
  uVar12 = (uint)bVar5 - 1;
  pcVar9 = pcVar3;
  puVar13 = puVar1;
  if (uVar12 != 0xffffffff) {
    lVar7 = (long)(int)uVar12;
    uVar8 = *(ulong *)(param_1 + 0x10 + lVar7 * 8);
    if (param_2 < uVar8) {
      lVar2 = lVar7 + -1;
      lVar6 = lVar2;
      uVar11 = uVar12;
      do {
        lVar10 = lVar6;
        uVar11 = uVar11 - 1;
        if ((lVar7 - (ulong)uVar12) + -1 == lVar10) {
          uVar11 = 0xffffffff;
          goto code_r0x00101e00;
        }
        puVar4 = (ulong *)(param_1 + 0x18 + (lVar10 + -1) * 8);
        bVar14 = *puVar4 == param_2;
        lVar6 = lVar10 + -1;
      } while (param_2 <= *puVar4 && !bVar14);
      if (bVar14) {
code_r0x00101e55:
        pcVar3[lVar10] = pcVar3[lVar10] + param_3;
        return;
      }
      puVar13 = puVar1 + lVar10 + 1;
      pcVar9 = pcVar3 + lVar10 + 1;
      if ((int)uVar11 < (int)uVar12) {
code_r0x00101e00:
        while( true ) {
          lVar10 = lVar2;
          *(ulong *)(param_1 + 0x18 + lVar7 * 8) = uVar8;
          *(char *)(param_1 + 0xe1 + lVar7) = pcVar3[lVar7];
          if ((int)lVar10 <= (int)uVar11) break;
          uVar8 = puVar1[lVar10];
          lVar2 = lVar10 + -1;
          lVar7 = lVar10;
        }
      }
    }
    else {
      lVar10 = lVar7;
      if (param_2 == uVar8) goto code_r0x00101e55;
      pcVar9 = (char *)(param_1 + 0xe1 + lVar7);
      puVar13 = (ulong *)(param_1 + 0x18 + lVar7 * 8);
    }
  }
  *puVar13 = param_2;
  *pcVar9 = param_3;
  *(char *)(param_1 + 0xfa) = bVar5 + 1;
  return;
}

