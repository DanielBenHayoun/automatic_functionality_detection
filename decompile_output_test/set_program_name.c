
undefined * set_program_name(byte *param_1)

{
  long lVar1;
  byte *pbVar2;
  undefined *puVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  
  bVar12 = 0;
  if (param_1 == (byte *)0x0) {
    pcVar8 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar6 = 1;
    func_0x00101410(&UNK_00104b58,1,0x37,stderr);
    func_0x001011f0();
    pbVar2 = (byte *)locale_charset();
    if ((*pbVar2 & 0xdf) == 0x55) {
      if (((((pbVar2[1] & 0xdf) == 0x54) && ((pbVar2[2] & 0xdf) == 0x46)) && (pbVar2[3] == 0x2d)) &&
         ((pbVar2[4] == 0x38 && (pbVar2[5] == 0)))) {
        puVar3 = &UNK_00104b9c;
        if (*pcVar8 != '`') {
          puVar3 = &UNK_00104ba0;
        }
        return puVar3;
      }
    }
    else {
      if ((((*pbVar2 & 0xdf) == 0x47) && ((pbVar2[1] & 0xdf) == 0x42)) &&
         ((pbVar2[2] == 0x31 &&
          ((((pbVar2[3] == 0x38 && (pbVar2[4] == 0x30)) && (pbVar2[5] == 0x33)) &&
           ((pbVar2[6] == 0x30 && (pbVar2[7] == 0)))))))) {
        puVar3 = &UNK_00104ba4;
        if (*pcVar8 != '`') {
          puVar3 = &UNK_00104ba8;
        }
        return puVar3;
      }
    }
    puVar3 = &UNK_00104bab;
    if (iVar6 != 9) {
      puVar3 = &UNK_00104bad;
    }
    return puVar3;
  }
  lVar1 = func_0x001012e0(param_1,0x2f);
  if (lVar1 != 0) {
    pbVar2 = (byte *)(lVar1 + 1);
    pbVar5 = pbVar2 + -(long)param_1;
    bVar9 = pbVar5 < (byte *)0x6;
    bVar11 = pbVar5 == (byte *)0x6;
    if (6 < (long)pbVar5) {
      lVar4 = 7;
      pbVar5 = (byte *)(lVar1 + -6);
      pbVar7 = &UNK_00104b90;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar9 = *pbVar5 < *pbVar7;
        bVar11 = *pbVar5 == *pbVar7;
        pbVar5 = pbVar5 + (ulong)bVar12 * -2 + 1;
        pbVar7 = pbVar7 + (ulong)bVar12 * -2 + 1;
      } while (bVar11);
      bVar10 = false;
      bVar9 = (!bVar9 && !bVar11) == bVar9;
      if (bVar9) {
        lVar4 = 3;
        pbVar5 = pbVar2;
        pbVar7 = &UNK_00104b98;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          bVar10 = *pbVar5 < *pbVar7;
          bVar9 = *pbVar5 == *pbVar7;
          pbVar5 = pbVar5 + (ulong)bVar12 * -2 + 1;
          pbVar7 = pbVar7 + (ulong)bVar12 * -2 + 1;
        } while (bVar9);
        param_1 = pbVar2;
        if ((!bVar10 && !bVar9) == bVar10) {
          param_1 = (byte *)(lVar1 + 4);
          program_invocation_short_name = param_1;
        }
      }
    }
  }
  program_invocation_name = param_1;
  program_name = param_1;
  return (undefined *)lVar1;
}

