
byte * parse_str(byte *param_1,undefined *param_2)

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
  char **ppcVar23;
  undefined *puVar24;
  byte bVar25;
  uint uVar26;
  long lVar27;
  char **ppcVar28;
  byte *pbVar29;
  long in_FS_OFFSET;
  ulong uStack192;
  long lStack104;
  char *pcStack96;
  long lStack88;
  long lStack80;
  char **ppcStack72;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = func_0x001016b0();
  lVar10 = xmalloc(uVar9);
  ppcVar23 = (char **)0x1;
  lStack88 = lVar10;
  lVar11 = xcalloc(uVar9);
  bVar5 = *param_1;
  lStack80 = lVar11;
  if (bVar5 == 0) goto code_r0x001039e7;
  ppcVar20 = (char **)0x0;
  ppcVar28 = (char **)0x0;
  do {
    iVar8 = (int)ppcVar20;
    ppcVar20 = (char **)(ulong)(iVar8 + 1);
    ppcStack72 = (char **)(ulong)((int)ppcVar28 + 1);
    bVar25 = param_1[(long)ppcVar20];
    ppcVar23 = ppcVar20;
    if (bVar5 == 0x5c) {
      *(undefined *)(lVar11 + (long)ppcVar28) = 1;
      if (bVar25 == 0x62) {
        bVar25 = 8;
        uVar7 = iVar8 + 2;
      }
      else {
        if ((char)bVar25 < 'c') {
          if ((char)bVar25 < '8') {
            if ((char)bVar25 < '0') {
              if (bVar25 == 0) {
                uVar9 = func_0x00101690(0,&UNK_00107458,5);
                ppcVar23 = (char **)0x0;
                func_0x00101850(0,0,uVar9);
                uVar7 = iVar8 + 1;
                *(undefined *)(lVar11 + (long)ppcVar28) = 0;
                bVar25 = 0x5c;
              }
              else {
code_r0x0010391d:
                uVar7 = iVar8 + 2;
              }
            }
            else {
              uVar7 = iVar8 + 2;
              uVar17 = (uint)bVar25;
              bVar25 = (byte)(uVar17 - 0x30);
              if ((int)(char)param_1[uVar7] - 0x30U < 8) {
                uVar26 = ((int)(char)param_1[uVar7] - 0x30U) + (uVar17 - 0x30) * 8;
                bVar25 = (byte)uVar26;
                uVar7 = iVar8 + 3;
                uVar17 = (int)(char)param_1[iVar8 + 3] - 0x30;
                if (uVar17 < 8) {
                  if ((int)(uVar17 + (uVar26 & 0xff) * 8) < 0x100) {
                    bVar25 = (char)uVar17 + bVar25 * '\b';
                    uVar7 = iVar8 + 4;
                  }
                  else {
                    uVar9 = func_0x00101690(0,&UNK_001073f0,5);
                    ppcVar23 = (char **)0x0;
                    func_0x00101850(0,0,uVar9);
                    uVar7 = iVar8 + 3;
                  }
                }
              }
            }
          }
          else {
            if (bVar25 == 0x5c) {
              bVar25 = 0x5c;
              uVar7 = iVar8 + 2;
            }
            else {
              if (bVar25 != 0x61) goto code_r0x0010391d;
              bVar25 = 7;
              uVar7 = iVar8 + 2;
            }
          }
        }
        else {
          if (bVar25 == 0x72) {
            bVar25 = 0xd;
            uVar7 = iVar8 + 2;
          }
          else {
            if ((char)bVar25 < 's') {
              if (bVar25 == 0x66) {
                bVar25 = 0xc;
                uVar7 = iVar8 + 2;
              }
              else {
                if (bVar25 != 0x6e) goto code_r0x0010391d;
                bVar25 = 10;
                uVar7 = iVar8 + 2;
              }
            }
            else {
              if (bVar25 == 0x74) {
                bVar25 = 9;
                uVar7 = iVar8 + 2;
              }
              else {
                if (bVar25 != 0x76) goto code_r0x0010391d;
                bVar25 = 0xb;
                uVar7 = iVar8 + 2;
              }
            }
          }
        }
      }
      ppcVar20 = (char **)(ulong)uVar7;
      *(byte *)(lVar10 + (long)ppcVar28) = bVar25;
      bVar5 = param_1[(long)ppcVar20];
    }
    else {
      *(byte *)(lVar10 + (long)ppcVar28) = bVar5;
      bVar5 = bVar25;
    }
    ppcVar28 = ppcStack72;
    if (bVar5 == 0) {
      do {
        ppcVar28 = (char **)0x0;
        lVar18 = lVar10;
        ppcVar20 = ppcStack72;
code_r0x001032e8:
        ppcVar4 = (char **)((long)ppcVar28 + 2);
joined_r0x001032ef:
        if (ppcVar20 <= ppcVar4) {
          if (ppcVar28 < ppcVar20) {
            pbVar29 = (byte *)((long)ppcVar28 + lVar10);
            do {
              bVar5 = *pbVar29;
              pbVar29 = pbVar29 + 1;
              append_normal_char(param_2,(ulong)bVar5);
            } while ((byte *)(lVar10 + (long)ppcVar20) != pbVar29);
          }
          uStack192 = 1;
          goto code_r0x00103635;
        }
        ppcVar1 = (char **)((long)ppcVar28 + 1);
        cVar3 = *(char *)(lVar18 + 1 + (long)ppcVar28);
        if ((*(char *)(lVar18 + (long)ppcVar28) != '[') ||
           (uStack192 = (ulong)*(byte *)(lVar11 + (long)ppcVar28),
           *(byte *)(lVar11 + (long)ppcVar28) != 0)) goto code_r0x00103302;
        if (((cVar3 != ':') && (cVar3 != '=')) || (*(char *)(lVar11 + (long)ppcVar1) != '\0'))
        goto code_r0x00103391;
        bVar5 = *(byte *)(lVar10 + (long)ppcVar1);
        ppcVar23 = (char **)(ulong)bVar5;
        ppcVar21 = ppcVar4;
        do {
          ppcVar12 = ppcVar21;
          if ((char **)((long)ppcVar20 + -1) <= ppcVar12) goto code_r0x00103391;
          ppcVar21 = (char **)((long)ppcVar12 + 1);
        } while ((((bVar5 != *(byte *)(lVar18 + (long)ppcVar12)) ||
                  (*(char *)(lVar18 + 1 + (long)ppcVar12) != ']')) ||
                 (*(char *)(lVar11 + -1 + (long)ppcVar21) != '\0')) ||
                (*(char *)(lVar11 + (long)ppcVar21) != '\0'));
        puVar24 = (undefined *)(lVar10 + (long)ppcVar4);
        lVar22 = (-2 - (long)ppcVar28) + (long)ppcVar12;
        if (lVar22 == 0) {
          if (bVar5 == 0x3a) {
            puVar24 = &UNK_001074a0;
          }
          else {
            puVar24 = &UNK_001074c8;
          }
          uVar9 = func_0x00101690(0,puVar24,5);
          func_0x00101850(0,0,uVar9);
          goto code_r0x00103635;
        }
        if (bVar5 == 0x3a) {
          lVar27 = 0;
          do {
            ppcVar21 = *(char ***)(char_class_name + lVar27 * 8);
            ppcVar23 = ppcVar21;
            iVar8 = func_0x00101620(puVar24,ppcVar21,lVar22);
            if ((iVar8 == 0) && (lVar15 = func_0x001016b0(ppcVar21), lVar22 == lVar15)) {
              puVar16 = (undefined4 *)xmalloc(0x20);
              *(undefined8 *)(puVar16 + 2) = 0;
              *puVar16 = 2;
              lVar18 = *(long *)(param_2 + 8);
              puVar16[4] = (int)lVar27;
              if (lVar18 != 0) goto code_r0x00103981;
              goto code_r0x00103aad;
            }
            lVar27 = lVar27 + 1;
          } while (lVar27 != 0xc);
          ppcVar23 = ppcVar4;
          cVar6 = star_digits_closebracket(&lStack88);
          if (cVar6 != '\0') goto code_r0x00103391;
          uVar9 = make_printable_str(puVar24,lVar22);
          uVar13 = quote(uVar9);
          puVar24 = &UNK_00107067;
code_r0x00103794:
          uVar14 = func_0x00101690(0,puVar24,5);
code_r0x0010379e:
          func_0x00101850(0,0,uVar14,uVar13);
          func_0x001015f0(uVar9);
          goto code_r0x00103635;
        }
        if (lVar22 != 1) {
          ppcVar23 = ppcVar4;
          cVar6 = star_digits_closebracket(&lStack88);
          if (cVar6 == '\0') {
            uVar13 = make_printable_str(puVar24,lVar22);
            uVar14 = func_0x00101690(0,&UNK_001074f8,5);
            uVar9 = uVar13;
            goto code_r0x0010379e;
          }
code_r0x00103391:
          if (((*(char *)(lVar18 + (long)ppcVar4) == '*') &&
              (*(char *)(lVar11 + (long)ppcVar4) == '\0')) &&
             ((ppcVar21 = (char **)((long)ppcVar28 + 3), ppcVar21 < ppcVar20 &&
              (*(char *)(lVar11 + 3 + (long)ppcVar28) == '\0')))) {
            pcVar2 = (char *)(lVar18 + (long)ppcVar21);
            cVar6 = *pcVar2;
            if (cVar6 != ']') {
              while ((ppcVar12 = ppcVar21, ppcVar21 = (char **)((long)ppcVar12 + 1),
                     ppcVar21 < ppcVar20 && (*(char *)(lVar11 + 1 + (long)ppcVar12) == '\0'))) {
                if (*(char *)(lVar18 + (long)ppcVar21) == ']') {
                  lVar22 = ~(ulong)ppcVar1 + (long)ppcVar12;
                  if (lVar22 == 0) goto code_r0x00103407;
                  ppcVar23 = &pcStack96;
                  iVar8 = xstrtoumax(pcVar2,&pcStack96,
                                     (ulong)((uint)(cVar6 != '0') + 8 + (uint)(cVar6 != '0')),
                                     &lStack104);
                  if (((iVar8 == 0) && (lStack104 != -1)) && (pcStack96 == pcVar2 + lVar22))
                  goto code_r0x00103410;
                  uVar9 = make_printable_str(pcVar2,lVar22);
                  uVar13 = quote(uVar9);
                  puVar24 = &UNK_00107538;
                  goto code_r0x00103794;
                }
              }
              goto code_r0x00103302;
            }
code_r0x00103407:
            lStack104 = 0;
code_r0x00103410:
            lVar11 = lStack104;
            puVar16 = (undefined4 *)xmalloc(0x20);
            cVar6 = (char)ppcVar23;
            *(undefined8 *)(puVar16 + 2) = 0;
            *puVar16 = 4;
            *(long *)(puVar16 + 6) = lVar11;
            lVar11 = *(long *)(param_2 + 8);
            *(char *)(puVar16 + 4) = cVar3;
            if (lVar11 == 0) goto code_r0x00103acc;
            ppcVar28 = (char **)((long)ppcVar21 + 1);
            *(undefined4 **)(lVar11 + 8) = puVar16;
            *(undefined4 **)(param_2 + 8) = puVar16;
            lVar18 = lStack88;
            lVar11 = lStack80;
            ppcVar20 = ppcStack72;
            goto code_r0x001032e8;
          }
code_r0x00103302:
          bVar5 = *(byte *)(lVar10 + (long)ppcVar28);
          ppcVar23 = (char **)(ulong)bVar5;
          if ((cVar3 == '-') &&
             (uStack192 = (ulong)*(byte *)(lVar11 + (long)ppcVar1),
             *(byte *)(lVar11 + (long)ppcVar1) == 0)) goto code_r0x00103491;
          append_normal_char();
          ppcVar4 = (char **)((long)ppcVar28 + 3);
          ppcVar28 = ppcVar1;
          goto joined_r0x001032ef;
        }
        puVar16 = (undefined4 *)xmalloc(0x20);
        *(undefined8 *)(puVar16 + 2) = 0;
        *puVar16 = 3;
        *(undefined *)(puVar16 + 4) = *puVar24;
        lVar18 = *(long *)(param_2 + 8);
        if (lVar18 != 0) {
code_r0x00103981:
          *(undefined4 **)(lVar18 + 8) = puVar16;
          ppcVar28 = (char **)((long)ppcVar12 + 2);
          *(undefined4 **)(param_2 + 8) = puVar16;
          lVar18 = lStack88;
          lVar11 = lStack80;
          ppcVar20 = ppcStack72;
          goto code_r0x001032e8;
        }
        ppcVar23 = (char **)&UNK_00107021;
        func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2e5,__PRETTY_FUNCTION___7150);
code_r0x001039e7:
        ppcStack72 = (char **)0x0;
      } while( true );
    }
  } while( true );
