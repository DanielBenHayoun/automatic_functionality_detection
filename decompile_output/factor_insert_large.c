
undefined *
factor_insert_large(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined *param_5
                   )

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  byte bVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong extraout_RDX;
  undefined *extraout_RDX_00;
  undefined *puVar14;
  ulong extraout_RDX_01;
  undefined *puVar15;
  undefined8 unaff_RBX;
  undefined *unaff_RBP;
  undefined *puVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  undefined8 unaff_R12;
  uint uVar23;
  undefined8 unaff_R13;
  ulong *puVar24;
  undefined8 unaff_R14;
  long in_FS_OFFSET;
  bool bVar25;
  
  while (param_2 != 0) {
    if (param_1[1] == 0) {
      *param_1 = param_3;
      param_1[1] = param_2;
      return (undefined *)param_3;
    }
    puVar8 = __PRETTY_FUNCTION___7027;
    puVar16 = &UNK_0010b424;
    puVar17 = (undefined8 *)&UNK_0010b43d;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102500;
    func_0x00101750(&UNK_0010b43d,&UNK_0010b424,0x235);
    if (((ulong)param_5 & 1) != 0) {
      puVar14 = extraout_RDX_00;
      if (((ulong)extraout_RDX_00 | (ulong)puVar16) == 0) {
        *(undefined1 **)puVar17 = puVar8;
        return param_5;
      }
      while (((ulong)puVar14 & 1) == 0) {
        puVar14 = (undefined *)((ulong)puVar14 >> 1 | (long)puVar16 << 0x3f);
        puVar16 = (undefined *)((ulong)puVar16 >> 1);
      }
      while (((ulong)puVar16 | (ulong)puVar8) != 0) {
        while ((puVar16 <= puVar8 && ((puVar14 <= param_5 || (puVar16 != puVar8))))) {
          if ((puVar8 <= puVar16) && ((param_5 <= puVar14 || (puVar16 != puVar8)))) {
            *(undefined **)puVar17 = puVar16;
            return puVar14;
          }
          bVar25 = param_5 < puVar14;
          param_5 = param_5 + -(long)puVar14;
          puVar15 = puVar8 + (-(ulong)bVar25 - (long)puVar16);
          do {
            uVar20 = (ulong)param_5 >> 1;
            puVar8 = (undefined1 *)((ulong)puVar15 >> 1);
            param_5 = (undefined *)(uVar20 | (long)puVar15 << 0x3f);
            puVar15 = puVar8;
          } while ((uVar20 & 1) == 0);
          if (((ulong)puVar16 | (ulong)puVar8) == 0) goto code_r0x00102586;
        }
        bVar25 = puVar14 < param_5;
        puVar14 = puVar14 + -(long)param_5;
        puVar15 = puVar16 + (-(ulong)bVar25 - (long)puVar8);
        do {
          uVar20 = (ulong)puVar14 >> 1;
          puVar16 = (undefined *)((ulong)puVar15 >> 1);
          puVar14 = (undefined *)(uVar20 | (long)puVar15 << 0x3f);
          puVar15 = puVar16;
        } while ((uVar20 & 1) == 0);
      }
code_r0x00102586:
      *puVar17 = 0;
      puVar16 = puVar14;
      if (((ulong)puVar14 & 1) != 0) {
        puVar16 = param_5;
        param_5 = puVar14;
      }
      uVar20 = (ulong)param_5 >> 1;
      if (puVar16 != (undefined *)0x0) {
        while( true ) {
          do {
            puVar14 = puVar16;
            puVar16 = (undefined *)((ulong)puVar14 >> 1);
          } while (((ulong)puVar14 & 1) == 0);
          puVar16 = (undefined *)((ulong)puVar14 >> 1) + -uVar20;
          if (puVar16 == (undefined *)0x0) break;
          uVar12 = (long)puVar16 >> 0x3f;
          uVar20 = uVar20 + ((ulong)puVar16 & uVar12);
          puVar16 = (undefined *)(((ulong)puVar16 ^ uVar12) - uVar12);
        }
        return (undefined *)((ulong)puVar14 | 1);
      }
      return param_5;
    }
    puVar8 = __PRETTY_FUNCTION___6996;
    puVar16 = &UNK_0010b424;
    puVar17 = (undefined8 *)&UNK_0010b455;
    *(undefined8 *)((undefined *)register0x00000020 + -0x18) = 0x102601;
    func_0x00101750(&UNK_0010b455,&UNK_0010b424,0x1e3);
    if (puVar8 != (undefined1 *)0x0) {
      if (puVar16 == (undefined *)0x0) {
        *puVar17 = 0;
        return (undefined *)extraout_RDX_01;
      }
      lVar5 = 0x3f;
      uVar23 = 0x3f;
      if (puVar8 != (undefined1 *)0x0) {
        while (uVar23 = (uint)lVar5, (ulong)puVar8 >> lVar5 == 0) {
          lVar5 = lVar5 + -1;
        }
      }
      lVar5 = 0x3f;
      uVar21 = 0x3f;
      if (puVar16 != (undefined *)0x0) {
        while (uVar21 = (uint)lVar5, (ulong)puVar16 >> lVar5 == 0) {
          lVar5 = lVar5 + -1;
        }
      }
      iVar22 = (uVar23 ^ 0x3f) - (uVar21 ^ 0x3f);
      bVar7 = (byte)iVar22;
      puVar14 = (undefined *)
                ((ulong)param_5 >> (0x40 - bVar7 & 0x3f) | (long)puVar8 << (bVar7 & 0x3f));
      uVar12 = (long)param_5 << (bVar7 & 0x3f);
      uVar20 = extraout_RDX_01;
      if (0 < iVar22) {
        iVar11 = 0;
        do {
          if ((puVar14 < puVar16) || ((puVar14 == puVar16 && (uVar12 <= uVar20)))) {
            bVar25 = uVar20 < uVar12;
            uVar20 = uVar20 - uVar12;
            puVar16 = puVar16 + (-(ulong)bVar25 - (long)puVar14);
          }
          iVar11 = iVar11 + 1;
          uVar9 = (long)puVar14 << 0x3f;
          puVar14 = (undefined *)((ulong)puVar14 >> 1);
          uVar12 = uVar12 >> 1 | uVar9;
        } while (iVar22 != iVar11);
      }
      *(undefined **)puVar17 = puVar16;
      return (undefined *)uVar20;
    }
    puVar16 = &UNK_0010b424;
    puVar14 = &UNK_0010b45c;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = 0x1026bb;
    func_0x00101750(&UNK_0010b45c,&UNK_0010b424,0x1a3,&__PRETTY_FUNCTION___6970);
    if (puVar14 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      iVar22 = 0x40;
      lVar5 = 0;
      uVar20 = ((ulong)puVar14 >> 9) / 0x1dcd65;
      puVar14 = puVar14 + uVar20 * -1000000000;
      puVar13 = (undefined *)0x0;
      puVar15 = (undefined *)0x3b9aca00;
      do {
        puVar10 = (undefined *)((ulong)puVar15 >> 1);
        lVar5 = lVar5 * 2;
        puVar13 = (undefined *)((ulong)puVar13 >> 1 | (long)puVar15 << 0x3f);
        if ((puVar10 < puVar14) || ((puVar10 == puVar14 && (puVar13 <= puVar16)))) {
          lVar5 = lVar5 + 1;
          bVar25 = puVar16 < puVar13;
          puVar16 = puVar16 + -(long)puVar13;
          puVar14 = puVar14 + (-(ulong)bVar25 - (long)puVar10);
        }
        iVar22 = iVar22 + -1;
        puVar15 = puVar10;
      } while (iVar22 != 0);
      *(undefined **)((undefined *)register0x00000020 + -0x28) = puVar16;
      *(undefined8 *)((undefined *)register0x00000020 + -0x38) = 0x10274c;
      print_uintmaxes(uVar20,lVar5);
      puVar16 = *(undefined **)((undefined *)register0x00000020 + -0x28);
      puVar14 = (undefined *)0x9;
    }
    *(undefined **)((undefined *)register0x00000020 + -0x20) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x28) = unaff_RBX;
    *(undefined8 *)((undefined *)register0x00000020 + -0x38) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x1023c4;
    lVar5 = umaxtostr(puVar16,(undefined *)register0x00000020 + -0x50);
    puVar16 = lbuf._8_8_;
    puVar15 = (undefined *)register0x00000020 + (-0x3c - lVar5);
    if (puVar15 < puVar14) {
      lVar3 = (long)puVar14 + (long)lbuf._8_8_;
      puVar13 = lbuf._8_8_;
      do {
        *puVar13 = 0x30;
        puVar13 = puVar13 + 1;
      } while (puVar13 != (undefined *)(lVar3 - (long)puVar15));
      puVar14 = puVar14 + -(long)puVar15;
      puVar16 = puVar16 + (long)puVar14;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x10240e;
    lVar5 = func_0x001017d0(puVar16,lVar5,puVar15);
    param_5 = puVar15 + lVar5;
    if (*(long *)((undefined *)register0x00000020 + -0x38) == *(long *)(in_FS_OFFSET + 0x28)) {
      lbuf._8_8_ = param_5;
      return (undefined *)0x0;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = 0x102437;
    lbuf._8_8_ = param_5;
    func_0x001016f0();
    *(undefined **)((undefined *)register0x00000020 + -0x58) = puVar15;
    puVar15 = lbuf._8_8_ + -lbuf._0_8_;
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x10245f;
    puVar16 = (undefined *)full_write(1,lbuf._0_8_,puVar15);
    if (puVar16 == puVar15) {
      lbuf._8_8_ = (undefined *)lbuf._0_8_;
      return (undefined *)lbuf._0_8_;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x102487;
    unaff_RBX = func_0x001016c0(0,&UNK_0010b431,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x10248f;
    puVar6 = (uint *)func_0x00101610();
    param_2 = (ulong)*puVar6;
    param_1 = (ulong *)0x1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x1024a7;
    func_0x001018b0(1,param_2,&UNK_0010e94c,unaff_RBX);
    param_3 = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x58);
    unaff_RBP = puVar14;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -8) = unaff_R14;
  *(undefined8 *)((undefined *)register0x00000020 + -0x10) = unaff_R13;
  puVar1 = param_1 + 2;
  bVar7 = *(byte *)((long)param_1 + 0xfa);
  *(undefined8 *)((undefined *)register0x00000020 + -0x18) = unaff_R12;
  *(undefined **)((undefined *)register0x00000020 + -0x20) = unaff_RBP;
  *(undefined8 *)((undefined *)register0x00000020 + -0x28) = unaff_RBX;
  puVar2 = param_1 + 0x1c;
  uVar23 = (uint)bVar7 - 1;
  uVar20 = param_3;
  puVar18 = puVar2;
  puVar24 = puVar1;
  if (uVar23 != 0xffffffff) {
    uVar9 = SEXT48((int)uVar23);
    uVar20 = uVar9 * 8;
    uVar12 = param_1[uVar9 + 2];
    if (param_3 < uVar12) {
      uVar20 = uVar9 - 1;
      uVar4 = uVar20;
      uVar21 = uVar23;
      do {
        uVar19 = uVar4;
        uVar21 = uVar21 - 1;
        if ((uVar9 - uVar23) - 1 == uVar19) {
          uVar21 = 0xffffffff;
          goto code_r0x00101e00;
        }
        bVar25 = param_1[uVar19 + 2] == param_3;
        uVar4 = uVar19 - 1;
      } while (param_3 <= param_1[uVar19 + 2] && !bVar25);
      if (bVar25) {
code_r0x00101e55:
        *(char *)((long)puVar2 + uVar19) = *(char *)((long)puVar2 + uVar19) + '\x01';
        return (undefined *)uVar20;
      }
      puVar24 = puVar1 + uVar19 + 1;
      puVar18 = (ulong *)(uVar19 + 1 + (long)puVar2);
      if ((int)uVar21 < (int)uVar23) {
code_r0x00101e00:
        while( true ) {
          uVar19 = uVar20;
          param_1[uVar9 + 3] = uVar12;
          *(undefined *)((long)param_1 + uVar9 + 0xe1) = *(undefined *)((long)puVar2 + uVar9);
          uVar20 = uVar19;
          if ((int)uVar19 <= (int)uVar21) break;
          uVar12 = puVar1[uVar19];
          uVar20 = uVar19 - 1;
          uVar9 = uVar19;
        }
      }
    }
    else {
      uVar19 = uVar9;
      if (param_3 == uVar12) goto code_r0x00101e55;
      puVar18 = (ulong *)((long)param_1 + uVar9 + 0xe1);
      puVar24 = param_1 + uVar9 + 3;
    }
  }
  *puVar24 = param_3;
  *(undefined *)puVar18 = 1;
  *(char *)((long)param_1 + 0xfa) = bVar7 + 1;
  return (undefined *)uVar20;
}

