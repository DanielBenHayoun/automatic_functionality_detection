
/* WARNING: Possible PIC construction at 0x0010ab05: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010ab0a) */

void free_fail_stack_return_part_24(long *param_1)

{
  long lVar1;
  
  if (*param_1 < 1) {
    lVar1 = param_1[2];
  }
  else {
    lVar1 = *(long *)(param_1[2] + 0x28);
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00318dd0)(lVar1);
  return;
}

