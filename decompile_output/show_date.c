
undefined8 show_date(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  byte **ppbVar5;
  undefined *puVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  byte *pbStack304;
  undefined *puStack296;
  byte *apbStack288 [5];
  undefined *puStack248;
  undefined *puStack240;
  undefined *puStack232;
  undefined *puStack224;
  undefined *puStack216;
  undefined8 uStack208;
  undefined8 uStack200;
  undefined8 uStack184;
  undefined *puStack168;
  undefined8 uStack160;
  undefined1 *puStack152;
  undefined8 uStack136;
  ulong uStack128;
  undefined auStack120 [64];
  undefined auStack56 [24];
  long lStack32;
  
  bVar12 = 0;
  puStack168 = auStack120;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  uStack136 = param_2;
  uStack128 = param_3;
  lVar3 = localtime_rz(param_4,&uStack136,puStack168);
  if (lVar3 == 0) {
    imaxtostr(uStack136,auStack56);
    puStack168 = (undefined *)quote();
    uVar4 = func_0x00102820(0,&UNK_00111664,5);
    uVar8 = 0;
    func_0x00102a90(0,0,uVar4,puStack168);
    uVar4 = 0;
  }
  else {
    if (param_1 == rfc_email_format) {
      func_0x00102a50(2,&UNK_0011357a);
      fprintftime(stdout,rfc_email_format,puStack168,param_4,uStack128 & 0xffffffff);
      func_0x00102a50(2,&UNK_001132af);
    }
    else {
      fprintftime(stdout,param_1,puStack168,param_4,uStack128 & 0xffffffff);
    }
    uVar8 = stdout;
    puVar6 = *(undefined **)(stdout + 0x28);
    if (puVar6 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar6 + 1;
      *puVar6 = 10;
      uVar4 = 1;
    }
    else {
      func_0x001028a0(stdout,10);
      uVar4 = 1;
    }
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x00102850();
  puVar6 = program_name;
  uVar4 = 5;
  uStack184 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack160 = param_4;
  puStack152 = param_1;
  if ((int)uVar8 == 0) goto code_r0x0010369d;
  uVar4 = func_0x00102820(0,&UNK_00111828,5);
  func_0x00102b00(stderr,1,uVar4,puVar6);
  do {
    func_0x00102ae0(uVar8 & 0xffffffff);
    uVar4 = extraout_RDX;
code_r0x0010369d:
    uVar4 = func_0x00102820(0,&UNK_00111850,uVar4);
    func_0x00102a60(1,uVar4,puVar6,puVar6);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_001118b0,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_001118f8,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111948,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111998,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111a20,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111a70,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111bd0,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111c60,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111d70,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111dc0,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111e48,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111e78,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111eb0,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00111f38,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00112010,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_001120c0,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00112168,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_001121c8,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00112258,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_001123a8,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00112418,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00112510,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_001125b0,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_001126f8,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00112810,5);
    func_0x00102920(uVar4,uVar1);
    uVar1 = stdout;
    uVar4 = func_0x00102820(0,&UNK_00112900,5);
    func_0x00102920(uVar4,uVar1);
    uStack208 = 0;
    uStack200 = 0;
    pbStack304 = &UNK_0011167c;
    apbStack288[4] = &UNK_001116bd;
    puStack296 = &UNK_0011167e;
    puStack240 = &UNK_001116c7;
    apbStack288[0] = &UNK_001116f6;
    puStack224 = &UNK_001116d1;
    apbStack288[1] = &UNK_0011168e;
    apbStack288[2] = &UNK_001116a4;
    apbStack288[3] = &UNK_001116ae;
    puStack248 = &UNK_001116ae;
    puStack232 = &UNK_001116ae;
    puStack216 = &UNK_001116ae;
    ppbVar5 = &pbStack304;
    do {
      ppbVar5 = ppbVar5;
      ppbVar5 = ppbVar5 + 2;
      pbVar9 = *ppbVar5;
      bVar10 = false;
      bVar11 = pbVar9 == (byte *)0x0;
      if (bVar11) break;
      lVar3 = 5;
      pbVar7 = &UNK_001117bb;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar10 = *pbVar7 < *pbVar9;
        bVar11 = *pbVar7 == *pbVar9;
        pbVar7 = pbVar7 + (ulong)bVar12 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar12 * -2 + 1;
      } while (bVar11);
    } while ((!bVar10 && !bVar11) != bVar10);
    pbVar9 = ppbVar5[3];
    if (pbVar9 == (byte *)0x0) {
      uVar4 = func_0x00102820(0,&UNK_001116db,5);
      func_0x00102a60(1,uVar4,&UNK_001116f2,&UNK_00112a50);
      lVar3 = func_0x00102a50(5,0);
      if (lVar3 != 0) {
        iVar2 = func_0x00102790(lVar3,&UNK_00111700,3);
        if (iVar2 != 0) {
          pbVar9 = &UNK_001117bb;
          goto code_r0x00103cb0;
        }
      }
      pbVar9 = &UNK_001117bb;
      puVar6 = &UNK_00111698;
      uVar4 = func_0x00102820(0,&UNK_00111704,5);
      func_0x00102a60(1,uVar4,&UNK_00112a50,&UNK_001117bb);
    }
    else {
      uVar4 = func_0x00102820(0,&UNK_001116db,5);
      func_0x00102a60(1,uVar4,&UNK_001116f2,&UNK_00112a50);
      lVar3 = func_0x00102a50(5,0);
      if (lVar3 != 0) {
        iVar2 = func_0x00102790(lVar3,&UNK_00111700,3);
        if (iVar2 != 0) {
code_r0x00103cb0:
          uVar1 = stdout;
          uVar4 = func_0x00102820(0,&UNK_00112a78,5);
          func_0x00102920(uVar4,uVar1);
        }
      }
      uVar4 = func_0x00102820(0,&UNK_00111704,5);
      func_0x00102a60(1,uVar4,&UNK_00112a50,&UNK_001117bb);
      puVar6 = &UNK_001132af;
      if (pbVar9 == &UNK_001117bb) {
        puVar6 = &UNK_00111698;
      }
    }
    uVar4 = func_0x00102820(0,&UNK_00112ac0,5);
    func_0x00102a60(1,uVar4,pbVar9,puVar6);
  } while( true );
}

