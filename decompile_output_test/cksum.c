
/* WARNING: Could not reconcile some variable overlaps */

undefined8 cksum(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 extraout_RDX;
  byte **ppbVar10;
  undefined *puVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *unaff_R13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte *pbStack65824;
  undefined *puStack65816;
  byte *apbStack65808 [5];
  undefined *puStack65768;
  undefined *puStack65760;
  undefined *puStack65752;
  undefined *puStack65744;
  undefined *puStack65736;
  undefined8 uStack65728;
  undefined8 uStack65720;
  undefined8 uStack65704;
  undefined8 uStack65688;
  uint *puStack65680;
  byte *pbStack65672;
  byte *pbStack65664;
  undefined4 uStack65644;
  undefined auStack65640 [32];
  byte abStack65608 [65560];
  
  bVar17 = 0;
  lVar7 = 2;
  uVar12 = *(ulong *)(in_FS_OFFSET + 0x28);
  bVar15 = false;
  bVar16 = true;
  pbVar13 = param_1;
  pbVar9 = &UNK_00105682;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    bVar15 = *pbVar13 < *pbVar9;
    bVar16 = *pbVar13 == *pbVar9;
    pbVar13 = pbVar13 + 1;
    pbVar9 = pbVar9 + 1;
  } while (bVar16);
  uStack65644 = param_2;
  if ((!bVar15 && !bVar16) == bVar15) {
    have_read_stdin = 1;
    puStack65680 = stdin;
code_r0x00101867:
    unaff_R13 = abStack65608;
    uVar14 = 0;
    uVar8 = 0;
    pbStack65664 = &UNK_00101885;
    fadvise(puStack65680,2);
    do {
      pbStack65664 = &UNK_0010189d;
      uVar3 = func_0x00101340(unaff_R13,1,0x10000,puStack65680);
      if (uVar3 == 0) {
        uVar1 = *puStack65680;
        break;
      }
      bVar15 = CARRY8(uVar14,uVar3);
      uVar14 = uVar14 + uVar3;
      if (bVar15) {
        pbStack65664 = &UNK_00101a9b;
        uVar4 = quotearg_n_style_colon(0,3,param_1);
        pbStack65664 = &UNK_00101ab1;
        uVar6 = func_0x00101380(0,&UNK_00104b84,5);
        pbStack65664 = &UNK_00101ac5;
        func_0x001014f0(1,0,uVar6,uVar4);
        goto code_r0x00101ac5;
      }
      pbVar13 = unaff_R13;
      do {
        pbVar9 = pbVar13 + 1;
        uVar8 = uVar8 << 8 ^
                *(ulong *)(crctab + (ulong)(byte)((byte)(uVar8 >> 0x18) ^ *pbVar13) * 8);
        pbVar13 = pbVar9;
      } while (pbVar9 != unaff_R13 + uVar3);
      uVar1 = *puStack65680;
    } while ((uVar1 & 0x10) == 0);
    bVar15 = (uVar1 & 0x20) == 0;
    if (bVar15) {
      bVar16 = false;
      lVar7 = 2;
      pbVar13 = param_1;
      pbVar9 = &UNK_00105682;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar16 = *pbVar13 < *pbVar9;
        bVar15 = *pbVar13 == *pbVar9;
        pbVar13 = pbVar13 + (ulong)bVar17 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar17 * -2 + 1;
      } while (bVar15);
      if ((!bVar16 && !bVar15) != bVar16) {
        pbStack65664 = &UNK_001019af;
        iVar2 = rpl_fclose(puStack65680);
        if (iVar2 == -1) goto code_r0x001019b8;
      }
      pbStack65664 = &UNK_00101913;
      uVar4 = umaxtostr(uVar14,auStack65640);
      while (uVar14 != 0) {
        uVar3 = uVar8 >> 0x18 ^ uVar14;
        uVar14 = uVar14 >> 8;
        uVar8 = uVar8 << 8 ^ *(ulong *)(crctab + (uVar3 & 0xff) * 8);
      }
      if ((char)uStack65644 == '\0') {
        pbStack65664 = &UNK_00101967;
        func_0x001014d0(1,&UNK_00104ba0,~uVar8 & 0xffffffff,uVar4);
      }
      else {
        pbStack65664 = &UNK_00101a03;
        func_0x001014d0(1,&UNK_00104b96,~uVar8 & 0xffffffff,uVar4,param_1);
      }
      if ((*stdout & 0x20) != 0) {
code_r0x00101ac5:
        pbStack65664 = &UNK_00101ad8;
        uStack65688 = func_0x00101380(0,&UNK_00104ba7,5);
        pbStack65664 = &UNK_00101ae0;
        puVar5 = (uint *)func_0x00101300();
        uVar12 = 1;
        pbStack65664 = &UNK_00101af8;
        func_0x001014f0(1,(ulong)*puVar5,&UNK_00104bb3,uStack65688);
        goto code_r0x00101af8;
      }
      uStack65688 = 1;
    }
    else {
      pbStack65664 = &UNK_00101a22;
      uVar4 = quotearg_n_style_colon(0,3,param_1);
      pbStack65664 = &UNK_00101a2a;
      puVar5 = (uint *)func_0x00101300();
      bVar15 = false;
      bVar16 = true;
      pbStack65664 = &UNK_00101a3f;
      func_0x001014f0(0,(ulong)*puVar5,&UNK_00104bb6,uVar4);
      lVar7 = 2;
      pbVar13 = param_1;
      pbVar9 = &UNK_00105682;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar15 = *pbVar13 < *pbVar9;
        bVar16 = *pbVar13 == *pbVar9;
        pbVar13 = pbVar13 + (ulong)bVar17 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar17 * -2 + 1;
      } while (bVar16);
      uStack65688 = 0;
      if ((!bVar15 && !bVar16) != bVar15) {
        pbStack65664 = &UNK_00101a67;
        rpl_fclose(puStack65680);
      }
    }
  }
  else {
    pbStack65664 = &UNK_00101a7b;
    puStack65680 = (uint *)func_0x00101510(param_1,&UNK_00104bb1);
    if (puStack65680 != (uint *)0x0) goto code_r0x00101867;
code_r0x001019b8:
    pbStack65664 = &UNK_001019c7;
    uVar4 = quotearg_n_style_colon(0,3,param_1);
    pbStack65664 = &UNK_001019cf;
    puVar5 = (uint *)func_0x00101300();
    uStack65688 = 0;
    pbStack65664 = &UNK_001019e6;
    func_0x001014f0(0,(ulong)*puVar5,&UNK_00104bb6,uVar4);
  }
  uVar12 = uVar12 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar12 == 0) {
    return uStack65688;
  }
