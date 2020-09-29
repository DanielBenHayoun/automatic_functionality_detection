
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
  if (param_1 == 0) goto code_r0x0010181d;
  uVar4 = func_0x00101280(0,&UNK_00104988,5);
  func_0x00101420(stderr,1,uVar4,puVar6);
  do {
    func_0x00101400((ulong)param_1);
    uVar4 = extraout_RDX;
code_r0x0010181d:
    uVar4 = func_0x00101280(0,&UNK_001049b0,uVar4);
    func_0x001013c0(1,uVar4,puVar6,puVar6);
    uVar4 = stdout;
    uVar2 = func_0x00101280(0,&UNK_001049d8,5);
    func_0x00101320(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00101280(0,&UNK_00104a20,5);
    func_0x00101320(uVar2,uVar4);
    uVar4 = stdout;
    uVar2 = func_0x00101280(0,&UNK_00104a50,5);
    func_0x00101320(uVar2,uVar4);
    uStack72 = 0;
    uStack64 = 0;
    pbStack168 = &UNK_001048a8;
    apbStack152[4] = &UNK_001048e9;
    puStack160 = &UNK_001048aa;
    puStack104 = &UNK_001048f3;
    apbStack152[0] = &UNK_00104922;
    puStack88 = &UNK_001048fd;
    apbStack152[1] = &UNK_001048ba;
    apbStack152[2] = &UNK_001048d0;
    apbStack152[3] = &UNK_001048da;
    puStack112 = &UNK_001048da;
    puStack96 = &UNK_001048da;
    puStack80 = &UNK_001048da;
    ppbVar5 = &pbStack168;
    do {
      ppbVar5 = ppbVar5;
      ppbVar5 = ppbVar5 + 2;
      pbVar8 = *ppbVar5;
      bVar9 = false;
      bVar10 = pbVar8 == (byte *)0x0;
      if (bVar10) break;
      lVar3 = 4;
      pbVar7 = &UNK_001048a4;
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
      uVar4 = func_0x00101280(0,&UNK_00104907,5);
      func_0x001013c0(1,uVar4,&UNK_0010491e,&UNK_00104a88);
      lVar3 = func_0x001013b0(5,0);
      if (lVar3 != 0) {
        iVar1 = func_0x00101210(lVar3,&UNK_0010492c,3);
        if (iVar1 != 0) {
          pbVar8 = &UNK_001048a4;
          goto code_r0x00101ad8;
        }
      }
      pbVar8 = &UNK_001048a4;
      puVar6 = &UNK_001048c4;
      uVar4 = func_0x00101280(0,&UNK_00104930,5);
      func_0x001013c0(1,uVar4,&UNK_00104a88,&UNK_001048a4);
    }
    else {
      uVar4 = func_0x00101280(0,&UNK_00104907,5);
      func_0x001013c0(1,uVar4,&UNK_0010491e,&UNK_00104a88);
      lVar3 = func_0x001013b0(5,0);
      if (lVar3 != 0) {
        iVar1 = func_0x00101210(lVar3,&UNK_0010492c,3);
        if (iVar1 != 0) {
code_r0x00101ad8:
          uVar4 = stdout;
          uVar2 = func_0x00101280(0,&UNK_00104ab0,5);
          func_0x00101320(uVar2,uVar4);
        }
      }
      uVar4 = func_0x00101280(0,&UNK_00104930,5);
      func_0x001013c0(1,uVar4,&UNK_00104a88,&UNK_001048a4);
      puVar6 = &UNK_001050c1;
      if (pbVar8 == &UNK_001048a4) {
        puVar6 = &UNK_001048c4;
      }
    }
    uVar4 = func_0x00101280(0,&UNK_00104af8,5);
    func_0x001013c0(1,uVar4,pbVar8,puVar6);
  } while( true );
}

