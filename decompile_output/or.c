
/* WARNING: Removing unreachable block (ram,0x00101ba4) */
/* WARNING: Removing unreachable block (ram,0x00101ff0) */

ulong or(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  byte **ppbVar12;
  long in_RCX;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 unaff_RBX;
  undefined *puVar16;
  undefined *unaff_RBP;
  byte **ppbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  uint uVar22;
  ulong in_R9;
  byte **in_R10;
  ulong unaff_R12;
  byte *pbVar23;
  ulong unaff_R13;
  uint uVar24;
  ulong unaff_R14;
  byte **unaff_R15;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  byte bVar28;
  
  bVar28 = 0;
code_r0x00102870:
  *(byte ***)((undefined *)register0x00000020 + -8) = unaff_R15;
  *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
  *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
  *(ulong *)((undefined *)register0x00000020 + -0x20) = unaff_R12;
  *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
  *(undefined8 *)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
  unaff_R12 = (ulong)argc;
  ((undefined *)register0x00000020)[-0x39] = 0;
code_r0x00102898:
  uVar15 = 1;
  unaff_RBP = &UNK_00107e3e;
  uVar5 = pos;
  uVar4 = pos;
  if ((int)unaff_R12 <= (int)pos) goto code_r0x00102a5e;
  do {
    unaff_R15 = argv;
    in_R9 = SEXT48((int)pos);
    in_R10 = (byte **)argv[in_R9];
    unaff_R13 = (ulong)*(byte *)in_R10;
    iVar6 = (int)unaff_R12;
    uVar5 = pos;
    if (*(byte *)in_R10 == 0x21) {
      if (*(char *)((long)in_R10 + 1) != '\0') {
        uVar24 = 0;
        goto code_r0x00102a78;
      }
      uVar22 = pos + 1;
      in_R9 = (ulong)uVar22;
      uVar4 = uVar22;
      if ((int)uVar22 < iVar6) {
        in_R9 = SEXT48((int)uVar22);
        in_RCX = 0;
        unaff_R14 = 1;
        uVar3 = (iVar6 + -2) - pos;
        lVar13 = in_R9 + 1;
        while( true ) {
          uVar24 = (uint)unaff_R14;
          cVar1 = (char)in_RCX;
          in_R10 = (byte **)argv[in_R9];
          uVar5 = (uint)in_R9;
          pos = uVar22;
          if (*(byte *)in_R10 != 0x21) break;
          if (*(char *)((long)in_R10 + 1) != '\0') goto code_r0x00102a68;
          in_R9 = in_R9 + 1;
          uVar4 = uVar5 + 1;
          if (in_R9 == lVar13 + (ulong)uVar3) goto code_r0x00102a5e;
          unaff_R14 = (ulong)(uVar24 ^ 1);
          in_RCX = 1;
        }
        if (cVar1 != '\0') {
          pos = uVar5;
        }
        unaff_R13 = (ulong)*(byte *)in_R10;
        goto code_r0x00102947;
      }
    }
    else {
      unaff_R14 = 0;
code_r0x00102947:
      uVar24 = (uint)unaff_R14;
      if ((char)unaff_R13 != '(') goto code_r0x00102a78;
      if (*(char *)((long)in_R10 + 1) != '\0') goto code_r0x00102a78;
      pos = uVar5 + 1;
      in_R9 = (ulong)pos;
      uVar4 = pos;
      if ((int)pos < iVar6) {
        if ((int)(uVar5 + 2) < iVar6) {
          uVar21 = 1;
          in_R10 = argv + (int)(uVar5 + 2);
          uVar4 = iVar6 - 1;
          bVar25 = uVar4 < uVar5;
          bVar27 = uVar4 == uVar5;
          break;
        }
        uVar21 = 1;
        goto code_r0x001029c8;
      }
    }
code_r0x00102a5e:
    do {
      pos = uVar4;
      uVar24 = (uint)unaff_R14;
      cVar1 = (char)in_RCX;
      *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102a63;
      beyond();
code_r0x00102a68:
      if (cVar1 != '\0') {
        pos = (uint)in_R9;
      }
code_r0x00102a78:
      uVar22 = (uint)unaff_R12;
      uVar4 = uVar22 - uVar5;
      bVar25 = uVar4 < 3;
      bVar27 = uVar4 == 3;
      if ((int)uVar4 < 4) {
        if (bVar27) goto code_r0x00102aaf;
joined_r0x00102b06:
        if ((((char)unaff_R13 == '-') && (*(char *)((long)in_R10 + 1) != '\0')) &&
           (*(char *)((long)in_R10 + 2) == '\0')) {
          *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102b1b;
          uVar5 = unary_operator();
          unaff_R12 = (ulong)argc;
          goto code_r0x00102a13;
        }
        pos = uVar5 + 1;
        uVar24 = uVar24 ^ (char)unaff_R13 != '\0';
        uVar15 = uVar15 & uVar24;
        bVar10 = (byte)uVar15;
        bVar25 = uVar22 < pos;
        bVar27 = uVar22 == pos;
        if ((int)uVar22 <= (int)pos) goto code_r0x00102ae7;
      }
      else {
        lVar13 = 3;
        ppbVar17 = in_R10;
        pbVar23 = &UNK_00107dc6;
        do {
          if (lVar13 == 0) break;
          lVar13 = lVar13 + -1;
          bVar25 = *(byte *)ppbVar17 < *pbVar23;
          bVar27 = *(byte *)ppbVar17 == *pbVar23;
          ppbVar17 = (byte **)((long)ppbVar17 + (ulong)bVar28 * -2 + 1);
          pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
        } while (bVar27);
        if ((!bVar25 && !bVar27) == bVar25) {
          pbVar23 = unaff_R15[in_R9 + 2];
          *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102aa7;
          cVar1 = binop(pbVar23);
          if (cVar1 == '\0') goto code_r0x00102aaf;
          *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102b94;
          uVar5 = binary_operator(1);
          unaff_R12 = (ulong)argc;
        }
        else {
code_r0x00102aaf:
          pbVar23 = unaff_R15[in_R9 + 1];
          *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102ab9;
          cVar1 = binop(pbVar23);
          if (cVar1 == '\0') goto joined_r0x00102b06;
          *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102b77;
          uVar5 = binary_operator(0);
          unaff_R12 = (ulong)argc;
        }
code_r0x00102a13:
        uVar24 = uVar24 ^ uVar5;
        uVar15 = uVar15 & uVar24;
        bVar10 = (byte)uVar15;
        uVar5 = (uint)unaff_R12;
        bVar25 = uVar5 < pos;
        bVar27 = uVar5 == pos;
        if ((int)uVar5 <= (int)pos) {
code_r0x00102ae7:
          ((undefined *)register0x00000020)[-0x39] =
               ((undefined *)register0x00000020)[-0x39] | bVar10;
          goto code_r0x00102aeb;
        }
      }
      unaff_R14 = (ulong)uVar24;
      pbVar23 = argv[(int)pos];
      in_RCX = 3;
      pbVar18 = pbVar23;
      pbVar20 = &UNK_00107e3e;
      do {
        if (in_RCX == 0) break;
        in_RCX = in_RCX + -1;
        bVar25 = *pbVar18 < *pbVar20;
        bVar27 = *pbVar18 == *pbVar20;
        pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
        pbVar20 = pbVar20 + (ulong)bVar28 * -2 + 1;
      } while (bVar27);
      if ((!bVar25 && !bVar27) != bVar25) {
        in_RCX = 3;
        pbVar18 = (undefined *)register0x00000020 + -0x39;
        bVar25 = false;
        *pbVar18 = *pbVar18 | (byte)uVar15;
        bVar27 = *pbVar18 == 0;
        pbVar18 = &UNK_00107e41;
        goto code_r0x00102b41;
      }
      uVar5 = pos + 1;
      uVar4 = uVar5;
      pos = uVar5;
    } while ((int)unaff_R12 <= (int)uVar5);
  } while( true );
  while( true ) {
    uVar22 = (int)uVar21 + 1;
    uVar21 = (ulong)uVar22;
    in_R10 = in_R10 + 1;
    bVar25 = uVar4 - uVar5 < uVar22;
    bVar27 = uVar4 - uVar5 == uVar22;
    if (bVar27) break;
    lVar13 = 2;
    pbVar23 = *in_R10;
    pbVar18 = &UNK_00109349;
    do {
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      bVar25 = *pbVar23 < *pbVar18;
      bVar27 = *pbVar23 == *pbVar18;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
    } while (bVar27);
    if ((!bVar25 && !bVar27) == bVar25) break;
    if ((int)uVar21 == 4) {
      uVar21 = (ulong)(iVar6 - pos);
      break;
    }
  }
code_r0x001029c8:
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x1029d0;
  uVar5 = posixtest(uVar21);
  pbVar23 = argv[(int)pos];
  if (pbVar23 != (byte *)0x0) {
    if ((*pbVar23 == 0x29) && (pbVar23[1] == 0)) {
      unaff_R12 = (ulong)argc;
      pos = pos + 1;
      goto code_r0x00102a13;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102be3;
    unaff_RBP = (undefined *)quote_n(1);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102bf4;
    uVar7 = quote_n(0,&UNK_00109349);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c0a;
    uVar8 = func_0x001013c0(0,&UNK_00107e28,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c1a;
    test_syntax_error(uVar8,uVar7,unaff_RBP);
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c26;
  uVar7 = quote(&UNK_00109349);
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c3c;
  uVar8 = func_0x001013c0(0,&UNK_00107e1c,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c49;
  test_syntax_error(uVar8,uVar7);
  lVar9 = (long)(int)pos;
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = uVar7;
  pbVar23 = argv[lVar9 + 1];
  lVar13 = (lVar9 + 1) * 8;
  *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102c7a;
  in_R10 = argv;
  uVar5 = pos;
  uVar21 = binop();
  ppbVar17 = argv;
  bVar25 = false;
  bVar27 = (char)uVar21 == '\0';
  if (!bVar27) {
    uVar7 = *(undefined8 *)((undefined *)register0x00000020 + -0x50);
    *(byte ***)((undefined *)register0x00000020 + -0x50) = unaff_R15;
    *(ulong *)((undefined *)register0x00000020 + -0x58) = unaff_R14;
    *(ulong *)((undefined *)register0x00000020 + -0x60) = unaff_R13;
    *(ulong *)((undefined *)register0x00000020 + -0x68) = unaff_R12;
    *(undefined **)((undefined *)register0x00000020 + -0x70) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x78) = uVar7;
    *(undefined8 *)((undefined *)register0x00000020 + -0x88) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    uVar5 = pos + 1;
    uVar21 = 0;
    lVar13 = (long)(int)uVar5;
    uVar4 = argc - 2;
    ppbVar12 = (byte **)(ulong)uVar4;
    bVar25 = uVar4 < uVar5;
    bVar27 = uVar4 == uVar5;
    if ((int)uVar4 <= (int)uVar5) goto code_r0x00101be8;
    uVar11 = 3;
    pbVar23 = argv[lVar13 + 1];
    pbVar18 = &UNK_00107dc6;
    goto code_r0x00101bd8;
  }
  lVar14 = 2;
  pbVar18 = in_R10[lVar9];
  pbVar20 = &UNK_00107e18;
  do {
    pbVar19 = pbVar20;
    if (lVar14 == 0) break;
    lVar14 = lVar14 + -1;
    pbVar19 = pbVar20 + (ulong)bVar28 * -2 + 1;
    bVar25 = *pbVar18 < *pbVar20;
    bVar27 = *pbVar18 == *pbVar20;
    pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
    pbVar20 = pbVar19;
  } while (bVar27);
  bVar26 = false;
  bVar25 = (!bVar25 && !bVar27) == bVar25;
  if (!bVar25) {
    lVar14 = 2;
    pbVar18 = in_R10[lVar9];
    pbVar20 = &UNK_00107e1a;
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar26 = *pbVar18 < *pbVar20;
      bVar25 = *pbVar18 == *pbVar20;
      pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
      pbVar20 = pbVar20 + (ulong)bVar28 * -2 + 1;
    } while (bVar25);
    bVar27 = false;
    bVar25 = (!bVar26 && !bVar25) == bVar26;
    if (bVar25) {
      lVar14 = 2;
      pbVar18 = in_R10[lVar9 + 2];
      pbVar20 = &UNK_00109349;
      do {
        if (lVar14 == 0) break;
        lVar14 = lVar14 + -1;
        bVar27 = *pbVar18 < *pbVar20;
        bVar25 = *pbVar18 == *pbVar20;
        pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
        pbVar20 = pbVar20 + (ulong)bVar28 * -2 + 1;
      } while (bVar25);
      bVar25 = (!bVar27 && !bVar25) == bVar27;
      if (bVar25) {
        pos = uVar5 + 3;
        return uVar21 & 0xffffffffffffff00 | (ulong)(*pbVar23 != 0);
      }
    }
    bVar27 = false;
    in_RCX = 3;
    pbVar18 = pbVar23;
    pbVar20 = &UNK_00107e3e;
    do {
      pbVar19 = pbVar20;
      if (in_RCX == 0) break;
      in_RCX = in_RCX + -1;
      pbVar19 = pbVar20 + (ulong)bVar28 * -2 + 1;
      bVar27 = *pbVar18 < *pbVar20;
      bVar25 = *pbVar18 == *pbVar20;
      pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
      pbVar20 = pbVar19;
    } while (bVar25);
    bVar26 = false;
    bVar25 = (!bVar27 && !bVar25) == bVar27;
    if (!bVar25) {
      in_RCX = 3;
      pbVar18 = pbVar23;
      pbVar20 = &UNK_00107e41;
      do {
        pbVar19 = pbVar20;
        if (in_RCX == 0) break;
        in_RCX = in_RCX + -1;
        pbVar19 = pbVar20 + (ulong)bVar28 * -2 + 1;
        bVar26 = *pbVar18 < *pbVar20;
        bVar25 = *pbVar18 == *pbVar20;
        pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
        pbVar20 = pbVar19;
      } while (bVar25);
      if ((!bVar26 && !bVar25) != bVar26) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102d70;
        lVar13 = quote(pbVar23);
        *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102d86;
        pbVar19 = (byte *)func_0x001013c0(0,&UNK_00107e44,5);
        *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102d93;
        test_syntax_error(pbVar19,lVar13);
        goto code_r0x00102d93;
      }
    }
    in_R9 = (ulong)uVar5;
    if ((int)argc <= (int)uVar5) goto code_r0x00102d93;
    unaff_RBX = *(undefined8 *)((undefined *)register0x00000020 + -0x50);
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x48);
    goto code_r0x00102870;
  }
  pos = uVar5 + 1;
  if ((int)pos < (int)argc) {
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102cbe;
    uVar5 = two_arguments();
    return (ulong)(uVar5 ^ 1);
  }
code_r0x00102d93:
  *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102d98;
  beyond();
  uVar7 = program_name;
  *(ulong *)((undefined *)register0x00000020 + -0x58) = unaff_R13;
  *(ulong *)((undefined *)register0x00000020 + -0x60) = unaff_R12;
  *(undefined **)((undefined *)register0x00000020 + -0x68) = unaff_RBP;
  *(long *)((undefined *)register0x00000020 + -0x70) = lVar13;
  *(undefined8 *)((undefined *)register0x00000020 + -0x80) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((int)pbVar19 == 0) goto code_r0x00102dfd;
  *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102ddd;
  uVar8 = func_0x001013c0(0,&UNK_00108010,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102df6;
  func_0x001015c0(stderr,1,uVar8,uVar7);
  do {
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102dfd;
    func_0x001015a0((ulong)pbVar19 & 0xffffffff);
code_r0x00102dfd:
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102e17;
    uVar8 = func_0x001013c0(0,&UNK_00108038,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102e22;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102e3c;
    uVar8 = func_0x001013c0(0,&UNK_00108090,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102e47;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102e61;
    uVar8 = func_0x001013c0(0,&UNK_001080c8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102e6c;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102e86;
    uVar8 = func_0x001013c0(0,&UNK_001080f8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102e91;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102eab;
    uVar8 = func_0x001013c0(0,&UNK_00108130,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102eb6;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102ed0;
    uVar8 = func_0x001013c0(0,&UNK_001081a8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102edb;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102ef5;
    uVar8 = func_0x001013c0(0,&UNK_001082a8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102f00;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102f1a;
    uVar8 = func_0x001013c0(0,&UNK_001083a8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102f25;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102f3f;
    uVar8 = func_0x001013c0(0,&UNK_00108520,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102f4a;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102f64;
    uVar8 = func_0x001013c0(0,&UNK_001085e0,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102f6f;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102f89;
    uVar8 = func_0x001013c0(0,&UNK_00108690,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102f94;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102fae;
    uVar8 = func_0x001013c0(0,&UNK_001087a8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102fb9;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102fd3;
    uVar8 = func_0x001013c0(0,&UNK_00108910,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102fde;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x102ff8;
    uVar8 = func_0x001013c0(0,&UNK_00108a30,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103003;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x10301d;
    uVar8 = func_0x001013c0(0,&UNK_00108b18,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103028;
    func_0x00101470(uVar8,uVar7);
    uVar7 = stdout;
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103042;
    uVar8 = func_0x001013c0(0,&UNK_00108b98,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x10304d;
    func_0x00101470(uVar8,uVar7);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103060;
    uVar7 = func_0x001013c0(0,&UNK_00107e66,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103076;
    uVar8 = func_0x001013c0(0,&UNK_00108c20,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x10308f;
    func_0x00101550(1,uVar8,uVar7);
    *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0x90) = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0xf8) = 0x107e72;
    *(undefined8 *)((undefined *)register0x00000020 + -200) = 0x107eb3;
    *(undefined8 *)((undefined *)register0x00000020 + -0xf0) = 0x107e74;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x107ebd;
    *(undefined8 *)((undefined *)register0x00000020 + -0xe8) = 0x107eec;
    *(undefined8 *)((undefined *)register0x00000020 + -0xa8) = 0x107ec7;
    *(undefined8 *)((undefined *)register0x00000020 + -0xe0) = 0x107e84;
    *(undefined8 *)((undefined *)register0x00000020 + -0xd8) = 0x107e9a;
    *(undefined8 *)((undefined *)register0x00000020 + -0xd0) = 0x107ea4;
    *(undefined8 *)((undefined *)register0x00000020 + -0xc0) = 0x107ea4;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x107ea4;
    *(undefined8 *)((undefined *)register0x00000020 + -0xa0) = 0x107ea4;
    ppbVar17 = (byte **)((undefined *)register0x00000020 + -0xf8);
    do {
      ppbVar12 = ppbVar17;
      ppbVar17 = ppbVar12 + 2;
      pbVar23 = *ppbVar17;
      bVar25 = false;
      bVar27 = pbVar23 == (byte *)0x0;
      if (bVar27) break;
      lVar13 = 5;
      pbVar18 = &UNK_00107e61;
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        bVar25 = *pbVar18 < *pbVar23;
        bVar27 = *pbVar18 == *pbVar23;
        pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
        pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      } while (bVar27);
    } while ((!bVar25 && !bVar27) != bVar25);
    pbVar23 = ppbVar12[3];
    if (pbVar23 == (byte *)0x0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103220;
      uVar7 = func_0x001013c0(0,&UNK_00107ed1,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x10323d;
      func_0x00101550(1,uVar7,&UNK_00107ee8,&UNK_00108ce0);
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103249;
      lVar13 = func_0x00101540(5,0);
      if (lVar13 != 0) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103262;
        iVar6 = func_0x00101350(lVar13,&UNK_00107ef6,3);
        if (iVar6 != 0) {
          pbVar23 = &UNK_00107e61;
          goto code_r0x001032b0;
        }
      }
      pbVar23 = &UNK_00107e61;
      puVar16 = &UNK_00107e8e;
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103287;
      uVar7 = func_0x001013c0(0,&UNK_00107efa,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x1032a4;
      func_0x00101550(1,uVar7,&UNK_00108ce0,&UNK_00107e61);
    }
    else {
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x10315f;
      uVar7 = func_0x001013c0(0,&UNK_00107ed1,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x10317c;
      func_0x00101550(1,uVar7,&UNK_00107ee8,&UNK_00108ce0);
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103188;
      lVar13 = func_0x00101540(5,0);
      if (lVar13 != 0) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x1031a1;
        iVar6 = func_0x00101350(lVar13,&UNK_00107ef6,3);
        if (iVar6 != 0) {
code_r0x001032b0:
          uVar7 = stdout;
          *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x1032ca;
          uVar8 = func_0x001013c0(0,&UNK_00108d08,5);
          *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x1032d5;
          func_0x00101470(uVar8,uVar7);
        }
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x1031bc;
      uVar7 = func_0x001013c0(0,&UNK_00107efa,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x1031d9;
      func_0x00101550(1,uVar7,&UNK_00108ce0,&UNK_00107e61);
      puVar16 = &UNK_00107e8e;
      if (pbVar23 != &UNK_00107e61) {
        puVar16 = &UNK_00107ee7;
      }
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103201;
    uVar7 = func_0x001013c0(0,&UNK_00108d50,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x100) = 0x103216;
    func_0x00101550(1,uVar7,pbVar23,puVar16);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    bVar25 = *pbVar23 < *pbVar18;
    bVar27 = *pbVar23 == *pbVar18;
    pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
    pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
    if (!bVar27) break;
code_r0x00101bd8:
    if (uVar11 == 0) break;
  }
  bVar10 = (!bVar25 && !bVar27) - bVar25;
  ppbVar12 = (byte **)(uVar11 & 0xffffffffffffff00 | (ulong)bVar10);
  if (bVar10 == 0) {
    uVar21 = 1;
    pos = uVar5;
  }
code_r0x00101be8:
  uVar5 = pos;
  pbVar23 = argv[lVar13];
  bVar10 = *pbVar23;
  if (bVar10 == 0x2d) {
    bVar28 = pbVar23[1];
    cVar1 = (char)uVar21;
    if ((bVar28 == 0x6c) || (bVar28 == 0x67)) {
      bVar10 = pbVar23[2];
      ppbVar12 = (byte **)(ulong)bVar10;
      if ((bVar10 != 0x65) && (bVar10 != 0x74)) goto code_r0x00101d06;
      if (pbVar23[3] != 0) {
        if (bVar28 == 0x6e) goto code_r0x00101f19;
        goto code_r0x00101d18;
      }
code_r0x00101e91:
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101e96;
      uVar7 = find_int();
      if (cVar1 == '\0') {
        pbVar23 = argv[lVar13 + 1];
        *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x10201a;
        uVar8 = find_int(pbVar23);
      }
      else {
        pbVar23 = argv[lVar13 + 2];
        *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101eb3;
        uVar8 = func_0x001013e0(pbVar23);
        *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101ec3;
        uVar8 = umaxtostr(uVar8,(undefined *)register0x00000020 + -0xa0);
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101ece;
      iVar6 = strintcmp(uVar7,uVar8);
      bVar25 = argv[lVar13][2] == 0x65;
      bVar28 = argv[lVar13][1];
      pos = pos + 3;
      if (bVar28 == 0x6c) {
        uVar21 = (ulong)(iVar6 < (int)(uint)bVar25);
      }
      else {
        if (bVar28 == 0x67) {
          uVar21 = (ulong)((int)-(uint)bVar25 < iVar6);
        }
        else {
          uVar21 = (ulong)((iVar6 != 0) == bVar25);
        }
      }
      goto code_r0x00101c4f;
    }
code_r0x00101d06:
    if (bVar28 == 0x65) {
      bVar28 = pbVar23[2];
      if (bVar28 == 0x71) {
code_r0x00101f90:
        if (pbVar23[3] == 0) goto code_r0x00101e91;
      }
      else {
code_r0x00101ddd:
        if ((bVar28 == 0x66) && (pbVar23[3] == 0)) {
          pos = pos + 3;
          if (cVar1 != '\0') goto code_r0x001020c1;
          pbVar23 = argv[lVar13 + -1];
          *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101e14;
          iVar6 = func_0x001014d0(1,pbVar23,(undefined *)register0x00000020 + -0x1e0);
          if (iVar6 == 0) {
            pbVar23 = ppbVar17[lVar13 + 1];
            *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101e33;
            iVar6 = func_0x001014d0(1,pbVar23,(undefined *)register0x00000020 + -0x150);
            if ((iVar6 == 0) &&
               (*(long *)((undefined *)register0x00000020 + -0x1e0) ==
                *(long *)((undefined *)register0x00000020 + -0x150))) {
              uVar21 = (ulong)(*(long *)((undefined *)register0x00000020 + -0x1d8) ==
                              *(long *)((undefined *)register0x00000020 + -0x148));
            }
          }
          goto code_r0x00101c4f;
        }
      }
      goto code_r0x00101f9a;
    }
    if (bVar28 == 0x6e) {
      ppbVar12 = (byte **)(ulong)pbVar23[2];
      if (pbVar23[2] == 0x65) goto code_r0x00101f90;
code_r0x00101f19:
      if (((char)ppbVar12 != 't') || (pbVar23[3] != 0)) goto code_r0x00101f9a;
      pos = pos + 3;
      if (cVar1 != '\0') {
        puVar16 = &UNK_00107d9b;
        goto code_r0x001020ae;
      }
      unaff_RBP = (undefined *)register0x00000020 + -0x150;
      pbVar23 = argv[lVar13 + -1];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101f4e;
      iVar6 = func_0x001014d0(1,pbVar23,unaff_RBP);
      ppbVar12 = ppbVar17 + lVar13 + 1;
      if (iVar6 == 0) {
        pbVar23 = *ppbVar12;
        lVar13 = *(long *)((undefined *)register0x00000020 + -0xf8);
        uVar7 = *(undefined8 *)((undefined *)register0x00000020 + -0xf0);
        *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101f77;
        iVar6 = func_0x001014d0(1,pbVar23,unaff_RBP);
        if (iVar6 == 0) {
          if ((*(long *)((undefined *)register0x00000020 + -0xf8) <= lVar13) &&
             (uVar21 = 1, lVar13 <= *(long *)((undefined *)register0x00000020 + -0xf8))) {
            uVar21 = (ulong)(0 < (int)uVar7 -
                                 (int)*(undefined8 *)((undefined *)register0x00000020 + -0xf0));
          }
        }
        else {
          uVar21 = 1;
        }
        goto code_r0x00101c4f;
      }
code_r0x00101fc8:
      pbVar23 = *ppbVar12;
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101fd8;
      func_0x001014d0(1,pbVar23,unaff_RBP);
      goto code_r0x00101c4f;
    }
code_r0x00101d18:
    if (bVar28 != 0x6f) {
      if (bVar28 == 0x65) {
        bVar28 = pbVar23[2];
        goto code_r0x00101ddd;
      }
code_r0x00101f9a:
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101fa2;
      uVar7 = quote(pbVar23);
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101fb8;
      uVar8 = func_0x001013c0(0,&UNK_00107de0,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101fc5;
      test_syntax_error(uVar8,uVar7);
      goto code_r0x00101fc8;
    }
    if ((pbVar23[2] != 0x74) || (pbVar23[3] != 0)) goto code_r0x00101f9a;
    pos = pos + 3;
    if (cVar1 == '\0') {
      pbVar23 = argv[lVar13 + -1];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101d5f;
      iVar6 = func_0x001014d0(1,pbVar23,(undefined *)register0x00000020 + -0x150);
      if (iVar6 == 0) {
        unaff_R12 = *(ulong *)((undefined *)register0x00000020 + -0xf8);
        *(undefined8 *)((undefined *)register0x00000020 + -0x1e8) =
             *(undefined8 *)((undefined *)register0x00000020 + -0xf0);
      }
      pbVar23 = ppbVar17[lVar13 + 1];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101d8c;
      iVar2 = func_0x001014d0(1,pbVar23,(undefined *)register0x00000020 + -0x150);
      if (iVar2 == 0) {
        lVar13 = *(long *)((undefined *)register0x00000020 + -0xf8);
        uVar21 = (ulong)(iVar6 != 0 || (long)unaff_R12 < lVar13);
        if ((iVar6 == 0 && (long)unaff_R12 >= lVar13) && ((long)unaff_R12 <= lVar13)) {
          uVar21 = (ulong)((uint)(*(int *)((undefined *)register0x00000020 + -0x1e8) -
                                 (int)*(undefined8 *)((undefined *)register0x00000020 + -0xf0)) >>
                          0x1f);
        }
      }
      goto code_r0x00101c4f;
    }
  }
  else {
    bVar25 = bVar10 < 0x3d;
    bVar27 = bVar10 == 0x3d;
    if (bVar27) {
      bVar10 = pbVar23[1];
      if (bVar10 == 0) {
code_r0x00101cb8:
        pbVar23 = argv[(long)(int)pos + 2];
        pbVar18 = argv[(long)(int)pos];
        *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101cd4;
        iVar6 = func_0x00101490(pbVar18,pbVar23);
        uVar21 = (ulong)(iVar6 == 0);
        pos = uVar5 + 3;
        goto code_r0x00101c4f;
      }
      bVar25 = bVar10 < 0x3d;
      bVar27 = bVar10 == 0x3d;
      if (bVar27) {
        bVar25 = false;
        bVar27 = pbVar23[2] == 0;
        if (bVar27) goto code_r0x00101cb8;
      }
    }
    lVar13 = 3;
    pbVar18 = &UNK_00107d44;
    do {
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      bVar25 = *pbVar23 < *pbVar18;
      bVar27 = *pbVar23 == *pbVar18;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
    } while (bVar27);
    if ((!bVar25 && !bVar27) == bVar25) {
      pbVar23 = argv[(long)(int)pos + 2];
      pbVar18 = argv[(long)(int)pos];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x101c40;
      iVar6 = func_0x00101490(pbVar18,pbVar23);
      uVar21 = (ulong)(iVar6 != 0);
      pos = uVar5 + 3;
code_r0x00101c4f:
      if (*(long *)((undefined *)register0x00000020 + -0x88) == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar21;
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x10209d;
      func_0x00101400();
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x1020a2;
    func_0x00101320();
  }
  puVar16 = &UNK_00107dc9;
code_r0x001020ae:
  do {
    *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x1020b5;
    uVar7 = func_0x001013c0(0,puVar16,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x1f8) = 0x1020c1;
    test_syntax_error(uVar7,0);
code_r0x001020c1:
    puVar16 = &UNK_00107db2;
  } while( true );
  while( true ) {
    in_RCX = in_RCX + -1;
    bVar25 = *pbVar23 < *pbVar18;
    bVar27 = *pbVar23 == *pbVar18;
    pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
    pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
    if (!bVar27) break;
code_r0x00102b41:
    if (in_RCX == 0) break;
  }
  if ((!bVar25 && !bVar27) != bVar25) {
code_r0x00102aeb:
    return (ulong)(byte)((undefined *)register0x00000020)[-0x39];
  }
  pos = pos + 1;
  goto code_r0x00102898;
}

