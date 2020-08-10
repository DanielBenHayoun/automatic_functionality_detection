
void reset_status(void)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  lVar3 = column_vector;
  if (columns != 0) {
    uVar6 = columns - 1;
    piVar4 = (int *)(column_vector + 0x10);
    bVar2 = false;
    lVar1 = column_vector + 0x50;
    uVar5 = files_ready_to_read;
    do {
      if (*piVar4 == 2) {
        *piVar4 = 0;
        uVar5 = uVar5 + 1;
        bVar2 = true;
      }
      piVar4 = piVar4 + 0x10;
    } while (piVar4 != (int *)(lVar1 + (ulong)uVar6 * 0x40));
    if (bVar2) {
      files_ready_to_read = uVar5;
    }
  }
  if (storing_columns != '\0') {
    files_ready_to_read = (uint)(*(int *)(lVar3 + 0x10) != 3);
  }
  return;
}

