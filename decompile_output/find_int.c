
byte * find_int(byte *param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  byte *pbVar17;
  long *unaff_RBP;
  undefined *puVar18;
  byte bVar19;
  long unaff_R12;
  ulong uVar20;
  long lVar21;
  long in_FS_OFFSET;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  int iStack440;
  long lStack432;
  long lStack424;
  long lStack288;
  long lStack280;
  long lStack200;
  int iStack192;
  undefined auStack144 [32];
  undefined auStack112 [24];
  long lStack88;
  undefined8 uStack72;
  undefined *puStack24;
  undefined *puStack16;
  
  bVar24 = 0;
  puStack16 = &UNK_00101a29;
  plVar6 = (long *)func_0x001015f0();
  lVar14 = *plVar6;
  pbVar7 = param_1;
  while (bVar19 = *pbVar7, (*(byte *)(lVar14 + (ulong)bVar19 * 2) & 1) != 0) {
    pbVar7 = pbVar7 + 1;
  }
  if (bVar19 == 0x2b) {
    pbVar7 = pbVar7 + 1;
    pbVar12 = pbVar7;
  }
  else {
    pbVar12 = pbVar7 + (bVar19 == 0x2d);
  }
  pbVar17 = pbVar12 + 1;
  if ((int)(char)*pbVar12 - 0x30U < 10) {
    bVar19 = pbVar12[1];
    while ((int)(char)bVar19 - 0x30U < 10) {
      pbVar17 = pbVar17 + 1;
      bVar19 = *pbVar17;
    }
    bVar10 = *(byte *)(lVar14 + ((ulong)(uint)(int)(char)bVar19 & 0xff) * 2);
    while ((bVar10 & 1) != 0) {
      pbVar17 = pbVar17 + 1;
      bVar19 = *pbVar17;
      bVar10 = *(byte *)(lVar14 + (ulong)bVar19 * 2);
    }
    if (bVar19 == 0) {
      return pbVar7;
    }
  }
  puStack16 = &UNK_00101ad1;
  uVar8 = quote(param_1);
  puStack16 = &UNK_00101ae7;
  uVar9 = func_0x001013c0(0,&UNK_00107d6e,5);
  puStack16 = &UNK_00101af4;
  test_syntax_error(uVar9,uVar8);
  puStack24 = &UNK_00101b19;
  puStack16 = (undefined *)uVar8;
  uStack72 = quote(*(undefined8 *)(argv + -8 + (long)argc * 8));
  puStack24 = &UNK_00101b2f;
  uVar8 = func_0x001013c0(0,&UNK_00107d81,5);
  bVar19 = (byte)uVar8;
  puStack24 = &UNK_00101b3c;
  test_syntax_error(uVar8,uStack72);
  if ((int)(pos + 1) < argc) {
    pos = pos + 2;
    return (byte *)(ulong)pos;
  }
  pos = pos + 1;
  beyond();
  lVar14 = argv;
  lStack88 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = pos + 1;
  if (bVar19 != 0) {
    uVar16 = pos + 2;
    pos = pos + 1;
  }
  uVar20 = 0;
  lVar21 = (long)(int)uVar16;
  uVar11 = argc - 2;
  puVar15 = (undefined8 *)(ulong)uVar11;
  bVar22 = uVar11 < uVar16;
  bVar23 = uVar11 == uVar16;
  if ((int)uVar16 < (int)uVar11) {
    uVar13 = 3;
    pbVar7 = *(byte **)(argv + 8 + lVar21 * 8);
    pbVar12 = &UNK_00107dc6;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      bVar22 = *pbVar7 < *pbVar12;
      bVar23 = *pbVar7 == *pbVar12;
      pbVar7 = pbVar7 + (ulong)bVar24 * -2 + 1;
      pbVar12 = pbVar12 + (ulong)bVar24 * -2 + 1;
    } while (bVar23);
    bVar10 = (!bVar22 && !bVar23) - bVar22;
    puVar15 = (undefined8 *)(uVar13 & 0xffffffffffffff00 | (ulong)bVar10);
    if (bVar10 == 0) {
      uVar20 = 1;
      pos = uVar16;
    }
  }
  uVar16 = pos;
  pbVar7 = *(byte **)(argv + lVar21 * 8);
  lVar1 = lVar21 * 8;
  bVar10 = *pbVar7;
  if (bVar10 == 0x2d) {
    bVar24 = pbVar7[1];
    bVar10 = (byte)uVar20;
    if ((bVar24 == 0x6c) || (bVar24 == 0x67)) {
      bVar2 = pbVar7[2];
      puVar15 = (undefined8 *)(ulong)bVar2;
      if ((bVar2 != 0x65) && (bVar2 != 0x74)) goto code_r0x00101d06;
      if (pbVar7[3] != 0) {
        if (bVar24 == 0x6e) goto code_r0x00101f19;
        goto code_r0x00101d18;
      }
code_r0x00101e84:
      if (bVar19 == 0) {
        uVar8 = find_int();
      }
      else {
        uVar8 = func_0x001013e0(*(undefined8 *)(argv + -8 + lVar1));
        uVar8 = umaxtostr(uVar8,auStack144);
      }
      if (bVar10 == 0) {
        uVar9 = find_int(*(undefined8 *)(argv + 8 + lVar1));
      }
      else {
        uVar9 = func_0x001013e0(*(undefined8 *)(argv + 0x10 + lVar1));
        uVar9 = umaxtostr(uVar9,auStack112);
      }
      iVar4 = strintcmp(uVar8,uVar9);
      lVar14 = *(long *)(argv + lVar21 * 8);
      bVar22 = *(char *)(lVar14 + 2) == 'e';
      cVar3 = *(char *)(lVar14 + 1);
      pos = pos + 3;
      if (cVar3 == 'l') {
        uVar20 = (ulong)(iVar4 < (int)(uint)bVar22);
      }
      else {
        if (cVar3 == 'g') {
          uVar20 = (ulong)((int)-(uint)bVar22 < iVar4);
        }
        else {
          uVar20 = (ulong)((iVar4 != 0) == bVar22);
        }
      }
      goto code_r0x00101c4f;
    }
code_r0x00101d06:
    if (bVar24 == 0x65) {
      bVar24 = pbVar7[2];
      if (bVar24 == 0x71) {
code_r0x00101f90:
        if (pbVar7[3] == 0) goto code_r0x00101e84;
      }
      else {
code_r0x00101ddd:
        if ((bVar24 == 0x66) && (pbVar7[3] == 0)) {
          pos = pos + 3;
          uVar20 = (ulong)(bVar10 | bVar19);
          if ((bVar10 | bVar19) != 0) goto code_r0x001020c1;
          iVar4 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),&lStack432);
          if (((iVar4 == 0) &&
              (iVar4 = func_0x001014d0(1,*(undefined8 *)(lVar14 + 8 + lVar1),&lStack288), iVar4 == 0
              )) && (lStack432 == lStack288)) {
            uVar20 = (ulong)(lStack424 == lStack280);
          }
          goto code_r0x00101c4f;
        }
      }
      goto code_r0x00101f9a;
    }
    if (bVar24 == 0x6e) {
      puVar15 = (undefined8 *)(ulong)pbVar7[2];
      if (pbVar7[2] == 0x65) goto code_r0x00101f90;
code_r0x00101f19:
      if (((char)puVar15 != 't') || (pbVar7[3] != 0)) goto code_r0x00101f9a;
      pos = pos + 3;
      uVar20 = (ulong)(bVar10 | bVar19);
      if ((bVar10 | bVar19) != 0) {
        puVar18 = &UNK_00107d9b;
        goto code_r0x001020ae;
      }
      unaff_RBP = &lStack288;
      iVar5 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),unaff_RBP);
      iVar4 = iStack192;
      lVar21 = lStack200;
      puVar15 = (undefined8 *)(lVar14 + 8 + lVar1);
      if (iVar5 == 0) {
        iVar5 = func_0x001014d0(1,*puVar15,unaff_RBP);
        if (iVar5 == 0) {
          if ((lStack200 <= lVar21) && (uVar20 = 1, lVar21 <= lStack200)) {
            uVar20 = (ulong)(0 < iVar4 - iStack192);
          }
        }
        else {
          uVar20 = 1;
        }
        goto code_r0x00101c4f;
      }
