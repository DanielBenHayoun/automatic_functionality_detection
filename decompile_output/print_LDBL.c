
void print_LDBL(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  undefined *puVar7;
  byte *pbVar8;
  undefined *puVar9;
  byte *pbVar10;
  long in_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte *pbStack240;
  undefined *puStack232;
  byte *apbStack224 [5];
  undefined *puStack184;
  undefined *puStack176;
  undefined *puStack168;
  undefined *puStack160;
  undefined *puStack152;
  undefined8 uStack144;
  undefined8 uStack136;
  undefined8 uStack120;
  undefined *puStack104;
  undefined auStack72 [56];
  long lStack16;
  
  bVar13 = 0;
  puVar9 = auStack72;
  puStack104 = auStack72;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  ldtoastr(auStack72,0x2d,1,0);
  func_0x00101370();
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001013f0();
  puVar7 = program_name;
  uVar5 = 5;
  uStack120 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar1 = auStack72;
  if ((int)puVar9 == 0) goto code_r0x0010236d;
  uVar5 = func_0x001013c0(0,&UNK_00105ad0,5);
  func_0x00101580(stderr,1,uVar5,puVar7);
  do {
    func_0x00101560((ulong)puVar9 & 0xffffffff);
    uVar5 = extraout_RDX;
    puVar1 = puStack104;
code_r0x0010236d:
    puStack104 = puVar1;
    uVar5 = func_0x001013c0(0,&UNK_0010574e,uVar5);
    func_0x00101510(1,uVar5,puVar7);
    uVar5 = stdout;
    uVar3 = func_0x001013c0(0,&UNK_00105af8,5);
    func_0x00101470(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x001013c0(0,&UNK_00105b48,5);
    func_0x00101470(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x001013c0(0,&UNK_00105b78,5);
    func_0x00101470(uVar3,uVar5);
    uStack144 = 0;
    uStack136 = 0;
    pbStack240 = &UNK_00105759;
    apbStack224[4] = &UNK_0010579a;
    puStack232 = &UNK_0010575b;
    puStack176 = &UNK_001057a4;
    apbStack224[0] = &UNK_001057d3;
    puStack160 = &UNK_001057ae;
    apbStack224[1] = &UNK_0010576b;
    apbStack224[2] = &UNK_00105781;
    apbStack224[3] = &UNK_0010578b;
    puStack184 = &UNK_0010578b;
    puStack168 = &UNK_0010578b;
    puStack152 = &UNK_0010578b;
    ppbVar6 = &pbStack240;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar10 = *ppbVar6;
      bVar11 = false;
      bVar12 = pbVar10 == (byte *)0x0;
      if (bVar12) break;
      lVar4 = 10;
      pbVar8 = &UNK_00105744;
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
      uVar5 = func_0x001013c0(0,&UNK_001057b8,5);
      func_0x00101510(1,uVar5,&UNK_001057cf,&UNK_00105bb0);
      lVar4 = func_0x00101500(5,0);
      if (lVar4 != 0) {
        iVar2 = func_0x00101340(lVar4,&UNK_001057dd,3);
        if (iVar2 != 0) {
          pbVar10 = &UNK_00105744;
          goto code_r0x00102628;
        }
      }
      pbVar10 = &UNK_00105744;
      puVar7 = &UNK_00105775;
      uVar5 = func_0x001013c0(0,&UNK_001057e1,5);
      func_0x00101510(1,uVar5,&UNK_00105bb0,&UNK_00105744);
    }
    else {
      uVar5 = func_0x001013c0(0,&UNK_001057b8,5);
      func_0x00101510(1,uVar5,&UNK_001057cf,&UNK_00105bb0);
      lVar4 = func_0x00101500(5,0);
      if (lVar4 != 0) {
        iVar2 = func_0x00101340(lVar4,&UNK_001057dd,3);
        if (iVar2 != 0) {
code_r0x00102628:
          uVar5 = stdout;
          uVar3 = func_0x001013c0(0,&UNK_00105bd8,5);
          func_0x00101470(uVar3,uVar5);
        }
      }
      uVar5 = func_0x001013c0(0,&UNK_001057e1,5);
      func_0x00101510(1,uVar5,&UNK_00105bb0,&UNK_00105744);
      puVar7 = &UNK_00106241;
      if (pbVar10 == &UNK_00105744) {
        puVar7 = &UNK_00105775;
      }
    }
    uVar5 = func_0x001013c0(0,&UNK_00105c20,5);
    func_0x00101510(1,uVar5,pbVar10,puVar7);
  } while( true );
}

