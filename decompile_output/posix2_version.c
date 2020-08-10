
undefined * posix2_version(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  char *pcStack24;
  long lStack16;
  
  bVar15 = 0;
  pbVar8 = &UNK_00107219;
  uVar6 = 0x31069;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar9 = (byte *)func_0x00101760();
  if (((pbVar9 != (byte *)0x0) && (*pbVar9 != 0)) &&
     (uVar1 = func_0x00101940(pbVar9,&pcStack24,10), pbVar8 = pbVar9, *pcStack24 == '\0')) {
    if ((long)uVar1 < -0x80000000) {
      uVar6 = 0x80000000;
    }
    else {
      uVar6 = 0x7fffffff;
      if ((long)uVar1 < 0x80000000) {
        uVar6 = uVar1;
      }
    }
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)(uVar6 & 0xffffffff);
  }
  func_0x00101830();
  if (pbVar8 == (byte *)0x0) {
    pcVar11 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar7 = 1;
    func_0x00101a60(&UNK_00107230,1,0x37,stderr);
    func_0x00101780();
    pbVar8 = (byte *)locale_charset();
    if ((*pbVar8 & 0xdf) == 0x55) {
      if ((((pbVar8[1] & 0xdf) == 0x54) && ((pbVar8[2] & 0xdf) == 0x46)) &&
         ((pbVar8[3] == 0x2d && ((pbVar8[4] == 0x38 && (pbVar8[5] == 0)))))) {
        puVar3 = &UNK_00107274;
        if (*pcVar11 != '`') {
          puVar3 = &UNK_00107278;
        }
        return puVar3;
      }
    }
    else {
      if ((((((*pbVar8 & 0xdf) == 0x47) && ((pbVar8[1] & 0xdf) == 0x42)) && (pbVar8[2] == 0x31)) &&
          ((pbVar8[3] == 0x38 && (pbVar8[4] == 0x30)))) &&
         ((pbVar8[5] == 0x33 && ((pbVar8[6] == 0x30 && (pbVar8[7] == 0)))))) {
        puVar3 = &UNK_0010727c;
        if (*pcVar11 != '`') {
          puVar3 = &UNK_00107280;
        }
        return puVar3;
      }
    }
    puVar3 = &UNK_00107283;
    if (iVar7 != 9) {
      puVar3 = &UNK_00107285;
    }
    return puVar3;
  }
  lVar2 = func_0x00101890();
  if (lVar2 != 0) {
    pbVar9 = (byte *)(lVar2 + 1);
    pbVar5 = pbVar9 + -(long)pbVar8;
    bVar12 = pbVar5 < (byte *)0x6;
    bVar14 = pbVar5 == (byte *)0x6;
    if (6 < (long)pbVar5) {
      lVar4 = 7;
      pbVar5 = (byte *)(lVar2 + -6);
      pbVar10 = &UNK_00107268;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar12 = *pbVar5 < *pbVar10;
        bVar14 = *pbVar5 == *pbVar10;
        pbVar5 = pbVar5 + (ulong)bVar15 * -2 + 1;
        pbVar10 = pbVar10 + (ulong)bVar15 * -2 + 1;
      } while (bVar14);
      bVar13 = false;
      bVar12 = (!bVar12 && !bVar14) == bVar12;
      if (bVar12) {
        lVar4 = 3;
        pbVar8 = pbVar9;
        pbVar5 = &UNK_00107270;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          bVar13 = *pbVar8 < *pbVar5;
          bVar12 = *pbVar8 == *pbVar5;
          pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
          pbVar5 = pbVar5 + (ulong)bVar15 * -2 + 1;
        } while (bVar12);
        pbVar8 = pbVar9;
        if ((!bVar13 && !bVar12) == bVar13) {
          pbVar8 = (byte *)(lVar2 + 4);
          program_invocation_short_name = pbVar8;
        }
      }
    }
  }
  program_invocation_name = pbVar8;
  program_name = pbVar8;
  return (undefined *)lVar2;
}

