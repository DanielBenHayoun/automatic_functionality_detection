
void print_long_entry(undefined *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined8 extraout_RDX;
  byte **ppbVar13;
  undefined *puVar14;
  byte *pbVar15;
  long unaff_R12;
  byte *pbVar16;
  undefined8 unaff_R13;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte *pbStack1800;
  undefined *puStack1792;
  byte *apbStack1784 [5];
  undefined *puStack1744;
  undefined *puStack1736;
  undefined *puStack1728;
  undefined *puStack1720;
  undefined *puStack1712;
  undefined8 uStack1704;
  undefined8 uStack1696;
  undefined8 uStack1680;
  undefined8 *puStack1664;
  char *pcStack1656;
  char *pcStack1648;
  undefined *puStack1640;
  undefined *puStack1624;
  long lStack1608;
  undefined auStack1600 [24];
  uint uStack1576;
  long lStack1528;
  undefined4 uStack1456;
  undefined2 uStack1452;
  undefined8 uStack1408;
  long lStack1144;
  undefined8 *puStack1128;
  undefined *puStack1120;
  long lStack1112;
  undefined8 uStack1104;
  undefined auStack1080 [1032];
  long lStack48;
  
  bVar20 = 0;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  puStack1128 = (undefined8 *)func_0x001018c0();
  uVar3 = func_0x001017d0(0,&UNK_00105c64,5);
  func_0x001019a0(1,uVar3);
  func_0x001019a0(1,&UNK_00105c71,param_1);
  uVar3 = func_0x001017d0(0,&UNK_00105c77,5);
  func_0x001019a0(1,uVar3);
  if (puStack1128 == (undefined8 *)0x0) {
    uVar3 = func_0x001017d0(0,&UNK_00105c86,5);
    pcStack1656 = (char *)0x1;
    func_0x001019a0(1,&UNK_00106300,uVar3);
  }
  else {
    uVar3 = puStack1128[3];
    puVar14 = (undefined *)func_0x00101830(uVar3,0x2c);
    if (puVar14 != (undefined *)0x0) {
      *puVar14 = 0;
      uVar3 = puStack1128[3];
    }
    param_1 = (undefined *)create_fullname(uVar3,*puStack1128);
    func_0x001019a0(1,&UNK_00106300,param_1);
    func_0x001016f0(param_1);
    puVar14 = *(undefined **)(stdout + 0x28);
    if (puVar14 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar14 + 1;
      *puVar14 = 10;
    }
    else {
      func_0x00101850(stdout,10);
    }
    cVar7 = include_project;
    if (include_home_and_shell != '\0') {
      uVar3 = func_0x001017d0(0,&UNK_00105c8b,5);
      func_0x001019a0(1,uVar3);
      func_0x001019a0(1,&UNK_00105c97,puStack1128[4]);
      uVar3 = func_0x001017d0(0,&UNK_00105c9d,5);
      func_0x001019a0(1,uVar3);
      func_0x001019a0(1,&UNK_00106300,puStack1128[5]);
      cVar7 = include_project;
      puVar14 = *(undefined **)(stdout + 0x28);
      if (puVar14 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar14 + 1;
        *puVar14 = 10;
      }
      else {
        func_0x00101850(stdout,10);
        cVar7 = include_project;
      }
    }
    if (cVar7 != '\0') {
      lVar6 = func_0x001017f0(puStack1128[4]);
      unaff_R13 = xmalloc(lVar6 + 10);
      puVar8 = (undefined8 *)func_0x001017c0(unaff_R13,puStack1128[4]);
      *puVar8 = 0x63656a6f72702e2f;
      *(undefined2 *)(puVar8 + 1) = 0x74;
      unaff_R12 = func_0x001019f0(unaff_R13,&UNK_001062fb);
      if (unaff_R12 != 0) {
        uVar3 = func_0x001017d0(0,&UNK_00105ca5,5);
        func_0x001019a0(1,uVar3);
        while (lVar6 = func_0x00101770(auStack1080,1,0x400), lVar6 != 0) {
          func_0x00101970(auStack1080,1,lVar6,stdout);
        }
        rpl_fclose(unaff_R12);
        param_1 = auStack1080;
      }
      func_0x001016f0(unaff_R13);
    }
    if (include_plan != '\0') {
      lVar6 = func_0x001017f0(puStack1128[4]);
      unaff_R12 = xmalloc(lVar6 + 7);
      puVar10 = (undefined4 *)func_0x001017c0(unaff_R12,puStack1128[4]);
      *puVar10 = 0x6c702e2f;
      *(undefined2 *)(puVar10 + 1) = 0x6e61;
      *(undefined *)((long)puVar10 + 6) = 0;
      puStack1128 = (undefined8 *)func_0x001019f0(unaff_R12,&UNK_001062fb);
      if (puStack1128 != (undefined8 *)0x0) {
        uVar3 = func_0x001017d0(0,&UNK_00105caf,5);
        func_0x001019a0(1,uVar3);
        while (lVar6 = func_0x00101770(auStack1080,1,0x400), lVar6 != 0) {
          func_0x00101970(auStack1080,1,lVar6,stdout);
        }
        rpl_fclose(puStack1128);
        param_1 = auStack1080;
      }
      func_0x001016f0(unaff_R12);
    }
    pcStack1656 = stdout;
    puVar14 = *(undefined **)(stdout + 0x28);
    if (puVar14 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar14 + 1;
      *puVar14 = 10;
    }
    else {
      func_0x00101850(stdout,10);
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00101800();
  cVar7 = pcStack1656[8];
  lStack1144 = *(long *)(in_FS_OFFSET + 0x28);
  puStack1120 = param_1;
  lStack1112 = unaff_R12;
  uStack1104 = unaff_R13;
  if (cVar7 != '/') {
    uStack1452 = 0x2f;
    pcVar4 = pcStack1656 + 8;
    uStack1456 = 0x7665642f;
    puVar10 = (undefined4 *)(&uStack1452 + 1);
    goto joined_r0x001029d1;
  }
  pcVar4 = pcStack1656 + 8;
  puVar10 = &uStack1456;
  do {
    pcVar4 = pcVar4 + 1;
    puVar11 = (undefined4 *)((long)puVar10 + 1);
    *(char *)puVar10 = cVar7;
    puVar10 = puVar11;
    if (pcStack1656 + 0x28 <= pcVar4) break;
    cVar7 = *pcVar4;
joined_r0x001029d1:
  } while (cVar7 != '\0');
  pcStack1648 = pcStack1656 + 8;
  *(char *)puVar10 = '\0';
  puStack1640 = &UNK_00102679;
  iVar2 = func_0x00101920(1,&uStack1456,auStack1600);
  if (iVar2 == 0) {
    uVar17 = (ulong)((-(uint)((uStack1576 & 0x10) == 0) & 10) + 0x20);
  }
  else {
    uVar17 = 0x3f;
    lStack1528 = 0;
  }
  puStack1664 = (undefined8 *)(pcStack1656 + 0x2c);
  puStack1640 = &UNK_001026ba;
  func_0x001019a0(1,&UNK_00105cdb,0x20,puStack1664);
  if (include_fullname != '\0') {
    cVar7 = pcStack1656[0x2c];
    puVar8 = &uStack1408;
    while (puVar5 = puVar8, cVar7 != '\0') {
      puStack1664 = (undefined8 *)((long)puStack1664 + 1);
      puVar5 = (undefined8 *)((long)puVar8 + 1);
      *(char *)puVar8 = cVar7;
      if (pcStack1656 + 0x4c <= puStack1664) break;
      cVar7 = *(char *)puStack1664;
      puVar8 = puVar5;
    }
    *(char *)puVar5 = '\0';
    puStack1640 = &UNK_001026eb;
    puStack1664 = (undefined8 *)func_0x001018c0(&uStack1408);
    if (puStack1664 == (undefined8 *)0x0) {
      puStack1640 = &UNK_00102a13;
      uVar3 = func_0x001017d0(0,&UNK_00105cbc,5);
      puStack1640 = &UNK_00102a29;
      func_0x001019a0(1,&UNK_00105cc8,uVar3);
    }
    else {
      uVar3 = puStack1664[3];
      puStack1640 = &UNK_00102708;
      puVar14 = (undefined *)func_0x00101830(uVar3,0x2c);
      if (puVar14 != (undefined *)0x0) {
        *puVar14 = 0;
        uVar3 = puStack1664[3];
      }
      puStack1640 = &UNK_0010271f;
      puStack1664 = (undefined8 *)create_fullname(uVar3,*puStack1664);
      puStack1640 = &UNK_00102738;
      func_0x001019a0(1,&UNK_00105cce,puStack1664);
      puStack1640 = &UNK_00102740;
      func_0x001016f0(puStack1664);
    }
  }
  puStack1640 = &UNK_0010275e;
  func_0x001019a0(1,&UNK_00105cd8,uVar17,0x20,pcStack1648);
  if (include_idle != '\0') {
    if (lStack1528 == 0) {
      puStack1640 = &UNK_00102783;
      puVar12 = (undefined1 *)func_0x001017d0(0,&UNK_00105cf7,5);
    }
    else {
      if (now_7040 == 0) {
        puStack1640 = &UNK_00102a3c;
        func_0x00101900(&now_7040);
      }
      lStack1528 = now_7040 - lStack1528;
      puVar12 = &UNK_00105cb6;
      if (0x3b < lStack1528) {
        if (lStack1528 < 0x15180) {
          puStack1640 = &UNK_00102af1;
          func_0x00101aa0(buf_7041,1,0x16,&UNK_00105ce2,lStack1528 / 0xe10,
                          (ulong)(lStack1528 % 0xe10) / 0x3c & 0xffffffff);
          puVar12 = buf_7041;
        }
        else {
          puStack1640 = &UNK_0010298e;
          func_0x00101aa0(buf_7041,1,0x16,&UNK_00105cec,lStack1528 / 0x15180);
          puVar12 = buf_7041;
        }
      }
    }
    puStack1640 = &UNK_00102799;
    func_0x001019a0(1,&UNK_00105cf1,puVar12);
  }
  lStack1608 = (long)*(int *)(pcStack1656 + 0x154);
  puStack1640 = &UNK_001027af;
  lVar6 = func_0x00101700(&lStack1608);
  if (lVar6 == 0) {
    puStack1640 = &UNK_001029f1;
    puVar12 = (undefined1 *)imaxtostr(lStack1608,buf_7049);
  }
  else {
    puStack1640 = &UNK_001027d3;
    func_0x001019b0(buf_7049,0x21,time_format,lVar6);
    puVar12 = buf_7049;
  }
  puStack1640 = &UNK_001027ed;
  func_0x001019a0(1,&UNK_00106300,puVar12);
  if ((include_where == '\0') || (cVar7 = pcStack1656[0x4c], cVar7 == '\0')) goto code_r0x00102802;
  pcVar4 = pcStack1656 + 0x4c;
  pcStack1656 = pcStack1656 + 0x14c;
  puVar8 = &uStack1408;
  do {
    pcVar4 = pcVar4 + 1;
    puVar5 = (undefined8 *)((long)puVar8 + 1);
    *(char *)puVar8 = cVar7;
    if (pcStack1656 <= pcVar4) break;
    cVar7 = *pcVar4;
    puVar8 = puVar5;
  } while (cVar7 != '\0');
  *(char *)puVar5 = '\0';
  puStack1640 = &UNK_001028c7;
  puVar14 = (undefined *)func_0x00101830(&uStack1408,0x3a);
  if (puVar14 == (undefined *)0x0) {
    if ((char)uStack1408 == '\0') {
code_r0x00102a5e:
      puStack1664 = &uStack1408;
    }
    else {
      puStack1640 = &UNK_00102b28;
      puStack1664 = (undefined8 *)canon_host(&uStack1408);
      if (puStack1664 == (undefined8 *)0x0) goto code_r0x00102a5e;
    }
code_r0x00102a61:
    puStack1640 = &UNK_00102a77;
    func_0x001019a0(1,&UNK_00106300,puStack1664);
  }
  else {
    *puVar14 = 0;
    puVar9 = puVar14 + 1;
    if ((char)uStack1408 == '\0') {
code_r0x001028e5:
      puStack1664 = &uStack1408;
    }
    else {
      puStack1640 = &UNK_00102b0a;
      puStack1624 = puVar14 + 1;
      puStack1664 = (undefined8 *)canon_host(&uStack1408);
      puVar9 = puStack1624;
      if (puStack1664 == (undefined8 *)0x0) goto code_r0x001028e5;
    }
    if (puVar9 == (undefined *)0x0) goto code_r0x00102a61;
    puStack1640 = &UNK_00102907;
    func_0x001019a0(1,&UNK_00105cfd,puStack1664);
  }
  if (puStack1664 != &uStack1408) {
    puStack1640 = &UNK_00102918;
    func_0x001016f0(puStack1664);
  }
code_r0x00102802:
  pcVar4 = stdout;
  puVar14 = *(undefined **)(stdout + 0x28);
  if (puVar14 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar14 + 1;
    *puVar14 = 10;
  }
  else {
    puStack1640 = &UNK_00102a8a;
    func_0x00101850(stdout,10);
  }
  if (lStack1144 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack1640 = &UNK_00102b3e;
  func_0x00101800();
  puVar14 = program_name;
  uVar3 = 5;
  uStack1680 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack1640 = (undefined *)uVar17;
  if ((int)pcVar4 == 0) goto code_r0x00102b9d;
  uVar3 = func_0x001017d0(0,&UNK_00105e70,5);
  func_0x00101a30(stderr,1,uVar3,puVar14);
  do {
    func_0x00101a10((ulong)pcVar4 & 0xffffffff);
    uVar3 = extraout_RDX;
code_r0x00102b9d:
    uVar3 = func_0x001017d0(0,&UNK_00105e98,uVar3);
    func_0x001019a0(1,uVar3,puVar14);
    pcVar1 = stdout;
    uVar3 = func_0x001017d0(0,&UNK_00105ec0,5);
    func_0x001018a0(uVar3,pcVar1);
    pcVar1 = stdout;
    uVar3 = func_0x001017d0(0,&UNK_00106008,5);
    func_0x001018a0(uVar3,pcVar1);
    pcVar1 = stdout;
    uVar3 = func_0x001017d0(0,&UNK_00106140,5);
    func_0x001018a0(uVar3,pcVar1);
    pcVar1 = stdout;
    uVar3 = func_0x001017d0(0,&UNK_00106170,5);
    func_0x001018a0(uVar3,pcVar1);
    uVar3 = func_0x001017d0(0,&UNK_001061a8,5);
    func_0x001019a0(1,uVar3,&UNK_00105d0a);
    uStack1704 = 0;
    uStack1696 = 0;
    pbStack1800 = &UNK_00105d18;
    apbStack1784[4] = &UNK_00105d59;
    puStack1792 = &UNK_00105d1a;
    puStack1736 = &UNK_00105d63;
    apbStack1784[0] = &UNK_00105d92;
    puStack1720 = &UNK_00105d6d;
    apbStack1784[1] = &UNK_00105d2a;
    apbStack1784[2] = &UNK_00105d40;
    apbStack1784[3] = &UNK_00105d4a;
    puStack1744 = &UNK_00105d4a;
    puStack1728 = &UNK_00105d4a;
    puStack1712 = &UNK_00105d4a;
    ppbVar13 = &pbStack1800;
    do {
      ppbVar13 = ppbVar13;
      ppbVar13 = ppbVar13 + 2;
      pbVar16 = *ppbVar13;
      bVar18 = false;
      bVar19 = pbVar16 == (byte *)0x0;
      if (bVar19) break;
      lVar6 = 6;
      pbVar15 = &UNK_00105d04;
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar18 = *pbVar15 < *pbVar16;
        bVar19 = *pbVar15 == *pbVar16;
        pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
        pbVar16 = pbVar16 + (ulong)bVar20 * -2 + 1;
      } while (bVar19);
    } while ((!bVar18 && !bVar19) != bVar18);
    pbVar16 = ppbVar13[3];
    if (pbVar16 == (byte *)0x0) {
      uVar3 = func_0x001017d0(0,&UNK_00105d77,5);
      func_0x001019a0(1,uVar3,&UNK_00105d8e,&UNK_00106200);
      lVar6 = func_0x00101990(5,0);
      if ((lVar6 != 0) && (iVar2 = func_0x00101740(lVar6,&UNK_00105d9c,3), iVar2 != 0)) {
        pbVar16 = &UNK_00105d04;
        goto code_r0x00102ea0;
      }
      pbVar16 = &UNK_00105d04;
      puVar14 = &UNK_00105d34;
      uVar3 = func_0x001017d0(0,&UNK_00105da0,5);
      func_0x001019a0(1,uVar3,&UNK_00106200,&UNK_00105d04);
    }
    else {
      uVar3 = func_0x001017d0(0,&UNK_00105d77,5);
      func_0x001019a0(1,uVar3,&UNK_00105d8e,&UNK_00106200);
      lVar6 = func_0x00101990(5,0);
      if ((lVar6 != 0) && (iVar2 = func_0x00101740(lVar6,&UNK_00105d9c,3), iVar2 != 0)) {
code_r0x00102ea0:
        pcVar1 = stdout;
        uVar3 = func_0x001017d0(0,&UNK_00106228,5);
        func_0x001018a0(uVar3,pcVar1);
      }
      uVar3 = func_0x001017d0(0,&UNK_00105da0,5);
      func_0x001019a0(1,uVar3,&UNK_00106200,&UNK_00105d04);
      puVar14 = &UNK_00106881;
      if (pbVar16 == &UNK_00105d04) {
        puVar14 = &UNK_00105d34;
      }
    }
    uVar3 = func_0x001017d0(0,&UNK_00106270,5);
    func_0x001019a0(1,uVar3,pbVar16,puVar14);
  } while( true );
}

