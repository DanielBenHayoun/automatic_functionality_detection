
undefined8 cut_file(byte *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 extraout_RDX;
  byte **ppbVar9;
  byte bVar10;
  ulong unaff_RBX;
  undefined *puVar11;
  byte bVar12;
  ulong unaff_RBP;
  byte *pbVar13;
  undefined *puVar14;
  char cVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  long in_FS_OFFSET;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  byte *pbStack240;
  undefined *puStack232;
  byte *apbStack224 [5];
  undefined *puStack184;
  undefined *puStack176;
  undefined *puStack168;
  undefined *puStack160;
  undefined *puStack152;
  undefined8 uStack144;
  undefined8 uStack136;
  undefined8 uStack120;
  ulong uStack104;
  undefined *puStack96;
  uint *puStack88;
  undefined *puStack80;
  byte *pbStack72;
  uint uStack60;
  
  bVar23 = 0;
  lVar7 = 2;
  bVar21 = &stack0xffffffffffffffd0 < (undefined *)0x18;
  bVar22 = (undefined *)register0x00000020 == (undefined *)0x48;
  pbVar17 = param_1;
  pbVar13 = &UNK_00107052;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    bVar21 = *pbVar17 < *pbVar13;
    bVar22 = *pbVar17 == *pbVar13;
    pbVar17 = pbVar17 + 1;
    pbVar13 = pbVar13 + 1;
  } while (bVar22);
  pbStack72 = param_1;
  if ((!bVar21 && !bVar22) == bVar21) {
    have_read_stdin = 1;
    puVar20 = stdin;
  }
  else {
    puStack80 = &UNK_001024b0;
    puVar20 = (uint *)func_0x00101960(param_1,&UNK_001065c1);
    if (puVar20 == (uint *)0x0) goto code_r0x001024bc;
  }
  puStack80 = &UNK_00101fbb;
  fadvise();
  current_rp = frp;
  if (operating_mode == 1) {
    uVar19 = 0;
    bVar12 = 0;
code_r0x00102520:
    do {
      pbVar17 = *(byte **)(puVar20 + 2);
      if (*(byte **)(puVar20 + 4) <= pbVar17) goto code_r0x001025b7;
      while( true ) {
        bVar10 = line_delim;
        *(byte **)(puVar20 + 2) = pbVar17 + 1;
        uVar18 = (ulong)*pbVar17;
        if (*pbVar17 == bVar10) break;
        while( true ) {
          uVar19 = uVar19 + 1;
          if (current_rp[1] <= uVar19 && uVar19 != current_rp[1]) {
            current_rp = current_rp + 2;
          }
          if (uVar19 < *current_rp) goto code_r0x00102520;
          if ((output_delimiter_specified != 0) &&
             (bVar10 = bVar12 & uVar19 == *current_rp, bVar12 = output_delimiter_specified,
             bVar10 != 0)) {
            puStack80 = &UNK_00102700;
            func_0x001018e0(output_delimiter_string,1,output_delimiter_length);
            bVar12 = bVar10;
          }
          puVar11 = *(undefined **)(stdout + 0x28);
          if (*(undefined **)(stdout + 0x30) <= puVar11) {
            puStack80 = &UNK_001026e3;
            func_0x001017a0(stdout);
            goto code_r0x00102520;
          }
          *(undefined **)(stdout + 0x28) = puVar11 + 1;
          *puVar11 = (char)uVar18;
          pbVar17 = *(byte **)(puVar20 + 2);
          if (pbVar17 < *(byte **)(puVar20 + 4)) break;
code_r0x001025b7:
          puStack80 = &UNK_001025bf;
          uVar3 = func_0x00101670(puVar20);
          bVar10 = line_delim;
          uVar18 = (ulong)uVar3;
          if (uVar3 == (uint)line_delim) goto code_r0x00102610;
          if (uVar3 == 0xffffffff) {
            if (uVar19 == 0) goto code_r0x00102458;
            pbVar17 = *(byte **)(stdout + 0x28);
            if (pbVar17 < *(byte **)(stdout + 0x30)) {
              *(byte **)(stdout + 0x28) = pbVar17 + 1;
              *pbVar17 = bVar10;
              uVar3 = *puVar20;
            }
            else {
              puStack80 = &UNK_00102730;
              func_0x001017a0();
              uVar3 = *puVar20;
            }
            goto code_r0x0010245b;
          }
        }
      }
code_r0x00102610:
      pbVar17 = *(byte **)(stdout + 0x28);
      if (pbVar17 < *(byte **)(stdout + 0x30)) {
        *(byte **)(stdout + 0x28) = pbVar17 + 1;
        *pbVar17 = bVar10;
      }
      else {
        puStack80 = &UNK_001026d2;
        func_0x001017a0();
      }
      current_rp = frp;
      uVar19 = 0;
      bVar12 = 0;
    } while( true );
  }
  if (*(ulong *)(puVar20 + 2) < *(ulong *)(puVar20 + 4)) {
    *(ulong *)(puVar20 + 2) = *(ulong *)(puVar20 + 2) + 1;
code_r0x00101fef:
    uVar18 = 1;
    puStack80 = &UNK_00101ffd;
    func_0x001018c0();
    bVar12 = 1 < *current_rp ^ suppress_non_delimited;
    _bVar12 = unaff_RBP & 0xffffffffffffff00 | (ulong)bVar12;
    uVar16 = 0;
    uVar19 = 0;
code_r0x00102020:
    do {
      while( true ) {
        bVar10 = uVar18 == 1 & bVar12;
        uVar1 = (ulong)bVar10;
        uStack104 = unaff_RBX & 0xffffffffffffff00 | uVar1;
        if (bVar10 == 0) break;
        uVar6 = 0xffffffff;
        puStack96 = &UNK_00102162;
        puStack88 = puVar20;
        uVar18 = getndelim2(&field_1_buffer,&field_1_bufsize,0,0xffffffffffffffff,(ulong)delim);
        if ((long)uVar18 < 0) {
          puStack80 = &UNK_00102675;
          func_0x00101680(field_1_buffer);
          uVar3 = *puVar20;
          field_1_buffer = 0;
          if ((uVar3 & 0x30) != 0) goto code_r0x0010245b;
          puStack80 = &UNK_00102690;
          xalloc_die();
code_r0x00102690:
          cVar15 = (char)uVar16;
          puStack80 = &UNK_0010269c;
          uStack60 = uVar6;
          iVar4 = func_0x00101670();
          if (iVar4 == -1) {
            uVar8 = (uint)line_delim;
            uVar19 = 0xffffffff;
            bVar21 = false;
            unaff_RBX = 1;
            uVar6 = uStack60;
            bVar10 = line_delim;
            goto code_r0x001022f9;
          }
code_r0x0010229a:
          puStack80 = &UNK_001022a6;
          func_0x001018c0();
          uVar2 = (uint)delim;
          uVar6 = uStack60;
code_r0x001022cb:
          uVar8 = (uint)line_delim;
          if (uVar2 != (uint)uVar19) goto code_r0x001022db;
code_r0x0010224b:
          uVar18 = uVar18 + 1;
          unaff_RBX = uStack104;
          if (current_rp[1] <= uVar18 && uVar18 != current_rp[1]) {
            current_rp = current_rp + 2;
          }
        }
        else {
          if (uVar18 == 0) {
            puVar14 = &UNK_0010648e;
            puStack80 = &UNK_00102757;
            func_0x001017d0(&UNK_0010648e,&UNK_00106484,0x149,__PRETTY_FUNCTION___7017);
            puVar11 = program_name;
            uVar5 = 5;
            uStack120 = *(undefined8 *)(in_FS_OFFSET + 0x28);
            puStack96 = (undefined *)_bVar12;
            puStack88 = (uint *)uVar16;
            puStack80 = (undefined *)uVar18;
            if ((int)puVar14 == 0) goto code_r0x001027bd;
            uVar5 = func_0x00101740(0,&UNK_001065f0,5);
            func_0x001019a0(stderr,1,uVar5,puVar11);
            goto code_r0x001027b6;
          }
          if (*(byte *)(field_1_buffer + -1 + uVar18) == delim) {
            if (*current_rp < 2) {
              puStack80 = &UNK_001023f1;
              func_0x001018e0();
              if (delim == line_delim) {
                if (*(ulong *)(puVar20 + 2) < *(ulong *)(puVar20 + 4)) {
                  *(ulong *)(puVar20 + 2) = *(ulong *)(puVar20 + 2) + 1;
                }
                else {
                  puStack80 = &UNK_00102714;
                  iVar4 = func_0x00101670();
                  if (iVar4 == -1) goto code_r0x00102219;
                }
                uVar16 = unaff_RBX & 0xffffff00 | uVar1;
                puStack80 = &UNK_00102433;
                func_0x001018c0();
              }
              else {
                uVar16 = unaff_RBX & 0xffffff00 | uVar1;
              }
            }
code_r0x00102219:
            if (current_rp[1] < 2) {
              current_rp = current_rp + 2;
              uVar18 = 2;
              uVar19 = 0;
            }
            else {
              uVar18 = 2;
              uVar19 = 0;
            }
            break;
          }
          unaff_RBX = uStack104;
          if (suppress_non_delimited == 0) {
            puStack80 = &UNK_001021b0;
            func_0x001018e0(field_1_buffer,1,uVar18);
            bVar10 = line_delim;
            uVar19 = (ulong)(uint)line_delim;
            if ((int)*(char *)(field_1_buffer + -1 + uVar18) != (uint)line_delim) {
              pbVar17 = *(byte **)(stdout + 0x28);
              if (pbVar17 < *(byte **)(stdout + 0x30)) {
                *(byte **)(stdout + 0x28) = pbVar17 + 1;
                *pbVar17 = bVar10;
              }
              else {
                puStack80 = &UNK_0010265c;
                func_0x001017a0();
                uVar19 = (ulong)line_delim;
              }
            }
            uVar18 = 1;
          }
          else {
            uVar18 = 1;
            uVar19 = 0;
          }
        }
      }
      if (*current_rp < uVar18 || *current_rp == uVar18) {
        uStack104 = uVar19;
        if ((char)uVar16 != '\0') {
          puStack80 = &UNK_00102068;
          func_0x001018e0(output_delimiter_string,1,output_delimiter_length);
        }
code_r0x001020c9:
        uVar6 = (uint)uStack104;
        pbVar17 = *(byte **)(puVar20 + 2);
        if (pbVar17 < *(byte **)(puVar20 + 4)) {
          *(byte **)(puVar20 + 2) = pbVar17 + 1;
          uStack104 = (ulong)*pbVar17;
        }
        else {
          puStack80 = &UNK_001020db;
          uVar3 = func_0x00101670();
          uStack104 = (ulong)uVar3;
        }
        uVar2 = (uint)delim;
        uVar8 = (uint)line_delim;
        uVar3 = (uint)uStack104;
        uVar19 = uStack104;
        if (uVar3 == uVar2) {
          uVar16 = 1;
          if (delim != line_delim) goto code_r0x0010224b;
          goto code_r0x00102281;
        }
        if (uVar3 == uVar8) {
          uVar16 = 1;
          if (delim != line_delim) goto code_r0x001022cb;
code_r0x00102389:
          if (uVar2 == (uint)uVar19) {
code_r0x00102281:
            if (*(ulong *)(puVar20 + 4) <= *(ulong *)(puVar20 + 2)) goto code_r0x00102690;
            *(ulong *)(puVar20 + 2) = *(ulong *)(puVar20 + 2) + 1;
            uStack60 = uVar6;
            goto code_r0x0010229a;
          }
          goto code_r0x001022db;
        }
        if (uVar3 != 0xffffffff) {
          puVar11 = *(undefined **)(stdout + 0x28);
          if (puVar11 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar11 + 1;
            *puVar11 = (char)uStack104;
          }
          else {
            puStack80 = &UNK_00102200;
            func_0x001017a0();
          }
          goto code_r0x001020c9;
        }
        uVar16 = 1;
      }
      else {
        while( true ) {
          uVar6 = (uint)uVar19;
          pbVar17 = *(byte **)(puVar20 + 2);
          if (pbVar17 < *(byte **)(puVar20 + 4)) {
            *(byte **)(puVar20 + 2) = pbVar17 + 1;
            uVar3 = (uint)*pbVar17;
          }
          else {
            puStack80 = &UNK_0010212c;
            uVar3 = func_0x00101670();
          }
          uVar2 = (uint)delim;
          uVar8 = (uint)line_delim;
          if (uVar2 == uVar3) {
            uVar19 = (ulong)uVar3;
            if (delim == line_delim) goto code_r0x00102281;
            goto code_r0x0010224b;
          }
          if (uVar3 == uVar8) {
            uVar19 = (ulong)uVar3;
            if (delim == line_delim) goto code_r0x00102389;
            goto code_r0x001022cb;
          }
          if (uVar3 == 0xffffffff) break;
          uVar19 = (ulong)uVar3;
        }
      }
      uVar19 = 0xffffffff;
code_r0x001022db:
      cVar15 = (char)uVar16;
      uVar3 = (uint)uVar19;
      unaff_RBX = uStack104 & 0xffffffffffffff00 | (ulong)(uVar3 == 0xffffffff);
      bVar21 = uVar8 == uVar3;
      bVar10 = (byte)uVar8;
    } while ((uVar3 != 0xffffffff) && (!bVar21));
code_r0x001022f9:
    if (((cVar15 != '\0') || ((suppress_non_delimited != 1 || (uVar18 != 1)))) &&
       ((uVar8 != uVar6 || delim == bVar10 || (bVar21)))) {
      pbVar17 = *(byte **)(stdout + 0x28);
      if (pbVar17 < *(byte **)(stdout + 0x30)) {
        *(byte **)(stdout + 0x28) = pbVar17 + 1;
        *pbVar17 = bVar10;
      }
      else {
        puStack80 = &UNK_0010264f;
        func_0x001017a0();
      }
    }
    if ((char)unaff_RBX == '\0') {
      current_rp = frp;
      uVar16 = 0;
      uVar18 = 1;
      goto code_r0x00102020;
    }
  }
  else {
    puStack80 = &UNK_00102447;
    iVar4 = func_0x00101670();
    if (iVar4 != -1) goto code_r0x00101fef;
  }
