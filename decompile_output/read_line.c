
undefined8 read_line(long *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  int unaff_R12D;
  long lVar10;
  long lVar11;
  
  lVar10 = *param_1;
  pbVar5 = *(byte **)(lVar10 + 8);
  if (pbVar5 < *(byte **)(lVar10 + 0x10)) {
    *(byte **)(lVar10 + 8) = pbVar5 + 1;
    uVar4 = (uint)*pbVar5;
  }
  else {
    uVar4 = func_0x00101b70();
  }
  iVar2 = input_position;
  if (uVar4 == 0xc) {
    lVar10 = *param_1;
    pbVar5 = *(byte **)(lVar10 + 8);
    pbVar6 = *(byte **)(lVar10 + 0x10);
    if (*(char *)((long)param_1 + 0x39) != '\0') {
      if (pbVar5 < pbVar6) {
        *(byte **)(lVar10 + 8) = pbVar5 + 1;
        uVar4 = (uint)*pbVar5;
      }
      else {
        uVar4 = func_0x00101b70();
      }
      if (uVar4 == 10) {
        lVar10 = *param_1;
        pbVar5 = *(byte **)(lVar10 + 8);
        if (pbVar5 < *(byte **)(lVar10 + 0x10)) {
          *(byte **)(lVar10 + 8) = pbVar5 + 1;
          uVar4 = (uint)*pbVar5;
        }
        else {
          uVar4 = func_0x00101b70();
        }
      }
      goto code_r0x00103d87;
    }
code_r0x00103ffb:
    if (pbVar5 < pbVar6) {
      *(byte **)(lVar10 + 8) = pbVar5 + 1;
      uVar9 = (ulong)*pbVar5;
    }
    else {
      uVar4 = func_0x00101b70();
      uVar9 = (ulong)uVar4;
    }
    if ((int)uVar9 != 10) {
      func_0x00101e40(uVar9,*param_1);
    }
    FF_only = 1;
    if ((print_a_header != '\0') && (FF_only = 1, storing_columns == '\0')) {
      pad_vertically = 1;
      print_header();
      goto code_r0x00104041;
    }
  }
  else {
code_r0x00103d87:
    *(undefined *)((long)param_1 + 0x39) = 0;
    if (uVar4 != 10) {
      if (uVar4 == 0xc) {
        lVar10 = *param_1;
        pbVar5 = *(byte **)(lVar10 + 8);
        pbVar6 = *(byte **)(lVar10 + 0x10);
        goto code_r0x00103ffb;
      }
      if (uVar4 == 0xffffffff) {
code_r0x00103ea0:
        if (*(int *)(param_1 + 2) == 3) {
          return 1;
        }
        close_file_part_4(param_1);
        return 1;
      }
      unaff_R12D = char_to_clump();
    }
    if ((truncate_lines != '\0') && (chars_per_column < input_position)) {
      input_position = iVar2;
      return 0;
    }
    if ((code *)param_1[4] != store_char) {
      pad_vertically = 1;
      if ((print_a_header != '\0') && (storing_columns == '\0')) {
        print_header();
      }
      iVar2 = separators_not_printed;
      if ((parallel_files != '\0') && (align_empty_cols != '\0')) {
        separators_not_printed = 0;
        if (0 < iVar2) {
          lVar11 = ((ulong)(iVar2 - 1) + 1) * 0x40 + column_vector;
          lVar10 = column_vector;
          do {
            lVar10 = lVar10 + 0x40;
            align_column();
            separators_not_printed = separators_not_printed + 1;
          } while (lVar11 != lVar10);
        }
        padding_not_printed = *(int *)((long)param_1 + 0x34);
        if (truncate_lines == '\0') {
          spaces_not_printed = 0;
        }
        else {
          spaces_not_printed = chars_per_column;
        }
        align_empty_cols = '\0';
      }
      if (col_sep_length < padding_not_printed) {
        pad_across_to((ulong)(uint)(padding_not_printed - col_sep_length));
        padding_not_printed = 0;
      }
      if (use_col_separator != '\0') {
        print_sep_string();
      }
    }
    if (*(char *)(param_1 + 7) != '\0') {
      add_line_number_isra_2(param_1 + 4);
    }
    empty_line = 0;
    if (uVar4 == 10) {
      empty_line = 0;
      return 1;
    }
    if (unaff_R12D != 0) {
      pcVar1 = clump_buff + (ulong)(unaff_R12D - 1) + 1;
      pcVar8 = clump_buff;
      do {
        pcVar7 = pcVar8 + 1;
        (*(code *)param_1[4])((ulong)(uint)(int)*pcVar8);
        pcVar8 = pcVar7;
      } while (pcVar1 != pcVar7);
    }
    while( true ) {
      lVar10 = *param_1;
      pbVar5 = *(byte **)(lVar10 + 8);
      if (pbVar5 < *(byte **)(lVar10 + 0x10)) {
        *(byte **)(lVar10 + 8) = pbVar5 + 1;
        uVar4 = (uint)*pbVar5;
      }
      else {
        uVar4 = func_0x00101b70();
      }
      iVar2 = input_position;
      if (uVar4 == 10) {
        return 1;
      }
      if (uVar4 == 0xc) break;
      if (uVar4 == 0xffffffff) goto code_r0x00103ea0;
      iVar3 = char_to_clump((ulong)(uint)(int)(char)uVar4);
      if ((truncate_lines != '\0') && (chars_per_column < input_position)) {
        input_position = iVar2;
        return 0;
      }
      if (iVar3 != 0) {
        pcVar1 = clump_buff + (ulong)(iVar3 - 1) + 1;
        pcVar8 = clump_buff;
        do {
          pcVar7 = pcVar8 + 1;
          (*(code *)param_1[4])((ulong)(uint)(int)*pcVar8);
          pcVar8 = pcVar7;
        } while (pcVar7 != pcVar1);
      }
    }
    lVar10 = *param_1;
    pbVar5 = *(byte **)(lVar10 + 8);
    if (pbVar5 < *(byte **)(lVar10 + 0x10)) {
      *(byte **)(lVar10 + 8) = pbVar5 + 1;
      uVar9 = (ulong)*pbVar5;
    }
    else {
      uVar4 = func_0x00101b70();
      uVar9 = (ulong)uVar4;
    }
    if ((int)uVar9 != 10) {
      func_0x00101e40(uVar9,*param_1);
    }
  }
  if (keep_FF != '\0') {
    print_a_FF = 1;
  }
code_r0x00104041:
  hold_file_isra_1(param_1 + 2,param_1 + 6);
  return 1;
}

