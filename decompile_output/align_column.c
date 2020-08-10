
void align_column(long param_1)

{
  code **ppcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 unaff_RBX;
  
  padding_not_printed = *(int *)(param_1 + 0x34);
  if (col_sep_length < padding_not_printed) {
    pad_across_to((ulong)(uint)(padding_not_printed - col_sep_length));
    padding_not_printed = 0;
  }
  if (use_col_separator != '\0') {
    print_sep_string();
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    ppcVar1 = (code **)(param_1 + 0x20);
    iVar3 = func_0x00101fa0(number_buff,1,0xffffffffffffffff,&UNK_0010bed1,(ulong)chars_per_number,
                            (ulong)line_number,unaff_RBX);
    line_number = line_number + 1;
    lVar5 = (int)(iVar3 - chars_per_number) + number_buff;
    if (0 < (int)chars_per_number) {
      uVar4 = chars_per_number - 1;
      lVar2 = lVar5 + 1;
      do {
        lVar5 = lVar5 + 1;
        (**ppcVar1)();
      } while (lVar5 != lVar2 + (ulong)uVar4);
    }
    if (columns < 2) {
      (**ppcVar1)();
      if (number_separator == '\t') {
        output_position =
             (chars_per_output_tab - output_position % chars_per_output_tab) + output_position;
      }
    }
    else {
      if (number_separator == '\t') {
        iVar3 = (number_width - chars_per_number) + -1;
        if (0 < (int)(number_width - chars_per_number)) {
          do {
            iVar3 = iVar3 + -1;
            (**ppcVar1)(0x20);
          } while (iVar3 != -1);
        }
      }
      else {
        (**ppcVar1)();
      }
    }
    if ((truncate_lines != '\0') && (parallel_files == '\0')) {
      input_position = input_position + number_width;
    }
    return;
  }
  return;
}

