
ulong unary_advance(byte param_1)

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
  byte *pbVar16;
  long unaff_R12;
  ulong uVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  int iStack424;
  long lStack416;
  long lStack408;
  long lStack272;
  long lStack264;
  long lStack184;
  int iStack176;
  undefined auStack128 [32];
  undefined auStack96 [24];
  long lStack72;
  
  bVar21 = 0;
  if ((int)(pos + 1) < argc) {
    pos = pos + 2;
    return (ulong)pos;
  }
  pos = pos + 1;
  beyond();
  lVar11 = argv;
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = pos + 1;
  if (param_1 != 0) {
    uVar13 = pos + 2;
    pos = pos + 1;
  }
  uVar17 = 0;
  lVar18 = (long)(int)uVar13;
  uVar9 = argc - 2;
  puVar12 = (undefined8 *)(ulong)uVar9;
  bVar19 = uVar9 < uVar13;
  bVar20 = uVar9 == uVar13;
  if ((int)uVar13 < (int)uVar9) {
    uVar10 = 3;
    pbVar14 = *(byte **)(argv + 8 + lVar18 * 8);
    pbVar16 = &UNK_00107dc6;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      bVar19 = *pbVar14 < *pbVar16;
      bVar20 = *pbVar14 == *pbVar16;
      pbVar14 = pbVar14 + (ulong)bVar21 * -2 + 1;
      pbVar16 = pbVar16 + (ulong)bVar21 * -2 + 1;
    } while (bVar20);
    bVar8 = (!bVar19 && !bVar20) - bVar19;
    puVar12 = (undefined8 *)(uVar10 & 0xffffffffffffff00 | (ulong)bVar8);
    if (bVar8 == 0) {
      uVar17 = 1;
      pos = uVar13;
    }
  }
  uVar13 = pos;
  pbVar14 = *(byte **)(argv + lVar18 * 8);
  lVar1 = lVar18 * 8;
  bVar8 = *pbVar14;
  if (bVar8 == 0x2d) {
    bVar21 = pbVar14[1];
    bVar8 = (byte)uVar17;
    if ((bVar21 == 0x6c) || (bVar21 == 0x67)) {
      bVar2 = pbVar14[2];
      puVar12 = (undefined8 *)(ulong)bVar2;
      if ((bVar2 != 0x65) && (bVar2 != 0x74)) goto code_r0x00101d06;
      if (pbVar14[3] != 0) {
        if (bVar21 == 0x6e) goto code_r0x00101f19;
        goto code_r0x00101d18;
      }
code_r0x00101e84:
      if (param_1 == 0) {
        uVar7 = find_int();
      }
      else {
        uVar7 = func_0x001013e0(*(undefined8 *)(argv + -8 + lVar1));
        uVar7 = umaxtostr(uVar7,auStack128);
      }
      if (bVar8 == 0) {
        uVar6 = find_int(*(undefined8 *)(argv + 8 + lVar1));
      }
      else {
        uVar6 = func_0x001013e0(*(undefined8 *)(argv + 0x10 + lVar1));
        uVar6 = umaxtostr(uVar6,auStack96);
      }
      iVar4 = strintcmp(uVar7,uVar6);
      lVar11 = *(long *)(argv + lVar18 * 8);
      bVar19 = *(char *)(lVar11 + 2) == 'e';
      cVar3 = *(char *)(lVar11 + 1);
      pos = pos + 3;
      if (cVar3 == 'l') {
        uVar17 = (ulong)(iVar4 < (int)(uint)bVar19);
      }
      else {
        if (cVar3 == 'g') {
          uVar17 = (ulong)((int)-(uint)bVar19 < iVar4);
        }
        else {
          uVar17 = (ulong)((iVar4 != 0) == bVar19);
        }
      }
      goto code_r0x00101c4f;
    }
code_r0x00101d06:
    if (bVar21 == 0x65) {
      bVar21 = pbVar14[2];
      if (bVar21 == 0x71) {
code_r0x00101f90:
        if (pbVar14[3] == 0) goto code_r0x00101e84;
      }
      else {
code_r0x00101ddd:
        if ((bVar21 == 0x66) && (pbVar14[3] == 0)) {
          pos = pos + 3;
          uVar17 = (ulong)(bVar8 | param_1);
          if ((bVar8 | param_1) != 0) goto code_r0x001020c1;
          iVar4 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),&lStack416);
          if (((iVar4 == 0) &&
              (iVar4 = func_0x001014d0(1,*(undefined8 *)(lVar11 + 8 + lVar1),&lStack272), iVar4 == 0
              )) && (lStack416 == lStack272)) {
            uVar17 = (ulong)(lStack408 == lStack264);
          }
          goto code_r0x00101c4f;
        }
      }
      goto code_r0x00101f9a;
    }
    if (bVar21 == 0x6e) {
      puVar12 = (undefined8 *)(ulong)pbVar14[2];
      if (pbVar14[2] == 0x65) goto code_r0x00101f90;
code_r0x00101f19:
      if (((char)puVar12 != 't') || (pbVar14[3] != 0)) goto code_r0x00101f9a;
      pos = pos + 3;
      uVar17 = (ulong)(bVar8 | param_1);
      if ((bVar8 | param_1) != 0) {
        puVar15 = &UNK_00107d9b;
        goto code_r0x001020ae;
      }
      unaff_RBP = &lStack272;
      iVar5 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),unaff_RBP);
      iVar4 = iStack176;
      lVar18 = lStack184;
      puVar12 = (undefined8 *)(lVar11 + 8 + lVar1);
      if (iVar5 == 0) {
        iVar5 = func_0x001014d0(1,*puVar12,unaff_RBP);
        if (iVar5 == 0) {
          if ((lStack184 <= lVar18) && (uVar17 = 1, lVar18 <= lStack184)) {
            uVar17 = (ulong)(0 < iVar4 - iStack176);
          }
        }
        else {
          uVar17 = 1;
        }
        goto code_r0x00101c4f;
      }
