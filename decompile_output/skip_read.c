
void skip_read(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  pbVar3 = *(byte **)(lVar2 + 8);
  if (pbVar3 < *(byte **)(lVar2 + 0x10)) {
    *(byte **)(lVar2 + 8) = pbVar3 + 1;
    uVar5 = (ulong)*pbVar3;
  }
  else {
    uVar5 = func_0x00101b70();
  }
  bVar8 = last_line;
  if ((int)uVar5 == 0xc) {
    if (*(char *)((long)param_1 + 0x39) == '\0') {
      if (last_line == false) {
        bVar8 = true;
      }
      else {
        *(undefined *)((long)param_1 + 0x39) = 1;
        bVar4 = bVar8;
code_r0x00103b57:
        if (bVar4 != false) {
          if (parallel_files == '\0') {
            if (columns != 0) {
              uVar7 = columns - 1;
              puVar6 = (undefined *)(column_vector + 0x39);
              lVar1 = column_vector + 0x79;
              do {
                *puVar6 = 0;
                puVar6 = puVar6 + 0x40;
              } while (puVar6 != (undefined *)(lVar1 + (ulong)uVar7 * 0x40));
            }
          }
          else {
            *(undefined *)((long)param_1 + 0x39) = 0;
          }
        }
      }
      pbVar3 = *(byte **)(lVar2 + 8);
      if (pbVar3 < *(byte **)(lVar2 + 0x10)) {
        *(byte **)(lVar2 + 8) = pbVar3 + 1;
        uVar5 = (ulong)*pbVar3;
      }
      else {
        uVar7 = func_0x00101b70();
        uVar5 = (ulong)uVar7;
      }
      if ((int)uVar5 == 10) {
        hold_file_isra_1(param_1 + 2,param_1 + 6);
      }
      else {
        func_0x00101e40(uVar5,lVar2);
        hold_file_isra_1(param_1 + 2,param_1 + 6);
      }
      goto code_r0x00103aa6;
    }
    pbVar3 = *(byte **)(lVar2 + 8);
    if (pbVar3 < *(byte **)(lVar2 + 0x10)) {
      *(byte **)(lVar2 + 8) = pbVar3 + 1;
      uVar5 = (ulong)*pbVar3;
    }
    else {
      uVar5 = func_0x00101b70();
    }
    if ((int)uVar5 == 10) {
      pbVar3 = *(byte **)(lVar2 + 8);
      if (pbVar3 < *(byte **)(lVar2 + 0x10)) {
        *(byte **)(lVar2 + 8) = pbVar3 + 1;
        uVar5 = (ulong)*pbVar3;
      }
      else {
        uVar5 = func_0x00101b70();
      }
    }
    bVar8 = (int)uVar5 == 0xc;
    *(undefined *)((long)param_1 + 0x39) = 0;
  }
  else {
    *(undefined *)((long)param_1 + 0x39) = 0;
    bVar8 = false;
  }
  if (last_line != false) {
    *(undefined *)((long)param_1 + 0x39) = 1;
  }
  while ((int)uVar5 != 10) {
    while( true ) {
      bVar4 = last_line;
      if ((int)uVar5 == 0xc) goto code_r0x00103b57;
      if ((int)uVar5 == -1) {
        if (*(int *)(param_1 + 2) != 3) {
          close_file_part_4(param_1);
        }
        goto code_r0x00103aa6;
      }
      pbVar3 = *(byte **)(lVar2 + 8);
      if (*(byte **)(lVar2 + 0x10) <= pbVar3) break;
      *(byte **)(lVar2 + 8) = pbVar3 + 1;
      uVar5 = (ulong)*pbVar3;
      if (*pbVar3 == 10) goto code_r0x00103aa6;
    }
    uVar5 = func_0x00101b70();
  }
code_r0x00103aa6:
  if ((skip_count != '\0') && (((parallel_files != '\x01' || (param_2 == 1)) && (bVar8 == false))))
  {
    line_count = line_count + 1;
  }
  return;
}

