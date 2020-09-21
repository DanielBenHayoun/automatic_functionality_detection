
byte * test_syntax_error(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8
                        ,undefined8 param_9,undefined8 param_10,undefined8 param_11,
                        undefined8 param_12,undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  char in_AL;
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
  byte *pbVar20;
  long unaff_R12;
  ulong uVar21;
  long lVar22;
  long in_FS_OFFSET;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  int iStack656;
  long lStack648;
  long lStack640;
  long lStack504;
  long lStack496;
  long lStack416;
  int iStack408;
  undefined auStack360 [32];
  undefined auStack328 [24];
  long lStack304;
  undefined8 uStack288;
  undefined *puStack240;
  undefined *puStack232;
  undefined4 uStack216;
  undefined4 uStack212;
  undefined *puStack208;
  undefined *puStack200;
  undefined8 uStack192;
  undefined auStack184 [8];
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined8 uStack144;
  undefined4 uStack136;
  undefined4 uStack120;
  undefined4 uStack104;
  undefined4 uStack88;
  undefined4 uStack72;
  undefined4 uStack56;
  undefined4 uStack40;
  undefined4 uStack24;
  
  bVar25 = 0;
  if (in_AL != '\0') {
    uStack136 = param_1;
    uStack120 = param_2;
    uStack104 = param_3;
    uStack88 = param_4;
    uStack72 = param_5;
    uStack56 = param_6;
    uStack40 = param_7;
    uStack24 = param_8;
  }
  uStack192 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack208 = &stack0x00000008;
  puStack200 = auStack184;
  uStack216 = 8;
  uStack212 = 0x30;
  uStack176 = param_10;
  uStack168 = param_11;
  uStack160 = param_12;
  uStack152 = param_13;
  uStack144 = param_14;
  verror(0,0,param_9);
  pbVar20 = (byte *)0x2;
  func_0x001015a0();
  puStack232 = &UNK_00101a29;
  plVar6 = (long *)func_0x001015f0();
  lVar14 = *plVar6;
  pbVar7 = pbVar20;
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
  puStack232 = &UNK_00101ad1;
  uVar8 = quote(pbVar20);
  puStack232 = &UNK_00101ae7;
  uVar9 = func_0x001013c0(0,&UNK_00107d6e,5);
  puStack232 = &UNK_00101af4;
  test_syntax_error(uVar9,uVar8);
  puStack240 = &UNK_00101b19;
  puStack232 = (undefined *)uVar8;
  uStack288 = quote(*(undefined8 *)(argv + -8 + (long)argc * 8));
  puStack240 = &UNK_00101b2f;
  uVar8 = func_0x001013c0(0,&UNK_00107d81,5);
  bVar19 = (byte)uVar8;
  puStack240 = &UNK_00101b3c;
  test_syntax_error(uVar8,uStack288);
  if ((int)(pos + 1) < argc) {
    pos = pos + 2;
    return (byte *)(ulong)pos;
  }
  pos = pos + 1;
  beyond();
  lVar14 = argv;
  lStack304 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = pos + 1;
  if (bVar19 != 0) {
    uVar16 = pos + 2;
    pos = pos + 1;
  }
  uVar21 = 0;
  lVar22 = (long)(int)uVar16;
  uVar11 = argc - 2;
  puVar15 = (undefined8 *)(ulong)uVar11;
  bVar23 = uVar11 < uVar16;
  bVar24 = uVar11 == uVar16;
  if ((int)uVar16 < (int)uVar11) {
    uVar13 = 3;
    pbVar7 = *(byte **)(argv + 8 + lVar22 * 8);
    pbVar20 = &UNK_00107dc6;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      bVar23 = *pbVar7 < *pbVar20;
      bVar24 = *pbVar7 == *pbVar20;
      pbVar7 = pbVar7 + (ulong)bVar25 * -2 + 1;
      pbVar20 = pbVar20 + (ulong)bVar25 * -2 + 1;
    } while (bVar24);
    bVar10 = (!bVar23 && !bVar24) - bVar23;
    puVar15 = (undefined8 *)(uVar13 & 0xffffffffffffff00 | (ulong)bVar10);
    if (bVar10 == 0) {
      uVar21 = 1;
      pos = uVar16;
    }
  }
  uVar16 = pos;
  pbVar7 = *(byte **)(argv + lVar22 * 8);
  lVar1 = lVar22 * 8;
  bVar10 = *pbVar7;
  if (bVar10 == 0x2d) {
    bVar25 = pbVar7[1];
    bVar10 = (byte)uVar21;
    if ((bVar25 == 0x6c) || (bVar25 == 0x67)) {
      bVar2 = pbVar7[2];
      puVar15 = (undefined8 *)(ulong)bVar2;
      if ((bVar2 != 0x65) && (bVar2 != 0x74)) goto code_r0x00101d06;
      if (pbVar7[3] != 0) {
        if (bVar25 == 0x6e) goto code_r0x00101f19;
        goto code_r0x00101d18;
      }
code_r0x00101e84:
      if (bVar19 == 0) {
        uVar8 = find_int();
      }
      else {
        uVar8 = func_0x001013e0(*(undefined8 *)(argv + -8 + lVar1));
        uVar8 = umaxtostr(uVar8,auStack360);
      }
      if (bVar10 == 0) {
        uVar9 = find_int(*(undefined8 *)(argv + 8 + lVar1));
      }
      else {
        uVar9 = func_0x001013e0(*(undefined8 *)(argv + 0x10 + lVar1));
        uVar9 = umaxtostr(uVar9,auStack328);
      }
      iVar4 = strintcmp(uVar8,uVar9);
      lVar14 = *(long *)(argv + lVar22 * 8);
      bVar23 = *(char *)(lVar14 + 2) == 'e';
      cVar3 = *(char *)(lVar14 + 1);
      pos = pos + 3;
      if (cVar3 == 'l') {
        uVar21 = (ulong)(iVar4 < (int)(uint)bVar23);
      }
      else {
        if (cVar3 == 'g') {
          uVar21 = (ulong)((int)-(uint)bVar23 < iVar4);
        }
        else {
          uVar21 = (ulong)((iVar4 != 0) == bVar23);
        }
      }
      goto code_r0x00101c4f;
    }
code_r0x00101d06:
    if (bVar25 == 0x65) {
      bVar25 = pbVar7[2];
      if (bVar25 == 0x71) {
code_r0x00101f90:
        if (pbVar7[3] == 0) goto code_r0x00101e84;
      }
      else {
code_r0x00101ddd:
        if ((bVar25 == 0x66) && (pbVar7[3] == 0)) {
          pos = pos + 3;
          uVar21 = (ulong)(bVar10 | bVar19);
          if ((bVar10 | bVar19) != 0) goto code_r0x001020c1;
          iVar4 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),&lStack648);
          if (((iVar4 == 0) &&
              (iVar4 = func_0x001014d0(1,*(undefined8 *)(lVar14 + 8 + lVar1),&lStack504), iVar4 == 0
              )) && (lStack648 == lStack504)) {
            uVar21 = (ulong)(lStack640 == lStack496);
          }
          goto code_r0x00101c4f;
        }
      }
      goto code_r0x00101f9a;
    }
    if (bVar25 == 0x6e) {
      puVar15 = (undefined8 *)(ulong)pbVar7[2];
      if (pbVar7[2] == 0x65) goto code_r0x00101f90;
code_r0x00101f19:
      if (((char)puVar15 != 't') || (pbVar7[3] != 0)) goto code_r0x00101f9a;
      pos = pos + 3;
      uVar21 = (ulong)(bVar10 | bVar19);
      if ((bVar10 | bVar19) != 0) {
        puVar18 = &UNK_00107d9b;
        goto code_r0x001020ae;
      }
      unaff_RBP = &lStack504;
      iVar5 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),unaff_RBP);
      iVar4 = iStack408;
      lVar22 = lStack416;
      puVar15 = (undefined8 *)(lVar14 + 8 + lVar1);
      if (iVar5 == 0) {
        iVar5 = func_0x001014d0(1,*puVar15,unaff_RBP);
        if (iVar5 == 0) {
          if ((lStack416 <= lVar22) && (uVar21 = 1, lVar22 <= lStack416)) {
            uVar21 = (ulong)(0 < iVar4 - iStack408);
          }
        }
        else {
          uVar21 = 1;
        }
        goto code_r0x00101c4f;
      }
