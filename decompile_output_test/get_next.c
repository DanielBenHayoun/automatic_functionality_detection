
undefined4 * get_next(long *param_1,undefined4 *param_2)

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
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  char **ppcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined4 *puVar18;
  uint uVar19;
  byte *pbVar20;
  long lVar21;
  byte *extraout_RDX;
  ulong unaff_RBX;
  char **ppcVar22;
  char **ppcVar23;
  long lVar24;
  ulong uVar25;
  undefined *puVar26;
  char **ppcVar27;
  undefined8 uVar28;
  byte *pbVar29;
  undefined *puVar30;
  byte bVar31;
  uint uVar32;
  ulong unaff_R12;
  long lVar33;
  char **ppcVar34;
  long in_FS_OFFSET;
  ulong uStack304;
  long lStack216;
  char *pcStack208;
  long lStack200;
  long lStack192;
  char **ppcStack184;
  long lStack176;
  long lStack160;
  ulong uStack152;
  long lStack144;
  long *plStack128;
  byte *pbStack104;
  undefined1 *puStack96;
  undefined *puStack88;
  undefined8 uStack80;
  uint *puStack72;
  undefined *puStack64;
  undefined *puStack56;
  undefined *puStack48;
  
  lVar11 = param_1[2];
code_r0x00102dcd:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 2;
  }
  if (lVar11 == -2) {
    puStack72 = *(uint **)(*param_1 + 8);
    param_1[2] = -1;
    *(uint **)(param_1 + 1) = puStack72;
  }
  else {
    puStack72 = (uint *)param_1[1];
  }
  if (puStack72 == (uint *)0x0) {
    return (undefined4 *)0xffffffff;
  }
  if (4 < *puStack72) {
    puStack48 = &UNK_00102fe3;
    func_0x00101600();
    goto code_r0x00102fe3;
  }
  switch(*puStack72) {
  default:
    lVar11 = *(long *)(puStack72 + 2);
    bVar5 = *(byte *)(puStack72 + 4);
    param_1[2] = -1;
    param_1[1] = lVar11;
    return (undefined4 *)(ulong)bVar5;
  case 1:
    if (param_1[2] == -1) {
      uVar9 = (ulong)*(byte *)(puStack72 + 4);
      param_1[2] = uVar9;
    }
    else {
      uVar9 = param_1[2] + 1;
      param_1[2] = uVar9;
    }
    uVar12 = uVar9 & 0xffffffff;
    if ((ulong)*(byte *)((long)puStack72 + 0x11) != uVar9) {
      return (undefined4 *)uVar12;
    }
    goto code_r0x00102f02;
  case 2:
    uVar7 = puStack72[4];
    unaff_R12 = (ulong)uVar7;
    if (param_2 != (undefined4 *)0x0) {
      if (uVar7 == 6) {
        *param_2 = 0;
      }
      else {
        if (uVar7 == 10) {
          *param_2 = 1;
        }
      }
    }
    unaff_RBX = param_1[2];
    if (unaff_RBX != 0xffffffffffffffff) goto code_r0x00102e85;
    uVar19 = 0;
    goto code_r0x00102f4b;
  case 4:
    break;
  }
  lVar11 = *(long *)(puStack72 + 6);
  if (lVar11 != 0) goto code_r0x00102fb2;
  lVar11 = *(long *)(puStack72 + 2);
  param_1[2] = -1;
  param_1[1] = lVar11;
  lVar11 = -1;
  goto code_r0x00102dcd;
