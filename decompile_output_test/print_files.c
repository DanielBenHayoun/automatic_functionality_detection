
void print_files(ulong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 uVar16;
  byte bVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  int iVar21;
  undefined8 *puVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  
  puVar19 = (undefined8 *)(param_1 & 0xffffffff);
  lines_per_body = lines_per_page + -10;
  if (lines_per_body < 1) {
    extremities = '\0';
    keep_FF = '\x01';
  }
  else {
    if (extremities != '\0') goto code_r0x00104318;
  }
  lines_per_body = lines_per_page;
code_r0x00104318:
  if (double_space != '\0') {
    lines_per_body = lines_per_body / 2;
  }
  if ((uint)puVar19 == 0) {
    parallel_files = 0;
    puVar12 = (undefined8 *)(ulong)columns;
    uVar25 = columns;
  }
  else {
    puVar12 = puVar19;
    uVar25 = (uint)puVar19;
    if (parallel_files == 0) goto code_r0x00105282;
  }
  do {
    columns = uVar25;
    if (storing_columns != '\0') {
      balance_columns = '\x01';
    }
    iVar10 = (int)puVar12;
    if (iVar10 < 2) {
      storing_columns = '\0';
    }
    else {
      if (use_col_separator == 0) {
        if (join_lines == '\0') {
          col_sep_string = " ";
        }
        else {
          col_sep_string = "\t";
        }
        col_sep_length = 1;
        use_col_separator = 1;
      }
      else {
        if (((join_lines == '\0') && (col_sep_length == 1)) && (*col_sep_string == '\t')) {
          col_sep_string = " ";
        }
      }
      truncate_lines = '\x01';
      tabify_output = 1;
    }
    if (join_lines != '\0') {
      truncate_lines = '\0';
    }
    if (numbered_lines == 0) {
code_r0x001045d0:
      iVar11 = 0;
    }
    else {
      line_count = start_line_num;
      if (number_separator == '\t') {
        uVar25 = (uint)((int)chars_per_number >> 0x1f) >> 0x1d;
        number_width = chars_per_number + 8 + (uVar25 - (chars_per_number + uVar25 & 7));
      }
      else {
        number_width = chars_per_number + 1;
      }
      iVar11 = number_width;
      if (parallel_files == 0) goto code_r0x001045d0;
    }
    lVar15 = (long)(iVar10 + -1) * (long)col_sep_length;
    iVar21 = (int)lVar15;
    iVar9 = (int)((ulong)lVar15 >> 0x20);
    if (iVar9 != 0 && iVar9 != -1) {
      iVar21 = 0x7fffffff;
    }
    iVar9 = (chars_per_line - iVar11) - iVar21;
    if (SBORROW4(chars_per_line - iVar11,iVar21)) {
      chars_per_column = 0;
code_r0x00105259:
      uVar16 = func_0x00101c80(0,&UNK_0010bee6,5);
      func_0x00101ee0(1,0,uVar16);
    }
    else {
      chars_per_column = iVar9 / iVar10;
      if (chars_per_column < 1) goto code_r0x00105259;
      if (numbered_lines != 0) {
        func_0x00101b90(number_buff,(ulong)numbered_lines,(long)iVar9 % (long)iVar10 & 0xffffffff);
        uVar25 = 0xb;
        if (10 < chars_per_number) {
          uVar25 = chars_per_number;
        }
        number_buff = xmalloc((ulong)uVar25 + 1);
      }
      func_0x00101b90(clump_buff);
      iVar10 = 8;
      if (7 < chars_per_input_tab) {
        iVar10 = chars_per_input_tab;
      }
      clump_buff = xmalloc((long)iVar10);
      total_files = 0;
      func_0x00101b90(column_vector);
      if (SUB168(ZEXT816(0x40) * ZEXT816((ulong)(long)(int)columns) >> 0x40,0) == 0) {
        puVar12 = (undefined8 *)xmalloc((long)(int)columns << 6);
        iVar10 = (int)puVar19;
        column_vector = puVar12;
        if (parallel_files == 0) {
          if (iVar10 < 1) {
            uVar16 = func_0x00101c80(0,&UNK_0010bed5,5);
            puVar12[1] = uVar16;
            uVar16 = stdin;
            *(undefined4 *)(puVar12 + 2) = 0;
            *(undefined *)((long)puVar12 + 0x39) = 0;
            have_read_stdin = 1;
            total_files = total_files + 1;
            *puVar12 = uVar16;
            init_header();
            *(undefined4 *)((long)puVar12 + 0x2c) = 0;
          }
          else {
            cVar7 = open_file(*param_2);
            if (cVar7 == '\0') {
              return;
            }
            func_0x00101df0(*puVar12);
            init_header();
            *(undefined4 *)((long)puVar12 + 0x2c) = 0;
          }
          uVar16 = puVar12[1];
          uVar1 = *puVar12;
          if (columns != 1) {
            uVar25 = columns - 2;
            puVar12 = puVar12 + 8;
            do {
              puVar12[1] = uVar16;
              *puVar12 = uVar1;
              puVar22 = puVar12 + 8;
              *(undefined4 *)(puVar12 + 2) = 0;
              *(undefined *)((long)puVar12 + 0x39) = 0;
              *(undefined4 *)((long)puVar12 + 0x2c) = 0;
              puVar12 = puVar22;
            } while (puVar22 != puVar12 + ((ulong)uVar25 + 2) * 8);
          }
        }
        else {
          if (iVar10 != 0) {
            puVar19 = param_2 + (ulong)(iVar10 - 1) + 1;
            do {
              cVar7 = open_file(*param_2,puVar12);
              if (cVar7 == '\0') {
                columns = columns - 1;
                puVar12 = puVar12 + -8;
              }
              param_2 = param_2 + 1;
              puVar12 = puVar12 + 8;
            } while (param_2 != puVar19);
          }
          if (columns == 0) {
            return;
          }
          init_header();
        }
        files_ready_to_read = total_files;
        if (storing_columns == '\0') goto code_r0x00104673;
        uVar20 = (long)lines_per_body * (long)(int)columns & 0xffffffff;
        iVar10 = (int)((ulong)((long)lines_per_body * (long)(int)columns) >> 0x20);
        if (iVar10 == 0 || iVar10 == -1) {
          iVar10 = (int)uVar20;
          uVar25 = iVar10 + 1;
          puVar19 = (undefined8 *)(ulong)uVar25;
          if (SCARRY4(iVar10,1)) goto code_r0x00105236;
          param_2 = (undefined8 *)(ulong)(chars_per_column + 1U);
          if ((SCARRY4(chars_per_column,1)) ||
             (uVar26 = (long)(int)(chars_per_column + 1U) * (long)iVar10,
             param_2 = (undefined8 *)(uVar26 & 0xffffffff), iVar11 = (int)(uVar26 >> 0x20),
             iVar11 != 0 && iVar11 != -1)) goto code_r0x00105236;
          func_0x00101b90();
          if (SUB168(ZEXT816(4) * ZEXT816((ulong)(long)(int)uVar25) >> 0x40,0) != 0)
          goto code_r0x0010527d;
          uVar20 = SEXT48(iVar10);
          line_vector = xmalloc((long)(int)uVar25 * 4);
          func_0x00101b90();
          bVar3 = false;
          lVar15 = SUB168(ZEXT816(4) * ZEXT816(uVar20),0);
          if (SUB168(ZEXT816(4) * ZEXT816(uVar20) >> 0x40,0) != 0) goto code_r0x0010523b;
        }
        else {
code_r0x00105236:
          lVar15 = integer_overflow();
code_r0x0010523b:
          bVar3 = true;
        }
        if ((-1 < lVar15) && (!bVar3)) {
          param_2 = (undefined8 *)(long)(int)param_2;
          end_vector = xmalloc(uVar20 * 4);
          func_0x00101b90(buff);
          if (SUB168(ZEXT816((ulong)use_col_separator + 1) * ZEXT816(param_2) >> 0x40,0) == 0)
          break;
        }
      }
    }
code_r0x0010527d:
    xalloc_die();
code_r0x00105282:
    puVar12 = (undefined8 *)(ulong)columns;
    uVar25 = columns;
  } while( true );
  buff = xmalloc();
  buff_allocated = (long)param_2 * ((ulong)use_col_separator + 1);
code_r0x00104673:
  uVar20 = first_page_number;
  if (first_page_number < 2) {
    page_number = 1;
  }
  else {
    uVar26 = 1;
    do {
      iVar10 = 1;
      puVar12 = column_vector;
      puVar19 = column_vector;
      uVar25 = columns;
      if (1 < lines_per_body) {
        do {
          puVar19 = puVar12;
          if (0 < (int)uVar25) {
            iVar11 = 1;
            do {
              while (*(int *)(puVar12 + 2) != 0) {
                iVar11 = iVar11 + 1;
                puVar12 = puVar12 + 8;
                puVar19 = column_vector;
                if ((int)uVar25 < iVar11) goto code_r0x00104eee;
              }
              iVar11 = iVar11 + 1;
              skip_read();
              puVar12 = puVar12 + 8;
              puVar19 = column_vector;
              uVar25 = columns;
            } while (iVar11 <= (int)columns);
          }
code_r0x00104eee:
          iVar10 = iVar10 + 1;
          puVar12 = puVar19;
        } while (iVar10 < lines_per_body);
      }
      last_line = 1;
      if (0 < (int)uVar25) {
        iVar10 = 1;
        do {
          while (*(int *)(puVar19 + 2) != 0) {
            iVar10 = iVar10 + 1;
            puVar19 = puVar19 + 8;
            if ((int)uVar25 < iVar10) goto code_r0x00104f3f;
          }
          iVar10 = iVar10 + 1;
          skip_read();
          puVar19 = puVar19 + 8;
          uVar25 = columns;
        } while (iVar10 <= (int)columns);
code_r0x00104f3f:
        if ((storing_columns != '\0') && (0 < (int)uVar25)) {
          puVar19 = column_vector + 2;
          puVar12 = column_vector + (ulong)(uVar25 - 1) * 8 + 10;
          do {
            if (*(int *)puVar19 != 3) {
              *(int *)puVar19 = 2;
            }
            puVar19 = puVar19 + 8;
          } while (puVar19 != puVar12);
        }
      }
      reset_status();
      last_line = 0;
      if (files_ready_to_read < 1) {
        uVar16 = func_0x00101c80(0,&UNK_0010c128,5);
        func_0x00101ee0(0,0,uVar16);
        if (files_ready_to_read < 1) {
          return;
        }
        break;
      }
      uVar26 = uVar26 + 1;
    } while (uVar20 != uVar26);
    page_number = first_page_number;
  }
  puVar19 = column_vector;
  cVar5 = truncate_lines;
  iVar11 = chars_per_column;
  bVar23 = numbered_lines;
  iVar10 = col_sep_length;
  cVar7 = storing_columns;
  uVar25 = columns;
  iVar9 = 0;
  if (((truncate_lines != '\0') &&
      (iVar9 = chars_per_column + chars_per_margin, parallel_files != 0)) && (numbered_lines != 0))
  {
    iVar9 = iVar9 + number_width;
  }
  iVar21 = chars_per_margin + col_sep_length;
  if ((int)columns < 2) {
    iVar10 = 1;
    puVar12 = column_vector;
  }
  else {
    bVar8 = parallel_files ^ 1;
    puVar12 = column_vector;
    uVar24 = 1;
    do {
      while( true ) {
        uVar18 = uVar24;
        if (cVar7 == '\0') {
          puVar12[4] = 0x1034e0;
          puVar12[3] = 0x103d50;
        }
        else {
          puVar12[4] = 0x102b00;
          puVar12[3] = 0x103590;
        }
        bVar17 = 0;
        if (bVar23 != 0) {
          bVar17 = uVar18 == 1 | bVar8;
        }
        *(byte *)(puVar12 + 7) = bVar17;
        *(int *)((long)puVar12 + 0x34) = iVar21;
        if (cVar5 == '\0') break;
        puVar12 = puVar12 + 8;
        iVar21 = iVar10 + iVar9;
        iVar9 = iVar21 + iVar11;
        uVar24 = uVar18 + 1;
        if (uVar18 + 1 == uVar25) goto code_r0x001047c1;
      }
      iVar9 = 0;
      iVar21 = 0;
      puVar12 = puVar12 + 8;
      uVar24 = uVar18 + 1;
    } while (uVar18 + 1 != uVar25);
code_r0x001047c1:
    iVar10 = uVar18 + 1;
    puVar12 = puVar19 + ((ulong)(uVar18 - 1) + 1) * 8;
  }
  if ((cVar7 == '\0') || (balance_columns == '\0')) {
    puVar12[4] = 0x1034e0;
    puVar12[3] = 0x103d50;
  }
  else {
    puVar12[4] = 0x102b00;
    puVar12[3] = 0x103590;
  }
  if (bVar23 != 0) {
    bVar23 = parallel_files ^ 1 | iVar10 == 1;
  }
  *(byte *)(puVar12 + 7) = bVar23;
  *(int *)((long)puVar12 + 0x34) = iVar21;
  line_number = line_count;
  puVar12 = puVar19;
  if (cVar7 != '\0') goto code_r0x00104b1c;
  do {
    iVar10 = lines_per_body;
    if (uVar25 != 0) {
      puVar12 = puVar19 + 6;
      do {
        while (*(int *)(puVar12 + -4) == 0) {
          *(int *)puVar12 = iVar10;
          puVar12 = puVar12 + 8;
          if (puVar19 + (ulong)(uVar25 - 1) * 8 + 0xe == puVar12) goto code_r0x0010487b;
        }
        *(undefined4 *)puVar12 = 0;
        puVar12 = puVar12 + 8;
      } while (puVar19 + (ulong)(uVar25 - 1) * 8 + 0xe != puVar12);
    }
code_r0x0010487b:
    iVar10 = cols_ready_to_print();
    if (iVar10 == 0) {
      return;
    }
    if (extremities != '\0') {
      print_a_header = 1;
    }
    pad_vertically = 0;
    iVar10 = lines_per_body;
    if (double_space != '\0') {
      iVar10 = lines_per_body * 2;
    }
    bVar8 = 0;
    bVar23 = 0;
    if (iVar10 < 1) {
      if (iVar10 == 0) {
        if (0 < (int)uVar25) goto code_r0x00104a5c;
        pad_vertically = 0;
      }
code_r0x00104a9f:
      if ((keep_FF != '\0') && (print_a_FF != '\0')) {
        puVar2 = *(undefined **)(stdout + 0x28);
        if (puVar2 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar2 + 1;
          *puVar2 = 0xc;
        }
        else {
          func_0x00101cf0();
        }
        print_a_FF = '\0';
      }
    }
    else {
      do {
        bVar8 = bVar23;
        iVar11 = cols_ready_to_print();
        if (iVar11 == 0) goto code_r0x00104a86;
        output_position = 0;
        spaces_not_printed = 0;
        separators_not_printed = 0;
        pad_vertically = 0;
        align_empty_cols = 0;
        empty_line = '\x01';
        if (0 < (int)columns) {
          iVar11 = 1;
          puVar19 = column_vector;
          do {
            input_position = 0;
            if ((*(int *)(puVar19 + 6) < 1) && (*(int *)(puVar19 + 2) != 1)) {
              if (parallel_files != 0) {
                if (empty_line == '\0') {
code_r0x00104ca0:
                  align_column();
                }
                else {
code_r0x00104c70:
                  align_empty_cols = 1;
                }
              }
            }
            else {
              padding_not_printed = *(undefined4 *)((long)puVar19 + 0x34);
              FF_only = '\0';
              cVar7 = (*(code *)puVar19[3])();
              if (cVar7 == '\0') {
                read_rest_of_line();
              }
              bVar23 = pad_vertically;
              iVar9 = *(int *)(puVar19 + 6);
              bVar8 = bVar8 | pad_vertically;
              *(int *)(puVar19 + 6) = iVar9 + -1;
              if ((iVar9 + -1 < 1) && (iVar9 = cols_ready_to_print(), iVar9 == 0)) {
                if (bVar23 == 0) goto code_r0x00104cc8;
                goto code_r0x001049d8;
              }
              if ((parallel_files != 0) && (iVar9 = *(int *)(puVar19 + 2), iVar9 != 0)) {
                if (empty_line != '\0') goto code_r0x00104c70;
                if ((iVar9 == 3) || ((iVar9 == 2 && (FF_only != '\0')))) goto code_r0x00104ca0;
              }
            }
            if (use_col_separator != 0) {
              separators_not_printed = separators_not_printed + 1;
            }
            iVar11 = iVar11 + 1;
            puVar19 = puVar19 + 8;
          } while (iVar11 <= (int)columns);
          if (pad_vertically != 0) {
code_r0x001049d8:
            puVar2 = *(undefined **)(stdout + 0x28);
            if (puVar2 < *(undefined **)(stdout + 0x30)) {
              *(undefined **)(stdout + 0x28) = puVar2 + 1;
              *puVar2 = 10;
            }
            else {
              func_0x00101cf0();
            }
            iVar10 = iVar10 + -1;
          }
        }
        iVar11 = cols_ready_to_print();
        if (iVar11 == 0) {
code_r0x00104cc8:
          if (extremities == '\0') break;
        }
        if ((double_space != '\0') && (bVar8 != 0)) {
          puVar2 = *(undefined **)(stdout + 0x28);
          if (puVar2 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar2 + 1;
            *puVar2 = 10;
          }
          else {
            func_0x00101cf0();
          }
          iVar10 = iVar10 + -1;
        }
        bVar23 = bVar8;
      } while (0 < iVar10);
      if ((iVar10 == 0) && (puVar19 = column_vector, uVar25 = columns, 0 < (int)columns)) {
code_r0x00104a5c:
        puVar12 = puVar19 + 2;
        do {
          if (*(int *)puVar12 == 0) {
            *(undefined *)((long)puVar12 + 0x29) = 1;
          }
          puVar12 = puVar12 + 8;
        } while (puVar19 + (ulong)(uVar25 - 1) * 8 + 10 != puVar12);
        iVar10 = 0;
      }
code_r0x00104a86:
      pad_vertically = bVar8;
      if ((bVar8 == 0) || (extremities == '\0')) goto code_r0x00104a9f;
      if (use_form_feed == '\0') {
        iVar10 = iVar10 + 5;
        while (iVar10 != 0) {
          puVar2 = *(undefined **)(stdout + 0x28);
          if (puVar2 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar2 + 1;
            *puVar2 = 10;
          }
          else {
            func_0x00101cf0();
          }
          iVar10 = iVar10 + -1;
        }
      }
      else {
        puVar2 = *(undefined **)(stdout + 0x28);
        if (puVar2 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar2 + 1;
          *puVar2 = 0xc;
        }
        else {
          func_0x00101cf0();
        }
      }
    }
    page_number = page_number + 1;
    if (last_page_number < page_number) {
      return;
    }
    reset_status();
    puVar19 = column_vector;
    puVar12 = column_vector;
    uVar25 = columns;
  } while (storing_columns == '\0');
code_r0x00104b1c:
  cVar7 = balance_columns;
  buff_current = 0;
  iVar10 = uVar25 - (balance_columns == '\0');
  if (iVar10 < 1) {
    iVar11 = 0;
  }
  else {
    puVar13 = (undefined4 *)((long)puVar12 + 0x2c);
    do {
      *puVar13 = 0;
      puVar13 = puVar13 + 0x10;
    } while ((undefined4 *)((long)puVar12 + (ulong)(iVar10 - 1) * 0x40 + 0x6c) != puVar13);
    iVar11 = files_ready_to_read;
    if (files_ready_to_read != 0) {
      iVar11 = 0;
      iVar9 = 1;
      uVar24 = 0;
      uVar20 = 0;
      do {
        iVar21 = lines_per_body;
        *(uint *)(puVar12 + 5) = uVar24;
joined_r0x00104b94:
        if (iVar21 != 0) {
          do {
            if (files_ready_to_read == 0) {
              lVar15 = uVar20 * 4;
              puVar19 = column_vector;
              cVar7 = balance_columns;
              uVar25 = columns;
              goto code_r0x00104d24;
            }
            if (*(int *)(puVar12 + 2) == 0) {
              input_position = 0;
              cVar7 = read_line();
              if (cVar7 == '\0') {
                read_rest_of_line();
              }
              iVar6 = buff_current;
              lVar15 = line_vector;
              if ((*(int *)(puVar12 + 2) == 0) || (iVar11 != buff_current)) goto code_r0x00104be6;
            }
            iVar21 = iVar21 + -1;
            if (iVar21 == 0) break;
          } while( true );
        }
        iVar9 = iVar9 + 1;
        puVar12 = puVar12 + 8;
        lVar15 = uVar20 * 4;
        puVar19 = column_vector;
        cVar7 = balance_columns;
        uVar25 = columns;
        if ((iVar10 < iVar9) || (files_ready_to_read == 0)) goto code_r0x00104d24;
      } while( true );
    }
  }
  lVar15 = 0;
  uVar24 = 0;
  puVar19 = puVar12;
code_r0x00104d24:
  *(int *)(line_vector + lVar15) = iVar11;
  puVar12 = puVar19;
  if (cVar7 == '\0') {
    if (uVar25 != 1) goto code_r0x00104d83;
code_r0x00104ddf:
    if (*(int *)(puVar12 + 2) == 0) {
      *(int *)(puVar12 + 6) = lines_per_body;
    }
    else {
      *(undefined4 *)(puVar12 + 6) = 0;
    }
  }
  else {
    if (0 < (int)uVar25) {
      iVar11 = 0;
      iVar10 = 1;
      puVar22 = puVar19;
      do {
        *(int *)(puVar22 + 5) = iVar11;
        iVar9 = (int)uVar24 / (int)uVar25 + 1;
        if ((int)uVar24 % uVar25 < iVar10) {
          iVar9 = (int)uVar24 / (int)uVar25;
        }
        iVar10 = iVar10 + 1;
        *(int *)((long)puVar22 + 0x2c) = iVar9;
        iVar11 = iVar11 + iVar9;
        puVar22 = puVar22 + 8;
      } while (uVar25 + 1 != iVar10);
    }
    if (uVar25 != 1) {
code_r0x00104d83:
      puVar13 = (undefined4 *)((long)puVar19 + 0x2c);
      do {
        puVar14 = puVar13 + 0x10;
        puVar13[1] = *puVar13;
        puVar13 = puVar14;
      } while ((undefined4 *)((long)puVar19 + (ulong)(uVar25 - 2) * 0x40 + 0x6c) != puVar14);
      puVar12 = puVar19 + ((ulong)(uVar25 - 2) + 1) * 8;
      if (cVar7 == '\0') goto code_r0x00104ddf;
    }
    *(undefined4 *)(puVar12 + 6) = *(undefined4 *)((long)puVar12 + 0x2c);
  }
  goto code_r0x0010487b;
code_r0x00104be6:
  *(int *)((long)puVar12 + 0x2c) = *(int *)((long)puVar12 + 0x2c) + 1;
  uVar4 = input_position;
  uVar24 = uVar24 + 1;
  iVar21 = iVar21 + -1;
  *(int *)(lVar15 + uVar20 * 4) = iVar11;
  *(undefined4 *)(end_vector + uVar20 * 4) = uVar4;
  uVar20 = (ulong)uVar24;
  iVar11 = iVar6;
  goto joined_r0x00104b94;
}

