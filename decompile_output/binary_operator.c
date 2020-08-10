
ulong binary_operator(byte param_1)

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
  byte bVar17;
  ulong uVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  int iStack416;
  long lStack408;
  long lStack400;
  long lStack264;
  long lStack256;
  long lStack176;
  int iStack168;
  undefined auStack120 [32];
  undefined auStack88 [24];
  long lStack64;
  
  lVar11 = argv;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = pos + 1;
  if (param_1 != 0) {
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
    pbVar16 = &UNK_00107dc6;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      bVar20 = *pbVar14 < *pbVar16;
      bVar21 = *pbVar14 == *pbVar16;
      pbVar14 = pbVar14 + 1;
      pbVar16 = pbVar16 + 1;
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
    bVar8 = pbVar14[1];
    bVar17 = (byte)uVar18;
    if ((bVar8 == 0x6c) || (bVar8 == 0x67)) {
      bVar2 = pbVar14[2];
      puVar12 = (undefined8 *)(ulong)bVar2;
      if ((bVar2 != 0x65) && (bVar2 != 0x74)) goto code_r0x00101d06;
      if (pbVar14[3] != 0) {
        if (bVar8 == 0x6e) goto code_r0x00101f19;
        goto code_r0x00101d18;
      }
code_r0x00101e84:
      if (param_1 == 0) {
        uVar7 = find_int();
      }
      else {
        uVar7 = func_0x001013e0(*(undefined8 *)(argv + -8 + lVar1));
        uVar7 = umaxtostr(uVar7,auStack120);
      }
      if (bVar17 == 0) {
        uVar6 = find_int(*(undefined8 *)(argv + 8 + lVar1));
      }
      else {
        uVar6 = func_0x001013e0(*(undefined8 *)(argv + 0x10 + lVar1));
        uVar6 = umaxtostr(uVar6,auStack88);
      }
      iVar4 = strintcmp(uVar7,uVar6);
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
    if (bVar8 == 0x65) {
      bVar8 = pbVar14[2];
      if (bVar8 == 0x71) {
code_r0x00101f90:
        if (pbVar14[3] == 0) goto code_r0x00101e84;
      }
      else {
code_r0x00101ddd:
        if ((bVar8 == 0x66) && (pbVar14[3] == 0)) {
          pos = pos + 3;
          uVar18 = (ulong)(bVar17 | param_1);
          if ((bVar17 | param_1) != 0) goto code_r0x001020c1;
          iVar4 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),&lStack408);
          if (((iVar4 == 0) &&
              (iVar4 = func_0x001014d0(1,*(undefined8 *)(lVar11 + 8 + lVar1),&lStack264), iVar4 == 0
              )) && (lStack408 == lStack264)) {
            uVar18 = (ulong)(lStack400 == lStack256);
          }
          goto code_r0x00101c4f;
        }
      }
      goto code_r0x00101f9a;
    }
    if (bVar8 == 0x6e) {
      puVar12 = (undefined8 *)(ulong)pbVar14[2];
      if (pbVar14[2] == 0x65) goto code_r0x00101f90;
code_r0x00101f19:
      if (((char)puVar12 != 't') || (pbVar14[3] != 0)) goto code_r0x00101f9a;
      pos = pos + 3;
      uVar18 = (ulong)(bVar17 | param_1);
      if ((bVar17 | param_1) != 0) {
        puVar15 = &UNK_00107d9b;
        goto code_r0x001020ae;
      }
      unaff_RBP = &lStack264;
      iVar5 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),unaff_RBP);
      iVar4 = iStack168;
      lVar19 = lStack176;
      puVar12 = (undefined8 *)(lVar11 + 8 + lVar1);
      if (iVar5 == 0) {
        iVar5 = func_0x001014d0(1,*puVar12,unaff_RBP);
        if (iVar5 == 0) {
          if ((lStack176 <= lVar19) && (uVar18 = 1, lVar19 <= lStack176)) {
            uVar18 = (ulong)(0 < iVar4 - iStack168);
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
    if (bVar8 != 0x6f) {
      if (bVar8 == 0x65) {
        bVar8 = pbVar14[2];
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
    uVar18 = (ulong)(bVar17 | param_1);
    if ((bVar17 | param_1) == 0) {
      iVar4 = func_0x001014d0(1,*(undefined8 *)(argv + -8 + lVar1),&lStack264);
      if (iVar4 == 0) {
        unaff_R12 = lStack176;
        iStack416 = iStack168;
      }
      iVar5 = func_0x001014d0(1,*(undefined8 *)(lVar11 + 8 + lVar1),&lStack264);
      if (((iVar5 == 0) &&
          (uVar18 = (ulong)(iVar4 != 0 || unaff_R12 < lStack176),
          iVar4 == 0 && unaff_R12 >= lStack176)) && (unaff_R12 <= lStack176)) {
        uVar18 = (ulong)((uint)(iStack416 - iStack168) >> 0x1f);
      }
      goto code_r0x00101c4f;
    }
  }
  else {
    bVar20 = bVar8 < 0x3d;
    bVar21 = bVar8 == 0x3d;
    if (bVar21) {
      bVar8 = pbVar14[1];
      if (bVar8 == 0) {
code_r0x00101cb8:
        iVar4 = func_0x00101490(*(undefined8 *)(argv + -0x10 + ((long)(int)pos + 2) * 8),
                                *(undefined8 *)(argv + ((long)(int)pos + 2) * 8));
        uVar18 = (ulong)(iVar4 == 0);
        pos = uVar13 + 3;
        goto code_r0x00101c4f;
      }
      bVar20 = bVar8 < 0x3d;
      bVar21 = bVar8 == 0x3d;
      if (bVar21) {
        bVar20 = false;
        bVar21 = pbVar14[2] == 0;
        if (bVar21) goto code_r0x00101cb8;
      }
    }
    lVar11 = 3;
    pbVar16 = &UNK_00107d44;
    do {
      if (lVar11 == 0) break;
      lVar11 = lVar11 + -1;
      bVar20 = *pbVar14 < *pbVar16;
      bVar21 = *pbVar14 == *pbVar16;
      pbVar14 = pbVar14 + 1;
      pbVar16 = pbVar16 + 1;
    } while (bVar21);
    if ((!bVar20 && !bVar21) == bVar20) {
      iVar4 = func_0x00101490(*(undefined8 *)(argv + -0x10 + ((long)(int)pos + 2) * 8),
                              *(undefined8 *)(argv + ((long)(int)pos + 2) * 8));
      uVar18 = (ulong)(iVar4 != 0);
      pos = uVar13 + 3;
code_r0x00101c4f:
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar18;
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

