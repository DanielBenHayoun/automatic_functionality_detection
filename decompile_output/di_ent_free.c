
void di_ent_free(long param_1)

{
  hash_free(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00327fc8)(param_1);
  return;
}

