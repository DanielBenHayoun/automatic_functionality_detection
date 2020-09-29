
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * physmem_available(void)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  double dVar14;
  double extraout_XMM0_Qa;
  double dVar15;
  byte abStack136 [40];
  ulong uStack96;
  ulong uStack80;
  uint uStack32;
  long lStack16;
  
  bVar13 = 0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = func_0x00101d10(0x56);
  pbVar7 = (byte *)0x1e;
  dVar14 = (double)lVar3;
  lVar3 = func_0x00101d10(dVar14);
  if ((dVar14 < 0.00000000) || (dVar15 = (double)lVar3, dVar15 < 0.00000000)) {
    pbVar7 = abStack136;
    iVar2 = func_0x00101d30(dVar14);
    if (iVar2 != 0) {
      physmem_total();
      dVar14 = extraout_XMM0_Qa * _UNK_001078a8;
      goto code_r0x00103ea0;
    }
    if ((long)uStack96 < 0) {
      dVar14 = (double)(uStack96 >> 1 | (ulong)((uint)uStack96 & 1));
      dVar14 = dVar14 + dVar14;
    }
    else {
      dVar14 = (double)uStack96;
    }
    if ((long)uStack80 < 0) {
      dVar15 = (double)(uStack80 >> 1 | (ulong)((uint)uStack80 & 1));
      dVar15 = dVar15 + dVar15;
    }
    else {
      dVar15 = (double)uStack80;
    }
    dVar14 = dVar14 + dVar15;
    dVar15 = (double)(ulong)uStack32;
  }
  dVar14 = dVar14 * dVar15;
code_r0x00103ea0:
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)0x0;
  }
  func_0x00101ab0(dVar14);
  if (pbVar7 == (byte *)0x0) {
    pcVar9 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar2 = 1;
    func_0x00101d60(&UNK_001078b0,1,0x37,stderr);
    func_0x001019e0();
    pbVar7 = (byte *)locale_charset();
    if ((*pbVar7 & 0xdf) == 0x55) {
      if (((((pbVar7[1] & 0xdf) == 0x54) && ((pbVar7[2] & 0xdf) == 0x46)) && (pbVar7[3] == 0x2d)) &&
         ((pbVar7[4] == 0x38 && (pbVar7[5] == 0)))) {
        puVar4 = &UNK_001078f4;
        if (*pcVar9 != '`') {
          puVar4 = &UNK_001078f8;
        }
        return puVar4;
      }
    }
    else {
      if ((((*pbVar7 & 0xdf) == 0x47) && ((pbVar7[1] & 0xdf) == 0x42)) &&
         ((pbVar7[2] == 0x31 &&
          ((((pbVar7[3] == 0x38 && (pbVar7[4] == 0x30)) && (pbVar7[5] == 0x33)) &&
           ((pbVar7[6] == 0x30 && (pbVar7[7] == 0)))))))) {
        puVar4 = &UNK_001078fc;
        if (*pcVar9 != '`') {
          puVar4 = &UNK_00107900;
        }
        return puVar4;
      }
    }
    puVar4 = &UNK_00107903;
    if (iVar2 != 9) {
      puVar4 = &UNK_00107905;
    }
    return puVar4;
  }
  lVar3 = func_0x00101b00();
  if (lVar3 != 0) {
    pbVar1 = (byte *)(lVar3 + 1);
    pbVar6 = pbVar1 + -(long)pbVar7;
    bVar10 = pbVar6 < (byte *)0x6;
    bVar12 = pbVar6 == (byte *)0x6;
    if (6 < (long)pbVar6) {
      lVar5 = 7;
      pbVar6 = (byte *)(lVar3 + -6);
      pbVar8 = &UNK_001078e8;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar10 = *pbVar6 < *pbVar8;
        bVar12 = *pbVar6 == *pbVar8;
        pbVar6 = pbVar6 + (ulong)bVar13 * -2 + 1;
        pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
      } while (bVar12);
      bVar11 = false;
      bVar10 = (!bVar10 && !bVar12) == bVar10;
      if (bVar10) {
        lVar5 = 3;
        pbVar7 = pbVar1;
        pbVar6 = &UNK_001078f0;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          bVar11 = *pbVar7 < *pbVar6;
          bVar10 = *pbVar7 == *pbVar6;
          pbVar7 = pbVar7 + (ulong)bVar13 * -2 + 1;
          pbVar6 = pbVar6 + (ulong)bVar13 * -2 + 1;
        } while (bVar10);
        pbVar7 = pbVar1;
        if ((!bVar11 && !bVar10) == bVar11) {
          pbVar7 = (byte *)(lVar3 + 4);
          program_invocation_short_name = pbVar7;
        }
      }
    }
  }
  program_invocation_name = pbVar7;
  program_name = pbVar7;
  return (undefined *)lVar3;
}

