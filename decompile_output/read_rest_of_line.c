
void read_rest_of_line(byte **param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  uint uVar14;
  undefined8 unaff_RBX;
  long *plVar15;
  undefined8 in_R8;
  undefined8 in_R9;
  bool bVar16;
  
  pbVar3 = *param_1;
  do {
    pbVar4 = *(byte **)(pbVar3 + 8);
    if (pbVar4 < *(byte **)(pbVar3 + 0x10)) {
      *(byte **)(pbVar3 + 8) = pbVar4 + 1;
      uVar8 = (uint)*pbVar4;
      if (*pbVar4 == 10) {
        return;
      }
    }
    else {
      uVar8 = func_0x00101b70();
      if (uVar8 == 10) {
        return;
      }
    }
    if (uVar8 == 0xc) {
      pbVar4 = *(byte **)(pbVar3 + 8);
      if (pbVar4 < *(byte **)(pbVar3 + 0x10)) {
        *(byte **)(pbVar3 + 8) = pbVar4 + 1;
        uVar12 = (ulong)*pbVar4;
      }
      else {
        uVar8 = func_0x00101b70();
        uVar12 = (ulong)uVar8;
      }
      cVar5 = storing_columns;
      if ((int)uVar12 != 10) {
        func_0x00101e40(uVar12,pbVar3);
        cVar5 = storing_columns;
      }
      if (keep_FF != '\0') {
        print_a_FF = 1;
      }
      storing_columns = cVar5;
      if (parallel_files == '\0') {
        if (columns != 0) {
          uVar8 = columns - 1;
          puVar9 = (undefined4 *)(column_vector + 0x10);
          lVar1 = column_vector + 0x50;
          do {
            if (cVar5 == '\0') {
              *puVar9 = 2;
            }
            else {
              *puVar9 = 1;
            }
            puVar9 = puVar9 + 0x10;
          } while (puVar9 != (undefined4 *)(lVar1 + (ulong)uVar8 * 0x40));
        }
        *(undefined4 *)(param_1 + 6) = 0;
        files_ready_to_read = files_ready_to_read + -1;
        return;
      }
      *(undefined4 *)(param_1 + 2) = 2;
      files_ready_to_read = files_ready_to_read + -1;
      *(undefined4 *)(param_1 + 6) = 0;
      return;
    }
  } while (uVar8 != 0xffffffff);
  if (*(int *)(param_1 + 2) == 3) {
    return;
  }
  if ((**param_1 & 0x20) == 0) {
    iVar7 = func_0x00101df0();
    if ((iVar7 == 0) || (iVar7 = rpl_fclose(*param_1), iVar7 == 0)) {
      if (parallel_files == '\0') {
        if (columns != 0) {
          uVar8 = columns - 1;
          puVar9 = (undefined4 *)(column_vector + 0x10);
          lVar1 = column_vector + 0x50;
          do {
            *puVar9 = 3;
            if (puVar9[7] == 0) {
              puVar9[8] = 0;
            }
            puVar9 = puVar9 + 0x10;
          } while (puVar9 != (undefined4 *)(lVar1 + (ulong)uVar8 * 0x40));
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
    puVar10 = (uint *)func_0x00101bb0();
    func_0x00101ee0(1,(ulong)*puVar10,&UNK_0010d84a,param_1,in_R8,in_R9,unaff_RBX);
  }
  uVar11 = quotearg_n_style_colon(0,3,param_1[1]);
  puVar10 = (uint *)func_0x00101bb0();
  uVar8 = *puVar10;
  plVar15 = (long *)0x1;
  func_0x00101ee0(1,(ulong)uVar8,&UNK_0010d84a,uVar11,in_R8,in_R9,unaff_RBX);
  lVar1 = *plVar15;
  pbVar3 = *(byte **)(lVar1 + 8);
  if (pbVar3 < *(byte **)(lVar1 + 0x10)) {
    *(byte **)(lVar1 + 8) = pbVar3 + 1;
    uVar12 = (ulong)*pbVar3;
  }
  else {
    uVar12 = func_0x00101b70();
  }
  bVar16 = last_line;
  if ((int)uVar12 == 0xc) {
    if (*(char *)((long)plVar15 + 0x39) == '\0') {
      if (last_line == false) {
        bVar16 = true;
      }
      else {
        *(undefined *)((long)plVar15 + 0x39) = 1;
        bVar6 = bVar16;
code_r0x00103b57:
        if (bVar6 != false) {
          if (parallel_files == '\0') {
            if (columns != 0) {
              uVar14 = columns - 1;
              puVar13 = (undefined *)(column_vector + 0x39);
              lVar2 = column_vector + 0x79;
              do {
                *puVar13 = 0;
                puVar13 = puVar13 + 0x40;
              } while (puVar13 != (undefined *)(lVar2 + (ulong)uVar14 * 0x40));
            }
          }
          else {
            *(undefined *)((long)plVar15 + 0x39) = 0;
          }
        }
      }
      pbVar3 = *(byte **)(lVar1 + 8);
      if (pbVar3 < *(byte **)(lVar1 + 0x10)) {
        *(byte **)(lVar1 + 8) = pbVar3 + 1;
        uVar12 = (ulong)*pbVar3;
      }
      else {
        uVar14 = func_0x00101b70();
        uVar12 = (ulong)uVar14;
      }
      if ((int)uVar12 == 10) {
        hold_file_isra_1(plVar15 + 2,plVar15 + 6);
      }
      else {
        func_0x00101e40(uVar12,lVar1);
        hold_file_isra_1(plVar15 + 2,plVar15 + 6);
      }
      goto code_r0x00103aa6;
    }
    pbVar3 = *(byte **)(lVar1 + 8);
    if (pbVar3 < *(byte **)(lVar1 + 0x10)) {
      *(byte **)(lVar1 + 8) = pbVar3 + 1;
      uVar12 = (ulong)*pbVar3;
    }
    else {
      uVar12 = func_0x00101b70();
    }
    if ((int)uVar12 == 10) {
      pbVar3 = *(byte **)(lVar1 + 8);
      if (pbVar3 < *(byte **)(lVar1 + 0x10)) {
        *(byte **)(lVar1 + 8) = pbVar3 + 1;
        uVar12 = (ulong)*pbVar3;
      }
      else {
        uVar12 = func_0x00101b70();
      }
    }
    bVar16 = (int)uVar12 == 0xc;
    *(undefined *)((long)plVar15 + 0x39) = 0;
  }
  else {
    *(undefined *)((long)plVar15 + 0x39) = 0;
    bVar16 = false;
  }
  if (last_line != false) {
    *(undefined *)((long)plVar15 + 0x39) = 1;
  }
  while ((int)uVar12 != 10) {
    while( true ) {
      bVar6 = last_line;
      if ((int)uVar12 == 0xc) goto code_r0x00103b57;
      if ((int)uVar12 == -1) {
        if (*(int *)(plVar15 + 2) != 3) {
          close_file_part_4(plVar15);
        }
        goto code_r0x00103aa6;
      }
      pbVar3 = *(byte **)(lVar1 + 8);
      if (*(byte **)(lVar1 + 0x10) <= pbVar3) break;
      *(byte **)(lVar1 + 8) = pbVar3 + 1;
      uVar12 = (ulong)*pbVar3;
      if (*pbVar3 == 10) goto code_r0x00103aa6;
    }
    uVar12 = func_0x00101b70();
  }
code_r0x00103aa6:
  if ((skip_count != '\0') && (((parallel_files != '\x01' || (uVar8 == 1)) && (bVar16 == false)))) {
    line_count = line_count + 1;
  }
  return;
}

