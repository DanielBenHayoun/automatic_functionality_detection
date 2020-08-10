
/* WARNING: Possible PIC construction at 0x00109d40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00109d45) */

void ino_map_free(undefined8 *param_1)

{
  hash_free(*param_1);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00327fc8)(param_1[2]);
  return;
}