code_r0x00102f4b:
  puStack48 = &UNK_00102f55;
  cVar4 = is_char_class_member((ulong)uVar7,(ulong)uVar19);
  if (cVar4 != '\0') {
    unaff_RBX = SEXT48((int)uVar19);
    param_1[2] = unaff_RBX;
code_r0x00102e85:
    puStack48 = &UNK_00102e90;
    cVar4 = is_char_class_member((ulong)uVar7,unaff_RBX & 0xff);
    if (cVar4 != '\0') {
      uVar12 = unaff_RBX & 0xffffffff;
      uVar19 = (int)unaff_RBX + 1;
      if ((int)uVar19 < 0x100) {
        do {
          puStack48 = &UNK_00102ec6;
          cVar4 = is_char_class_member((ulong)uVar7,(ulong)uVar19 & 0xff);
          if (cVar4 != '\0') {
            param_1[2] = (long)(int)uVar19;
            return (undefined4 *)uVar12;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x100);
      }
      goto code_r0x00102f02;
    }
code_r0x00102fe3:
    puStack48 = &UNK_00103002;
    func_0x00101720(&UNK_001073b8,&UNK_00107021,0x437);
    puStack56 = &UNK_00103024;
    puStack48 = (undefined *)unaff_RBX;
    uStack80 = func_0x00101690(0,&UNK_00107051,5);
    puStack56 = &UNK_0010302c;
    puVar10 = (uint *)func_0x00101610();
    uVar12 = (ulong)*puVar10;
    uVar28 = 1;
    puStack56 = &UNK_0010303d;
    func_0x00101850(1,uVar12,uStack80);
    lStack144 = 0;
    puStack64 = &UNK_00103051;
    lVar11 = safe_read(0,uVar28,uVar12);
    if (lVar11 != -1) {
      return (undefined4 *)lVar11;
    }
    puStack64 = &UNK_00103061;
    plain_read_part_5();
    puStack64 = (undefined *)unaff_R12;
    while( true ) {
      pbStack104 = (byte *)0x0;
      puStack88 = &UNK_00103095;
      lVar11 = lStack144;
      uVar12 = safe_read(0,lStack144,uVar28);
      if (uVar12 == 0xffffffffffffffff) break;
      if (uVar12 == 0) {
        return (undefined4 *)0;
      }
      uVar9 = 0;
      do {
        uVar25 = uVar9;
        uVar9 = uVar25 + 1;
        if (in_delete_set[*(byte *)(lStack144 + uVar25)] != '\0') {
          if (uVar9 < uVar12) goto code_r0x001030b7;
          goto code_r0x001030db;
        }
      } while (uVar12 != uVar9);
      uVar9 = uVar25 + 2;
      uVar25 = uVar12;
      if (uVar12 <= uVar9) {
        return (undefined4 *)uVar12;
      }
code_r0x001030b7:
      pbVar20 = (byte *)(uVar9 + lStack144);
      do {
        if (in_delete_set[*pbVar20] == '\0') {
          *(byte *)(lStack144 + uVar25) = *pbVar20;
          uVar25 = uVar25 + 1;
        }
        pbVar20 = pbVar20 + 1;
      } while ((byte *)(uVar12 + lStack144) != pbVar20);
code_r0x001030db:
      if (uVar25 != 0) {
        return (undefined4 *)uVar25;
      }
    }
    puStack88 = &UNK_00103116;
    plain_read_part_5();
    lStack160 = 0;
    puStack96 = &UNK_00103131;
    pbVar20 = pbStack104;
    puStack88 = (undefined *)uVar28;
    lVar11 = safe_read(0,pbStack104,lVar11);
    if (lVar11 != -1) {
      pbVar20 = pbStack104 + lVar11;
      if (lVar11 != 0) {
        do {
          pbVar29 = pbStack104 + 1;
          *pbStack104 = xlate[*pbStack104];
          pbStack104 = pbVar29;
        } while (pbVar20 != pbVar29);
      }
      return (undefined4 *)lVar11;
    }
    puStack96 = &UNK_0010316a;
    plain_read_part_5();
    puStack96 = in_delete_set;
    uStack152 = (ulong)pbVar20 & 0xffffffff;
    puVar18 = (undefined4 *)xmalloc(0x20);
    lVar11 = *(long *)(lStack160 + 8);
    *(undefined8 *)(puVar18 + 2) = 0;
    *puVar18 = 0;
    *(char *)(puVar18 + 4) = (char)uStack152;
    if (lVar11 != 0) {
      *(undefined4 **)(lVar11 + 8) = puVar18;
      *(undefined4 **)(lStack160 + 8) = puVar18;
      return puVar18;
    }
    puVar26 = &UNK_00107021;
    pbVar20 = &UNK_0010705c;
    func_0x00101720(&UNK_0010705c,&UNK_00107021,0x287);
    lStack176 = *(long *)(in_FS_OFFSET + 0x28);
    plStack128 = param_1;
    uVar28 = func_0x001016b0();
    lVar13 = xmalloc(uVar28);
    ppcVar27 = (char **)0x1;
    lStack200 = lVar13;
    lVar11 = xcalloc(uVar28);
    bVar5 = *pbVar20;
    lStack192 = lVar11;
    if (bVar5 == 0) goto code_r0x001039e7;
    ppcVar22 = (char **)0x0;
    ppcVar34 = (char **)0x0;
    do {
      iVar8 = (int)ppcVar22;
      ppcVar22 = (char **)(ulong)(iVar8 + 1);
      ppcStack184 = (char **)(ulong)((int)ppcVar34 + 1);
      bVar31 = pbVar20[(long)ppcVar22];
      ppcVar27 = ppcVar22;
      if (bVar5 == 0x5c) {
        *(undefined *)(lVar11 + (long)ppcVar34) = 1;
        if (bVar31 == 0x62) {
          bVar31 = 8;
          uVar7 = iVar8 + 2;
        }
        else {
          if ((char)bVar31 < 'c') {
            if ((char)bVar31 < '8') {
              if ((char)bVar31 < '0') {
                if (bVar31 == 0) {
                  uVar28 = func_0x00101690(0,&UNK_00107458,5);
                  ppcVar27 = (char **)0x0;
                  func_0x00101850(0,0,uVar28);
                  uVar7 = iVar8 + 1;
                  *(undefined *)(lVar11 + (long)ppcVar34) = 0;
                  bVar31 = 0x5c;
                }
                else {
code_r0x0010391d:
                  uVar7 = iVar8 + 2;
                }
              }
              else {
                uVar7 = iVar8 + 2;
                uVar19 = (uint)bVar31;
                bVar31 = (byte)(uVar19 - 0x30);
                if ((int)(char)pbVar20[uVar7] - 0x30U < 8) {
                  uVar32 = ((int)(char)pbVar20[uVar7] - 0x30U) + (uVar19 - 0x30) * 8;
                  bVar31 = (byte)uVar32;
                  uVar7 = iVar8 + 3;
                  uVar19 = (int)(char)pbVar20[iVar8 + 3] - 0x30;
                  if (uVar19 < 8) {
                    if ((int)(uVar19 + (uVar32 & 0xff) * 8) < 0x100) {
                      bVar31 = (char)uVar19 + bVar31 * '\b';
                      uVar7 = iVar8 + 4;
                    }
                    else {
                      uVar28 = func_0x00101690(0,&UNK_001073f0,5);
                      ppcVar27 = (char **)0x0;
                      func_0x00101850(0,0,uVar28);
                      uVar7 = iVar8 + 3;
                    }
                  }
                }
              }
            }
            else {
              if (bVar31 == 0x5c) {
                bVar31 = 0x5c;
                uVar7 = iVar8 + 2;
              }
              else {
                if (bVar31 != 0x61) goto code_r0x0010391d;
                bVar31 = 7;
                uVar7 = iVar8 + 2;
              }
            }
          }
          else {
            if (bVar31 == 0x72) {
              bVar31 = 0xd;
              uVar7 = iVar8 + 2;
            }
            else {
              if ((char)bVar31 < 's') {
                if (bVar31 == 0x66) {
                  bVar31 = 0xc;
                  uVar7 = iVar8 + 2;
                }
                else {
                  if (bVar31 != 0x6e) goto code_r0x0010391d;
                  bVar31 = 10;
                  uVar7 = iVar8 + 2;
                }
              }
              else {
                if (bVar31 == 0x74) {
                  bVar31 = 9;
                  uVar7 = iVar8 + 2;
                }
                else {
                  if (bVar31 != 0x76) goto code_r0x0010391d;
                  bVar31 = 0xb;
                  uVar7 = iVar8 + 2;
                }
              }
            }
          }
        }
        ppcVar22 = (char **)(ulong)uVar7;
        *(byte *)(lVar13 + (long)ppcVar34) = bVar31;
        bVar5 = pbVar20[(long)ppcVar22];
      }
      else {
        *(byte *)(lVar13 + (long)ppcVar34) = bVar5;
        bVar5 = bVar31;
      }
      ppcVar34 = ppcStack184;
      if (bVar5 == 0) {
        do {
          ppcVar34 = (char **)0x0;
          lVar21 = lVar13;
          ppcVar22 = ppcStack184;
code_r0x001032e8:
          ppcVar3 = (char **)((long)ppcVar34 + 2);
joined_r0x001032ef:
          if (ppcVar22 <= ppcVar3) {
            if (ppcVar34 < ppcVar22) {
              pbVar20 = (byte *)((long)ppcVar34 + lVar13);
              do {
                bVar5 = *pbVar20;
                pbVar20 = pbVar20 + 1;
                append_normal_char(puVar26,(ulong)bVar5);
              } while ((byte *)(lVar13 + (long)ppcVar22) != pbVar20);
            }
            uStack304 = 1;
            goto code_r0x00103635;
          }
          ppcVar1 = (char **)((long)ppcVar34 + 1);
          cVar4 = *(char *)(lVar21 + 1 + (long)ppcVar34);
          if ((*(char *)(lVar21 + (long)ppcVar34) != '[') ||
             (uStack304 = (ulong)*(byte *)(lVar11 + (long)ppcVar34),
             *(byte *)(lVar11 + (long)ppcVar34) != 0)) goto code_r0x00103302;
          if (((cVar4 != ':') && (cVar4 != '=')) || (*(char *)(lVar11 + (long)ppcVar1) != '\0'))
          goto code_r0x00103391;
          bVar5 = *(byte *)(lVar13 + (long)ppcVar1);
          ppcVar27 = (char **)(ulong)bVar5;
          ppcVar23 = ppcVar3;
          do {
            ppcVar14 = ppcVar23;
            if ((char **)((long)ppcVar22 + -1) <= ppcVar14) goto code_r0x00103391;
            ppcVar23 = (char **)((long)ppcVar14 + 1);
          } while ((((bVar5 != *(byte *)(lVar21 + (long)ppcVar14)) ||
                    (*(char *)(lVar21 + 1 + (long)ppcVar14) != ']')) ||
                   (*(char *)(lVar11 + -1 + (long)ppcVar23) != '\0')) ||
                  (*(char *)(lVar11 + (long)ppcVar23) != '\0'));
          puVar30 = (undefined *)(lVar13 + (long)ppcVar3);
          lVar24 = (-2 - (long)ppcVar34) + (long)ppcVar14;
          if (lVar24 == 0) {
            if (bVar5 == 0x3a) {
              puVar26 = &UNK_001074a0;
            }
            else {
              puVar26 = &UNK_001074c8;
            }
            uVar28 = func_0x00101690(0,puVar26,5);
            func_0x00101850(0,0,uVar28);
            goto code_r0x00103635;
          }
          if (bVar5 == 0x3a) {
            lVar33 = 0;
            do {
              ppcVar23 = *(char ***)(char_class_name + lVar33 * 8);
              ppcVar27 = ppcVar23;
              iVar8 = func_0x00101620(puVar30,ppcVar23,lVar24);
              if ((iVar8 == 0) && (lVar17 = func_0x001016b0(ppcVar23), lVar24 == lVar17)) {
                puVar18 = (undefined4 *)xmalloc(0x20);
                *(undefined8 *)(puVar18 + 2) = 0;
                *puVar18 = 2;
                lVar21 = *(long *)(puVar26 + 8);
                puVar18[4] = (int)lVar33;
                if (lVar21 == 0) goto code_r0x00103aad;
                goto code_r0x00103981;
              }
              lVar33 = lVar33 + 1;
            } while (lVar33 != 0xc);
            ppcVar27 = ppcVar3;
            cVar6 = star_digits_closebracket(&lStack200);
            if (cVar6 != '\0') goto code_r0x00103391;
            uVar28 = make_printable_str(puVar30,lVar24);
            uVar15 = quote(uVar28);
            puVar26 = &UNK_00107067;
code_r0x00103794:
            uVar16 = func_0x00101690(0,puVar26,5);
code_r0x0010379e:
            func_0x00101850(0,0,uVar16,uVar15);
            func_0x001015f0(uVar28);
            goto code_r0x00103635;
          }
          if (lVar24 != 1) {
            ppcVar27 = ppcVar3;
            cVar6 = star_digits_closebracket(&lStack200);
            if (cVar6 == '\0') {
              uVar15 = make_printable_str(puVar30,lVar24);
              uVar16 = func_0x00101690(0,&UNK_001074f8,5);
              uVar28 = uVar15;
              goto code_r0x0010379e;
            }
code_r0x00103391:
            if (((*(char *)(lVar21 + (long)ppcVar3) == '*') &&
                (*(char *)(lVar11 + (long)ppcVar3) == '\0')) &&
               ((ppcVar23 = (char **)((long)ppcVar34 + 3), ppcVar23 < ppcVar22 &&
                (*(char *)(lVar11 + 3 + (long)ppcVar34) == '\0')))) {
              pcVar2 = (char *)(lVar21 + (long)ppcVar23);
              cVar6 = *pcVar2;
              if (cVar6 != ']') {
                while ((ppcVar14 = ppcVar23, ppcVar23 = (char **)((long)ppcVar14 + 1),
                       ppcVar23 < ppcVar22 && (*(char *)(lVar11 + 1 + (long)ppcVar14) == '\0'))) {
                  if (*(char *)(lVar21 + (long)ppcVar23) == ']') {
                    lVar24 = ~(ulong)ppcVar1 + (long)ppcVar14;
                    if (lVar24 == 0) goto code_r0x00103407;
                    ppcVar27 = &pcStack208;
                    iVar8 = xstrtoumax(pcVar2,&pcStack208,
                                       (ulong)((uint)(cVar6 != '0') + 8 + (uint)(cVar6 != '0')),
                                       &lStack216);
                    if (((iVar8 == 0) && (lStack216 != -1)) && (pcStack208 == pcVar2 + lVar24))
                    goto code_r0x00103410;
                    uVar28 = make_printable_str(pcVar2,lVar24);
                    uVar15 = quote(uVar28);
                    puVar26 = &UNK_00107538;
                    goto code_r0x00103794;
                  }
                }
                goto code_r0x00103302;
              }
code_r0x00103407:
              lStack216 = 0;
code_r0x00103410:
              lVar11 = lStack216;
              puVar18 = (undefined4 *)xmalloc(0x20);
              cVar6 = (char)ppcVar27;
              *(undefined8 *)(puVar18 + 2) = 0;
              *puVar18 = 4;
              *(long *)(puVar18 + 6) = lVar11;
              lVar11 = *(long *)(puVar26 + 8);
              *(char *)(puVar18 + 4) = cVar4;
              if (lVar11 == 0) goto code_r0x00103acc;
              ppcVar34 = (char **)((long)ppcVar23 + 1);
              *(undefined4 **)(lVar11 + 8) = puVar18;
              *(undefined4 **)(puVar26 + 8) = puVar18;
              lVar21 = lStack200;
              lVar11 = lStack192;
              ppcVar22 = ppcStack184;
              goto code_r0x001032e8;
            }
code_r0x00103302:
            bVar5 = *(byte *)(lVar13 + (long)ppcVar34);
            ppcVar27 = (char **)(ulong)bVar5;
            if ((cVar4 == '-') &&
               (uStack304 = (ulong)*(byte *)(lVar11 + (long)ppcVar1),
               *(byte *)(lVar11 + (long)ppcVar1) == 0)) goto code_r0x00103491;
            append_normal_char();
            ppcVar3 = (char **)((long)ppcVar34 + 3);
            ppcVar34 = ppcVar1;
            goto joined_r0x001032ef;
          }
          puVar18 = (undefined4 *)xmalloc(0x20);
          *(undefined8 *)(puVar18 + 2) = 0;
          *puVar18 = 3;
          *(undefined *)(puVar18 + 4) = *puVar30;
          lVar21 = *(long *)(puVar26 + 8);
          if (lVar21 != 0) {
code_r0x00103981:
            *(undefined4 **)(lVar21 + 8) = puVar18;
            ppcVar34 = (char **)((long)ppcVar14 + 2);
            *(undefined4 **)(puVar26 + 8) = puVar18;
            lVar21 = lStack200;
            lVar11 = lStack192;
            ppcVar22 = ppcStack184;
            goto code_r0x001032e8;
          }
          ppcVar27 = (char **)&UNK_00107021;
          func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2e5,__PRETTY_FUNCTION___7150);
code_r0x001039e7:
          ppcStack184 = (char **)0x0;
        } while( true );
      }
    } while( true );
  }
  uVar19 = uVar19 + 1;
  if (uVar19 == 0x100) {
    puStack48 = &UNK_00102fb2;
    lVar11 = func_0x00101720(&UNK_00107045,&UNK_00107021,0x434,__PRETTY_FUNCTION___7229);
code_r0x00102fb2:
    uVar12 = (ulong)*(byte *)(puStack72 + 4);
    lVar13 = param_1[2] + 1;
    if (param_1[2] == -1) {
      lVar13 = 1;
    }
    param_1[2] = lVar13;
    if (lVar11 != lVar13) {
      return (undefined4 *)uVar12;
    }
code_r0x00102f02:
    lVar11 = *(long *)(puStack72 + 2);
    param_1[2] = -1;
    param_1[1] = lVar11;
    return (undefined4 *)uVar12;
  }
  goto code_r0x00102f4b;
