
ulong beyond(void)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *unaff_RBP;
  byte *pbVar14;
  undefined *puVar15;
  byte bVar16;
  byte *pbVar17;
  long unaff_R12;
  ulong uVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  int iStack432;
  long lStack424;
  long lStack416;
  long lStack280;
  long lStack272;
  long lStack192;
  int iStack184;
  undefined auStack136 [32];
  undefined auStack104 [24];
  long lStack80;
  undefined8 uStack64;
  undefined *puStack16;
  
  bVar22 = 0;
  puStack16 = &UNK_00101b19;
  uStack64 = quote(*(undefined8 *)(argv + -8 + (long)argc * 8));
  puStack16 = &UNK_00101b2f;
  uVar6 = func_0x001013c0(0,&UNK_00107d81,5);
  bVar16 = (byte)uVar6;
  puStack16 = &UNK_00101b3c;
  test_syntax_error(uVar6,uStack64);
  if ((int)(pos + 1) < argc) {
    pos = pos + 2;
    return (ulong)pos;
  }
  pos = pos + 1;
  beyond();
  lVar11 = argv;
  lStack80 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = pos + 1;
  if (bVar16 != 0) {
    uVar13 = pos + 2;
    pos = pos + 1;
  }
  uVar18 = 0;
  lVar19 = (long)(int)uVar13;
  uVar9 = argc - 2;
  puVar12 = (undefined8 *)(ulong)uVar9;
  bVar20 = uVar9 < uVar13;
  bVar21 = uVar9 == uVar13;
  if ((int)uVar13 < (int)uVar9) {
    uVar10 = 3;
    pbVar14 = *(byte **)(argv + 8 + lVar19 * 8);
    pbVar17 = &UNK_00107dc6;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      bVar20 = *pbVar14 < *pbVar17;
      bVar21 = *pbVar14 == *pbVar17;
      pbVar14 = pbVar14 + (ulong)bVar22 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar22 * -2 + 1;
    } while (bVar21);
    bVar8 = (!bVar20 && !bVar21) - bVar20;
    puVar12 = (undefined8 *)(uVar10 & 0xffffffffffffff00 | (ulong)bVar8);
    if (bVar8 == 0) {
      uVar18 = 1;
      pos = uVar13;
    }
  }
  uVar13 = pos;
  pbVar14 = *(byte **)(argv + lVar19 * 8);
  lVar1 = lVar19 * 8;
  bVar8 = *pbVar14;
  if (bVar8 == 0x2d) {
    bVar22 = pbVar14[1];
    bVar8 = (byte)uVar18;
    if ((bVar22 == 0x6c) || (bVar22 == 0x67)) {
      bVar2 = pbVar14[2];
      puVar12 = (undefined8 *)(ulong)bVar2;
      if ((bVar2 != 0x65) && (bVar2 != 0x74)) goto code_r0x00101d06;
      if (pbVar14[3] != 0) {
        if (bVar22 == 0x6e) goto code_r0x00101f19;
        goto code_r0x00101d18;
      }
code_r0x00101e84:
      if (bVar16 == 0) {
        uVar6 = find_int();
      }
      else {
        uVar6 = func_0x001013e0(*(undefined8 *)(argv + -8 + lVar1));
        uVar6 = umaxtostr(uVar6,auStack136);
      }
      if (bVar8 == 0) {
        uVar7 = find_int(*(undefined8 *)(argv + 8 + lVar1));
      }
      else {
        uVar7 = func_0x001013e0(*(undefined8 *)(argv + 0x10 + lVar1));
        uVar7 = umaxtostr(uVar7,auStack104);
      }
      iVar4 = strintcmp(uVar6,uVar7);
      lVar11 = *(long *)(argv + lVar19 * 8);
      bVar20 = *(char *)(lVar11 + 2) == 'e';
      cVar3 = *(char *)(lVar11 + 1);
      pos = pos + 3;
      if (cVar3 == 'l') {
        uVar18 = (ulong)(iVar4 < (int)(uint)bVar20);
      }
      else {
        if (cVar3 == 'g') {
          uVar18 = (ulong)((int)-(uint)bVar20 < iVar4);
        }
        else {
          uVar18 = (ulong)((iVar4 != 0) == bVar20);
        }
      }
      goto code_r0x00101c4f;
    }
code_r0x00101d06:
    if (bVar22 == 0x65) {
      bVar22 = pbVar14[2];
      if (bVar22 == 0x71) {
code_r0x00101f90:
        if (pbVar14[3] == 0) goto code_r0x00101e84;
      }
      else {
code_r0x00101ddd:
        if ((bVar22 == 0x66) && (pbVar14[3] == 0)) {
          pos = pos + 3;
          uVar18 = (ulong)(bVar8 | bVar16);
          if ((bVar8 | bVar16) != 0) goto code_r0x001020c1;
          iVar4 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),&lStack424);
          if (((iVar4 == 0) &&
              (iVar4 = func_0x001014d0(1,*(undefined8 *)(lVar11 + 8 + lVar1),&lStack280), iVar4 == 0
              )) && (lStack424 == lStack280)) {
            uVar18 = (ulong)(lStack416 == lStack272);
          }
          goto code_r0x00101c4f;
        }
      }
      goto code_r0x00101f9a;
    }
    if (bVar22 == 0x6e) {
      puVar12 = (undefined8 *)(ulong)pbVar14[2];
      if (pbVar14[2] == 0x65) goto code_r0x00101f90;
code_r0x00101f19:
      if (((char)puVar12 != 't') || (pbVar14[3] != 0)) goto code_r0x00101f9a;
      pos = pos + 3;
      uVar18 = (ulong)(bVar8 | bVar16);
      if ((bVar8 | bVar16) != 0) {
        puVar15 = &UNK_00107d9b;
        goto code_r0x001020ae;
      }
      unaff_RBP = &lStack280;
      iVar5 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),unaff_RBP);
      iVar4 = iStack184;
      lVar19 = lStack192;
      puVar12 = (undefined8 *)(lVar11 + 8 + lVar1);
      if (iVar5 == 0) {
        iVar5 = func_0x001014d0(1,*puVar12,unaff_RBP);
        if (iVar5 == 0) {
          if ((lStack192 <= lVar19) && (uVar18 = 1, lVar19 <= lStack192)) {
            uVar18 = (ulong)(0 < iVar4 - iStack184);
          }
        }
        else {
          uVar18 = 1;
        }
        goto code_r0x00101c4f;
      }
