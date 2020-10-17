
undefined8 blake2b_stream(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  undefined *puVar7;
  long unaff_RBP;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 unaff_R12;
  undefined *unaff_R13;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte *pbStack496;
  undefined *puStack488;
  byte *apbStack480 [5];
  undefined *puStack440;
  undefined *puStack432;
  undefined *puStack424;
  undefined *puStack416;
  undefined *puStack408;
  undefined8 uStack400;
  undefined8 uStack392;
  undefined8 uStack376;
  undefined8 uStack360;
  long lStack352;
  undefined8 uStack344;
  undefined *puStack336;
  undefined8 uStack320;
  undefined auStack312 [248];
  long lStack64;
  
  bVar13 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puStack336 = &UNK_00105659;
  uStack320 = param_2;
  lVar4 = func_0x00101a30(0x8000);
  if (lVar4 != 0) {
    unaff_R13 = auStack312;
    unaff_R12 = 0x8000;
    puStack336 = &UNK_0010567b;
    blake2b_init(unaff_R13,param_3);
    do {
      lVar10 = 0;
code_r0x00105691:
      puStack336 = &UNK_001056a9;
      lVar5 = func_0x00101860(lVar4 + lVar10,1,0x8000 - lVar10,param_1);
      lVar10 = lVar10 + lVar5;
      if (lVar10 != 0x8000) {
        if (lVar5 != 0) goto code_r0x00105688;
        puStack336 = &UNK_001056d5;
        iVar1 = func_0x00101850(param_1);
        uStack360 = 0xffffffff;
        if (iVar1 == 0) goto code_r0x001056de;
        goto code_r0x001056f5;
      }
      puStack336 = &UNK_001056c5;
      blake2b_update(unaff_R13,lVar4,0x8000);
    } while( true );
  }
  uStack360 = 0xffffffff;
code_r0x001056fd:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uStack360;
  }
  puStack336 = &UNK_00105744;
  func_0x001018e0();
  puVar7 = program_name;
  uStack376 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lStack352 = unaff_RBP;
  uStack344 = unaff_R12;
  puStack336 = unaff_R13;
  uVar2 = func_0x001018b0(0,&UNK_00109408,5);
  func_0x00101b50(stderr,1,uVar2,puVar7);
  do {
    func_0x00101b30(1);
    uVar2 = func_0x001018b0(0,&UNK_00109430,extraout_RDX);
    func_0x00101ab0(1,uVar2,puVar7,&UNK_001091f0,0x200);
    uVar2 = stdout;
    uVar3 = func_0x001018b0(0,&UNK_00109478,5);
    func_0x001019b0(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001018b0(0,&UNK_001094b0,5);
    func_0x001019b0(uVar3,uVar2);
    uVar2 = func_0x001018b0(0,&UNK_001094e0,5);
    func_0x00101ab0(1,uVar2,&UNK_001091f0);
    uVar2 = stdout;
    uVar3 = func_0x001018b0(0,&UNK_00109528,5);
    func_0x001019b0(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001018b0(0,&UNK_001095c0,5);
    func_0x001019b0(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001018b0(0,&UNK_001095f8,5);
    func_0x001019b0(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001018b0(0,&UNK_00109630,5);
    func_0x001019b0(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001018b0(0,&UNK_001096b0,5);
    func_0x001019b0(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001018b0(0,&UNK_00109868,5);
    func_0x001019b0(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001018b0(0,&UNK_00109898,5);
    func_0x001019b0(uVar3,uVar2);
    uVar2 = func_0x001018b0(0,&UNK_001098d0,5);
    func_0x00101ab0(1,uVar2,&UNK_001091f7);
    uStack400 = 0;
    uStack392 = 0;
    pbStack496 = &UNK_00109200;
    apbStack480[4] = &UNK_00109241;
    puStack488 = &UNK_00109202;
    puStack432 = &UNK_0010924b;
    apbStack480[0] = &UNK_0010927a;
    puStack416 = &UNK_00109255;
    apbStack480[1] = &UNK_00109212;
    apbStack480[2] = &UNK_00109228;
    apbStack480[3] = &UNK_00109232;
    puStack440 = &UNK_00109232;
    puStack424 = &UNK_00109232;
    puStack408 = &UNK_00109232;
    ppbVar6 = &pbStack496;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar9 = *ppbVar6;
      bVar11 = false;
      bVar12 = pbVar9 == (byte *)0x0;
      if (bVar12) break;
      lVar4 = 6;
      pbVar8 = &UNK_001091ea;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar11 = *pbVar8 < *pbVar9;
        bVar12 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
      } while (bVar12);
    } while ((!bVar11 && !bVar12) != bVar11);
    pbVar9 = ppbVar6[3];
    if (pbVar9 == (byte *)0x0) {
      uVar2 = func_0x001018b0(0,&UNK_0010925f,5);
      func_0x00101ab0(1,uVar2,&UNK_00109276,&UNK_00109a00);
      lVar4 = func_0x00101aa0(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x00101820(lVar4,&UNK_00109284,3), iVar1 != 0)) {
        pbVar9 = &UNK_001091ea;
        goto code_r0x001038d0;
      }
      pbVar9 = &UNK_001091ea;
      puVar7 = &UNK_0010921c;
      uVar2 = func_0x001018b0(0,&UNK_00109288,5);
      func_0x00101ab0(1,uVar2,&UNK_00109a00,&UNK_001091ea);
    }
    else {
      uVar2 = func_0x001018b0(0,&UNK_0010925f,5);
      func_0x00101ab0(1,uVar2,&UNK_00109276,&UNK_00109a00);
      lVar4 = func_0x00101aa0(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x00101820(lVar4,&UNK_00109284,3), iVar1 != 0)) {
code_r0x001038d0:
        uVar2 = stdout;
        uVar3 = func_0x001018b0(0,&UNK_00109a28,5);
        func_0x001019b0(uVar3,uVar2);
      }
      uVar2 = func_0x001018b0(0,&UNK_00109288,5);
      func_0x00101ab0(1,uVar2,&UNK_00109a00,&UNK_001091ea);
      puVar7 = &UNK_0010a4a1;
      if (pbVar9 == &UNK_001091ea) {
        puVar7 = &UNK_0010921c;
      }
    }
    uVar2 = func_0x001018b0(0,&UNK_00109a70,5);
    func_0x00101ab0(1,uVar2,pbVar9,puVar7);
  } while( true );
code_r0x00105688:
  puStack336 = &UNK_0010568d;
  iVar1 = func_0x00101a00();
  if (iVar1 != 0) {
code_r0x001056de:
    if (lVar10 != 0) {
      puStack336 = &UNK_00105736;
      blake2b_update(unaff_R13,lVar4,lVar10);
    }
    uStack360 = 0;
    puStack336 = &UNK_001056f5;
    blake2b_final(unaff_R13,uStack320,param_3);
code_r0x001056f5:
    puStack336 = &UNK_001056fd;
    func_0x001017f0(lVar4);
    unaff_RBP = lVar4;
    goto code_r0x001056fd;
  }
  goto code_r0x00105691;
}

