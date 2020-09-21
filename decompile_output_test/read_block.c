
ulong read_block(ulong param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_RDX;
  byte **ppbVar9;
  undefined *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined *puVar13;
  ulong unaff_R12;
  byte *pbVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte *pbStack208;
  undefined *puStack200;
  byte *apbStack192 [5];
  undefined *puStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined *puStack128;
  undefined *puStack120;
  undefined8 uStack112;
  undefined8 uStack104;
  undefined8 uStack88;
  ulong uStack56;
  
  lVar7 = in_stream;
  bVar17 = 0;
  uStack56 = unaff_R12;
  if ((param_1 == 0) || (uStack56 = param_1, bytes_per_block < param_1)) {
    puVar13 = &UNK_0010ad8d;
    func_0x00101950(&UNK_0010ad8d,&UNK_0010acec,0x508,__PRETTY_FUNCTION___7548);
    puVar10 = program_name;
    uVar8 = 5;
    uStack88 = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if ((int)puVar13 == 0) goto code_r0x00104dcd;
    uVar8 = func_0x001018b0(0,&UNK_0010b060,5);
    func_0x00101b10(stderr,1,uVar8,puVar10);
    do {
      func_0x00101af0((ulong)puVar13 & 0xffffffff);
      uVar8 = extraout_RDX;
code_r0x00104dcd:
      uVar8 = func_0x001018b0(0,&UNK_0010b088,uVar8);
      func_0x00101a70(1,uVar8,puVar10,puVar10,puVar10);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010b130,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010b1e8,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010b220,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010b3a8,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010b3f8,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010b518,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010b740,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010b770,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010b7a8,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010b8e8,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010ba00,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010baa8,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010bba8,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010bca0,5);
      func_0x001019b0(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x001018b0(0,&UNK_0010bd00,5);
      func_0x001019b0(uVar6,uVar8);
      uStack112 = 0;
      uStack104 = 0;
      pbStack208 = &UNK_0010adae;
      apbStack192[4] = &UNK_0010adef;
      puStack200 = &UNK_0010adb0;
      puStack144 = &UNK_0010adf9;
      apbStack192[0] = &UNK_0010ae28;
      puStack128 = &UNK_0010ae03;
      apbStack192[1] = &UNK_0010adc0;
      apbStack192[2] = &UNK_0010add6;
      apbStack192[3] = &UNK_0010ade0;
      puStack152 = &UNK_0010ade0;
      puStack136 = &UNK_0010ade0;
      puStack120 = &UNK_0010ade0;
      ppbVar9 = &pbStack208;
      do {
        ppbVar9 = ppbVar9;
        ppbVar9 = ppbVar9 + 2;
        pbVar14 = *ppbVar9;
        bVar15 = false;
        bVar16 = pbVar14 == (byte *)0x0;
        if (bVar16) break;
        lVar7 = 3;
        pbVar12 = &UNK_0010adab;
        do {
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          bVar15 = *pbVar12 < *pbVar14;
          bVar16 = *pbVar12 == *pbVar14;
          pbVar12 = pbVar12 + (ulong)bVar17 * -2 + 1;
          pbVar14 = pbVar14 + (ulong)bVar17 * -2 + 1;
        } while (bVar16);
      } while ((!bVar15 && !bVar16) != bVar15);
      pbVar14 = ppbVar9[3];
      if (pbVar14 == (byte *)0x0) {
        uVar8 = func_0x001018b0(0,&UNK_0010ae0d,5);
        func_0x00101a70(1,uVar8,&UNK_0010ae24,&UNK_0010bde8);
        lVar7 = func_0x00101a60(5,0);
        if (lVar7 != 0) {
          iVar3 = func_0x00101800(lVar7,&UNK_0010ae32,3);
          if (iVar3 != 0) {
            pbVar14 = &UNK_0010adab;
            goto code_r0x00105248;
          }
        }
        pbVar14 = &UNK_0010adab;
        puVar10 = &UNK_0010adca;
        uVar8 = func_0x001018b0(0,&UNK_0010ae36,5);
        func_0x00101a70(1,uVar8,&UNK_0010bde8,&UNK_0010adab);
      }
      else {
        uVar8 = func_0x001018b0(0,&UNK_0010ae0d,5);
        func_0x00101a70(1,uVar8,&UNK_0010ae24,&UNK_0010bde8);
        lVar7 = func_0x00101a60(5,0);
        if (lVar7 != 0) {
          iVar3 = func_0x00101800(lVar7,&UNK_0010ae32,3);
          if (iVar3 != 0) {
code_r0x00105248:
            uVar8 = stdout;
            uVar6 = func_0x001018b0(0,&UNK_0010be10,5);
            func_0x001019b0(uVar6,uVar8);
          }
        }
        uVar8 = func_0x001018b0(0,&UNK_0010ae36,5);
        func_0x00101a70(1,uVar8,&UNK_0010bde8,&UNK_0010adab);
        puVar10 = &UNK_0010cdc1;
        if (pbVar14 == &UNK_0010adab) {
          puVar10 = &UNK_0010adca;
        }
      }
      uVar8 = func_0x001018b0(0,&UNK_0010be58,5);
      func_0x00101a70(1,uVar8,pbVar14,puVar10);
    } while( true );
  }
  *param_3 = 0;
  if (lVar7 == 0) {
    uVar11 = 1;
  }
  else {
    lVar7 = 0;
    uVar11 = 1;
    while( true ) {
      lVar5 = func_0x00101870(lVar7 + param_2,1,param_1 - lVar7);
      *param_3 = *param_3 + lVar5;
      if (param_1 - lVar7 == lVar5) break;
      puVar4 = (uint *)func_0x001017f0();
      uVar1 = check_and_close((ulong)*puVar4);
      uVar2 = open_next_file();
      uVar11 = uVar11 & uVar1 & uVar2;
      if (in_stream == 0) break;
      lVar7 = *param_3;
    }
  }
  return (ulong)uVar11;
}

