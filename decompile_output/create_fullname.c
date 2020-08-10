
char * create_fullname(char *param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined8 extraout_RDX;
  byte **ppbVar17;
  char *pcVar18;
  undefined *puVar19;
  byte *pbVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  byte *pbStack1840;
  undefined *puStack1832;
  byte *apbStack1824 [5];
  undefined *puStack1784;
  undefined *puStack1776;
  undefined *puStack1768;
  undefined *puStack1760;
  undefined *puStack1752;
  undefined8 uStack1744;
  undefined8 uStack1736;
  undefined8 uStack1720;
  undefined8 *puStack1704;
  char *pcStack1696;
  char *pcStack1688;
  undefined *puStack1680;
  undefined *puStack1664;
  long lStack1648;
  undefined auStack1640 [24];
  uint uStack1616;
  long lStack1568;
  undefined4 uStack1496;
  undefined2 uStack1492;
  undefined8 uStack1448;
  long lStack1184;
  undefined8 *puStack1168;
  byte *pbStack1160;
  long lStack1152;
  char *pcStack1144;
  byte abStack1120 [1032];
  long lStack88;
  ulong uStack72;
  byte *pbStack64;
  long lStack56;
  char *pcStack48;
  
  bVar24 = 0;
  uStack72 = 0;
  pcStack48 = &UNK_001020e5;
  lStack1152 = func_0x001017f0();
  lStack1152 = lStack1152 + 1;
  pcVar13 = param_1;
  do {
    while( true ) {
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      if (cVar1 != '&') break;
      uStack72 = uStack72 + 1;
    }
  } while (cVar1 != '\0');
  if (uStack72 == 0) {
code_r0x0010214b:
    pcStack48 = &UNK_00102153;
    pcVar4 = (char *)xmalloc(lStack1152);
    cVar1 = *param_1;
    pcVar13 = pcVar4;
    while (cVar1 != '\0') {
      while (cVar1 == '&') {
        pcStack48 = &UNK_00102184;
        plVar5 = (long *)func_0x00101a80();
        uVar9 = (ulong)*param_2;
        pbVar10 = param_2;
        uVar3 = uVar9;
        pcVar18 = pcVar13;
        if ((*(byte *)(*plVar5 + 1 + uVar9 * 2) & 2) != 0) {
          pcStack48 = &UNK_0010219f;
          plVar5 = (long *)func_0x001016d0();
          uVar3 = (ulong)param_2[1];
          pbVar10 = param_2 + 1;
          pcVar18 = pcVar13 + 1;
          *pcVar13 = (char)*(undefined4 *)(*plVar5 + uVar9 * 4);
        }
        if ((char)uVar3 == '\0') goto code_r0x0010216e;
        do {
          pbVar10 = pbVar10 + 1;
          pcVar13 = pcVar18 + 1;
          *pcVar18 = (char)uVar3;
          uVar3 = (ulong)*pbVar10;
          pcVar18 = pcVar13;
        } while (*pbVar10 != 0);
        param_1 = param_1 + 1;
        cVar1 = *param_1;
        if (cVar1 == '\0') goto code_r0x001021df;
      }
      *pcVar13 = cVar1;
      pcVar18 = pcVar13 + 1;
code_r0x0010216e:
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      pcVar13 = pcVar18;
    }
code_r0x001021df:
    *pcVar13 = '\0';
    return pcVar4;
  }
  uVar21 = lStack1152 - uStack72;
  pcStack48 = &UNK_00102114;
  pbStack1160 = param_2;
  uVar3 = func_0x001017f0();
  uVar9 = uVar3 * uStack72;
  lStack1152 = uVar21 + uVar9;
  if ((CARRY8(uVar21,uVar9) == false) &&
     (-1 < (long)uVar9 && SUB168(ZEXT816(uVar3) * ZEXT816(uStack72) >> 0x40,0) == 0))
  goto code_r0x0010214b;
  pcStack48 = &UNK_001021fe;
  xalloc_die();
  lStack88 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack64 = param_2;
  lStack56 = lStack1152;
  pcStack48 = param_1;
  puStack1168 = (undefined8 *)func_0x001018c0();
  uVar6 = func_0x001017d0(0,&UNK_00105c64,5);
  func_0x001019a0(1,uVar6);
  func_0x001019a0(1,&UNK_00105c71,pbStack1160);
  uVar6 = func_0x001017d0(0,&UNK_00105c77,5);
  func_0x001019a0(1,uVar6);
  if (puStack1168 == (undefined8 *)0x0) {
    uVar6 = func_0x001017d0(0,&UNK_00105c86,5);
    pcStack1696 = (char *)0x1;
    func_0x001019a0(1,&UNK_00106300,uVar6);
  }
  else {
    uVar6 = puStack1168[3];
    puVar19 = (undefined *)func_0x00101830(uVar6,0x2c);
    if (puVar19 != (undefined *)0x0) {
      *puVar19 = 0;
      uVar6 = puStack1168[3];
    }
    pbStack1160 = (byte *)create_fullname(uVar6,*puStack1168);
    func_0x001019a0(1,&UNK_00106300,pbStack1160);
    func_0x001016f0(pbStack1160);
    puVar19 = *(undefined **)(stdout + 0x28);
    if (puVar19 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar19 + 1;
      *puVar19 = 10;
    }
    else {
      func_0x00101850(stdout,10);
    }
    cVar1 = include_project;
    if (include_home_and_shell != '\0') {
      uVar6 = func_0x001017d0(0,&UNK_00105c8b,5);
      func_0x001019a0(1,uVar6);
      func_0x001019a0(1,&UNK_00105c97,puStack1168[4]);
      uVar6 = func_0x001017d0(0,&UNK_00105c9d,5);
      func_0x001019a0(1,uVar6);
      func_0x001019a0(1,&UNK_00106300,puStack1168[5]);
      cVar1 = include_project;
      puVar19 = *(undefined **)(stdout + 0x28);
      if (puVar19 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar19 + 1;
        *puVar19 = 10;
      }
      else {
        func_0x00101850(stdout,10);
        cVar1 = include_project;
      }
    }
    if (cVar1 != '\0') {
      lVar8 = func_0x001017f0(puStack1168[4]);
      param_1 = (char *)xmalloc(lVar8 + 10);
      puVar11 = (undefined8 *)func_0x001017c0(param_1,puStack1168[4]);
      *puVar11 = 0x63656a6f72702e2f;
      *(undefined2 *)(puVar11 + 1) = 0x74;
      lStack1152 = func_0x001019f0(param_1,&UNK_001062fb);
      if (lStack1152 != 0) {
        uVar6 = func_0x001017d0(0,&UNK_00105ca5,5);
        func_0x001019a0(1,uVar6);
        while (lVar8 = func_0x00101770(abStack1120,1,0x400), lVar8 != 0) {
          func_0x00101970(abStack1120,1,lVar8,stdout);
        }
        rpl_fclose(lStack1152);
        pbStack1160 = abStack1120;
      }
      func_0x001016f0(param_1);
    }
    if (include_plan != '\0') {
      lVar8 = func_0x001017f0(puStack1168[4]);
      lStack1152 = xmalloc(lVar8 + 7);
      puVar14 = (undefined4 *)func_0x001017c0(lStack1152,puStack1168[4]);
      *puVar14 = 0x6c702e2f;
      *(undefined2 *)(puVar14 + 1) = 0x6e61;
      *(undefined *)((long)puVar14 + 6) = 0;
      puStack1168 = (undefined8 *)func_0x001019f0(lStack1152,&UNK_001062fb);
      if (puStack1168 != (undefined8 *)0x0) {
        uVar6 = func_0x001017d0(0,&UNK_00105caf,5);
        func_0x001019a0(1,uVar6);
        while (lVar8 = func_0x00101770(abStack1120,1,0x400), lVar8 != 0) {
          func_0x00101970(abStack1120,1,lVar8,stdout);
        }
        rpl_fclose(puStack1168);
        pbStack1160 = abStack1120;
      }
      func_0x001016f0(lStack1152);
    }
    pcStack1696 = stdout;
    puVar19 = *(undefined **)(stdout + 0x28);
    if (puVar19 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar19 + 1;
      *puVar19 = 10;
    }
    else {
      func_0x00101850(stdout,10);
    }
  }
  if (lStack88 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)0x0;
  }
  func_0x00101800();
  cVar1 = pcStack1696[8];
  lStack1184 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack1144 = param_1;
  if (cVar1 != '/') {
    uStack1492 = 0x2f;
    pcVar13 = pcStack1696 + 8;
    uStack1496 = 0x7665642f;
    puVar14 = (undefined4 *)(&uStack1492 + 1);
    goto joined_r0x001029d1;
  }
  pcVar13 = pcStack1696 + 8;
  puVar14 = &uStack1496;
  do {
    pcVar13 = pcVar13 + 1;
    puVar15 = (undefined4 *)((long)puVar14 + 1);
    *(char *)puVar14 = cVar1;
    puVar14 = puVar15;
    if (pcStack1696 + 0x28 <= pcVar13) break;
    cVar1 = *pcVar13;
joined_r0x001029d1:
  } while (cVar1 != '\0');
  pcStack1688 = pcStack1696 + 8;
  *(char *)puVar14 = '\0';
  puStack1680 = &UNK_00102679;
  iVar2 = func_0x00101920(1,&uStack1496,auStack1640);
  if (iVar2 == 0) {
    uVar3 = (ulong)((-(uint)((uStack1616 & 0x10) == 0) & 10) + 0x20);
  }
  else {
    uVar3 = 0x3f;
    lStack1568 = 0;
  }
  puStack1704 = (undefined8 *)(pcStack1696 + 0x2c);
  puStack1680 = &UNK_001026ba;
  func_0x001019a0(1,&UNK_00105cdb,0x20,puStack1704);
  if (include_fullname != '\0') {
    cVar1 = pcStack1696[0x2c];
    puVar11 = &uStack1448;
    while (puVar7 = puVar11, cVar1 != '\0') {
      puStack1704 = (undefined8 *)((long)puStack1704 + 1);
      puVar7 = (undefined8 *)((long)puVar11 + 1);
      *(char *)puVar11 = cVar1;
      if (pcStack1696 + 0x4c <= puStack1704) break;
      cVar1 = *(char *)puStack1704;
      puVar11 = puVar7;
    }
    *(char *)puVar7 = '\0';
    puStack1680 = &UNK_001026eb;
    puStack1704 = (undefined8 *)func_0x001018c0(&uStack1448);
    if (puStack1704 == (undefined8 *)0x0) {
      puStack1680 = &UNK_00102a13;
      uVar6 = func_0x001017d0(0,&UNK_00105cbc,5);
      puStack1680 = &UNK_00102a29;
      func_0x001019a0(1,&UNK_00105cc8,uVar6);
    }
    else {
      uVar6 = puStack1704[3];
      puStack1680 = &UNK_00102708;
      puVar19 = (undefined *)func_0x00101830(uVar6,0x2c);
      if (puVar19 != (undefined *)0x0) {
        *puVar19 = 0;
        uVar6 = puStack1704[3];
      }
      puStack1680 = &UNK_0010271f;
      puStack1704 = (undefined8 *)create_fullname(uVar6,*puStack1704);
      puStack1680 = &UNK_00102738;
      func_0x001019a0(1,&UNK_00105cce,puStack1704);
      puStack1680 = &UNK_00102740;
      func_0x001016f0(puStack1704);
    }
  }
  puStack1680 = &UNK_0010275e;
  func_0x001019a0(1,&UNK_00105cd8,uVar3,0x20,pcStack1688);
  if (include_idle != '\0') {
    if (lStack1568 == 0) {
      puStack1680 = &UNK_00102783;
      puVar16 = (undefined1 *)func_0x001017d0(0,&UNK_00105cf7,5);
    }
    else {
      if (now_7040 == 0) {
        puStack1680 = &UNK_00102a3c;
        func_0x00101900(&now_7040);
      }
      lStack1568 = now_7040 - lStack1568;
      puVar16 = &UNK_00105cb6;
      if (0x3b < lStack1568) {
        if (lStack1568 < 0x15180) {
          puStack1680 = &UNK_00102af1;
          func_0x00101aa0(buf_7041,1,0x16,&UNK_00105ce2,lStack1568 / 0xe10,
                          (ulong)(lStack1568 % 0xe10) / 0x3c & 0xffffffff);
          puVar16 = buf_7041;
        }
        else {
          puStack1680 = &UNK_0010298e;
          func_0x00101aa0(buf_7041,1,0x16,&UNK_00105cec,lStack1568 / 0x15180);
          puVar16 = buf_7041;
        }
      }
    }
    puStack1680 = &UNK_00102799;
    func_0x001019a0(1,&UNK_00105cf1,puVar16);
  }
  lStack1648 = (long)*(int *)(pcStack1696 + 0x154);
  puStack1680 = &UNK_001027af;
  lVar8 = func_0x00101700(&lStack1648);
  if (lVar8 == 0) {
    puStack1680 = &UNK_001029f1;
    puVar16 = (undefined1 *)imaxtostr(lStack1648,buf_7049);
  }
  else {
    puStack1680 = &UNK_001027d3;
    func_0x001019b0(buf_7049,0x21,time_format,lVar8);
    puVar16 = buf_7049;
  }
  puStack1680 = &UNK_001027ed;
  func_0x001019a0(1,&UNK_00106300,puVar16);
  if ((include_where == '\0') || (cVar1 = pcStack1696[0x4c], cVar1 == '\0')) goto code_r0x00102802;
  pcVar13 = pcStack1696 + 0x4c;
  pcStack1696 = pcStack1696 + 0x14c;
  puVar11 = &uStack1448;
  do {
    pcVar13 = pcVar13 + 1;
    puVar7 = (undefined8 *)((long)puVar11 + 1);
    *(char *)puVar11 = cVar1;
    if (pcStack1696 <= pcVar13) break;
    cVar1 = *pcVar13;
    puVar11 = puVar7;
  } while (cVar1 != '\0');
  *(char *)puVar7 = '\0';
  puStack1680 = &UNK_001028c7;
  puVar19 = (undefined *)func_0x00101830(&uStack1448,0x3a);
  if (puVar19 == (undefined *)0x0) {
    if ((char)uStack1448 == '\0') {
code_r0x00102a5e:
      puStack1704 = &uStack1448;
    }
    else {
      puStack1680 = &UNK_00102b28;
      puStack1704 = (undefined8 *)canon_host(&uStack1448);
      if (puStack1704 == (undefined8 *)0x0) goto code_r0x00102a5e;
    }
code_r0x00102a61:
    puStack1680 = &UNK_00102a77;
    func_0x001019a0(1,&UNK_00106300,puStack1704);
  }
  else {
    *puVar19 = 0;
    puVar12 = puVar19 + 1;
    if ((char)uStack1448 == '\0') {
code_r0x001028e5:
      puStack1704 = &uStack1448;
    }
    else {
      puStack1680 = &UNK_00102b0a;
      puStack1664 = puVar19 + 1;
      puStack1704 = (undefined8 *)canon_host(&uStack1448);
      puVar12 = puStack1664;
      if (puStack1704 == (undefined8 *)0x0) goto code_r0x001028e5;
    }
    if (puVar12 == (undefined *)0x0) goto code_r0x00102a61;
    puStack1680 = &UNK_00102907;
    func_0x001019a0(1,&UNK_00105cfd,puStack1704);
  }
  if (puStack1704 != &uStack1448) {
    puStack1680 = &UNK_00102918;
    func_0x001016f0(puStack1704);
  }
