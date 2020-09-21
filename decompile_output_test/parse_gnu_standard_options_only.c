
undefined *
parse_gnu_standard_options_only
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,byte *param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          char param_14,code *param_15)

{
  undefined4 uVar1;
  char in_AL;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  undefined4 uStack248;
  undefined4 uStack244;
  undefined *puStack240;
  undefined *puStack232;
  long lStack224;
  undefined auStack216 [48];
  undefined4 uStack168;
  undefined4 uStack152;
  undefined4 uStack136;
  undefined4 uStack120;
  undefined4 uStack104;
  undefined4 uStack88;
  undefined4 uStack72;
  undefined4 uStack56;
  
  uVar1 = opterr;
  bVar13 = 0;
  if (in_AL != '\0') {
    uStack168 = param_1;
    uStack152 = param_2;
    uStack136 = param_3;
    uStack120 = param_4;
    uStack104 = param_5;
    uStack88 = param_6;
    uStack72 = param_7;
    uStack56 = param_8;
  }
  lStack224 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = &UNK_00105bba;
  if (param_14 == '\0') {
    puVar6 = &UNK_0010562c;
  }
  opterr = 1;
  iVar2 = func_0x001013c0(param_9,param_10,puVar6,long_options,0);
  if (iVar2 != -1) {
    if (iVar2 == 0x68) {
      param_9 = (byte *)0x0;
      (*param_15)();
    }
    else {
      if (iVar2 == 0x76) {
        puStack240 = &stack0x00000010;
        puStack232 = auStack216;
        uStack248 = 0x30;
        uStack244 = 0x30;
        version_etc_va(stdout,param_11,param_12,param_13,&uStack248);
        func_0x00101530();
      }
      param_9 = (byte *)(ulong)exit_failure;
      (*param_15)();
    }
  }
  if (lStack224 == *(long *)(in_FS_OFFSET + 0x28)) {
    opterr = uVar1;
    return (undefined *)0x0;
  }
  opterr = uVar1;
  func_0x001013b0();
  if (param_9 == (byte *)0x0) {
    pcVar9 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar2 = 1;
    func_0x00101540(&UNK_00105640,1,0x37,stderr);
    func_0x001012f0();
    pbVar4 = (byte *)locale_charset();
    if ((*pbVar4 & 0xdf) == 0x55) {
      if (((((pbVar4[1] & 0xdf) == 0x54) && ((pbVar4[2] & 0xdf) == 0x46)) && (pbVar4[3] == 0x2d)) &&
         ((pbVar4[4] == 0x38 && (pbVar4[5] == 0)))) {
        puVar6 = &UNK_00105684;
        if (*pcVar9 != '`') {
          puVar6 = &UNK_00105688;
        }
        return puVar6;
      }
    }
    else {
      if ((((*pbVar4 & 0xdf) == 0x47) && ((pbVar4[1] & 0xdf) == 0x42)) &&
         ((pbVar4[2] == 0x31 &&
          ((((pbVar4[3] == 0x38 && (pbVar4[4] == 0x30)) && (pbVar4[5] == 0x33)) &&
           ((pbVar4[6] == 0x30 && (pbVar4[7] == 0)))))))) {
        puVar6 = &UNK_0010568c;
        if (*pcVar9 != '`') {
          puVar6 = &UNK_00105690;
        }
        return puVar6;
      }
    }
    puVar6 = &UNK_00105693;
    if (iVar2 != 9) {
      puVar6 = &UNK_00105695;
    }
    return puVar6;
  }
  lVar3 = func_0x001013e0();
  if (lVar3 != 0) {
    pbVar4 = (byte *)(lVar3 + 1);
    pbVar7 = pbVar4 + -(long)param_9;
    bVar10 = pbVar7 < (byte *)0x6;
    bVar12 = pbVar7 == (byte *)0x6;
    if (6 < (long)pbVar7) {
      lVar5 = 7;
      pbVar7 = (byte *)(lVar3 + -6);
      pbVar8 = &UNK_00105678;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar10 = *pbVar7 < *pbVar8;
        bVar12 = *pbVar7 == *pbVar8;
        pbVar7 = pbVar7 + (ulong)bVar13 * -2 + 1;
        pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
      } while (bVar12);
      bVar11 = false;
      bVar10 = (!bVar10 && !bVar12) == bVar10;
      if (bVar10) {
        lVar5 = 3;
        pbVar7 = pbVar4;
        pbVar8 = &UNK_00105680;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          bVar11 = *pbVar7 < *pbVar8;
          bVar10 = *pbVar7 == *pbVar8;
          pbVar7 = pbVar7 + (ulong)bVar13 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
        } while (bVar10);
        param_9 = pbVar4;
        if ((!bVar11 && !bVar10) == bVar11) {
          param_9 = (byte *)(lVar3 + 4);
          program_invocation_short_name = param_9;
        }
      }
    }
  }
  program_invocation_name = param_9;
  program_name = param_9;
  return (undefined *)lVar3;
}

