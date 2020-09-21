
byte * read_file_system_list(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte **ppbVar5;
  undefined8 *puVar6;
  byte **ppbVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  byte **ppbVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  undefined *puVar22;
  undefined uStack129;
  uint uStack128;
  uint uStack124;
  int iStack120;
  int iStack116;
  int iStack112;
  int iStack108;
  int iStack104;
  int iStack100;
  int iStack96;
  int iStack92;
  byte *pbStack88;
  long lStack80;
  undefined8 uStack72;
  long lStack64;
  
  bVar21 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar12 = (byte *)func_0x00102160(&UNK_0010ff1b,&UNK_0010f377);
  if (pbVar12 == (byte *)0x0) {
    pbVar11 = &UNK_0010ff70;
    pbVar12 = (byte *)func_0x00102060(&UNK_0010ff70,&UNK_0010f377);
    if (pbVar12 == (byte *)0x0) {
      pbVar8 = (byte *)0x0;
      goto code_r0x0010a6d1;
    }
    ppbVar16 = &pbStack88;
    puVar6 = (undefined8 *)func_0x00102050(pbVar12);
    while (puVar6 != (undefined8 *)0x0) {
      lVar4 = func_0x001021e0(puVar6,&UNK_0010ff7a);
      ppbVar7 = (byte **)xmalloc(0x38);
      pbVar11 = (byte *)xstrdup(*puVar6);
      uVar3 = puVar6[1];
      *ppbVar7 = pbVar11;
      pbVar11 = (byte *)xstrdup(uVar3);
      uVar3 = puVar6[2];
      ppbVar7[1] = pbVar11;
      ppbVar7[2] = (byte *)0x0;
      pbVar11 = (byte *)xstrdup(uVar3);
      lVar9 = 7;
      ppbVar5 = ppbVar7 + 5;
      bVar20 = false;
      *(byte *)ppbVar5 = *(byte *)ppbVar5 | 4;
      bVar17 = *(byte *)ppbVar5 == 0;
      ppbVar7[3] = pbVar11;
      pbVar8 = pbVar11;
      pbVar10 = &UNK_0010dac2;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar20 = *pbVar8 < *pbVar10;
        bVar17 = *pbVar8 == *pbVar10;
        pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
        pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
      } while (bVar17);
      bVar19 = true;
      bVar18 = false;
      bVar20 = (!bVar20 && !bVar17) == bVar20;
      if (!bVar20) {
        lVar9 = 5;
        pbVar8 = pbVar11;
        pbVar10 = &UNK_0010dcb2;
        do {
          if (lVar9 == 0) break;
          lVar9 = lVar9 + -1;
          bVar18 = *pbVar8 < *pbVar10;
          bVar20 = *pbVar8 == *pbVar10;
          pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
          pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
        } while (bVar20);
        bVar17 = false;
        bVar20 = (!bVar18 && !bVar20) == bVar18;
        if (!bVar20) {
          lVar9 = 6;
          pbVar8 = pbVar11;
          pbVar10 = &UNK_0010ff4a;
          do {
            if (lVar9 == 0) break;
            lVar9 = lVar9 + -1;
            bVar17 = *pbVar8 < *pbVar10;
            bVar20 = *pbVar8 == *pbVar10;
            pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
            pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
          } while (bVar20);
          bVar18 = false;
          bVar20 = (!bVar17 && !bVar20) == bVar17;
          if (!bVar20) {
            lVar9 = 8;
            pbVar8 = pbVar11;
            pbVar10 = &UNK_0010db49;
            do {
              if (lVar9 == 0) break;
              lVar9 = lVar9 + -1;
              bVar18 = *pbVar8 < *pbVar10;
              bVar20 = *pbVar8 == *pbVar10;
              pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
              pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
            } while (bVar20);
            bVar17 = false;
            bVar20 = (!bVar18 && !bVar20) == bVar18;
            if (!bVar20) {
              lVar9 = 7;
              pbVar8 = pbVar11;
              pbVar10 = &UNK_0010db51;
              do {
                if (lVar9 == 0) break;
                lVar9 = lVar9 + -1;
                bVar17 = *pbVar8 < *pbVar10;
                bVar20 = *pbVar8 == *pbVar10;
                pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
              } while (bVar20);
              bVar18 = false;
              bVar20 = (!bVar17 && !bVar20) == bVar17;
              if (!bVar20) {
                lVar9 = 8;
                pbVar8 = pbVar11;
                pbVar10 = &UNK_0010db9a;
                do {
                  if (lVar9 == 0) break;
                  lVar9 = lVar9 + -1;
                  bVar18 = *pbVar8 < *pbVar10;
                  bVar20 = *pbVar8 == *pbVar10;
                  pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                  pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                } while (bVar20);
                bVar17 = false;
                bVar20 = (!bVar18 && !bVar20) == bVar18;
                if (!bVar20) {
                  lVar9 = 7;
                  pbVar8 = pbVar11;
                  pbVar10 = &UNK_0010dc63;
                  do {
                    if (lVar9 == 0) break;
                    lVar9 = lVar9 + -1;
                    bVar17 = *pbVar8 < *pbVar10;
                    bVar20 = *pbVar8 == *pbVar10;
                    pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                    pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                  } while (bVar20);
                  bVar18 = false;
                  bVar20 = (!bVar17 && !bVar20) == bVar17;
                  if (!bVar20) {
                    lVar9 = 0xb;
                    pbVar8 = pbVar11;
                    pbVar10 = &UNK_0010dcdd;
                    do {
                      if (lVar9 == 0) break;
                      lVar9 = lVar9 + -1;
                      bVar18 = *pbVar8 < *pbVar10;
                      bVar20 = *pbVar8 == *pbVar10;
                      pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                      pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                    } while (bVar20);
                    bVar17 = false;
                    bVar20 = (!bVar18 && !bVar20) == bVar18;
                    if (!bVar20) {
                      lVar9 = 6;
                      pbVar8 = pbVar11;
                      pbVar10 = &UNK_0010dd2a;
                      do {
                        if (lVar9 == 0) break;
                        lVar9 = lVar9 + -1;
                        bVar17 = *pbVar8 < *pbVar10;
                        bVar20 = *pbVar8 == *pbVar10;
                        pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                        pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                      } while (bVar20);
                      bVar18 = false;
                      bVar20 = (!bVar17 && !bVar20) == bVar17;
                      if (!bVar20) {
                        lVar9 = 6;
                        pbVar8 = pbVar11;
                        pbVar10 = &UNK_0010dd57;
                        do {
                          if (lVar9 == 0) break;
                          lVar9 = lVar9 + -1;
                          bVar18 = *pbVar8 < *pbVar10;
                          bVar20 = *pbVar8 == *pbVar10;
                          pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                          pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                        } while (bVar20);
                        bVar17 = false;
                        bVar20 = (!bVar18 && !bVar20) == bVar18;
                        if (!bVar20) {
                          lVar9 = 7;
                          pbVar8 = pbVar11;
                          pbVar10 = &UNK_0010ff50;
                          do {
                            if (lVar9 == 0) break;
                            lVar9 = lVar9 + -1;
                            bVar17 = *pbVar8 < *pbVar10;
                            bVar20 = *pbVar8 == *pbVar10;
                            pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                            pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                          } while (bVar20);
                          if ((!bVar17 && !bVar20) != bVar17) {
                            iVar2 = func_0x00101fc0(pbVar11,&UNK_0010ff57);
                            bVar19 = true;
                            if (iVar2 != 0) {
                              iVar2 = func_0x00101fc0(pbVar11,&UNK_0010ff5e);
                              bVar19 = iVar2 == 0 && lVar4 == 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pbVar8 = *ppbVar7;
      *(byte *)(ppbVar7 + 5) = *(byte *)(ppbVar7 + 5) & 0xfe | bVar19;
      lVar4 = func_0x00101eb0(pbVar8,0x3a);
      bVar20 = true;
      if (lVar4 != 0) goto code_r0x0010aab7;
      bVar17 = *pbVar8 < 0x2f;
      bVar19 = *pbVar8 == 0x2f;
      if (bVar19) {
        bVar17 = pbVar8[1] < 0x2f;
        bVar19 = pbVar8[1] == 0x2f;
        if (!bVar19) goto code_r0x0010ab4e;
        lVar4 = 6;
        pbVar10 = pbVar11;
        pbVar13 = &UNK_0010ff63;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          bVar17 = *pbVar10 < *pbVar13;
          bVar19 = *pbVar10 == *pbVar13;
          pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
          pbVar13 = pbVar13 + (ulong)bVar21 * -2 + 1;
        } while (bVar19);
        bVar18 = false;
        bVar19 = (!bVar17 && !bVar19) == bVar17;
        if (!bVar19) {
          lVar4 = 5;
          pbVar10 = &UNK_0010db19;
          do {
            if (lVar4 == 0) break;
            lVar4 = lVar4 + -1;
            bVar18 = *pbVar11 < *pbVar10;
            bVar19 = *pbVar11 == *pbVar10;
            pbVar11 = pbVar11 + (ulong)bVar21 * -2 + 1;
            pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
          } while (bVar19);
          bVar17 = false;
          bVar19 = (!bVar18 && !bVar19) == bVar18;
          if (!bVar19) goto code_r0x0010ab4e;
        }
      }
      else {
code_r0x0010ab4e:
        lVar4 = 7;
        pbVar11 = &UNK_0010ff69;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          bVar17 = *pbVar11 < *pbVar8;
          bVar19 = *pbVar11 == *pbVar8;
          pbVar11 = pbVar11 + (ulong)bVar21 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
        } while (bVar19);
        bVar20 = (!bVar17 && !bVar19) == bVar17;
      }
code_r0x0010aab7:
      ppbVar7[4] = (byte *)0xffffffffffffffff;
      *(byte *)(ppbVar7 + 5) = *(byte *)(ppbVar7 + 5) & 0xfd | bVar20 * '\x02';
      *(byte ***)ppbVar16 = ppbVar7;
      ppbVar16 = ppbVar7 + 6;
      puVar6 = (undefined8 *)func_0x00102050(pbVar12);
    }
    iVar2 = func_0x00101d20();
    if (iVar2 != 0) goto code_r0x0010a6c5;
code_r0x0010aafe:
    puVar14 = (undefined4 *)func_0x00101d40();
    uVar15 = *puVar14;
  }
  else {
    ppbVar16 = &pbStack88;
    lStack80 = 0;
    uStack72 = 0;
    while( true ) {
      puVar22 = &UNK_0010a463;
      lVar4 = func_0x00101fb0(&lStack80,&uStack72,10,pbVar12);
      if (lVar4 == -1) break;
      uVar1 = func_0x00102090(lStack80,&UNK_0010ff80,&uStack128,&uStack124,&iStack96,&iStack92,
                              &iStack120,&iStack116,&uStack129,puVar22);
      if ((((uVar1 & 0xfffffffb) == 3) &&
          (lVar4 = func_0x001021f0(iStack116 + lStack80,&UNK_0010ff30), lVar4 != 0)) &&
         (uVar1 = func_0x00102090(lVar4,&UNK_0010ff34,&iStack112,&iStack108,&iStack104,&iStack100,
                                  &uStack129), (uVar1 & 0xfffffffb) == 1)) {
        *(undefined *)(lStack80 + iStack92) = 0;
        *(undefined *)(lStack80 + iStack116) = 0;
        *(undefined *)(lVar4 + iStack108) = 0;
        *(undefined *)(lVar4 + iStack100) = 0;
        unescape_tab(iStack104 + lVar4);
        unescape_tab(iStack120 + lStack80);
        unescape_tab(iStack96 + lStack80);
        ppbVar5 = (byte **)xmalloc(0x38);
        pbVar11 = (byte *)xstrdup(iStack104 + lVar4);
        *ppbVar5 = pbVar11;
        pbVar11 = (byte *)xstrdup(iStack120 + lStack80);
        ppbVar5[1] = pbVar11;
        pbVar11 = (byte *)xstrdup(iStack96 + lStack80);
        ppbVar5[2] = pbVar11;
        pbVar11 = (byte *)xstrdup(iStack112 + lVar4);
        ppbVar5[3] = pbVar11;
        *(byte *)(ppbVar5 + 5) = *(byte *)(ppbVar5 + 5) | 4;
        lVar4 = 7;
        bVar17 = false;
        pbVar13 = (byte *)(((ulong)uStack124 & 0xffffff00) << 0xc |
                          ((ulong)uStack128 & 0xfffff000) << 0x20 |
                          (ulong)((uStack128 & 0xfff) << 8) | (ulong)(byte)uStack124);
        bVar19 = pbVar13 == (byte *)0x0;
        bVar20 = true;
        pbVar8 = pbVar11;
        pbVar10 = &UNK_0010dac2;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          bVar17 = *pbVar8 < *pbVar10;
          bVar19 = *pbVar8 == *pbVar10;
          pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
          pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
        } while (bVar19);
        ppbVar5[4] = pbVar13;
        bVar18 = false;
        bVar17 = (!bVar17 && !bVar19) == bVar17;
        if (!bVar17) {
          lVar4 = 5;
          pbVar8 = pbVar11;
          pbVar10 = &UNK_0010dcb2;
          do {
            if (lVar4 == 0) break;
            lVar4 = lVar4 + -1;
            bVar18 = *pbVar8 < *pbVar10;
            bVar17 = *pbVar8 == *pbVar10;
            pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
            pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
          } while (bVar17);
          bVar19 = false;
          bVar17 = (!bVar18 && !bVar17) == bVar18;
          if (!bVar17) {
            lVar4 = 6;
            pbVar8 = pbVar11;
            pbVar10 = &UNK_0010ff4a;
            do {
              if (lVar4 == 0) break;
              lVar4 = lVar4 + -1;
              bVar19 = *pbVar8 < *pbVar10;
              bVar17 = *pbVar8 == *pbVar10;
              pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
              pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
            } while (bVar17);
            bVar18 = false;
            bVar17 = (!bVar19 && !bVar17) == bVar19;
            if (!bVar17) {
              lVar4 = 8;
              pbVar8 = pbVar11;
              pbVar10 = &UNK_0010db49;
              do {
                if (lVar4 == 0) break;
                lVar4 = lVar4 + -1;
                bVar18 = *pbVar8 < *pbVar10;
                bVar17 = *pbVar8 == *pbVar10;
                pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
              } while (bVar17);
              bVar19 = false;
              bVar17 = (!bVar18 && !bVar17) == bVar18;
              if (!bVar17) {
                lVar4 = 7;
                pbVar8 = pbVar11;
                pbVar10 = &UNK_0010db51;
                do {
                  if (lVar4 == 0) break;
                  lVar4 = lVar4 + -1;
                  bVar19 = *pbVar8 < *pbVar10;
                  bVar17 = *pbVar8 == *pbVar10;
                  pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                  pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                } while (bVar17);
                bVar18 = false;
                bVar17 = (!bVar19 && !bVar17) == bVar19;
                if (!bVar17) {
                  lVar4 = 8;
                  pbVar8 = pbVar11;
                  pbVar10 = &UNK_0010db9a;
                  do {
                    if (lVar4 == 0) break;
                    lVar4 = lVar4 + -1;
                    bVar18 = *pbVar8 < *pbVar10;
                    bVar17 = *pbVar8 == *pbVar10;
                    pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                    pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                  } while (bVar17);
                  bVar19 = false;
                  bVar17 = (!bVar18 && !bVar17) == bVar18;
                  if (!bVar17) {
                    lVar4 = 7;
                    pbVar8 = pbVar11;
                    pbVar10 = &UNK_0010dc63;
                    do {
                      if (lVar4 == 0) break;
                      lVar4 = lVar4 + -1;
                      bVar19 = *pbVar8 < *pbVar10;
                      bVar17 = *pbVar8 == *pbVar10;
                      pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                      pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                    } while (bVar17);
                    bVar18 = false;
                    bVar17 = (!bVar19 && !bVar17) == bVar19;
                    if (!bVar17) {
                      lVar4 = 0xb;
                      pbVar8 = pbVar11;
                      pbVar10 = &UNK_0010dcdd;
                      do {
                        if (lVar4 == 0) break;
                        lVar4 = lVar4 + -1;
                        bVar18 = *pbVar8 < *pbVar10;
                        bVar17 = *pbVar8 == *pbVar10;
                        pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                        pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                      } while (bVar17);
                      bVar19 = false;
                      bVar17 = (!bVar18 && !bVar17) == bVar18;
                      if (!bVar17) {
                        lVar4 = 6;
                        pbVar8 = pbVar11;
                        pbVar10 = &UNK_0010dd2a;
                        do {
                          if (lVar4 == 0) break;
                          lVar4 = lVar4 + -1;
                          bVar19 = *pbVar8 < *pbVar10;
                          bVar17 = *pbVar8 == *pbVar10;
                          pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                          pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                        } while (bVar17);
                        bVar18 = false;
                        bVar17 = (!bVar19 && !bVar17) == bVar19;
                        if (!bVar17) {
                          lVar4 = 6;
                          pbVar8 = pbVar11;
                          pbVar10 = &UNK_0010dd57;
                          do {
                            if (lVar4 == 0) break;
                            lVar4 = lVar4 + -1;
                            bVar18 = *pbVar8 < *pbVar10;
                            bVar17 = *pbVar8 == *pbVar10;
                            pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                            pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                          } while (bVar17);
                          bVar19 = false;
                          bVar17 = (!bVar18 && !bVar17) == bVar18;
                          if (!bVar17) {
                            lVar4 = 7;
                            pbVar8 = pbVar11;
                            pbVar10 = &UNK_0010ff50;
                            do {
                              if (lVar4 == 0) break;
                              lVar4 = lVar4 + -1;
                              bVar19 = *pbVar8 < *pbVar10;
                              bVar17 = *pbVar8 == *pbVar10;
                              pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
                              pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
                            } while (bVar17);
                            if ((!bVar19 && !bVar17) != bVar19) {
                              iVar2 = func_0x00101fc0(pbVar11,&UNK_0010ff57);
                              bVar20 = true;
                              if (iVar2 != 0) {
                                iVar2 = func_0x00101fc0(pbVar11,&UNK_0010ff5e);
                                bVar20 = iVar2 == 0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        pbVar8 = *ppbVar5;
        *(byte *)(ppbVar5 + 5) = *(byte *)(ppbVar5 + 5) & 0xfe | bVar20;
        lVar4 = func_0x00101eb0(pbVar8,0x3a);
        bVar20 = true;
        if (lVar4 != 0) goto code_r0x0010a67e;
        bVar17 = *pbVar8 < 0x2f;
        bVar19 = *pbVar8 == 0x2f;
        if (bVar19) {
          bVar17 = pbVar8[1] < 0x2f;
          bVar19 = pbVar8[1] == 0x2f;
          if (!bVar19) goto code_r0x0010a84a;
          lVar4 = 6;
          pbVar10 = pbVar11;
          pbVar13 = &UNK_0010ff63;
          do {
            if (lVar4 == 0) break;
            lVar4 = lVar4 + -1;
            bVar17 = *pbVar10 < *pbVar13;
            bVar19 = *pbVar10 == *pbVar13;
            pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
            pbVar13 = pbVar13 + (ulong)bVar21 * -2 + 1;
          } while (bVar19);
          bVar18 = false;
          bVar19 = (!bVar17 && !bVar19) == bVar17;
          if (!bVar19) {
            lVar4 = 5;
            pbVar10 = &UNK_0010db19;
            do {
              if (lVar4 == 0) break;
              lVar4 = lVar4 + -1;
              bVar18 = *pbVar11 < *pbVar10;
              bVar19 = *pbVar11 == *pbVar10;
              pbVar11 = pbVar11 + (ulong)bVar21 * -2 + 1;
              pbVar10 = pbVar10 + (ulong)bVar21 * -2 + 1;
            } while (bVar19);
            bVar17 = false;
            bVar19 = (!bVar18 && !bVar19) == bVar18;
            if (!bVar19) goto code_r0x0010a84a;
          }
        }
        else {
code_r0x0010a84a:
          lVar4 = 7;
          pbVar11 = &UNK_0010ff69;
          do {
            if (lVar4 == 0) break;
            lVar4 = lVar4 + -1;
            bVar17 = *pbVar11 < *pbVar8;
            bVar19 = *pbVar11 == *pbVar8;
            pbVar11 = pbVar11 + (ulong)bVar21 * -2 + 1;
            pbVar8 = pbVar8 + (ulong)bVar21 * -2 + 1;
          } while (bVar19);
          bVar20 = (!bVar17 && !bVar19) == bVar17;
        }
code_r0x0010a67e:
        *(byte *)(ppbVar5 + 5) = *(byte *)(ppbVar5 + 5) & 0xfd | bVar20 * '\x02';
        *(byte ***)ppbVar16 = ppbVar5;
        ppbVar16 = ppbVar5 + 6;
      }
    }
    func_0x00101d10(lStack80);
    if ((*pbVar12 & 0x20) == 0) {
      iVar2 = rpl_fclose();
      if (iVar2 != -1) {
code_r0x0010a6c5:
        *ppbVar16 = (byte *)0x0;
        pbVar8 = pbStack88;
        pbVar11 = pbVar12;
        goto code_r0x0010a6d1;
      }
      goto code_r0x0010aafe;
    }
    puVar14 = (undefined4 *)func_0x00101d40();
    uVar15 = *puVar14;
    rpl_fclose(pbVar12);
    *puVar14 = uVar15;
  }
  *ppbVar16 = (byte *)0x0;
  pbVar11 = pbStack88;
  while (pbStack88 = pbVar11, pbVar11 != (byte *)0x0) {
    pbVar11 = *(byte **)(pbVar11 + 0x30);
    free_mount_entry();
  }
  *puVar14 = uVar15;
  pbVar8 = (byte *)0x0;
code_r0x0010a6d1:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pbVar8;
  }
  func_0x00101e80();
  if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)PTR_unsetenv_00312f68)(&UNK_0010ddaf);
    return (byte *)uVar3;
  }
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)PTR_setenv_00312d98)(&UNK_0010ddaf,pbVar11,1);
  return (byte *)uVar3;
}