code_r0x00102802:
  pcVar13 = stdout;
  puVar19 = *(undefined **)(stdout + 0x28);
  if (puVar19 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar19 + 1;
    *puVar19 = 10;
  }
  else {
    puStack1680 = &UNK_00102a8a;
    func_0x00101850(stdout,10);
  }
  if (lStack1184 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)0x0;
  }
  puStack1680 = &UNK_00102b3e;
  func_0x00101800();
  puVar19 = program_name;
  uVar6 = 5;
  uStack1720 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack1680 = (undefined *)uVar3;
  if ((int)pcVar13 == 0) goto code_r0x00102b9d;
  uVar6 = func_0x001017d0(0,&UNK_00105e70,5);
  func_0x00101a30(stderr,1,uVar6,puVar19);
  do {
    func_0x00101a10((ulong)pcVar13 & 0xffffffff);
    uVar6 = extraout_RDX;
code_r0x00102b9d:
    uVar6 = func_0x001017d0(0,&UNK_00105e98,uVar6);
    func_0x001019a0(1,uVar6,puVar19);
    pcVar4 = stdout;
    uVar6 = func_0x001017d0(0,&UNK_00105ec0,5);
    func_0x001018a0(uVar6,pcVar4);
    pcVar4 = stdout;
    uVar6 = func_0x001017d0(0,&UNK_00106008,5);
    func_0x001018a0(uVar6,pcVar4);
    pcVar4 = stdout;
    uVar6 = func_0x001017d0(0,&UNK_00106140,5);
    func_0x001018a0(uVar6,pcVar4);
    pcVar4 = stdout;
    uVar6 = func_0x001017d0(0,&UNK_00106170,5);
    func_0x001018a0(uVar6,pcVar4);
    uVar6 = func_0x001017d0(0,&UNK_001061a8,5);
    func_0x001019a0(1,uVar6,&UNK_00105d0a);
    uStack1744 = 0;
    uStack1736 = 0;
    pbStack1840 = &UNK_00105d18;
    apbStack1824[4] = &UNK_00105d59;
    puStack1832 = &UNK_00105d1a;
    puStack1776 = &UNK_00105d63;
    apbStack1824[0] = &UNK_00105d92;
    puStack1760 = &UNK_00105d6d;
    apbStack1824[1] = &UNK_00105d2a;
    apbStack1824[2] = &UNK_00105d40;
    apbStack1824[3] = &UNK_00105d4a;
    puStack1784 = &UNK_00105d4a;
    puStack1768 = &UNK_00105d4a;
    puStack1752 = &UNK_00105d4a;
    ppbVar17 = &pbStack1840;
    do {
      ppbVar17 = ppbVar17;
      ppbVar17 = ppbVar17 + 2;
      pbVar10 = *ppbVar17;
      bVar22 = false;
      bVar23 = pbVar10 == (byte *)0x0;
      if (bVar23) break;
      lVar8 = 6;
      pbVar20 = &UNK_00105d04;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar22 = *pbVar20 < *pbVar10;
        bVar23 = *pbVar20 == *pbVar10;
        pbVar20 = pbVar20 + (ulong)bVar24 * -2 + 1;
        pbVar10 = pbVar10 + (ulong)bVar24 * -2 + 1;
      } while (bVar23);
    } while ((!bVar22 && !bVar23) != bVar22);
    pbVar10 = ppbVar17[3];
    if (pbVar10 == (byte *)0x0) {
      uVar6 = func_0x001017d0(0,&UNK_00105d77,5);
      func_0x001019a0(1,uVar6,&UNK_00105d8e,&UNK_00106200);
      lVar8 = func_0x00101990(5,0);
      if ((lVar8 != 0) && (iVar2 = func_0x00101740(lVar8,&UNK_00105d9c,3), iVar2 != 0)) {
        pbVar10 = &UNK_00105d04;
        goto code_r0x00102ea0;
      }
      pbVar10 = &UNK_00105d04;
      puVar19 = &UNK_00105d34;
      uVar6 = func_0x001017d0(0,&UNK_00105da0,5);
      func_0x001019a0(1,uVar6,&UNK_00106200,&UNK_00105d04);
    }
    else {
      uVar6 = func_0x001017d0(0,&UNK_00105d77,5);
      func_0x001019a0(1,uVar6,&UNK_00105d8e,&UNK_00106200);
      lVar8 = func_0x00101990(5,0);
      if ((lVar8 != 0) && (iVar2 = func_0x00101740(lVar8,&UNK_00105d9c,3), iVar2 != 0)) {
code_r0x00102ea0:
        pcVar4 = stdout;
        uVar6 = func_0x001017d0(0,&UNK_00106228,5);
        func_0x001018a0(uVar6,pcVar4);
      }
      uVar6 = func_0x001017d0(0,&UNK_00105da0,5);
      func_0x001019a0(1,uVar6,&UNK_00106200,&UNK_00105d04);
      puVar19 = &UNK_00106881;
      if (pbVar10 == &UNK_00105d04) {
        puVar19 = &UNK_00105d34;
      }
    }
    uVar6 = func_0x001017d0(0,&UNK_00106270,5);
    func_0x001019a0(1,uVar6,pbVar10,puVar19);
  } while( true );
}

