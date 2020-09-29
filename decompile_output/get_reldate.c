
void get_reldate(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  undefined *puVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  long in_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte *pbStack176;
  undefined *puStack168;
  byte *apbStack160 [5];
  undefined *puStack120;
  undefined *puStack112;
  undefined *puStack104;
  undefined *puStack96;
  undefined *puStack88;
  undefined8 uStack80;
  undefined8 uStack72;
  undefined8 uStack56;
  undefined8 uStack40;
  
  bVar13 = 0;
  cVar1 = parse_datetime();
  if (cVar1 != '\0') {
    return;
  }
  uStack40 = quote(param_2);
  uVar3 = func_0x001027f0(0,&UNK_0010f724,5);
  uVar9 = 1;
  func_0x00102a70(1,0,uVar3,uStack40);
  puVar7 = program_name;
  uVar3 = 5;
  uStack56 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((int)uVar9 == 0) goto code_r0x001036ed;
  uVar3 = func_0x001027f0(0,&UNK_0010f920,5);
  func_0x00102af0(stderr,1,uVar3,puVar7);
  do {
    func_0x00102ad0(uVar9 & 0xffffffff);
    uVar3 = extraout_RDX;
code_r0x001036ed:
    uVar3 = func_0x001027f0(0,&UNK_0010f948,uVar3);
    func_0x00102a40(1,uVar3,puVar7);
    uVar3 = stdout;
    uVar4 = func_0x001027f0(0,&UNK_0010f968,5);
    func_0x00102930(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001027f0(0,&UNK_0010fa90,5);
    func_0x00102930(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001027f0(0,&UNK_0010fae0,5);
    func_0x00102930(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001027f0(0,&UNK_0010fbb8,5);
    func_0x00102930(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001027f0(0,&UNK_0010fcc0,5);
    func_0x00102930(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001027f0(0,&UNK_0010fe18,5);
    func_0x00102930(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001027f0(0,&UNK_0010fe48,5);
    func_0x00102930(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001027f0(0,&UNK_0010fe80,5);
    func_0x00102930(uVar4,uVar3);
    uStack80 = 0;
    uStack72 = 0;
    pbStack176 = &UNK_0010f741;
    apbStack160[4] = &UNK_0010f782;
    puStack168 = &UNK_0010f743;
    puStack112 = &UNK_0010f78c;
    apbStack160[0] = &UNK_0010f7bb;
    puStack96 = &UNK_0010f796;
    apbStack160[1] = &UNK_0010f753;
    apbStack160[2] = &UNK_0010f769;
    apbStack160[3] = &UNK_0010f773;
    puStack120 = &UNK_0010f773;
    puStack104 = &UNK_0010f773;
    puStack88 = &UNK_0010f773;
    ppbVar6 = &pbStack176;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar10 = *ppbVar6;
      bVar11 = false;
      bVar12 = pbVar10 == (byte *)0x0;
      if (bVar12) break;
      lVar5 = 6;
      pbVar8 = &UNK_0010f73b;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar11 = *pbVar8 < *pbVar10;
        bVar12 = *pbVar8 == *pbVar10;
        pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
        pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
      } while (bVar12);
    } while ((!bVar11 && !bVar12) != bVar11);
    pbVar10 = ppbVar6[3];
    if (pbVar10 == (byte *)0x0) {
      uVar3 = func_0x001027f0(0,&UNK_0010f7a0,5);
      func_0x00102a40(1,uVar3,&UNK_0010f7b7,&UNK_0010fec8);
      lVar5 = func_0x00102a30(5,0);
      if (lVar5 != 0) {
        iVar2 = func_0x00102760(lVar5,&UNK_0010f7c5,3);
        if (iVar2 != 0) {
          pbVar10 = &UNK_0010f73b;
          goto code_r0x00103a60;
        }
      }
      pbVar10 = &UNK_0010f73b;
      puVar7 = &UNK_0010f75d;
      uVar3 = func_0x001027f0(0,&UNK_0010f7c9,5);
      func_0x00102a40(1,uVar3,&UNK_0010fec8,&UNK_0010f73b);
    }
    else {
      uVar3 = func_0x001027f0(0,&UNK_0010f7a0,5);
      func_0x00102a40(1,uVar3,&UNK_0010f7b7,&UNK_0010fec8);
      lVar5 = func_0x00102a30(5,0);
      if (lVar5 != 0) {
        iVar2 = func_0x00102760(lVar5,&UNK_0010f7c5,3);
        if (iVar2 != 0) {
code_r0x00103a60:
          uVar3 = stdout;
          uVar4 = func_0x001027f0(0,&UNK_0010fef0,5);
          func_0x00102930(uVar4,uVar3);
        }
      }
      uVar3 = func_0x001027f0(0,&UNK_0010f7c9,5);
      func_0x00102a40(1,uVar3,&UNK_0010fec8,&UNK_0010f73b);
      puVar7 = &UNK_00110366;
      if (pbVar10 == &UNK_0010f73b) {
        puVar7 = &UNK_0010f75d;
      }
    }
    uVar3 = func_0x001027f0(0,&UNK_0010ff38,5);
    func_0x00102a40(1,uVar3,pbVar10,puVar7);
  } while( true );
}

