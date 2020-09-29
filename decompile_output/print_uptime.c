
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_uptime(long param_1,short *param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 extraout_RDX;
  byte **ppbVar9;
  undefined *puVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  double dVar17;
  byte *pbStack8536;
  undefined *puStack8528;
  byte *apbStack8520 [5];
  undefined *puStack8480;
  undefined *puStack8472;
  undefined *puStack8464;
  undefined *puStack8456;
  undefined *puStack8448;
  undefined8 uStack8440;
  undefined8 uStack8432;
  undefined8 uStack8416;
  undefined **ppuStack8400;
  ulong uStack8392;
  long lStack8384;
  undefined *puStack8376;
  ulong uStack8360;
  undefined8 uStack8352;
  long lStack8344;
  undefined *puStack8336;
  undefined *puStack8320;
  undefined *puStack8304;
  undefined *puStack8296;
  undefined8 uStack8288;
  undefined8 uStack8280;
  undefined auStack8264 [8200];
  long lStack64;
  
  bVar16 = 0;
  uStack8392 = param_1 - 1;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puStack8336 = &UNK_00101ed2;
  lVar4 = func_0x00101ba0(&UNK_001078c4,&UNK_00107965);
  if (lVar4 == 0) {
code_r0x00101f00:
    puVar5 = (undefined *)0x0;
    if (param_1 == 0) {
      puStack8336 = &UNK_00102272;
      puStack8304 = (undefined *)func_0x00101aa0(0);
    }
    else {
code_r0x00101f0c:
      lVar4 = 0;
      param_1 = 0;
      do {
        if ((*(char *)(param_2 + 0x16) == '\0') || (*param_2 != 7)) {
          if (*param_2 == 2) {
            lVar4 = (long)*(int *)(param_2 + 0xaa);
          }
        }
        else {
          param_1 = param_1 + 1;
        }
        uStack8392 = uStack8392 - 1;
        param_2 = param_2 + 0xc0;
      } while (uStack8392 != 0xffffffffffffffff);
      puStack8336 = &UNK_00101f57;
      puStack8304 = (undefined *)func_0x00101aa0(0);
      if ((puVar5 != (undefined *)0x0) || (puVar5 = puStack8304 + -lVar4, lVar4 != 0))
      goto code_r0x00101f75;
    }
code_r0x00102277:
    puStack8336 = &UNK_0010228a;
    uVar7 = func_0x00101950(0,&UNK_001078d1,5);
    puStack8336 = &UNK_00102292;
    puVar8 = (uint *)func_0x00101880();
    ppuStack8400 = (undefined **)0x1;
    puStack8336 = &UNK_001022a3;
    func_0x00101b80(1,(ulong)*puVar8,uVar7);
  }
  else {
    puStack8336 = &UNK_00101eef;
    puVar5 = (undefined *)func_0x00101ac0(auStack8264,0x2000,lVar4);
    if (puVar5 != auStack8264) {
      puStack8336 = &UNK_00101f00;
      rpl_fclose(lVar4);
      goto code_r0x00101f00;
    }
    puStack8336 = &UNK_00102212;
    puStack8320 = puVar5;
    dVar17 = (double)c_strtod(puVar5,&puStack8304);
    if (puStack8304 == puStack8320) {
      puVar5 = (undefined *)0x0;
    }
    else {
      if ((dVar17 < _UNK_00107d48) || (_UNK_00107d50 <= dVar17)) {
        puVar5 = (undefined *)0xffffffffffffffff;
      }
      else {
        puVar5 = (undefined *)(long)dVar17;
      }
    }
    puStack8336 = &UNK_0010224b;
    rpl_fclose(lVar4);
    if (param_1 != 0) goto code_r0x00101f0c;
    puStack8336 = &UNK_0010225b;
    puStack8304 = (undefined *)func_0x00101aa0(0);
    if (puVar5 == (undefined *)0x0) goto code_r0x00102277;
code_r0x00101f75:
    lVar4 = (long)puVar5 / 0x15180;
    uStack8392 = ((long)puVar5 % 0x15180) / 0xe10;
    lVar11 = (long)puVar5 % 0x15180 - (long)((int)uStack8392 * 0xe10);
    uVar7 = lVar11 / 0x3c;
    puStack8336 = &UNK_00101ff5;
    lVar11 = func_0x00101860(&puStack8304,lVar11 >> 0x3f,uVar7);
    if (lVar11 == 0) {
      puStack8336 = &UNK_00102196;
      uVar6 = func_0x00101950(0,&UNK_001078f4,5);
      puStack8336 = &UNK_001021a5;
      func_0x00101b40(1,uVar6);
    }
    else {
      puStack8336 = &UNK_00102014;
      uVar6 = func_0x00101950(0,&UNK_001078e8,5);
      puStack8336 = &UNK_0010202b;
      fprintftime(stdout,uVar6,lVar11,0,0);
    }
    if (puVar5 == (undefined *)0xffffffffffffffff) {
      puStack8336 = &UNK_001021e9;
      uVar6 = func_0x00101950(0,&UNK_001078ff,5);
      puStack8336 = &UNK_001021f8;
      func_0x00101b40(1,uVar6);
    }
    else {
      if (lVar4 < 1) {
        puStack8336 = &UNK_001021bd;
        uVar6 = func_0x00101950(0,&UNK_00107944,5);
        puStack8336 = &UNK_001021d1;
        func_0x00101b40(1,uVar6,uStack8392 & 0xffffffff,uVar7 & 0xffffffff);
      }
      else {
        puStack8336 = &UNK_0010205c;
        uVar6 = func_0x00101bb0(0,&UNK_0010792d,&UNK_00107915,lVar4,5);
        puStack8336 = &UNK_00102073;
        func_0x00101b40(1,uVar6,lVar4,uStack8392 & 0xffffffff,uVar7 & 0xffffffff);
      }
    }
    puStack8336 = &UNK_00102091;
    uVar6 = func_0x00101bb0(0,&UNK_0010795e,&UNK_00107954,param_1,5);
    puStack8336 = &UNK_001020a3;
    func_0x00101b40(1,uVar6,param_1);
    ppuStack8400 = &puStack8296;
    puStack8336 = &UNK_001020b2;
    uVar2 = func_0x00101930(ppuStack8400,3);
    uVar7 = (ulong)uVar2;
    if (uVar2 != 0xffffffff) {
      if ((int)uVar2 < 1) goto code_r0x001020c1;
      puStack8320 = puStack8296;
      puStack8336 = &UNK_00102109;
      uVar6 = func_0x00101950(0,&UNK_00107967,5);
      puStack8336 = &UNK_00102121;
      func_0x00101b40(puStack8320,1,uVar6);
      if (uVar2 != 1) {
        puStack8336 = &UNK_00102142;
        func_0x00101b40(uStack8288,1,&UNK_0010797d);
        if (uVar2 != 2) {
          puStack8336 = &UNK_00102163;
          func_0x00101b40(uStack8280,1,&UNK_0010797d);
        }
      }
    }
    ppuStack8400 = stdout;
    puVar10 = stdout[5];
    if (puVar10 < stdout[6]) {
      stdout[5] = puVar10 + 1;
      *puVar10 = 10;
      goto code_r0x001020c1;
    }
  }
  puStack8336 = &UNK_001022ad;
  func_0x001019c0();
code_r0x001020c1:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack8336 = &UNK_001022c2;
  func_0x00101980();
  uStack8352 = 0;
  lStack8344 = *(long *)(in_FS_OFFSET + 0x28);
  puStack8376 = &UNK_00102302;
  puStack8336 = (undefined *)uVar7;
  iVar3 = read_utmp();
  if (iVar3 == 0) {
    puStack8376 = &UNK_00102315;
    print_uptime(uStack8360,uStack8352);
    if (lStack8344 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    puStack8376 = &UNK_0010233a;
    ppuStack8400 = (undefined **)quotearg_n_style_colon(0,3,ppuStack8400);
    puStack8376 = &UNK_00102342;
    puVar8 = (uint *)func_0x00101880();
    uStack8360 = 1;
    puStack8376 = &UNK_0010235a;
    func_0x00101b80(1,(ulong)*puVar8,&UNK_00107d6f,ppuStack8400);
  }
  puStack8376 = &UNK_0010235f;
  func_0x00101980();
  puVar10 = program_name;
  uVar6 = 5;
  uStack8416 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lStack8384 = param_1;
  puStack8376 = puVar5;
  if ((int)uStack8360 == 0) goto code_r0x001023bd;
  uVar6 = func_0x00101950(0,&UNK_00107ab8,5);
  func_0x00101c00(stderr,1,uVar6,puVar10);
  do {
    func_0x00101be0(uStack8360 & 0xffffffff);
    uVar6 = extraout_RDX;
code_r0x001023bd:
    uVar6 = func_0x00101950(0,&UNK_00107984,uVar6);
    func_0x00101b40(1,uVar6,puVar10);
    uVar6 = func_0x00101950(0,&UNK_00107ae0,5);
    func_0x00101b40(1,uVar6);
    uVar6 = func_0x00101950(0,&UNK_00107ba0,5);
    func_0x00101b40(1,uVar6);
    uVar6 = func_0x00101950(0,&UNK_00107bf8,5);
    func_0x00101b40(1,uVar6,&UNK_001079b0,&UNK_001079a2);
    ppuVar1 = stdout;
    uVar6 = func_0x00101950(0,&UNK_00107c38,5);
    func_0x00101a30(uVar6,ppuVar1);
    ppuVar1 = stdout;
    uVar6 = func_0x00101950(0,&UNK_00107c68,5);
    func_0x00101a30(uVar6,ppuVar1);
    puStack8472 = &UNK_00107a09;
    uStack8440 = 0;
    uStack8432 = 0;
    pbStack8536 = &UNK_001079be;
    apbStack8520[4] = &UNK_001079ff;
    puStack8528 = &UNK_001079c0;
    puStack8456 = &UNK_00107a13;
    apbStack8520[0] = &UNK_00107a38;
    apbStack8520[1] = &UNK_001079d0;
    apbStack8520[2] = &UNK_001079e6;
    apbStack8520[3] = &UNK_001079f0;
    puStack8480 = &UNK_001079f0;
    puStack8464 = &UNK_001079f0;
    puStack8448 = &UNK_001079f0;
    ppbVar9 = &pbStack8536;
    do {
      ppbVar9 = ppbVar9;
      ppbVar9 = ppbVar9 + 2;
      pbVar13 = *ppbVar9;
      bVar14 = false;
      bVar15 = pbVar13 == (byte *)0x0;
      if (bVar15) break;
      lVar4 = 7;
      pbVar12 = &UNK_001078ca;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar14 = *pbVar12 < *pbVar13;
        bVar15 = *pbVar12 == *pbVar13;
        pbVar12 = pbVar12 + (ulong)bVar16 * -2 + 1;
        pbVar13 = pbVar13 + (ulong)bVar16 * -2 + 1;
      } while (bVar15);
    } while ((!bVar14 && !bVar15) != bVar14);
    pbVar13 = ppbVar9[3];
    if (pbVar13 == (byte *)0x0) {
      uVar6 = func_0x00101950(0,&UNK_00107a1d,5);
      func_0x00101b40(1,uVar6,&UNK_00107a34,&UNK_00107ca0);
      lVar4 = func_0x00101b30(5,0);
      if ((lVar4 != 0) && (iVar3 = func_0x001018a0(lVar4,&UNK_00107a42,3), iVar3 != 0)) {
        pbVar13 = &UNK_001078ca;
        goto code_r0x001026c8;
      }
      pbVar13 = &UNK_001078ca;
      puVar10 = &UNK_001079da;
      uVar6 = func_0x00101950(0,&UNK_00107a46,5);
      func_0x00101b40(1,uVar6,&UNK_00107ca0,&UNK_001078ca);
    }
    else {
      uVar6 = func_0x00101950(0,&UNK_00107a1d,5);
      func_0x00101b40(1,uVar6,&UNK_00107a34,&UNK_00107ca0);
      lVar4 = func_0x00101b30(5,0);
      if ((lVar4 != 0) && (iVar3 = func_0x001018a0(lVar4,&UNK_00107a42,3), iVar3 != 0)) {
code_r0x001026c8:
        ppuVar1 = stdout;
        uVar6 = func_0x00101950(0,&UNK_00107cc8,5);
        func_0x00101a30(uVar6,ppuVar1);
      }
      uVar6 = func_0x00101950(0,&UNK_00107a46,5);
      func_0x00101b40(1,uVar6,&UNK_00107ca0,&UNK_001078ca);
      puVar10 = &UNK_00108501;
      if (pbVar13 == &UNK_001078ca) {
        puVar10 = &UNK_001079da;
      }
    }
    uVar6 = func_0x00101950(0,&UNK_00107d10,5);
    func_0x00101b40(1,uVar6,pbVar13,puVar10);
  } while( true );
}

