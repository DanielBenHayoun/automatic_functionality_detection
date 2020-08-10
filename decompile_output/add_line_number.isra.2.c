
void add_line_number_isra_2(code **param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  iVar2 = func_0x00101fa0(number_buff,1,0xffffffffffffffff,&UNK_0010bed1,(ulong)chars_per_number,
                          (ulong)line_number);
  line_number = line_number + 1;
  lVar4 = (int)(iVar2 - chars_per_number) + number_buff;
  if (0 < (int)chars_per_number) {
    uVar3 = chars_per_number - 1;
    lVar1 = lVar4 + 1;
    do {
      lVar4 = lVar4 + 1;
      (**param_1)();
    } while (lVar4 != lVar1 + (ulong)uVar3);
  }
  if (columns < 2) {
    (**param_1)();
    if (number_separator == '\t') {
      output_position =
           (chars_per_output_tab - output_position % chars_per_output_tab) + output_position;
    }
  }
  else {
    if (number_separator == '\t') {
      iVar2 = (number_width - chars_per_number) + -1;
      if (0 < (int)(number_width - chars_per_number)) {
        do {
          iVar2 = iVar2 + -1;
          (**param_1)(0x20);
        } while (iVar2 != -1);
      }
    }
    else {
      (**param_1)();
    }
  }
  if ((truncate_lines != '\0') && (parallel_files == '\0')) {
    input_position = input_position + number_width;
  }
  return;
}

