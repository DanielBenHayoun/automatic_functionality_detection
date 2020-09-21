
undefined * lbuf_putint(undefined *param_1,undefined *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  byte bVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong extraout_RDX;
  undefined *extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined8 unaff_RBX;
  undefined *puVar15;
  undefined *unaff_RBP;
  ulong *puVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  undefined8 unaff_R12;
  uint uVar24;
  undefined8 unaff_R13;
  ulong *puVar25;
  undefined8 unaff_R14;
  long in_FS_OFFSET;
  bool bVar26;
  
  while( true ) {
    *(undefined **)((undefined *)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = 0x1023c4;
    lVar6 = umaxtostr(param_1,(undefined *)register0x00000020 + -0x38);
    puVar20 = lbuf._8_8_;
    puVar15 = (undefined *)register0x00000020 + (-0x24 - lVar6);
    if (puVar15 < param_2) {
      lVar3 = (long)param_2 + (long)lbuf._8_8_;
      puVar14 = lbuf._8_8_;
      do {
        *puVar14 = 0x30;
        puVar14 = puVar14 + 1;
      } while (puVar14 != (undefined *)(lVar3 - (long)puVar15));
      param_2 = param_2 + -(long)puVar15;
      puVar20 = puVar20 + (long)param_2;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = 0x10240e;
    lVar6 = func_0x001017d0(puVar20,lVar6,puVar15);
    puVar20 = puVar15 + lVar6;
    if (*(long *)((undefined *)register0x00000020 + -0x20) == *(long *)(in_FS_OFFSET + 0x28)) {
      lbuf._8_8_ = puVar20;
      return (undefined *)0x0;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = 0x102437;
    lbuf._8_8_ = puVar20;
    func_0x001016f0();
    *(undefined **)((undefined *)register0x00000020 + -0x40) = puVar15;
    puVar14 = lbuf._8_8_ + -lbuf._0_8_;
    *(undefined8 *)((undefined *)register0x00000020 + -0x48) = 0x10245f;
    puVar15 = (undefined *)full_write(1,lbuf._0_8_,puVar14);
    if (puVar15 == puVar14) {
      lbuf._8_8_ = (undefined *)lbuf._0_8_;
      return (undefined *)lbuf._0_8_;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x48) = 0x102487;
    unaff_RBX = func_0x001016c0(0,&UNK_0010b431,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x48) = 0x10248f;
    puVar7 = (uint *)func_0x00101610();
    uVar21 = (ulong)*puVar7;
    puVar16 = (ulong *)0x1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x48) = 0x1024a7;
    func_0x001018b0(1,uVar21,&UNK_0010e94c,unaff_RBX);
    if (uVar21 == 0) break;
    if (puVar16[1] == 0) {
      *puVar16 = extraout_RDX;
      puVar16[1] = uVar21;
      return (undefined *)extraout_RDX;
    }
    puVar9 = __PRETTY_FUNCTION___7027;
    puVar15 = &UNK_0010b424;
    puVar17 = (undefined8 *)&UNK_0010b43d;
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102500;
    func_0x00101750(&UNK_0010b43d,&UNK_0010b424,0x235);
    if (((ulong)puVar20 & 1) != 0) {
      puVar14 = extraout_RDX_00;
      if (((ulong)extraout_RDX_00 | (ulong)puVar15) == 0) {
        *(undefined1 **)puVar17 = puVar9;
        return puVar20;
      }
      while (((ulong)puVar14 & 1) == 0) {
        puVar14 = (undefined *)((ulong)puVar14 >> 1 | (long)puVar15 << 0x3f);
        puVar15 = (undefined *)((ulong)puVar15 >> 1);
      }
      while (((ulong)puVar15 | (ulong)puVar9) != 0) {
        while ((puVar15 <= puVar9 && ((puVar14 <= puVar20 || (puVar15 != puVar9))))) {
          if ((puVar9 <= puVar15) && ((puVar20 <= puVar14 || (puVar15 != puVar9)))) {
            *(undefined **)puVar17 = puVar15;
            return puVar14;
          }
          bVar26 = puVar20 < puVar14;
          puVar20 = puVar20 + -(long)puVar14;
          puVar10 = puVar9 + (-(ulong)bVar26 - (long)puVar15);
          do {
            uVar21 = (ulong)puVar20 >> 1;
            puVar9 = (undefined1 *)((ulong)puVar10 >> 1);
            puVar20 = (undefined *)(uVar21 | (long)puVar10 << 0x3f);
            puVar10 = puVar9;
          } while ((uVar21 & 1) == 0);
          if (((ulong)puVar15 | (ulong)puVar9) == 0) goto code_r0x00102586;
        }
        bVar26 = puVar14 < puVar20;
        puVar14 = puVar14 + -(long)puVar20;
        puVar10 = puVar15 + (-(ulong)bVar26 - (long)puVar9);
        do {
          uVar21 = (ulong)puVar14 >> 1;
          puVar15 = (undefined *)((ulong)puVar10 >> 1);
          puVar14 = (undefined *)(uVar21 | (long)puVar10 << 0x3f);
          puVar10 = puVar15;
        } while ((uVar21 & 1) == 0);
      }
code_r0x00102586:
      *puVar17 = 0;
      puVar15 = puVar14;
      if (((ulong)puVar14 & 1) != 0) {
        puVar15 = puVar20;
        puVar20 = puVar14;
      }
      uVar21 = (ulong)puVar20 >> 1;
      if (puVar15 != (undefined *)0x0) {
        while( true ) {
          do {
            puVar20 = puVar15;
            puVar15 = (undefined *)((ulong)puVar20 >> 1);
          } while (((ulong)puVar20 & 1) == 0);
          puVar15 = (undefined *)((ulong)puVar20 >> 1) + -uVar21;
          if (puVar15 == (undefined *)0x0) break;
          uVar13 = (long)puVar15 >> 0x3f;
          uVar21 = uVar21 + ((ulong)puVar15 & uVar13);
          puVar15 = (undefined *)(((ulong)puVar15 ^ uVar13) - uVar13);
        }
        return (undefined *)((ulong)puVar20 | 1);
      }
      return puVar20;
    }
    puVar9 = __PRETTY_FUNCTION___6996;
    puVar15 = &UNK_0010b424;
    puVar17 = (undefined8 *)&UNK_0010b455;
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102601;
    func_0x00101750(&UNK_0010b455,&UNK_0010b424,0x1e3);
    if (puVar9 != (undefined1 *)0x0) {
      if (puVar15 == (undefined *)0x0) {
        *puVar17 = 0;
        return (undefined *)extraout_RDX_01;
      }
      lVar6 = 0x3f;
      uVar24 = 0x3f;
      if (puVar9 != (undefined1 *)0x0) {
        while (uVar24 = (uint)lVar6, (ulong)puVar9 >> lVar6 == 0) {
          lVar6 = lVar6 + -1;
        }
      }
      lVar6 = 0x3f;
      uVar22 = 0x3f;
      if (puVar15 != (undefined *)0x0) {
        while (uVar22 = (uint)lVar6, (ulong)puVar15 >> lVar6 == 0) {
          lVar6 = lVar6 + -1;
        }
      }
      iVar23 = (uVar24 ^ 0x3f) - (uVar22 ^ 0x3f);
      bVar8 = (byte)iVar23;
      puVar14 = (undefined *)
                ((ulong)puVar20 >> (0x40 - bVar8 & 0x3f) | (long)puVar9 << (bVar8 & 0x3f));
      uVar13 = (long)puVar20 << (bVar8 & 0x3f);
      uVar21 = extraout_RDX_01;
      if (0 < iVar23) {
        iVar12 = 0;
        do {
          if ((puVar14 < puVar15) || ((puVar14 == puVar15 && (uVar13 <= uVar21)))) {
            bVar26 = uVar21 < uVar13;
            uVar21 = uVar21 - uVar13;
            puVar15 = puVar15 + (-(ulong)bVar26 - (long)puVar14);
          }
          iVar12 = iVar12 + 1;
          uVar11 = (long)puVar14 << 0x3f;
          puVar14 = (undefined *)((ulong)puVar14 >> 1);
          uVar13 = uVar13 >> 1 | uVar11;
        } while (iVar23 != iVar12);
      }
      *(undefined **)puVar17 = puVar15;
      return (undefined *)uVar21;
    }
    param_1 = &UNK_0010b424;
    puVar20 = &UNK_0010b45c;
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x1026bb;
    func_0x00101750(&UNK_0010b45c,&UNK_0010b424,0x1a3,&__PRETTY_FUNCTION___6970);
    unaff_RBP = param_2;
    if (puVar20 == (undefined *)0x0) {
      register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x58);
      param_2 = (undefined *)0x0;
    }
    else {
      iVar23 = 0x40;
      lVar6 = 0;
      uVar21 = ((ulong)puVar20 >> 9) / 0x1dcd65;
      puVar20 = puVar20 + uVar21 * -1000000000;
      puVar14 = (undefined *)0x0;
      puVar15 = (undefined *)0x3b9aca00;
      do {
        puVar10 = (undefined *)((ulong)puVar15 >> 1);
        lVar6 = lVar6 * 2;
        puVar14 = (undefined *)((ulong)puVar14 >> 1 | (long)puVar15 << 0x3f);
        if ((puVar10 < puVar20) || ((puVar10 == puVar20 && (puVar14 <= param_1)))) {
          lVar6 = lVar6 + 1;
          bVar26 = param_1 < puVar14;
          param_1 = param_1 + -(long)puVar14;
          puVar20 = puVar20 + (-(ulong)bVar26 - (long)puVar10);
        }
        iVar23 = iVar23 + -1;
        puVar15 = puVar10;
      } while (iVar23 != 0);
      *(undefined **)((undefined *)register0x00000020 + -0x68) = param_1;
      *(undefined8 *)((undefined *)register0x00000020 + -0x78) = 0x10274c;
      print_uintmaxes(uVar21,lVar6);
      param_1 = *(undefined **)((undefined *)register0x00000020 + -0x68);
      register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x58);
      param_2 = (undefined *)0x9;
    }
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x48) = unaff_R14;
  *(undefined8 *)((undefined *)register0x00000020 + -0x50) = unaff_R13;
  puVar1 = puVar16 + 2;
  bVar8 = *(byte *)((long)puVar16 + 0xfa);
  *(undefined8 *)((undefined *)register0x00000020 + -0x58) = unaff_R12;
  *(undefined **)((undefined *)register0x00000020 + -0x60) = param_2;
  *(undefined8 *)((undefined *)register0x00000020 + -0x68) = unaff_RBX;
  puVar2 = puVar16 + 0x1c;
  uVar24 = (uint)bVar8 - 1;
  uVar21 = extraout_RDX;
  puVar18 = puVar2;
  puVar25 = puVar1;
  if (uVar24 != 0xffffffff) {
    uVar11 = SEXT48((int)uVar24);
    uVar21 = uVar11 * 8;
    uVar13 = puVar16[uVar11 + 2];
    if (extraout_RDX < uVar13) {
      uVar21 = uVar11 - 1;
      uVar5 = uVar21;
      uVar22 = uVar24;
      do {
        uVar19 = uVar5;
        uVar22 = uVar22 - 1;
        uVar4 = uVar21;
        if ((uVar11 - uVar24) - 1 == uVar19) {
          uVar22 = 0xffffffff;
          goto code_r0x00101e00;
        }
        bVar26 = puVar16[uVar19 + 2] == extraout_RDX;
        uVar5 = uVar19 - 1;
      } while (extraout_RDX <= puVar16[uVar19 + 2] && !bVar26);
      if (bVar26) {
code_r0x00101e55:
        *(char *)((long)puVar2 + uVar19) = *(char *)((long)puVar2 + uVar19) + '\x01';
        return (undefined *)uVar21;
      }
      puVar25 = puVar1 + uVar19 + 1;
      puVar18 = (ulong *)(uVar19 + 1 + (long)puVar2);
      if ((int)uVar22 < (int)uVar24) {
code_r0x00101e00:
        while( true ) {
          uVar21 = uVar4;
          puVar16[uVar11 + 3] = uVar13;
          *(undefined *)((long)puVar16 + uVar11 + 0xe1) = *(undefined *)((long)puVar2 + uVar11);
          if ((int)uVar21 <= (int)uVar22) break;
          uVar13 = puVar1[uVar21];
          uVar4 = uVar21 - 1;
          uVar11 = uVar21;
        }
      }
    }
    else {
      uVar19 = uVar11;
      if (extraout_RDX == uVar13) goto code_r0x00101e55;
      puVar18 = (ulong *)((long)puVar16 + uVar11 + 0xe1);
      puVar25 = puVar16 + uVar11 + 3;
    }
  }
  *puVar25 = extraout_RDX;
  *(undefined *)puVar18 = 1;
  *(char *)((long)puVar16 + 0xfa) = bVar8 + 1;
  return (undefined *)uVar21;
}

