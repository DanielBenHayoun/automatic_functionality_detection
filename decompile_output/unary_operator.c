
/* WARNING: Removing unreachable block (ram,0x00101ba4) */
/* WARNING: Removing unreachable block (ram,0x00101ff0) */

ulong unary_operator(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  ulong uVar10;
  byte **ppbVar11;
  long lVar12;
  long lVar13;
  int extraout_EDX;
  uint uVar14;
  byte **unaff_RBX;
  byte **ppbVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *unaff_RBP;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  uint uVar22;
  byte **ppbVar23;
  ulong unaff_R12;
  byte *pbVar24;
  ulong unaff_R13;
  uint uVar25;
  ulong unaff_R14;
  byte **unaff_R15;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  byte bVar29;
  undefined8 auStack208 [26];
  
  bVar29 = 0;
code_r0x001020e0:
  ppbVar15 = argv;
  *(undefined **)((undefined *)register0x00000020 + -8) = unaff_RBP;
  *(byte ***)((undefined *)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 *)((undefined *)register0x00000020 + -0x20) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  switch(argv[(int)pos][1]) {
  case 0x47:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1025f5;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10260e;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    if (iVar5 == 0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10261b;
      ppbVar15 = (byte **)func_0x00101330();
      *(undefined4 *)ppbVar15 = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102629;
      uVar10 = func_0x00101510();
      iVar5 = (int)uVar10;
      if (iVar5 == -1) {
        uVar10 = 0;
        uVar21 = 0;
        if (*(int *)ppbVar15 != 0) break;
      }
      uVar21 = uVar10 & 0xffffffffffffff00 |
               (ulong)(*(int *)((undefined *)register0x00000020 + -0x98) == iVar5);
      break;
    }
    goto code_r0x00102546;
  default:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10266b;
    ppbVar15 = (byte **)quote();
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102681;
    uVar6 = func_0x001013c0(0,&UNK_00107dfc,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10268e;
    test_syntax_error(uVar6);
    iVar5 = extraout_EDX;
code_r0x00102690:
    uVar21 = 0;
    if (*(int *)ppbVar15 != 0) break;
code_r0x0010265a:
    uVar21 = uVar21 & 0xffffffffffffff00 |
             (ulong)(*(int *)((undefined *)register0x00000020 + -0x9c) == iVar5);
    break;
  case 0x4c:
  case 0x68:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1025ad;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1025c6;
    iVar5 = func_0x001013f0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000 |
                      (uint)((*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000) == 0xa000
                            ));
    }
    break;
  case 0x4e:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102555;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10256e;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    if (iVar5 == 0) {
      uVar21 = 0;
      lVar7 = *(long *)((undefined *)register0x00000020 + -0x60);
      lVar12 = *(long *)((undefined *)register0x00000020 + -0x70);
      if ((*(long *)((undefined *)register0x00000020 + -0x70) == lVar7 || lVar12 < lVar7) &&
         (uVar21 = 1, lVar7 <= lVar12)) {
        uVar21 = (ulong)(0 < (int)*(undefined8 *)((undefined *)register0x00000020 + -0x58) -
                             (int)*(undefined8 *)((undefined *)register0x00000020 + -0x68));
      }
      break;
    }
    goto code_r0x00102546;
  case 0x4f:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102525;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10253e;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    if (iVar5 == 0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102645;
      ppbVar15 = (byte **)func_0x00101330();
      *(undefined4 *)ppbVar15 = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102653;
      uVar21 = func_0x00101450();
      iVar5 = (int)uVar21;
      if (iVar5 == -1) goto code_r0x00102690;
      goto code_r0x0010265a;
    }
code_r0x00102546:
    uVar21 = 0;
    break;
  case 0x53:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1024e5;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1024fe;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000 |
                      (uint)((*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000) == 0xc000
                            ));
    }
    break;
  case 0x62:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1024a5;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1024be;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000 |
                      (uint)((*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000) == 0x6000
                            ));
    }
    break;
  case 99:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102465;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10247e;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000 |
                      (uint)((*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000) == 0x2000
                            ));
    }
    break;
  case 100:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102425;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10243e;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000 |
                      (uint)((*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000) == 0x4000
                            ));
    }
    break;
  case 0x65:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1023f5;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10240e;
    uVar21 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = uVar21 & 0xffffffffffffff00 | (ulong)((int)uVar21 == 0);
    break;
  case 0x66:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1023b5;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1023ce;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000 |
                      (uint)((*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000) == 0x8000
                            ));
    }
    break;
  case 0x67:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102375;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10238e;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(*(uint *)((undefined *)register0x00000020 + -0xa0) >> 10 & 1);
    }
    break;
  case 0x6b:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102335;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10234e;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(*(uint *)((undefined *)register0x00000020 + -0xa0) >> 9 & 1);
    }
    break;
  case 0x6e:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102315;
    unary_advance();
    uVar21 = (ulong)ppbVar15[(long)(int)pos + -1] & 0xffffffffffffff00 |
             (ulong)(*ppbVar15[(long)(int)pos + -1] != 0);
    break;
  case 0x70:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1022cd;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1022e6;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000 |
                      (uint)((*(uint *)((undefined *)register0x00000020 + -0xa0) & 0xf000) == 0x1000
                            ));
    }
    break;
  case 0x72:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1022a5;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1022bb;
    uVar21 = func_0x00101580(pbVar24,4);
    uVar21 = uVar21 & 0xffffffffffffff00 | (ulong)((int)uVar21 == 0);
    break;
  case 0x73:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10226d;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102286;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(0 < *(long *)((undefined *)register0x00000020 + -0x88));
    }
    break;
  case 0x74:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1021dd;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1021ee;
    unaff_RBP = (undefined *)find_int(pbVar24);
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1021f6;
    ppbVar15 = (byte **)func_0x00101330();
    *(undefined4 *)ppbVar15 = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10220e;
    uVar10 = func_0x001014a0(unaff_RBP,0,10);
    uVar21 = 0;
    if ((*(int *)ppbVar15 != 0x22) && (uVar10 < 0x80000000)) {
      *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10222e;
      uVar21 = func_0x00101380();
      uVar21 = uVar21 & 0xffffffffffffff00 | (ulong)((int)uVar21 != 0);
    }
    break;
  case 0x75:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1021a5;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1021be;
    iVar5 = func_0x001014d0(1,pbVar24,(undefined *)register0x00000020 + -0xb8);
    uVar21 = 0;
    if (iVar5 == 0) {
      uVar21 = (ulong)(*(uint *)((undefined *)register0x00000020 + -0xa0) >> 0xb & 1);
    }
    break;
  case 0x77:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102245;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10225b;
    uVar21 = func_0x00101580(pbVar24,2);
    uVar21 = uVar21 & 0xffffffffffffff00 | (ulong)((int)uVar21 == 0);
    break;
  case 0x78:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x10217d;
    unary_advance();
    pbVar24 = ppbVar15[(long)(int)pos + -1];
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102193;
    uVar21 = func_0x00101580(pbVar24,1);
    uVar21 = uVar21 & 0xffffffffffffff00 | (ulong)((int)uVar21 == 0);
    break;
  case 0x7a:
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x102135;
    unary_advance();
    uVar21 = (ulong)ppbVar15[(long)(int)pos + -1] & 0xffffffffffffff00 |
             (ulong)(*ppbVar15[(long)(int)pos + -1] == 0);
  }
  bVar26 = false;
  bVar28 = *(long *)((undefined *)register0x00000020 + -0x20) == *(long *)(in_FS_OFFSET + 0x28);
  if (bVar28) {
    return uVar21;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x1026b1;
  func_0x00101400();
  register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0xb8);
  do {
    lVar7 = (long)(int)pos;
    lVar12 = 2;
    pbVar24 = argv[lVar7];
    ppbVar11 = (byte **)(lVar7 * 8);
    pbVar18 = pbVar24;
    pbVar20 = &UNK_00107e18;
    do {
      uVar3 = (uint)pbVar20;
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      uVar3 = (uint)(pbVar20 + (ulong)bVar29 * -2 + 1);
      bVar26 = *pbVar18 < *pbVar20;
      bVar28 = *pbVar18 == *pbVar20;
      pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
      pbVar20 = pbVar20 + (ulong)bVar29 * -2 + 1;
    } while (bVar28);
    if ((!bVar26 && !bVar28) == bVar26) {
      pos = pos + 2;
      return (ulong)(argv + 1)[lVar7] & 0xffffffffffffff00 | (ulong)(*(argv + 1)[lVar7] == 0);
    }
    if (((*pbVar24 == 0x2d) && (pbVar24[1] != 0)) && (unaff_RBX = ppbVar15, pbVar24[2] == 0))
    goto code_r0x001020e0;
    puVar17 = (undefined *)register0x00000020 + -8;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102730;
    ppbVar23 = argv;
    beyond();
    if (uVar3 != 2) {
      if ((int)uVar3 < 3) {
        if (uVar3 != 1) goto code_r0x001027f6;
        uVar21 = (ulong)argv[(int)pos] & 0xffffffffffffff00 | (ulong)(*argv[(int)pos] != 0);
        goto code_r0x001027e6;
      }
      puVar16 = (undefined *)register0x00000020 + -8;
      if (uVar3 == 3) goto code_r0x00102c50;
      bVar26 = uVar3 < 4;
      bVar28 = uVar3 == 4;
      if (!bVar28) goto code_r0x001027f6;
      lVar7 = (long)(int)pos;
      lVar12 = 2;
      ppbVar11 = (byte **)(lVar7 * 8);
      pbVar24 = argv[lVar7];
      pbVar18 = &UNK_00107e18;
      break;
    }
    bVar26 = (undefined *)0xfffffffffffffff7 < (undefined *)register0x00000020 + -0x10;
    bVar28 = (undefined *)register0x00000020 == (undefined *)0x8;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -8);
  } while( true );
  while( true ) {
    lVar12 = lVar12 + -1;
    bVar26 = *pbVar24 < *pbVar18;
    bVar28 = *pbVar24 == *pbVar18;
    pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
    pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
    if (!bVar28) break;
    if (lVar12 == 0) break;
  }
  bVar27 = false;
  bVar26 = (!bVar26 && !bVar28) == bVar26;
  ppbVar23 = argv;
  if (bVar26) {
    pos = pos + 1;
    if ((int)pos < (int)argc) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x18) = 0x1027a7;
      uVar3 = three_arguments();
      return (ulong)(uVar3 ^ 1);
    }
  }
  else {
    lVar12 = 2;
    pbVar24 = argv[lVar7];
    pbVar18 = &UNK_00107e1a;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar27 = *pbVar24 < *pbVar18;
      bVar26 = *pbVar24 == *pbVar18;
      pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
      pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
    } while (bVar26);
    bVar28 = false;
    bVar26 = (!bVar27 && !bVar26) == bVar27;
    if (bVar26) {
      lVar12 = 2;
      pbVar24 = (argv + 3)[lVar7];
      pbVar18 = &UNK_00109349;
      do {
        if (lVar12 == 0) break;
        lVar12 = lVar12 + -1;
        bVar28 = *pbVar24 < *pbVar18;
        bVar26 = *pbVar24 == *pbVar18;
        pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
        pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
      } while (bVar26);
      if ((!bVar28 && !bVar26) == bVar28) {
        pos = pos + 1;
        *(undefined8 *)((undefined *)register0x00000020 + -0x18) = 0x10285e;
        uVar21 = two_arguments();
code_r0x001027e6:
        pos = pos + 1;
        return uVar21;
      }
    }
