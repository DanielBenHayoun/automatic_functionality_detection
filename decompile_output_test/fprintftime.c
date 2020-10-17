
undefined *
fprintftime(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,byte *param_9
           )

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  undefined4 *puVar13;
  code *pcVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uStack536;
  undefined4 uStack532;
  undefined4 *puStack528;
  undefined *puStack520;
  long lStack512;
  undefined auStack504 [48];
  undefined4 uStack456;
  undefined4 uStack452;
  undefined4 uStack440;
  undefined4 uStack424;
  undefined4 uStack408;
  undefined4 uStack392;
  undefined4 uStack376;
  undefined4 uStack360;
  undefined4 uStack344;
  ulong uStack328;
  undefined8 uStack320;
  undefined4 *puStack312;
  undefined4 *puStack304;
  code *pcStack280;
  undefined4 uStack272;
  undefined4 uStack268;
  long *plStack264;
  undefined *puStack256;
  long lStack248;
  undefined auStack240 [48];
  undefined4 uStack192;
  undefined4 uStack188;
  undefined4 uStack176;
  undefined4 uStack160;
  undefined4 uStack144;
  undefined4 uStack128;
  undefined4 uStack112;
  undefined4 uStack96;
  undefined4 uStack80;
  undefined *puStack64;
  undefined uStack17;
  long alStack16 [2];
  
  bVar18 = 0;
  pcVar14 = (code *)0xffffffff;
  alStack16[0] = *(long *)(in_FS_OFFSET + 0x28);
  uStack17 = 0;
  puStack304 = (undefined4 *)0x0;
  puStack312 = (undefined4 *)0x0;
  puStack64 = &UNK_00104552;
  uVar4 = __strftime_internal();
  if (alStack16[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar4;
  }
  cVar2 = func_0x00101980();
  uVar1 = opterr;
  if (cVar2 != '\0') {
    uStack192 = extraout_XMM0_Da;
    uStack188 = extraout_XMM0_Db;
    uStack176 = param_2;
    uStack160 = param_3;
    uStack144 = param_4;
    uStack128 = param_5;
    uStack112 = param_6;
    uStack96 = param_7;
    uStack80 = param_8;
  }
  lStack248 = *(long *)(in_FS_OFFSET + 0x28);
  uStack328 = (ulong)opterr;
  opterr = 0;
  puVar8 = (undefined1 *)puStack312;
  puVar13 = puStack304;
  if ((int)param_9 == 2) {
    puVar8 = long_options;
    puVar13 = (undefined4 *)0x0;
    pcStack280 = pcVar14;
    iVar3 = func_0x00101990();
    if (iVar3 != -1) {
      pcVar14 = pcStack280;
      if (iVar3 != 0x68) {
        if (iVar3 != 0x76) goto code_r0x001045e9;
        plStack264 = alStack16;
        puVar13 = &uStack272;
        puStack256 = auStack240;
        uStack272 = 0x30;
        uStack268 = 0x30;
        puVar8 = (undefined1 *)puStack304;
        version_etc_va(stdout,extraout_RDX,puStack312,puStack304,puVar13);
        func_0x00101be0();
      }
      param_9 = (byte *)0x0;
      (*pcVar14)();
    }
  }
code_r0x001045e9:
  optind = 0;
  if (lStack248 == *(long *)(in_FS_OFFSET + 0x28)) {
    optind = 0;
    opterr = uVar1;
    return (undefined *)0x0;
  }
  opterr = uVar1;
  cVar2 = func_0x00101980();
  pcVar14 = pcStack280;
  uVar1 = opterr;
  if (cVar2 != '\0') {
    uStack456 = extraout_XMM0_Da_00;
    uStack452 = extraout_XMM0_Db_00;
    uStack440 = param_2;
    uStack424 = param_3;
    uStack408 = param_4;
    uStack392 = param_5;
    uStack376 = param_6;
    uStack360 = param_7;
    uStack344 = param_8;
  }
  lStack512 = *(long *)(in_FS_OFFSET + 0x28);
  opterr = 1;
  uStack320 = extraout_RDX;
  iVar3 = func_0x00101990();
  if (iVar3 != -1) {
    if (iVar3 == 0x68) {
      param_9 = (byte *)0x0;
      (*pcVar14)();
    }
    else {
      if (iVar3 == 0x76) {
        puStack528 = &uStack272;
        puStack520 = auStack504;
        uStack536 = 0x30;
        uStack532 = 0x30;
        version_etc_va(stdout,extraout_RDX_00,puVar8,puVar13,&uStack536);
        func_0x00101be0();
      }
      param_9 = (byte *)(ulong)exit_failure;
      (*pcVar14)();
    }
  }
  if (lStack512 == *(long *)(in_FS_OFFSET + 0x28)) {
    opterr = uVar1;
    return (undefined *)0x0;
  }
  opterr = uVar1;
  func_0x00101980();
  if (param_9 == (byte *)0x0) {
    pcVar12 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar3 = 1;
    func_0x00101bf0(&UNK_00107f90,1,0x37,stderr);
    func_0x00101870();
    pbVar6 = (byte *)locale_charset();
    if ((*pbVar6 & 0xdf) == 0x55) {
      if (((((pbVar6[1] & 0xdf) == 0x54) && ((pbVar6[2] & 0xdf) == 0x46)) && (pbVar6[3] == 0x2d)) &&
         ((pbVar6[4] == 0x38 && (pbVar6[5] == 0)))) {
        puVar7 = &UNK_00107fd4;
        if (*pcVar12 != '`') {
          puVar7 = &UNK_00107fd8;
        }
        return puVar7;
      }
    }
    else {
      if ((((*pbVar6 & 0xdf) == 0x47) && ((pbVar6[1] & 0xdf) == 0x42)) &&
         ((pbVar6[2] == 0x31 &&
          ((((pbVar6[3] == 0x38 && (pbVar6[4] == 0x30)) && (pbVar6[5] == 0x33)) &&
           ((pbVar6[6] == 0x30 && (pbVar6[7] == 0)))))))) {
        puVar7 = &UNK_00107fdc;
        if (*pcVar12 != '`') {
          puVar7 = &UNK_00107fe0;
        }
        return puVar7;
      }
    }
    puVar7 = &UNK_00107fe3;
    if (iVar3 != 9) {
      puVar7 = &UNK_00107fe5;
    }
    return puVar7;
  }
  lVar5 = func_0x001019d0();
  if (lVar5 != 0) {
    pbVar6 = (byte *)(lVar5 + 1);
    pbVar10 = pbVar6 + -(long)param_9;
    bVar15 = pbVar10 < (byte *)0x6;
    bVar17 = pbVar10 == (byte *)0x6;
    if (6 < (long)pbVar10) {
      lVar9 = 7;
      pbVar10 = (byte *)(lVar5 + -6);
      pbVar11 = &UNK_00107fc8;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar15 = *pbVar10 < *pbVar11;
        bVar17 = *pbVar10 == *pbVar11;
        pbVar10 = pbVar10 + (ulong)bVar18 * -2 + 1;
        pbVar11 = pbVar11 + (ulong)bVar18 * -2 + 1;
      } while (bVar17);
      bVar16 = false;
      bVar15 = (!bVar15 && !bVar17) == bVar15;
      if (bVar15) {
        lVar9 = 3;
        pbVar10 = pbVar6;
        pbVar11 = &UNK_00107fd0;
        do {
          if (lVar9 == 0) break;
          lVar9 = lVar9 + -1;
          bVar16 = *pbVar10 < *pbVar11;
          bVar15 = *pbVar10 == *pbVar11;
          pbVar10 = pbVar10 + (ulong)bVar18 * -2 + 1;
          pbVar11 = pbVar11 + (ulong)bVar18 * -2 + 1;
        } while (bVar15);
        param_9 = pbVar6;
        if ((!bVar16 && !bVar15) == bVar16) {
          param_9 = (byte *)(lVar5 + 4);
          program_invocation_short_name = param_9;
        }
      }
    }
  }
  program_invocation_name = param_9;
  program_name = param_9;
  return (undefined *)lVar5;
}

