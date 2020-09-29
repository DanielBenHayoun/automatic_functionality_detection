
undefined8 nl_file(byte *param_1)

{
  ulong uVar1;
  char cVar2;
  short *psVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  long lVar7;
  undefined8 extraout_RDX;
  byte **ppbVar8;
  undefined *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  short *unaff_R13;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  byte bVar16;
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
  undefined8 uStack104;
  undefined1 *puStack96;
  undefined1 *puStack88;
  short *psStack80;
  byte *pbStack64;
  
  bVar16 = 0;
  lVar7 = 2;
  bVar14 = &stack0xffffffffffffffd0 < (undefined *)0x18;
  bVar15 = (undefined *)register0x00000020 == (undefined *)0x48;
  pbVar13 = param_1;
  pbVar10 = &UNK_00114eb2;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    bVar14 = *pbVar13 < *pbVar10;
    bVar15 = *pbVar13 == *pbVar10;
    pbVar13 = pbVar13 + 1;
    pbVar10 = pbVar10 + 1;
  } while (bVar15);
  pbStack64 = param_1;
  if ((!bVar14 && !bVar15) == bVar14) {
    have_read_stdin = 1;
    pbVar13 = stdin;
  }
  else {
    psStack80 = (short *)&UNK_001028f1;
    pbVar13 = (byte *)func_0x00101bd0(param_1,&UNK_00114492);
    if (pbVar13 == (byte *)0x0) goto code_r0x001028fd;
  }
  psStack80 = (short *)&UNK_001025ba;
  fadvise(pbVar13,2);
