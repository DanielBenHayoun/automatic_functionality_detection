
void close_file_part_4(byte **param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  bool bVar14;
  
  if ((**param_1 & 0x20) == 0) {
    iVar5 = func_0x00101df0();
    if ((iVar5 == 0) || (iVar5 = rpl_fclose(*param_1), iVar5 == 0)) {
      if (parallel_files == '\0') {
        if (columns != 0) {
          uVar11 = columns - 1;
          puVar6 = (undefined4 *)(column_vector + 0x10);
          lVar1 = column_vector + 0x50;
          do {
            *puVar6 = 3;
            if (puVar6[7] == 0) {
              puVar6[8] = 0;
            }
            puVar6 = puVar6 + 0x10;
          } while (puVar6 != (undefined4 *)(lVar1 + (ulong)uVar11 * 0x40));
          files_ready_to_read = files_ready_to_read + -1;
          return;
        }
      }
      else {
        *(undefined4 *)(param_1 + 2) = 3;
        *(undefined4 *)(param_1 + 6) = 0;
      }
      files_ready_to_read = files_ready_to_read + -1;
      return;
    }
    param_1 = (byte **)quotearg_n_style_colon(0,3,param_1[1]);
    puVar7 = (uint *)func_0x00101bb0();
    func_0x00101ee0(1,(ulong)*puVar7,&UNK_0010d84a,param_1);
  }
  uVar8 = quotearg_n_style_colon(0,3,param_1[1]);
  puVar7 = (uint *)func_0x00101bb0();
  uVar11 = *puVar7;
  plVar13 = (long *)0x1;
  func_0x00101ee0(1,(ulong)uVar11,&UNK_0010d84a,uVar8);
  lVar1 = *plVar13;
  pbVar3 = *(byte **)(lVar1 + 8);
  if (pbVar3 < *(byte **)(lVar1 + 0x10)) {
    *(byte **)(lVar1 + 8) = pbVar3 + 1;
    uVar9 = (ulong)*pbVar3;
  }
  else {
    uVar9 = func_0x00101b70();
  }
  bVar14 = last_line;
  if ((int)uVar9 == 0xc) {
    if (*(char *)((long)plVar13 + 0x39) == '\0') {
      if (last_line == false) {
        bVar14 = true;
      }
      else {
        *(undefined *)((long)plVar13 + 0x39) = 1;
        bVar4 = bVar14;
code_r0x00103b57:
        if (bVar4 != false) {
          if (parallel_files == '\0') {
            if (columns != 0) {
              uVar12 = columns - 1;
              puVar10 = (undefined *)(column_vector + 0x39);
              lVar2 = column_vector + 0x79;
              do {
                *puVar10 = 0;
                puVar10 = puVar10 + 0x40;
              } while (puVar10 != (undefined *)(lVar2 + (ulong)uVar12 * 0x40));
            }
          }
          else {
            *(undefined *)((long)plVar13 + 0x39) = 0;
          }
        }
      }
      pbVar3 = *(byte **)(lVar1 + 8);
      if (pbVar3 < *(byte **)(lVar1 + 0x10)) {
        *(byte **)(lVar1 + 8) = pbVar3 + 1;
        uVar9 = (ulong)*pbVar3;
      }
      else {
        uVar12 = func_0x00101b70();
        uVar9 = (ulong)uVar12;
      }
      if ((int)uVar9 == 10) {
        hold_file_isra_1(plVar13 + 2,plVar13 + 6);
      }
      else {
        func_0x00101e40(uVar9,lVar1);
        hold_file_isra_1(plVar13 + 2,plVar13 + 6);
      }
      goto code_r0x00103aa6;
    }
    pbVar3 = *(byte **)(lVar1 + 8);
    if (pbVar3 < *(byte **)(lVar1 + 0x10)) {
      *(byte **)(lVar1 + 8) = pbVar3 + 1;
      uVar9 = (ulong)*pbVar3;
    }
    else {
      uVar9 = func_0x00101b70();
    }
    if ((int)uVar9 == 10) {
      pbVar3 = *(byte **)(lVar1 + 8);
      if (pbVar3 < *(byte **)(lVar1 + 0x10)) {
        *(byte **)(lVar1 + 8) = pbVar3 + 1;
        uVar9 = (ulong)*pbVar3;
      }
      else {
        uVar9 = func_0x00101b70();
      }
    }
    bVar14 = (int)uVar9 == 0xc;
    *(undefined *)((long)plVar13 + 0x39) = 0;
  }
  else {
    *(undefined *)((long)plVar13 + 0x39) = 0;
    bVar14 = false;
  }
  if (last_line != false) {
    *(undefined *)((long)plVar13 + 0x39) = 1;
  }
  while ((int)uVar9 != 10) {
    while( true ) {
      bVar4 = last_line;
      if ((int)uVar9 == 0xc) goto code_r0x00103b57;
      if ((int)uVar9 == -1) {
        if (*(int *)(plVar13 + 2) != 3) {
          close_file_part_4(plVar13);
        }
        goto code_r0x00103aa6;
      }
      pbVar3 = *(byte **)(lVar1 + 8);
      if (*(byte **)(lVar1 + 0x10) <= pbVar3) break;
      *(byte **)(lVar1 + 8) = pbVar3 + 1;
      uVar9 = (ulong)*pbVar3;
      if (*pbVar3 == 10) goto code_r0x00103aa6;
    }
    uVar9 = func_0x00101b70();
  }
code_r0x00103aa6:
  if ((skip_count != '\0') && (((parallel_files != '\x01' || (uVar11 == 1)) && (bVar14 == false))))
  {
    line_count = line_count + 1;
  }
  return;
}

