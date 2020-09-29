
/* WARNING: Removing unreachable block (ram,0x00101ba4) */
/* WARNING: Removing unreachable block (ram,0x00101ff0) */

ulong three_arguments(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  byte **ppbVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 unaff_RBX;
  undefined *puVar16;
  undefined *unaff_RBP;
  byte *pbVar17;
  byte **ppbVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  uint uVar22;
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
code_r0x00102c50:
  lVar7 = (long)(int)pos;
  *(undefined8 *)((undefined *)register0x00000020 + -8) = unaff_RBX;
  pbVar23 = argv[lVar7 + 1];
  lVar14 = (lVar7 + 1) * 8;
  *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102c7a;
  ppbVar12 = argv;
  uVar5 = pos;
  uVar8 = binop();
  ppbVar18 = argv;
  bVar25 = false;
  bVar27 = (char)uVar8 == '\0';
  if (bVar27) {
    lVar13 = 2;
    pbVar17 = ppbVar12[lVar7];
    pbVar19 = &UNK_00107e18;
    do {
      pbVar20 = pbVar19;
      if (lVar13 == 0) break;
      lVar13 = lVar13 + -1;
      pbVar20 = pbVar19 + (ulong)bVar28 * -2 + 1;
      bVar25 = *pbVar17 < *pbVar19;
      bVar27 = *pbVar17 == *pbVar19;
      pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
      pbVar19 = pbVar20;
    } while (bVar27);
    bVar26 = false;
    bVar25 = (!bVar25 && !bVar27) == bVar25;
    if (bVar25) {
      pos = uVar5 + 1;
      if ((int)pos < (int)argc) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102cbe;
        uVar5 = two_arguments();
        return (ulong)(uVar5 ^ 1);
      }
    }
    else {
      lVar13 = 2;
      pbVar17 = ppbVar12[lVar7];
      pbVar19 = &UNK_00107e1a;
      do {
        if (lVar13 == 0) break;
        lVar13 = lVar13 + -1;
        bVar26 = *pbVar17 < *pbVar19;
        bVar25 = *pbVar17 == *pbVar19;
        pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
        pbVar19 = pbVar19 + (ulong)bVar28 * -2 + 1;
      } while (bVar25);
      bVar27 = false;
      bVar25 = (!bVar26 && !bVar25) == bVar26;
      if (bVar25) {
        lVar13 = 2;
        pbVar17 = ppbVar12[lVar7 + 2];
        pbVar19 = &UNK_00109349;
        do {
          if (lVar13 == 0) break;
          lVar13 = lVar13 + -1;
          bVar27 = *pbVar17 < *pbVar19;
          bVar25 = *pbVar17 == *pbVar19;
          pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
          pbVar19 = pbVar19 + (ulong)bVar28 * -2 + 1;
        } while (bVar25);
        bVar25 = (!bVar27 && !bVar25) == bVar27;
        if (bVar25) {
          pos = uVar5 + 3;
          return uVar8 & 0xffffffffffffff00 | (ulong)(*pbVar23 != 0);
        }
      }
      bVar27 = false;
      lVar7 = 3;
      pbVar17 = pbVar23;
      pbVar19 = &UNK_00107e3e;
      do {
        pbVar20 = pbVar19;
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        pbVar20 = pbVar19 + (ulong)bVar28 * -2 + 1;
        bVar27 = *pbVar17 < *pbVar19;
        bVar25 = *pbVar17 == *pbVar19;
        pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
        pbVar19 = pbVar20;
      } while (bVar25);
      bVar26 = false;
      bVar25 = (!bVar27 && !bVar25) == bVar27;
      if (!bVar25) {
        lVar7 = 3;
        pbVar17 = pbVar23;
        pbVar19 = &UNK_00107e41;
        do {
          pbVar20 = pbVar19;
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          pbVar20 = pbVar19 + (ulong)bVar28 * -2 + 1;
          bVar26 = *pbVar17 < *pbVar19;
          bVar25 = *pbVar17 == *pbVar19;
          pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
          pbVar19 = pbVar20;
        } while (bVar25);
        if ((!bVar26 && !bVar25) != bVar26) {
          *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102d70;
          lVar14 = quote(pbVar23);
          *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102d86;
          pbVar20 = (byte *)func_0x001013c0(0,&UNK_00107e44,5);
          *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102d93;
          test_syntax_error(pbVar20,lVar14);
          goto code_r0x00102d93;
        }
      }
      uVar8 = (ulong)uVar5;
      if ((int)uVar5 < (int)argc) {
        uVar10 = *(undefined8 *)((undefined *)register0x00000020 + -8);
        *(byte ***)((undefined *)register0x00000020 + -8) = unaff_R15;
        *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
        *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
        *(ulong *)((undefined *)register0x00000020 + -0x20) = unaff_R12;
        *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
        *(undefined8 *)((undefined *)register0x00000020 + -0x30) = uVar10;
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
          uVar8 = SEXT48((int)pos);
          ppbVar12 = (byte **)argv[uVar8];
          unaff_R13 = (ulong)*(byte *)ppbVar12;
          iVar6 = (int)unaff_R12;
          uVar5 = pos;
          if (*(byte *)ppbVar12 == 0x21) {
            if (*(char *)((long)ppbVar12 + 1) != '\0') {
              uVar24 = 0;
              goto code_r0x00102a78;
            }
            uVar22 = pos + 1;
            uVar8 = (ulong)uVar22;
            uVar4 = uVar22;
            if ((int)uVar22 < iVar6) {
              uVar8 = SEXT48((int)uVar22);
              lVar7 = 0;
              unaff_R14 = 1;
              uVar3 = (iVar6 + -2) - pos;
              lVar14 = uVar8 + 1;
              while( true ) {
                uVar24 = (uint)unaff_R14;
                cVar1 = (char)lVar7;
                ppbVar12 = (byte **)argv[uVar8];
                uVar5 = (uint)uVar8;
                pos = uVar22;
                if (*(byte *)ppbVar12 != 0x21) break;
                if (*(char *)((long)ppbVar12 + 1) != '\0') goto code_r0x00102a68;
                uVar8 = uVar8 + 1;
                uVar4 = uVar5 + 1;
                if (uVar8 == lVar14 + (ulong)uVar3) goto code_r0x00102a5e;
                unaff_R14 = (ulong)(uVar24 ^ 1);
                lVar7 = 1;
              }
              if (cVar1 != '\0') {
                pos = uVar5;
              }
              unaff_R13 = (ulong)*(byte *)ppbVar12;
              goto code_r0x00102947;
            }
          }
          else {
            unaff_R14 = 0;
code_r0x00102947:
            uVar24 = (uint)unaff_R14;
            if ((char)unaff_R13 != '(') goto code_r0x00102a78;
            if (*(char *)((long)ppbVar12 + 1) != '\0') goto code_r0x00102a78;
            pos = uVar5 + 1;
            uVar8 = (ulong)pos;
            uVar4 = pos;
            if ((int)pos < iVar6) {
              if ((int)(uVar5 + 2) < iVar6) {
                uVar21 = 1;
                ppbVar12 = argv + (int)(uVar5 + 2);
                uVar4 = iVar6 - 1;
                bVar25 = uVar4 < uVar5;
                bVar27 = uVar4 == uVar5;
                goto code_r0x00102994;
              }
              uVar21 = 1;
              goto code_r0x001029c8;
            }
          }
code_r0x00102a5e:
          do {
            pos = uVar4;
            uVar24 = (uint)unaff_R14;
            cVar1 = (char)lVar7;
            *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102a63;
            beyond();
code_r0x00102a68:
            if (cVar1 != '\0') {
              pos = (uint)uVar8;
            }
code_r0x00102a78:
            uVar22 = (uint)unaff_R12;
            uVar4 = uVar22 - uVar5;
            bVar25 = uVar4 < 3;
            bVar27 = uVar4 == 3;
            if ((int)uVar4 < 4) {
              if (bVar27) goto code_r0x00102aaf;
joined_r0x00102b06:
              if ((((char)unaff_R13 == '-') && (*(char *)((long)ppbVar12 + 1) != '\0')) &&
                 (*(char *)((long)ppbVar12 + 2) == '\0')) {
                *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102b1b;
                uVar5 = unary_operator();
                unaff_R12 = (ulong)argc;
                goto code_r0x00102a13;
              }
              pos = uVar5 + 1;
              uVar24 = uVar24 ^ (char)unaff_R13 != '\0';
              uVar15 = uVar15 & uVar24;
              bVar11 = (byte)uVar15;
              bVar25 = uVar22 < pos;
              bVar27 = uVar22 == pos;
              if ((int)uVar22 <= (int)pos) goto code_r0x00102ae7;
            }
            else {
              lVar14 = 3;
              ppbVar18 = ppbVar12;
              pbVar23 = &UNK_00107dc6;
              do {
                if (lVar14 == 0) break;
                lVar14 = lVar14 + -1;
                bVar25 = *(byte *)ppbVar18 < *pbVar23;
                bVar27 = *(byte *)ppbVar18 == *pbVar23;
                ppbVar18 = (byte **)((long)ppbVar18 + (ulong)bVar28 * -2 + 1);
                pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
              } while (bVar27);
              if ((!bVar25 && !bVar27) == bVar25) {
                pbVar23 = unaff_R15[uVar8 + 2];
                *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102aa7;
                cVar1 = binop(pbVar23);
                if (cVar1 == '\0') goto code_r0x00102aaf;
                *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102b94;
                uVar5 = binary_operator(1);
                unaff_R12 = (ulong)argc;
              }
              else {
code_r0x00102aaf:
                pbVar23 = unaff_R15[uVar8 + 1];
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
              bVar11 = (byte)uVar15;
              uVar5 = (uint)unaff_R12;
              bVar25 = uVar5 < pos;
              bVar27 = uVar5 == pos;
              if ((int)uVar5 <= (int)pos) {
code_r0x00102ae7:
                ((undefined *)register0x00000020)[-0x39] =
                     ((undefined *)register0x00000020)[-0x39] | bVar11;
                goto code_r0x00102aeb;
              }
            }
            unaff_R14 = (ulong)uVar24;
            pbVar23 = argv[(int)pos];
            lVar7 = 3;
            pbVar17 = pbVar23;
            pbVar19 = &UNK_00107e3e;
            do {
              if (lVar7 == 0) break;
              lVar7 = lVar7 + -1;
              bVar25 = *pbVar17 < *pbVar19;
              bVar27 = *pbVar17 == *pbVar19;
              pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
              pbVar19 = pbVar19 + (ulong)bVar28 * -2 + 1;
            } while (bVar27);
            if ((!bVar25 && !bVar27) != bVar25) {
              lVar7 = 3;
              pbVar17 = (undefined *)register0x00000020 + -0x39;
              bVar25 = false;
              *pbVar17 = *pbVar17 | (byte)uVar15;
              bVar27 = *pbVar17 == 0;
              pbVar17 = &UNK_00107e41;
              goto code_r0x00102b41;
            }
            uVar5 = pos + 1;
            uVar4 = uVar5;
            pos = uVar5;
          } while ((int)unaff_R12 <= (int)uVar5);
        } while( true );
      }
    }
code_r0x00102d93:
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102d98;
    beyond();
    uVar10 = program_name;
    *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_R13;
    *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R12;
    *(undefined **)((undefined *)register0x00000020 + -0x20) = unaff_RBP;
    *(long *)((undefined *)register0x00000020 + -0x28) = lVar14;
    *(undefined8 *)((undefined *)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if ((int)pbVar20 == 0) goto code_r0x00102dfd;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102ddd;
    uVar9 = func_0x001013c0(0,&UNK_00108010,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102df6;
    func_0x001015c0(stderr,1,uVar9,uVar10);
    goto code_r0x00102df6;
  }
  uVar10 = *(undefined8 *)((undefined *)register0x00000020 + -8);
  *(byte ***)((undefined *)register0x00000020 + -8) = unaff_R15;
  *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
  *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
  *(ulong *)((undefined *)register0x00000020 + -0x20) = unaff_R12;
  *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
  *(undefined8 *)((undefined *)register0x00000020 + -0x30) = uVar10;
  *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar5 = pos + 1;
  uVar8 = 0;
  lVar14 = (long)(int)uVar5;
  uVar4 = argc - 2;
  ppbVar12 = (byte **)(ulong)uVar4;
  bVar25 = uVar4 < uVar5;
  bVar27 = uVar4 == uVar5;
  if ((int)uVar5 < (int)uVar4) {
    uVar21 = 3;
    pbVar23 = argv[lVar14 + 1];
    pbVar17 = &UNK_00107dc6;
    do {
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      bVar25 = *pbVar23 < *pbVar17;
      bVar27 = *pbVar23 == *pbVar17;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
    } while (bVar27);
    bVar11 = (!bVar25 && !bVar27) - bVar25;
    ppbVar12 = (byte **)(uVar21 & 0xffffffffffffff00 | (ulong)bVar11);
    if (bVar11 == 0) {
      uVar8 = 1;
      pos = uVar5;
    }
  }
  uVar5 = pos;
  pbVar23 = argv[lVar14];
  bVar11 = *pbVar23;
  if (bVar11 == 0x2d) {
    bVar28 = pbVar23[1];
    cVar1 = (char)uVar8;
    if ((bVar28 == 0x6c) || (bVar28 == 0x67)) {
      bVar11 = pbVar23[2];
      ppbVar12 = (byte **)(ulong)bVar11;
      if ((bVar11 != 0x65) && (bVar11 != 0x74)) goto code_r0x00101d06;
      if (pbVar23[3] != 0) {
        if (bVar28 == 0x6e) goto code_r0x00101f19;
        goto code_r0x00101d18;
      }
code_r0x00101e91:
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101e96;
      uVar10 = find_int();
      if (cVar1 == '\0') {
        pbVar23 = argv[lVar14 + 1];
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x10201a;
        uVar9 = find_int(pbVar23);
      }
      else {
        pbVar23 = argv[lVar14 + 2];
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101eb3;
        uVar9 = func_0x001013e0(pbVar23);
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101ec3;
        uVar9 = umaxtostr(uVar9,(undefined *)register0x00000020 + -0x58);
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101ece;
      iVar6 = strintcmp(uVar10,uVar9);
      bVar25 = argv[lVar14][2] == 0x65;
      bVar28 = argv[lVar14][1];
      pos = pos + 3;
      if (bVar28 == 0x6c) {
        uVar8 = (ulong)(iVar6 < (int)(uint)bVar25);
      }
      else {
        if (bVar28 == 0x67) {
          uVar8 = (ulong)((int)-(uint)bVar25 < iVar6);
        }
        else {
          uVar8 = (ulong)((iVar6 != 0) == bVar25);
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
          pbVar23 = argv[lVar14 + -1];
          *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101e14;
          iVar6 = func_0x001014d0(1,pbVar23,(undefined *)register0x00000020 + -0x198);
          if (iVar6 == 0) {
            pbVar23 = ppbVar18[lVar14 + 1];
            *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101e33;
            iVar6 = func_0x001014d0(1,pbVar23,(undefined *)register0x00000020 + -0x108);
            if ((iVar6 == 0) &&
               (*(long *)((undefined *)register0x00000020 + -0x198) ==
                *(long *)((undefined *)register0x00000020 + -0x108))) {
              uVar8 = (ulong)(*(long *)((undefined *)register0x00000020 + -400) ==
                             *(long *)((undefined *)register0x00000020 + -0x100));
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
      unaff_RBP = (undefined *)register0x00000020 + -0x108;
      pbVar23 = argv[lVar14 + -1];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101f4e;
      iVar6 = func_0x001014d0(1,pbVar23,unaff_RBP);
      ppbVar12 = ppbVar18 + lVar14 + 1;
      if (iVar6 == 0) {
        pbVar23 = *ppbVar12;
        lVar14 = *(long *)((undefined *)register0x00000020 + -0xb0);
        uVar10 = *(undefined8 *)((undefined *)register0x00000020 + -0xa8);
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101f77;
        iVar6 = func_0x001014d0(1,pbVar23,unaff_RBP);
        if (iVar6 == 0) {
          if ((*(long *)((undefined *)register0x00000020 + -0xb0) <= lVar14) &&
             (uVar8 = 1, lVar14 <= *(long *)((undefined *)register0x00000020 + -0xb0))) {
            uVar8 = (ulong)(0 < (int)uVar10 -
                                (int)*(undefined8 *)((undefined *)register0x00000020 + -0xa8));
          }
        }
        else {
          uVar8 = 1;
        }
        goto code_r0x00101c4f;
      }
code_r0x00101fc8:
      pbVar23 = *ppbVar12;
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101fd8;
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
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101fa2;
      uVar10 = quote(pbVar23);
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101fb8;
      uVar9 = func_0x001013c0(0,&UNK_00107de0,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101fc5;
      test_syntax_error(uVar9,uVar10);
      goto code_r0x00101fc8;
    }
    if ((pbVar23[2] != 0x74) || (pbVar23[3] != 0)) goto code_r0x00101f9a;
    pos = pos + 3;
    if (cVar1 == '\0') {
      pbVar23 = argv[lVar14 + -1];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101d5f;
      iVar6 = func_0x001014d0(1,pbVar23,(undefined *)register0x00000020 + -0x108);
      if (iVar6 == 0) {
        unaff_R12 = *(ulong *)((undefined *)register0x00000020 + -0xb0);
        *(undefined8 *)((undefined *)register0x00000020 + -0x1a0) =
             *(undefined8 *)((undefined *)register0x00000020 + -0xa8);
      }
      pbVar23 = ppbVar18[lVar14 + 1];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101d8c;
      iVar2 = func_0x001014d0(1,pbVar23,(undefined *)register0x00000020 + -0x108);
      if (iVar2 == 0) {
        lVar14 = *(long *)((undefined *)register0x00000020 + -0xb0);
        uVar8 = (ulong)(iVar6 != 0 || (long)unaff_R12 < lVar14);
        if ((iVar6 == 0 && (long)unaff_R12 >= lVar14) && ((long)unaff_R12 <= lVar14)) {
          uVar8 = (ulong)((uint)(*(int *)((undefined *)register0x00000020 + -0x1a0) -
                                (int)*(undefined8 *)((undefined *)register0x00000020 + -0xa8)) >>
                         0x1f);
        }
      }
      goto code_r0x00101c4f;
    }
  }
  else {
    bVar25 = bVar11 < 0x3d;
    bVar27 = bVar11 == 0x3d;
    if (bVar27) {
      bVar11 = pbVar23[1];
      if (bVar11 == 0) {
code_r0x00101cb8:
        pbVar23 = argv[(long)(int)pos + 2];
        pbVar17 = argv[(long)(int)pos];
        *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101cd4;
        iVar6 = func_0x00101490(pbVar17,pbVar23);
        uVar8 = (ulong)(iVar6 == 0);
        pos = uVar5 + 3;
        goto code_r0x00101c4f;
      }
      bVar25 = bVar11 < 0x3d;
      bVar27 = bVar11 == 0x3d;
      if (bVar27) {
        bVar25 = false;
        bVar27 = pbVar23[2] == 0;
        if (bVar27) goto code_r0x00101cb8;
      }
    }
    lVar14 = 3;
    pbVar17 = &UNK_00107d44;
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar25 = *pbVar23 < *pbVar17;
      bVar27 = *pbVar23 == *pbVar17;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
    } while (bVar27);
    if ((!bVar25 && !bVar27) == bVar25) {
      pbVar23 = argv[(long)(int)pos + 2];
      pbVar17 = argv[(long)(int)pos];
      *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x101c40;
      iVar6 = func_0x00101490(pbVar17,pbVar23);
      uVar8 = (ulong)(iVar6 != 0);
      pos = uVar5 + 3;
code_r0x00101c4f:
      if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar8;
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
    uVar10 = func_0x001013c0(0,puVar16,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x1b0) = 0x1020c1;
    test_syntax_error(uVar10,0);
code_r0x001020c1:
    puVar16 = &UNK_00107db2;
  } while( true );
  while( true ) {
    uVar22 = (int)uVar21 + 1;
    uVar21 = (ulong)uVar22;
    ppbVar12 = ppbVar12 + 1;
    bVar25 = uVar4 - uVar5 < uVar22;
    bVar27 = uVar4 - uVar5 == uVar22;
    if (bVar27) break;
code_r0x00102994:
    lVar14 = 2;
    pbVar23 = *ppbVar12;
    pbVar17 = &UNK_00109349;
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar25 = *pbVar23 < *pbVar17;
      bVar27 = *pbVar23 == *pbVar17;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
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
    uVar10 = quote_n(0,&UNK_00109349);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c0a;
    uVar9 = func_0x001013c0(0,&UNK_00107e28,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c1a;
    test_syntax_error(uVar9,uVar10,unaff_RBP);
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c26;
  unaff_RBX = quote(&UNK_00109349);
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c3c;
  uVar10 = func_0x001013c0(0,&UNK_00107e1c,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102c49;
  test_syntax_error(uVar10,unaff_RBX);
  register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x48);
  goto code_r0x00102c50;
  while( true ) {
    lVar7 = lVar7 + -1;
    bVar25 = *pbVar23 < *pbVar17;
    bVar27 = *pbVar23 == *pbVar17;
    pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
    pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
    if (!bVar27) break;
code_r0x00102b41:
    if (lVar7 == 0) break;
  }
  if ((!bVar25 && !bVar27) != bVar25) {
code_r0x00102aeb:
    return (ulong)(byte)((undefined *)register0x00000020)[-0x39];
  }
  pos = pos + 1;
  goto code_r0x00102898;
code_r0x00102df6:
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102dfd;
  func_0x001015a0((ulong)pbVar20 & 0xffffffff);
code_r0x00102dfd:
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e17;
  uVar9 = func_0x001013c0(0,&UNK_00108038,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e22;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e3c;
  uVar9 = func_0x001013c0(0,&UNK_00108090,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e47;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e61;
  uVar9 = func_0x001013c0(0,&UNK_001080c8,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e6c;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e86;
  uVar9 = func_0x001013c0(0,&UNK_001080f8,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102e91;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102eab;
  uVar9 = func_0x001013c0(0,&UNK_00108130,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102eb6;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102ed0;
  uVar9 = func_0x001013c0(0,&UNK_001081a8,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102edb;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102ef5;
  uVar9 = func_0x001013c0(0,&UNK_001082a8,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f00;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f1a;
  uVar9 = func_0x001013c0(0,&UNK_001083a8,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f25;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f3f;
  uVar9 = func_0x001013c0(0,&UNK_00108520,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f4a;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f64;
  uVar9 = func_0x001013c0(0,&UNK_001085e0,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f6f;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f89;
  uVar9 = func_0x001013c0(0,&UNK_00108690,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102f94;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102fae;
  uVar9 = func_0x001013c0(0,&UNK_001087a8,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102fb9;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102fd3;
  uVar9 = func_0x001013c0(0,&UNK_00108910,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102fde;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x102ff8;
  uVar9 = func_0x001013c0(0,&UNK_00108a30,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103003;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10301d;
  uVar9 = func_0x001013c0(0,&UNK_00108b18,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103028;
  func_0x00101470(uVar9,uVar10);
  uVar10 = stdout;
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103042;
  uVar9 = func_0x001013c0(0,&UNK_00108b98,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10304d;
  func_0x00101470(uVar9,uVar10);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103060;
  uVar10 = func_0x001013c0(0,&UNK_00107e66,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103076;
  uVar9 = func_0x001013c0(0,&UNK_00108c20,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10308f;
  func_0x00101550(1,uVar9,uVar10);
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
  ppbVar12 = (byte **)((undefined *)register0x00000020 + -0xb0);
  do {
    ppbVar18 = ppbVar12;
    ppbVar12 = ppbVar18 + 2;
    pbVar23 = *ppbVar12;
    bVar25 = false;
    bVar27 = pbVar23 == (byte *)0x0;
    if (bVar27) break;
    lVar14 = 5;
    pbVar17 = &UNK_00107e61;
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar25 = *pbVar17 < *pbVar23;
      bVar27 = *pbVar17 == *pbVar23;
      pbVar17 = pbVar17 + (ulong)bVar28 * -2 + 1;
      pbVar23 = pbVar23 + (ulong)bVar28 * -2 + 1;
    } while (bVar27);
  } while ((!bVar25 && !bVar27) != bVar25);
  pbVar23 = ppbVar18[3];
  if (pbVar23 == (byte *)0x0) {
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103220;
    uVar10 = func_0x001013c0(0,&UNK_00107ed1,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10323d;
    func_0x00101550(1,uVar10,&UNK_00107ee8,&UNK_00108ce0);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103249;
    lVar14 = func_0x00101540(5,0);
    if (lVar14 != 0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103262;
      iVar6 = func_0x00101350(lVar14,&UNK_00107ef6,3);
      if (iVar6 != 0) {
        pbVar23 = &UNK_00107e61;
        goto code_r0x001032b0;
      }
    }
    pbVar23 = &UNK_00107e61;
    puVar16 = &UNK_00107e8e;
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103287;
    uVar10 = func_0x001013c0(0,&UNK_00107efa,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1032a4;
    func_0x00101550(1,uVar10,&UNK_00108ce0,&UNK_00107e61);
  }
  else {
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10315f;
    uVar10 = func_0x001013c0(0,&UNK_00107ed1,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x10317c;
    func_0x00101550(1,uVar10,&UNK_00107ee8,&UNK_00108ce0);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103188;
    lVar14 = func_0x00101540(5,0);
    if (lVar14 != 0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1031a1;
      iVar6 = func_0x00101350(lVar14,&UNK_00107ef6,3);
      if (iVar6 != 0) {
code_r0x001032b0:
        uVar10 = stdout;
        *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1032ca;
        uVar9 = func_0x001013c0(0,&UNK_00108d08,5);
        *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1032d5;
        func_0x00101470(uVar9,uVar10);
      }
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1031bc;
    uVar10 = func_0x001013c0(0,&UNK_00107efa,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x1031d9;
    func_0x00101550(1,uVar10,&UNK_00108ce0,&UNK_00107e61);
    puVar16 = &UNK_00107e8e;
    if (pbVar23 != &UNK_00107e61) {
      puVar16 = &UNK_00107ee7;
    }
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103201;
  uVar10 = func_0x001013c0(0,&UNK_00108d50,5);
  *(undefined8 *)((undefined *)register0x00000020 + -0xb8) = 0x103216;
  func_0x00101550(1,uVar10,pbVar23,puVar16);
  goto code_r0x00102df6;
}

