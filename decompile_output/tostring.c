
void tostring(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  byte **ppbVar4;
  int *unaff_RBX;
  undefined *puVar5;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte *pbStack208;
  undefined *puStack200;
  byte *apbStack192 [5];
  undefined *puStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined *puStack128;
  undefined *puStack120;
  undefined8 uStack112;
  undefined8 uStack104;
  undefined8 uStack88;
  int *piStack72;
  undefined auStack40 [24];
  long lStack16;
  
  bVar11 = 0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    piVar7 = (int *)imaxtostr(*(undefined8 *)(param_1 + 2),auStack40);
    uVar3 = xstrdup();
    *param_1 = 1;
    *(undefined8 *)(param_1 + 2) = uVar3;
    unaff_RBX = param_1;
    param_1 = piVar7;
  }
  else {
    if (*param_1 != 1) {
      func_0x001016d0();
      goto code_r0x001021b8;
    }
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
code_r0x001021b8:
  func_0x001017c0();
  puVar5 = program_name;
  uVar3 = 5;
  uStack88 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  piStack72 = unaff_RBX;
  if ((int)param_1 == 0) goto code_r0x0010221d;
  uVar3 = func_0x00101790(0,&UNK_00115d00,5);
  func_0x00101a30(stderr,1,uVar3,puVar5);
  do {
    func_0x00101a10((ulong)param_1 & 0xffffffff);
    uVar3 = extraout_RDX;
code_r0x0010221d:
    uVar3 = func_0x00101790(0,&UNK_00115d28,uVar3);
    func_0x00101980(1,uVar3,puVar5,puVar5);
    puVar5 = *(undefined **)(stdout + 0x28);
    if (puVar5 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar5 + 1;
      *puVar5 = 10;
    }
    else {
      func_0x00101800(stdout,10);
    }
    lVar2 = stdout;
    uVar3 = func_0x00101790(0,&UNK_00115d50,5);
    func_0x00101890(uVar3,lVar2);
    lVar2 = stdout;
    uVar3 = func_0x00101790(0,&UNK_00115d80,5);
    func_0x00101890(uVar3,lVar2);
    lVar2 = stdout;
    uVar3 = func_0x00101790(0,&UNK_00115db8,5);
    func_0x00101890(uVar3,lVar2);
    lVar2 = stdout;
    uVar3 = func_0x00101790(0,&UNK_00115ed0,5);
    func_0x00101890(uVar3,lVar2);
    lVar2 = stdout;
    uVar3 = func_0x00101790(0,&UNK_00115ff8,5);
    func_0x00101890(uVar3,lVar2);
    lVar2 = stdout;
    uVar3 = func_0x00101790(0,&UNK_00116070,5);
    func_0x00101890(uVar3,lVar2);
    lVar2 = stdout;
    uVar3 = func_0x00101790(0,&UNK_00116130,5);
    func_0x00101890(uVar3,lVar2);
    lVar2 = stdout;
    uVar3 = func_0x00101790(0,&UNK_00116268,5);
    func_0x00101890(uVar3,lVar2);
    lVar2 = stdout;
    uVar3 = func_0x00101790(0,&UNK_00116338,5);
    func_0x00101890(uVar3,lVar2);
    lVar2 = stdout;
    uVar3 = func_0x00101790(0,&UNK_00116460,5);
    func_0x00101890(uVar3,lVar2);
    uStack112 = 0;
    uStack104 = 0;
    pbStack208 = &UNK_00115b2e;
    apbStack192[4] = &UNK_00115b6f;
    puStack200 = &UNK_00115b30;
    puStack144 = &UNK_00115b79;
    apbStack192[0] = &UNK_00115ba8;
    puStack128 = &UNK_00115b83;
    apbStack192[1] = &UNK_00115b40;
    apbStack192[2] = &UNK_00115b56;
    apbStack192[3] = &UNK_00115b60;
    puStack152 = &UNK_00115b60;
    puStack136 = &UNK_00115b60;
    puStack120 = &UNK_00115b60;
    ppbVar4 = &pbStack208;
    do {
      ppbVar4 = ppbVar4;
      ppbVar4 = ppbVar4 + 2;
      pbVar8 = *ppbVar4;
      bVar9 = false;
      bVar10 = pbVar8 == (byte *)0x0;
      if (bVar10) break;
      lVar2 = 5;
      pbVar6 = &UNK_00115b29;
      do {
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        bVar9 = *pbVar6 < *pbVar8;
        bVar10 = *pbVar6 == *pbVar8;
        pbVar6 = pbVar6 + (ulong)bVar11 * -2 + 1;
        pbVar8 = pbVar8 + (ulong)bVar11 * -2 + 1;
      } while (bVar10);
    } while ((!bVar9 && !bVar10) != bVar9);
    pbVar8 = ppbVar4[3];
    if (pbVar8 == (byte *)0x0) {
      uVar3 = func_0x00101790(0,&UNK_00115b8d,5);
      func_0x00101980(1,uVar3,&UNK_00115ba4,&UNK_00116500);
      lVar2 = func_0x00101970(5,0);
      if (lVar2 != 0) {
        iVar1 = func_0x001016f0(lVar2,&UNK_00115bb2,3);
        if (iVar1 != 0) {
          pbVar8 = &UNK_00115b29;
          goto code_r0x0010256e;
        }
      }
      pbVar8 = &UNK_00115b29;
      puVar5 = &UNK_00115b4a;
      uVar3 = func_0x00101790(0,&UNK_00115bb6,5);
      func_0x00101980(1,uVar3,&UNK_00116500,&UNK_00115b29);
    }
    else {
      uVar3 = func_0x00101790(0,&UNK_00115b8d,5);
      func_0x00101980(1,uVar3,&UNK_00115ba4,&UNK_00116500);
      lVar2 = func_0x00101970(5,0);
      if (lVar2 != 0) {
        iVar1 = func_0x001016f0(lVar2,&UNK_00115bb2,3);
        if (iVar1 != 0) {
code_r0x0010256e:
          lVar2 = stdout;
          uVar3 = func_0x00101790(0,&UNK_00116528,5);
          func_0x00101890(uVar3,lVar2);
        }
      }
      uVar3 = func_0x00101790(0,&UNK_00115bb6,5);
      func_0x00101980(1,uVar3,&UNK_00116500,&UNK_00115b29);
      puVar5 = &UNK_00116c81;
      if (pbVar8 == &UNK_00115b29) {
        puVar5 = &UNK_00115b4a;
      }
    }
    uVar3 = func_0x00101790(0,&UNK_00116570,5);
    func_0x00101980(1,uVar3,pbVar8,puVar5);
  } while( true );
}

