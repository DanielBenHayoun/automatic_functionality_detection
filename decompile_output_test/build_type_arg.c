
long build_type_arg(char **param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  short *psVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 extraout_RDX;
  byte **ppbVar9;
  undefined *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  short *unaff_R13;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte *pbStack272;
  undefined *puStack264;
  byte *apbStack256 [5];
  undefined *puStack216;
  undefined *puStack208;
  undefined *puStack200;
  undefined *puStack192;
  undefined *puStack184;
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack152;
  undefined8 uStack136;
  undefined1 *puStack128;
  undefined1 *puStack120;
  short *psStack112;
  byte *pbStack96;
  undefined8 *puStack80;
  char *pcStack72;
  undefined *puStack32;
  
  bVar17 = 0;
  cVar2 = *optarg;
  if (cVar2 != 'n') {
    if (cVar2 < 'o') {
      if (cVar2 != 'a') {
        return 0;
      }
    }
    else {
      if (cVar2 == 'p') {
        pcVar4 = optarg + 1;
        *param_1 = optarg;
        optarg = pcVar4;
        pcStack72 = optarg;
        *param_2 = 0;
        param_2[4] = param_3;
        param_2[1] = 0;
        param_2[5] = 0;
        rpl_re_syntax_options = 0x2c6;
        puStack32 = &UNK_00102484;
        uVar6 = func_0x001019d0(pcStack72);
        puStack32 = &UNK_00102492;
        lVar7 = rpl_re_compile_pattern(pcStack72,uVar6,param_2);
        if (lVar7 == 0) {
          return 1;
        }
        puStack32 = &UNK_001024d5;
        func_0x00101bb0(1,0,&UNK_00114e6c,lVar7);
        func_0x00101b80(1,lineno_format,(ulong)lineno_width,line_no,separator_str);
        lVar7 = line_no;
        if (line_no <= page_incr + line_no) {
          line_no = page_incr + line_no;
          return lVar7;
        }
        uVar6 = func_0x001019b0(0,&UNK_001143a4,5);
        pbStack96 = (byte *)0x1;
        func_0x00101bb0(1,0,uVar6);
        lVar7 = 2;
        bVar15 = &puStack80 < (undefined *)0x18;
        bVar16 = (undefined *)register0x00000020 == (undefined *)0x68;
        pbVar14 = pbStack96;
        pbVar11 = &UNK_00114eb2;
        do {
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          bVar15 = *pbVar14 < *pbVar11;
          bVar16 = *pbVar14 == *pbVar11;
          pbVar14 = pbVar14 + (ulong)bVar17 * -2 + 1;
          pbVar11 = pbVar11 + (ulong)bVar17 * -2 + 1;
        } while (bVar16);
        puStack80 = param_2;
        if ((!bVar15 && !bVar16) == bVar15) {
          have_read_stdin = 1;
          pbVar14 = stdin;
        }
        else {
          psStack112 = (short *)&UNK_001028f1;
          pbVar14 = (byte *)func_0x00101bd0(pbStack96,&UNK_00114492);
          if (pbVar14 == (byte *)0x0) goto code_r0x001028fd;
        }
        psStack112 = (short *)&UNK_001025ba;
        fadvise(pbVar14,2);
code_r0x001025c0:
        psStack112 = (short *)&UNK_001025cb;
        lVar7 = readlinebuffer(line_buf,pbVar14);
        uVar13 = line_buf._8_8_;
        psVar3 = line_buf._16_8_;
        do {
          line_buf._8_8_ = uVar13;
          line_buf._16_8_ = psVar3;
          if (lVar7 == 0) {
            bVar15 = false;
            bVar16 = (*pbVar14 & 0x20) == 0;
            if (!bVar16) goto code_r0x001028fd;
            lVar7 = 2;
            pbVar11 = pbStack96;
            pbVar12 = &UNK_00114eb2;
            goto code_r0x001026c0;
          }
          uVar1 = uVar13 - 1;
          if ((uVar1 < 2) || (unaff_R13 = psVar3, *psVar3 != *section_del)) {
code_r0x00102700:
            cVar2 = *current_type;
            if (cVar2 == 'n') {
code_r0x00102832:
              psStack112 = (short *)&UNK_00102845;
              func_0x00101aa0(print_no_line_fmt,stdout);
              uVar13 = line_buf._8_8_;
            }
            else {
              if (cVar2 < 'o') {
                if (cVar2 == 'a') {
                  if (blank_join < 2) goto code_r0x0010272e;
                  if ((uVar13 < 2) &&
                     (blank_lines_7093 = blank_lines_7093 + 1, blank_join != blank_lines_7093))
                  goto code_r0x00102832;
                  psStack112 = (short *)&UNK_001028ab;
                  print_lineno();
                  blank_lines_7093 = 0;
                  uVar13 = line_buf._8_8_;
                }
              }
              else {
                if (cVar2 == 'p') {
                  psStack112 = (short *)&UNK_0010281e;
                  lVar7 = rpl_re_search(current_regex,line_buf._16_8_,uVar1,0,uVar1,0);
                  if (lVar7 == -2) {
                    psStack112 = (short *)&UNK_0010294f;
                    uStack136 = func_0x001019b0(0,&UNK_001145b0,5);
                    psStack112 = (short *)&UNK_00102957;
                    puVar8 = (uint *)func_0x001018f0();
                    uVar13 = 1;
                    psStack112 = (short *)&UNK_00102968;
                    func_0x00101bb0(1,(ulong)*puVar8,uStack136);
                    puVar10 = program_name;
                    puStack120 = footer_regex;
                    uVar6 = 5;
                    puStack128 = line_buf;
                    uStack152 = *(undefined8 *)(in_FS_OFFSET + 0x28);
                    psStack112 = unaff_R13;
                    if ((int)uVar13 == 0) goto code_r0x001029cd;
                    uVar6 = func_0x001019b0(0,&UNK_001145d8,5);
                    func_0x00101c30(stderr,1,uVar6,puVar10);
                    goto code_r0x001029c6;
                  }
                  if (lVar7 == -1) goto code_r0x00102832;
                }
                else {
                  if (cVar2 != 't') goto code_r0x0010273a;
                  if (uVar13 < 2) goto code_r0x00102832;
                }
code_r0x0010272e:
                psStack112 = (short *)&UNK_00102733;
                print_lineno();
                uVar13 = line_buf._8_8_;
              }
            }
code_r0x0010273a:
            psStack112 = (short *)&UNK_00102755;
            func_0x00101b50(line_buf._16_8_,1,uVar13);
            goto code_r0x001025c0;
          }
          if (uVar1 != header_del_len) {
code_r0x00102612:
            if (uVar1 == body_del_len) {
              psStack112 = (short *)&UNK_001027c2;
              iVar5 = func_0x00101a80(psVar3,body_del,uVar1);
              if (iVar5 == 0) {
                current_regex = body_regex;
                current_type = body_type;
                goto joined_r0x0010279d;
              }
            }
            if (uVar1 == footer_del_len) {
              psStack112 = (short *)&UNK_0010263e;
              iVar5 = func_0x00101a80(psVar3,footer_del,uVar1);
              if (iVar5 == 0) {
                current_regex = footer_regex;
                current_type = footer_type;
                goto joined_r0x0010279d;
              }
            }
            goto code_r0x00102700;
          }
          psStack112 = (short *)&UNK_00102772;
          iVar5 = func_0x00101a80(psVar3,header_del,uVar1);
          if (iVar5 != 0) goto code_r0x00102612;
          current_regex = header_regex;
          current_type = header_type;
joined_r0x0010279d:
          if (reset_numbers != '\0') {
            line_no = starting_line_number;
          }
          puVar10 = *(undefined **)(stdout + 0x28);
          if (*(undefined **)(stdout + 0x30) <= puVar10) goto code_r0x00102858;
          *(undefined **)(stdout + 0x28) = puVar10 + 1;
          *puVar10 = 10;
          psStack112 = (short *)&UNK_0010269d;
          lVar7 = readlinebuffer(line_buf,pbVar14);
          uVar13 = line_buf._8_8_;
          psVar3 = line_buf._16_8_;
        } while( true );
      }
      if (cVar2 != 't') {
        return 0;
      }
    }
  }
  *param_1 = optarg;
  return 1;
code_r0x001029c6:
  func_0x00101c10(uVar13 & 0xffffffff);
  uVar6 = extraout_RDX;
code_r0x001029cd:
  uVar6 = func_0x001019b0(0,&UNK_00114600,uVar6);
  func_0x00101b80(1,uVar6,puVar10);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_00114628,5);
  func_0x00101aa0(uVar6,lVar7);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_00114668,5);
  func_0x00101aa0(uVar6,lVar7);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_001146a0,5);
  func_0x00101aa0(uVar6,lVar7);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_001146f0,5);
  func_0x00101aa0(uVar6,lVar7);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_001147c8,5);
  func_0x00101aa0(uVar6,lVar7);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_00114988,5);
  func_0x00101aa0(uVar6,lVar7);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_00114a18,5);
  func_0x00101aa0(uVar6,lVar7);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_00114a48,5);
  func_0x00101aa0(uVar6,lVar7);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_00114a80,5);
  func_0x00101aa0(uVar6,lVar7);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_00114b40,5);
  func_0x00101aa0(uVar6,lVar7);
  lVar7 = stdout;
  uVar6 = func_0x001019b0(0,&UNK_00114c10,5);
  func_0x00101aa0(uVar6,lVar7);
  uStack176 = 0;
  uStack168 = 0;
  pbStack272 = &UNK_001143bc;
  apbStack256[4] = &UNK_001143fd;
  puStack264 = &UNK_001143be;
  puStack208 = &UNK_00114407;
  apbStack256[0] = &UNK_00114436;
  puStack192 = &UNK_00114411;
  apbStack256[1] = &UNK_001143ce;
  apbStack256[2] = &UNK_001143e4;
  apbStack256[3] = &UNK_001143ee;
  puStack216 = &UNK_001143ee;
  puStack200 = &UNK_001143ee;
  puStack184 = &UNK_001143ee;
  ppbVar9 = &pbStack272;
  do {
    ppbVar9 = ppbVar9;
    ppbVar9 = ppbVar9 + 2;
    pbVar14 = *ppbVar9;
    bVar15 = false;
    bVar16 = pbVar14 == (byte *)0x0;
    if (bVar16) break;
    lVar7 = 3;
    pbVar11 = &UNK_001143b9;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar15 = *pbVar11 < *pbVar14;
      bVar16 = *pbVar11 == *pbVar14;
      pbVar11 = pbVar11 + (ulong)bVar17 * -2 + 1;
      pbVar14 = pbVar14 + (ulong)bVar17 * -2 + 1;
    } while (bVar16);
  } while ((!bVar15 && !bVar16) != bVar15);
  pbVar14 = ppbVar9[3];
  if (pbVar14 == (byte *)0x0) {
    uVar6 = func_0x001019b0(0,&UNK_0011441b,5);
    func_0x00101b80(1,uVar6,&UNK_00114432,&UNK_00114ca8);
    lVar7 = func_0x00101b70(5,0);
    if ((lVar7 != 0) && (iVar5 = func_0x00101900(lVar7,&UNK_00114440,3), iVar5 != 0)) {
      pbVar14 = &UNK_001143b9;
      goto code_r0x00102db0;
    }
    pbVar14 = &UNK_001143b9;
    puVar10 = &UNK_001143d8;
    uVar6 = func_0x001019b0(0,&UNK_00114444,5);
    func_0x00101b80(1,uVar6,&UNK_00114ca8,&UNK_001143b9);
  }
  else {
    uVar6 = func_0x001019b0(0,&UNK_0011441b,5);
    func_0x00101b80(1,uVar6,&UNK_00114432,&UNK_00114ca8);
    lVar7 = func_0x00101b70(5,0);
    if ((lVar7 != 0) && (iVar5 = func_0x00101900(lVar7,&UNK_00114440,3), iVar5 != 0)) {
code_r0x00102db0:
      lVar7 = stdout;
      uVar6 = func_0x001019b0(0,&UNK_00114cd0,5);
      func_0x00101aa0(uVar6,lVar7);
    }
    uVar6 = func_0x001019b0(0,&UNK_00114444,5);
    func_0x00101b80(1,uVar6,&UNK_00114ca8,&UNK_001143b9);
    puVar10 = &UNK_001145ad;
    if (pbVar14 == &UNK_001143b9) {
      puVar10 = &UNK_001143d8;
    }
  }
  uVar6 = func_0x001019b0(0,&UNK_00114d18,5);
  func_0x00101b80(1,uVar6,pbVar14,puVar10);
  goto code_r0x001029c6;