code_r0x00101fc8:
      func_0x001014d0(1,*puVar12,unaff_RBP);
      goto code_r0x00101c4f;
    }
code_r0x00101d18:
    if (bVar22 != 0x6f) {
      if (bVar22 == 0x65) {
        bVar22 = pbVar14[2];
        goto code_r0x00101ddd;
      }
code_r0x00101f9a:
      uVar6 = quote(pbVar14);
      uVar7 = func_0x001013c0(0,&UNK_00107de0,5);
      test_syntax_error(uVar7,uVar6);
      goto code_r0x00101fc8;
    }
    if ((pbVar14[2] != 0x74) || (pbVar14[3] != 0)) goto code_r0x00101f9a;
    pos = pos + 3;
    uVar18 = (ulong)(bVar8 | bVar16);
    if ((bVar8 | bVar16) == 0) {
      iVar4 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),&lStack280);
      if (iVar4 == 0) {
        unaff_R12 = lStack192;
        iStack432 = iStack184;
      }
      iVar5 = func_0x001014d0(1,*(undefined8 *)(lVar11 + 8 + lVar1),&lStack280);
      if (((iVar5 == 0) &&
          (uVar18 = (ulong)(iVar4 != 0 || unaff_R12 < lStack192),
          iVar4 == 0 && unaff_R12 >= lStack192)) && (unaff_R12 <= lStack192)) {
        uVar18 = (ulong)((uint)(iStack432 - iStack184) >> 0x1f);
      }
      goto code_r0x00101c4f;
    }
  }
  else {
    bVar20 = bVar8 < 0x3d;
    bVar21 = bVar8 == 0x3d;
    if (bVar21) {
      bVar16 = pbVar14[1];
      if (bVar16 == 0) {
code_r0x00101cb8:
        iVar4 = func_0x00101490(*(undefined8 *)(argv + -0x10 + ((long)(int)pos + 2) * 8),
                                *(undefined8 *)(argv + ((long)(int)pos + 2) * 8));
        uVar18 = (ulong)(iVar4 == 0);
        pos = uVar13 + 3;
        goto code_r0x00101c4f;
      }
      bVar20 = bVar16 < 0x3d;
      bVar21 = bVar16 == 0x3d;
      if (bVar21) {
        bVar20 = false;
        bVar21 = pbVar14[2] == 0;
        if (bVar21) goto code_r0x00101cb8;
      }
    }
    lVar11 = 3;
    pbVar17 = &UNK_00107d44;
    do {
      if (lVar11 == 0) break;
      lVar11 = lVar11 + -1;
      bVar20 = *pbVar14 < *pbVar17;
      bVar21 = *pbVar14 == *pbVar17;
      pbVar14 = pbVar14 + (ulong)bVar22 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar22 * -2 + 1;
    } while (bVar21);
    if ((!bVar20 && !bVar21) == bVar20) {
      iVar4 = func_0x00101490(*(undefined8 *)(argv + -0x10 + ((long)(int)pos + 2) * 8),
                              *(undefined8 *)(argv + ((long)(int)pos + 2) * 8));
      uVar18 = (ulong)(iVar4 != 0);
      pos = uVar13 + 3;
code_r0x00101c4f:
      if (lStack80 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar18;
      }
      func_0x00101400();
    }
    func_0x00101320();
  }
  puVar15 = &UNK_00107dc9;
code_r0x001020ae:
  do {
    uVar6 = func_0x001013c0(0,puVar15,5);
    test_syntax_error(uVar6,0);
code_r0x001020c1:
    puVar15 = &UNK_00107db2;
  } while( true );
}