code_r0x00102458:
  uVar3 = *puVar20;
code_r0x0010245b:
  bVar21 = false;
  bVar22 = (uVar3 & 0x20) == 0;
  if (bVar22) {
    lVar7 = 2;
    pbVar17 = pbStack72;
    pbVar13 = &UNK_00107052;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar21 = *pbVar17 < *pbVar13;
      bVar22 = *pbVar17 == *pbVar13;
      pbVar17 = pbVar17 + (ulong)bVar23 * -2 + 1;
      pbVar13 = pbVar13 + (ulong)bVar23 * -2 + 1;
    } while (bVar22);
    if ((!bVar21 && !bVar22) == bVar21) {
      puStack80 = &UNK_001024ff;
      func_0x00101700(puVar20);
      return 1;
    }
    puStack80 = &UNK_00102482;
    iVar4 = rpl_fclose();
    if (iVar4 != -1) {
      return 1;
    }
  }
code_r0x001024bc:
  puStack80 = &UNK_001024cc;
  uVar5 = quotearg_n_style_colon(0,3,pbStack72);
  puStack80 = &UNK_001024d4;
  puVar20 = (uint *)func_0x001016a0();
  puStack80 = &UNK_001024e9;
  func_0x00101940(0,(ulong)*puVar20,&UNK_00107006,uVar5);
  return 0;
