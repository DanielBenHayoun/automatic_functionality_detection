
long * get_spec_stats(long *param_1)

{
  char **ppcVar1;
  char *pcVar2;
  char **ppcVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  char **ppcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 *puVar19;
  uint uVar20;
  byte *pbVar21;
  long lVar22;
  byte *extraout_RDX;
  ulong unaff_RBX;
  char **ppcVar23;
  char **ppcVar24;
  long lVar25;
  ulong uVar26;
  char **ppcVar27;
  byte *pbVar28;
  undefined *puVar29;
  byte bVar30;
  uint uVar31;
  undefined *puVar32;
  long lVar33;
  ulong unaff_R13;
  char **ppcVar34;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar35;
  ulong uStack376;
  long lStack288;
  char *pcStack280;
  long lStack272;
  long lStack264;
  char **ppcStack256;
  long lStack248;
  long lStack232;
  ulong uStack224;
  long lStack216;
  ulong uStack208;
  long *plStack200;
  undefined *puStack192;
  byte *pbStack176;
  undefined1 *puStack168;
  undefined *puStack160;
  undefined8 uStack152;
  uint *puStack144;
  undefined *puStack136;
  undefined *puStack128;
  undefined *puStack120;
  ulong uStack112;
  uint *puStack104;
  undefined *puStack96;
  ulong uStack88;
  undefined *puStack80;
  long *plStack64;
  
  uVar13 = 0;
  param_1[4] = 0;
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)((long)param_1 + 0x32) = 0;
  *(undefined *)((long)param_1 + 0x31) = 0;
  puStack104 = *(uint **)(*param_1 + 8);
  plStack64 = param_1;
  if (puStack104 != (uint *)0x0) {
    puVar32 = &UNK_00107290;
    do {
      if (4 < *puStack104) {
        puStack80 = &UNK_00102d65;
        func_0x00101600();
code_r0x00102d65:
        puStack80 = &UNK_00102d84;
        func_0x00101720(&UNK_00107388,&UNK_00107021,0x4ee,__PRETTY_FUNCTION___7281);
code_r0x00102d84:
        puStack80 = &UNK_00102d97;
        uVar10 = func_0x00101690(0,&UNK_0010702a,5);
        puVar19 = (undefined4 *)0x0;
        plStack200 = (long *)0x1;
        puStack80 = &UNK_00102da8;
        func_0x00101850(1,0,uVar10);
        puStack96 = &UNK_00107290;
        lVar12 = plStack200[2];
        goto code_r0x00102dcd;
      }
      switch(*puStack104) {
      case 0:
        unaff_RBX = 1;
        break;
      case 1:
        if (*(byte *)((long)puStack104 + 0x11) < *(byte *)(puStack104 + 4)) goto code_r0x00102d65;
        unaff_RBX = SEXT48((int)(((uint)*(byte *)((long)puStack104 + 0x11) -
                                 (uint)*(byte *)(puStack104 + 4)) + 1));
        break;
      case 2:
        uVar7 = puStack104[4];
        unaff_R15 = (ulong)uVar7;
        unaff_R13 = 0;
        unaff_RBX = 0;
        *(undefined *)((long)plStack64 + 0x31) = 1;
        do {
          puStack80 = &UNK_00102cdb;
          cVar4 = is_char_class_member(unaff_R15,unaff_R13);
          unaff_RBX = (unaff_RBX + 1) - (ulong)(cVar4 == '\0');
          uVar20 = (int)unaff_R13 + 1;
          unaff_R13 = (ulong)uVar20;
        } while (uVar20 != 0x100);
        if ((uVar7 != 6) && (uVar7 != 10)) {
          *(undefined *)((long)plStack64 + 0x32) = 1;
        }
        break;
      case 3:
        uVar9 = 0;
        unaff_RBX = 0;
        do {
          cVar4 = (char)uVar9;
          uVar7 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar7;
          unaff_RBX = unaff_RBX + (*(char *)(puStack104 + 4) == cVar4);
        } while (uVar7 != 0x100);
        *(undefined *)(plStack64 + 6) = 1;
        break;
      case 4:
        unaff_RBX = *(ulong *)(puStack104 + 6);
        if (unaff_RBX != 0) break;
        *(uint **)(plStack64 + 5) = puStack104;
        plStack64[4] = plStack64[4] + 1;
        goto code_r0x00102c93;
      }
      bVar35 = CARRY8(unaff_RBX,uVar13);
      unaff_RBX = unaff_RBX + uVar13;
      uVar13 = unaff_RBX;
      if ((bVar35) || (unaff_RBX == 0xffffffffffffffff)) goto code_r0x00102d84;
code_r0x00102c93:
      puStack104 = *(uint **)(puStack104 + 2);
    } while (puStack104 != (uint *)0x0);
  }
  plStack64[3] = uVar13;
  return plStack64;
