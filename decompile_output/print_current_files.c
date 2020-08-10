
/* WARNING: Possible PIC construction at 0x00108f52: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00109358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010933d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00109305: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001092db: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010930a) */
/* WARNING: Removing unreachable block (ram,0x00109342) */
/* WARNING: Removing unreachable block (ram,0x0010935d) */
/* WARNING: Removing unreachable block (ram,0x00108f57) */
/* WARNING: Removing unreachable block (ram,0x001092e0) */

void print_current_files(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined uVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uStack64;
  
  switch(format) {
  case 0:
    uVar12 = 0;
    if (cwd_n_used != 0) {
      do {
        set_normal_color();
        print_long_format(sorted_file[uVar12]);
        puVar5 = *(undefined **)(stdout + 0x28);
        if (*(undefined **)(stdout + 0x30) <= puVar5) {
          uVar12 = 10;
          goto code_r0x00103490;
        }
        *(undefined **)(stdout + 0x28) = puVar5 + 1;
        *puVar5 = 10;
        dired_pos = dired_pos + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 < cwd_n_used);
    }
    return;
  case 1:
    uVar12 = 0;
    if (cwd_n_used == 0) {
      return;
    }
    while( true ) {
      print_file_name_and_frills(sorted_file[uVar12],0);
      puVar5 = *(undefined **)(stdout + 0x28);
      if (*(undefined **)(stdout + 0x30) <= puVar5) break;
      *(undefined **)(stdout + 0x28) = puVar5 + 1;
      *puVar5 = 10;
      uVar12 = uVar12 + 1;
      if (cwd_n_used <= uVar12) {
        return;
      }
    }
    uVar12 = 10;
    goto code_r0x00103490;
  case 2:
    if (line_length != 0) {
      uVar12 = calculate_columns(1);
      lVar2 = column_info + uVar12 * 0x18;
      uVar12 = (ulong)(cwd_n_used % uVar12 != 0) + cwd_n_used / uVar12;
      if (uVar12 == 0) {
        return;
      }
      uStack64 = 0;
      while( true ) {
        lVar15 = 0;
        lVar16 = uStack64 * 8;
        lVar7 = 0;
        uVar11 = uStack64;
        while( true ) {
          uVar3 = *(undefined8 *)((long)sorted_file + lVar16);
          lVar8 = length_of_file_name_and_frills(uVar3);
          lVar14 = *(long *)(*(long *)(lVar2 + -8) + lVar15);
          lVar15 = lVar15 + 8;
          print_file_name_and_frills(uVar3,lVar7);
          uVar11 = uVar11 + uVar12;
          lVar16 = lVar16 + uVar12 * 8;
          if (cwd_n_used <= uVar11) break;
          lVar14 = lVar14 + lVar7;
          indent(lVar8 + lVar7,lVar14);
          lVar7 = lVar14;
        }
        puVar5 = *(undefined **)(stdout + 0x28);
        if (*(undefined **)(stdout + 0x30) <= puVar5) break;
        *(undefined **)(stdout + 0x28) = puVar5 + 1;
        *puVar5 = 10;
        uStack64 = uStack64 + 1;
        if (uVar12 == uStack64) {
          return;
        }
      }
      uVar12 = 10;
      goto code_r0x00103490;
    }
    break;
  case 3:
    if (line_length != 0) {
      uVar12 = calculate_columns(0);
      lVar2 = column_info + -0x18 + uVar12 * 0x18;
      uVar3 = *sorted_file;
      lVar7 = length_of_file_name_and_frills(uVar3);
      lVar16 = **(long **)(lVar2 + 0x10);
      print_file_name_and_frills(uVar3,0);
      if (1 < cwd_n_used) {
        uVar11 = 1;
        lVar15 = 0;
        do {
          uVar6 = uVar11 % uVar12;
          if (uVar6 == 0) {
            puVar5 = *(undefined **)(stdout + 0x28);
            if (*(undefined **)(stdout + 0x30) <= puVar5) {
              uVar12 = 10;
              goto code_r0x00103490;
            }
            lVar14 = 0;
            *(undefined **)(stdout + 0x28) = puVar5 + 1;
            *puVar5 = 10;
          }
          else {
            lVar14 = lVar16 + lVar15;
            indent(lVar7 + lVar15,lVar14,uVar6,lVar7);
          }
          uVar3 = sorted_file[uVar11];
          uVar11 = uVar11 + 1;
          print_file_name_and_frills(uVar3,lVar14);
          lVar7 = length_of_file_name_and_frills(uVar3);
          lVar16 = *(long *)(*(long *)(lVar2 + 0x10) + uVar6 * 8);
          lVar15 = lVar14;
        } while (uVar11 < cwd_n_used);
      }
      puVar5 = *(undefined **)(stdout + 0x28);
      if (puVar5 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar5 + 1;
        *puVar5 = 10;
        return;
      }
      uVar12 = 10;
      goto code_r0x00103490;
    }
    break;
  case 4:
    cVar13 = ',';
    goto code_r0x001090d5;
  default:
    return;
  }
  cVar13 = ' ';
code_r0x001090d5:
  if (cwd_n_used != 0) {
    uVar11 = 0;
    uVar12 = 0;
    do {
      uVar3 = sorted_file[uVar11];
      if (line_length == 0) {
        uVar6 = uVar12;
        if (uVar11 != 0) {
          uVar1 = uVar12 + 2;
code_r0x00108ef7:
          uVar6 = uVar1;
          uVar12 = uVar12 + 2;
          uVar9 = 0x20;
          uVar10 = 0x20;
          goto code_r0x00108ea9;
        }
      }
      else {
        uVar6 = length_of_file_name_and_frills(uVar3);
        if (uVar11 == 0) {
          uVar6 = uVar12 + uVar6;
        }
        else {
          uVar1 = uVar6 + uVar12 + 2;
          if ((line_length == 0) || ((uVar1 < line_length && (uVar12 <= -uVar6 - 3))))
          goto code_r0x00108ef7;
          uVar9 = 10;
          uVar10 = 10;
          uVar12 = 0;
code_r0x00108ea9:
          pcVar4 = *(char **)(stdout + 0x28);
          if (pcVar4 < *(char **)(stdout + 0x30)) {
            *(char **)(stdout + 0x28) = pcVar4 + 1;
            *pcVar4 = cVar13;
          }
          else {
            func_0x00103490(stdout,(ulong)(uint)(int)cVar13);
          }
          puVar5 = *(undefined **)(stdout + 0x28);
          if (*(undefined **)(stdout + 0x30) <= puVar5) {
            uVar12 = (ulong)uVar9;
            goto code_r0x00103490;
          }
          *(undefined **)(stdout + 0x28) = puVar5 + 1;
          *puVar5 = uVar10;
        }
      }
      uVar11 = uVar11 + 1;
      print_file_name_and_frills(uVar3,uVar12);
      uVar12 = uVar6;
    } while (uVar11 < cwd_n_used);
  }
  puVar5 = *(undefined **)(stdout + 0x28);
  if (puVar5 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar5 + 1;
    *puVar5 = 10;
    return;
  }
  uVar12 = 10;
code_r0x00103490:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___overflow_0031fdc8)(stdout,uVar12);
  return;
}

