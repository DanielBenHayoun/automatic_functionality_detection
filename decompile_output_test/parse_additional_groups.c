
/* WARNING: Could not reconcile some variable overlaps */

ulong parse_additional_groups(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  byte **ppbVar7;
  long unaff_RBX;
  undefined *puVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined *unaff_R12;
  byte *pbVar11;
  ulong *unaff_R13;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  byte *pbStack320;
  undefined *puStack312;
  byte *apbStack304 [5];
  undefined *puStack264;
  undefined *puStack256;
  undefined *puStack248;
  undefined *puStack240;
  undefined *puStack232;
  undefined8 uStack224;
  undefined8 uStack216;
  undefined8 uStack200;
  long lStack184;
  long lStack176;
  undefined *puStack168;
  code *pcStack160;
  undefined8 uStack144;
  long *plStack136;
  ulong uStack128;
  long *plStack120;
  long *plStack112;
  undefined8 uStack104;
  char cStack93;
  undefined4 uStack92;
  long lStack80;
  ulong uStack72;
  long lStack64;
  
  bVar14 = 0;
  uStack92 = (undefined4)param_4;
  cStack93 = (char)param_4;
  lStack80 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack160 = (code *)&UNK_00102373;
  plStack136 = param_2;
  plStack120 = param_3;
  uStack104 = param_1;
  uStack128 = xstrdup();
  pcStack160 = (code *)&UNK_00102387;
  pbVar11 = (byte *)func_0x001019e0(uStack128,&UNK_00105f84);
  if (pbVar11 == (byte *)0x0) {
    lStack176 = 0;
  }
  else {
    plStack112 = &lStack80;
    unaff_R13 = &uStack72;
    unaff_R12 = &UNK_00106a89;
    uStack144 = uStack144 & 0xffffffff00000000;
    unaff_RBX = 0;
    lStack176 = 0;
    do {
      pcStack160 = (code *)&UNK_001023d0;
      iVar1 = xstrtoul(pbVar11,0,10,unaff_R13,&UNK_00106a89);
      if ((iVar1 == 0) && (uStack72 < 0x100000000)) {
        pcStack160 = (code *)&UNK_001024a5;
        plVar3 = (long *)func_0x00101a80();
        while ((*(byte *)(*plVar3 + 1 + (ulong)*pbVar11 * 2) & 0x20) != 0) {
          pbVar11 = pbVar11 + 1;
        }
        if (*pbVar11 != 0x2b) {
          pcStack160 = (code *)&UNK_001024d0;
          lVar2 = func_0x001018f0(pbVar11);
          if (lVar2 != 0) goto code_r0x001023ec;
        }
code_r0x001023f4:
        if (lStack80 == unaff_RBX) {
          pcStack160 = (code *)&UNK_001024f0;
          lStack176 = x2nrealloc(lStack176,plStack112,4);
        }
        *(undefined4 *)(lStack176 + unaff_RBX * 4) = (int)uStack72;
        unaff_RBX = unaff_RBX + 1;
      }
      else {
        pcStack160 = (code *)&UNK_001023e7;
        lVar2 = func_0x001018f0(pbVar11);
        if (lVar2 != 0) {
code_r0x001023ec:
          uStack72 = (ulong)*(uint *)(lVar2 + 0x10);
          goto code_r0x001023f4;
        }
        if (cStack93 == '\0') goto code_r0x0010245b;
        pcStack160 = (code *)&UNK_0010250b;
        uStack144 = quote(pbVar11);
        pcStack160 = (code *)&UNK_00102523;
        uVar6 = func_0x001017a0(0,&UNK_00105f86,5);
        pcStack160 = (code *)&UNK_0010252b;
        puVar4 = (uint *)func_0x00101710();
        pcStack160 = (code *)&UNK_0010253e;
        func_0x001019a0(0,(ulong)*puVar4,uVar6,uStack144);
        uStack144 = CONCAT44(uStack144._4_4_,0xffffffff);
      }
      pcStack160 = (code *)&UNK_0010241a;
      pbVar11 = (byte *)func_0x001019e0(0);
    } while (pbVar11 != (byte *)0x0);
    if (((int)uStack144 != 0) || (unaff_RBX != 0)) {
      *plStack136 = lStack176;
      if ((int)uStack144 == 0) {
        *plStack120 = unaff_RBX;
      }
      else {
        uStack144 = CONCAT44(uStack144._4_4_,0xffffffff);
      }
      goto code_r0x0010246b;
    }
  }
  if ((char)uStack92 != '\0') {
    pcStack160 = (code *)&UNK_00102562;
    unaff_RBX = quote(uStack104);
    pcStack160 = (code *)&UNK_00102578;
    uVar6 = func_0x001017a0(0,&UNK_00105f97,5);
    pcStack160 = (code *)&UNK_00102589;
    func_0x001019a0(0,0,uVar6,unaff_RBX);
  }
code_r0x0010245b:
  uStack144 = CONCAT44(uStack144._4_4_,0xffffffff);
  *plStack136 = lStack176;
code_r0x0010246b:
  pcStack160 = (code *)&UNK_00102475;
  uVar10 = uStack128;
  func_0x001016f0();
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uStack144 & 0xffffffff;
  }
  pcStack160 = usage;
  func_0x001017e0();
  puVar8 = program_name;
  uVar6 = 5;
  uStack200 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lStack184 = unaff_RBX;
  puStack168 = unaff_R12;
  pcStack160 = (code *)unaff_R13;
  if ((int)uVar10 == 0) goto code_r0x001025fd;
  uVar6 = func_0x001017a0(0,&UNK_00106110,5);
  func_0x00101a40(stderr,1,uVar6,puVar8);
  do {
    func_0x00101a20(uVar10 & 0xffffffff);
    uVar6 = extraout_RDX;
code_r0x001025fd:
    uVar6 = func_0x001017a0(0,&UNK_00106138,uVar6);
    func_0x00101990(1,uVar6,puVar8,puVar8);
    uVar6 = stdout;
    uVar5 = func_0x001017a0(0,&UNK_00106178,5);
    func_0x001018a0(uVar5,uVar6);
    uVar6 = stdout;
    uVar5 = func_0x001017a0(0,&UNK_001061b0,5);
    func_0x001018a0(uVar5,uVar6);
    uVar6 = stdout;
    uVar5 = func_0x001017a0(0,&UNK_001061f8,5);
    func_0x001018a0(uVar5,uVar6);
    uVar6 = quotearg_style(4,&UNK_00106526);
    uVar5 = func_0x001017a0(0,&UNK_00106240,5);
    func_0x00101990(1,uVar5,uVar6);
    uVar6 = stdout;
    uVar5 = func_0x001017a0(0,&UNK_00106280,5);
    func_0x001018a0(uVar5,uVar6);
    uVar6 = stdout;
    uVar5 = func_0x001017a0(0,&UNK_001062b0,5);
    func_0x001018a0(uVar5,uVar6);
    uVar6 = stdout;
    uVar5 = func_0x001017a0(0,&UNK_001062e8,5);
    func_0x001018a0(uVar5,uVar6);
    uStack224 = 0;
    uStack216 = 0;
    pbStack320 = &UNK_00105fb4;
    apbStack304[4] = &UNK_00105ff5;
    puStack312 = &UNK_00105fb6;
    puStack256 = &UNK_00105fff;
    apbStack304[0] = &UNK_0010602e;
    puStack240 = &UNK_00106009;
    apbStack304[1] = &UNK_00105fc6;
    apbStack304[2] = &UNK_00105fdc;
    apbStack304[3] = &UNK_00105fe6;
    puStack264 = &UNK_00105fe6;
    puStack248 = &UNK_00105fe6;
    puStack232 = &UNK_00105fe6;
    ppbVar7 = &pbStack320;
    do {
      ppbVar7 = ppbVar7;
      ppbVar7 = ppbVar7 + 2;
      pbVar11 = *ppbVar7;
      bVar12 = false;
      bVar13 = pbVar11 == (byte *)0x0;
      if (bVar13) break;
      lVar2 = 7;
      pbVar9 = &UNK_00105fad;
      do {
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        bVar12 = *pbVar9 < *pbVar11;
        bVar13 = *pbVar9 == *pbVar11;
        pbVar9 = pbVar9 + (ulong)bVar14 * -2 + 1;
        pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
      } while (bVar13);
    } while ((!bVar12 && !bVar13) != bVar12);
    pbVar11 = ppbVar7[3];
    if (pbVar11 == (byte *)0x0) {
      uVar6 = func_0x001017a0(0,&UNK_00106013,5);
      func_0x00101990(1,uVar6,&UNK_0010602a,&UNK_00106330);
      lVar2 = func_0x00101980(5,0);
      if ((lVar2 != 0) && (iVar1 = func_0x00101720(lVar2,&UNK_00106038,3), iVar1 != 0)) {
        pbVar11 = &UNK_00105fad;
        goto code_r0x00102960;
      }
      pbVar11 = &UNK_00105fad;
      puVar8 = &UNK_00105fd0;
      uVar6 = func_0x001017a0(0,&UNK_0010603c,5);
      func_0x00101990(1,uVar6,&UNK_00106330,&UNK_00105fad);
    }
    else {
      uVar6 = func_0x001017a0(0,&UNK_00106013,5);
      func_0x00101990(1,uVar6,&UNK_0010602a,&UNK_00106330);
      lVar2 = func_0x00101980(5,0);
      if ((lVar2 != 0) && (iVar1 = func_0x00101720(lVar2,&UNK_00106038,3), iVar1 != 0)) {
code_r0x00102960:
        uVar6 = stdout;
        uVar5 = func_0x001017a0(0,&UNK_00106358,5);
        func_0x001018a0(uVar5,uVar6);
      }
      uVar6 = func_0x001017a0(0,&UNK_0010603c,5);
      func_0x00101990(1,uVar6,&UNK_00106330,&UNK_00105fad);
      puVar8 = &UNK_00106a89;
      if (pbVar11 == &UNK_00105fad) {
        puVar8 = &UNK_00105fd0;
      }
    }
    uVar6 = func_0x001017a0(0,&UNK_001063a0,5);
    func_0x00101990(1,uVar6,pbVar11,puVar8);
  } while( true );
}

