
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
  uVar2 = func_0x00101800(0,&UNK_00106918,5);
  func_0x00101a70(stderr,1,uVar2,puVar6);
  do {
    func_0x00101a50(1);
    uVar2 = func_0x00101800(0,&UNK_00106940,extraout_RDX);
    func_0x001019f0(1,uVar2,puVar6);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106968,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106a18,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106a68,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106af8,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106bf0,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106c30,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106cc8,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106d80,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106dc0,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106e08,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106e38,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106e70,5);
    func_0x00101910(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x00101800(0,&UNK_00106ee8,5);
    func_0x00101910(uVar3,uVar2);
    uStack72 = 0;
    uStack64 = 0;
    pbStack168 = &UNK_00106756;
    apbStack152[4] = &UNK_00106797;
    puStack160 = &UNK_00106758;
    puStack104 = &UNK_001067a1;
    apbStack152[0] = &UNK_001067d0;
    puStack88 = &UNK_001067ab;
    apbStack152[1] = &UNK_00106768;
    apbStack152[2] = &UNK_0010677e;
    apbStack152[3] = &UNK_00106788;
    puStack112 = &UNK_00106788;
    puStack96 = &UNK_00106788;
    puStack80 = &UNK_00106788;
    ppbVar5 = &pbStack168;
    do {
      ppbVar5 = ppbVar5;
      ppbVar5 = ppbVar5 + 2;
      pbVar8 = *ppbVar5;
      bVar9 = false;
      bVar10 = pbVar8 == (byte *)0x0;
      if (bVar10) break;
      lVar4 = 5;
      pbVar7 = &UNK_00106751;
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
      uVar2 = func_0x00101800(0,&UNK_001067b5,5);
      func_0x001019f0(1,uVar2,&UNK_001067cc,&UNK_00106fb8);
      lVar4 = func_0x001019e0(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x001017a0(lVar4,&UNK_001067da,3), iVar1 != 0)) {
        pbVar8 = &UNK_00106751;
        goto code_r0x00102da8;
      }
      pbVar8 = &UNK_00106751;
      puVar6 = &UNK_00106772;
      uVar2 = func_0x00101800(0,&UNK_001067de,5);
      func_0x001019f0(1,uVar2,&UNK_00106fb8,&UNK_00106751);
    }
    else {
      uVar2 = func_0x00101800(0,&UNK_001067b5,5);
      func_0x001019f0(1,uVar2,&UNK_001067cc,&UNK_00106fb8);
      lVar4 = func_0x001019e0(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x001017a0(lVar4,&UNK_001067da,3), iVar1 != 0)) {
code_r0x00102da8:
        uVar2 = stdout;
        uVar3 = func_0x00101800(0,&UNK_00106fe0,5);
        func_0x00101910(uVar3,uVar2);
      }
      uVar2 = func_0x00101800(0,&UNK_001067de,5);
      func_0x001019f0(1,uVar2,&UNK_00106fb8,&UNK_00106751);
      puVar6 = &UNK_001077a1;
      if (pbVar8 == &UNK_00106751) {
        puVar6 = &UNK_00106772;
      }
    }
    uVar2 = func_0x00101800(0,&UNK_00107028,5);
    func_0x001019f0(1,uVar2,pbVar8,puVar6);
  } while( true );
}

