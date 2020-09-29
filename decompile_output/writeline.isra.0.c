
/* WARNING: Possible PIC construction at 0x00101c5f: Changing call to branch */

void writeline_isra_0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 2) {
    if (only_file_2 == '\0') {
      return;
    }
    if (only_file_1 != '\0') {
code_r0x00101cb2:
      func_0x00101690(col_sep,1,col_sep_len,param_3);
    }
  }
  else {
    if (param_4 == 3) {
      if (both == '\0') {
        return;
      }
      uVar1 = col_sep_len;
      uVar2 = col_sep;
      if (only_file_1 != '\0') goto code_r0x00101690;
      if (only_file_2 != '\0') goto code_r0x00101cb2;
    }
    else {
      if (only_file_1 == '\0') {
        return;
      }
    }
  }
  uVar1 = *param_1;
  uVar2 = *param_2;
code_r0x00101690:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fwrite_unlocked_00308f48)(uVar2,1,uVar1,param_3);
  return;
}

