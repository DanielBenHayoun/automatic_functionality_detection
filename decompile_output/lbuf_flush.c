
undefined * lbuf_flush(void)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  int iVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong extraout_RDX;
  undefined *extraout_RDX_00;
  ulong extraout_RDX_01;
  undefined *unaff_RBX;
  undefined *puVar17;
  undefined *unaff_RBP;
  undefined *puVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined *in_R8;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  undefined8 unaff_R12;
  uint uVar26;
  undefined8 unaff_R13;
  ulong *puVar27;
  undefined8 unaff_R14;
  long in_FS_OFFSET;
  bool bVar28;
  
  while( true ) {
    *(undefined **)((undefined *)register0x00000020 + -8) = unaff_RBX;
    puVar17 = lbuf._8_8_ + -lbuf._0_8_;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x10245f;
    puVar18 = (undefined *)full_write(1,lbuf._0_8_,puVar17);
    if (puVar18 == puVar17) {
      lbuf._8_8_ = (undefined *)lbuf._0_8_;
      return (undefined *)lbuf._0_8_;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102487;
    uVar7 = func_0x001016c0(0,&UNK_0010b431,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x10248f;
    puVar8 = (uint *)func_0x00101610();
    uVar23 = (ulong)*puVar8;
    puVar19 = (ulong *)0x1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x1024a7;
    func_0x001018b0(1,uVar23,&UNK_0010e94c,uVar7);
    if (uVar23 == 0) break;
    if (puVar19[1] == 0) {
      *puVar19 = extraout_RDX;
      puVar19[1] = uVar23;
      return (undefined *)extraout_RDX;
    }
    puVar11 = __PRETTY_FUNCTION___7027;
    puVar18 = &UNK_0010b424;
    puVar20 = (undefined8 *)&UNK_0010b43d;
    *(undefined8 *)((undefined *)register0x00000020 + -0x18) = 0x102500;
    func_0x00101750(&UNK_0010b43d,&UNK_0010b424,0x235);
    if (((ulong)in_R8 & 1) != 0) {
      puVar17 = extraout_RDX_00;
      if (((ulong)extraout_RDX_00 | (ulong)puVar18) == 0) {
        *(undefined1 **)puVar20 = puVar11;
        return in_R8;
      }
      while (((ulong)puVar17 & 1) == 0) {
        puVar17 = (undefined *)((ulong)puVar17 >> 1 | (long)puVar18 << 0x3f);
        puVar18 = (undefined *)((ulong)puVar18 >> 1);
      }
      while (((ulong)puVar18 | (ulong)puVar11) != 0) {
        while ((puVar18 <= puVar11 && ((puVar17 <= in_R8 || (puVar18 != puVar11))))) {
          if ((puVar11 <= puVar18) && ((in_R8 <= puVar17 || (puVar18 != puVar11)))) {
            *(undefined **)puVar20 = puVar18;
            return puVar17;
          }
          bVar28 = in_R8 < puVar17;
          in_R8 = in_R8 + -(long)puVar17;
          puVar16 = puVar11 + (-(ulong)bVar28 - (long)puVar18);
          do {
            uVar23 = (ulong)in_R8 >> 1;
            puVar11 = (undefined1 *)((ulong)puVar16 >> 1);
            in_R8 = (undefined *)(uVar23 | (long)puVar16 << 0x3f);
            puVar16 = puVar11;
          } while ((uVar23 & 1) == 0);
          if (((ulong)puVar18 | (ulong)puVar11) == 0) goto code_r0x00102586;
        }
        bVar28 = puVar17 < in_R8;
        puVar17 = puVar17 + -(long)in_R8;
        puVar16 = puVar18 + (-(ulong)bVar28 - (long)puVar11);
        do {
          uVar23 = (ulong)puVar17 >> 1;
          puVar18 = (undefined *)((ulong)puVar16 >> 1);
          puVar17 = (undefined *)(uVar23 | (long)puVar16 << 0x3f);
          puVar16 = puVar18;
        } while ((uVar23 & 1) == 0);
      }
code_r0x00102586:
      *puVar20 = 0;
      puVar18 = puVar17;
      if (((ulong)puVar17 & 1) != 0) {
        puVar18 = in_R8;
        in_R8 = puVar17;
      }
      uVar23 = (ulong)in_R8 >> 1;
      if (puVar18 != (undefined *)0x0) {
        while( true ) {
          do {
            puVar17 = puVar18;
            puVar18 = (undefined *)((ulong)puVar17 >> 1);
          } while (((ulong)puVar17 & 1) == 0);
          puVar18 = (undefined *)((ulong)puVar17 >> 1) + -uVar23;
          if (puVar18 == (undefined *)0x0) break;
          uVar15 = (long)puVar18 >> 0x3f;
          uVar23 = uVar23 + ((ulong)puVar18 & uVar15);
          puVar18 = (undefined *)(((ulong)puVar18 ^ uVar15) - uVar15);
        }
        return (undefined *)((ulong)puVar17 | 1);
      }
      return in_R8;
    }
    puVar11 = __PRETTY_FUNCTION___6996;
    puVar18 = &UNK_0010b424;
    puVar20 = (undefined8 *)&UNK_0010b455;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = 0x102601;
    func_0x00101750(&UNK_0010b455,&UNK_0010b424,0x1e3);
    if (puVar11 != (undefined1 *)0x0) {
      if (puVar18 == (undefined *)0x0) {
        *puVar20 = 0;
        return (undefined *)extraout_RDX_01;
      }
      lVar6 = 0x3f;
      uVar26 = 0x3f;
      if (puVar11 != (undefined1 *)0x0) {
        while (uVar26 = (uint)lVar6, (ulong)puVar11 >> lVar6 == 0) {
          lVar6 = lVar6 + -1;
        }
      }
      lVar6 = 0x3f;
      uVar24 = 0x3f;
      if (puVar18 != (undefined *)0x0) {
        while (uVar24 = (uint)lVar6, (ulong)puVar18 >> lVar6 == 0) {
          lVar6 = lVar6 + -1;
        }
      }
      iVar25 = (uVar26 ^ 0x3f) - (uVar24 ^ 0x3f);
      bVar10 = (byte)iVar25;
      puVar17 = (undefined *)
                ((ulong)in_R8 >> (0x40 - bVar10 & 0x3f) | (long)puVar11 << (bVar10 & 0x3f));
      uVar15 = (long)in_R8 << (bVar10 & 0x3f);
      uVar23 = extraout_RDX_01;
      if (0 < iVar25) {
        iVar14 = 0;
        do {
          if ((puVar17 < puVar18) || ((puVar17 == puVar18 && (uVar15 <= uVar23)))) {
            bVar28 = uVar23 < uVar15;
            uVar23 = uVar23 - uVar15;
            puVar18 = puVar18 + (-(ulong)bVar28 - (long)puVar17);
          }
          iVar14 = iVar14 + 1;
          uVar12 = (long)puVar17 << 0x3f;
          puVar17 = (undefined *)((ulong)puVar17 >> 1);
          uVar15 = uVar15 >> 1 | uVar12;
        } while (iVar25 != iVar14);
      }
      *(undefined **)puVar20 = puVar18;
      return (undefined *)uVar23;
    }
    puVar18 = &UNK_0010b424;
    puVar17 = &UNK_0010b45c;
    *(undefined8 *)((undefined *)register0x00000020 + -0x28) = 0x1026bb;
    func_0x00101750(&UNK_0010b45c,&UNK_0010b424,0x1a3,&__PRETTY_FUNCTION___6970);
    if (puVar17 == (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      iVar25 = 0x40;
      lVar6 = 0;
      uVar23 = ((ulong)puVar17 >> 9) / 0x1dcd65;
      puVar17 = puVar17 + uVar23 * -1000000000;
      puVar9 = (undefined *)0x0;
      puVar16 = (undefined *)0x3b9aca00;
      do {
        puVar13 = (undefined *)((ulong)puVar16 >> 1);
        lVar6 = lVar6 * 2;
        puVar9 = (undefined *)((ulong)puVar9 >> 1 | (long)puVar16 << 0x3f);
        if ((puVar13 < puVar17) || ((puVar13 == puVar17 && (puVar9 <= puVar18)))) {
          lVar6 = lVar6 + 1;
          bVar28 = puVar18 < puVar9;
          puVar18 = puVar18 + -(long)puVar9;
          puVar17 = puVar17 + (-(ulong)bVar28 - (long)puVar13);
        }
        iVar25 = iVar25 + -1;
        puVar16 = puVar13;
      } while (iVar25 != 0);
      *(undefined **)((undefined *)register0x00000020 + -0x30) = puVar18;
      *(undefined8 *)((undefined *)register0x00000020 + -0x40) = 0x10274c;
      print_uintmaxes(uVar23,lVar6);
      puVar18 = *(undefined **)((undefined *)register0x00000020 + -0x30);
      puVar17 = (undefined *)0x9;
    }
    *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = uVar7;
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x1023c4;
    lVar6 = umaxtostr(puVar18,(undefined *)register0x00000020 + -0x58);
    puVar18 = lbuf._8_8_;
    unaff_RBX = (undefined *)register0x00000020 + (-0x44 - lVar6);
    if (unaff_RBX < puVar17) {
      lVar3 = (long)puVar17 + (long)lbuf._8_8_;
      puVar16 = lbuf._8_8_;
      do {
        *puVar16 = 0x30;
        puVar16 = puVar16 + 1;
      } while (puVar16 != (undefined *)(lVar3 - (long)unaff_RBX));
      puVar17 = puVar17 + -(long)unaff_RBX;
      puVar18 = puVar18 + (long)puVar17;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x10240e;
    lVar6 = func_0x001017d0(puVar18,lVar6,unaff_RBX);
    in_R8 = unaff_RBX + lVar6;
    if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
      lbuf._8_8_ = in_R8;
      return (undefined *)0x0;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x102437;
    lbuf._8_8_ = in_R8;
    func_0x001016f0();
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x58);
    unaff_RBP = puVar17;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
  puVar1 = puVar19 + 2;
  bVar10 = *(byte *)((long)puVar19 + 0xfa);
  *(undefined8 *)((undefined *)register0x00000020 + -0x20) = unaff_R12;
  *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
  *(undefined8 *)((undefined *)register0x00000020 + -0x30) = uVar7;
  puVar2 = puVar19 + 0x1c;
  uVar26 = (uint)bVar10 - 1;
  uVar23 = extraout_RDX;
  puVar21 = puVar2;
  puVar27 = puVar1;
  if (uVar26 != 0xffffffff) {
    uVar12 = SEXT48((int)uVar26);
    uVar23 = uVar12 * 8;
    uVar15 = puVar19[uVar12 + 2];
    if (extraout_RDX < uVar15) {
      uVar23 = uVar12 - 1;
      uVar5 = uVar23;
      uVar24 = uVar26;
      do {
        uVar22 = uVar5;
        uVar24 = uVar24 - 1;
        uVar4 = uVar23;
        if ((uVar12 - uVar26) - 1 == uVar22) {
          uVar24 = 0xffffffff;
          goto code_r0x00101e00;
        }
        bVar28 = puVar19[uVar22 + 2] == extraout_RDX;
        uVar5 = uVar22 - 1;
      } while (extraout_RDX <= puVar19[uVar22 + 2] && !bVar28);
      if (bVar28) {
code_r0x00101e55:
        *(char *)((long)puVar2 + uVar22) = *(char *)((long)puVar2 + uVar22) + '\x01';
        return (undefined *)uVar23;
      }
      puVar27 = puVar1 + uVar22 + 1;
      puVar21 = (ulong *)(uVar22 + 1 + (long)puVar2);
      if ((int)uVar24 < (int)uVar26) {
code_r0x00101e00:
        while( true ) {
          uVar23 = uVar4;
          puVar19[uVar12 + 3] = uVar15;
          *(undefined *)((long)puVar19 + uVar12 + 0xe1) = *(undefined *)((long)puVar2 + uVar12);
          if ((int)uVar23 <= (int)uVar24) break;
          uVar15 = puVar1[uVar23];
          uVar4 = uVar23 - 1;
          uVar12 = uVar23;
        }
      }
    }
    else {
      uVar22 = uVar12;
      if (extraout_RDX == uVar15) goto code_r0x00101e55;
      puVar21 = (ulong *)((long)puVar19 + uVar12 + 0xe1);
      puVar27 = puVar19 + uVar12 + 3;
    }
  }
  *puVar27 = extraout_RDX;
  *(undefined *)puVar21 = 1;
  *(char *)((long)puVar19 + 0xfa) = bVar10 + 1;
  return (undefined *)uVar23;
}

