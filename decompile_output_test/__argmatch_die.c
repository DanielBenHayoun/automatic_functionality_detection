
void __argmatch_die(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
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
  uStack48 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar2 = func_0x00102820(0,&UNK_00111828,5);
  func_0x00102b00(stderr,1,uVar2,puVar6);
  do {
    func_0x00102ae0(1);
    uVar2 = func_0x00102820(0,&UNK_00111850,extraout_RDX);
    func_0x00102a60(1,uVar2,puVar6,puVar6);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_001118b0,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_001118f8,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111948,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111998,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111a20,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111a70,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111bd0,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111c60,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111d70,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111dc0,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111e48,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111e78,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111eb0,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00111f38,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00112010,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_001120c0,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00112168,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_001121c8,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00112258,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_001123a8,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00112418,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00112510,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_001125b0,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_001126f8,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00112810,5);
    func_0x00102920(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00102820(0,&UNK_00112900,5);
    func_0x00102920(uVar3,uVar2);
    uStack72 = 0;
    uStack64 = 0;
    pbStack168 = &UNK_0011167c;
    apbStack152[4] = &UNK_001116bd;
    puStack160 = &UNK_0011167e;
    puStack104 = &UNK_001116c7;
    apbStack152[0] = &UNK_001116f6;
    puStack88 = &UNK_001116d1;
    apbStack152[1] = &UNK_0011168e;
    apbStack152[2] = &UNK_001116a4;
    apbStack152[3] = &UNK_001116ae;
    puStack112 = &UNK_001116ae;
    puStack96 = &UNK_001116ae;
    puStack80 = &UNK_001116ae;
    ppbVar5 = &pbStack168;
    do {
      ppbVar5 = ppbVar5;
      ppbVar5 = ppbVar5 + 2;
      pbVar8 = *ppbVar5;
      bVar9 = false;
      bVar10 = pbVar8 == (byte *)0x0;
      if (bVar10) break;
      lVar4 = 5;
      pbVar7 = &UNK_001117bb;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar9 = *pbVar7 < *pbVar8;
        bVar10 = *pbVar7 == *pbVar8;
        pbVar7 = pbVar7 + (ulong)bVar11 * -2 + 1;
        pbVar8 = pbVar8 + (ulong)bVar11 * -2 + 1;
      } while (bVar10);
    } while ((!bVar9 && !bVar10) != bVar9);
    pbVar8 = ppbVar5[3];
    if (pbVar8 == (byte *)0x0) {
      uVar2 = func_0x00102820(0,&UNK_001116db,5);
      func_0x00102a60(1,uVar2,&UNK_001116f2,&UNK_00112a50);
      lVar4 = func_0x00102a50(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x00102790(lVar4,&UNK_00111700,3), iVar1 != 0)) {
        pbVar8 = &UNK_001117bb;
        goto code_r0x00103cb0;
      }
      pbVar8 = &UNK_001117bb;
      puVar6 = &UNK_00111698;
      uVar2 = func_0x00102820(0,&UNK_00111704,5);
      func_0x00102a60(1,uVar2,&UNK_00112a50,&UNK_001117bb);
    }
    else {
      uVar2 = func_0x00102820(0,&UNK_001116db,5);
      func_0x00102a60(1,uVar2,&UNK_001116f2,&UNK_00112a50);
      lVar4 = func_0x00102a50(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x00102790(lVar4,&UNK_00111700,3), iVar1 != 0)) {
code_r0x00103cb0:
        uVar2 = stdout;
        uVar3 = func_0x00102820(0,&UNK_00112a78,5);
        func_0x00102920(uVar3,uVar2);
      }
      uVar2 = func_0x00102820(0,&UNK_00111704,5);
      func_0x00102a60(1,uVar2,&UNK_00112a50,&UNK_001117bb);
      puVar6 = &UNK_001132af;
      if (pbVar8 == &UNK_001117bb) {
        puVar6 = &UNK_00111698;
      }
    }
    uVar2 = func_0x00102820(0,&UNK_00112ac0,5);
    func_0x00102a60(1,uVar2,pbVar8,puVar6);
  } while( true );
}