code_r0x00102dcd:
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = 2;
  }
  if (lVar12 == -2) {
    puStack144 = *(uint **)(*plStack200 + 8);
    plStack200[2] = -1;
    *(uint **)(plStack200 + 1) = puStack144;
  }
  else {
    puStack144 = (uint *)plStack200[1];
  }
  if (puStack144 == (uint *)0x0) {
    return (long *)0xffffffff;
  }
  uStack112 = unaff_RBX;
  uStack88 = unaff_R13;
  puStack80 = (undefined *)uVar13;
  if (4 < *puStack144) {
    puStack120 = &UNK_00102fe3;
    func_0x00101600();
    uVar13 = unaff_RBX;
    goto code_r0x00102fe3;
  }
  switch(*puStack144) {
  default:
    lVar12 = *(long *)(puStack144 + 2);
    bVar5 = *(byte *)(puStack144 + 4);
    plStack200[2] = -1;
    plStack200[1] = lVar12;
    return (long *)(ulong)bVar5;
  case 1:
    if (plStack200[2] == -1) {
      uVar13 = (ulong)*(byte *)(puStack144 + 4);
      plStack200[2] = uVar13;
    }
    else {
      uVar13 = plStack200[2] + 1;
      plStack200[2] = uVar13;
    }
    uVar9 = uVar13 & 0xffffffff;
    if ((ulong)*(byte *)((long)puStack144 + 0x11) != uVar13) {
      return (long *)uVar9;
    }
    goto code_r0x00102f02;
  case 2:
    uVar7 = puStack144[4];
    puVar32 = (undefined *)(ulong)uVar7;
    if (puVar19 != (undefined4 *)0x0) {
      if (uVar7 == 6) {
        *puVar19 = 0;
      }
      else {
        if (uVar7 == 10) {
          *puVar19 = 1;
        }
      }
    }
    uVar13 = plStack200[2];
    if (uVar13 != 0xffffffffffffffff) goto code_r0x00102e85;
    uVar20 = 0;
    goto code_r0x00102f4b;
  case 4:
    break;
  }
  lVar12 = *(long *)(puStack144 + 6);
  if (lVar12 != 0) goto code_r0x00102fb2;
  lVar12 = *(long *)(puStack144 + 2);
  plStack200[2] = -1;
  plStack200[1] = lVar12;
  lVar12 = -1;
  goto code_r0x00102dcd;
