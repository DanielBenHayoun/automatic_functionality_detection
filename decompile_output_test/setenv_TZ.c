
void setenv_TZ(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_setenv_00317e00)(&UNK_0011178e,param_1,1);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_unsetenv_00317f70)(&UNK_0011178e);
  return;
}

