
void uptime(undefined8 param_1,ulong param_2)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  undefined *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  byte bVar12;
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
  undefined8 uStack72;
  ulong uStack32;
  undefined8 uStack24;
  long lStack16;
  
  bVar12 = 0;
  uStack24 = 0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = read_utmp(param_1,&uStack32,&uStack24,param_2 & 0xffffffff);
  if (iVar1 == 0) {
    print_uptime(uStack32,uStack24);
    if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    param_1 = quotearg_n_style_colon(0,3,param_1);
    puVar2 = (uint *)func_0x00101880();
    uStack32 = 1;
    func_0x00101b80(1,(ulong)*puVar2,&UNK_00107d6f,param_1);
  }
  func_0x00101980();
  puVar7 = program_name;
  uVar5 = 5;
  uStack88 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack72 = param_1;
  if ((int)uStack32 == 0) goto code_r0x001023bd;
  uVar5 = func_0x00101950(0,&UNK_00107ab8,5);
  func_0x00101c00(stderr,1,uVar5,puVar7);
  do {
    func_0x00101be0(uStack32 & 0xffffffff);
    uVar5 = extraout_RDX;
code_r0x001023bd:
    uVar5 = func_0x00101950(0,&UNK_00107984,uVar5);
    func_0x00101b40(1,uVar5,puVar7);
    uVar5 = func_0x00101950(0,&UNK_00107ae0,5);
    func_0x00101b40(1,uVar5);
    uVar5 = func_0x00101950(0,&UNK_00107ba0,5);
    func_0x00101b40(1,uVar5);
    uVar5 = func_0x00101950(0,&UNK_00107bf8,5);
    func_0x00101b40(1,uVar5,&UNK_001079b0,&UNK_001079a2);
    uVar5 = stdout;
    uVar3 = func_0x00101950(0,&UNK_00107c38,5);
    func_0x00101a30(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101950(0,&UNK_00107c68,5);
    func_0x00101a30(uVar3,uVar5);
    puStack144 = &UNK_00107a09;
    uStack112 = 0;
    uStack104 = 0;
    pbStack208 = &UNK_001079be;
    apbStack192[4] = &UNK_001079ff;
    puStack200 = &UNK_001079c0;
    puStack128 = &UNK_00107a13;
    apbStack192[0] = &UNK_00107a38;
    apbStack192[1] = &UNK_001079d0;
    apbStack192[2] = &UNK_001079e6;
    apbStack192[3] = &UNK_001079f0;
    puStack152 = &UNK_001079f0;
    puStack136 = &UNK_001079f0;
    puStack120 = &UNK_001079f0;
    ppbVar6 = &pbStack208;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar9 = *ppbVar6;
      bVar10 = false;
      bVar11 = pbVar9 == (byte *)0x0;
      if (bVar11) break;
      lVar4 = 7;
      pbVar8 = &UNK_001078ca;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar10 = *pbVar8 < *pbVar9;
        bVar11 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + (ulong)bVar12 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar12 * -2 + 1;
      } while (bVar11);
    } while ((!bVar10 && !bVar11) != bVar10);
    pbVar9 = ppbVar6[3];
    if (pbVar9 == (byte *)0x0) {
      uVar5 = func_0x00101950(0,&UNK_00107a1d,5);
      func_0x00101b40(1,uVar5,&UNK_00107a34,&UNK_00107ca0);
      lVar4 = func_0x00101b30(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x001018a0(lVar4,&UNK_00107a42,3);
        if (iVar1 != 0) {
          pbVar9 = &UNK_001078ca;
          goto code_r0x001026c8;
        }
      }
      pbVar9 = &UNK_001078ca;
      puVar7 = &UNK_001079da;
      uVar5 = func_0x00101950(0,&UNK_00107a46,5);
      func_0x00101b40(1,uVar5,&UNK_00107ca0,&UNK_001078ca);
    }
    else {
      uVar5 = func_0x00101950(0,&UNK_00107a1d,5);
      func_0x00101b40(1,uVar5,&UNK_00107a34,&UNK_00107ca0);
      lVar4 = func_0x00101b30(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x001018a0(lVar4,&UNK_00107a42,3);
        if (iVar1 != 0) {
code_r0x001026c8:
          uVar5 = stdout;
          uVar3 = func_0x00101950(0,&UNK_00107cc8,5);
          func_0x00101a30(uVar3,uVar5);
        }
      }
      uVar5 = func_0x00101950(0,&UNK_00107a46,5);
      func_0x00101b40(1,uVar5,&UNK_00107ca0,&UNK_001078ca);
      puVar7 = &UNK_00108501;
      if (pbVar9 == &UNK_001078ca) {
        puVar7 = &UNK_001079da;
      }
    }
    uVar5 = func_0x00101950(0,&UNK_00107d10,5);
    func_0x00101b40(1,uVar5,pbVar9,puVar7);
  } while( true );
}

