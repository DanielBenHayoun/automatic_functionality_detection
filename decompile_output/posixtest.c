
/* WARNING: Removing unreachable block (ram,0x00101ba4) */
/* WARNING: Removing unreachable block (ram,0x00101ff0) */

ulong posixtest(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
               byte **param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  byte **ppbVar11;
  long lVar12;
  int extraout_EDX;
  long lVar13;
  uint uVar14;
  byte **ppbVar15;
  byte **unaff_RBX;
  undefined *puVar16;
  undefined *unaff_RBP;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  uint uVar21;
  byte **in_R10;
  ulong unaff_R12;
  byte *pbVar22;
  ulong unaff_R13;
  uint uVar23;
  ulong unaff_R14;
  byte **unaff_R15;
  long in_FS_OFFSET;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  byte bVar27;
  
  bVar27 = 0;
code_r0x00102730:
  uVar3 = (uint)param_1;
  if (uVar3 == 2) {
    bVar24 = (undefined *)0xfffffffffffffff7 < (undefined *)register0x00000020 + -8;
    bVar26 = (undefined *)register0x00000020 == (undefined *)0x0;
    puVar16 = (undefined *)register0x00000020;
    do {
      ppbVar15 = argv;
      lVar13 = (long)(int)pos;
      param_4 = 2;
      pbVar22 = argv[lVar13];
      in_R10 = (byte **)(lVar13 * 8);
      pbVar17 = pbVar22;
      pbVar19 = &UNK_00107e18;
      do {
        param_1 = pbVar19;
        if (param_4 == 0) break;
        param_4 = param_4 + -1;
        param_1 = pbVar19 + (ulong)bVar27 * -2 + 1;
        bVar24 = *pbVar17 < *pbVar19;
        bVar26 = *pbVar17 == *pbVar19;
        pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
        pbVar19 = param_1;
      } while (bVar26);
      if ((!bVar24 && !bVar26) == bVar24) {
        pos = pos + 2;
        return (ulong)(argv + 1)[lVar13] & 0xffffffffffffff00 | (ulong)(*(argv + 1)[lVar13] == 0);
      }
      if (((*pbVar22 != 0x2d) || (pbVar22[1] == 0)) || (pbVar22[2] != 0)) goto code_r0x00102727;
      *(undefined **)(puVar16 + -8) = unaff_RBP;
      *(byte ***)(puVar16 + -0x10) = unaff_RBX;
      *(undefined8 *)(puVar16 + -0x20) = *(undefined8 *)(in_FS_OFFSET + 0x28);
      switch(argv[(int)pos][1]) {
      case 0x47:
        *(undefined8 *)(puVar16 + -0xc0) = 0x1025f5;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x10260e;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        if (iVar5 != 0) goto code_r0x00102546;
        *(undefined8 *)(puVar16 + -0xc0) = 0x10261b;
        ppbVar15 = (byte **)func_0x00101330();
        *(undefined4 *)ppbVar15 = 0;
        *(undefined8 *)(puVar16 + -0xc0) = 0x102629;
        uVar10 = func_0x00101510();
        iVar5 = (int)uVar10;
        if (iVar5 == -1) {
          uVar10 = 0;
          uVar20 = 0;
          if (*(int *)ppbVar15 != 0) break;
        }
        uVar20 = uVar10 & 0xffffffffffffff00 | (ulong)(*(int *)(puVar16 + -0x98) == iVar5);
        break;
      default:
        *(undefined8 *)(puVar16 + -0xc0) = 0x10266b;
        ppbVar15 = (byte **)quote();
        *(undefined8 *)(puVar16 + -0xc0) = 0x102681;
        uVar6 = func_0x001013c0(0,&UNK_00107dfc,5);
        *(undefined8 *)(puVar16 + -0xc0) = 0x10268e;
        test_syntax_error(uVar6);
        iVar5 = extraout_EDX;
code_r0x00102690:
        uVar20 = 0;
        if (*(int *)ppbVar15 == 0) {
code_r0x0010265a:
          uVar20 = uVar20 & 0xffffffffffffff00 | (ulong)(*(int *)(puVar16 + -0x9c) == iVar5);
        }
        break;
      case 0x4c:
      case 0x68:
        *(undefined8 *)(puVar16 + -0xc0) = 0x1025ad;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x1025c6;
        iVar5 = func_0x001013f0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(*(uint *)(puVar16 + -0xa0) & 0xf000 |
                          (uint)((*(uint *)(puVar16 + -0xa0) & 0xf000) == 0xa000));
        }
        break;
      case 0x4e:
        *(undefined8 *)(puVar16 + -0xc0) = 0x102555;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x10256e;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        if (iVar5 != 0) goto code_r0x00102546;
        uVar20 = 0;
        lVar13 = *(long *)(puVar16 + -0x60);
        lVar8 = *(long *)(puVar16 + -0x70);
        if ((*(long *)(puVar16 + -0x70) == lVar13 || lVar8 < lVar13) &&
           (uVar20 = 1, lVar13 <= lVar8)) {
          uVar20 = (ulong)(0 < (int)*(undefined8 *)(puVar16 + -0x58) -
                               (int)*(undefined8 *)(puVar16 + -0x68));
        }
        break;
      case 0x4f:
        *(undefined8 *)(puVar16 + -0xc0) = 0x102525;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x10253e;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        if (iVar5 == 0) {
          *(undefined8 *)(puVar16 + -0xc0) = 0x102645;
          ppbVar15 = (byte **)func_0x00101330();
          *(undefined4 *)ppbVar15 = 0;
          *(undefined8 *)(puVar16 + -0xc0) = 0x102653;
          uVar20 = func_0x00101450();
          iVar5 = (int)uVar20;
          if (iVar5 == -1) goto code_r0x00102690;
          goto code_r0x0010265a;
        }
code_r0x00102546:
        uVar20 = 0;
        break;
      case 0x53:
        *(undefined8 *)(puVar16 + -0xc0) = 0x1024e5;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x1024fe;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(*(uint *)(puVar16 + -0xa0) & 0xf000 |
                          (uint)((*(uint *)(puVar16 + -0xa0) & 0xf000) == 0xc000));
        }
        break;
      case 0x62:
        *(undefined8 *)(puVar16 + -0xc0) = 0x1024a5;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x1024be;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(*(uint *)(puVar16 + -0xa0) & 0xf000 |
                          (uint)((*(uint *)(puVar16 + -0xa0) & 0xf000) == 0x6000));
        }
        break;
      case 99:
        *(undefined8 *)(puVar16 + -0xc0) = 0x102465;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x10247e;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(*(uint *)(puVar16 + -0xa0) & 0xf000 |
                          (uint)((*(uint *)(puVar16 + -0xa0) & 0xf000) == 0x2000));
        }
        break;
      case 100:
        *(undefined8 *)(puVar16 + -0xc0) = 0x102425;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x10243e;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(*(uint *)(puVar16 + -0xa0) & 0xf000 |
                          (uint)((*(uint *)(puVar16 + -0xa0) & 0xf000) == 0x4000));
        }
        break;
      case 0x65:
        *(undefined8 *)(puVar16 + -0xc0) = 0x1023f5;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x10240e;
        uVar20 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = uVar20 & 0xffffffffffffff00 | (ulong)((int)uVar20 == 0);
        break;
      case 0x66:
        *(undefined8 *)(puVar16 + -0xc0) = 0x1023b5;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x1023ce;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(*(uint *)(puVar16 + -0xa0) & 0xf000 |
                          (uint)((*(uint *)(puVar16 + -0xa0) & 0xf000) == 0x8000));
        }
        break;
      case 0x67:
        *(undefined8 *)(puVar16 + -0xc0) = 0x102375;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x10238e;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(*(uint *)(puVar16 + -0xa0) >> 10 & 1);
        }
        break;
      case 0x6b:
        *(undefined8 *)(puVar16 + -0xc0) = 0x102335;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x10234e;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(*(uint *)(puVar16 + -0xa0) >> 9 & 1);
        }
        break;
      case 0x6e:
        *(undefined8 *)(puVar16 + -0xc0) = 0x102315;
        unary_advance();
        uVar20 = (ulong)ppbVar15[(long)(int)pos + -1] & 0xffffffffffffff00 |
                 (ulong)(*ppbVar15[(long)(int)pos + -1] != 0);
        break;
      case 0x70:
        *(undefined8 *)(puVar16 + -0xc0) = 0x1022cd;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x1022e6;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(*(uint *)(puVar16 + -0xa0) & 0xf000 |
                          (uint)((*(uint *)(puVar16 + -0xa0) & 0xf000) == 0x1000));
        }
        break;
      case 0x72:
        *(undefined8 *)(puVar16 + -0xc0) = 0x1022a5;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x1022bb;
        uVar20 = func_0x00101580(pbVar22,4);
        uVar20 = uVar20 & 0xffffffffffffff00 | (ulong)((int)uVar20 == 0);
        break;
      case 0x73:
        *(undefined8 *)(puVar16 + -0xc0) = 0x10226d;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x102286;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(0 < *(long *)(puVar16 + -0x88));
        }
        break;
      case 0x74:
        *(undefined8 *)(puVar16 + -0xc0) = 0x1021dd;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x1021ee;
        unaff_RBP = (undefined *)find_int(pbVar22);
        *(undefined8 *)(puVar16 + -0xc0) = 0x1021f6;
        ppbVar15 = (byte **)func_0x00101330();
        *(undefined4 *)ppbVar15 = 0;
        *(undefined8 *)(puVar16 + -0xc0) = 0x10220e;
        uVar10 = func_0x001014a0(unaff_RBP,0,10);
        uVar20 = 0;
        if ((*(int *)ppbVar15 != 0x22) && (uVar10 < 0x80000000)) {
          *(undefined8 *)(puVar16 + -0xc0) = 0x10222e;
          uVar20 = func_0x00101380();
          uVar20 = uVar20 & 0xffffffffffffff00 | (ulong)((int)uVar20 != 0);
        }
        break;
      case 0x75:
        *(undefined8 *)(puVar16 + -0xc0) = 0x1021a5;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x1021be;
        iVar5 = func_0x001014d0(1,pbVar22,puVar16 + -0xb8);
        uVar20 = 0;
        if (iVar5 == 0) {
          uVar20 = (ulong)(*(uint *)(puVar16 + -0xa0) >> 0xb & 1);
        }
        break;
      case 0x77:
        *(undefined8 *)(puVar16 + -0xc0) = 0x102245;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x10225b;
        uVar20 = func_0x00101580(pbVar22,2);
        uVar20 = uVar20 & 0xffffffffffffff00 | (ulong)((int)uVar20 == 0);
        break;
      case 0x78:
        *(undefined8 *)(puVar16 + -0xc0) = 0x10217d;
        unary_advance();
        pbVar22 = ppbVar15[(long)(int)pos + -1];
        *(undefined8 *)(puVar16 + -0xc0) = 0x102193;
        uVar20 = func_0x00101580(pbVar22,1);
        uVar20 = uVar20 & 0xffffffffffffff00 | (ulong)((int)uVar20 == 0);
        break;
      case 0x7a:
        *(undefined8 *)(puVar16 + -0xc0) = 0x102135;
        unary_advance();
        uVar20 = (ulong)ppbVar15[(long)(int)pos + -1] & 0xffffffffffffff00 |
                 (ulong)(*ppbVar15[(long)(int)pos + -1] == 0);
      }
      bVar24 = false;
      bVar26 = *(long *)(puVar16 + -0x20) == *(long *)(in_FS_OFFSET + 0x28);
      if (bVar26) {
        return uVar20;
      }
      *(undefined8 *)(puVar16 + -0xc0) = 0x1026b1;
      func_0x00101400();
      unaff_RBX = ppbVar15;
      puVar16 = puVar16 + -0xb8;
    } while( true );
  }
  if ((int)uVar3 < 3) {
    if (uVar3 == 1) {
      uVar20 = (ulong)argv[(int)pos] & 0xffffffffffffff00 | (ulong)(*argv[(int)pos] != 0);
code_r0x001027e6:
      pos = pos + 1;
      return uVar20;
    }
  }
  else {
    if (uVar3 == 3) goto code_r0x00102c50;
    bVar24 = uVar3 < 4;
    bVar26 = uVar3 == 4;
    if (!bVar26) goto code_r0x001027f6;
    lVar13 = (long)(int)pos;
    param_4 = 2;
    in_R10 = (byte **)(lVar13 * 8);
    pbVar22 = argv[lVar13];
    pbVar17 = &UNK_00107e18;
    do {
      if (param_4 == 0) break;
      param_4 = param_4 + -1;
      bVar24 = *pbVar22 < *pbVar17;
      bVar26 = *pbVar22 == *pbVar17;
      pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
    } while (bVar26);
    bVar25 = false;
    bVar24 = (!bVar24 && !bVar26) == bVar24;
    param_6 = argv;
    if (bVar24) {
      pos = pos + 1;
      if ((int)pos < (int)argc) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x1027a7;
        uVar3 = three_arguments();
        return (ulong)(uVar3 ^ 1);
      }
      goto code_r0x0010286a;
    }
    param_4 = 2;
    pbVar22 = argv[lVar13];
    pbVar17 = &UNK_00107e1a;
    do {
      if (param_4 == 0) break;
      param_4 = param_4 + -1;
      bVar25 = *pbVar22 < *pbVar17;
      bVar24 = *pbVar22 == *pbVar17;
      pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
    } while (bVar24);
    bVar26 = false;
    bVar24 = (!bVar25 && !bVar24) == bVar25;
    if (bVar24) {
      param_4 = 2;
      pbVar22 = (argv + 3)[lVar13];
      pbVar17 = &UNK_00109349;
      do {
        if (param_4 == 0) break;
        param_4 = param_4 + -1;
        bVar26 = *pbVar22 < *pbVar17;
        bVar24 = *pbVar22 == *pbVar17;
        pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
      } while (bVar24);
      if ((!bVar26 && !bVar24) == bVar26) {
        pos = pos + 1;
        *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x10285e;
        uVar20 = two_arguments();
        goto code_r0x001027e6;
      }
    }
  }
