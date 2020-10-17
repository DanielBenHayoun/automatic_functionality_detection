
ulong isdir(undefined8 param_1)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  undefined *puVar7;
  undefined8 unaff_RBP;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  long in_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte *pbStack352;
  undefined *puStack344;
  byte *apbStack336 [5];
  undefined *puStack296;
  undefined *puStack288;
  undefined *puStack280;
  undefined *puStack272;
  undefined *puStack264;
  undefined8 uStack256;
  undefined8 uStack248;
  undefined8 uStack232;
  undefined8 uStack216;
  undefined8 uStack208;
  undefined auStack184 [24];
  uint uStack160;
  long lStack32;
  
  bVar13 = 0;
  uVar9 = 1;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = func_0x00101690(1,param_1,auStack184);
  if (iVar1 == 0) {
    if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)(uStack160 & 0xf000 | (uint)((uStack160 & 0xf000) == 0x4000));
    }
  }
  else {
    unaff_RBP = quotearg_style(4,param_1);
    param_1 = func_0x00101550(0,&UNK_00106f44,5);
    puVar2 = (uint *)func_0x001014d0();
    uVar9 = 1;
    func_0x00101720(1,(ulong)*puVar2,param_1,unaff_RBP);
  }
  func_0x00101590();
  puVar7 = program_name;
  uVar5 = 5;
  uStack232 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack216 = param_1;
  uStack208 = unaff_RBP;
  if ((int)uVar9 == 0) goto code_r0x00101f8d;
  uVar5 = func_0x00101550(0,&UNK_001070c0,5);
  func_0x00101770(stderr,1,uVar5,puVar7);
  do {
    func_0x00101750(uVar9 & 0xffffffff);
    uVar5 = extraout_RDX;
code_r0x00101f8d:
    uVar5 = func_0x00101550(0,&UNK_001070e8,uVar5);
    func_0x00101700(1,uVar5,puVar7);
    uVar5 = stdout;
    uVar3 = func_0x00101550(0,&UNK_00107108,5);
    func_0x00101640(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101550(0,&UNK_00107158,5);
    func_0x00101640(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101550(0,&UNK_001073d0,5);
    func_0x00101640(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101550(0,&UNK_00107400,5);
    func_0x00101640(uVar3,uVar5);
    uStack256 = 0;
    uStack248 = 0;
    pbStack352 = &UNK_00106f5c;
    apbStack336[4] = &UNK_00106f9d;
    puStack344 = &UNK_00106f5e;
    puStack288 = &UNK_00106fa7;
    apbStack336[0] = &UNK_00106fd6;
    puStack272 = &UNK_00106fb1;
    apbStack336[1] = &UNK_00106f6e;
    apbStack336[2] = &UNK_00106f84;
    apbStack336[3] = &UNK_00106f8e;
    puStack296 = &UNK_00106f8e;
    puStack280 = &UNK_00106f8e;
    puStack264 = &UNK_00106f8e;
    ppbVar6 = &pbStack352;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar10 = *ppbVar6;
      bVar11 = false;
      bVar12 = pbVar10 == (byte *)0x0;
      if (bVar12) break;
      lVar4 = 9;
      pbVar8 = &UNK_00106f53;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar11 = *pbVar8 < *pbVar10;
        bVar12 = *pbVar8 == *pbVar10;
        pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
        pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
      } while (bVar12);
    } while ((!bVar11 && !bVar12) != bVar11);
    pbVar10 = ppbVar6[3];
    if (pbVar10 == (byte *)0x0) {
      uVar5 = func_0x00101550(0,&UNK_00106fbb,5);
      func_0x00101700(1,uVar5,&UNK_00106fd2,&UNK_00107438);
      lVar4 = func_0x001016f0(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x001014e0(lVar4,&UNK_00106fe0,3);
        if (iVar1 != 0) {
          pbVar10 = &UNK_00106f53;
          goto code_r0x00102270;
        }
      }
      pbVar10 = &UNK_00106f53;
      puVar7 = &UNK_00106f78;
      uVar5 = func_0x00101550(0,&UNK_00106fe4,5);
      func_0x00101700(1,uVar5,&UNK_00107438,&UNK_00106f53);
    }
    else {
      uVar5 = func_0x00101550(0,&UNK_00106fbb,5);
      func_0x00101700(1,uVar5,&UNK_00106fd2,&UNK_00107438);
      lVar4 = func_0x001016f0(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x001014e0(lVar4,&UNK_00106fe0,3);
        if (iVar1 != 0) {
code_r0x00102270:
          uVar5 = stdout;
          uVar3 = func_0x00101550(0,&UNK_00107460,5);
          func_0x00101640(uVar3,uVar5);
        }
      }
      uVar5 = func_0x00101550(0,&UNK_00106fe4,5);
      func_0x00101700(1,uVar5,&UNK_00107438,&UNK_00106f53);
      puVar7 = &UNK_00107b41;
      if (pbVar10 == &UNK_00106f53) {
        puVar7 = &UNK_00106f78;
      }
    }
    uVar5 = func_0x00101550(0,&UNK_001074a8,5);
    func_0x00101700(1,uVar5,pbVar10,puVar7);
  } while( true );
}