code_r0x00101fc8:
      func_0x001014d0(1,*puVar15,unaff_RBP);
      goto code_r0x00101c4f;
    }
code_r0x00101d18:
    if (bVar25 != 0x6f) {
      if (bVar25 == 0x65) {
        bVar25 = pbVar7[2];
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
    uVar21 = (ulong)(bVar10 | bVar19);
    if ((bVar10 | bVar19) == 0) {
      iVar4 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),&lStack504);
      if (iVar4 == 0) {
        unaff_R12 = lStack416;
        iStack656 = iStack408;
      }
      iVar5 = func_0x001014d0(1,*(undefined8 *)(lVar14 + 8 + lVar1),&lStack504);
      if (((iVar5 == 0) &&
          (uVar21 = (ulong)(iVar4 != 0 || unaff_R12 < lStack416),
          iVar4 == 0 && unaff_R12 >= lStack416)) && (unaff_R12 <= lStack416)) {
        uVar21 = (ulong)((uint)(iStack656 - iStack408) >> 0x1f);
      }
      goto code_r0x00101c4f;
    }
  }
  else {
    bVar23 = bVar10 < 0x3d;
    bVar24 = bVar10 == 0x3d;
    if (bVar24) {
      bVar19 = pbVar7[1];
      if (bVar19 == 0) {
code_r0x00101cb8:
        iVar4 = func_0x00101490(*(undefined8 *)(argv + -0x10 + ((long)(int)pos + 2) * 8),
                                *(undefined8 *)(argv + ((long)(int)pos + 2) * 8));
        uVar21 = (ulong)(iVar4 == 0);
        pos = uVar16 + 3;
        goto code_r0x00101c4f;
      }
      bVar23 = bVar19 < 0x3d;
      bVar24 = bVar19 == 0x3d;
      if (bVar24) {
        bVar23 = false;
        bVar24 = pbVar7[2] == 0;
        if (bVar24) goto code_r0x00101cb8;
      }
    }
    lVar14 = 3;
    pbVar20 = &UNK_00107d44;
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar23 = *pbVar7 < *pbVar20;
      bVar24 = *pbVar7 == *pbVar20;
      pbVar7 = pbVar7 + (ulong)bVar25 * -2 + 1;
      pbVar20 = pbVar20 + (ulong)bVar25 * -2 + 1;
    } while (bVar24);
    if ((!bVar23 && !bVar24) == bVar23) {
      iVar4 = func_0x00101490(*(undefined8 *)(argv + -0x10 + ((long)(int)pos + 2) * 8),
                              *(undefined8 *)(argv + ((long)(int)pos + 2) * 8));
      uVar21 = (ulong)(iVar4 != 0);
      pos = uVar16 + 3;
code_r0x00101c4f:
      if (lStack304 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (byte *)uVar21;
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

