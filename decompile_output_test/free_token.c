
/* WARNING: Possible PIC construction at 0x00106b47: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00106b59: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00106b4c) */
/* WARNING: Removing unreachable block (ram,0x00106b5e) */

void free_token(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 1) & 0x400ff) == 6) {
    uVar1 = *(undefined8 *)*param_1;
  }
  else {
    if ((*(uint *)(param_1 + 1) & 0x400ff) != 3) {
      return;
    }
    uVar1 = *param_1;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00318dd0)(uVar1);
  return;
}

