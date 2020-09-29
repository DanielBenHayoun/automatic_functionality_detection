
char * lbuf_putc(char param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined *puVar9;
  char *pcVar10;
  long lVar11;
  byte bVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  int iVar17;
  ulong uVar18;
  ulong extraout_RDX;
  char *extraout_RDX_00;
  char *pcVar19;
  ulong extraout_RDX_01;
  undefined *unaff_RBX;
  undefined *unaff_RBP;
  undefined *puVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  char *in_R8;
  uint uVar27;
  int iVar28;
  undefined8 unaff_R12;
  uint uVar29;
  undefined8 unaff_R13;
  ulong *puVar30;
  undefined8 unaff_R14;
  long in_FS_OFFSET;
  bool bVar31;
  
  pcVar19 = lbuf._8_8_ + 1;
  *lbuf._8_8_ = param_1;
  lVar11 = lbuf._0_8_;
  pcVar10 = lbuf._8_8_;
  lbuf._8_8_ = pcVar19;
  if (param_1 == '\n') {
    if (line_buffered_7443 == -1) {
      line_buffered_7443 = func_0x00101660(0);
    }
    if (line_buffered_7443 != 0) {
      while( true ) {
        *(undefined **)((undefined *)register0x00000020 + -8) = unaff_RBX;
        pcVar10 = lbuf._8_8_ + -lbuf._0_8_;
        *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x10245f;
        pcVar19 = (char *)full_write(1,lbuf._0_8_,pcVar10);
        if (pcVar19 == pcVar10) {
          lbuf._8_8_ = (char *)lbuf._0_8_;
          return (char *)lbuf._0_8_;
        }
        *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x102487;
        uVar7 = func_0x001016c0(0,&UNK_0010b431,5);
        *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x10248f;
        puVar8 = (uint *)func_0x00101610();
        uVar26 = (ulong)*puVar8;
        puVar21 = (ulong *)0x1;
        *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x1024a7;
        func_0x001018b0(1,uVar26,&UNK_0010e94c,uVar7);
        if (uVar26 == 0) break;
        if (puVar21[1] == 0) {
          *puVar21 = extraout_RDX;
          puVar21[1] = uVar26;
          return (char *)extraout_RDX;
        }
        puVar13 = __PRETTY_FUNCTION___7027;
        puVar20 = &UNK_0010b424;
        puVar22 = (undefined8 *)&UNK_0010b43d;
        *(undefined8 *)((undefined *)register0x00000020 + -0x18) = 0x102500;
        func_0x00101750(&UNK_0010b43d,&UNK_0010b424,0x235);
        if (((ulong)in_R8 & 1) != 0) {
          pcVar19 = extraout_RDX_00;
          if (((ulong)extraout_RDX_00 | (ulong)puVar20) == 0) {
            *(undefined1 **)puVar22 = puVar13;
            return in_R8;
          }
          while (((ulong)pcVar19 & 1) == 0) {
            pcVar19 = (char *)((ulong)pcVar19 >> 1 | (long)puVar20 << 0x3f);
            puVar20 = (undefined *)((ulong)puVar20 >> 1);
          }
          while (((ulong)puVar20 | (ulong)puVar13) != 0) {
            while ((puVar20 <= puVar13 && ((pcVar19 <= in_R8 || (puVar20 != puVar13))))) {
              if ((puVar13 <= puVar20) && ((in_R8 <= pcVar19 || (puVar20 != puVar13)))) {
                *(undefined **)puVar22 = puVar20;
                return pcVar19;
              }
              bVar31 = in_R8 < pcVar19;
              in_R8 = in_R8 + -(long)pcVar19;
              puVar23 = puVar13 + (-(ulong)bVar31 - (long)puVar20);
              do {
                uVar26 = (ulong)in_R8 >> 1;
                puVar13 = (undefined1 *)((ulong)puVar23 >> 1);
                in_R8 = (char *)(uVar26 | (long)puVar23 << 0x3f);
                puVar23 = puVar13;
              } while ((uVar26 & 1) == 0);
              if (((ulong)puVar20 | (ulong)puVar13) == 0) goto code_r0x00102586;
            }
            bVar31 = pcVar19 < in_R8;
            pcVar19 = pcVar19 + -(long)in_R8;
            puVar23 = puVar20 + (-(ulong)bVar31 - (long)puVar13);
            do {
              uVar26 = (ulong)pcVar19 >> 1;
              puVar20 = (undefined *)((ulong)puVar23 >> 1);
              pcVar19 = (char *)(uVar26 | (long)puVar23 << 0x3f);
              puVar23 = puVar20;
            } while ((uVar26 & 1) == 0);
          }
code_r0x00102586:
          *puVar22 = 0;
          pcVar10 = pcVar19;
          if (((ulong)pcVar19 & 1) != 0) {
            pcVar10 = in_R8;
            in_R8 = pcVar19;
          }
          uVar26 = (ulong)in_R8 >> 1;
          if (pcVar10 == (char *)0x0) {
            return in_R8;
          }
          while( true ) {
            do {
              pcVar19 = pcVar10;
              pcVar10 = (char *)((ulong)pcVar19 >> 1);
            } while (((ulong)pcVar19 & 1) == 0);
            pcVar10 = (char *)((ulong)pcVar19 >> 1) + -uVar26;
            if (pcVar10 == (char *)0x0) break;
            uVar18 = (long)pcVar10 >> 0x3f;
            uVar26 = uVar26 + ((ulong)pcVar10 & uVar18);
            pcVar10 = (char *)(((ulong)pcVar10 ^ uVar18) - uVar18);
          }
          return (char *)((ulong)pcVar19 | 1);
        }
        puVar13 = __PRETTY_FUNCTION___6996;
        puVar20 = &UNK_0010b424;
        puVar22 = (undefined8 *)&UNK_0010b455;
        *(undefined8 *)((undefined *)register0x00000020 + -0x20) = 0x102601;
        func_0x00101750(&UNK_0010b455,&UNK_0010b424,0x1e3);
        if (puVar13 != (undefined1 *)0x0) {
          if (puVar20 != (undefined *)0x0) {
            lVar11 = 0x3f;
            uVar29 = 0x3f;
            if (puVar13 != (undefined1 *)0x0) {
              while (uVar29 = (uint)lVar11, (ulong)puVar13 >> lVar11 == 0) {
                lVar11 = lVar11 + -1;
              }
            }
            lVar11 = 0x3f;
            uVar27 = 0x3f;
            if (puVar20 != (undefined *)0x0) {
              while (uVar27 = (uint)lVar11, (ulong)puVar20 >> lVar11 == 0) {
                lVar11 = lVar11 + -1;
              }
            }
            iVar28 = (uVar29 ^ 0x3f) - (uVar27 ^ 0x3f);
            bVar12 = (byte)iVar28;
            puVar23 = (undefined *)
                      ((ulong)in_R8 >> (0x40 - bVar12 & 0x3f) | (long)puVar13 << (bVar12 & 0x3f));
            uVar18 = (long)in_R8 << (bVar12 & 0x3f);
            uVar26 = extraout_RDX_01;
            if (0 < iVar28) {
              iVar17 = 0;
              do {
                if ((puVar23 < puVar20) || ((puVar23 == puVar20 && (uVar18 <= uVar26)))) {
                  bVar31 = uVar26 < uVar18;
                  uVar26 = uVar26 - uVar18;
                  puVar20 = puVar20 + (-(ulong)bVar31 - (long)puVar23);
                }
                iVar17 = iVar17 + 1;
                uVar14 = (long)puVar23 << 0x3f;
                puVar23 = (undefined *)((ulong)puVar23 >> 1);
                uVar18 = uVar18 >> 1 | uVar14;
              } while (iVar28 != iVar17);
            }
            *(undefined **)puVar22 = puVar20;
            return (char *)uVar26;
          }
          *puVar22 = 0;
          return (char *)extraout_RDX_01;
        }
        puVar20 = &UNK_0010b424;
        puVar23 = &UNK_0010b45c;
        *(undefined8 *)((undefined *)register0x00000020 + -0x28) = 0x1026bb;
        func_0x00101750(&UNK_0010b45c,&UNK_0010b424,0x1a3,&__PRETTY_FUNCTION___6970);
        if (puVar23 == (undefined *)0x0) {
          puVar23 = (undefined *)0x0;
        }
        else {
          iVar28 = 0x40;
          lVar11 = 0;
          uVar26 = ((ulong)puVar23 >> 9) / 0x1dcd65;
          puVar23 = puVar23 + uVar26 * -1000000000;
          puVar9 = (undefined *)0x0;
          puVar15 = (undefined *)0x3b9aca00;
          do {
            puVar16 = (undefined *)((ulong)puVar15 >> 1);
            lVar11 = lVar11 * 2;
            puVar9 = (undefined *)((ulong)puVar9 >> 1 | (long)puVar15 << 0x3f);
            if ((puVar16 < puVar23) || ((puVar16 == puVar23 && (puVar9 <= puVar20)))) {
              lVar11 = lVar11 + 1;
              bVar31 = puVar20 < puVar9;
              puVar20 = puVar20 + -(long)puVar9;
              puVar23 = puVar23 + (-(ulong)bVar31 - (long)puVar16);
            }
            iVar28 = iVar28 + -1;
            puVar15 = puVar16;
          } while (iVar28 != 0);
          *(undefined **)((undefined *)register0x00000020 + -0x30) = puVar20;
          *(undefined8 *)((undefined *)register0x00000020 + -0x40) = 0x10274c;
          print_uintmaxes(uVar26,lVar11);
          puVar20 = *(undefined **)((undefined *)register0x00000020 + -0x30);
          puVar23 = (undefined *)0x9;
        }
        *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
        *(undefined8 *)((undefined *)register0x00000020 + -0x30) = uVar7;
        *(undefined8 *)((undefined *)register0x00000020 + -0x40) =
             *(undefined8 *)(in_FS_OFFSET + 0x28);
        *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x1023c4;
        lVar11 = umaxtostr(puVar20,(undefined *)register0x00000020 + -0x58);
        pcVar19 = lbuf._8_8_;
        unaff_RBX = (undefined *)register0x00000020 + (-0x44 - lVar11);
        if (unaff_RBX < puVar23) {
          lVar3 = (long)puVar23 + (long)lbuf._8_8_;
          pcVar10 = lbuf._8_8_;
          do {
            *pcVar10 = '0';
            pcVar10 = pcVar10 + 1;
          } while (pcVar10 != (char *)(lVar3 - (long)unaff_RBX));
          puVar23 = puVar23 + -(long)unaff_RBX;
          pcVar19 = pcVar19 + (long)puVar23;
        }
        *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x10240e;
        lVar11 = func_0x001017d0(pcVar19,lVar11,unaff_RBX);
        in_R8 = unaff_RBX + lVar11;
        if (*(long *)((undefined *)register0x00000020 + -0x40) == *(long *)(in_FS_OFFSET + 0x28)) {
          lbuf._8_8_ = in_R8;
          return (char *)0x0;
        }
        *(undefined8 *)((undefined *)register0x00000020 + -0x60) = 0x102437;
        lbuf._8_8_ = in_R8;
        func_0x001016f0();
        register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x58);
        unaff_RBP = puVar23;
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
      *(undefined8 *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
      puVar1 = puVar21 + 2;
      bVar12 = *(byte *)((long)puVar21 + 0xfa);
      *(undefined8 *)((undefined *)register0x00000020 + -0x20) = unaff_R12;
      *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) = uVar7;
      puVar2 = puVar21 + 0x1c;
      uVar29 = (uint)bVar12 - 1;
      uVar26 = extraout_RDX;
      puVar24 = puVar2;
      puVar30 = puVar1;
      if (uVar29 != 0xffffffff) {
        uVar14 = SEXT48((int)uVar29);
        uVar26 = uVar14 * 8;
        uVar18 = puVar21[uVar14 + 2];
        if (extraout_RDX < uVar18) {
          uVar26 = uVar14 - 1;
          uVar6 = uVar26;
          uVar27 = uVar29;
          do {
            uVar25 = uVar6;
            uVar27 = uVar27 - 1;
            uVar5 = uVar26;
            if ((uVar14 - uVar29) - 1 == uVar25) {
              uVar27 = 0xffffffff;
              goto code_r0x00101e00;
            }
            bVar31 = puVar21[uVar25 + 2] == extraout_RDX;
            uVar6 = uVar25 - 1;
          } while (extraout_RDX <= puVar21[uVar25 + 2] && !bVar31);
          if (bVar31) {
code_r0x00101e55:
            *(char *)((long)puVar2 + uVar25) = *(char *)((long)puVar2 + uVar25) + '\x01';
            return (char *)uVar26;
          }
          puVar30 = puVar1 + uVar25 + 1;
          puVar24 = (ulong *)(uVar25 + 1 + (long)puVar2);
          if ((int)uVar27 < (int)uVar29) {
code_r0x00101e00:
            while( true ) {
              uVar26 = uVar5;
              puVar21[uVar14 + 3] = uVar18;
              *(undefined *)((long)puVar21 + uVar14 + 0xe1) = *(undefined *)((long)puVar2 + uVar14);
              if ((int)uVar26 <= (int)uVar27) break;
              uVar18 = puVar1[uVar26];
              uVar5 = uVar26 - 1;
              uVar14 = uVar26;
            }
          }
        }
        else {
          uVar25 = uVar14;
          if (extraout_RDX == uVar18) goto code_r0x00101e55;
          puVar24 = (ulong *)((long)puVar21 + uVar14 + 0xe1);
          puVar30 = puVar21 + uVar14 + 3;
        }
      }
      *puVar30 = extraout_RDX;
      *(undefined *)puVar24 = 1;
      *(char *)((long)puVar21 + 0xfa) = bVar12 + 1;
      return (char *)uVar26;
    }
    pcVar10 = pcVar19 + -lVar11;
    if ((char *)0x1ff < pcVar10) {
      cVar4 = *(char *)(lVar11 + 0x1ff);
      lVar3 = lVar11 + 0x200;
      lVar11 = lVar11 + 0x1ff;
      while (cVar4 != '\n') {
        cVar4 = *(char *)(lVar11 + -1);
        lVar3 = lVar11;
        lVar11 = lVar11 + -1;
      }
      lbuf._8_8_ = (char *)lVar3;
      lbuf_flush();
      lVar11 = func_0x001017d0(lbuf._0_8_,lVar3,pcVar19 + -lVar3,lbuf._0_8_);
      lbuf._8_8_ = pcVar19 + -lVar3 + lVar11;
      return (char *)lVar11;
    }
  }
  return pcVar10;
}