code_r0x001025c0:
  psStack80 = (short *)&UNK_001025cb;
  lVar7 = readlinebuffer(line_buf,pbVar13);
  uVar12 = line_buf._8_8_;
  psVar3 = line_buf._16_8_;
  do {
    line_buf._8_8_ = uVar12;
    line_buf._16_8_ = psVar3;
    if (lVar7 == 0) {
      bVar14 = false;
      bVar15 = (*pbVar13 & 0x20) == 0;
      if (!bVar15) goto code_r0x001028fd;
      lVar7 = 2;
      pbVar10 = pbStack64;
      pbVar11 = &UNK_00114eb2;
      goto code_r0x001026c0;
    }
    uVar1 = uVar12 - 1;
    if ((uVar1 < 2) || (unaff_R13 = psVar3, *psVar3 != *section_del)) {
code_r0x00102700:
      cVar2 = *current_type;
      if (cVar2 == 'n') {
code_r0x00102832:
        psStack80 = (short *)&UNK_00102845;
        func_0x00101aa0(print_no_line_fmt,stdout);
        uVar12 = line_buf._8_8_;
      }
      else {
        if (cVar2 < 'o') {
          if (cVar2 == 'a') {
            if (blank_join < 2) goto code_r0x0010272e;
            if ((uVar12 < 2) &&
               (blank_lines_7093 = blank_lines_7093 + 1, blank_join != blank_lines_7093))
            goto code_r0x00102832;
            psStack80 = (short *)&UNK_001028ab;
            print_lineno();
            blank_lines_7093 = 0;
            uVar12 = line_buf._8_8_;
          }
        }
        else {
          if (cVar2 == 'p') {
            psStack80 = (short *)&UNK_0010281e;
            lVar7 = rpl_re_search(current_regex,line_buf._16_8_,uVar1,0,uVar1,0);
            if (lVar7 == -2) {
              psStack80 = (short *)&UNK_0010294f;
              uStack104 = func_0x001019b0(0,&UNK_001145b0,5);
              psStack80 = (short *)&UNK_00102957;
              puVar6 = (uint *)func_0x001018f0();
              uVar12 = 1;
              psStack80 = (short *)&UNK_00102968;
              func_0x00101bb0(1,(ulong)*puVar6,uStack104);
              puVar9 = program_name;
              puStack88 = footer_regex;
              uVar5 = 5;
              puStack96 = line_buf;
              uStack120 = *(undefined8 *)(in_FS_OFFSET + 0x28);
              psStack80 = unaff_R13;
              if ((int)uVar12 == 0) goto code_r0x001029cd;
              uVar5 = func_0x001019b0(0,&UNK_001145d8,5);
              func_0x00101c30(stderr,1,uVar5,puVar9);
              break;
            }
            if (lVar7 == -1) goto code_r0x00102832;
          }
          else {
            if (cVar2 != 't') goto code_r0x0010273a;
            if (uVar12 < 2) goto code_r0x00102832;
          }
code_r0x0010272e:
          psStack80 = (short *)&UNK_00102733;
          print_lineno();
          uVar12 = line_buf._8_8_;
        }
      }
code_r0x0010273a:
      psStack80 = (short *)&UNK_00102755;
      func_0x00101b50(line_buf._16_8_,1,uVar12);
      goto code_r0x001025c0;
    }
    if (uVar1 != header_del_len) {
code_r0x00102612:
      if (uVar1 == body_del_len) {
        psStack80 = (short *)&UNK_001027c2;
        iVar4 = func_0x00101a80(psVar3,body_del,uVar1);
        if (iVar4 == 0) {
          current_regex = body_regex;
          current_type = body_type;
          goto joined_r0x0010279d;
        }
      }
      if (uVar1 == footer_del_len) {
        psStack80 = (short *)&UNK_0010263e;
        iVar4 = func_0x00101a80(psVar3,footer_del,uVar1);
        if (iVar4 == 0) {
          current_regex = footer_regex;
          current_type = footer_type;
          goto joined_r0x0010279d;
        }
      }
      goto code_r0x00102700;
    }
    psStack80 = (short *)&UNK_00102772;
    iVar4 = func_0x00101a80(psVar3,header_del,uVar1);
    if (iVar4 != 0) goto code_r0x00102612;
    current_regex = header_regex;
    current_type = header_type;
joined_r0x0010279d:
    if (reset_numbers != '\0') {
      line_no = starting_line_number;
    }
    puVar9 = *(undefined **)(stdout + 0x28);
    if (*(undefined **)(stdout + 0x30) <= puVar9) goto code_r0x00102858;
    *(undefined **)(stdout + 0x28) = puVar9 + 1;
    *puVar9 = 10;
    psStack80 = (short *)&UNK_0010269d;
    lVar7 = readlinebuffer(line_buf,pbVar13);
    uVar12 = line_buf._8_8_;
    psVar3 = line_buf._16_8_;
  } while( true );
code_r0x001029c6:
  func_0x00101c10(uVar12 & 0xffffffff);
  uVar5 = extraout_RDX;
