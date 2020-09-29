
undefined8 get_first_line_in_buffer(void)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  byte **ppbVar7;
  undefined *puVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  byte bVar14;
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
  
  bVar14 = 0;
  if (head != 0) {
    return *(undefined8 *)(head + 0x18);
  }
  if (have_read_eof == '\0') {
    cVar1 = load_buffer_part_5();
    if (cVar1 != '\0') {
      return *(undefined8 *)(head + 0x18);
    }
  }
  uStack40 = func_0x00101bf0(0,&UNK_00116014,5);
  puVar3 = (uint *)func_0x00101b20();
  uVar10 = 1;
  func_0x00101e60(1,(ulong)*puVar3,uStack40);
  puVar8 = program_name;
  uVar6 = 5;
  uStack56 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((int)uVar10 == 0) goto code_r0x00103f6d;
  uVar6 = func_0x00101bf0(0,&UNK_00116228,5);
  func_0x00101f00(stderr,1,uVar6,puVar8);
  do {
    func_0x00101ee0(uVar10 & 0xffffffff);
    uVar6 = extraout_RDX;
code_r0x00103f6d:
    uVar6 = func_0x00101bf0(0,&UNK_00116250,uVar6);
    func_0x00101e30(1,uVar6,puVar8);
    uVar6 = stdout;
    uVar4 = func_0x00101bf0(0,&UNK_00116278,5);
    func_0x00101d20(uVar4,uVar6);
    uVar6 = stdout;
    uVar4 = func_0x00101bf0(0,&UNK_00116300,5);
    func_0x00101d20(uVar4,uVar6);
    uVar6 = stdout;
    uVar4 = func_0x00101bf0(0,&UNK_00116328,5);
    func_0x00101d20(uVar4,uVar6);
    uVar6 = stdout;
    uVar4 = func_0x00101bf0(0,&UNK_00116378,5);
    func_0x00101d20(uVar4,uVar6);
    uVar6 = stdout;
    uVar4 = func_0x00101bf0(0,&UNK_00116438,5);
    func_0x00101d20(uVar4,uVar6);
    uVar6 = stdout;
    uVar4 = func_0x00101bf0(0,&UNK_00116480,5);
    func_0x00101d20(uVar4,uVar6);
    uVar6 = stdout;
    uVar4 = func_0x00101bf0(0,&UNK_00116548,5);
    func_0x00101d20(uVar4,uVar6);
    uVar6 = stdout;
    uVar4 = func_0x00101bf0(0,&UNK_00116578,5);
    func_0x00101d20(uVar4,uVar6);
    uVar6 = stdout;
    uVar4 = func_0x00101bf0(0,&UNK_001165b0,5);
    func_0x00101d20(uVar4,uVar6);
    uStack80 = 0;
    uStack72 = 0;
    pbStack176 = &UNK_0011602d;
    apbStack160[4] = &UNK_0011606e;
    puStack168 = &UNK_0011602f;
    puStack112 = &UNK_00116078;
    apbStack160[0] = &UNK_001160a7;
    puStack96 = &UNK_00116082;
    apbStack160[1] = &UNK_0011603f;
    apbStack160[2] = &UNK_00116055;
    apbStack160[3] = &UNK_0011605f;
    puStack120 = &UNK_0011605f;
    puStack104 = &UNK_0011605f;
    puStack88 = &UNK_0011605f;
    ppbVar7 = &pbStack176;
    do {
      ppbVar7 = ppbVar7;
      ppbVar7 = ppbVar7 + 2;
      pbVar11 = *ppbVar7;
      bVar12 = false;
      bVar13 = pbVar11 == (byte *)0x0;
      if (bVar13) break;
      lVar5 = 7;
      pbVar9 = &UNK_00116026;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar12 = *pbVar9 < *pbVar11;
        bVar13 = *pbVar9 == *pbVar11;
        pbVar9 = pbVar9 + (ulong)bVar14 * -2 + 1;
        pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
      } while (bVar13);
    } while ((!bVar12 && !bVar13) != bVar12);
    pbVar11 = ppbVar7[3];
    if (pbVar11 == (byte *)0x0) {
      uVar6 = func_0x00101bf0(0,&UNK_0011608c,5);
      func_0x00101e30(1,uVar6,&UNK_001160a3,&UNK_00116770);
      lVar5 = func_0x00101e20(5,0);
      if (lVar5 != 0) {
        iVar2 = func_0x00101b40(lVar5,&UNK_001160b1,3);
        if (iVar2 != 0) {
          pbVar11 = &UNK_00116026;
          goto code_r0x00104300;
        }
      }
      pbVar11 = &UNK_00116026;
      puVar8 = &UNK_00116049;
      uVar6 = func_0x00101bf0(0,&UNK_001160b5,5);
      func_0x00101e30(1,uVar6,&UNK_00116770,&UNK_00116026);
    }
    else {
      uVar6 = func_0x00101bf0(0,&UNK_0011608c,5);
      func_0x00101e30(1,uVar6,&UNK_001160a3,&UNK_00116770);
      lVar5 = func_0x00101e20(5,0);
      if (lVar5 != 0) {
        iVar2 = func_0x00101b40(lVar5,&UNK_001160b1,3);
        if (iVar2 != 0) {
code_r0x00104300:
          uVar6 = stdout;
          uVar4 = func_0x00101bf0(0,&UNK_00116798,5);
          func_0x00101d20(uVar4,uVar6);
        }
      }
      uVar6 = func_0x00101bf0(0,&UNK_001160b5,5);
      func_0x00101e30(1,uVar6,&UNK_00116770,&UNK_00116026);
      puVar8 = &UNK_001170c1;
      if (pbVar11 == &UNK_00116026) {
        puVar8 = &UNK_00116049;
      }
    }
    uVar6 = func_0x00101bf0(0,&UNK_001167e0,5);
    func_0x00101e30(1,uVar6,pbVar11,puVar8);
  } while( true );
}

