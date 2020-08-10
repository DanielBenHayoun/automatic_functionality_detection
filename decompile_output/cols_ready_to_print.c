
ulong cols_ready_to_print(void)

{
  ulong uVar1;
  uint *puVar2;
  
  uVar1 = (ulong)columns;
  if (columns != 0) {
    puVar2 = (uint *)(column_vector + 0x10);
    uVar1 = 0;
    do {
      if ((*puVar2 < 2) ||
         (((storing_columns != '\0' && (0 < (int)puVar2[7])) && (0 < (int)puVar2[8])))) {
        uVar1 = (ulong)((int)uVar1 + 1);
      }
      puVar2 = puVar2 + 0x10;
    } while (puVar2 != (uint *)(column_vector + 0x50 + (ulong)(columns - 1) * 0x40));
  }
  return uVar1;
}