code_r0x00102f4b:
  puStack120 = &UNK_00102f55;
  cVar4 = is_char_class_member((ulong)uVar7,(ulong)uVar20);
  if (cVar4 != '\0') {
    uVar13 = SEXT48((int)uVar20);
    plStack200[2] = uVar13;
code_r0x00102e85:
    puStack120 = &UNK_00102e90;
    cVar4 = is_char_class_member((ulong)uVar7,uVar13 & 0xff);
    if (cVar4 != '\0') {
      uVar9 = uVar13 & 0xffffffff;
      uVar20 = (int)uVar13 + 1;
      if ((int)uVar20 < 0x100) {
        do {
          puStack120 = &UNK_00102ec6;
          cVar4 = is_char_class_member((ulong)uVar7,(ulong)uVar20 & 0xff);
          if (cVar4 != '\0') {
            plStack200[2] = (long)(int)uVar20;
            return (long *)uVar9;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != 0x100);
      }
      goto code_r0x00102f02;
    }
code_r0x00102fe3:
    puStack120 = &UNK_00103002;
    func_0x00101720(&UNK_001073b8,&UNK_00107021,0x437);
    puStack128 = &UNK_00103024;
    puStack120 = (undefined *)uVar13;
    uStack152 = func_0x00101690(0,&UNK_00107051,5);
    puStack128 = &UNK_0010302c;
    puVar11 = (uint *)func_0x00101610();
    uVar13 = (ulong)*puVar11;
    uVar10 = 1;
    puStack128 = &UNK_0010303d;
    func_0x00101850(1,uVar13,uStack152);
    lStack216 = 0;
    puStack136 = &UNK_00103051;
    lVar12 = safe_read(0,uVar10,uVar13);
    if (lVar12 != -1) {
      return (long *)lVar12;
    }
    puStack136 = &UNK_00103061;
    plain_read_part_5();
    puStack136 = puVar32;
    while( true ) {
      pbStack176 = (byte *)0x0;
      puStack160 = &UNK_00103095;
      lVar12 = lStack216;
      uVar13 = safe_read(0,lStack216,uVar10);
      if (uVar13 == 0xffffffffffffffff) break;
      if (uVar13 == 0) {
        return (long *)0;
      }
      uVar9 = 0;
      do {
        uVar26 = uVar9;
        uVar9 = uVar26 + 1;
        if (in_delete_set[*(byte *)(lStack216 + uVar26)] != '\0') {
          if (uVar9 < uVar13) goto code_r0x001030b7;
          goto code_r0x001030db;
        }
      } while (uVar13 != uVar9);
      uVar9 = uVar26 + 2;
      uVar26 = uVar13;
      if (uVar13 <= uVar9) {
        return (long *)uVar13;
      }
code_r0x001030b7:
      pbVar21 = (byte *)(uVar9 + lStack216);
      do {
        if (in_delete_set[*pbVar21] == '\0') {
          *(byte *)(lStack216 + uVar26) = *pbVar21;
          uVar26 = uVar26 + 1;
        }
        pbVar21 = pbVar21 + 1;
      } while ((byte *)(uVar13 + lStack216) != pbVar21);
code_r0x001030db:
      if (uVar26 != 0) {
        return (long *)uVar26;
      }
    }
    puStack160 = &UNK_00103116;
    plain_read_part_5();
    lStack232 = 0;
    puStack168 = &UNK_00103131;
    pbVar21 = pbStack176;
    puStack160 = (undefined *)uVar10;
    lVar12 = safe_read(0,pbStack176,lVar12);
    if (lVar12 != -1) {
      pbVar21 = pbStack176 + lVar12;
      if (lVar12 != 0) {
        do {
          pbVar28 = pbStack176 + 1;
          *pbStack176 = xlate[*pbStack176];
          pbStack176 = pbVar28;
        } while (pbVar21 != pbVar28);
      }
      return (long *)lVar12;
    }
    puStack168 = &UNK_0010316a;
    plain_read_part_5();
    puStack168 = in_delete_set;
    uStack224 = (ulong)pbVar21 & 0xffffffff;
    puStack192 = &UNK_00103185;
    puVar19 = (undefined4 *)xmalloc(0x20);
    lVar12 = *(long *)(lStack232 + 8);
    *(undefined8 *)(puVar19 + 2) = 0;
    *puVar19 = 0;
    *(char *)(puVar19 + 4) = (char)uStack224;
    if (lVar12 != 0) {
      *(undefined4 **)(lVar12 + 8) = puVar19;
      *(undefined4 **)(lStack232 + 8) = puVar19;
      return (long *)puVar19;
    }
    puVar32 = &UNK_00107021;
    pbVar21 = &UNK_0010705c;
    puStack192 = &UNK_001031ce;
    func_0x00101720(&UNK_0010705c,&UNK_00107021,0x287);
    lStack248 = *(long *)(in_FS_OFFSET + 0x28);
    uStack208 = unaff_R13;
    puStack192 = (undefined *)unaff_R15;
    uVar10 = func_0x001016b0();
    lVar14 = xmalloc(uVar10);
    ppcVar27 = (char **)0x1;
    lStack272 = lVar14;
    lVar12 = xcalloc(uVar10);
    bVar5 = *pbVar21;
    lStack264 = lVar12;
    if (bVar5 == 0) goto code_r0x001039e7;
    ppcVar23 = (char **)0x0;
    ppcVar34 = (char **)0x0;
    do {
      iVar8 = (int)ppcVar23;
      ppcVar23 = (char **)(ulong)(iVar8 + 1);
      ppcStack256 = (char **)(ulong)((int)ppcVar34 + 1);
      bVar30 = pbVar21[(long)ppcVar23];
      ppcVar27 = ppcVar23;
      if (bVar5 == 0x5c) {
        *(undefined *)(lVar12 + (long)ppcVar34) = 1;
        if (bVar30 == 0x62) {
          bVar30 = 8;
          uVar7 = iVar8 + 2;
        }
        else {
          if ((char)bVar30 < 'c') {
            if ((char)bVar30 < '8') {
              if ((char)bVar30 < '0') {
                if (bVar30 == 0) {
                  uVar10 = func_0x00101690(0,&UNK_00107458,5);
                  ppcVar27 = (char **)0x0;
                  func_0x00101850(0,0,uVar10);
                  uVar7 = iVar8 + 1;
                  *(undefined *)(lVar12 + (long)ppcVar34) = 0;
                  bVar30 = 0x5c;
                }
                else {
code_r0x0010391d:
                  uVar7 = iVar8 + 2;
                }
              }
              else {
                uVar7 = iVar8 + 2;
                uVar20 = (uint)bVar30;
                bVar30 = (byte)(uVar20 - 0x30);
                if ((int)(char)pbVar21[uVar7] - 0x30U < 8) {
                  uVar31 = ((int)(char)pbVar21[uVar7] - 0x30U) + (uVar20 - 0x30) * 8;
                  bVar30 = (byte)uVar31;
                  uVar7 = iVar8 + 3;
                  uVar20 = (int)(char)pbVar21[iVar8 + 3] - 0x30;
                  if (uVar20 < 8) {
                    if ((int)(uVar20 + (uVar31 & 0xff) * 8) < 0x100) {
                      bVar30 = (char)uVar20 + bVar30 * '\b';
                      uVar7 = iVar8 + 4;
                    }
                    else {
                      uVar10 = func_0x00101690(0,&UNK_001073f0,5);
                      ppcVar27 = (char **)0x0;
                      func_0x00101850(0,0,uVar10);
                      uVar7 = iVar8 + 3;
                    }
                  }
                }
              }
            }
            else {
              if (bVar30 == 0x5c) {
                bVar30 = 0x5c;
                uVar7 = iVar8 + 2;
              }
              else {
                if (bVar30 != 0x61) goto code_r0x0010391d;
                bVar30 = 7;
                uVar7 = iVar8 + 2;
              }
            }
          }
          else {
            if (bVar30 == 0x72) {
              bVar30 = 0xd;
              uVar7 = iVar8 + 2;
            }
            else {
              if ((char)bVar30 < 's') {
                if (bVar30 == 0x66) {
                  bVar30 = 0xc;
                  uVar7 = iVar8 + 2;
                }
                else {
                  if (bVar30 != 0x6e) goto code_r0x0010391d;
                  bVar30 = 10;
                  uVar7 = iVar8 + 2;
                }
              }
              else {
                if (bVar30 == 0x74) {
                  bVar30 = 9;
                  uVar7 = iVar8 + 2;
                }
                else {
                  if (bVar30 != 0x76) goto code_r0x0010391d;
                  bVar30 = 0xb;
                  uVar7 = iVar8 + 2;
                }
              }
            }
          }
        }
        ppcVar23 = (char **)(ulong)uVar7;
        *(byte *)(lVar14 + (long)ppcVar34) = bVar30;
        bVar5 = pbVar21[(long)ppcVar23];
      }
      else {
        *(byte *)(lVar14 + (long)ppcVar34) = bVar5;
        bVar5 = bVar30;
      }
      ppcVar34 = ppcStack256;
      if (bVar5 == 0) {
        do {
          ppcVar34 = (char **)0x0;
          lVar22 = lVar14;
          ppcVar23 = ppcStack256;
code_r0x001032e8:
          ppcVar3 = (char **)((long)ppcVar34 + 2);
joined_r0x001032ef:
          if (ppcVar23 <= ppcVar3) {
            if (ppcVar34 < ppcVar23) {
              pbVar21 = (byte *)((long)ppcVar34 + lVar14);
              do {
                bVar5 = *pbVar21;
                pbVar21 = pbVar21 + 1;
                append_normal_char(puVar32,(ulong)bVar5);
              } while ((byte *)(lVar14 + (long)ppcVar23) != pbVar21);
            }
            uStack376 = 1;
            goto code_r0x00103635;
          }
          ppcVar1 = (char **)((long)ppcVar34 + 1);
          cVar4 = *(char *)(lVar22 + 1 + (long)ppcVar34);
          if ((*(char *)(lVar22 + (long)ppcVar34) != '[') ||
             (uStack376 = (ulong)*(byte *)(lVar12 + (long)ppcVar34),
             *(byte *)(lVar12 + (long)ppcVar34) != 0)) goto code_r0x00103302;
          if (((cVar4 != ':') && (cVar4 != '=')) || (*(char *)(lVar12 + (long)ppcVar1) != '\0'))
          goto code_r0x00103391;
          bVar5 = *(byte *)(lVar14 + (long)ppcVar1);
          ppcVar27 = (char **)(ulong)bVar5;
          ppcVar24 = ppcVar3;
          do {
            ppcVar15 = ppcVar24;
            if ((char **)((long)ppcVar23 + -1) <= ppcVar15) goto code_r0x00103391;
            ppcVar24 = (char **)((long)ppcVar15 + 1);
          } while ((((bVar5 != *(byte *)(lVar22 + (long)ppcVar15)) ||
                    (*(char *)(lVar22 + 1 + (long)ppcVar15) != ']')) ||
                   (*(char *)(lVar12 + -1 + (long)ppcVar24) != '\0')) ||
                  (*(char *)(lVar12 + (long)ppcVar24) != '\0'));
          puVar29 = (undefined *)(lVar14 + (long)ppcVar3);
          lVar25 = (-2 - (long)ppcVar34) + (long)ppcVar15;
          if (lVar25 == 0) {
            if (bVar5 == 0x3a) {
              puVar32 = &UNK_001074a0;
            }
            else {
              puVar32 = &UNK_001074c8;
            }
            uVar10 = func_0x00101690(0,puVar32,5);
            func_0x00101850(0,0,uVar10);
            goto code_r0x00103635;
          }
          if (bVar5 == 0x3a) {
            lVar33 = 0;
            do {
              ppcVar24 = *(char ***)(char_class_name + lVar33 * 8);
              ppcVar27 = ppcVar24;
              iVar8 = func_0x00101620(puVar29,ppcVar24,lVar25);
              if ((iVar8 == 0) && (lVar18 = func_0x001016b0(ppcVar24), lVar25 == lVar18)) {
                puVar19 = (undefined4 *)xmalloc(0x20);
                *(undefined8 *)(puVar19 + 2) = 0;
                *puVar19 = 2;
                lVar22 = *(long *)(puVar32 + 8);
                puVar19[4] = (int)lVar33;
                if (lVar22 == 0) goto code_r0x00103aad;
                goto code_r0x00103981;
              }
              lVar33 = lVar33 + 1;
            } while (lVar33 != 0xc);
            ppcVar27 = ppcVar3;
            cVar6 = star_digits_closebracket(&lStack272);
            if (cVar6 != '\0') goto code_r0x00103391;
            uVar10 = make_printable_str(puVar29,lVar25);
            uVar16 = quote(uVar10);
            puVar32 = &UNK_00107067;
code_r0x00103794:
            uVar17 = func_0x00101690(0,puVar32,5);
code_r0x0010379e:
            func_0x00101850(0,0,uVar17,uVar16);
            func_0x001015f0(uVar10);
            goto code_r0x00103635;
          }
          if (lVar25 != 1) {
            ppcVar27 = ppcVar3;
            cVar6 = star_digits_closebracket(&lStack272);
            if (cVar6 == '\0') {
              uVar16 = make_printable_str(puVar29,lVar25);
              uVar17 = func_0x00101690(0,&UNK_001074f8,5);
              uVar10 = uVar16;
              goto code_r0x0010379e;
            }
code_r0x00103391:
            if (((*(char *)(lVar22 + (long)ppcVar3) == '*') &&
                (*(char *)(lVar12 + (long)ppcVar3) == '\0')) &&
               ((ppcVar24 = (char **)((long)ppcVar34 + 3), ppcVar24 < ppcVar23 &&
                (*(char *)(lVar12 + 3 + (long)ppcVar34) == '\0')))) {
              pcVar2 = (char *)(lVar22 + (long)ppcVar24);
              cVar6 = *pcVar2;
              if (cVar6 != ']') {
                while ((ppcVar15 = ppcVar24, ppcVar24 = (char **)((long)ppcVar15 + 1),
                       ppcVar24 < ppcVar23 && (*(char *)(lVar12 + 1 + (long)ppcVar15) == '\0'))) {
                  if (*(char *)(lVar22 + (long)ppcVar24) == ']') {
                    lVar25 = ~(ulong)ppcVar1 + (long)ppcVar15;
                    if (lVar25 == 0) goto code_r0x00103407;
                    ppcVar27 = &pcStack280;
                    iVar8 = xstrtoumax(pcVar2,&pcStack280,
                                       (ulong)((uint)(cVar6 != '0') + 8 + (uint)(cVar6 != '0')),
                                       &lStack288);
                    if (((iVar8 == 0) && (lStack288 != -1)) && (pcStack280 == pcVar2 + lVar25))
                    goto code_r0x00103410;
                    uVar10 = make_printable_str(pcVar2,lVar25);
                    uVar16 = quote(uVar10);
                    puVar32 = &UNK_00107538;
                    goto code_r0x00103794;
                  }
                }
                goto code_r0x00103302;
              }
code_r0x00103407:
              lStack288 = 0;
code_r0x00103410:
              lVar12 = lStack288;
              puVar19 = (undefined4 *)xmalloc(0x20);
              cVar6 = (char)ppcVar27;
              *(undefined8 *)(puVar19 + 2) = 0;
              *puVar19 = 4;
              *(long *)(puVar19 + 6) = lVar12;
              lVar12 = *(long *)(puVar32 + 8);
              *(char *)(puVar19 + 4) = cVar4;
              if (lVar12 == 0) goto code_r0x00103acc;
              ppcVar34 = (char **)((long)ppcVar24 + 1);
              *(undefined4 **)(lVar12 + 8) = puVar19;
              *(undefined4 **)(puVar32 + 8) = puVar19;
              lVar22 = lStack272;
              lVar12 = lStack264;
              ppcVar23 = ppcStack256;
              goto code_r0x001032e8;
            }
code_r0x00103302:
            bVar5 = *(byte *)(lVar14 + (long)ppcVar34);
            ppcVar27 = (char **)(ulong)bVar5;
            if ((cVar4 == '-') &&
               (uStack376 = (ulong)*(byte *)(lVar12 + (long)ppcVar1),
               *(byte *)(lVar12 + (long)ppcVar1) == 0)) goto code_r0x00103491;
            append_normal_char();
            ppcVar3 = (char **)((long)ppcVar34 + 3);
            ppcVar34 = ppcVar1;
            goto joined_r0x001032ef;
          }
          puVar19 = (undefined4 *)xmalloc(0x20);
          *(undefined8 *)(puVar19 + 2) = 0;
          *puVar19 = 3;
          *(undefined *)(puVar19 + 4) = *puVar29;
          lVar22 = *(long *)(puVar32 + 8);
          if (lVar22 != 0) {
code_r0x00103981:
            *(undefined4 **)(lVar22 + 8) = puVar19;
            ppcVar34 = (char **)((long)ppcVar15 + 2);
            *(undefined4 **)(puVar32 + 8) = puVar19;
            lVar22 = lStack272;
            lVar12 = lStack264;
            ppcVar23 = ppcStack256;
            goto code_r0x001032e8;
          }
          ppcVar27 = (char **)&UNK_00107021;
          func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2e5,__PRETTY_FUNCTION___7150);
code_r0x001039e7:
          ppcStack256 = (char **)0x0;
        } while( true );
      }
    } while( true );
  }
  uVar20 = uVar20 + 1;
  if (uVar20 == 0x100) {
    puStack120 = &UNK_00102fb2;
    lVar12 = func_0x00101720(&UNK_00107045,&UNK_00107021,0x434,__PRETTY_FUNCTION___7229);
code_r0x00102fb2:
    uVar9 = (ulong)*(byte *)(puStack144 + 4);
    lVar14 = plStack200[2] + 1;
    if (plStack200[2] == -1) {
      lVar14 = 1;
    }
    plStack200[2] = lVar14;
    if (lVar12 != lVar14) {
      return (long *)uVar9;
    }
code_r0x00102f02:
    lVar12 = *(long *)(puStack144 + 2);
    plStack200[2] = -1;
    plStack200[1] = lVar12;
    return (long *)uVar9;
  }
  goto code_r0x00102f4b;
