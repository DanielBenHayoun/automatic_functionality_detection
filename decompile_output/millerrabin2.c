
undefined *
millerrabin2(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5,
            ulong *param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  undefined *puVar8;
  byte bVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  int iVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong extraout_RDX;
  undefined *extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong uVar16;
  undefined *puVar17;
  undefined ***pppuVar18;
  undefined *unaff_RBP;
  ulong *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined *puVar23;
  uint uVar24;
  int iVar25;
  undefined *unaff_R12;
  uint uVar26;
  ulong *puVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined **ppuStack88;
  uint uStack80;
  bool bStack73;
  undefined *puStack72;
  ulong uStack64;
  
  ppuStack88 = &puStack72;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack80 = param_5;
  puVar17 = (undefined *)powm2(ppuStack88,param_3,param_4,param_1,param_2);
  puVar23 = (undefined *)*param_6;
  if ((puVar23 == puVar17) && ((undefined *)param_6[1] == puStack72)) {
code_r0x00102370:
    bStack73 = true;
  }
  else {
    uVar16 = param_1[1];
    puVar15 = (undefined *)*param_1;
    unaff_RBP = puVar15 + -(long)puVar23;
    unaff_R12 = (undefined *)((uVar16 - (long)(undefined *)param_6[1]) - (ulong)(puVar15 < puVar23))
    ;
    bStack73 = puVar17 == unaff_RBP && puStack72 == unaff_R12;
    if (puVar17 == unaff_RBP && puStack72 == unaff_R12) goto code_r0x00102370;
    uVar26 = 1;
    if (1 < uStack80) {
      while( true ) {
        puVar17 = (undefined *)
                  mulredc2(ppuStack88,puStack72,puVar17,puStack72,puVar17,uVar16,puVar15);
        if ((unaff_RBP == puVar17) && (unaff_R12 == puStack72)) goto code_r0x00102370;
        if ((((undefined *)*param_6 == puVar17) && ((undefined *)param_6[1] == puStack72)) ||
           (uVar26 = uVar26 + 1, uStack80 == uVar26)) break;
        puVar15 = (undefined *)*param_1;
        uVar16 = param_1[1];
      }
    }
  }
  uVar16 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar16 == 0) {
    return (undefined *)(ulong)bStack73;
  }
  func_0x001016f0();
  pppuVar18 = &ppuStack88;
  while( true ) {
    *(undefined **)((undefined *)pppuVar18 + -8) = unaff_RBP;
    *(ulong *)((undefined *)pppuVar18 + -0x10) = uVar16;
    *(undefined8 *)((undefined *)pppuVar18 + -0x20) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)pppuVar18 + -0x40) = 0x1023c4;
    lVar6 = umaxtostr();
    puVar23 = lbuf._8_8_;
    puVar17 = (undefined *)pppuVar18 + (-0x24 - lVar6);
    if (puVar17 < puStack72) {
      lVar3 = (long)puStack72 + (long)lbuf._8_8_;
      puVar15 = lbuf._8_8_;
      do {
        *puVar15 = 0x30;
        puVar15 = puVar15 + 1;
      } while (puVar15 != (undefined *)(lVar3 - (long)puVar17));
      puStack72 = puStack72 + -(long)puVar17;
      puVar23 = puVar23 + (long)puStack72;
    }
    *(undefined8 *)((undefined *)pppuVar18 + -0x40) = 0x10240e;
    lVar6 = func_0x001017d0(puVar23,lVar6,puVar17);
    puVar23 = puVar17 + lVar6;
    if (*(long *)((undefined *)pppuVar18 + -0x20) == *(long *)(in_FS_OFFSET + 0x28)) {
      lbuf._8_8_ = puVar23;
      return (undefined *)0x0;
    }
    *(undefined8 *)((undefined *)pppuVar18 + -0x40) = 0x102437;
    lbuf._8_8_ = puVar23;
    func_0x001016f0();
    *(undefined **)((undefined *)pppuVar18 + -0x40) = puVar17;
    puVar15 = lbuf._8_8_ + -lbuf._0_8_;
    *(undefined8 *)((undefined *)pppuVar18 + -0x48) = 0x10245f;
    puVar17 = (undefined *)full_write(1,lbuf._0_8_,puVar15);
    if (puVar17 == puVar15) {
      lbuf._8_8_ = (undefined *)lbuf._0_8_;
      return (undefined *)lbuf._0_8_;
    }
    *(undefined8 *)((undefined *)pppuVar18 + -0x48) = 0x102487;
    uVar16 = func_0x001016c0(0,&UNK_0010b431,5);
    *(undefined8 *)((undefined *)pppuVar18 + -0x48) = 0x10248f;
    puVar7 = (uint *)func_0x00101610();
    uVar14 = (ulong)*puVar7;
    puVar19 = (ulong *)0x1;
    *(undefined8 *)((undefined *)pppuVar18 + -0x48) = 0x1024a7;
    func_0x001018b0(1,uVar14,&UNK_0010e94c,uVar16);
    if (uVar14 == 0) break;
    if (puVar19[1] == 0) {
      *puVar19 = extraout_RDX;
      puVar19[1] = uVar14;
      return (undefined *)extraout_RDX;
    }
    puVar10 = __PRETTY_FUNCTION___7027;
    puVar17 = &UNK_0010b424;
    puVar20 = (undefined8 *)&UNK_0010b43d;
    *(undefined8 *)((undefined *)pppuVar18 + -0x50) = 0x102500;
    func_0x00101750(&UNK_0010b43d,&UNK_0010b424,0x235);
    if (((ulong)puVar23 & 1) != 0) {
      puVar15 = extraout_RDX_00;
      if (((ulong)extraout_RDX_00 | (ulong)puVar17) == 0) {
        *(undefined1 **)puVar20 = puVar10;
        return puVar23;
      }
      while (((ulong)puVar15 & 1) == 0) {
        puVar15 = (undefined *)((ulong)puVar15 >> 1 | (long)puVar17 << 0x3f);
        puVar17 = (undefined *)((ulong)puVar17 >> 1);
      }
      while (((ulong)puVar17 | (ulong)puVar10) != 0) {
        while ((puVar17 <= puVar10 && ((puVar15 <= puVar23 || (puVar17 != puVar10))))) {
          if ((puVar10 <= puVar17) && ((puVar23 <= puVar15 || (puVar17 != puVar10)))) {
            *(undefined **)puVar20 = puVar17;
            return puVar15;
          }
          bVar28 = puVar23 < puVar15;
          puVar23 = puVar23 + -(long)puVar15;
          puVar8 = puVar10 + (-(ulong)bVar28 - (long)puVar17);
          do {
            uVar16 = (ulong)puVar23 >> 1;
            puVar10 = (undefined1 *)((ulong)puVar8 >> 1);
            puVar23 = (undefined *)(uVar16 | (long)puVar8 << 0x3f);
            puVar8 = puVar10;
          } while ((uVar16 & 1) == 0);
          if (((ulong)puVar17 | (ulong)puVar10) == 0) goto code_r0x00102586;
        }
        bVar28 = puVar15 < puVar23;
        puVar15 = puVar15 + -(long)puVar23;
        puVar8 = puVar17 + (-(ulong)bVar28 - (long)puVar10);
        do {
          uVar16 = (ulong)puVar15 >> 1;
          puVar17 = (undefined *)((ulong)puVar8 >> 1);
          puVar15 = (undefined *)(uVar16 | (long)puVar8 << 0x3f);
          puVar8 = puVar17;
        } while ((uVar16 & 1) == 0);
      }
code_r0x00102586:
      *puVar20 = 0;
      puVar17 = puVar15;
      if (((ulong)puVar15 & 1) != 0) {
        puVar17 = puVar23;
        puVar23 = puVar15;
      }
      uVar16 = (ulong)puVar23 >> 1;
      if (puVar17 != (undefined *)0x0) {
        while( true ) {
          do {
            puVar23 = puVar17;
            puVar17 = (undefined *)((ulong)puVar23 >> 1);
          } while (((ulong)puVar23 & 1) == 0);
          puVar17 = (undefined *)((ulong)puVar23 >> 1) + -uVar16;
          if (puVar17 == (undefined *)0x0) break;
          uVar14 = (long)puVar17 >> 0x3f;
          uVar16 = uVar16 + ((ulong)puVar17 & uVar14);
          puVar17 = (undefined *)(((ulong)puVar17 ^ uVar14) - uVar14);
        }
        return (undefined *)((ulong)puVar23 | 1);
      }
      return puVar23;
    }
    puVar10 = __PRETTY_FUNCTION___6996;
    puVar17 = &UNK_0010b424;
    puVar20 = (undefined8 *)&UNK_0010b455;
    *(undefined8 *)((undefined *)pppuVar18 + -0x58) = 0x102601;
    func_0x00101750(&UNK_0010b455,&UNK_0010b424,0x1e3);
    if (puVar10 != (undefined1 *)0x0) {
      if (puVar17 == (undefined *)0x0) {
        *puVar20 = 0;
        return (undefined *)extraout_RDX_01;
      }
      lVar6 = 0x3f;
      uVar26 = 0x3f;
      if (puVar10 != (undefined1 *)0x0) {
        while (uVar26 = (uint)lVar6, (ulong)puVar10 >> lVar6 == 0) {
          lVar6 = lVar6 + -1;
        }
      }
      lVar6 = 0x3f;
      uVar24 = 0x3f;
      if (puVar17 != (undefined *)0x0) {
        while (uVar24 = (uint)lVar6, (ulong)puVar17 >> lVar6 == 0) {
          lVar6 = lVar6 + -1;
        }
      }
      iVar25 = (uVar26 ^ 0x3f) - (uVar24 ^ 0x3f);
      bVar9 = (byte)iVar25;
      puVar15 = (undefined *)
                ((ulong)puVar23 >> (0x40 - bVar9 & 0x3f) | (long)puVar10 << (bVar9 & 0x3f));
      uVar14 = (long)puVar23 << (bVar9 & 0x3f);
      uVar16 = extraout_RDX_01;
      if (0 < iVar25) {
        iVar13 = 0;
        do {
          if ((puVar15 < puVar17) || ((puVar15 == puVar17 && (uVar14 <= uVar16)))) {
            bVar28 = uVar16 < uVar14;
            uVar16 = uVar16 - uVar14;
            puVar17 = puVar17 + (-(ulong)bVar28 - (long)puVar15);
          }
          iVar13 = iVar13 + 1;
          uVar11 = (long)puVar15 << 0x3f;
          puVar15 = (undefined *)((ulong)puVar15 >> 1);
          uVar14 = uVar14 >> 1 | uVar11;
        } while (iVar25 != iVar13);
      }
      *(undefined **)puVar20 = puVar17;
      return (undefined *)uVar16;
    }
    puVar23 = &UNK_0010b424;
    puVar17 = &UNK_0010b45c;
    *(undefined8 *)((undefined *)pppuVar18 + -0x60) = 0x1026bb;
    func_0x00101750(&UNK_0010b45c,&UNK_0010b424,0x1a3,&__PRETTY_FUNCTION___6970);
    unaff_RBP = puStack72;
    if (puVar17 == (undefined *)0x0) {
      pppuVar18 = (undefined ***)((undefined *)pppuVar18 + -0x58);
      puStack72 = (undefined *)0x0;
    }
    else {
      iVar25 = 0x40;
      lVar6 = 0;
      uVar14 = ((ulong)puVar17 >> 9) / 0x1dcd65;
      puVar17 = puVar17 + uVar14 * -1000000000;
      puVar8 = (undefined *)0x0;
      puVar15 = (undefined *)0x3b9aca00;
      do {
        puVar12 = (undefined *)((ulong)puVar15 >> 1);
        lVar6 = lVar6 * 2;
        puVar8 = (undefined *)((ulong)puVar8 >> 1 | (long)puVar15 << 0x3f);
        if ((puVar12 < puVar17) || ((puVar12 == puVar17 && (puVar8 <= puVar23)))) {
          lVar6 = lVar6 + 1;
          bVar28 = puVar23 < puVar8;
          puVar23 = puVar23 + -(long)puVar8;
          puVar17 = puVar17 + (-(ulong)bVar28 - (long)puVar12);
        }
        iVar25 = iVar25 + -1;
        puVar15 = puVar12;
      } while (iVar25 != 0);
      *(undefined **)((undefined *)pppuVar18 + -0x68) = puVar23;
      *(undefined8 *)((undefined *)pppuVar18 + -0x78) = 0x10274c;
      print_uintmaxes(uVar14,lVar6);
      pppuVar18 = (undefined ***)((undefined *)pppuVar18 + -0x58);
      puStack72 = (undefined *)0x9;
    }
  }
  *(ulong **)((undefined *)pppuVar18 + -0x48) = param_1;
  *(undefined8 *)((undefined *)pppuVar18 + -0x50) = param_2;
  puVar1 = puVar19 + 2;
  bVar9 = *(byte *)((long)puVar19 + 0xfa);
  *(undefined **)((undefined *)pppuVar18 + -0x58) = unaff_R12;
  *(undefined **)((undefined *)pppuVar18 + -0x60) = puStack72;
  *(ulong *)((undefined *)pppuVar18 + -0x68) = uVar16;
  puVar2 = puVar19 + 0x1c;
  uVar26 = (uint)bVar9 - 1;
  uVar16 = extraout_RDX;
  puVar21 = puVar2;
  puVar27 = puVar1;
  if (uVar26 != 0xffffffff) {
    uVar11 = SEXT48((int)uVar26);
    uVar16 = uVar11 * 8;
    uVar14 = puVar19[uVar11 + 2];
    if (extraout_RDX < uVar14) {
      uVar16 = uVar11 - 1;
      uVar5 = uVar16;
      uVar24 = uVar26;
      do {
        uVar22 = uVar5;
        uVar24 = uVar24 - 1;
        uVar4 = uVar16;
        if ((uVar11 - uVar26) - 1 == uVar22) {
          uVar24 = 0xffffffff;
          goto code_r0x00101e00;
        }
        bVar28 = puVar19[uVar22 + 2] == extraout_RDX;
        uVar5 = uVar22 - 1;
      } while (extraout_RDX <= puVar19[uVar22 + 2] && !bVar28);
      if (bVar28) {
code_r0x00101e55:
        *(char *)((long)puVar2 + uVar22) = *(char *)((long)puVar2 + uVar22) + '\x01';
        return (undefined *)uVar16;
      }
      puVar27 = puVar1 + uVar22 + 1;
      puVar21 = (ulong *)(uVar22 + 1 + (long)puVar2);
      if ((int)uVar24 < (int)uVar26) {
code_r0x00101e00:
        while( true ) {
          uVar16 = uVar4;
          puVar19[uVar11 + 3] = uVar14;
          *(undefined *)((long)puVar19 + uVar11 + 0xe1) = *(undefined *)((long)puVar2 + uVar11);
          if ((int)uVar16 <= (int)uVar24) break;
          uVar14 = puVar1[uVar16];
          uVar4 = uVar16 - 1;
          uVar11 = uVar16;
        }
      }
    }
    else {
      uVar22 = uVar11;
      if (extraout_RDX == uVar14) goto code_r0x00101e55;
      puVar21 = (ulong *)((long)puVar19 + uVar11 + 0xe1);
      puVar27 = puVar19 + uVar11 + 3;
    }
  }
  *puVar27 = extraout_RDX;
  *(undefined *)puVar21 = 1;
  *(char *)((long)puVar19 + 0xfa) = bVar9 + 1;
  return (undefined *)uVar16;
}