code_r0x001027f6:
    if ((int)pos < (int)argc) goto or;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x18) = 0x10286f;
  beyond();
  puVar17 = (undefined *)register0x00000020 + -0x10;
or:
  *(byte ***)(puVar17 + -8) = unaff_R15;
  *(ulong *)(puVar17 + -0x10) = unaff_R14;
  *(ulong *)(puVar17 + -0x18) = unaff_R13;
  *(ulong *)(puVar17 + -0x20) = unaff_R12;
  *(undefined **)(puVar17 + -0x28) = unaff_RBP;
  *(byte ***)(puVar17 + -0x30) = ppbVar15;
  unaff_R12 = (ulong)argc;
  puVar17[-0x39] = 0;
code_r0x00102898:
  cVar1 = (char)lVar12;
  uVar14 = 1;
  unaff_RBP = &UNK_00107e3e;
  uVar3 = pos;
  uVar4 = pos;
  if ((int)unaff_R12 <= (int)pos) goto code_r0x00102a5e;
  do {
    unaff_R15 = argv;
    cVar1 = (char)lVar12;
    ppbVar23 = (byte **)(long)(int)pos;
    ppbVar11 = (byte **)argv[(long)ppbVar23];
    unaff_R13 = (ulong)*(byte *)ppbVar11;
    iVar5 = (int)unaff_R12;
    uVar3 = pos;
    if (*(byte *)ppbVar11 == 0x21) {
      if (*(char *)((long)ppbVar11 + 1) != '\0') {
        uVar25 = 0;
        goto code_r0x00102a78;
      }
      uVar22 = pos + 1;
      ppbVar23 = (byte **)(ulong)uVar22;
      uVar4 = uVar22;
      if ((int)uVar22 < iVar5) {
        ppbVar23 = (byte **)(long)(int)uVar22;
        cVar1 = '\0';
        unaff_R14 = 1;
        ppbVar15 = (byte **)((long)ppbVar23 + (ulong)((iVar5 + -2) - pos) + 1);
        while( true ) {
          uVar25 = (uint)unaff_R14;
          ppbVar11 = (byte **)argv[(long)ppbVar23];
          uVar3 = (uint)ppbVar23;
          pos = uVar22;
          if (*(byte *)ppbVar11 != 0x21) break;
          if (*(char *)((long)ppbVar11 + 1) != '\0') goto code_r0x00102a68;
          ppbVar23 = (byte **)((long)ppbVar23 + 1);
          uVar4 = uVar3 + 1;
          if (ppbVar23 == ppbVar15) goto code_r0x00102a5e;
          unaff_R14 = (ulong)(uVar25 ^ 1);
          cVar1 = '\x01';
        }
        if (cVar1 != '\0') {
          pos = uVar3;
        }
        unaff_R13 = (ulong)*(byte *)ppbVar11;
        goto code_r0x00102947;
      }
    }
    else {
      unaff_R14 = 0;
code_r0x00102947:
      uVar25 = (uint)unaff_R14;
      if ((char)unaff_R13 != '(') goto code_r0x00102a78;
      if (*(char *)((long)ppbVar11 + 1) != '\0') goto code_r0x00102a78;
      pos = uVar3 + 1;
      ppbVar23 = (byte **)(ulong)pos;
      uVar4 = pos;
      if ((int)pos < iVar5) {
        if (iVar5 <= (int)(uVar3 + 2)) {
          uVar21 = 1;
          goto code_r0x001029c8;
        }
        uVar21 = 1;
        ppbVar11 = argv + (int)(uVar3 + 2);
        uVar4 = iVar5 - 1;
        bVar26 = uVar4 < uVar3;
        bVar28 = uVar4 == uVar3;
        break;
      }
    }
code_r0x00102a5e:
    do {
      pos = uVar4;
      uVar25 = (uint)unaff_R14;
      *(undefined8 *)(puVar17 + -0x50) = 0x102a63;
      beyond();
code_r0x00102a68:
      if (cVar1 != '\0') {
        pos = (uint)ppbVar23;
      }
code_r0x00102a78:
      uVar22 = (uint)unaff_R12;
      uVar4 = uVar22 - uVar3;
      bVar26 = uVar4 < 3;
      bVar28 = uVar4 == 3;
      if ((int)uVar4 < 4) {
        if (bVar28) goto code_r0x00102aaf;
joined_r0x00102b06:
        if ((((char)unaff_R13 == '-') && (*(char *)((long)ppbVar11 + 1) != '\0')) &&
           (*(char *)((long)ppbVar11 + 2) == '\0')) {
          *(undefined8 *)(puVar17 + -0x50) = 0x102b1b;
          uVar3 = unary_operator();
          unaff_R12 = (ulong)argc;
          goto code_r0x00102a13;
        }
        pos = uVar3 + 1;
        uVar25 = uVar25 ^ (char)unaff_R13 != '\0';
        uVar14 = uVar14 & uVar25;
        bVar9 = (byte)uVar14;
        bVar26 = uVar22 < pos;
        bVar28 = uVar22 == pos;
        if ((int)uVar22 <= (int)pos) goto code_r0x00102ae7;
      }
      else {
        lVar7 = 3;
        ppbVar15 = ppbVar11;
        pbVar24 = &UNK_00107dc6;
        do {
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          bVar26 = *(byte *)ppbVar15 < *pbVar24;
          bVar28 = *(byte *)ppbVar15 == *pbVar24;
          ppbVar15 = (byte **)((long)ppbVar15 + (ulong)bVar29 * -2 + 1);
          pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
        } while (bVar28);
        if ((!bVar26 && !bVar28) == bVar26) {
          pbVar24 = unaff_R15[(long)ppbVar23 + 2];
          *(undefined8 *)(puVar17 + -0x50) = 0x102aa7;
          cVar1 = binop(pbVar24);
          if (cVar1 == '\0') goto code_r0x00102aaf;
          *(undefined8 *)(puVar17 + -0x50) = 0x102b94;
          uVar3 = binary_operator(1);
          unaff_R12 = (ulong)argc;
        }
        else {
code_r0x00102aaf:
          pbVar24 = unaff_R15[(long)ppbVar23 + 1];
          *(undefined8 *)(puVar17 + -0x50) = 0x102ab9;
          cVar1 = binop(pbVar24);
          if (cVar1 == '\0') goto joined_r0x00102b06;
          *(undefined8 *)(puVar17 + -0x50) = 0x102b77;
          uVar3 = binary_operator(0);
          unaff_R12 = (ulong)argc;
        }
code_r0x00102a13:
        uVar25 = uVar25 ^ uVar3;
        uVar14 = uVar14 & uVar25;
        bVar9 = (byte)uVar14;
        uVar3 = (uint)unaff_R12;
        bVar26 = uVar3 < pos;
        bVar28 = uVar3 == pos;
        if ((int)uVar3 <= (int)pos) {
code_r0x00102ae7:
          puVar17[-0x39] = puVar17[-0x39] | bVar9;
          goto code_r0x00102aeb;
        }
      }
      unaff_R14 = (ulong)uVar25;
      pbVar24 = argv[(int)pos];
      lVar12 = 3;
      pbVar18 = pbVar24;
      pbVar20 = &UNK_00107e3e;
      do {
        if (lVar12 == 0) break;
        lVar12 = lVar12 + -1;
        bVar26 = *pbVar18 < *pbVar20;
        bVar28 = *pbVar18 == *pbVar20;
        pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
        pbVar20 = pbVar20 + (ulong)bVar29 * -2 + 1;
      } while (bVar28);
      cVar1 = (char)lVar12;
      if ((!bVar26 && !bVar28) != bVar26) {
        lVar12 = 3;
        pbVar18 = puVar17 + -0x39;
        bVar26 = false;
        *pbVar18 = *pbVar18 | (byte)uVar14;
        bVar28 = *pbVar18 == 0;
        pbVar18 = &UNK_00107e41;
        goto code_r0x00102b41;
      }
      uVar3 = pos + 1;
      uVar4 = uVar3;
      pos = uVar3;
    } while ((int)unaff_R12 <= (int)uVar3);
  } while( true );
  while( true ) {
    uVar22 = (int)uVar21 + 1;
    uVar21 = (ulong)uVar22;
    ppbVar11 = ppbVar11 + 1;
    bVar26 = uVar4 - uVar3 < uVar22;
    bVar28 = uVar4 - uVar3 == uVar22;
    if (bVar28) break;
    lVar7 = 2;
    pbVar24 = *ppbVar11;
    pbVar18 = &UNK_00109349;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar26 = *pbVar24 < *pbVar18;
      bVar28 = *pbVar24 == *pbVar18;
      pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
      pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
    } while (bVar28);
    if ((!bVar26 && !bVar28) == bVar26) break;
    if ((int)uVar21 == 4) {
      uVar21 = (ulong)(iVar5 - pos);
      break;
    }
  }
