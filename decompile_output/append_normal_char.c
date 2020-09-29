
undefined4 * append_normal_char(long param_1,ulong param_2)

{
  char **ppcVar1;
  char *pcVar2;
  char cVar3;
  char **ppcVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  char **ppcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  long lVar18;
  byte *extraout_RDX;
  byte *pbVar19;
  char **ppcVar20;
  char **ppcVar21;
  long lVar22;
  undefined *puVar23;
  char **ppcVar24;
  byte *pbVar25;
  undefined *puVar26;
  byte bVar27;
  uint uVar28;
  long lVar29;
  char **ppcVar30;
  long in_FS_OFFSET;
  ulong uStack216;
  long lStack128;
  char *pcStack120;
  long lStack112;
  long lStack104;
  char **ppcStack96;
  long lStack88;
  long lStack72;
  ulong uStack64;
  
  uStack64 = param_2 & 0xffffffff;
  puVar16 = (undefined4 *)xmalloc(0x20);
  lVar11 = *(long *)(param_1 + 8);
  *(undefined8 *)(puVar16 + 2) = 0;
  *puVar16 = 0;
  *(char *)(puVar16 + 4) = (char)uStack64;
  if (lVar11 != 0) {
    *(undefined4 **)(lVar11 + 8) = puVar16;
    *(undefined4 **)(param_1 + 8) = puVar16;
    return puVar16;
  }
  puVar23 = &UNK_00107021;
  pbVar25 = &UNK_0010705c;
  func_0x00101720(&UNK_0010705c,&UNK_00107021,0x287);
  lStack88 = *(long *)(in_FS_OFFSET + 0x28);
  lStack72 = param_1;
  uVar9 = func_0x001016b0();
  lVar10 = xmalloc(uVar9);
  ppcVar24 = (char **)0x1;
  lStack112 = lVar10;
  lVar11 = xcalloc(uVar9);
  bVar5 = *pbVar25;
  lStack104 = lVar11;
  if (bVar5 == 0) goto code_r0x001039e7;
  ppcVar20 = (char **)0x0;
  ppcVar30 = (char **)0x0;
  do {
    iVar8 = (int)ppcVar20;
    ppcVar20 = (char **)(ulong)(iVar8 + 1);
    ppcStack96 = (char **)(ulong)((int)ppcVar30 + 1);
    bVar27 = pbVar25[(long)ppcVar20];
    ppcVar24 = ppcVar20;
    if (bVar5 == 0x5c) {
      *(undefined *)(lVar11 + (long)ppcVar30) = 1;
      if (bVar27 == 0x62) {
        bVar27 = 8;
        uVar7 = iVar8 + 2;
      }
      else {
        if ((char)bVar27 < 'c') {
          if ((char)bVar27 < '8') {
            if ((char)bVar27 < '0') {
              if (bVar27 == 0) {
                uVar9 = func_0x00101690(0,&UNK_00107458,5);
                ppcVar24 = (char **)0x0;
                func_0x00101850(0,0,uVar9);
                uVar7 = iVar8 + 1;
                *(undefined *)(lVar11 + (long)ppcVar30) = 0;
                bVar27 = 0x5c;
              }
              else {
code_r0x0010391d:
                uVar7 = iVar8 + 2;
              }
            }
            else {
              uVar7 = iVar8 + 2;
              uVar17 = (uint)bVar27;
              bVar27 = (byte)(uVar17 - 0x30);
              if ((int)(char)pbVar25[uVar7] - 0x30U < 8) {
                uVar28 = ((int)(char)pbVar25[uVar7] - 0x30U) + (uVar17 - 0x30) * 8;
                bVar27 = (byte)uVar28;
                uVar7 = iVar8 + 3;
                uVar17 = (int)(char)pbVar25[iVar8 + 3] - 0x30;
                if (uVar17 < 8) {
                  if ((int)(uVar17 + (uVar28 & 0xff) * 8) < 0x100) {
                    bVar27 = (char)uVar17 + bVar27 * '\b';
                    uVar7 = iVar8 + 4;
                  }
                  else {
                    uVar9 = func_0x00101690(0,&UNK_001073f0,5);
                    ppcVar24 = (char **)0x0;
                    func_0x00101850(0,0,uVar9);
                    uVar7 = iVar8 + 3;
                  }
                }
              }
            }
          }
          else {
            if (bVar27 == 0x5c) {
              bVar27 = 0x5c;
              uVar7 = iVar8 + 2;
            }
            else {
              if (bVar27 != 0x61) goto code_r0x0010391d;
              bVar27 = 7;
              uVar7 = iVar8 + 2;
            }
          }
        }
        else {
          if (bVar27 == 0x72) {
            bVar27 = 0xd;
            uVar7 = iVar8 + 2;
          }
          else {
            if ((char)bVar27 < 's') {
              if (bVar27 == 0x66) {
                bVar27 = 0xc;
                uVar7 = iVar8 + 2;
              }
              else {
                if (bVar27 != 0x6e) goto code_r0x0010391d;
                bVar27 = 10;
                uVar7 = iVar8 + 2;
              }
            }
            else {
              if (bVar27 == 0x74) {
                bVar27 = 9;
                uVar7 = iVar8 + 2;
              }
              else {
                if (bVar27 != 0x76) goto code_r0x0010391d;
                bVar27 = 0xb;
                uVar7 = iVar8 + 2;
              }
            }
          }
        }
      }
      ppcVar20 = (char **)(ulong)uVar7;
      *(byte *)(lVar10 + (long)ppcVar30) = bVar27;
      bVar5 = pbVar25[(long)ppcVar20];
    }
    else {
      *(byte *)(lVar10 + (long)ppcVar30) = bVar5;
      bVar5 = bVar27;
    }
    ppcVar30 = ppcStack96;
    if (bVar5 == 0) {
      do {
        ppcVar30 = (char **)0x0;
        lVar18 = lVar10;
        ppcVar20 = ppcStack96;
code_r0x001032e8:
        ppcVar4 = (char **)((long)ppcVar30 + 2);
joined_r0x001032ef:
        if (ppcVar20 <= ppcVar4) {
          if (ppcVar30 < ppcVar20) {
            pbVar25 = (byte *)((long)ppcVar30 + lVar10);
            do {
              bVar5 = *pbVar25;
              pbVar25 = pbVar25 + 1;
              append_normal_char(puVar23,(ulong)bVar5);
            } while ((byte *)(lVar10 + (long)ppcVar20) != pbVar25);
          }
          uStack216 = 1;
          goto code_r0x00103635;
        }
        ppcVar1 = (char **)((long)ppcVar30 + 1);
        cVar3 = *(char *)(lVar18 + 1 + (long)ppcVar30);
        if ((*(char *)(lVar18 + (long)ppcVar30) != '[') ||
           (uStack216 = (ulong)*(byte *)(lVar11 + (long)ppcVar30),
           *(byte *)(lVar11 + (long)ppcVar30) != 0)) goto code_r0x00103302;
        if (((cVar3 != ':') && (cVar3 != '=')) || (*(char *)(lVar11 + (long)ppcVar1) != '\0'))
        goto code_r0x00103391;
        bVar5 = *(byte *)(lVar10 + (long)ppcVar1);
        ppcVar24 = (char **)(ulong)bVar5;
        ppcVar21 = ppcVar4;
        do {
          ppcVar12 = ppcVar21;
          if ((char **)((long)ppcVar20 + -1) <= ppcVar12) goto code_r0x00103391;
          ppcVar21 = (char **)((long)ppcVar12 + 1);
        } while ((((bVar5 != *(byte *)(lVar18 + (long)ppcVar12)) ||
                  (*(char *)(lVar18 + 1 + (long)ppcVar12) != ']')) ||
                 (*(char *)(lVar11 + -1 + (long)ppcVar21) != '\0')) ||
                (*(char *)(lVar11 + (long)ppcVar21) != '\0'));
        puVar26 = (undefined *)(lVar10 + (long)ppcVar4);
        lVar22 = (-2 - (long)ppcVar30) + (long)ppcVar12;
        if (lVar22 == 0) {
          if (bVar5 == 0x3a) {
            puVar23 = &UNK_001074a0;
          }
          else {
            puVar23 = &UNK_001074c8;
          }
          uVar9 = func_0x00101690(0,puVar23,5);
          func_0x00101850(0,0,uVar9);
          goto code_r0x00103635;
        }
        if (bVar5 == 0x3a) {
          lVar29 = 0;
          do {
            ppcVar21 = *(char ***)(char_class_name + lVar29 * 8);
            ppcVar24 = ppcVar21;
            iVar8 = func_0x00101620(puVar26,ppcVar21,lVar22);
            if ((iVar8 == 0) && (lVar15 = func_0x001016b0(ppcVar21), lVar22 == lVar15)) {
              puVar16 = (undefined4 *)xmalloc(0x20);
              *(undefined8 *)(puVar16 + 2) = 0;
              *puVar16 = 2;
              lVar18 = *(long *)(puVar23 + 8);
              puVar16[4] = (int)lVar29;
              if (lVar18 != 0) goto code_r0x00103981;
              goto code_r0x00103aad;
            }
            lVar29 = lVar29 + 1;
          } while (lVar29 != 0xc);
          ppcVar24 = ppcVar4;
          cVar6 = star_digits_closebracket(&lStack112);
          if (cVar6 != '\0') goto code_r0x00103391;
          uVar9 = make_printable_str(puVar26,lVar22);
          uVar13 = quote(uVar9);
          puVar23 = &UNK_00107067;
code_r0x00103794:
          uVar14 = func_0x00101690(0,puVar23,5);
code_r0x0010379e:
          func_0x00101850(0,0,uVar14,uVar13);
          func_0x001015f0(uVar9);
          goto code_r0x00103635;
        }
        if (lVar22 != 1) {
          ppcVar24 = ppcVar4;
          cVar6 = star_digits_closebracket(&lStack112);
          if (cVar6 == '\0') {
            uVar13 = make_printable_str(puVar26,lVar22);
            uVar14 = func_0x00101690(0,&UNK_001074f8,5);
            uVar9 = uVar13;
            goto code_r0x0010379e;
          }
code_r0x00103391:
          if (((*(char *)(lVar18 + (long)ppcVar4) == '*') &&
              (*(char *)(lVar11 + (long)ppcVar4) == '\0')) &&
             ((ppcVar21 = (char **)((long)ppcVar30 + 3), ppcVar21 < ppcVar20 &&
              (*(char *)(lVar11 + 3 + (long)ppcVar30) == '\0')))) {
            pcVar2 = (char *)(lVar18 + (long)ppcVar21);
            cVar6 = *pcVar2;
            if (cVar6 != ']') {
              while ((ppcVar12 = ppcVar21, ppcVar21 = (char **)((long)ppcVar12 + 1),
                     ppcVar21 < ppcVar20 && (*(char *)(lVar11 + 1 + (long)ppcVar12) == '\0'))) {
                if (*(char *)(lVar18 + (long)ppcVar21) == ']') {
                  lVar22 = ~(ulong)ppcVar1 + (long)ppcVar12;
                  if (lVar22 == 0) goto code_r0x00103407;
                  ppcVar24 = &pcStack120;
                  iVar8 = xstrtoumax(pcVar2,&pcStack120,
                                     (ulong)((uint)(cVar6 != '0') + 8 + (uint)(cVar6 != '0')),
                                     &lStack128);
                  if (((iVar8 == 0) && (lStack128 != -1)) && (pcStack120 == pcVar2 + lVar22))
                  goto code_r0x00103410;
                  uVar9 = make_printable_str(pcVar2,lVar22);
                  uVar13 = quote(uVar9);
                  puVar23 = &UNK_00107538;
                  goto code_r0x00103794;
                }
              }
              goto code_r0x00103302;
            }
code_r0x00103407:
            lStack128 = 0;
code_r0x00103410:
            lVar11 = lStack128;
            puVar16 = (undefined4 *)xmalloc(0x20);
            cVar6 = (char)ppcVar24;
            *(undefined8 *)(puVar16 + 2) = 0;
            *puVar16 = 4;
            *(long *)(puVar16 + 6) = lVar11;
            lVar11 = *(long *)(puVar23 + 8);
            *(char *)(puVar16 + 4) = cVar3;
            if (lVar11 == 0) goto code_r0x00103acc;
            ppcVar30 = (char **)((long)ppcVar21 + 1);
            *(undefined4 **)(lVar11 + 8) = puVar16;
            *(undefined4 **)(puVar23 + 8) = puVar16;
            lVar18 = lStack112;
            lVar11 = lStack104;
            ppcVar20 = ppcStack96;
            goto code_r0x001032e8;
          }
code_r0x00103302:
          bVar5 = *(byte *)(lVar10 + (long)ppcVar30);
          ppcVar24 = (char **)(ulong)bVar5;
          if ((cVar3 == '-') &&
             (uStack216 = (ulong)*(byte *)(lVar11 + (long)ppcVar1),
             *(byte *)(lVar11 + (long)ppcVar1) == 0)) goto code_r0x00103491;
          append_normal_char();
          ppcVar4 = (char **)((long)ppcVar30 + 3);
          ppcVar30 = ppcVar1;
          goto joined_r0x001032ef;
        }
        puVar16 = (undefined4 *)xmalloc(0x20);
        *(undefined8 *)(puVar16 + 2) = 0;
        *puVar16 = 3;
        *(undefined *)(puVar16 + 4) = *puVar26;
        lVar18 = *(long *)(puVar23 + 8);
        if (lVar18 != 0) {
code_r0x00103981:
          *(undefined4 **)(lVar18 + 8) = puVar16;
          ppcVar30 = (char **)((long)ppcVar12 + 2);
          *(undefined4 **)(puVar23 + 8) = puVar16;
          lVar18 = lStack112;
          lVar11 = lStack104;
          ppcVar20 = ppcStack96;
          goto code_r0x001032e8;
        }
        ppcVar24 = (char **)&UNK_00107021;
        func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2e5,__PRETTY_FUNCTION___7150);
code_r0x001039e7:
        ppcStack96 = (char **)0x0;
      } while( true );
    }
  } while( true );
