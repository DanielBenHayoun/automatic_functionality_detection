
void print_entry(char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 extraout_RDX;
  byte **ppbVar12;
  undefined *puVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte *pbStack720;
  undefined *puStack712;
  byte *apbStack704 [5];
  undefined *puStack664;
  undefined *puStack656;
  undefined *puStack648;
  undefined *puStack640;
  undefined *puStack632;
  undefined8 uStack624;
  undefined8 uStack616;
  undefined8 uStack600;
  undefined8 *puStack584;
  char *pcStack576;
  char *pcStack568;
  undefined *puStack560;
  undefined *puStack544;
  long lStack528;
  undefined auStack520 [24];
  uint uStack496;
  long lStack448;
  undefined4 uStack376;
  undefined2 uStack372;
  undefined8 uStack328;
  long lStack64;
  
  bVar20 = 0;
  cVar5 = param_1[8];
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (cVar5 != '/') {
    uStack372 = 0x2f;
    pcVar2 = param_1 + 8;
    uStack376 = 0x7665642f;
    puVar8 = (undefined4 *)(&uStack372 + 1);
    goto joined_r0x001029d1;
  }
  pcVar2 = param_1 + 8;
  puVar8 = &uStack376;
  do {
    pcVar2 = pcVar2 + 1;
    puVar9 = (undefined4 *)((long)puVar8 + 1);
    *(char *)puVar8 = cVar5;
    puVar8 = puVar9;
    if (param_1 + 0x28 <= pcVar2) break;
    cVar5 = *pcVar2;
joined_r0x001029d1:
  } while (cVar5 != '\0');
  pcStack568 = param_1 + 8;
  *(char *)puVar8 = '\0';
  puStack560 = &UNK_00102679;
  iVar1 = func_0x00101920(1,&uStack376,auStack520);
  if (iVar1 == 0) {
    uVar17 = (ulong)((-(uint)((uStack496 & 0x10) == 0) & 10) + 0x20);
  }
  else {
    uVar17 = 0x3f;
    lStack448 = 0;
  }
  puStack584 = (undefined8 *)(param_1 + 0x2c);
  puStack560 = &UNK_001026ba;
  func_0x001019a0(1,&UNK_00105cdb,0x20,puStack584);
  if (include_fullname != '\0') {
    cVar5 = param_1[0x2c];
    puVar6 = &uStack328;
    while (puVar3 = puVar6, cVar5 != '\0') {
      puStack584 = (undefined8 *)((long)puStack584 + 1);
      puVar3 = (undefined8 *)((long)puVar6 + 1);
      *(char *)puVar6 = cVar5;
      if (param_1 + 0x4c <= puStack584) break;
      cVar5 = *(char *)puStack584;
      puVar6 = puVar3;
    }
    *(char *)puVar3 = '\0';
    puStack560 = &UNK_001026eb;
    puStack584 = (undefined8 *)func_0x001018c0(&uStack328);
    if (puStack584 == (undefined8 *)0x0) {
      puStack560 = &UNK_00102a13;
      uVar11 = func_0x001017d0(0,&UNK_00105cbc,5);
      puStack560 = &UNK_00102a29;
      func_0x001019a0(1,&UNK_00105cc8,uVar11);
    }
    else {
      uVar11 = puStack584[3];
      puStack560 = &UNK_00102708;
      puVar13 = (undefined *)func_0x00101830(uVar11,0x2c);
      if (puVar13 != (undefined *)0x0) {
        *puVar13 = 0;
        uVar11 = puStack584[3];
      }
      puStack560 = &UNK_0010271f;
      puStack584 = (undefined8 *)create_fullname(uVar11,*puStack584);
      puStack560 = &UNK_00102738;
      func_0x001019a0(1,&UNK_00105cce,puStack584);
      puStack560 = &UNK_00102740;
      func_0x001016f0(puStack584);
    }
  }
  puStack560 = &UNK_0010275e;
  func_0x001019a0(1,&UNK_00105cd8,uVar17,0x20,pcStack568);
  if (include_idle != '\0') {
    if (lStack448 == 0) {
      puStack560 = &UNK_00102783;
      puVar10 = (undefined1 *)func_0x001017d0(0,&UNK_00105cf7,5);
    }
    else {
      if (now_7040 == 0) {
        puStack560 = &UNK_00102a3c;
        func_0x00101900(&now_7040);
      }
      lStack448 = now_7040 - lStack448;
      puVar10 = &UNK_00105cb6;
      if (0x3b < lStack448) {
        if (lStack448 < 0x15180) {
          puStack560 = &UNK_00102af1;
          func_0x00101aa0(buf_7041,1,0x16,&UNK_00105ce2,lStack448 / 0xe10,
                          (ulong)(lStack448 % 0xe10) / 0x3c & 0xffffffff);
          puVar10 = buf_7041;
        }
        else {
          puStack560 = &UNK_0010298e;
          func_0x00101aa0(buf_7041,1,0x16,&UNK_00105cec,lStack448 / 0x15180);
          puVar10 = buf_7041;
        }
      }
    }
    puStack560 = &UNK_00102799;
    func_0x001019a0(1,&UNK_00105cf1,puVar10);
  }
  lStack528 = (long)*(int *)(param_1 + 0x154);
  puStack560 = &UNK_001027af;
  lVar4 = func_0x00101700(&lStack528);
  if (lVar4 == 0) {
    puStack560 = &UNK_001029f1;
    puVar10 = (undefined1 *)imaxtostr(lStack528,buf_7049);
  }
  else {
    puStack560 = &UNK_001027d3;
    func_0x001019b0(buf_7049,0x21,time_format,lVar4);
    puVar10 = buf_7049;
  }
  puStack560 = &UNK_001027ed;
  func_0x001019a0(1,&UNK_00106300,puVar10);
  if ((include_where == '\0') || (cVar5 = param_1[0x4c], cVar5 == '\0')) goto code_r0x00102802;
  pcVar2 = param_1 + 0x4c;
  param_1 = param_1 + 0x14c;
  puVar6 = &uStack328;
  do {
    pcVar2 = pcVar2 + 1;
    puVar3 = (undefined8 *)((long)puVar6 + 1);
    *(char *)puVar6 = cVar5;
    if (param_1 <= pcVar2) break;
    cVar5 = *pcVar2;
    puVar6 = puVar3;
  } while (cVar5 != '\0');
  *(char *)puVar3 = '\0';
  puStack560 = &UNK_001028c7;
  puVar13 = (undefined *)func_0x00101830(&uStack328,0x3a);
  if (puVar13 == (undefined *)0x0) {
    if ((char)uStack328 == '\0') {
code_r0x00102a5e:
      puStack584 = &uStack328;
    }
    else {
      puStack560 = &UNK_00102b28;
      puStack584 = (undefined8 *)canon_host(&uStack328);
      if (puStack584 == (undefined8 *)0x0) goto code_r0x00102a5e;
    }
code_r0x00102a61:
    puStack560 = &UNK_00102a77;
    func_0x001019a0(1,&UNK_00106300,puStack584);
  }
  else {
    *puVar13 = 0;
    puVar7 = puVar13 + 1;
    if ((char)uStack328 == '\0') {
code_r0x001028e5:
      puStack584 = &uStack328;
    }
    else {
      puStack560 = &UNK_00102b0a;
      puStack544 = puVar13 + 1;
      puStack584 = (undefined8 *)canon_host(&uStack328);
      puVar7 = puStack544;
      if (puStack584 == (undefined8 *)0x0) goto code_r0x001028e5;
    }
    if (puVar7 == (undefined *)0x0) goto code_r0x00102a61;
    puStack560 = &UNK_00102907;
    func_0x001019a0(1,&UNK_00105cfd,puStack584);
  }
  if (puStack584 != &uStack328) {
    puStack560 = &UNK_00102918;
    func_0x001016f0(puStack584);
  }
code_r0x00102802:
  uVar15 = stdout;
  puVar13 = *(undefined **)(stdout + 0x28);
  if (puVar13 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar13 + 1;
    *puVar13 = 10;
  }
  else {
    puStack560 = &UNK_00102a8a;
    func_0x00101850(stdout,10);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack560 = &UNK_00102b3e;
  func_0x00101800();
  puVar13 = program_name;
  uVar11 = 5;
  uStack600 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcStack576 = param_1;
  puStack560 = (undefined *)uVar17;
  if ((int)uVar15 == 0) goto code_r0x00102b9d;
  uVar11 = func_0x001017d0(0,&UNK_00105e70,5);
  func_0x00101a30(stderr,1,uVar11,puVar13);
  do {
    func_0x00101a10(uVar15 & 0xffffffff);
    uVar11 = extraout_RDX;
code_r0x00102b9d:
    uVar11 = func_0x001017d0(0,&UNK_00105e98,uVar11);
    func_0x001019a0(1,uVar11,puVar13);
    uVar17 = stdout;
    uVar11 = func_0x001017d0(0,&UNK_00105ec0,5);
    func_0x001018a0(uVar11,uVar17);
    uVar17 = stdout;
    uVar11 = func_0x001017d0(0,&UNK_00106008,5);
    func_0x001018a0(uVar11,uVar17);
    uVar17 = stdout;
    uVar11 = func_0x001017d0(0,&UNK_00106140,5);
    func_0x001018a0(uVar11,uVar17);
    uVar17 = stdout;
    uVar11 = func_0x001017d0(0,&UNK_00106170,5);
    func_0x001018a0(uVar11,uVar17);
    uVar11 = func_0x001017d0(0,&UNK_001061a8,5);
    func_0x001019a0(1,uVar11,&UNK_00105d0a);
    uStack624 = 0;
    uStack616 = 0;
    pbStack720 = &UNK_00105d18;
    apbStack704[4] = &UNK_00105d59;
    puStack712 = &UNK_00105d1a;
    puStack656 = &UNK_00105d63;
    apbStack704[0] = &UNK_00105d92;
    puStack640 = &UNK_00105d6d;
    apbStack704[1] = &UNK_00105d2a;
    apbStack704[2] = &UNK_00105d40;
    apbStack704[3] = &UNK_00105d4a;
    puStack664 = &UNK_00105d4a;
    puStack648 = &UNK_00105d4a;
    puStack632 = &UNK_00105d4a;
    ppbVar12 = &pbStack720;
    do {
      ppbVar12 = ppbVar12;
      ppbVar12 = ppbVar12 + 2;
      pbVar16 = *ppbVar12;
      bVar18 = false;
      bVar19 = pbVar16 == (byte *)0x0;
      if (bVar19) break;
      lVar4 = 6;
      pbVar14 = &UNK_00105d04;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar18 = *pbVar14 < *pbVar16;
        bVar19 = *pbVar14 == *pbVar16;
        pbVar14 = pbVar14 + (ulong)bVar20 * -2 + 1;
        pbVar16 = pbVar16 + (ulong)bVar20 * -2 + 1;
      } while (bVar19);
    } while ((!bVar18 && !bVar19) != bVar18);
    pbVar16 = ppbVar12[3];
    if (pbVar16 == (byte *)0x0) {
      uVar11 = func_0x001017d0(0,&UNK_00105d77,5);
      func_0x001019a0(1,uVar11,&UNK_00105d8e,&UNK_00106200);
      lVar4 = func_0x00101990(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x00101740(lVar4,&UNK_00105d9c,3), iVar1 != 0)) {
        pbVar16 = &UNK_00105d04;
        goto code_r0x00102ea0;
      }
      pbVar16 = &UNK_00105d04;
      puVar13 = &UNK_00105d34;
      uVar11 = func_0x001017d0(0,&UNK_00105da0,5);
      func_0x001019a0(1,uVar11,&UNK_00106200,&UNK_00105d04);
    }
    else {
      uVar11 = func_0x001017d0(0,&UNK_00105d77,5);
      func_0x001019a0(1,uVar11,&UNK_00105d8e,&UNK_00106200);
      lVar4 = func_0x00101990(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x00101740(lVar4,&UNK_00105d9c,3), iVar1 != 0)) {
code_r0x00102ea0:
        uVar17 = stdout;
        uVar11 = func_0x001017d0(0,&UNK_00106228,5);
        func_0x001018a0(uVar11,uVar17);
      }
      uVar11 = func_0x001017d0(0,&UNK_00105da0,5);
      func_0x001019a0(1,uVar11,&UNK_00106200,&UNK_00105d04);
      puVar13 = &UNK_00106881;
      if (pbVar16 == &UNK_00105d04) {
        puVar13 = &UNK_00105d34;
      }
    }
    uVar11 = func_0x001017d0(0,&UNK_00106270,5);
    func_0x001019a0(1,uVar11,pbVar16,puVar13);
  } while( true );
}

