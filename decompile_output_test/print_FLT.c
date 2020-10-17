
void print_FLT(void)

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
  undefined *puStack216;
  undefined auStack184 [56];
  long lStack128;
  undefined *puStack120;
  undefined auStack112 [40];
  long lStack72;
  undefined *puStack64;
  undefined auStack56 [40];
  long lStack16;
  
  bVar13 = 0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  puStack64 = &UNK_0010223c;
  ftoastr(auStack56,0x1f,1,0);
  puStack64 = &UNK_00102244;
  func_0x00101370(auStack56);
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack64 = &UNK_0010225f;
  func_0x001013f0();
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  puStack120 = &UNK_0010228c;
  puStack64 = auStack56;
  dtoastr(auStack112,0x28,1,0);
  puStack120 = &UNK_00102294;
  func_0x00101370(auStack112);
  if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack120 = &UNK_001022af;
  func_0x001013f0();
  puVar9 = auStack184;
  puStack216 = auStack184;
  lStack128 = *(long *)(in_FS_OFFSET + 0x28);
  puStack120 = auStack112;
  ldtoastr(auStack184,0x2d,1,0);
  func_0x00101370();
  if (lStack128 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001013f0();
  puVar7 = program_name;
  uVar5 = 5;
  uStack232 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puVar1 = auStack184;
  if ((int)puVar9 == 0) goto code_r0x0010236d;
  uVar5 = func_0x001013c0(0,&UNK_00105ad0,5);
  func_0x00101580(stderr,1,uVar5,puVar7);
  do {
    func_0x00101560((ulong)puVar9 & 0xffffffff);
    uVar5 = extraout_RDX;
    puVar1 = puStack216;
code_r0x0010236d:
    puStack216 = puVar1;
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
    uStack256 = 0;
    uStack248 = 0;
    pbStack352 = &UNK_00105759;
    apbStack336[4] = &UNK_0010579a;
    puStack344 = &UNK_0010575b;
    puStack288 = &UNK_001057a4;
    apbStack336[0] = &UNK_001057d3;
    puStack272 = &UNK_001057ae;
    apbStack336[1] = &UNK_0010576b;
    apbStack336[2] = &UNK_00105781;
    apbStack336[3] = &UNK_0010578b;
    puStack296 = &UNK_0010578b;
    puStack280 = &UNK_0010578b;
    puStack264 = &UNK_0010578b;
    ppbVar6 = &pbStack352;
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

