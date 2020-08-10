
undefined * nstrftime(byte *param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = __strftime_internal();
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar1;
  }
  func_0x00103420();
  if (param_1 == (byte *)0x0) {
    pcVar9 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar7 = 1;
    func_0x001037f0(&UNK_0011a2a8,1,0x37,stderr);
    func_0x00103290();
    pbVar3 = (byte *)locale_charset();
    if ((*pbVar3 & 0xdf) == 0x55) {
      if (((((pbVar3[1] & 0xdf) == 0x54) && ((pbVar3[2] & 0xdf) == 0x46)) && (pbVar3[3] == 0x2d)) &&
         ((pbVar3[4] == 0x38 && (pbVar3[5] == 0)))) {
        puVar4 = &UNK_0011a2ec;
        if (*pcVar9 != '`') {
          puVar4 = &UNK_0011a2f0;
        }
        return puVar4;
      }
    }
    else {
      if ((((*pbVar3 & 0xdf) == 0x47) && ((pbVar3[1] & 0xdf) == 0x42)) &&
         ((pbVar3[2] == 0x31 &&
          ((((pbVar3[3] == 0x38 && (pbVar3[4] == 0x30)) && (pbVar3[5] == 0x33)) &&
           ((pbVar3[6] == 0x30 && (pbVar3[7] == 0)))))))) {
        puVar4 = &UNK_0011a2f4;
        if (*pcVar9 != '`') {
          puVar4 = &UNK_0011a2f8;
        }
        return puVar4;
      }
    }
    puVar4 = &UNK_0011a2fb;
    if (iVar7 != 9) {
      puVar4 = &UNK_0011ac72;
    }
    return puVar4;
  }
  lVar2 = func_0x001034a0();
  if (lVar2 != 0) {
    pbVar3 = (byte *)(lVar2 + 1);
    pbVar6 = pbVar3 + -(long)param_1;
    bVar10 = pbVar6 < (byte *)0x6;
    bVar12 = pbVar6 == (byte *)0x6;
    if (6 < (long)pbVar6) {
      lVar5 = 7;
      pbVar6 = (byte *)(lVar2 + -6);
      pbVar8 = &UNK_0011a2e0;
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
        pbVar6 = pbVar3;
        pbVar8 = &UNK_0011a2e8;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          bVar11 = *pbVar6 < *pbVar8;
          bVar10 = *pbVar6 == *pbVar8;
          pbVar6 = pbVar6 + (ulong)bVar13 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
        } while (bVar10);
        param_1 = pbVar3;
        if ((!bVar11 && !bVar10) == bVar11) {
          param_1 = (byte *)(lVar2 + 4);
          program_invocation_short_name = param_1;
        }
      }
    }
  }
  program_invocation_name = param_1;
  program_name = param_1;
  return (undefined *)lVar2;
}

