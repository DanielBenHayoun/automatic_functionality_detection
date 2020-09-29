
/* WARNING: Possible PIC construction at 0x00104ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00104ea5) */

void di_set_free(undefined8 *param_1)

{
  hash_free(*param_1);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00327fc8)(param_1[1]);
  return;
}

