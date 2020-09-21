
undefined8 toarith(int *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
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
  byte *pbStack232;
  undefined *puStack224;
  byte *apbStack216 [5];
  undefined *puStack176;
  undefined *puStack168;
  undefined *puStack160;
  undefined *puStack152;
  undefined *puStack144;
  undefined8 uStack136;
  undefined8 uStack128;
  undefined8 uStack112;
  int *piStack96;
  char *pcStack88;
  undefined auStack64 [24];
  long lStack40;
  int *piStack32;
  
  bVar14 = 0;
  if (*param_1 == 0) {
    return 1;
  }
  if (*param_1 == 1) {
    unaff_RBP = *(char **)(param_1 + 2);
    pcVar4 = unaff_RBP + (*unaff_RBP == '-');
    cVar1 = *pcVar4;
    do {
      if (9 < (int)cVar1 - 0x30U) {
        return 0;
      }
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    } while (cVar1 != '\0');
    piStack32 = (int *)&UNK_00102106;
    iVar2 = xstrtoimax(unaff_RBP,0,10,param_1 + 2,0);
    if (iVar2 == 0) {
      piStack32 = (int *)&UNK_00102112;
      func_0x001016c0(unaff_RBP);
      *param_1 = 0;
      return 1;
    }
  }
  else {
    piStack32 = (int *)&UNK_00102129;
    func_0x001016d0();
  }
  piVar9 = (int *)0x3;
  piStack32 = (int *)&UNK_00102144;
  func_0x001019c0(3,0x22,&UNK_00116693,unaff_RBP);
  lStack40 = *(long *)(in_FS_OFFSET + 0x28);
  piStack32 = param_1;
  if (*piVar9 == 0) {
    piVar10 = (int *)imaxtostr(*(undefined8 *)(piVar9 + 2),auStack64);
    uVar5 = xstrdup();
    *piVar9 = 1;
    *(undefined8 *)(piVar9 + 2) = uVar5;
    param_1 = piVar9;
    piVar9 = piVar10;
  }
  else {
    if (*piVar9 != 1) {
      func_0x001016d0();
      goto code_r0x001021b8;
    }
  }
  if (lStack40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
code_r0x001021b8:
  func_0x001017c0();
  puVar7 = program_name;
  uVar5 = 5;
  uStack112 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  piStack96 = param_1;
  pcStack88 = unaff_RBP;
  if ((int)piVar9 == 0) goto code_r0x0010221d;
  uVar5 = func_0x00101790(0,&UNK_00115d00,5);
  func_0x00101a30(stderr,1,uVar5,puVar7);
  do {
    func_0x00101a10((ulong)piVar9 & 0xffffffff);
    uVar5 = extraout_RDX;
code_r0x0010221d:
    uVar5 = func_0x00101790(0,&UNK_00115d28,uVar5);
    func_0x00101980(1,uVar5,puVar7,puVar7);
    puVar7 = *(undefined **)(stdout + 0x28);
    if (puVar7 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar7 + 1;
      *puVar7 = 10;
    }
    else {
      func_0x00101800(stdout,10);
    }
    lVar3 = stdout;
    uVar5 = func_0x00101790(0,&UNK_00115d50,5);
    func_0x00101890(uVar5,lVar3);
    lVar3 = stdout;
    uVar5 = func_0x00101790(0,&UNK_00115d80,5);
    func_0x00101890(uVar5,lVar3);
    lVar3 = stdout;
    uVar5 = func_0x00101790(0,&UNK_00115db8,5);
    func_0x00101890(uVar5,lVar3);
    lVar3 = stdout;
    uVar5 = func_0x00101790(0,&UNK_00115ed0,5);
    func_0x00101890(uVar5,lVar3);
    lVar3 = stdout;
    uVar5 = func_0x00101790(0,&UNK_00115ff8,5);
    func_0x00101890(uVar5,lVar3);
    lVar3 = stdout;
    uVar5 = func_0x00101790(0,&UNK_00116070,5);
    func_0x00101890(uVar5,lVar3);
    lVar3 = stdout;
    uVar5 = func_0x00101790(0,&UNK_00116130,5);
    func_0x00101890(uVar5,lVar3);
    lVar3 = stdout;
    uVar5 = func_0x00101790(0,&UNK_00116268,5);
    func_0x00101890(uVar5,lVar3);
    lVar3 = stdout;
    uVar5 = func_0x00101790(0,&UNK_00116338,5);
    func_0x00101890(uVar5,lVar3);
    lVar3 = stdout;
    uVar5 = func_0x00101790(0,&UNK_00116460,5);
    func_0x00101890(uVar5,lVar3);
    uStack136 = 0;
    uStack128 = 0;
    pbStack232 = &UNK_00115b2e;
    apbStack216[4] = &UNK_00115b6f;
    puStack224 = &UNK_00115b30;
    puStack168 = &UNK_00115b79;
    apbStack216[0] = &UNK_00115ba8;
    puStack152 = &UNK_00115b83;
    apbStack216[1] = &UNK_00115b40;
    apbStack216[2] = &UNK_00115b56;
    apbStack216[3] = &UNK_00115b60;
    puStack176 = &UNK_00115b60;
    puStack160 = &UNK_00115b60;
    puStack144 = &UNK_00115b60;
    ppbVar6 = &pbStack232;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar11 = *ppbVar6;
      bVar12 = false;
      bVar13 = pbVar11 == (byte *)0x0;
      if (bVar13) break;
      lVar3 = 5;
      pbVar8 = &UNK_00115b29;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar12 = *pbVar8 < *pbVar11;
        bVar13 = *pbVar8 == *pbVar11;
        pbVar8 = pbVar8 + (ulong)bVar14 * -2 + 1;
        pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
      } while (bVar13);
    } while ((!bVar12 && !bVar13) != bVar12);
    pbVar11 = ppbVar6[3];
    if (pbVar11 == (byte *)0x0) {
      uVar5 = func_0x00101790(0,&UNK_00115b8d,5);
      func_0x00101980(1,uVar5,&UNK_00115ba4,&UNK_00116500);
      lVar3 = func_0x00101970(5,0);
      if (lVar3 != 0) {
        iVar2 = func_0x001016f0(lVar3,&UNK_00115bb2,3);
        if (iVar2 != 0) {
          pbVar11 = &UNK_00115b29;
          goto code_r0x0010256e;
        }
      }
      pbVar11 = &UNK_00115b29;
      puVar7 = &UNK_00115b4a;
      uVar5 = func_0x00101790(0,&UNK_00115bb6,5);
      func_0x00101980(1,uVar5,&UNK_00116500,&UNK_00115b29);
    }
    else {
      uVar5 = func_0x00101790(0,&UNK_00115b8d,5);
      func_0x00101980(1,uVar5,&UNK_00115ba4,&UNK_00116500);
      lVar3 = func_0x00101970(5,0);
      if (lVar3 != 0) {
        iVar2 = func_0x001016f0(lVar3,&UNK_00115bb2,3);
        if (iVar2 != 0) {
code_r0x0010256e:
          lVar3 = stdout;
          uVar5 = func_0x00101790(0,&UNK_00116528,5);
          func_0x00101890(uVar5,lVar3);
        }
      }
      uVar5 = func_0x00101790(0,&UNK_00115bb6,5);
      func_0x00101980(1,uVar5,&UNK_00116500,&UNK_00115b29);
      puVar7 = &UNK_00116c81;
      if (pbVar11 == &UNK_00115b29) {
        puVar7 = &UNK_00115b4a;
      }
    }
    uVar5 = func_0x00101790(0,&UNK_00116570,5);
    func_0x00101980(1,uVar5,pbVar11,puVar7);
  } while( true );
}