code_r0x001027f6:
  if ((int)pos < (int)argc) goto or;
code_r0x0010286a:
  *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x10286f;
  beyond();
  register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -8);
or:
  *(byte ***)((undefined *)register0x00000020 + -8) = unaff_R15;
  *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
  *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
  *(ulong *)((undefined *)register0x00000020 + -0x20) = unaff_R12;
  *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
  *(byte ***)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
  unaff_R12 = (ulong)argc;
  ((undefined *)register0x00000020)[-0x39] = 0;
code_r0x00102898:
  cVar1 = (char)param_4;
  uVar14 = 1;
  unaff_RBP = &UNK_00107e3e;
  uVar3 = pos;
  uVar4 = pos;
  if ((int)unaff_R12 <= (int)pos) goto code_r0x00102a5e;
  do {
    unaff_R15 = argv;
    cVar1 = (char)param_4;
    param_6 = (byte **)(long)(int)pos;
    in_R10 = (byte **)argv[(long)param_6];
    unaff_R13 = (ulong)*(byte *)in_R10;
    iVar5 = (int)unaff_R12;
    uVar3 = pos;
    if (*(byte *)in_R10 == 0x21) {
      if (*(char *)((long)in_R10 + 1) != '\0') {
        uVar23 = 0;
        goto code_r0x00102a78;
      }
      uVar21 = pos + 1;
      param_6 = (byte **)(ulong)uVar21;
      uVar4 = uVar21;
      if ((int)uVar21 < iVar5) {
        param_6 = (byte **)(long)(int)uVar21;
        cVar1 = '\0';
        unaff_R14 = 1;
        ppbVar15 = (byte **)((long)param_6 + (ulong)((iVar5 + -2) - pos) + 1);
        while( true ) {
          uVar23 = (uint)unaff_R14;
          in_R10 = (byte **)argv[(long)param_6];
          uVar3 = (uint)param_6;
          pos = uVar21;
          if (*(byte *)in_R10 != 0x21) break;
          if (*(char *)((long)in_R10 + 1) != '\0') goto code_r0x00102a68;
          param_6 = (byte **)((long)param_6 + 1);
          uVar4 = uVar3 + 1;
          if (param_6 == ppbVar15) goto code_r0x00102a5e;
          unaff_R14 = (ulong)(uVar23 ^ 1);
          cVar1 = '\x01';
        }
        if (cVar1 != '\0') {
          pos = uVar3;
        }
        unaff_R13 = (ulong)*(byte *)in_R10;
        goto code_r0x00102947;
      }
    }
    else {
      unaff_R14 = 0;
code_r0x00102947:
      uVar23 = (uint)unaff_R14;
      if ((char)unaff_R13 != '(') goto code_r0x00102a78;
      if (*(char *)((long)in_R10 + 1) != '\0') goto code_r0x00102a78;
      pos = uVar3 + 1;
      param_6 = (byte **)(ulong)pos;
      uVar4 = pos;
      if ((int)pos < iVar5) {
        if (iVar5 <= (int)(uVar3 + 2)) {
          uVar20 = 1;
          goto code_r0x001029c8;
        }
        uVar20 = 1;
        in_R10 = argv + (int)(uVar3 + 2);
        uVar4 = iVar5 - 1;
        bVar24 = uVar4 < uVar3;
        bVar26 = uVar4 == uVar3;
        goto code_r0x00102994;
      }
    }
code_r0x00102a5e:
    do {
      pos = uVar4;
      uVar23 = (uint)unaff_R14;
      *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102a63;
      beyond();
code_r0x00102a68:
      if (cVar1 != '\0') {
        pos = (uint)param_6;
      }
code_r0x00102a78:
      uVar21 = (uint)unaff_R12;
      uVar4 = uVar21 - uVar3;
      bVar24 = uVar4 < 3;
      bVar26 = uVar4 == 3;
      if ((int)uVar4 < 4) {
        if (bVar26) goto code_r0x00102aaf;
joined_r0x00102b06:
        if ((((char)unaff_R13 == '-') && (*(char *)((long)in_R10 + 1) != '\0')) &&
           (*(char *)((long)in_R10 + 2) == '\0')) {
          *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102b1b;
          uVar3 = unary_operator();
          unaff_R12 = (ulong)argc;
          goto code_r0x00102a13;
        }
        pos = uVar3 + 1;
        uVar23 = uVar23 ^ (char)unaff_R13 != '\0';
        uVar14 = uVar14 & uVar23;
        bVar9 = (byte)uVar14;
        bVar24 = uVar21 < pos;
        bVar26 = uVar21 == pos;
        if ((int)uVar21 <= (int)pos) goto code_r0x00102ae7;
      }
      else {
        lVar13 = 3;
        ppbVar15 = in_R10;
        pbVar22 = &UNK_00107dc6;
        do {
          if (lVar13 == 0) break;
          lVar13 = lVar13 + -1;
          bVar24 = *(byte *)ppbVar15 < *pbVar22;
          bVar26 = *(byte *)ppbVar15 == *pbVar22;
          ppbVar15 = (byte **)((long)ppbVar15 + (ulong)bVar27 * -2 + 1);
          pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
        } while (bVar26);
        if ((!bVar24 && !bVar26) == bVar24) {
          pbVar22 = unaff_R15[(long)param_6 + 2];
          *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102aa7;
          cVar1 = binop(pbVar22);
          if (cVar1 == '\0') goto code_r0x00102aaf;
          *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102b94;
          uVar3 = binary_operator(1);
          unaff_R12 = (ulong)argc;
        }
        else {
code_r0x00102aaf:
          pbVar22 = unaff_R15[(long)param_6 + 1];
          *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102ab9;
          cVar1 = binop(pbVar22);
          if (cVar1 == '\0') goto joined_r0x00102b06;
          *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102b77;
          uVar3 = binary_operator(0);
          unaff_R12 = (ulong)argc;
        }
code_r0x00102a13:
        uVar23 = uVar23 ^ uVar3;
        uVar14 = uVar14 & uVar23;
        bVar9 = (byte)uVar14;
        uVar3 = (uint)unaff_R12;
        bVar24 = uVar3 < pos;
        bVar26 = uVar3 == pos;
        if ((int)uVar3 <= (int)pos) {
code_r0x00102ae7:
          ((undefined *)register0x00000020)[-0x39] =
               ((undefined *)register0x00000020)[-0x39] | bVar9;
          goto code_r0x00102aeb;
        }
      }
      unaff_R14 = (ulong)uVar23;
      pbVar22 = argv[(int)pos];
      param_4 = 3;
      pbVar17 = pbVar22;
      pbVar19 = &UNK_00107e3e;
      do {
        if (param_4 == 0) break;
        param_4 = param_4 + -1;
        bVar24 = *pbVar17 < *pbVar19;
        bVar26 = *pbVar17 == *pbVar19;
        pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
        pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
      } while (bVar26);
      cVar1 = (char)param_4;
      if ((!bVar24 && !bVar26) != bVar24) {
        param_4 = 3;
        pbVar17 = (undefined *)register0x00000020 + -0x39;
        bVar24 = false;
        *pbVar17 = *pbVar17 | (byte)uVar14;
        bVar26 = *pbVar17 == 0;
        pbVar17 = &UNK_00107e41;
        goto code_r0x00102b41;
      }
      uVar3 = pos + 1;
      uVar4 = uVar3;
      pos = uVar3;
    } while ((int)unaff_R12 <= (int)uVar3);
  } while( true );