code_r0x001027b6:
  func_0x00101980((ulong)puVar14 & 0xffffffff);
  uVar5 = extraout_RDX;
code_r0x001027bd:
  uVar5 = func_0x00101740(0,&UNK_00106618,uVar5);
  func_0x00101910(1,uVar5,puVar11);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_00106638,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_00106680,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_001066b8,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_00106708,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_001067c0,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_001068b0,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_00106928,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_00106a00,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_00106a40,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_00106a70,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_00106aa8,5);
  func_0x00101850(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x00101740(0,&UNK_00106b78,5);
  func_0x00101850(uVar5,lVar7);
  uStack144 = 0;
  uStack136 = 0;
  pbStack240 = &UNK_0010649f;
  apbStack224[4] = &UNK_001064e0;
  puStack232 = &UNK_001064a1;
  puStack176 = &UNK_001064ea;
  apbStack224[0] = &UNK_00106519;
  puStack160 = &UNK_001064f4;
  apbStack224[1] = &UNK_001064b1;
  apbStack224[2] = &UNK_001064c7;
  apbStack224[3] = &UNK_001064d1;
  puStack184 = &UNK_001064d1;
  puStack168 = &UNK_001064d1;
  puStack152 = &UNK_001064d1;
  ppbVar9 = &pbStack240;
  do {
    ppbVar9 = ppbVar9;
    ppbVar9 = ppbVar9 + 2;
    pbVar17 = *ppbVar9;
    bVar21 = false;
    bVar22 = pbVar17 == (byte *)0x0;
    if (bVar22) break;
    lVar7 = 4;
    pbVar13 = &UNK_0010649b;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar21 = *pbVar13 < *pbVar17;
      bVar22 = *pbVar13 == *pbVar17;
      pbVar13 = pbVar13 + (ulong)bVar23 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar23 * -2 + 1;
    } while (bVar22);
  } while ((!bVar21 && !bVar22) != bVar21);
  pbVar17 = ppbVar9[3];
  if (pbVar17 == (byte *)0x0) {
    uVar5 = func_0x00101740(0,&UNK_001064fe,5);
    func_0x00101910(1,uVar5,&UNK_00106515,&UNK_00106c80);
    lVar7 = func_0x00101900(5,0);
    if ((lVar7 != 0) && (iVar4 = func_0x001016b0(lVar7,&UNK_00106523,3), iVar4 != 0)) {
      pbVar17 = &UNK_0010649b;
      goto code_r0x00102bc0;
    }
    pbVar17 = &UNK_0010649b;
    puVar11 = &UNK_001064bb;
    uVar5 = func_0x00101740(0,&UNK_00106527,5);
    func_0x00101910(1,uVar5,&UNK_00106c80,&UNK_0010649b);
  }
  else {
    uVar5 = func_0x00101740(0,&UNK_001064fe,5);
    func_0x00101910(1,uVar5,&UNK_00106515,&UNK_00106c80);
    lVar7 = func_0x00101900(5,0);
    if ((lVar7 != 0) && (iVar4 = func_0x001016b0(lVar7,&UNK_00106523,3), iVar4 != 0)) {
code_r0x00102bc0:
      lVar7 = stdout;
      uVar5 = func_0x00101740(0,&UNK_00106ca8,5);
      func_0x00101850(uVar5,lVar7);
    }
    uVar5 = func_0x00101740(0,&UNK_00106527,5);
    func_0x00101910(1,uVar5,&UNK_00106c80,&UNK_0010649b);
    puVar11 = &UNK_00107581;
    if (pbVar17 == &UNK_0010649b) {
      puVar11 = &UNK_001064bb;
    }
  }
  uVar5 = func_0x00101740(0,&UNK_00106cf0,5);
  func_0x00101910(1,uVar5,pbVar17,puVar11);
  goto code_r0x001027b6;
}

