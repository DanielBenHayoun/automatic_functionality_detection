
/* WARNING: Possible PIC construction at 0x00101fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00101fd1) */

void freev(int *param_1)

{
  if (*param_1 == 1) {
    param_1 = *(int **)(param_1 + 2);
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_0031ade8)(param_1);
  return;
}

