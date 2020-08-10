
undefined8 print_stored(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  
  lVar3 = buff;
  lVar8 = (long)*(int *)(param_1 + 0x28);
  pad_vertically = 1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  iVar2 = *(int *)(line_vector + 4 + lVar8 * 4);
  pcVar7 = (char *)(*(int *)(line_vector + lVar8 * 4) + lVar3);
  if (print_a_header != '\0') {
    print_header();
  }
  lVar4 = column_vector;
  if (*(int *)(param_1 + 0x10) == 1) {
    if (0 < columns) {
      uVar6 = columns - 1;
      puVar5 = (undefined4 *)(column_vector + 0x10);
      lVar1 = column_vector + 0x50;
      do {
        *puVar5 = 2;
        puVar5 = puVar5 + 0x10;
      } while (puVar5 != (undefined4 *)(lVar1 + (ulong)uVar6 * 0x40));
    }
    if (*(int *)(lVar4 + 0x30) < 1) {
      if (extremities != '\0') {
        return 1;
      }
      pad_vertically = 0;
      return 1;
    }
  }
  if (col_sep_length < padding_not_printed) {
    pad_across_to((ulong)(uint)(padding_not_printed - col_sep_length));
    padding_not_printed = 0;
  }
  if (use_col_separator != '\0') {
    print_sep_string();
  }
  while (pcVar7 != (char *)(lVar3 + iVar2)) {
    print_char((ulong)(uint)(int)*pcVar7);
    pcVar7 = pcVar7 + 1;
  }
  if ((spaces_not_printed == 0) &&
     (output_position = *(int *)(end_vector + lVar8 * 4) + *(int *)(param_1 + 0x34),
     *(int *)(param_1 + 0x34) - col_sep_length == chars_per_margin)) {
    output_position = output_position - col_sep_length;
    return 1;
  }
  return 1;
}

