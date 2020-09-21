
void usage(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  byte **ppbVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  long in_FS_OFFSET;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte *pbStack168;
  undefined *puStack160;
  byte *apbStack152 [5];
  undefined *puStack112;
  undefined *puStack104;
  undefined *puStack96;
  undefined *puStack88;
  undefined *puStack80;
  undefined8 uStack72;
  undefined8 uStack64;
  undefined8 uStack48;
  
  puVar6 = program_name;
  bVar11 = 0;
  uVar4 = 5;
  uStack48 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto code_r0x00104dcd;
  uVar4 = func_0x00102190(0,&UNK_0010f368,5);
  func_0x00102530(stderr,1,uVar4,puVar6);
  do {
    func_0x00102510((ulong)param_1);
    uVar4 = extraout_RDX;
code_r0x00104dcd:
    uVar4 = func_0x00102190(0,&UNK_0010f390,uVar4);
    func_0x00102470(1,uVar4,puVar6);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010f3b8,5);
    func_0x00102310(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010f420,5);
    func_0x00102310(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010f470,5);
    func_0x00102310(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010f610,5);
    func_0x00102310(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010f710,5);
    func_0x00102310(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010f820,5);
    func_0x00102310(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010f8a8,5);
    func_0x00102310(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010f988,5);
    func_0x00102310(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010f9b8,5);
    func_0x00102310(uVar2,uVar4);
    uVar4 = func_0x00102190(0,&UNK_0010f9f0,5);
    func_0x00102470(1,uVar4,&UNK_0010f05d);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010fad0,5);
    func_0x00102310(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00102190(0,&UNK_0010fba8,5);
    func_0x00102310(uVar2,uVar4);
    uStack72 = 0;
    uStack64 = 0;
    pbStack168 = &UNK_0010f060;
    apbStack152[4] = &UNK_0010f0a1;
    puStack160 = &UNK_0010f062;
    puStack104 = &UNK_0010f0ab;
    apbStack152[0] = &UNK_0010f0da;
    puStack88 = &UNK_0010f0b5;
    apbStack152[1] = &UNK_0010f072;
    apbStack152[2] = &UNK_0010f088;
    apbStack152[3] = &UNK_0010f092;
    puStack112 = &UNK_0010f092;
    puStack96 = &UNK_0010f092;
    puStack80 = &UNK_0010f092;
    ppbVar5 = &pbStack168;
    do {
      ppbVar5 = ppbVar5;
      ppbVar5 = ppbVar5 + 2;
      pbVar8 = *ppbVar5;
      bVar9 = false;
      bVar10 = pbVar8 == (byte *)0x0;
      if (bVar10) break;
      lVar3 = 3;
      pbVar7 = &UNK_0010f05a;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar9 = *pbVar7 < *pbVar8;
        bVar10 = *pbVar7 == *pbVar8;
        pbVar7 = pbVar7 + (ulong)bVar11 * -2 + 1;
        pbVar8 = pbVar8 + (ulong)bVar11 * -2 + 1;
      } while (bVar10);
    } while ((!bVar9 && !bVar10) != bVar9);
    pbVar8 = ppbVar5[3];
    if (pbVar8 == (byte *)0x0) {
      uVar4 = func_0x00102190(0,&UNK_0010f0bf,5);
      func_0x00102470(1,uVar4,&UNK_0010f0d6,&UNK_0010fc88);
      lVar3 = func_0x00102460(5,0);
      if (lVar3 != 0) {
        iVar1 = func_0x001020c0(lVar3,&UNK_0010f0e4,3);
        if (iVar1 != 0) {
          pbVar8 = &UNK_0010f05a;
          goto code_r0x001051d8;
        }
      }
      pbVar8 = &UNK_0010f05a;
      puVar6 = &UNK_0010f07c;
      uVar4 = func_0x00102190(0,&UNK_0010f0e8,5);
      func_0x00102470(1,uVar4,&UNK_0010fc88,&UNK_0010f05a);
    }
    else {
      uVar4 = func_0x00102190(0,&UNK_0010f0bf,5);
      func_0x00102470(1,uVar4,&UNK_0010f0d6,&UNK_0010fc88);
      lVar3 = func_0x00102460(5,0);
      if (lVar3 != 0) {
        iVar1 = func_0x001020c0(lVar3,&UNK_0010f0e4,3);
        if (iVar1 != 0) {
code_r0x001051d8:
          uVar4 = stdout;
          uVar2 = func_0x00102190(0,&UNK_0010fcb0,5);
          func_0x00102310(uVar2,uVar4);
        }
      }
      uVar4 = func_0x00102190(0,&UNK_0010f0e8,5);
      func_0x00102470(1,uVar4,&UNK_0010fc88,&UNK_0010f05a);
      puVar6 = &UNK_00110601;
      if (pbVar8 == &UNK_0010f05a) {
        puVar6 = &UNK_0010f07c;
      }
    }
    uVar4 = func_0x00102190(0,&UNK_0010fcf8,5);
    func_0x00102470(1,uVar4,pbVar8,puVar6);
  } while( true );
}

