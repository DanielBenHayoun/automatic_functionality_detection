
undefined *
parse_long_options(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  byte *param_9,undefined8 param_10,undefined8 param_11,undefined4 *param_12,
                  undefined4 *param_13,code *param_14)

{
  uint uVar1;
  char in_AL;
  char cVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 extraout_RDX;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined4 *puVar12;
  code *pcVar13;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 uStack512;
  undefined4 uStack508;
  undefined4 *puStack504;
  undefined *puStack496;
  long lStack488;
  undefined auStack480 [48];
  undefined4 uStack432;
  undefined4 uStack428;
  undefined4 uStack416;
  undefined4 uStack400;
  undefined4 uStack384;
  undefined4 uStack368;
  undefined4 uStack352;
  undefined4 uStack336;
  undefined4 uStack320;
  ulong uStack304;
  undefined8 uStack296;
  undefined4 *puStack288;
  undefined4 *puStack280;
  code *pcStack256;
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
  bVar17 = 0;
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
  uStack304 = (ulong)opterr;
  opterr = 0;
  puVar7 = (undefined1 *)param_12;
  puVar12 = param_13;
  if ((int)param_9 == 2) {
    puVar7 = long_options;
    puVar12 = (undefined4 *)0x0;
    pcStack256 = param_14;
    iVar3 = func_0x001012c0(param_9,param_10,&UNK_00104b43,long_options,0);
    if (iVar3 != -1) {
      pcVar13 = pcStack256;
      if (iVar3 != 0x68) {
        if (iVar3 != 0x76) goto code_r0x00101cd9;
        puStack240 = &stack0x00000008;
        puVar12 = &uStack248;
        puStack232 = auStack216;
        uStack248 = 0x30;
        uStack244 = 0x30;
        puVar7 = (undefined1 *)param_13;
        version_etc_va(stdout,param_11,param_12,param_13,puVar12);
        func_0x00101400();
      }
      param_9 = (byte *)0x0;
      (*pcVar13)();
    }
  }
code_r0x00101cd9:
  optind = 0;
  if (lStack224 == *(long *)(in_FS_OFFSET + 0x28)) {
    optind = 0;
    opterr = uVar1;
    return (undefined *)0x0;
  }
  opterr = uVar1;
  cVar2 = func_0x001012b0();
  pcVar13 = pcStack256;
  uVar1 = opterr;
  if (cVar2 != '\0') {
    uStack432 = extraout_XMM0_Da;
    uStack428 = extraout_XMM0_Db;
    uStack416 = param_2;
    uStack400 = param_3;
    uStack384 = param_4;
    uStack368 = param_5;
    uStack352 = param_6;
    uStack336 = param_7;
    uStack320 = param_8;
  }
  lStack488 = *(long *)(in_FS_OFFSET + 0x28);
  opterr = 1;
  uStack296 = param_11;
  puStack288 = param_12;
  puStack280 = param_13;
  iVar3 = func_0x001012c0();
  if (iVar3 != -1) {
    if (iVar3 == 0x68) {
      param_9 = (byte *)0x0;
      (*pcVar13)();
    }
    else {
      if (iVar3 == 0x76) {
        puStack504 = &uStack248;
        puStack496 = auStack480;
        uStack512 = 0x30;
        uStack508 = 0x30;
        version_etc_va(stdout,extraout_RDX,puVar7,puVar12,&uStack512);
        func_0x00101400();
      }
      param_9 = (byte *)(ulong)exit_failure;
      (*pcVar13)();
    }
  }
  if (lStack488 == *(long *)(in_FS_OFFSET + 0x28)) {
    opterr = uVar1;
    return (undefined *)0x0;
  }
  opterr = uVar1;
  func_0x001012b0();
  if (param_9 == (byte *)0x0) {
    pcVar11 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar3 = 1;
    func_0x00101410(&UNK_00104b58,1,0x37,stderr);
    func_0x001011f0();
    pbVar5 = (byte *)locale_charset();
    if ((*pbVar5 & 0xdf) == 0x55) {
      if (((((pbVar5[1] & 0xdf) == 0x54) && ((pbVar5[2] & 0xdf) == 0x46)) && (pbVar5[3] == 0x2d)) &&
         ((pbVar5[4] == 0x38 && (pbVar5[5] == 0)))) {
        puVar6 = &UNK_00104b9c;
        if (*pcVar11 != '`') {
          puVar6 = &UNK_00104ba0;
        }
        return puVar6;
      }
    }
    else {
      if ((((*pbVar5 & 0xdf) == 0x47) && ((pbVar5[1] & 0xdf) == 0x42)) &&
         ((pbVar5[2] == 0x31 &&
          ((((pbVar5[3] == 0x38 && (pbVar5[4] == 0x30)) && (pbVar5[5] == 0x33)) &&
           ((pbVar5[6] == 0x30 && (pbVar5[7] == 0)))))))) {
        puVar6 = &UNK_00104ba4;
        if (*pcVar11 != '`') {
          puVar6 = &UNK_00104ba8;
        }
        return puVar6;
      }
    }
    puVar6 = &UNK_00104bab;
    if (iVar3 != 9) {
      puVar6 = &UNK_00104bad;
    }
    return puVar6;
  }
  lVar4 = func_0x001012e0();
  if (lVar4 != 0) {
    pbVar5 = (byte *)(lVar4 + 1);
    pbVar9 = pbVar5 + -(long)param_9;
    bVar14 = pbVar9 < (byte *)0x6;
    bVar16 = pbVar9 == (byte *)0x6;
    if (6 < (long)pbVar9) {
      lVar8 = 7;
      pbVar9 = (byte *)(lVar4 + -6);
      pbVar10 = &UNK_00104b90;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar14 = *pbVar9 < *pbVar10;
        bVar16 = *pbVar9 == *pbVar10;
        pbVar9 = pbVar9 + (ulong)bVar17 * -2 + 1;
        pbVar10 = pbVar10 + (ulong)bVar17 * -2 + 1;
      } while (bVar16);
      bVar15 = false;
      bVar14 = (!bVar14 && !bVar16) == bVar14;
      if (bVar14) {
        lVar8 = 3;
        pbVar9 = pbVar5;
        pbVar10 = &UNK_00104b98;
        do {
          if (lVar8 == 0) break;
          lVar8 = lVar8 + -1;
          bVar15 = *pbVar9 < *pbVar10;
          bVar14 = *pbVar9 == *pbVar10;
          pbVar9 = pbVar9 + (ulong)bVar17 * -2 + 1;
          pbVar10 = pbVar10 + (ulong)bVar17 * -2 + 1;
        } while (bVar14);
        param_9 = pbVar5;
        if ((!bVar15 && !bVar14) == bVar15) {
          param_9 = (byte *)(lVar4 + 4);
          program_invocation_short_name = param_9;
        }
      }
    }
  }
  program_invocation_name = param_9;
  program_name = param_9;
  return (undefined *)lVar4;
}

