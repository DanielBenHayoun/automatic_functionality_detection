
undefined *
mod2(undefined8 *param_1,undefined *param_2,ulong param_3,undefined1 *param_4,undefined *param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  byte bVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  int iVar13;
  undefined *puVar14;
  ulong extraout_RDX;
  undefined *extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined *puVar15;
  undefined8 unaff_RBX;
  undefined *unaff_RBP;
  undefined *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  undefined8 unaff_R12;
  uint uVar25;
  undefined8 unaff_R13;
  ulong *puVar26;
  undefined8 unaff_R14;
  long in_FS_OFFSET;
  bool bVar27;
  
  while( true ) {
    if (param_4 != (undefined1 *)0x0) {
      if (param_2 == (undefined *)0x0) {
        *param_1 = 0;
        return (undefined *)param_3;
      }
      lVar6 = 0x3f;
      uVar25 = 0x3f;
      if (param_4 != (undefined1 *)0x0) {
        while (uVar25 = (uint)lVar6, (ulong)param_4 >> lVar6 == 0) {
          lVar6 = lVar6 + -1;
        }
      }
      lVar6 = 0x3f;
      uVar23 = 0x3f;
      if (param_2 != (undefined *)0x0) {
        while (uVar23 = (uint)lVar6, (ulong)param_2 >> lVar6 == 0) {
          lVar6 = lVar6 + -1;
        }
      }
      iVar24 = (uVar25 ^ 0x3f) - (uVar23 ^ 0x3f);
      bVar8 = (byte)iVar24;
      puVar16 = (undefined *)
                ((ulong)param_5 >> (0x40 - bVar8 & 0x3f) | (long)param_4 << (bVar8 & 0x3f));
      uVar22 = (long)param_5 << (bVar8 & 0x3f);
      if (0 < iVar24) {
        iVar13 = 0;
        do {
          if ((puVar16 < param_2) || ((puVar16 == param_2 && (uVar22 <= param_3)))) {
            bVar27 = param_3 < uVar22;
            param_3 = param_3 - uVar22;
            param_2 = param_2 + (-(ulong)bVar27 - (long)puVar16);
          }
          iVar13 = iVar13 + 1;
          uVar11 = (long)puVar16 << 0x3f;
          puVar16 = (undefined *)((ulong)puVar16 >> 1);
          uVar22 = uVar22 >> 1 | uVar11;
        } while (iVar24 != iVar13);
      }
      *(undefined **)param_1 = param_2;
      return (undefined *)param_3;
    }
    puVar16 = &UNK_0010b424;
    puVar19 = &UNK_0010b45c;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x1026bb;
    func_0x00101750(&UNK_0010b45c,&UNK_0010b424,0x1a3,&__PRETTY_FUNCTION___6970);
    if (puVar19 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      iVar24 = 0x40;
      lVar6 = 0;
      uVar22 = ((ulong)puVar19 >> 9) / 0x1dcd65;
      puVar19 = puVar19 + uVar22 * -1000000000;
      puVar14 = (undefined *)0x0;
      puVar15 = (undefined *)0x3b9aca00;
      do {
        puVar12 = (undefined *)((ulong)puVar15 >> 1);
        lVar6 = lVar6 * 2;
        puVar14 = (undefined *)((ulong)puVar14 >> 1 | (long)puVar15 << 0x3f);
        if ((puVar12 < puVar19) || ((puVar12 == puVar19 && (puVar14 <= puVar16)))) {
          lVar6 = lVar6 + 1;
          bVar27 = puVar16 < puVar14;
          puVar16 = puVar16 + -(long)puVar14;
          puVar19 = puVar19 + (-(ulong)bVar27 - (long)puVar12);
        }
        iVar24 = iVar24 + -1;
        puVar15 = puVar12;
      } while (iVar24 != 0);
      *(undefined **)((undefined *)register0x00000020 + -0x18) = puVar16;
      *(undefined8 *)((undefined *)register0x00000020 + -0x28) = 0x10274c;
      print_uintmaxes(uVar22,lVar6);
      puVar16 = *(undefined **)((undefined *)register0x00000020 + -0x18);
      puVar19 = (undefined *)0x9;
    }
    *(undefined **)((undefined *)register0x00000020 + -0x10) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x18) = unaff_RBX;
    *(undefined8 *)((undefined *)register0x00000020 + -0x28) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x48) = 0x1023c4;
    lVar6 = umaxtostr(puVar16,(undefined *)register0x00000020 + -0x40);
    puVar16 = lbuf._8_8_;
    puVar15 = (undefined *)register0x00000020 + (-0x2c - lVar6);
    if (puVar15 < puVar19) {
      lVar3 = (long)puVar19 + (long)lbuf._8_8_;
      puVar14 = lbuf._8_8_;
      do {
        *puVar14 = 0x30;
        puVar14 = puVar14 + 1;
      } while (puVar14 != (undefined *)(lVar3 - (long)puVar15));
      puVar19 = puVar19 + -(long)puVar15;
      puVar16 = puVar16 + (long)puVar19;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x48) = 0x10240e;
    lVar6 = func_0x001017d0(puVar16,lVar6,puVar15);
    param_5 = puVar15 + lVar6;
    if (*(long *)((undefined *)register0x00000020 + -0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
      lbuf._8_8_ = param_5;
      return (undefined *)0x0;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x48) = 0x102437;
    lbuf._8_8_ = param_5;
    func_0x001016f0();
    *(undefined **)((undefined *)register0x00000020 + -0x48) = puVar15;
    puVar15 = lbuf._8_8_ + -lbuf._0_8_;
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x10245f;
    puVar16 = (undefined *)full_write(1,lbuf._0_8_,puVar15);
    if (puVar16 == puVar15) {
      lbuf._8_8_ = (undefined *)lbuf._0_8_;
      return (undefined *)lbuf._0_8_;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102487;
    unaff_RBX = func_0x001016c0(0,&UNK_0010b431,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x10248f;
    puVar7 = (uint *)func_0x00101610();
    uVar22 = (ulong)*puVar7;
    puVar17 = (ulong *)0x1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x1024a7;
    func_0x001018b0(1,uVar22,&UNK_0010e94c,unaff_RBX);
    if (uVar22 == 0) break;
    if (puVar17[1] == 0) {
      *puVar17 = extraout_RDX;
      puVar17[1] = uVar22;
      return (undefined *)extraout_RDX;
    }
    puVar10 = __PRETTY_FUNCTION___7027;
    puVar16 = &UNK_0010b424;
    puVar18 = (undefined8 *)&UNK_0010b43d;
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102500;
    func_0x00101750(&UNK_0010b43d,&UNK_0010b424,0x235);
    if (((ulong)param_5 & 1) != 0) {
      puVar19 = extraout_RDX_00;
      if (((ulong)extraout_RDX_00 | (ulong)puVar16) == 0) {
        *(undefined1 **)puVar18 = puVar10;
        return param_5;
      }
      while (((ulong)puVar19 & 1) == 0) {
        puVar19 = (undefined *)((ulong)puVar19 >> 1 | (long)puVar16 << 0x3f);
        puVar16 = (undefined *)((ulong)puVar16 >> 1);
      }
      while (((ulong)puVar16 | (ulong)puVar10) != 0) {
        while ((puVar16 <= puVar10 && ((puVar19 <= param_5 || (puVar16 != puVar10))))) {
          if ((puVar10 <= puVar16) && ((param_5 <= puVar19 || (puVar16 != puVar10)))) {
            *(undefined **)puVar18 = puVar16;
            return puVar19;
          }
          bVar27 = param_5 < puVar19;
          param_5 = param_5 + -(long)puVar19;
          puVar15 = puVar10 + (-(ulong)bVar27 - (long)puVar16);
          do {
            uVar22 = (ulong)param_5 >> 1;
            puVar10 = (undefined1 *)((ulong)puVar15 >> 1);
            param_5 = (undefined *)(uVar22 | (long)puVar15 << 0x3f);
            puVar15 = puVar10;
          } while ((uVar22 & 1) == 0);
          if (((ulong)puVar16 | (ulong)puVar10) == 0) goto code_r0x00102586;
        }
        bVar27 = puVar19 < param_5;
        puVar19 = puVar19 + -(long)param_5;
        puVar15 = puVar16 + (-(ulong)bVar27 - (long)puVar10);
        do {
          uVar22 = (ulong)puVar19 >> 1;
          puVar16 = (undefined *)((ulong)puVar15 >> 1);
          puVar19 = (undefined *)(uVar22 | (long)puVar15 << 0x3f);
          puVar15 = puVar16;
        } while ((uVar22 & 1) == 0);
      }
code_r0x00102586:
      *puVar18 = 0;
      puVar16 = puVar19;
      if (((ulong)puVar19 & 1) != 0) {
        puVar16 = param_5;
        param_5 = puVar19;
      }
      uVar22 = (ulong)param_5 >> 1;
      if (puVar16 != (undefined *)0x0) {
        while( true ) {
          do {
            puVar19 = puVar16;
            puVar16 = (undefined *)((ulong)puVar19 >> 1);
          } while (((ulong)puVar19 & 1) == 0);
          puVar16 = (undefined *)((ulong)puVar19 >> 1) + -uVar22;
          if (puVar16 == (undefined *)0x0) break;
          uVar11 = (long)puVar16 >> 0x3f;
          uVar22 = uVar22 + ((ulong)puVar16 & uVar11);
          puVar16 = (undefined *)(((ulong)puVar16 ^ uVar11) - uVar11);
        }
        return (undefined *)((ulong)puVar19 | 1);
      }
      return param_5;
    }
    param_4 = __PRETTY_FUNCTION___6996;
    param_2 = &UNK_0010b424;
    param_1 = (undefined8 *)&UNK_0010b455;
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x102601;
    func_0x00101750(&UNK_0010b455,&UNK_0010b424,0x1e3);
    param_3 = extraout_RDX_01;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x58);
    unaff_RBP = puVar19;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = unaff_R14;
  *(undefined8 *)((undefined *)register0x00000020 + -0x58) = unaff_R13;
  puVar1 = puVar17 + 2;
  bVar8 = *(byte *)((long)puVar17 + 0xfa);
  *(undefined8 *)((undefined *)register0x00000020 + -0x60) = unaff_R12;
  *(undefined **)((undefined *)register0x00000020 + -0x68) = puVar19;
  *(undefined8 *)((undefined *)register0x00000020 + -0x70) = unaff_RBX;
  puVar2 = puVar17 + 0x1c;
  uVar25 = (uint)bVar8 - 1;
  uVar22 = extraout_RDX;
  puVar20 = puVar2;
  puVar26 = puVar1;
  if (uVar25 != 0xffffffff) {
    uVar9 = SEXT48((int)uVar25);
    uVar22 = uVar9 * 8;
    uVar11 = puVar17[uVar9 + 2];
    if (extraout_RDX < uVar11) {
      uVar22 = uVar9 - 1;
      uVar5 = uVar22;
      uVar23 = uVar25;
      do {
        uVar21 = uVar5;
        uVar23 = uVar23 - 1;
        uVar4 = uVar22;
        if ((uVar9 - uVar25) - 1 == uVar21) {
          uVar23 = 0xffffffff;
          goto code_r0x00101e00;
        }
        bVar27 = puVar17[uVar21 + 2] == extraout_RDX;
        uVar5 = uVar21 - 1;
      } while (extraout_RDX <= puVar17[uVar21 + 2] && !bVar27);
      if (bVar27) {
code_r0x00101e55:
        *(char *)((long)puVar2 + uVar21) = *(char *)((long)puVar2 + uVar21) + '\x01';
        return (undefined *)uVar22;
      }
      puVar26 = puVar1 + uVar21 + 1;
      puVar20 = (ulong *)(uVar21 + 1 + (long)puVar2);
      if ((int)uVar23 < (int)uVar25) {
code_r0x00101e00:
        while( true ) {
          uVar22 = uVar4;
          puVar17[uVar9 + 3] = uVar11;
          *(undefined *)((long)puVar17 + uVar9 + 0xe1) = *(undefined *)((long)puVar2 + uVar9);
          if ((int)uVar22 <= (int)uVar23) break;
          uVar11 = puVar1[uVar22];
          uVar4 = uVar22 - 1;
          uVar9 = uVar22;
        }
      }
    }
    else {
      uVar21 = uVar9;
      if (extraout_RDX == uVar11) goto code_r0x00101e55;
      puVar20 = (ulong *)((long)puVar17 + uVar9 + 0xe1);
      puVar26 = puVar17 + uVar9 + 3;
    }
  }
  *puVar26 = extraout_RDX;
  *(undefined *)puVar20 = 1;
  *(char *)((long)puVar17 + 0xfa) = bVar8 + 1;
  return (undefined *)uVar22;
}