code_r0x001029cd:
  uVar5 = func_0x001019b0(0,&UNK_00114600,uVar5);
  func_0x00101b80(1,uVar5,puVar9);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_00114628,5);
  func_0x00101aa0(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_00114668,5);
  func_0x00101aa0(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_001146a0,5);
  func_0x00101aa0(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_001146f0,5);
  func_0x00101aa0(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_001147c8,5);
  func_0x00101aa0(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_00114988,5);
  func_0x00101aa0(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_00114a18,5);
  func_0x00101aa0(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_00114a48,5);
  func_0x00101aa0(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_00114a80,5);
  func_0x00101aa0(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_00114b40,5);
  func_0x00101aa0(uVar5,lVar7);
  lVar7 = stdout;
  uVar5 = func_0x001019b0(0,&UNK_00114c10,5);
  func_0x00101aa0(uVar5,lVar7);
  uStack144 = 0;
  uStack136 = 0;
  pbStack240 = &UNK_001143bc;
  apbStack224[4] = &UNK_001143fd;
  puStack232 = &UNK_001143be;
  puStack176 = &UNK_00114407;
  apbStack224[0] = &UNK_00114436;
  puStack160 = &UNK_00114411;
  apbStack224[1] = &UNK_001143ce;
  apbStack224[2] = &UNK_001143e4;
  apbStack224[3] = &UNK_001143ee;
  puStack184 = &UNK_001143ee;
  puStack168 = &UNK_001143ee;
  puStack152 = &UNK_001143ee;
  ppbVar8 = &pbStack240;
  do {
    ppbVar8 = ppbVar8;
    ppbVar8 = ppbVar8 + 2;
    pbVar13 = *ppbVar8;
    bVar14 = false;
    bVar15 = pbVar13 == (byte *)0x0;
    if (bVar15) break;
    lVar7 = 3;
    pbVar10 = &UNK_001143b9;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar14 = *pbVar10 < *pbVar13;
      bVar15 = *pbVar10 == *pbVar13;
      pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
      pbVar13 = pbVar13 + (ulong)bVar16 * -2 + 1;
    } while (bVar15);
  } while ((!bVar14 && !bVar15) != bVar14);
  pbVar13 = ppbVar8[3];
  if (pbVar13 == (byte *)0x0) {
    uVar5 = func_0x001019b0(0,&UNK_0011441b,5);
    func_0x00101b80(1,uVar5,&UNK_00114432,&UNK_00114ca8);
    lVar7 = func_0x00101b70(5,0);
    if ((lVar7 != 0) && (iVar4 = func_0x00101900(lVar7,&UNK_00114440,3), iVar4 != 0)) {
      pbVar13 = &UNK_001143b9;
      goto code_r0x00102db0;
    }
    pbVar13 = &UNK_001143b9;
    puVar9 = &UNK_001143d8;
    uVar5 = func_0x001019b0(0,&UNK_00114444,5);
    func_0x00101b80(1,uVar5,&UNK_00114ca8,&UNK_001143b9);
  }
  else {
    uVar5 = func_0x001019b0(0,&UNK_0011441b,5);
    func_0x00101b80(1,uVar5,&UNK_00114432,&UNK_00114ca8);
    lVar7 = func_0x00101b70(5,0);
    if ((lVar7 != 0) && (iVar4 = func_0x00101900(lVar7,&UNK_00114440,3), iVar4 != 0)) {
code_r0x00102db0:
      lVar7 = stdout;
      uVar5 = func_0x001019b0(0,&UNK_00114cd0,5);
      func_0x00101aa0(uVar5,lVar7);
    }
    uVar5 = func_0x001019b0(0,&UNK_00114444,5);
    func_0x00101b80(1,uVar5,&UNK_00114ca8,&UNK_001143b9);
    puVar9 = &UNK_001145ad;
    if (pbVar13 == &UNK_001143b9) {
      puVar9 = &UNK_001143d8;
    }
  }
  uVar5 = func_0x001019b0(0,&UNK_00114d18,5);
  func_0x00101b80(1,uVar5,pbVar13,puVar9);
  goto code_r0x001029c6;
code_r0x00102858:
  psStack80 = (short *)&UNK_00102862;
  func_0x00101a20(stdout,10);
  goto code_r0x001025c0;
  while( true ) {
    lVar7 = lVar7 + -1;
    bVar14 = *pbVar10 < *pbVar11;
    bVar15 = *pbVar10 == *pbVar11;
    pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    pbVar11 = pbVar11 + (ulong)bVar16 * -2 + 1;
    if (!bVar15) break;
code_r0x001026c0:
    if (lVar7 == 0) break;
  }
  if ((!bVar14 && !bVar15) == bVar14) {
    psStack80 = (short *)&UNK_001028c7;
    func_0x00101940(pbVar13);
    return 1;
  }
  psStack80 = (short *)&UNK_001026d7;
  iVar4 = rpl_fclose();
  if (iVar4 != -1) {
    return 1;
  }
code_r0x001028fd:
  psStack80 = (short *)&UNK_0010290e;
  uVar5 = quotearg_n_style_colon(0,3,pbStack64);
  psStack80 = (short *)&UNK_00102916;
  puVar6 = (uint *)func_0x001018f0();
  psStack80 = (short *)&UNK_0010292b;
  func_0x00101bb0(0,(ulong)*puVar6,&UNK_00114e6c,uVar5);
  return 0;
}