code_r0x001029c8:
  *(undefined8 *)(puVar17 + -0x50) = 0x1029d0;
  uVar3 = posixtest(uVar21);
  pbVar24 = argv[(int)pos];
  if (pbVar24 != (byte *)0x0) {
    if ((*pbVar24 == 0x29) && (pbVar24[1] == 0)) {
      unaff_R12 = (ulong)argc;
      pos = pos + 1;
      goto code_r0x00102a13;
    }
    *(undefined8 *)(puVar17 + -0x50) = 0x102be3;
    unaff_RBP = (undefined *)quote_n(1);
    *(undefined8 *)(puVar17 + -0x50) = 0x102bf4;
    uVar6 = quote_n(0,&UNK_00109349);
    *(undefined8 *)(puVar17 + -0x50) = 0x102c0a;
    uVar8 = func_0x001013c0(0,&UNK_00107e28,5);
    *(undefined8 *)(puVar17 + -0x50) = 0x102c1a;
    test_syntax_error(uVar8,uVar6,unaff_RBP);
  }
  *(undefined8 *)(puVar17 + -0x50) = 0x102c26;
  ppbVar15 = (byte **)quote(&UNK_00109349);
  *(undefined8 *)(puVar17 + -0x50) = 0x102c3c;
  uVar6 = func_0x001013c0(0,&UNK_00107e1c,5);
  *(undefined8 *)(puVar17 + -0x50) = 0x102c49;
  test_syntax_error(uVar6,ppbVar15);
  puVar16 = puVar17 + -0x48;