code_r0x00101fc8:
      func_0x001014d0(1,*puVar15,unaff_RBP);
      goto code_r0x00101c4f;
    }
code_r0x00101d18:
    if (bVar24 != 0x6f) {
      if (bVar24 == 0x65) {
        bVar24 = pbVar7[2];
        goto code_r0x00101ddd;
      }
code_r0x00101f9a:
      uVar8 = quote(pbVar7);
      uVar9 = func_0x001013c0(0,&UNK_00107de0,5);
      test_syntax_error(uVar9,uVar8);
      goto code_r0x00101fc8;
    }
    if ((pbVar7[2] != 0x74) || (pbVar7[3] != 0)) goto code_r0x00101f9a;
    pos = pos + 3;
    uVar20 = (ulong)(bVar10 | bVar19);
    if ((bVar10 | bVar19) == 0) {
      iVar4 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),&lStack288);
      if (iVar4 == 0) {
        unaff_R12 = lStack200;
        iStack440 = iStack192;
      }
      iVar5 = func_0x001014d0(1,*(undefined8 *)(lVar14 + 8 + lVar1),&lStack288);
      if (((iVar5 == 0) &&
          (uVar20 = (ulong)(iVar4 != 0 || unaff_R12 < lStack200),
          iVar4 == 0 && unaff_R12 >= lStack200)) && (unaff_R12 <= lStack200)) {
        uVar20 = (ulong)((uint)(iStack440 - iStack192) >> 0x1f);
      }
      goto code_r0x00101c4f;
    }
  }
  else {
    bVar22 = bVar10 < 0x3d;
    bVar23 = bVar10 == 0x3d;
    if (bVar23) {
      bVar19 = pbVar7[1];
      if (bVar19 == 0) {
code_r0x00101cb8:
        iVar4 = func_0x00101490(*(undefined8 *)(argv + -0x10 + ((long)(int)pos + 2) * 8),
                                *(undefined8 *)(argv + ((long)(int)pos + 2) * 8));
        uVar20 = (ulong)(iVar4 == 0);
        pos = uVar16 + 3;
        goto code_r0x00101c4f;
      }
      bVar22 = bVar19 < 0x3d;
      bVar23 = bVar19 == 0x3d;
      if (bVar23) {
        bVar22 = false;
        bVar23 = pbVar7[2] == 0;
        if (bVar23) goto code_r0x00101cb8;
      }
    }
    lVar14 = 3;
    pbVar12 = &UNK_00107d44;
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar22 = *pbVar7 < *pbVar12;
      bVar23 = *pbVar7 == *pbVar12;
      pbVar7 = pbVar7 + (ulong)bVar24 * -2 + 1;
      pbVar12 = pbVar12 + (ulong)bVar24 * -2 + 1;
    } while (bVar23);
    if ((!bVar22 && !bVar23) == bVar22) {
      iVar4 = func_0x00101490(*(undefined8 *)(argv + -0x10 + ((long)(int)pos + 2) * 8),
                              *(undefined8 *)(argv + ((long)(int)pos + 2) * 8));
      uVar20 = (ulong)(iVar4 != 0);
      pos = uVar16 + 3;
code_r0x00101c4f:
      if (lStack88 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (byte *)uVar20;
      }
      func_0x00101400();
    }
    func_0x00101320();
  }
  puVar18 = &UNK_00107dc9;
code_r0x001020ae:
  do {
    uVar8 = func_0x001013c0(0,puVar18,5);
    test_syntax_error(uVar8,0);
code_r0x001020c1:
    puVar18 = &UNK_00107db2;
  } while( true );
}

