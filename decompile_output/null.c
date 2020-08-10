
ulong null(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  undefined *puVar7;
  char *unaff_RBP;
  byte *pbVar8;
  int *piVar9;
  int *piVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  byte *pbStack240;
  undefined *puStack232;
  byte *apbStack224 [5];
  undefined *puStack184;
  undefined *puStack176;
  undefined *puStack168;
  undefined *puStack160;
  undefined *puStack152;
  undefined8 uStack144;
  undefined8 uStack136;
  undefined8 uStack120;
  int *piStack104;
  char *pcStack96;
  undefined auStack72 [24];
  long lStack48;
  int *piStack40;
  
  bVar14 = 0;
  if (*param_1 == 0) {
    return (ulong)(*(long *)(param_1 + 2) == 0);
  }
  if (*param_1 == 1) {
    uVar2 = 1;
    cVar5 = **(char **)(param_1 + 2);
    if (cVar5 != '\0') {
      pcVar3 = *(char **)(param_1 + 2) + (cVar5 == '-');
      cVar5 = *pcVar3;
      while (cVar5 == '0') {
        pcVar3 = pcVar3 + 1;
        cVar5 = *pcVar3;
        if (cVar5 == '\0') {
          return 1;
        }
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  func_0x001016d0();
  if (*param_1 == 0) {
    return 1;
  }
  if (*param_1 == 1) {
    unaff_RBP = *(char **)(param_1 + 2);
    pcVar3 = unaff_RBP + (*unaff_RBP == '-');
    cVar5 = *pcVar3;
    do {
      if (9 < (int)cVar5 - 0x30U) {
        return 0;
      }
      pcVar3 = pcVar3 + 1;
      cVar5 = *pcVar3;
    } while (cVar5 != '\0');
    piStack40 = (int *)&UNK_00102106;
    iVar1 = xstrtoimax(unaff_RBP,0,10,param_1 + 2,0);
    if (iVar1 == 0) {
      piStack40 = (int *)&UNK_00102112;
      func_0x001016c0(unaff_RBP);
      *param_1 = 0;
      return 1;
    }
  }
  else {
    piStack40 = (int *)&UNK_00102129;
    func_0x001016d0();
  }
  piVar9 = (int *)0x3;
  piStack40 = (int *)&UNK_00102144;
  func_0x001019c0(3,0x22,&UNK_00116693,unaff_RBP);
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  piStack40 = param_1;
  if (*piVar9 == 0) {
    piVar10 = (int *)imaxtostr(*(undefined8 *)(piVar9 + 2),auStack72);
    uVar2 = xstrdup();
    *piVar9 = 1;
    *(undefined8 *)(piVar9 + 2) = uVar2;
    param_1 = piVar9;
    piVar9 = piVar10;
  }
  else {
    if (*piVar9 != 1) {
      func_0x001016d0();
      goto code_r0x001021b8;
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
code_r0x001021b8:
  func_0x001017c0();
  puVar7 = program_name;
  uVar2 = 5;
  uStack120 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  piStack104 = param_1;
  pcStack96 = unaff_RBP;
  if ((int)piVar9 == 0) goto code_r0x0010221d;
  uVar2 = func_0x00101790(0,&UNK_00115d00,5);
  func_0x00101a30(stderr,1,uVar2,puVar7);
  do {
    func_0x00101a10((ulong)piVar9 & 0xffffffff);
    uVar2 = extraout_RDX;
code_r0x0010221d:
    uVar2 = func_0x00101790(0,&UNK_00115d28,uVar2);
    func_0x00101980(1,uVar2,puVar7,puVar7);
    puVar7 = *(undefined **)(stdout + 0x28);
    if (puVar7 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar7 + 1;
      *puVar7 = 10;
    }
    else {
      func_0x00101800(stdout,10);
    }
    lVar4 = stdout;
    uVar2 = func_0x00101790(0,&UNK_00115d50,5);
    func_0x00101890(uVar2,lVar4);
    lVar4 = stdout;
    uVar2 = func_0x00101790(0,&UNK_00115d80,5);
    func_0x00101890(uVar2,lVar4);
    lVar4 = stdout;
    uVar2 = func_0x00101790(0,&UNK_00115db8,5);
    func_0x00101890(uVar2,lVar4);
    lVar4 = stdout;
    uVar2 = func_0x00101790(0,&UNK_00115ed0,5);
    func_0x00101890(uVar2,lVar4);
    lVar4 = stdout;
    uVar2 = func_0x00101790(0,&UNK_00115ff8,5);
    func_0x00101890(uVar2,lVar4);
    lVar4 = stdout;
    uVar2 = func_0x00101790(0,&UNK_00116070,5);
    func_0x00101890(uVar2,lVar4);
    lVar4 = stdout;
    uVar2 = func_0x00101790(0,&UNK_00116130,5);
    func_0x00101890(uVar2,lVar4);
    lVar4 = stdout;
    uVar2 = func_0x00101790(0,&UNK_00116268,5);
    func_0x00101890(uVar2,lVar4);
    lVar4 = stdout;
    uVar2 = func_0x00101790(0,&UNK_00116338,5);
    func_0x00101890(uVar2,lVar4);
    lVar4 = stdout;
    uVar2 = func_0x00101790(0,&UNK_00116460,5);
    func_0x00101890(uVar2,lVar4);
    uStack144 = 0;
    uStack136 = 0;
    pbStack240 = &UNK_00115b2e;
    apbStack224[4] = &UNK_00115b6f;
    puStack232 = &UNK_00115b30;
    puStack176 = &UNK_00115b79;
    apbStack224[0] = &UNK_00115ba8;
    puStack160 = &UNK_00115b83;
    apbStack224[1] = &UNK_00115b40;
    apbStack224[2] = &UNK_00115b56;
    apbStack224[3] = &UNK_00115b60;
    puStack184 = &UNK_00115b60;
    puStack168 = &UNK_00115b60;
    puStack152 = &UNK_00115b60;
    ppbVar6 = &pbStack240;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar11 = *ppbVar6;
      bVar12 = false;
      bVar13 = pbVar11 == (byte *)0x0;
      if (bVar13) break;
      lVar4 = 5;
      pbVar8 = &UNK_00115b29;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar12 = *pbVar8 < *pbVar11;
        bVar13 = *pbVar8 == *pbVar11;
        pbVar8 = pbVar8 + (ulong)bVar14 * -2 + 1;
        pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
      } while (bVar13);
    } while ((!bVar12 && !bVar13) != bVar12);
    pbVar11 = ppbVar6[3];
    if (pbVar11 == (byte *)0x0) {
      uVar2 = func_0x00101790(0,&UNK_00115b8d,5);
      func_0x00101980(1,uVar2,&UNK_00115ba4,&UNK_00116500);
      lVar4 = func_0x00101970(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x001016f0(lVar4,&UNK_00115bb2,3);
        if (iVar1 != 0) {
          pbVar11 = &UNK_00115b29;
          goto code_r0x0010256e;
        }
      }
      pbVar11 = &UNK_00115b29;
      puVar7 = &UNK_00115b4a;
      uVar2 = func_0x00101790(0,&UNK_00115bb6,5);
      func_0x00101980(1,uVar2,&UNK_00116500,&UNK_00115b29);
    }
    else {
      uVar2 = func_0x00101790(0,&UNK_00115b8d,5);
      func_0x00101980(1,uVar2,&UNK_00115ba4,&UNK_00116500);
      lVar4 = func_0x00101970(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x001016f0(lVar4,&UNK_00115bb2,3);
        if (iVar1 != 0) {
code_r0x0010256e:
          lVar4 = stdout;
          uVar2 = func_0x00101790(0,&UNK_00116528,5);
          func_0x00101890(uVar2,lVar4);
        }
      }
      uVar2 = func_0x00101790(0,&UNK_00115bb6,5);
      func_0x00101980(1,uVar2,&UNK_00116500,&UNK_00115b29);
      puVar7 = &UNK_00116c81;
      if (pbVar11 == &UNK_00115b29) {
        puVar7 = &UNK_00115b4a;
      }
    }
    uVar2 = func_0x00101790(0,&UNK_00116570,5);
    func_0x00101980(1,uVar2,pbVar11,puVar7);
  } while( true );
}

