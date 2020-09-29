
void print_DBL(void)

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
  byte *pbStack296;
  undefined *puStack288;
  byte *apbStack280 [5];
  undefined *puStack240;
  undefined *puStack232;
  undefined *puStack224;
  undefined *puStack216;
  undefined *puStack208;
  undefined8 uStack200;
  undefined8 uStack192;
  undefined8 uStack176;
  undefined *puStack160;
  undefined auStack128 [56];
  long lStack72;
  undefined *puStack64;
  undefined auStack56 [40];
  long lStack16;
  
  bVar13 = 0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  puStack64 = &UNK_0010228c;
  dtoastr(auStack56,0x28,1,0);
  puStack64 = &UNK_00102294;
  func_0x00101370(auStack56);
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack64 = &UNK_001022af;
  func_0x001013f0();
  puVar9 = auStack128;
  puStack160 = auStack128;
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  puStack64 = auStack56;
  ldtoastr(auStack128,0x2d,1,0);
  func_0x00101370();
  if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001013f0();
  puVar7 = program_name;
  uVar5 = 5;
  uStack176 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar1 = auStack128;
  if ((int)puVar9 == 0) goto code_r0x0010236d;
  uVar5 = func_0x001013c0(0,&UNK_00105ad0,5);
  func_0x00101580(stderr,1,uVar5,puVar7);
  do {
    func_0x00101560((ulong)puVar9 & 0xffffffff);
    uVar5 = extraout_RDX;
    puVar1 = puStack160;
code_r0x0010236d:
    puStack160 = puVar1;
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
    uStack200 = 0;
    uStack192 = 0;
    pbStack296 = &UNK_00105759;
    apbStack280[4] = &UNK_0010579a;
    puStack288 = &UNK_0010575b;
    puStack232 = &UNK_001057a4;
    apbStack280[0] = &UNK_001057d3;
    puStack216 = &UNK_001057ae;
    apbStack280[1] = &UNK_0010576b;
    apbStack280[2] = &UNK_00105781;
    apbStack280[3] = &UNK_0010578b;
    puStack240 = &UNK_0010578b;
    puStack224 = &UNK_0010578b;
    puStack208 = &UNK_0010578b;
    ppbVar6 = &pbStack296;
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

