
undefined *
gcd2_odd(undefined8 *param_1,undefined *param_2,undefined *param_3,undefined1 *param_4,
        undefined *param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
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
  undefined *puVar16;
  undefined8 unaff_RBX;
  undefined *unaff_RBP;
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
  
  do {
    if (((ulong)param_5 & 1) != 0) {
      if (((ulong)param_3 | (ulong)param_2) == 0) {
        *(undefined1 **)param_1 = param_4;
        return param_5;
      }
      while (((ulong)param_3 & 1) == 0) {
        param_3 = (undefined *)((ulong)param_3 >> 1 | (long)param_2 << 0x3f);
        param_2 = (undefined *)((ulong)param_2 >> 1);
      }
      while (((ulong)param_2 | (ulong)param_4) != 0) {
        while ((param_2 <= param_4 && ((param_3 <= param_5 || (param_2 != param_4))))) {
          if ((param_4 <= param_2) && ((param_5 <= param_3 || (param_2 != param_4)))) {
            *(undefined **)param_1 = param_2;
            return param_3;
          }
          bVar27 = param_5 < param_3;
          param_5 = param_5 + -(long)param_3;
          puVar6 = param_4 + (-(ulong)bVar27 - (long)param_2);
          do {
            uVar22 = (ulong)param_5 >> 1;
            param_4 = (undefined1 *)((ulong)puVar6 >> 1);
            param_5 = (undefined *)(uVar22 | (long)puVar6 << 0x3f);
            puVar6 = param_4;
          } while ((uVar22 & 1) == 0);
          if (((ulong)param_2 | (ulong)param_4) == 0) goto code_r0x00102586;
        }
        bVar27 = param_3 < param_5;
        param_3 = param_3 + -(long)param_5;
        puVar6 = param_2 + (-(ulong)bVar27 - (long)param_4);
        do {
          uVar22 = (ulong)param_3 >> 1;
          param_2 = (undefined *)((ulong)puVar6 >> 1);
          param_3 = (undefined *)(uVar22 | (long)puVar6 << 0x3f);
          puVar6 = param_2;
        } while ((uVar22 & 1) == 0);
      }
code_r0x00102586:
      *param_1 = 0;
      puVar6 = param_3;
      if (((ulong)param_3 & 1) != 0) {
        puVar6 = param_5;
        param_5 = param_3;
      }
      uVar22 = (ulong)param_5 >> 1;
      if (puVar6 != (undefined *)0x0) {
        while( true ) {
          do {
            puVar19 = puVar6;
            puVar6 = (undefined *)((ulong)puVar19 >> 1);
          } while (((ulong)puVar19 & 1) == 0);
          puVar6 = (undefined *)((ulong)puVar19 >> 1) + -uVar22;
          if (puVar6 == (undefined *)0x0) break;
          uVar14 = (long)puVar6 >> 0x3f;
          uVar22 = uVar22 + ((ulong)puVar6 & uVar14);
          puVar6 = (undefined *)(((ulong)puVar6 ^ uVar14) - uVar14);
        }
        return (undefined *)((ulong)puVar19 | 1);
      }
      return param_5;
    }
    puVar10 = __PRETTY_FUNCTION___6996;
    puVar6 = &UNK_0010b424;
    puVar18 = (undefined8 *)&UNK_0010b455;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102601;
    func_0x00101750(&UNK_0010b455,&UNK_0010b424,0x1e3);
    if (puVar10 != (undefined1 *)0x0) {
      if (puVar6 == (undefined *)0x0) {
        *puVar18 = 0;
        return (undefined *)extraout_RDX_01;
      }
      lVar7 = 0x3f;
      uVar25 = 0x3f;
      if (puVar10 != (undefined1 *)0x0) {
        while (uVar25 = (uint)lVar7, (ulong)puVar10 >> lVar7 == 0) {
          lVar7 = lVar7 + -1;
        }
      }
      lVar7 = 0x3f;
      uVar23 = 0x3f;
      if (puVar6 != (undefined *)0x0) {
        while (uVar23 = (uint)lVar7, (ulong)puVar6 >> lVar7 == 0) {
          lVar7 = lVar7 + -1;
        }
      }
      iVar24 = (uVar25 ^ 0x3f) - (uVar23 ^ 0x3f);
      bVar9 = (byte)iVar24;
      puVar19 = (undefined *)
                ((ulong)param_5 >> (0x40 - bVar9 & 0x3f) | (long)puVar10 << (bVar9 & 0x3f));
      uVar14 = (long)param_5 << (bVar9 & 0x3f);
      uVar22 = extraout_RDX_01;
      if (0 < iVar24) {
        iVar13 = 0;
        do {
          if ((puVar19 < puVar6) || ((puVar19 == puVar6 && (uVar14 <= uVar22)))) {
            bVar27 = uVar22 < uVar14;
            uVar22 = uVar22 - uVar14;
            puVar6 = puVar6 + (-(ulong)bVar27 - (long)puVar19);
          }
          iVar13 = iVar13 + 1;
          uVar11 = (long)puVar19 << 0x3f;
          puVar19 = (undefined *)((ulong)puVar19 >> 1);
          uVar14 = uVar14 >> 1 | uVar11;
        } while (iVar24 != iVar13);
      }
      *(undefined **)puVar18 = puVar6;
      return (undefined *)uVar22;
    }
    puVar6 = &UNK_0010b424;
    puVar19 = &UNK_0010b45c;
    *(undefined8 *)((undefined *)register0x00000020 + -0x18) = 0x1026bb;
    func_0x00101750(&UNK_0010b45c,&UNK_0010b424,0x1a3,&__PRETTY_FUNCTION___6970);
    if (puVar19 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      iVar24 = 0x40;
      lVar7 = 0;
      uVar22 = ((ulong)puVar19 >> 9) / 0x1dcd65;
      puVar19 = puVar19 + uVar22 * -1000000000;
      puVar15 = (undefined *)0x0;
      puVar16 = (undefined *)0x3b9aca00;
      do {
        puVar12 = (undefined *)((ulong)puVar16 >> 1);
        lVar7 = lVar7 * 2;
        puVar15 = (undefined *)((ulong)puVar15 >> 1 | (long)puVar16 << 0x3f);
        if ((puVar12 < puVar19) || ((puVar12 == puVar19 && (puVar15 <= puVar6)))) {
          lVar7 = lVar7 + 1;
          bVar27 = puVar6 < puVar15;
          puVar6 = puVar6 + -(long)puVar15;
          puVar19 = puVar19 + (-(ulong)bVar27 - (long)puVar12);
        }
        iVar24 = iVar24 + -1;
        puVar16 = puVar12;
      } while (iVar24 != 0);
      *(undefined **)((undefined *)register0x00000020 + -0x20) = puVar6;
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x10274c;
      print_uintmaxes(uVar22,lVar7);
      puVar6 = *(undefined **)((undefined *)register0x00000020 + -0x20);
      puVar19 = (undefined *)0x9;
    }
    *(undefined **)((undefined *)register0x00000020 + -0x18) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = unaff_RBX;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x1023c4;
    lVar7 = umaxtostr(puVar6,(undefined *)register0x00000020 + -0x48);
    puVar6 = lbuf._8_8_;
    puVar16 = (undefined *)register0x00000020 + (-0x34 - lVar7);
    if (puVar16 < puVar19) {
      lVar3 = (long)puVar19 + (long)lbuf._8_8_;
      puVar15 = lbuf._8_8_;
      do {
        *puVar15 = 0x30;
        puVar15 = puVar15 + 1;
      } while (puVar15 != (undefined *)(lVar3 - (long)puVar16));
      puVar19 = puVar19 + -(long)puVar16;
      puVar6 = puVar6 + (long)puVar19;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x10240e;
    lVar7 = func_0x001017d0(puVar6,lVar7,puVar16);
    param_5 = puVar16 + lVar7;
    if (*(long *)((undefined *)register0x00000020 + -0x30) == *(long *)(in_FS_OFFSET + 0x28)) {
      lbuf._8_8_ = param_5;
      return (undefined *)0x0;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x102437;
    lbuf._8_8_ = param_5;
    func_0x001016f0();
    *(undefined **)((undefined *)register0x00000020 + -0x50) = puVar16;
    puVar16 = lbuf._8_8_ + -lbuf._0_8_;
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x10245f;
    puVar6 = (undefined *)full_write(1,lbuf._0_8_,puVar16);
    if (puVar6 == puVar16) {
      lbuf._8_8_ = (undefined *)lbuf._0_8_;
      return (undefined *)lbuf._0_8_;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102487;
    unaff_RBX = func_0x001016c0(0,&UNK_0010b431,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x10248f;
    puVar8 = (uint *)func_0x00101610();
    uVar22 = (ulong)*puVar8;
    puVar17 = (ulong *)0x1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x1024a7;
    func_0x001018b0(1,uVar22,&UNK_0010e94c,unaff_RBX);
    if (uVar22 == 0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x58) = unaff_R14;
      *(undefined8 *)((undefined *)register0x00000020 + -0x60) = unaff_R13;
      puVar1 = puVar17 + 2;
      bVar9 = *(byte *)((long)puVar17 + 0xfa);
      *(undefined8 *)((undefined *)register0x00000020 + -0x68) = unaff_R12;
      *(undefined **)((undefined *)register0x00000020 + -0x70) = puVar19;
      *(undefined8 *)((undefined *)register0x00000020 + -0x78) = unaff_RBX;
      puVar2 = puVar17 + 0x1c;
      uVar25 = (uint)bVar9 - 1;
      uVar22 = extraout_RDX;
      puVar20 = puVar2;
      puVar26 = puVar1;
      if (uVar25 == 0xffffffff) goto code_r0x00101e17;
      uVar11 = SEXT48((int)uVar25);
      uVar22 = uVar11 * 8;
      uVar14 = puVar17[uVar11 + 2];
      if (extraout_RDX < uVar14) {
        uVar22 = uVar11 - 1;
        uVar5 = uVar22;
        uVar23 = uVar25;
        break;
      }
      uVar21 = uVar11;
      if (extraout_RDX == uVar14) goto code_r0x00101e55;
      puVar20 = (ulong *)((long)puVar17 + uVar11 + 0xe1);
      puVar26 = puVar17 + uVar11 + 3;
      goto code_r0x00101e17;
    }
    if (puVar17[1] == 0) {
      *puVar17 = extraout_RDX;
      puVar17[1] = uVar22;
      return (undefined *)extraout_RDX;
    }
    param_4 = __PRETTY_FUNCTION___7027;
    param_2 = &UNK_0010b424;
    param_1 = (undefined8 *)&UNK_0010b43d;
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x102500;
    func_0x00101750(&UNK_0010b43d,&UNK_0010b424,0x235);
    param_3 = extraout_RDX_00;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x58);
    unaff_RBP = puVar19;
  } while( true );
  while( true ) {
    bVar27 = puVar17[uVar21 + 2] == extraout_RDX;
    uVar5 = uVar21 - 1;
    if (puVar17[uVar21 + 2] < extraout_RDX || bVar27) break;
    uVar21 = uVar5;
    uVar23 = uVar23 - 1;
    uVar4 = uVar22;
    if ((uVar11 - uVar25) - 1 == uVar21) {
      uVar23 = 0xffffffff;
      goto code_r0x00101e00;
    }
  }
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
      puVar17[uVar11 + 3] = uVar14;
      *(undefined *)((long)puVar17 + uVar11 + 0xe1) = *(undefined *)((long)puVar2 + uVar11);
      if ((int)uVar22 <= (int)uVar23) break;
      uVar14 = puVar1[uVar22];
      uVar4 = uVar22 - 1;
      uVar11 = uVar22;
    }
  }
code_r0x00101e17:
  *puVar26 = extraout_RDX;
  *(undefined *)puVar20 = 1;
  *(char *)((long)puVar17 + 0xfa) = bVar9 + 1;
  return (undefined *)uVar22;
}