code_r0x00102727:
  register0x00000020 = (BADSPACEBASE *)(puVar16 + -8);
  *(undefined8 *)(puVar16 + -0x10) = 0x102730;
  param_6 = argv;
  beyond();
  goto code_r0x00102730;
  while( true ) {
    uVar21 = (int)uVar20 + 1;
    uVar20 = (ulong)uVar21;
    in_R10 = in_R10 + 1;
    bVar24 = uVar4 - uVar3 < uVar21;
    bVar26 = uVar4 - uVar3 == uVar21;
    if (bVar26) break;
code_r0x00102994:
    lVar13 = 2;
    pbVar22 = *in_R10;
    pbVar17 = &UNK_00109349;
    do {
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      bVar24 = *pbVar22 < *pbVar17;
      bVar26 = *pbVar22 == *pbVar17;
      pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
    } while (bVar26);
    if ((!bVar24 && !bVar26) == bVar24) break;
    if ((int)uVar20 == 4) {
      uVar20 = (ulong)(iVar5 - pos);
      break;
    }
  }
code_r0x001029c8:
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x1029d0;
  uVar3 = posixtest(uVar20);
  pbVar22 = argv[(int)pos];
  if (pbVar22 != (byte *)0x0) {
    if ((*pbVar22 == 0x29) && (pbVar22[1] == 0)) {
      unaff_R12 = (ulong)argc;
      pos = pos + 1;
      goto code_r0x00102a13;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102be3;
    unaff_RBP = (undefined *)quote_n(1);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102bf4;
    uVar6 = quote_n(0,&UNK_00109349);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c0a;
    uVar7 = func_0x001013c0(0,&UNK_00107e28,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c1a;
    test_syntax_error(uVar7,uVar6,unaff_RBP);
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c26;
  unaff_RBX = (byte **)quote(&UNK_00109349);
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c3c;
  uVar6 = func_0x001013c0(0,&UNK_00107e1c,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c49;
  test_syntax_error(uVar6,unaff_RBX);
  register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x48);
code_r0x00102c50:
  lVar8 = (long)(int)pos;
  *(byte ***)((undefined *)register0x00000020 + -8) = unaff_RBX;
  pbVar22 = argv[lVar8 + 1];
  lVar13 = (lVar8 + 1) * 8;
  *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102c7a;
  in_R10 = argv;
  uVar3 = pos;
  uVar20 = binop();
  ppbVar15 = argv;
  bVar24 = false;
  bVar26 = (char)uVar20 == '\0';
  if (!bVar26) {
    uVar6 = *(undefined8 *)((undefined *)register0x00000020 + -8);
    *(byte ***)((undefined *)register0x00000020 + -8) = unaff_R15;
    *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
    *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
    *(ulong *)((undefined *)register0x00000020 + -0x20) = unaff_R12;
    *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = uVar6;
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    uVar3 = pos + 1;
    uVar20 = 0;
    lVar13 = (long)(int)uVar3;
    uVar4 = argc - 2;
    ppbVar11 = (byte **)(ulong)uVar4;
    bVar24 = uVar4 < uVar3;
    bVar26 = uVar4 == uVar3;
    if ((int)uVar4 <= (int)uVar3) goto code_r0x00101be8;
    uVar10 = 3;
    pbVar22 = argv[lVar13 + 1];
    pbVar17 = &UNK_00107dc6;
    goto code_r0x00101bd8;
  }
  lVar12 = 2;
  pbVar17 = in_R10[lVar8];
  pbVar19 = &UNK_00107e18;
  do {
    pbVar18 = pbVar19;
    if (lVar12 == 0) break;
    lVar12 = lVar12 + -1;
    pbVar18 = pbVar19 + (ulong)bVar27 * -2 + 1;
    bVar24 = *pbVar17 < *pbVar19;
    bVar26 = *pbVar17 == *pbVar19;
    pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
    pbVar19 = pbVar18;
  } while (bVar26);
  bVar25 = false;
  bVar24 = (!bVar24 && !bVar26) == bVar24;
  if (!bVar24) {
    lVar12 = 2;
    pbVar17 = in_R10[lVar8];
    pbVar19 = &UNK_00107e1a;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar25 = *pbVar17 < *pbVar19;
      bVar24 = *pbVar17 == *pbVar19;
      pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
      pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
    } while (bVar24);
    bVar26 = false;
    bVar24 = (!bVar25 && !bVar24) == bVar25;
    if (bVar24) {
      lVar12 = 2;
      pbVar17 = in_R10[lVar8 + 2];
      pbVar19 = &UNK_00109349;
      do {
        if (lVar12 == 0) break;
        lVar12 = lVar12 + -1;
        bVar26 = *pbVar17 < *pbVar19;
        bVar24 = *pbVar17 == *pbVar19;
        pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
        pbVar19 = pbVar19 + (ulong)bVar27 * -2 + 1;
      } while (bVar24);
      bVar24 = (!bVar26 && !bVar24) == bVar26;
      if (bVar24) {
        pos = uVar3 + 3;
        return uVar20 & 0xffffffffffffff00 | (ulong)(*pbVar22 != 0);
      }
    }
    bVar26 = false;
    param_4 = 3;
    pbVar17 = pbVar22;
    pbVar19 = &UNK_00107e3e;
    do {
      pbVar18 = pbVar19;
      if (param_4 == 0) break;
      param_4 = param_4 + -1;
      pbVar18 = pbVar19 + (ulong)bVar27 * -2 + 1;
      bVar26 = *pbVar17 < *pbVar19;
      bVar24 = *pbVar17 == *pbVar19;
      pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
      pbVar19 = pbVar18;
    } while (bVar24);
    bVar25 = false;
    bVar24 = (!bVar26 && !bVar24) == bVar26;
    if (!bVar24) {
      param_4 = 3;
      pbVar17 = pbVar22;
      pbVar19 = &UNK_00107e41;
      do {
        pbVar18 = pbVar19;
        if (param_4 == 0) break;
        param_4 = param_4 + -1;
        pbVar18 = pbVar19 + (ulong)bVar27 * -2 + 1;
        bVar25 = *pbVar17 < *pbVar19;
        bVar24 = *pbVar17 == *pbVar19;
        pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
        pbVar19 = pbVar18;
      } while (bVar24);
      if ((!bVar25 && !bVar24) != bVar25) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102d70;
        lVar13 = quote(pbVar22);
        *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102d86;
        pbVar18 = (byte *)func_0x001013c0(0,&UNK_00107e44,5);
        *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102d93;
        test_syntax_error(pbVar18,lVar13);
        goto code_r0x00102d93;
      }
    }
    param_6 = (byte **)(ulong)uVar3;
    if ((int)argc <= (int)uVar3) goto code_r0x00102d93;
    unaff_RBX = *(byte ***)((undefined *)register0x00000020 + -8);
    goto or;
  }
  pos = uVar3 + 1;
  if ((int)pos < (int)argc) {
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102cbe;
    uVar3 = two_arguments();
    return (ulong)(uVar3 ^ 1);
  }
code_r0x00102d93:
  *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102d98;
  beyond();
  uVar6 = program_name;
  *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_R13;
  *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R12;
  *(undefined **)((undefined *)register0x00000020 + -0x20) = unaff_RBP;
  *(long *)((undefined *)register0x00000020 + -0x28) = lVar13;
  *(undefined8 *)((undefined *)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((int)pbVar18 == 0) goto code_r0x00102dfd;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102ddd;
  uVar7 = func_0x001013c0(0,&UNK_00108010,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102df6;
  func_0x001015c0(stderr,1,uVar7,uVar6);
  do {
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102dfd;
    func_0x001015a0((ulong)pbVar18 & 0xffffffff);
code_r0x00102dfd:
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e17;
    uVar7 = func_0x001013c0(0,&UNK_00108038,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e22;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e3c;
    uVar7 = func_0x001013c0(0,&UNK_00108090,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e47;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e61;
    uVar7 = func_0x001013c0(0,&UNK_001080c8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e6c;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e86;
    uVar7 = func_0x001013c0(0,&UNK_001080f8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e91;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102eab;
    uVar7 = func_0x001013c0(0,&UNK_00108130,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102eb6;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102ed0;
    uVar7 = func_0x001013c0(0,&UNK_001081a8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102edb;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102ef5;
    uVar7 = func_0x001013c0(0,&UNK_001082a8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f00;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f1a;
    uVar7 = func_0x001013c0(0,&UNK_001083a8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f25;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f3f;
    uVar7 = func_0x001013c0(0,&UNK_00108520,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f4a;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f64;
    uVar7 = func_0x001013c0(0,&UNK_001085e0,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f6f;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f89;
    uVar7 = func_0x001013c0(0,&UNK_00108690,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f94;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102fae;
    uVar7 = func_0x001013c0(0,&UNK_001087a8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102fb9;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102fd3;
    uVar7 = func_0x001013c0(0,&UNK_00108910,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102fde;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102ff8;
    uVar7 = func_0x001013c0(0,&UNK_00108a30,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103003;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10301d;
    uVar7 = func_0x001013c0(0,&UNK_00108b18,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103028;
    func_0x00101470(uVar7,uVar6);
    uVar6 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103042;
    uVar7 = func_0x001013c0(0,&UNK_00108b98,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10304d;
    func_0x00101470(uVar7,uVar6);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103060;
    uVar6 = func_0x001013c0(0,&UNK_00107e66,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103076;
    uVar7 = func_0x001013c0(0,&UNK_00108c20,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10308f;
    func_0x00101550(1,uVar7,uVar6);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0x48) = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x107e72;
    *(undefined8 *)((undefined *)register0x00000020 + -0x80) = 0x107eb3;
    *(undefined8 *)((undefined *)register0x00000020 + -0xa8) = 0x107e74;
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x107ebd;
    *(undefined8 *)((undefined *)register0x00000020 + -0xa0) = 0x107eec;
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x107ec7;
    *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x107e84;
    *(undefined8 *)((undefined *)register0x00000020 + -0x90) = 0x107e9a;
    *(undefined8 *)((undefined *)register0x00000020 + -0x88) = 0x107ea4;
    *(undefined8 *)((undefined *)register0x00000020 + -0x78) = 0x107ea4;
    *(undefined8 *)((undefined *)register0x00000020 + -0x68) = 0x107ea4;
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x107ea4;
    ppbVar15 = (byte **)((undefined *)register0x00000020 + -0xb0);
    do {
      ppbVar11 = ppbVar15;
      ppbVar15 = ppbVar11 + 2;
      pbVar22 = *ppbVar15;
      bVar24 = false;
      bVar26 = pbVar22 == (byte *)0x0;
      if (bVar26) break;
      lVar13 = 5;
      pbVar17 = &UNK_00107e61;
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        bVar24 = *pbVar17 < *pbVar22;
        bVar26 = *pbVar17 == *pbVar22;
        pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
        pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
      } while (bVar26);
    } while ((!bVar24 && !bVar26) != bVar24);
    pbVar22 = ppbVar11[3];
    if (pbVar22 == (byte *)0x0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103220;
      uVar6 = func_0x001013c0(0,&UNK_00107ed1,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10323d;
      func_0x00101550(1,uVar6,&UNK_00107ee8,&UNK_00108ce0);
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103249;
      lVar13 = func_0x00101540(5,0);
      if (lVar13 != 0) {
        *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103262;
        iVar5 = func_0x00101350(lVar13,&UNK_00107ef6,3);
        if (iVar5 != 0) {
          pbVar22 = &UNK_00107e61;
          goto code_r0x001032b0;
        }
      }
      pbVar22 = &UNK_00107e61;
      puVar16 = &UNK_00107e8e;
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103287;
      uVar6 = func_0x001013c0(0,&UNK_00107efa,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1032a4;
      func_0x00101550(1,uVar6,&UNK_00108ce0,&UNK_00107e61);
    }
    else {
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10315f;
      uVar6 = func_0x001013c0(0,&UNK_00107ed1,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10317c;
      func_0x00101550(1,uVar6,&UNK_00107ee8,&UNK_00108ce0);
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103188;
      lVar13 = func_0x00101540(5,0);
      if (lVar13 != 0) {
        *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1031a1;
        iVar5 = func_0x00101350(lVar13,&UNK_00107ef6,3);
        if (iVar5 != 0) {
code_r0x001032b0:
          uVar6 = stdout;
          *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1032ca;
          uVar7 = func_0x001013c0(0,&UNK_00108d08,5);
          *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1032d5;
          func_0x00101470(uVar7,uVar6);
        }
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1031bc;
      uVar6 = func_0x001013c0(0,&UNK_00107efa,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1031d9;
      func_0x00101550(1,uVar6,&UNK_00108ce0,&UNK_00107e61);
      puVar16 = &UNK_00107e8e;
      if (pbVar22 != &UNK_00107e61) {
        puVar16 = &UNK_00107ee7;
      }
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103201;
    uVar6 = func_0x001013c0(0,&UNK_00108d50,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103216;
    func_0x00101550(1,uVar6,pbVar22,puVar16);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    bVar24 = *pbVar22 < *pbVar17;
    bVar26 = *pbVar22 == *pbVar17;
    pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
    pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
    if (!bVar26) break;
code_r0x00101bd8:
    if (uVar10 == 0) break;
  }
  bVar9 = (!bVar24 && !bVar26) - bVar24;
  ppbVar11 = (byte **)(uVar10 & 0xffffffffffffff00 | (ulong)bVar9);
  if (bVar9 == 0) {
    uVar20 = 1;
    pos = uVar3;
  }
code_r0x00101be8:
  uVar3 = pos;
  pbVar22 = argv[lVar13];
  bVar9 = *pbVar22;
  if (bVar9 == 0x2d) {
    bVar27 = pbVar22[1];
    cVar1 = (char)uVar20;
    if ((bVar27 == 0x6c) || (bVar27 == 0x67)) {
      bVar9 = pbVar22[2];
      ppbVar11 = (byte **)(ulong)bVar9;
      if ((bVar9 != 0x65) && (bVar9 != 0x74)) goto code_r0x00101d06;
      if (pbVar22[3] != 0) {
        if (bVar27 == 0x6e) goto code_r0x00101f19;
        goto code_r0x00101d18;
      }
code_r0x00101e91:
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101e96;
      uVar6 = find_int();
      if (cVar1 == '\0') {
        pbVar22 = argv[lVar13 + 1];
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x10201a;
        uVar7 = find_int(pbVar22);
      }
      else {
        pbVar22 = argv[lVar13 + 2];
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101eb3;
        uVar7 = func_0x001013e0(pbVar22);
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101ec3;
        uVar7 = umaxtostr(uVar7,(undefined *)register0x00000020 + -0x58);
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101ece;
      iVar5 = strintcmp(uVar6,uVar7);
      bVar24 = argv[lVar13][2] == 0x65;
      bVar27 = argv[lVar13][1];
      pos = pos + 3;
      if (bVar27 == 0x6c) {
        uVar20 = (ulong)(iVar5 < (int)(uint)bVar24);
      }
      else {
        if (bVar27 == 0x67) {
          uVar20 = (ulong)((int)-(uint)bVar24 < iVar5);
        }
        else {
          uVar20 = (ulong)((iVar5 != 0) == bVar24);
        }
      }
      goto code_r0x00101c4f;
    }
code_r0x00101d06:
    if (bVar27 == 0x65) {
      bVar27 = pbVar22[2];
      if (bVar27 == 0x71) {
code_r0x00101f90:
        if (pbVar22[3] == 0) goto code_r0x00101e91;
      }
      else {
code_r0x00101ddd:
        if ((bVar27 == 0x66) && (pbVar22[3] == 0)) {
          pos = pos + 3;
          if (cVar1 != '\0') goto code_r0x001020c1;
          pbVar22 = argv[lVar13 + -1];
          *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101e14;
          iVar5 = func_0x001014d0(1,pbVar22,(undefined *)register0x00000020 + -0x198);
          if (iVar5 == 0) {
            pbVar22 = ppbVar15[lVar13 + 1];
            *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101e33;
            iVar5 = func_0x001014d0(1,pbVar22,(undefined *)register0x00000020 + -0x108);
            if ((iVar5 == 0) &&
               (*(long *)((undefined *)register0x00000020 + -0x198) ==
                *(long *)((undefined *)register0x00000020 + -0x108))) {
              uVar20 = (ulong)(*(long *)((undefined *)register0x00000020 + -400) ==
                              *(long *)((undefined *)register0x00000020 + -0x100));
            }
          }
          goto code_r0x00101c4f;
        }
      }
      goto code_r0x00101f9a;
    }
    if (bVar27 == 0x6e) {
      ppbVar11 = (byte **)(ulong)pbVar22[2];
      if (pbVar22[2] == 0x65) goto code_r0x00101f90;
code_r0x00101f19:
      if (((char)ppbVar11 != 't') || (pbVar22[3] != 0)) goto code_r0x00101f9a;
      pos = pos + 3;
      if (cVar1 != '\0') {
        puVar16 = &UNK_00107d9b;
        goto code_r0x001020ae;
      }
      unaff_RBP = (undefined *)register0x00000020 + -0x108;
      pbVar22 = argv[lVar13 + -1];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101f4e;
      iVar5 = func_0x001014d0(1,pbVar22,unaff_RBP);
      ppbVar11 = ppbVar15 + lVar13 + 1;
      if (iVar5 == 0) {
        pbVar22 = *ppbVar11;
        lVar13 = *(long *)((undefined *)register0x00000020 + -0xb0);
        uVar6 = *(undefined8 *)((undefined *)register0x00000020 + -0xa8);
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101f77;
        iVar5 = func_0x001014d0(1,pbVar22,unaff_RBP);
        if (iVar5 == 0) {
          if ((*(long *)((undefined *)register0x00000020 + -0xb0) <= lVar13) &&
             (uVar20 = 1, lVar13 <= *(long *)((undefined *)register0x00000020 + -0xb0))) {
            uVar20 = (ulong)(0 < (int)uVar6 -
                                 (int)*(undefined8 *)((undefined *)register0x00000020 + -0xa8));
          }
        }
        else {
          uVar20 = 1;
        }
        goto code_r0x00101c4f;
      }
code_r0x00101fc8:
      pbVar22 = *ppbVar11;
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101fd8;
      func_0x001014d0(1,pbVar22,unaff_RBP);
      goto code_r0x00101c4f;
    }
code_r0x00101d18:
    if (bVar27 != 0x6f) {
      if (bVar27 == 0x65) {
        bVar27 = pbVar22[2];
        goto code_r0x00101ddd;
      }
code_r0x00101f9a:
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101fa2;
      uVar6 = quote(pbVar22);
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101fb8;
      uVar7 = func_0x001013c0(0,&UNK_00107de0,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101fc5;
      test_syntax_error(uVar7,uVar6);
      goto code_r0x00101fc8;
    }
    if ((pbVar22[2] != 0x74) || (pbVar22[3] != 0)) goto code_r0x00101f9a;
    pos = pos + 3;
    if (cVar1 == '\0') {
      pbVar22 = argv[lVar13 + -1];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101d5f;
      iVar5 = func_0x001014d0(1,pbVar22,(undefined *)register0x00000020 + -0x108);
      if (iVar5 == 0) {
        unaff_R12 = *(ulong *)((undefined *)register0x00000020 + -0xb0);
        *(undefined8 *)((undefined *)register0x00000020 + -0x1a0) =
             *(undefined8 *)((undefined *)register0x00000020 + -0xa8);
      }
      pbVar22 = ppbVar15[lVar13 + 1];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101d8c;
      iVar2 = func_0x001014d0(1,pbVar22,(undefined *)register0x00000020 + -0x108);
      if (iVar2 == 0) {
        lVar13 = *(long *)((undefined *)register0x00000020 + -0xb0);
        uVar20 = (ulong)(iVar5 != 0 || (long)unaff_R12 < lVar13);
        if ((iVar5 == 0 && (long)unaff_R12 >= lVar13) && ((long)unaff_R12 <= lVar13)) {
          uVar20 = (ulong)((uint)(*(int *)((undefined *)register0x00000020 + -0x1a0) -
                                 (int)*(undefined8 *)((undefined *)register0x00000020 + -0xa8)) >>
                          0x1f);
        }
      }
      goto code_r0x00101c4f;
    }
  }
  else {
    bVar24 = bVar9 < 0x3d;
    bVar26 = bVar9 == 0x3d;
    if (bVar26) {
      bVar9 = pbVar22[1];
      if (bVar9 == 0) {
code_r0x00101cb8:
        pbVar22 = argv[(long)(int)pos + 2];
        pbVar17 = argv[(long)(int)pos];
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101cd4;
        iVar5 = func_0x00101490(pbVar17,pbVar22);
        uVar20 = (ulong)(iVar5 == 0);
        pos = uVar3 + 3;
        goto code_r0x00101c4f;
      }
      bVar24 = bVar9 < 0x3d;
      bVar26 = bVar9 == 0x3d;
      if (bVar26) {
        bVar24 = false;
        bVar26 = pbVar22[2] == 0;
        if (bVar26) goto code_r0x00101cb8;
      }
    }
    lVar13 = 3;
    pbVar17 = &UNK_00107d44;
    do {
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      bVar24 = *pbVar22 < *pbVar17;
      bVar26 = *pbVar22 == *pbVar17;
      pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
    } while (bVar26);
    if ((!bVar24 && !bVar26) == bVar24) {
      pbVar22 = argv[(long)(int)pos + 2];
      pbVar17 = argv[(long)(int)pos];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101c40;
      iVar5 = func_0x00101490(pbVar17,pbVar22);
      uVar20 = (ulong)(iVar5 != 0);
      pos = uVar3 + 3;
code_r0x00101c4f:
      if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar20;
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x10209d;
      func_0x00101400();
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x1020a2;
    func_0x00101320();
  }
  puVar16 = &UNK_00107dc9;
code_r0x001020ae:
  do {
    *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x1020b5;
    uVar6 = func_0x001013c0(0,puVar16,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x1020c1;
    test_syntax_error(uVar6,0);
code_r0x001020c1:
    puVar16 = &UNK_00107db2;
  } while( true );
  while( true ) {
    param_4 = param_4 + -1;
    bVar24 = *pbVar22 < *pbVar17;
    bVar26 = *pbVar22 == *pbVar17;
    pbVar22 = pbVar22 + (ulong)bVar27 * -2 + 1;
    pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
    if (!bVar26) break;
code_r0x00102b41:
    if (param_4 == 0) break;
  }
  if ((!bVar24 && !bVar26) != bVar24) {
code_r0x00102aeb:
    return (ulong)(byte)((undefined *)register0x00000020)[-0x39];
  }
  pos = pos + 1;
  goto code_r0x00102898;
}

