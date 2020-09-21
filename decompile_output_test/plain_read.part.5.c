
undefined4 * plain_read_part_5(void)

{
  char **ppcVar1;
  char *pcVar2;
  char cVar3;
  char **ppcVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  char **ppcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  byte *extraout_RDX;
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
  long lVar33;
  char **ppcVar34;
  long in_FS_OFFSET;
  ulong uStack264;
  long lStack176;
  char *pcStack168;
  long lStack160;
  long lStack152;
  char **ppcStack144;
  long lStack136;
  long lStack120;
  ulong uStack112;
  long lStack104;
  byte *pbStack64;
  undefined1 *puStack56;
  undefined *puStack48;
  undefined8 uStack40;
  undefined *puStack16;
  
  puStack16 = &UNK_00103024;
  uStack40 = func_0x00101690(0,&UNK_00107051,5);
  puStack16 = &UNK_0010302c;
  puVar9 = (uint *)func_0x00101610();
  uVar11 = (ulong)*puVar9;
  uVar28 = 1;
  puStack16 = &UNK_0010303d;
  func_0x00101850(1,uVar11,uStack40);
  lStack104 = 0;
  lVar10 = safe_read(0,uVar28,uVar11);
  if (lVar10 != -1) {
    return (undefined4 *)lVar10;
  }
  plain_read_part_5();
  while( true ) {
    pbStack64 = (byte *)0x0;
    puStack48 = &UNK_00103095;
    lVar10 = lStack104;
    uVar11 = safe_read(0,lStack104,uVar28);
    if (uVar11 == 0xffffffffffffffff) break;
    if (uVar11 == 0) {
      return (undefined4 *)0;
    }
    uVar19 = 0;
    do {
      uVar25 = uVar19;
      uVar19 = uVar25 + 1;
      if (in_delete_set[*(byte *)(lStack104 + uVar25)] != '\0') {
        if (uVar19 < uVar11) goto code_r0x001030b7;
        goto code_r0x001030db;
      }
    } while (uVar11 != uVar19);
    uVar19 = uVar25 + 2;
    uVar25 = uVar11;
    if (uVar11 <= uVar19) {
      return (undefined4 *)uVar11;
    }
code_r0x001030b7:
    pbVar20 = (byte *)(uVar19 + lStack104);
    do {
      if (in_delete_set[*pbVar20] == '\0') {
        *(byte *)(lStack104 + uVar25) = *pbVar20;
        uVar25 = uVar25 + 1;
      }
      pbVar20 = pbVar20 + 1;
    } while ((byte *)(uVar11 + lStack104) != pbVar20);
code_r0x001030db:
    if (uVar25 != 0) {
      return (undefined4 *)uVar25;
    }
  }
  puStack48 = &UNK_00103116;
  plain_read_part_5();
  lStack120 = 0;
  puStack56 = &UNK_00103131;
  pbVar20 = pbStack64;
  puStack48 = (undefined *)uVar28;
  lVar10 = safe_read(0,pbStack64,lVar10);
  if (lVar10 != -1) {
    pbVar20 = pbStack64 + lVar10;
    if (lVar10 != 0) {
      do {
        pbVar29 = pbStack64 + 1;
        *pbStack64 = xlate[*pbStack64];
        pbStack64 = pbVar29;
      } while (pbVar20 != pbVar29);
    }
    return (undefined4 *)lVar10;
  }
  puStack56 = &UNK_0010316a;
  plain_read_part_5();
  puStack56 = in_delete_set;
  uStack112 = (ulong)pbVar20 & 0xffffffff;
  puVar17 = (undefined4 *)xmalloc(0x20);
  lVar10 = *(long *)(lStack120 + 8);
  *(undefined8 *)(puVar17 + 2) = 0;
  *puVar17 = 0;
  *(char *)(puVar17 + 4) = (char)uStack112;
  if (lVar10 != 0) {
    *(undefined4 **)(lVar10 + 8) = puVar17;
    *(undefined4 **)(lStack120 + 8) = puVar17;
    return puVar17;
  }
  puVar26 = &UNK_00107021;
  pbVar20 = &UNK_0010705c;
  func_0x00101720(&UNK_0010705c,&UNK_00107021,0x287);
  lStack136 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = func_0x001016b0();
  lVar12 = xmalloc(uVar28);
  ppcVar27 = (char **)0x1;
  lStack160 = lVar12;
  lVar10 = xcalloc(uVar28);
  bVar5 = *pbVar20;
  lStack152 = lVar10;
  if (bVar5 == 0) goto code_r0x001039e7;
  ppcVar22 = (char **)0x0;
  ppcVar34 = (char **)0x0;
  do {
    iVar8 = (int)ppcVar22;
    ppcVar22 = (char **)(ulong)(iVar8 + 1);
    ppcStack144 = (char **)(ulong)((int)ppcVar34 + 1);
    bVar31 = pbVar20[(long)ppcVar22];
    ppcVar27 = ppcVar22;
    if (bVar5 == 0x5c) {
      *(undefined *)(lVar10 + (long)ppcVar34) = 1;
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
                *(undefined *)(lVar10 + (long)ppcVar34) = 0;
                bVar31 = 0x5c;
              }
              else {
code_r0x0010391d:
                uVar7 = iVar8 + 2;
              }
            }
            else {
              uVar7 = iVar8 + 2;
              uVar18 = (uint)bVar31;
              bVar31 = (byte)(uVar18 - 0x30);
              if ((int)(char)pbVar20[uVar7] - 0x30U < 8) {
                uVar32 = ((int)(char)pbVar20[uVar7] - 0x30U) + (uVar18 - 0x30) * 8;
                bVar31 = (byte)uVar32;
                uVar7 = iVar8 + 3;
                uVar18 = (int)(char)pbVar20[iVar8 + 3] - 0x30;
                if (uVar18 < 8) {
                  if ((int)(uVar18 + (uVar32 & 0xff) * 8) < 0x100) {
                    bVar31 = (char)uVar18 + bVar31 * '\b';
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
      *(byte *)(lVar12 + (long)ppcVar34) = bVar31;
      bVar5 = pbVar20[(long)ppcVar22];
    }
    else {
      *(byte *)(lVar12 + (long)ppcVar34) = bVar5;
      bVar5 = bVar31;
    }
    ppcVar34 = ppcStack144;
    if (bVar5 == 0) {
      do {
        ppcVar34 = (char **)0x0;
        lVar21 = lVar12;
        ppcVar22 = ppcStack144;
code_r0x001032e8:
        ppcVar4 = (char **)((long)ppcVar34 + 2);
joined_r0x001032ef:
        if (ppcVar22 <= ppcVar4) {
          if (ppcVar34 < ppcVar22) {
            pbVar20 = (byte *)((long)ppcVar34 + lVar12);
            do {
              bVar5 = *pbVar20;
              pbVar20 = pbVar20 + 1;
              append_normal_char(puVar26,(ulong)bVar5);
            } while ((byte *)(lVar12 + (long)ppcVar22) != pbVar20);
          }
          uStack264 = 1;
          goto code_r0x00103635;
        }
        ppcVar1 = (char **)((long)ppcVar34 + 1);
        cVar3 = *(char *)(lVar21 + 1 + (long)ppcVar34);
        if ((*(char *)(lVar21 + (long)ppcVar34) != '[') ||
           (uStack264 = (ulong)*(byte *)(lVar10 + (long)ppcVar34),
           *(byte *)(lVar10 + (long)ppcVar34) != 0)) goto code_r0x00103302;
        if (((cVar3 != ':') && (cVar3 != '=')) || (*(char *)(lVar10 + (long)ppcVar1) != '\0'))
        goto code_r0x00103391;
        bVar5 = *(byte *)(lVar12 + (long)ppcVar1);
        ppcVar27 = (char **)(ulong)bVar5;
        ppcVar23 = ppcVar4;
        do {
          ppcVar13 = ppcVar23;
          if ((char **)((long)ppcVar22 + -1) <= ppcVar13) goto code_r0x00103391;
          ppcVar23 = (char **)((long)ppcVar13 + 1);
        } while ((((bVar5 != *(byte *)(lVar21 + (long)ppcVar13)) ||
                  (*(char *)(lVar21 + 1 + (long)ppcVar13) != ']')) ||
                 (*(char *)(lVar10 + -1 + (long)ppcVar23) != '\0')) ||
                (*(char *)(lVar10 + (long)ppcVar23) != '\0'));
        puVar30 = (undefined *)(lVar12 + (long)ppcVar4);
        lVar24 = (-2 - (long)ppcVar34) + (long)ppcVar13;
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
            if ((iVar8 == 0) && (lVar16 = func_0x001016b0(ppcVar23), lVar24 == lVar16)) {
              puVar17 = (undefined4 *)xmalloc(0x20);
              *(undefined8 *)(puVar17 + 2) = 0;
              *puVar17 = 2;
              lVar21 = *(long *)(puVar26 + 8);
              puVar17[4] = (int)lVar33;
              if (lVar21 == 0) goto code_r0x00103aad;
              goto code_r0x00103981;
            }
            lVar33 = lVar33 + 1;
          } while (lVar33 != 0xc);
          ppcVar27 = ppcVar4;
          cVar6 = star_digits_closebracket(&lStack160);
          if (cVar6 != '\0') goto code_r0x00103391;
          uVar28 = make_printable_str(puVar30,lVar24);
          uVar14 = quote(uVar28);
          puVar26 = &UNK_00107067;
code_r0x00103794:
          uVar15 = func_0x00101690(0,puVar26,5);
code_r0x0010379e:
          func_0x00101850(0,0,uVar15,uVar14);
          func_0x001015f0(uVar28);
          goto code_r0x00103635;
        }
        if (lVar24 != 1) {
          ppcVar27 = ppcVar4;
          cVar6 = star_digits_closebracket(&lStack160);
          if (cVar6 == '\0') {
            uVar14 = make_printable_str(puVar30,lVar24);
            uVar15 = func_0x00101690(0,&UNK_001074f8,5);
            uVar28 = uVar14;
            goto code_r0x0010379e;
          }
code_r0x00103391:
          if (((*(char *)(lVar21 + (long)ppcVar4) == '*') &&
              (*(char *)(lVar10 + (long)ppcVar4) == '\0')) &&
             ((ppcVar23 = (char **)((long)ppcVar34 + 3), ppcVar23 < ppcVar22 &&
              (*(char *)(lVar10 + 3 + (long)ppcVar34) == '\0')))) {
            pcVar2 = (char *)(lVar21 + (long)ppcVar23);
            cVar6 = *pcVar2;
            if (cVar6 != ']') {
              while ((ppcVar13 = ppcVar23, ppcVar23 = (char **)((long)ppcVar13 + 1),
                     ppcVar23 < ppcVar22 && (*(char *)(lVar10 + 1 + (long)ppcVar13) == '\0'))) {
                if (*(char *)(lVar21 + (long)ppcVar23) == ']') {
                  lVar24 = ~(ulong)ppcVar1 + (long)ppcVar13;
                  if (lVar24 == 0) goto code_r0x00103407;
                  ppcVar27 = &pcStack168;
                  iVar8 = xstrtoumax(pcVar2,&pcStack168,
                                     (ulong)((uint)(cVar6 != '0') + 8 + (uint)(cVar6 != '0')),
                                     &lStack176);
                  if (((iVar8 == 0) && (lStack176 != -1)) && (pcStack168 == pcVar2 + lVar24))
                  goto code_r0x00103410;
                  uVar28 = make_printable_str(pcVar2,lVar24);
                  uVar14 = quote(uVar28);
                  puVar26 = &UNK_00107538;
                  goto code_r0x00103794;
                }
              }
              goto code_r0x00103302;
            }
code_r0x00103407:
            lStack176 = 0;
code_r0x00103410:
            lVar10 = lStack176;
            puVar17 = (undefined4 *)xmalloc(0x20);
            cVar6 = (char)ppcVar27;
            *(undefined8 *)(puVar17 + 2) = 0;
            *puVar17 = 4;
            *(long *)(puVar17 + 6) = lVar10;
            lVar10 = *(long *)(puVar26 + 8);
            *(char *)(puVar17 + 4) = cVar3;
            if (lVar10 == 0) goto code_r0x00103acc;
            ppcVar34 = (char **)((long)ppcVar23 + 1);
            *(undefined4 **)(lVar10 + 8) = puVar17;
            *(undefined4 **)(puVar26 + 8) = puVar17;
            lVar21 = lStack160;
            lVar10 = lStack152;
            ppcVar22 = ppcStack144;
            goto code_r0x001032e8;
          }
code_r0x00103302:
          bVar5 = *(byte *)(lVar12 + (long)ppcVar34);
          ppcVar27 = (char **)(ulong)bVar5;
          if ((cVar3 == '-') &&
             (uStack264 = (ulong)*(byte *)(lVar10 + (long)ppcVar1),
             *(byte *)(lVar10 + (long)ppcVar1) == 0)) goto code_r0x00103491;
          append_normal_char();
          ppcVar4 = (char **)((long)ppcVar34 + 3);
          ppcVar34 = ppcVar1;
          goto joined_r0x001032ef;
        }
        puVar17 = (undefined4 *)xmalloc(0x20);
        *(undefined8 *)(puVar17 + 2) = 0;
        *puVar17 = 3;
        *(undefined *)(puVar17 + 4) = *puVar30;
        lVar21 = *(long *)(puVar26 + 8);
        if (lVar21 != 0) {
code_r0x00103981:
          *(undefined4 **)(lVar21 + 8) = puVar17;
          ppcVar34 = (char **)((long)ppcVar13 + 2);
          *(undefined4 **)(puVar26 + 8) = puVar17;
          lVar21 = lStack160;
          lVar10 = lStack152;
          ppcVar22 = ppcStack144;
          goto code_r0x001032e8;
        }
        ppcVar27 = (char **)&UNK_00107021;
        func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2e5,__PRETTY_FUNCTION___7150);
code_r0x001039e7:
        ppcStack144 = (char **)0x0;
      } while( true );
    }
  } while( true );