code_r0x00102858:
  psStack112 = (short *)&UNK_00102862;
  func_0x00101a20(stdout,10);
  goto code_r0x001025c0;
  while( true ) {
    lVar7 = lVar7 + -1;
    bVar15 = *pbVar11 < *pbVar12;
    bVar16 = *pbVar11 == *pbVar12;
    pbVar11 = pbVar11 + (ulong)bVar17 * -2 + 1;
    pbVar12 = pbVar12 + (ulong)bVar17 * -2 + 1;
    if (!bVar16) break;
code_r0x001026c0:
    if (lVar7 == 0) break;
  }
  if ((!bVar15 && !bVar16) == bVar15) {
    psStack112 = (short *)&UNK_001028c7;
    func_0x00101940(pbVar14);
    return 1;
  }
  psStack112 = (short *)&UNK_001026d7;
  iVar5 = rpl_fclose();
  if (iVar5 != -1) {
    return 1;
  }
code_r0x001028fd:
  psStack112 = (short *)&UNK_0010290e;
  uVar6 = quotearg_n_style_colon(0,3,pbStack96);
  psStack112 = (short *)&UNK_00102916;
  puVar8 = (uint *)func_0x001018f0();
  psStack112 = (short *)&UNK_0010292b;
  func_0x00101bb0(0,(ulong)*puVar8,&UNK_00114e6c,uVar6);
  return 0;
}