code_r0x00103491:
  bVar25 = *(byte *)(lVar10 + (long)ppcVar4);
  if (bVar25 < bVar5) {
    uVar9 = make_printable_char((ulong)bVar5);
    uVar13 = make_printable_char((ulong)bVar25);
    uVar14 = func_0x00101690(0,&UNK_00107568,5);
    func_0x00101850(0,0,uVar14,uVar9,uVar13);
    func_0x001015f0(uVar9);
    func_0x001015f0(uVar13);
code_r0x00103635:
    func_0x001015f0(lVar18);
    func_0x001015f0(lVar11);
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (byte *)uStack192;
    }
code_r0x00103aa8:
    func_0x001016c0();
code_r0x00103aad:
    cVar6 = '!';
    param_2 = &UNK_0010705c;
    func_0x00101720(&UNK_0010705c,&UNK_00107021,699,__PRETTY_FUNCTION___7136);
code_r0x00103acc:
    append_repeated_char_part_8();
    *(undefined8 *)(param_2 + 0x10) = 0xfffffffffffffffe;
    while( true ) {
      pbVar29 = (byte *)get_next(param_2,0);
      if ((int)pbVar29 == -1) break;
      extraout_RDX[(int)pbVar29] = 1;
    }
    if (cVar6 != '\0') {
      pbVar29 = extraout_RDX + 0x100;
      pbVar19 = extraout_RDX;
      do {
        *pbVar19 = *pbVar19 ^ 1;
        pbVar19 = pbVar19 + 1;
      } while (pbVar19 != pbVar29);
    }
    return pbVar29;
  }
  puVar16 = (undefined4 *)xmalloc(0x20);
  *(undefined8 *)(puVar16 + 2) = 0;
  *puVar16 = 1;
  *(byte *)(puVar16 + 4) = bVar5;
  *(byte *)((long)puVar16 + 0x11) = bVar25;
  if (*(long *)(param_2 + 8) == 0) {
    func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2a5,__PRETTY_FUNCTION___7128);
    goto code_r0x00103aa8;
  }
  *(undefined4 **)(*(long *)(param_2 + 8) + 8) = puVar16;
  ppcVar28 = (char **)((long)ppcVar28 + 3);
  *(undefined4 **)(param_2 + 8) = puVar16;
  goto code_r0x001032e8;
}