code_r0x00101fc8:
      func_0x001014d0(1,*puVar12,unaff_RBP);
      goto code_r0x00101c4f;
    }
code_r0x00101d18:
    if (bVar21 != 0x6f) {
      if (bVar21 == 0x65) {
        bVar21 = pbVar14[2];
        goto code_r0x00101ddd;
      }
code_r0x00101f9a:
      uVar7 = quote(pbVar14);
      uVar6 = func_0x001013c0(0,&UNK_00107de0,5);
      test_syntax_error(uVar6,uVar7);
      goto code_r0x00101fc8;
    }
    if ((pbVar14[2] != 0x74) || (pbVar14[3] != 0)) goto code_r0x00101f9a;
    pos = pos + 3;
    uVar17 = (ulong)(bVar8 | param_1);
    if ((bVar8 | param_1) == 0) {
      iVar4 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),&lStack272);
      if (iVar4 == 0) {
        unaff_R12 = lStack184;
        iStack424 = iStack176;
      }
      iVar5 = func_0x001014d0(1,*(undefined8 *)(lVar11 + 8 + lVar1),&lStack272);
      if (((iVar5 == 0) &&
          (uVar17 = (ulong)(iVar4 != 0 || unaff_R12 < lStack184),
          iVar4 == 0 && unaff_R12 >= lStack184)) && (unaff_R12 <= lStack184)) {
        uVar17 = (ulong)((uint)(iStack424 - iStack176) >> 0x1f);
      }
      goto code_r0x00101c4f;
    }
  }
  else {
    bVar19 = bVar8 < 0x3d;
    bVar20 = bVar8 == 0x3d;
    if (bVar20) {
      bVar8 = pbVar14[1];
      if (bVar8 == 0) {
code_r0x00101cb8:
        iVar4 = func_0x00101490(*(undefined8 *)(argv + -0x10 + ((long)(int)pos + 2) * 8),
                                *(undefined8 *)(argv + ((long)(int)pos + 2) * 8));
        uVar17 = (ulong)(iVar4 == 0);
        pos = uVar13 + 3;
        goto code_r0x00101c4f;
      }
      bVar19 = bVar8 < 0x3d;
      bVar20 = bVar8 == 0x3d;
      if (bVar20) {
        bVar19 = false;
        bVar20 = pbVar14[2] == 0;
        if (bVar20) goto code_r0x00101cb8;
      }
    }
    lVar11 = 3;
    pbVar16 = &UNK_00107d44;
    do {
      if (lVar11 == 0) break;
      lVar11 = lVar11 + -1;
      bVar19 = *pbVar14 < *pbVar16;
      bVar20 = *pbVar14 == *pbVar16;
      pbVar14 = pbVar14 + (ulong)bVar21 * -2 + 1;
      pbVar16 = pbVar16 + (ulong)bVar21 * -2 + 1;
    } while (bVar20);
    if ((!bVar19 && !bVar20) == bVar19) {
      iVar4 = func_0x00101490(*(undefined8 *)(argv + -0x10 + ((long)(int)pos + 2) * 8),
                              *(undefined8 *)(argv + ((long)(int)pos + 2) * 8));
      uVar17 = (ulong)(iVar4 != 0);
      pos = uVar13 + 3;
code_r0x00101c4f:
      if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar17;
      }
      func_0x00101400();
    }
    func_0x00101320();
  }
  puVar15 = &UNK_00107dc9;
code_r0x001020ae:
  do {
    uVar7 = func_0x001013c0(0,puVar15,5);
    test_syntax_error(uVar7,0);
code_r0x001020c1:
    puVar15 = &UNK_00107db2;
  } while( true );
}

