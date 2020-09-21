
void list_signal_handling(void)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  uint uVar7;
  undefined *puVar8;
  long *unaff_RBP;
  byte *pbVar9;
  undefined *puVar10;
  undefined *unaff_R12;
  byte *pbVar11;
  undefined *unaff_R13;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  byte *pbStack560;
  undefined *puStack552;
  byte *apbStack544 [5];
  undefined *puStack504;
  undefined *puStack496;
  undefined *puStack488;
  undefined *puStack480;
  undefined *puStack472;
  undefined8 uStack464;
  undefined8 uStack456;
  undefined8 uStack440;
  undefined *puStack424;
  long *plStack416;
  undefined *puStack408;
  undefined *puStack400;
  undefined *puStack384;
  undefined auStack376 [128];
  long alStack248 [20];
  undefined auStack88 [24];
  long lStack64;
  
  bVar14 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puStack400 = &UNK_00103356;
  puStack384 = auStack376;
  func_0x00101a80();
  puStack400 = &UNK_00103362;
  iVar1 = func_0x00101890(0,0,auStack376);
  if (iVar1 == 0) {
    puStack424 = (undefined *)0x1;
    unaff_RBP = alStack248;
    do {
      puStack400 = &UNK_001033e9;
      puVar10 = puStack424;
      iVar1 = func_0x00101910(puStack424,0,unaff_RBP);
      if (iVar1 == 0) {
        if (alStack248[0] == 1) {
          puStack400 = &UNK_00103404;
          iVar1 = func_0x00101bc0();
          unaff_R13 = &UNK_00106b61;
          unaff_R12 = &UNK_00106b68;
          puVar8 = &UNK_00106c56;
          if (iVar1 == 0) {
            unaff_R12 = &UNK_00106c9f;
            puVar8 = unaff_R12;
          }
        }
        else {
          puStack400 = &UNK_00103385;
          puVar10 = puStack384;
          iVar1 = func_0x00101bc0();
          if (iVar1 == 0) goto code_r0x001033d5;
          unaff_R13 = &UNK_00106c9f;
          puVar8 = &UNK_00106c56;
          unaff_R12 = &UNK_00106c9f;
        }
        puStack400 = &UNK_001033ac;
        sig2str(puStack424,auStack88);
        plStack416 = (long *)&UNK_001033d3;
        puVar10 = stderr;
        puStack408 = unaff_R12;
        puStack400 = unaff_R13;
        func_0x00101bf0(stderr,1,&UNK_00106b6a,auStack88,puStack424,puVar8);
      }
code_r0x001033d5:
      uVar7 = (int)puStack424 + 1;
      puStack424 = (undefined *)(ulong)uVar7;
    } while (uVar7 != 0x41);
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    puStack400 = &UNK_00103468;
    puStack424 = (undefined *)func_0x00101960(0,&UNK_00106e68,5);
    puStack400 = &UNK_00103470;
    puVar2 = (uint *)func_0x001018c0();
    puVar10 = (undefined *)0x7d;
    puStack400 = &UNK_00103481;
    func_0x00101b40(0x7d,(ulong)*puVar2,puStack424);
  }
  puStack400 = &UNK_00103486;
  func_0x001019a0();
  puVar8 = program_name;
  uVar5 = 5;
  uStack440 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  plStack416 = unaff_RBP;
  puStack408 = unaff_R12;
  puStack400 = unaff_R13;
  if ((int)puVar10 == 0) goto code_r0x001034ed;
  uVar5 = func_0x00101960(0,&UNK_00106e90,5);
  func_0x00101bf0(stderr,1,uVar5,puVar8);
  do {
    func_0x00101bd0((ulong)puVar10 & 0xffffffff);
    uVar5 = extraout_RDX;
code_r0x001034ed:
    uVar5 = func_0x00101960(0,&UNK_00106eb8,uVar5);
    func_0x00101b30(1,uVar5,puVar8);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00106ef8,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00106f38,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00106f88,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00107048,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00107080,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00107110,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00107160,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_001071b0,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00107200,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00107250,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_001072a0,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_001072d0,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00107308,5);
    func_0x00101a40(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x00101960(0,&UNK_00107350,5);
    func_0x00101a40(uVar3,uVar5);
    uStack464 = 0;
    uStack456 = 0;
    pbStack560 = &UNK_00106b83;
    apbStack544[4] = &UNK_00106bc4;
    puStack552 = &UNK_00106b85;
    puStack496 = &UNK_00106bce;
    apbStack544[0] = &UNK_00106bfd;
    puStack480 = &UNK_00106bd8;
    apbStack544[1] = &UNK_00106b95;
    apbStack544[2] = &UNK_00106bab;
    apbStack544[3] = &UNK_00106bb5;
    puStack504 = &UNK_00106bb5;
    puStack488 = &UNK_00106bb5;
    puStack472 = &UNK_00106bb5;
    ppbVar6 = &pbStack560;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar11 = *ppbVar6;
      bVar12 = false;
      bVar13 = pbVar11 == (byte *)0x0;
      if (bVar13) break;
      lVar4 = 4;
      pbVar9 = &UNK_00106b7f;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar12 = *pbVar9 < *pbVar11;
        bVar13 = *pbVar9 == *pbVar11;
        pbVar9 = pbVar9 + (ulong)bVar14 * -2 + 1;
        pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
      } while (bVar13);
    } while ((!bVar12 && !bVar13) != bVar12);
    pbVar11 = ppbVar6[3];
    if (pbVar11 == (byte *)0x0) {
      uVar5 = func_0x00101960(0,&UNK_00106be2,5);
      func_0x00101b30(1,uVar5,&UNK_00106bf9,&UNK_001073f0);
      lVar4 = func_0x00101b20(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x001018d0(lVar4,&UNK_00106c07,3);
        if (iVar1 != 0) {
          pbVar11 = &UNK_00106b7f;
          goto code_r0x00103940;
        }
      }
      pbVar11 = &UNK_00106b7f;
      puVar8 = &UNK_00106b9f;
      uVar5 = func_0x00101960(0,&UNK_00106c0b,5);
      func_0x00101b30(1,uVar5,&UNK_001073f0,&UNK_00106b7f);
    }
    else {
      uVar5 = func_0x00101960(0,&UNK_00106be2,5);
      func_0x00101b30(1,uVar5,&UNK_00106bf9,&UNK_001073f0);
      lVar4 = func_0x00101b20(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x001018d0(lVar4,&UNK_00106c07,3);
        if (iVar1 != 0) {
code_r0x00103940:
          uVar5 = stdout;
          uVar3 = func_0x00101960(0,&UNK_00107418,5);
          func_0x00101a40(uVar3,uVar5);
        }
      }
      uVar5 = func_0x00101960(0,&UNK_00106c0b,5);
      func_0x00101b30(1,uVar5,&UNK_001073f0,&UNK_00106b7f);
      puVar8 = &UNK_00106c9f;
      if (pbVar11 == &UNK_00106b7f) {
        puVar8 = &UNK_00106b9f;
      }
    }
    uVar5 = func_0x00101960(0,&UNK_00107460,5);
    func_0x00101b30(1,uVar5,pbVar11,puVar8);
  } while( true );
}

