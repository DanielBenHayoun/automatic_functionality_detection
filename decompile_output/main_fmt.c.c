
ulong main(uint param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  
  bVar16 = 0;
  pcVar12 = (char *)0x0;
  set_program_name(*param_2);
  func_0x00101700(6,&UNK_00106da1);
  func_0x00101550(&UNK_0010620d,&UNK_00106236);
  func_0x00101530(&UNK_0010620d);
  atexit(close_stdout);
  uniform = 0;
  split = 0;
  tagged = 0;
  crown = 0;
  max_width = 0x4b;
  prefix = "";
  prefix_full_length = 0;
  prefix_lead_space = 0;
  prefix_length = 0;
  if ((1 < (int)param_1) && (pcVar5 = (char *)param_2[1], *pcVar5 == '-')) goto code_r0x00101a41;
  do {
    pcVar5 = (char *)0;
code_r0x001018a0:
    uVar2 = func_0x001015a0((ulong)param_1,param_2,&UNK_0010625c,long_options,0);
    if (uVar2 == 0xffffffff) {
      if (pcVar12 == (char *)0x0) {
        if (pcVar5 == (char *)0x0) goto code_r0x00101bb8;
        uVar7 = func_0x00101560(0,&UNK_00106271,5);
        goal_width = xdectoumax(pcVar5,0,0x4b,&UNK_00106da1,uVar7,0);
        max_width = goal_width + 10;
      }
      else {
        uVar7 = func_0x00101560(0,&UNK_00106271,5);
        iVar3 = xdectoumax(pcVar12,0,0x9c4,&UNK_00106da1,uVar7,0);
        max_width = iVar3;
        if (pcVar5 == (char *)0x0) {
code_r0x00101bb8:
          goal_width = (max_width * 0xbb) / 200;
        }
        else {
          uVar7 = func_0x00101560(0,&UNK_00106271,5);
          goal_width = xdectoumax(pcVar5,0,(long)iVar3,&UNK_00106da1,uVar7,0);
        }
      }
      bVar15 = optind == param_1;
      if (bVar15) {
        uVar2 = 1;
        fmt(stdin);
        goto code_r0x00101be7;
      }
      uVar2 = 1;
      break;
    }
    if (uVar2 == 0x70) {
      prefix_lead_space = 0;
      pcVar13 = optarg;
      if (*optarg == ' ') {
        iVar3 = 1;
        do {
          prefix_lead_space = iVar3;
          pcVar13 = pcVar13 + 1;
          iVar3 = prefix_lead_space + 1;
        } while (*pcVar13 == ' ');
      }
      prefix = pcVar13;
      prefix_full_length = func_0x00101580();
      pcVar4 = pcVar13 + prefix_full_length;
      if (pcVar13 < pcVar4) {
        do {
          if (pcVar4[-1] != ' ') break;
          pcVar4 = pcVar4 + -1;
        } while (pcVar13 != pcVar4);
      }
      *pcVar4 = '\0';
      prefix_length = (int)pcVar4 - (int)pcVar13;
      goto code_r0x001018a0;
    }
    if (0x70 < (int)uVar2) {
      if (uVar2 == 0x74) {
        tagged = 1;
      }
      else {
        if ((int)uVar2 < 0x75) {
          if (uVar2 != 0x73) goto code_r0x00101c7e;
          split = 1;
        }
        else {
          if (uVar2 == 0x75) {
            uniform = 1;
          }
          else {
            pcVar12 = optarg;
            if (uVar2 != 0x77) goto code_r0x00101c7e;
          }
        }
      }
      goto code_r0x001018a0;
    }
    if (uVar2 == 0xffffff7e) {
      usage(0);
      goto code_r0x00101c7e;
    }
    if (-0x82 < (int)uVar2) {
      if (uVar2 == 99) {
        crown = 1;
      }
      else {
        pcVar5 = optarg;
        if (uVar2 != 0x67) goto code_r0x00101c7e;
      }
      goto code_r0x001018a0;
    }
    if (uVar2 != 0xffffff7d) {
code_r0x00101c7e:
      if (uVar2 - 0x30 < 10) goto code_r0x00101c91;
      do {
        usage(1);
code_r0x00101c91:
        uVar7 = func_0x00101560(0,&UNK_001067a0,5);
        func_0x00101720(0,0,uVar7,(ulong)uVar2);
      } while( true );
    }
    version_etc(stdout,&UNK_0010618f,&UNK_00106209,Version);
    pcVar5 = (char *)func_0x00101760();
code_r0x00101a41:
    if ((int)pcVar5[1] - 0x30U < 10) {
      pcVar12 = pcVar5 + 1;
      uVar7 = *param_2;
      param_1 = param_1 - 1;
      param_2 = param_2 + 1;
      *param_2 = uVar7;
    }
  } while( true );
joined_r0x00101b06:
  if ((int)param_1 <= (int)optind) {
code_r0x00101be7:
    return (ulong)(uVar2 ^ 1);
  }
  bVar14 = optind < param_1;
  lVar8 = 2;
  pbVar1 = (byte *)param_2[(int)optind];
  pbVar10 = pbVar1;
  pbVar11 = &UNK_0010686a;
  do {
    if (lVar8 == 0) break;
    lVar8 = lVar8 + -1;
    bVar14 = *pbVar10 < *pbVar11;
    bVar15 = *pbVar10 == *pbVar11;
    pbVar10 = pbVar10 + (ulong)bVar16 * -2 + 1;
    pbVar11 = pbVar11 + (ulong)bVar16 * -2 + 1;
  } while (bVar15);
  if ((!bVar14 && !bVar15) == bVar14) {
    fmt(stdin);
  }
  else {
    lVar8 = func_0x00101740(pbVar1,&UNK_0010681d);
    if (lVar8 == 0) {
      uVar7 = quotearg_style(4,pbVar1);
      puVar9 = (undefined *)func_0x00101560(0,&UNK_0010627f,5);
      puVar6 = (uint *)func_0x001014f0();
    }
    else {
      fmt(lVar8);
      iVar3 = rpl_fclose(lVar8);
      if (iVar3 != -1) goto code_r0x00101b19;
      uVar7 = quotearg_n_style_colon(0,3,pbVar1);
      puVar6 = (uint *)func_0x001014f0();
      puVar9 = &UNK_00106823;
    }
    uVar2 = 0;
    func_0x00101720(0,(ulong)*puVar6,puVar9,uVar7);
  }
code_r0x00101b19:
  optind = optind + 1;
  bVar15 = optind == param_1;
  goto joined_r0x00101b06;
}

