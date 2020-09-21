
/* WARNING: Possible PIC construction at 0x00108f52: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00108f57) */

void print_with_separator(char param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (cwd_n_used != 0) {
    uVar8 = 0;
    uVar9 = 0;
    do {
      uVar2 = *(undefined8 *)(sorted_file + uVar8 * 8);
      if (line_length == 0) {
        uVar5 = uVar9;
        if (uVar8 != 0) {
          uVar1 = uVar9 + 2;
code_r0x00108ef7:
          uVar5 = uVar1;
          uVar9 = uVar9 + 2;
          uVar6 = 0x20;
          uVar7 = 0x20;
          goto code_r0x00108ea9;
        }
      }
      else {
        uVar5 = length_of_file_name_and_frills(uVar2);
        if (uVar8 == 0) {
          uVar5 = uVar9 + uVar5;
        }
        else {
          uVar1 = uVar5 + uVar9 + 2;
          if ((line_length == 0) || ((uVar1 < line_length && (uVar9 <= -uVar5 - 3))))
          goto code_r0x00108ef7;
          uVar6 = 10;
          uVar7 = 10;
          uVar9 = 0;
code_r0x00108ea9:
          pcVar3 = *(char **)(stdout + 0x28);
          if (pcVar3 < *(char **)(stdout + 0x30)) {
            *(char **)(stdout + 0x28) = pcVar3 + 1;
            *pcVar3 = param_1;
          }
          else {
            func_0x00103490(stdout,(ulong)(uint)(int)param_1);
          }
          puVar4 = *(undefined **)(stdout + 0x28);
          if (*(undefined **)(stdout + 0x30) <= puVar4) {
            uVar9 = (ulong)uVar6;
            goto code_r0x00103490;
          }
          *(undefined **)(stdout + 0x28) = puVar4 + 1;
          *puVar4 = uVar7;
        }
      }
      uVar8 = uVar8 + 1;
      print_file_name_and_frills(uVar2,uVar9);
      uVar9 = uVar5;
    } while (uVar8 < cwd_n_used);
  }
  puVar4 = *(undefined **)(stdout + 0x28);
  if (puVar4 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar4 + 1;
    *puVar4 = 10;
    return;
  }
  uVar9 = 10;
code_r0x00103490:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___overflow_0031fdc8)(stdout,uVar9);
  return;
}