code_r0x00102c50:
  puVar17 = puVar16;
  lVar12 = (long)(int)pos;
  *(byte ***)(puVar17 + -8) = ppbVar15;
  pbVar24 = argv[lVar12 + 1];
  lVar7 = (lVar12 + 1) * 8;
  *(undefined8 *)(puVar17 + -0x10) = 0x102c7a;
  ppbVar11 = argv;
  uVar3 = pos;
  uVar21 = binop();
  ppbVar15 = argv;
  bVar26 = false;
  bVar28 = (char)uVar21 == '\0';
  if (!bVar28) {
    uVar6 = *(undefined8 *)(puVar17 + -8);
    *(byte ***)(puVar17 + -8) = unaff_R15;
    *(ulong *)(puVar17 + -0x10) = unaff_R14;
    *(ulong *)(puVar17 + -0x18) = unaff_R13;
    *(ulong *)(puVar17 + -0x20) = unaff_R12;
    *(undefined **)(puVar17 + -0x28) = unaff_RBP;
    *(undefined8 *)(puVar17 + -0x30) = uVar6;
    *(undefined8 *)(puVar17 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    uVar3 = pos + 1;
    uVar21 = 0;
    lVar7 = (long)(int)uVar3;
    uVar4 = argc - 2;
    ppbVar11 = (byte **)(ulong)uVar4;
    bVar26 = uVar4 < uVar3;
    bVar28 = uVar4 == uVar3;
    if ((int)uVar4 <= (int)uVar3) goto code_r0x00101be8;
    uVar10 = 3;
    pbVar24 = argv[lVar7 + 1];
    pbVar18 = &UNK_00107dc6;
    goto code_r0x00101bd8;
  }
  lVar13 = 2;
  pbVar18 = ppbVar11[lVar12];
  pbVar20 = &UNK_00107e18;
  do {
    pbVar19 = pbVar20;
    if (lVar13 == 0) break;
    lVar13 = lVar13 + -1;
    pbVar19 = pbVar20 + (ulong)bVar29 * -2 + 1;
    bVar26 = *pbVar18 < *pbVar20;
    bVar28 = *pbVar18 == *pbVar20;
    pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
    pbVar20 = pbVar19;
  } while (bVar28);
  bVar27 = false;
  bVar26 = (!bVar26 && !bVar28) == bVar26;
  if (!bVar26) {
    lVar13 = 2;
    pbVar18 = ppbVar11[lVar12];
    pbVar20 = &UNK_00107e1a;
    do {
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      bVar27 = *pbVar18 < *pbVar20;
      bVar26 = *pbVar18 == *pbVar20;
      pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
      pbVar20 = pbVar20 + (ulong)bVar29 * -2 + 1;
    } while (bVar26);
    bVar28 = false;
    bVar26 = (!bVar27 && !bVar26) == bVar27;
    if (bVar26) {
      lVar13 = 2;
      pbVar18 = ppbVar11[lVar12 + 2];
      pbVar20 = &UNK_00109349;
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        bVar28 = *pbVar18 < *pbVar20;
        bVar26 = *pbVar18 == *pbVar20;
        pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
        pbVar20 = pbVar20 + (ulong)bVar29 * -2 + 1;
      } while (bVar26);
      bVar26 = (!bVar28 && !bVar26) == bVar28;
      if (bVar26) {
        pos = uVar3 + 3;
        return uVar21 & 0xffffffffffffff00 | (ulong)(*pbVar24 != 0);
      }
    }
    bVar28 = false;
    lVar12 = 3;
    pbVar18 = pbVar24;
    pbVar20 = &UNK_00107e3e;
    do {
      pbVar19 = pbVar20;
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      pbVar19 = pbVar20 + (ulong)bVar29 * -2 + 1;
      bVar28 = *pbVar18 < *pbVar20;
      bVar26 = *pbVar18 == *pbVar20;
      pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
      pbVar20 = pbVar19;
    } while (bVar26);
    bVar27 = false;
    bVar26 = (!bVar28 && !bVar26) == bVar28;
    if (!bVar26) {
      lVar12 = 3;
      pbVar18 = pbVar24;
      pbVar20 = &UNK_00107e41;
      do {
        pbVar19 = pbVar20;
        if (lVar12 == 0) break;
        lVar12 = lVar12 + -1;
        pbVar19 = pbVar20 + (ulong)bVar29 * -2 + 1;
        bVar27 = *pbVar18 < *pbVar20;
        bVar26 = *pbVar18 == *pbVar20;
        pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
        pbVar20 = pbVar19;
      } while (bVar26);
      if ((!bVar27 && !bVar26) != bVar27) {
        *(undefined8 *)(puVar17 + -0x10) = 0x102d70;
        lVar7 = quote(pbVar24);
        *(undefined8 *)(puVar17 + -0x10) = 0x102d86;
        pbVar19 = (byte *)func_0x001013c0(0,&UNK_00107e44,5);
        *(undefined8 *)(puVar17 + -0x10) = 0x102d93;
        test_syntax_error(pbVar19,lVar7);
        goto code_r0x00102d93;
      }
    }
    ppbVar23 = (byte **)(ulong)uVar3;
    if ((int)argc <= (int)uVar3) goto code_r0x00102d93;
    ppbVar15 = *(byte ***)(puVar17 + -8);
    goto or;
  }
  pos = uVar3 + 1;
  if ((int)pos < (int)argc) {
    *(undefined8 *)(puVar17 + -0x10) = 0x102cbe;
    uVar3 = two_arguments();
    return (ulong)(uVar3 ^ 1);
  }