code_r0x00103491:
  bVar27 = *(byte *)(lVar10 + (long)ppcVar4);
  if (bVar27 < bVar5) {
    uVar9 = make_printable_char((ulong)bVar5);
    uVar13 = make_printable_char((ulong)bVar27);
    uVar14 = func_0x00101690(0,&UNK_00107568,5);
    func_0x00101850(0,0,uVar14,uVar9,uVar13);
    func_0x001015f0(uVar9);
    func_0x001015f0(uVar13);
code_r0x00103635:
    func_0x001015f0(lVar18);
    func_0x001015f0(lVar11);
    if (lStack88 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (undefined4 *)uStack216;
    }
code_r0x00103aa8:
    func_0x001016c0();
code_r0x00103aad:
    cVar6 = '!';
    puVar23 = &UNK_0010705c;
    func_0x00101720(&UNK_0010705c,&UNK_00107021,699,__PRETTY_FUNCTION___7136);
code_r0x00103acc:
    append_repeated_char_part_8();
    *(undefined8 *)(puVar23 + 0x10) = 0xfffffffffffffffe;
    while( true ) {
      pbVar25 = (byte *)get_next(puVar23,0);
      if ((int)pbVar25 == -1) break;
      extraout_RDX[(int)pbVar25] = 1;
    }
    if (cVar6 != '\0') {
      pbVar25 = extraout_RDX + 0x100;
      pbVar19 = extraout_RDX;
      do {
        *pbVar19 = *pbVar19 ^ 1;
        pbVar19 = pbVar19 + 1;
      } while (pbVar19 != pbVar25);
    }
    return (undefined4 *)pbVar25;
  }
  puVar16 = (undefined4 *)xmalloc(0x20);
  *(undefined8 *)(puVar16 + 2) = 0;
  *puVar16 = 1;
  *(byte *)(puVar16 + 4) = bVar5;
  *(byte *)((long)puVar16 + 0x11) = bVar27;
  if (*(long *)(puVar23 + 8) == 0) {
    func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2a5,__PRETTY_FUNCTION___7128);
    goto code_r0x00103aa8;
  }
  *(undefined4 **)(*(long *)(puVar23 + 8) + 8) = puVar16;
  ppcVar30 = (char **)((long)ppcVar30 + 3);
  *(undefined4 **)(puVar23 + 8) = puVar16;
  goto code_r0x001032e8;
}