code_r0x00103491:
  bVar31 = *(byte *)(lVar12 + (long)ppcVar4);
  if (bVar31 < bVar5) {
    uVar28 = make_printable_char((ulong)bVar5);
    uVar14 = make_printable_char((ulong)bVar31);
    uVar15 = func_0x00101690(0,&UNK_00107568,5);
    func_0x00101850(0,0,uVar15,uVar28,uVar14);
    func_0x001015f0(uVar28);
    func_0x001015f0(uVar14);
code_r0x00103635:
    func_0x001015f0(lVar21);
    func_0x001015f0(lVar10);
    if (lStack136 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (undefined4 *)uStack264;
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
  puVar17 = (undefined4 *)xmalloc(0x20);
  *(undefined8 *)(puVar17 + 2) = 0;
  *puVar17 = 1;
  *(byte *)(puVar17 + 4) = bVar5;
  *(byte *)((long)puVar17 + 0x11) = bVar31;
  if (*(long *)(puVar26 + 8) == 0) {
    func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2a5,__PRETTY_FUNCTION___7128);
    goto code_r0x00103aa8;
  }
  *(undefined4 **)(*(long *)(puVar26 + 8) + 8) = puVar17;
  ppcVar34 = (char **)((long)ppcVar34 + 3);
  *(undefined4 **)(puVar26 + 8) = puVar17;
  goto code_r0x001032e8;
}