code_r0x00103491:
  bVar30 = *(byte *)(lVar14 + (long)ppcVar3);
  if (bVar30 < bVar5) {
    uVar10 = make_printable_char((ulong)bVar5);
    uVar16 = make_printable_char((ulong)bVar30);
    uVar17 = func_0x00101690(0,&UNK_00107568,5);
    func_0x00101850(0,0,uVar17,uVar10,uVar16);
    func_0x001015f0(uVar10);
    func_0x001015f0(uVar16);
code_r0x00103635:
    func_0x001015f0(lVar22);
    func_0x001015f0(lVar12);
    if (lStack248 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (long *)uStack376;
    }
code_r0x00103aa8:
    func_0x001016c0();
code_r0x00103aad:
    cVar6 = '!';
    puVar32 = &UNK_0010705c;
    func_0x00101720(&UNK_0010705c,&UNK_00107021,699,__PRETTY_FUNCTION___7136);
code_r0x00103acc:
    append_repeated_char_part_8();
    *(undefined8 *)(puVar32 + 0x10) = 0xfffffffffffffffe;
    while( true ) {
      pbVar21 = (byte *)get_next(puVar32,0);
      if ((int)pbVar21 == -1) break;
      extraout_RDX[(int)pbVar21] = 1;
    }
    if (cVar6 != '\0') {
      pbVar21 = extraout_RDX + 0x100;
      pbVar28 = extraout_RDX;
      do {
        *pbVar28 = *pbVar28 ^ 1;
        pbVar28 = pbVar28 + 1;
      } while (pbVar28 != pbVar21);
    }
    return (long *)pbVar21;
  }
  puVar19 = (undefined4 *)xmalloc(0x20);
  *(undefined8 *)(puVar19 + 2) = 0;
  *puVar19 = 1;
  *(byte *)(puVar19 + 4) = bVar5;
  *(byte *)((long)puVar19 + 0x11) = bVar30;
  if (*(long *)(puVar32 + 8) == 0) {
    func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2a5,__PRETTY_FUNCTION___7128);
    goto code_r0x00103aa8;
  }
  *(undefined4 **)(*(long *)(puVar32 + 8) + 8) = puVar19;
  ppcVar34 = (char **)((long)ppcVar34 + 3);
  *(undefined4 **)(puVar32 + 8) = puVar19;
  goto code_r0x001032e8;
}