code_r0x00103491:
  bVar31 = *(byte *)(lVar13 + (long)ppcVar3);
  if (bVar31 < bVar5) {
    uVar28 = make_printable_char((ulong)bVar5);
    uVar15 = make_printable_char((ulong)bVar31);
    uVar16 = func_0x00101690(0,&UNK_00107568,5);
    func_0x00101850(0,0,uVar16,uVar28,uVar15);
    func_0x001015f0(uVar28);
    func_0x001015f0(uVar15);
code_r0x00103635:
    func_0x001015f0(lVar21);
    func_0x001015f0(lVar11);
    if (lStack176 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (undefined4 *)uStack304;
    }
code_r0x00103aa8:
    func_0x001016c0();
code_r0x00103aad:
    cVar6 = '!';
    puVar26 = &UNK_0010705c;
    func_0x00101720(&UNK_0010705c,&UNK_00107021,699,__PRETTY_FUNCTION___7136);
code_r0x00103acc:
    append_repeated_char_part_8();
    *(undefined8 *)(puVar26 + 0x10) = 0xfffffffffffffffe;
    while( true ) {
      pbVar20 = (byte *)get_next(puVar26,0);
      if ((int)pbVar20 == -1) break;
      extraout_RDX[(int)pbVar20] = 1;
    }
    if (cVar6 != '\0') {
      pbVar20 = extraout_RDX + 0x100;
      pbVar29 = extraout_RDX;
      do {
        *pbVar29 = *pbVar29 ^ 1;
        pbVar29 = pbVar29 + 1;
      } while (pbVar29 != pbVar20);
    }
    return (undefined4 *)pbVar20;
  }
  puVar18 = (undefined4 *)xmalloc(0x20);
  *(undefined8 *)(puVar18 + 2) = 0;
  *puVar18 = 1;
  *(byte *)(puVar18 + 4) = bVar5;
  *(byte *)((long)puVar18 + 0x11) = bVar31;
  if (*(long *)(puVar26 + 8) == 0) {
    func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2a5,__PRETTY_FUNCTION___7128);
    goto code_r0x00103aa8;
  }
  *(undefined4 **)(*(long *)(puVar26 + 8) + 8) = puVar18;
  ppcVar34 = (char **)((long)ppcVar34 + 3);
  *(undefined4 **)(puVar26 + 8) = puVar18;
  goto code_r0x001032e8;
}

