
/* WARNING: Possible PIC construction at 0x00103b3e: Changing call to branch */

void argv_iter_free(long *param_1)

{
  if (*param_1 != 0) {
    param_1 = (long *)param_1[2];
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00309fb8)(param_1);
  return;
}