code_r0x00102d93:
  *(undefined8 *)(puVar17 + -0x10) = 0x102d98;
  beyond();
  uVar6 = program_name;
  *(ulong *)(puVar17 + -0x10) = unaff_R13;
  *(ulong *)(puVar17 + -0x18) = unaff_R12;
  *(undefined **)(puVar17 + -0x20) = unaff_RBP;
  *(long *)(puVar17 + -0x28) = lVar7;
  *(undefined8 *)(puVar17 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((int)pbVar19 == 0) goto code_r0x00102dfd;
  *(undefined8 *)(puVar17 + -0xb8) = 0x102ddd;
  uVar8 = func_0x001013c0(0,&UNK_00108010,5);
  *(undefined8 *)(puVar17 + -0xb8) = 0x102df6;
  func_0x001015c0(stderr,1,uVar8,uVar6);
  do {
    *(undefined8 *)(puVar17 + -0xb8) = 0x102dfd;
    func_0x001015a0((ulong)pbVar19 & 0xffffffff);
code_r0x00102dfd:
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102e17;
    uVar8 = func_0x001013c0(0,&UNK_00108038,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102e22;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102e3c;
    uVar8 = func_0x001013c0(0,&UNK_00108090,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102e47;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102e61;
    uVar8 = func_0x001013c0(0,&UNK_001080c8,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102e6c;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102e86;
    uVar8 = func_0x001013c0(0,&UNK_001080f8,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102e91;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102eab;
    uVar8 = func_0x001013c0(0,&UNK_00108130,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102eb6;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102ed0;
    uVar8 = func_0x001013c0(0,&UNK_001081a8,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102edb;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102ef5;
    uVar8 = func_0x001013c0(0,&UNK_001082a8,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102f00;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102f1a;
    uVar8 = func_0x001013c0(0,&UNK_001083a8,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102f25;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102f3f;
    uVar8 = func_0x001013c0(0,&UNK_00108520,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102f4a;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102f64;
    uVar8 = func_0x001013c0(0,&UNK_001085e0,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102f6f;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102f89;
    uVar8 = func_0x001013c0(0,&UNK_00108690,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102f94;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102fae;
    uVar8 = func_0x001013c0(0,&UNK_001087a8,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102fb9;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102fd3;
    uVar8 = func_0x001013c0(0,&UNK_00108910,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x102fde;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x102ff8;
    uVar8 = func_0x001013c0(0,&UNK_00108a30,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x103003;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x10301d;
    uVar8 = func_0x001013c0(0,&UNK_00108b18,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x103028;
    func_0x00101470(uVar8,uVar6);
    uVar6 = stdout;
    *(undefined8 *)(puVar17 + -0xb8) = 0x103042;
    uVar8 = func_0x001013c0(0,&UNK_00108b98,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x10304d;
    func_0x00101470(uVar8,uVar6);
    *(undefined8 *)(puVar17 + -0xb8) = 0x103060;
    uVar6 = func_0x001013c0(0,&UNK_00107e66,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x103076;
    uVar8 = func_0x001013c0(0,&UNK_00108c20,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x10308f;
    func_0x00101550(1,uVar8,uVar6);
    *(undefined8 *)(puVar17 + -0x50) = 0;
    *(undefined8 *)(puVar17 + -0x48) = 0;
    *(undefined8 *)(puVar17 + -0xb0) = 0x107e72;
    *(undefined8 *)(puVar17 + -0x80) = 0x107eb3;
    *(undefined8 *)(puVar17 + -0xa8) = 0x107e74;
    *(undefined8 *)(puVar17 + -0x70) = 0x107ebd;
    *(undefined8 *)(puVar17 + -0xa0) = 0x107eec;
    *(undefined8 *)(puVar17 + -0x60) = 0x107ec7;
    *(undefined8 *)(puVar17 + -0x98) = 0x107e84;
    *(undefined8 *)(puVar17 + -0x90) = 0x107e9a;
    *(undefined8 *)(puVar17 + -0x88) = 0x107ea4;
    *(undefined8 *)(puVar17 + -0x78) = 0x107ea4;
    *(undefined8 *)(puVar17 + -0x68) = 0x107ea4;
    *(undefined8 *)(puVar17 + -0x58) = 0x107ea4;
    ppbVar15 = (byte **)(puVar17 + -0xb0);
    do {
      ppbVar11 = ppbVar15;
      ppbVar15 = ppbVar11 + 2;
      pbVar24 = *ppbVar15;
      bVar26 = false;
      bVar28 = pbVar24 == (byte *)0x0;
      if (bVar28) break;
      lVar7 = 5;
      pbVar18 = &UNK_00107e61;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar26 = *pbVar18 < *pbVar24;
        bVar28 = *pbVar18 == *pbVar24;
        pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
        pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
      } while (bVar28);
    } while ((!bVar26 && !bVar28) != bVar26);
    pbVar24 = ppbVar11[3];
    if (pbVar24 == (byte *)0x0) {
      *(undefined8 *)(puVar17 + -0xb8) = 0x103220;
      uVar6 = func_0x001013c0(0,&UNK_00107ed1,5);
      *(undefined8 *)(puVar17 + -0xb8) = 0x10323d;
      func_0x00101550(1,uVar6,&UNK_00107ee8,&UNK_00108ce0);
      *(undefined8 *)(puVar17 + -0xb8) = 0x103249;
      lVar7 = func_0x00101540(5,0);
      if (lVar7 != 0) {
        *(undefined8 *)(puVar17 + -0xb8) = 0x103262;
        iVar5 = func_0x00101350(lVar7,&UNK_00107ef6,3);
        if (iVar5 != 0) {
          pbVar24 = &UNK_00107e61;
          goto code_r0x001032b0;
        }
      }
      pbVar24 = &UNK_00107e61;
      puVar16 = &UNK_00107e8e;
      *(undefined8 *)(puVar17 + -0xb8) = 0x103287;
      uVar6 = func_0x001013c0(0,&UNK_00107efa,5);
      *(undefined8 *)(puVar17 + -0xb8) = 0x1032a4;
      func_0x00101550(1,uVar6,&UNK_00108ce0,&UNK_00107e61);
    }
    else {
      *(undefined8 *)(puVar17 + -0xb8) = 0x10315f;
      uVar6 = func_0x001013c0(0,&UNK_00107ed1,5);
      *(undefined8 *)(puVar17 + -0xb8) = 0x10317c;
      func_0x00101550(1,uVar6,&UNK_00107ee8,&UNK_00108ce0);
      *(undefined8 *)(puVar17 + -0xb8) = 0x103188;
      lVar7 = func_0x00101540(5,0);
      if (lVar7 != 0) {
        *(undefined8 *)(puVar17 + -0xb8) = 0x1031a1;
        iVar5 = func_0x00101350(lVar7,&UNK_00107ef6,3);
        if (iVar5 != 0) {
code_r0x001032b0:
          uVar6 = stdout;
          *(undefined8 *)(puVar17 + -0xb8) = 0x1032ca;
          uVar8 = func_0x001013c0(0,&UNK_00108d08,5);
          *(undefined8 *)(puVar17 + -0xb8) = 0x1032d5;
          func_0x00101470(uVar8,uVar6);
        }
      }
      *(undefined8 *)(puVar17 + -0xb8) = 0x1031bc;
      uVar6 = func_0x001013c0(0,&UNK_00107efa,5);
      *(undefined8 *)(puVar17 + -0xb8) = 0x1031d9;
      func_0x00101550(1,uVar6,&UNK_00108ce0,&UNK_00107e61);
      puVar16 = &UNK_00107e8e;
      if (pbVar24 != &UNK_00107e61) {
        puVar16 = &UNK_00107ee7;
      }
    }
    *(undefined8 *)(puVar17 + -0xb8) = 0x103201;
    uVar6 = func_0x001013c0(0,&UNK_00108d50,5);
    *(undefined8 *)(puVar17 + -0xb8) = 0x103216;
    func_0x00101550(1,uVar6,pbVar24,puVar16);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    bVar26 = *pbVar24 < *pbVar18;
    bVar28 = *pbVar24 == *pbVar18;
    pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
    pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
    if (!bVar28) break;
code_r0x00101bd8:
    if (uVar10 == 0) break;
  }
  bVar9 = (!bVar26 && !bVar28) - bVar26;
  ppbVar11 = (byte **)(uVar10 & 0xffffffffffffff00 | (ulong)bVar9);
  if (bVar9 == 0) {
    uVar21 = 1;
    pos = uVar3;
  }
code_r0x00101be8:
  uVar3 = pos;
  pbVar24 = argv[lVar7];
  bVar9 = *pbVar24;
  if (bVar9 == 0x2d) {
    bVar29 = pbVar24[1];
    cVar1 = (char)uVar21;
    if ((bVar29 == 0x6c) || (bVar29 == 0x67)) {
      bVar9 = pbVar24[2];
      ppbVar11 = (byte **)(ulong)bVar9;
      if ((bVar9 != 0x65) && (bVar9 != 0x74)) goto code_r0x00101d06;
      if (pbVar24[3] != 0) {
        if (bVar29 == 0x6e) goto code_r0x00101f19;
        goto code_r0x00101d18;
      }
code_r0x00101e91:
      *(undefined8 *)(puVar17 + -0x1b0) = 0x101e96;
      uVar6 = find_int();
      if (cVar1 == '\0') {
        pbVar24 = argv[lVar7 + 1];
        *(undefined8 *)(puVar17 + -0x1b0) = 0x10201a;
        uVar8 = find_int(pbVar24);
      }
      else {
        pbVar24 = argv[lVar7 + 2];
        *(undefined8 *)(puVar17 + -0x1b0) = 0x101eb3;
        uVar8 = func_0x001013e0(pbVar24);
        *(undefined8 *)(puVar17 + -0x1b0) = 0x101ec3;
        uVar8 = umaxtostr(uVar8,puVar17 + -0x58);
      }
      *(undefined8 *)(puVar17 + -0x1b0) = 0x101ece;
      iVar5 = strintcmp(uVar6,uVar8);
      bVar26 = argv[lVar7][2] == 0x65;
      bVar29 = argv[lVar7][1];
      pos = pos + 3;
      if (bVar29 == 0x6c) {
        uVar21 = (ulong)(iVar5 < (int)(uint)bVar26);
      }
      else {
        if (bVar29 == 0x67) {
          uVar21 = (ulong)((int)-(uint)bVar26 < iVar5);
        }
        else {
          uVar21 = (ulong)((iVar5 != 0) == bVar26);
        }
      }
      goto code_r0x00101c4f;
    }
code_r0x00101d06:
    if (bVar29 == 0x65) {
      bVar29 = pbVar24[2];
      if (bVar29 == 0x71) {
code_r0x00101f90:
        if (pbVar24[3] == 0) goto code_r0x00101e91;
      }
      else {
code_r0x00101ddd:
        if ((bVar29 == 0x66) && (pbVar24[3] == 0)) {
          pos = pos + 3;
          if (cVar1 != '\0') goto code_r0x001020c1;
          pbVar24 = argv[lVar7 + -1];
          *(undefined8 *)(puVar17 + -0x1b0) = 0x101e14;
          iVar5 = func_0x001014d0(1,pbVar24,puVar17 + -0x198);
          if (iVar5 == 0) {
            pbVar24 = ppbVar15[lVar7 + 1];
            *(undefined8 *)(puVar17 + -0x1b0) = 0x101e33;
            iVar5 = func_0x001014d0(1,pbVar24,puVar17 + -0x108);
            if ((iVar5 == 0) && (*(long *)(puVar17 + -0x198) == *(long *)(puVar17 + -0x108))) {
              uVar21 = (ulong)(*(long *)(puVar17 + -400) == *(long *)(puVar17 + -0x100));
            }
          }
          goto code_r0x00101c4f;
        }
      }
      goto code_r0x00101f9a;
    }
    if (bVar29 == 0x6e) {
      ppbVar11 = (byte **)(ulong)pbVar24[2];
      if (pbVar24[2] == 0x65) goto code_r0x00101f90;
code_r0x00101f19:
      if (((char)ppbVar11 != 't') || (pbVar24[3] != 0)) goto code_r0x00101f9a;
      pos = pos + 3;
      if (cVar1 != '\0') {
        puVar16 = &UNK_00107d9b;
        goto code_r0x001020ae;
      }
      unaff_RBP = puVar17 + -0x108;
      pbVar24 = argv[lVar7 + -1];
      *(undefined8 *)(puVar17 + -0x1b0) = 0x101f4e;
      iVar5 = func_0x001014d0(1,pbVar24,unaff_RBP);
      ppbVar11 = ppbVar15 + lVar7 + 1;
      if (iVar5 == 0) {
        pbVar24 = *ppbVar11;
        lVar7 = *(long *)(puVar17 + -0xb0);
        uVar6 = *(undefined8 *)(puVar17 + -0xa8);
        *(undefined8 *)(puVar17 + -0x1b0) = 0x101f77;
        iVar5 = func_0x001014d0(1,pbVar24,unaff_RBP);
        if (iVar5 == 0) {
          if ((*(long *)(puVar17 + -0xb0) <= lVar7) &&
             (uVar21 = 1, lVar7 <= *(long *)(puVar17 + -0xb0))) {
            uVar21 = (ulong)(0 < (int)uVar6 - (int)*(undefined8 *)(puVar17 + -0xa8));
          }
        }
        else {
          uVar21 = 1;
        }
        goto code_r0x00101c4f;
      }
code_r0x00101fc8:
      pbVar24 = *ppbVar11;
      *(undefined8 *)(puVar17 + -0x1b0) = 0x101fd8;
      func_0x001014d0(1,pbVar24,unaff_RBP);
      goto code_r0x00101c4f;
    }
code_r0x00101d18:
    if (bVar29 != 0x6f) {
      if (bVar29 == 0x65) {
        bVar29 = pbVar24[2];
        goto code_r0x00101ddd;
      }
code_r0x00101f9a:
      *(undefined8 *)(puVar17 + -0x1b0) = 0x101fa2;
      uVar6 = quote(pbVar24);
      *(undefined8 *)(puVar17 + -0x1b0) = 0x101fb8;
      uVar8 = func_0x001013c0(0,&UNK_00107de0,5);
      *(undefined8 *)(puVar17 + -0x1b0) = 0x101fc5;
      test_syntax_error(uVar8,uVar6);
      goto code_r0x00101fc8;
    }
    if ((pbVar24[2] != 0x74) || (pbVar24[3] != 0)) goto code_r0x00101f9a;
    pos = pos + 3;
    if (cVar1 == '\0') {
      pbVar24 = argv[lVar7 + -1];
      *(undefined8 *)(puVar17 + -0x1b0) = 0x101d5f;
      iVar5 = func_0x001014d0(1,pbVar24,puVar17 + -0x108);
      if (iVar5 == 0) {
        unaff_R12 = *(ulong *)(puVar17 + -0xb0);
        *(undefined8 *)(puVar17 + -0x1a0) = *(undefined8 *)(puVar17 + -0xa8);
      }
      pbVar24 = ppbVar15[lVar7 + 1];
      *(undefined8 *)(puVar17 + -0x1b0) = 0x101d8c;
      iVar2 = func_0x001014d0(1,pbVar24,puVar17 + -0x108);
      if (iVar2 == 0) {
        lVar7 = *(long *)(puVar17 + -0xb0);
        uVar21 = (ulong)(iVar5 != 0 || (long)unaff_R12 < lVar7);
        if ((iVar5 == 0 && (long)unaff_R12 >= lVar7) && ((long)unaff_R12 <= lVar7)) {
          uVar21 = (ulong)((uint)(*(int *)(puVar17 + -0x1a0) - (int)*(undefined8 *)(puVar17 + -0xa8)
                                 ) >> 0x1f);
        }
      }
      goto code_r0x00101c4f;
    }
  }
  else {
    bVar26 = bVar9 < 0x3d;
    bVar28 = bVar9 == 0x3d;
    if (bVar28) {
      bVar9 = pbVar24[1];
      if (bVar9 == 0) {
code_r0x00101cb8:
        pbVar24 = argv[(long)(int)pos + 2];
        pbVar18 = argv[(long)(int)pos];
        *(undefined8 *)(puVar17 + -0x1b0) = 0x101cd4;
        iVar5 = func_0x00101490(pbVar18,pbVar24);
        uVar21 = (ulong)(iVar5 == 0);
        pos = uVar3 + 3;
        goto code_r0x00101c4f;
      }
      bVar26 = bVar9 < 0x3d;
      bVar28 = bVar9 == 0x3d;
      if (bVar28) {
        bVar26 = false;
        bVar28 = pbVar24[2] == 0;
        if (bVar28) goto code_r0x00101cb8;
      }
    }
    lVar7 = 3;
    pbVar18 = &UNK_00107d44;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar26 = *pbVar24 < *pbVar18;
      bVar28 = *pbVar24 == *pbVar18;
      pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
      pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
    } while (bVar28);
    if ((!bVar26 && !bVar28) == bVar26) {
      pbVar24 = argv[(long)(int)pos + 2];
      pbVar18 = argv[(long)(int)pos];
      *(undefined8 *)(puVar17 + -0x1b0) = 0x101c40;
      iVar5 = func_0x00101490(pbVar18,pbVar24);
      uVar21 = (ulong)(iVar5 != 0);
      pos = uVar3 + 3;
code_r0x00101c4f:
      if (*(long *)(puVar17 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar21;
      }
      *(undefined8 *)(puVar17 + -0x1b0) = 0x10209d;
      func_0x00101400();
    }
    *(undefined8 *)(puVar17 + -0x1b0) = 0x1020a2;
    func_0x00101320();
  }
  puVar16 = &UNK_00107dc9;
code_r0x001020ae:
  do {
    *(undefined8 *)(puVar17 + -0x1b0) = 0x1020b5;
    uVar6 = func_0x001013c0(0,puVar16,5);
    *(undefined8 *)(puVar17 + -0x1b0) = 0x1020c1;
    test_syntax_error(uVar6,0);
code_r0x001020c1:
    puVar16 = &UNK_00107db2;
  } while( true );
  while( true ) {
    lVar12 = lVar12 + -1;
    bVar26 = *pbVar24 < *pbVar18;
    bVar28 = *pbVar24 == *pbVar18;
    pbVar24 = pbVar24 + (ulong)bVar29 * -2 + 1;
    pbVar18 = pbVar18 + (ulong)bVar29 * -2 + 1;
    if (!bVar28) break;
code_r0x00102b41:
    if (lVar12 == 0) break;
  }
  if ((!bVar26 && !bVar28) != bVar26) {
code_r0x00102aeb:
    return (ulong)(byte)puVar17[-0x39];
  }
  pos = pos + 1;
  goto code_r0x00102898;
}