code_r0x00101af8:
  pbStack65664 = &UNK_00101afd;
  func_0x001013b0();
  puVar11 = program_name;
  uVar4 = 5;
  uStack65704 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pbStack65672 = param_1;
  pbStack65664 = unaff_R13;
  if ((int)uVar12 == 0) goto code_r0x00101b5d;
  uVar4 = func_0x00101380(0,&UNK_00104c88,5);
  func_0x00101550(stderr,1,uVar4,puVar11);
  do {
    func_0x00101530(uVar12 & 0xffffffff);
    uVar4 = extraout_RDX;
code_r0x00101b5d:
    uVar4 = func_0x00101380(0,&UNK_00104cb0,uVar4);
    func_0x001014d0(1,uVar4,puVar11,puVar11);
    pbVar13 = stdout;
    uVar4 = func_0x00101380(0,&UNK_00104cd8,5);
    func_0x00101430(uVar4,pbVar13);
    pbVar13 = stdout;
    uVar4 = func_0x00101380(0,&UNK_00104d10,5);
    func_0x00101430(uVar4,pbVar13);
    pbVar13 = stdout;
    uVar4 = func_0x00101380(0,&UNK_00104d40,5);
    func_0x00101430(uVar4,pbVar13);
    uStack65728 = 0;
    uStack65720 = 0;
    pbStack65824 = &UNK_00104bbf;
    apbStack65808[4] = &UNK_00104c00;
    puStack65816 = &UNK_00104bc1;
    puStack65760 = &UNK_00104c0a;
    apbStack65808[0] = &UNK_00104c39;
    puStack65744 = &UNK_00104c14;
    apbStack65808[1] = &UNK_00104bd1;
    apbStack65808[2] = &UNK_00104be7;
    apbStack65808[3] = &UNK_00104bf1;
    puStack65768 = &UNK_00104bf1;
    puStack65752 = &UNK_00104bf1;
    puStack65736 = &UNK_00104bf1;
    ppbVar10 = &pbStack65824;
    do {
      ppbVar10 = ppbVar10;
      ppbVar10 = ppbVar10 + 2;
      pbVar13 = *ppbVar10;
      bVar15 = false;
      bVar16 = pbVar13 == (byte *)0x0;
      if (bVar16) break;
      lVar7 = 6;
      pbVar9 = &UNK_00104bb9;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar15 = *pbVar9 < *pbVar13;
        bVar16 = *pbVar9 == *pbVar13;
        pbVar9 = pbVar9 + (ulong)bVar17 * -2 + 1;
        pbVar13 = pbVar13 + (ulong)bVar17 * -2 + 1;
      } while (bVar16);
    } while ((!bVar15 && !bVar16) != bVar15);
    pbVar13 = ppbVar10[3];
    if (pbVar13 == (byte *)0x0) {
      uVar4 = func_0x00101380(0,&UNK_00104c1e,5);
      func_0x001014d0(1,uVar4,&UNK_00104c35,&UNK_00104d78);
      lVar7 = func_0x001014c0(5,0);
      if ((lVar7 != 0) && (iVar2 = func_0x00101310(lVar7,&UNK_00104c43,3), iVar2 != 0)) {
        pbVar13 = &UNK_00104bb9;
        goto code_r0x00101e18;
      }
      pbVar13 = &UNK_00104bb9;
      puVar11 = &UNK_00104bdb;
      uVar4 = func_0x00101380(0,&UNK_00104c47,5);
      func_0x001014d0(1,uVar4,&UNK_00104d78,&UNK_00104bb9);
    }
    else {
      uVar4 = func_0x00101380(0,&UNK_00104c1e,5);
      func_0x001014d0(1,uVar4,&UNK_00104c35,&UNK_00104d78);
      lVar7 = func_0x001014c0(5,0);
      if ((lVar7 != 0) && (iVar2 = func_0x00101310(lVar7,&UNK_00104c43,3), iVar2 != 0)) {
code_r0x00101e18:
        pbVar9 = stdout;
        uVar4 = func_0x00101380(0,&UNK_00104da0,5);
        func_0x00101430(uVar4,pbVar9);
      }
      uVar4 = func_0x00101380(0,&UNK_00104c47,5);
      func_0x001014d0(1,uVar4,&UNK_00104d78,&UNK_00104bb9);
      puVar11 = &UNK_00105bba;
      if (pbVar13 == &UNK_00104bb9) {
        puVar11 = &UNK_00104bdb;
      }
    }
    uVar4 = func_0x00101380(0,&UNK_00104de8,5);
    func_0x001014d0(1,uVar4,pbVar13,puVar11);
  } while( true );
}

