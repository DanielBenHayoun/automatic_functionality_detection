
void hold_file_isra_1(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar2 = storing_columns;
  if (parallel_files != '\0') {
    *param_1 = 2;
    files_ready_to_read = files_ready_to_read + -1;
    *param_2 = 0;
    return;
  }
  if (columns != 0) {
    puVar3 = (undefined4 *)(column_vector + 0x10);
    puVar1 = (undefined4 *)(column_vector + 0x50 + (ulong)(columns - 1) * 0x40);
    do {
      while (cVar2 == '\0') {
        *puVar3 = 2;
        puVar3 = puVar3 + 0x10;
        if (puVar3 == puVar1) goto code_r0x0010377a;
      }
      *puVar3 = 1;
      puVar3 = puVar3 + 0x10;
    } while (puVar3 != puVar1);
  }
code_r0x0010377a:
  *param_2 = 0;
  files_ready_to_read = files_ready_to_read + -1;
  return;
}

