
void setenv_TZ(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_setenv_00309e20)(&UNK_00108820,param_1,1);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_unsetenv_00309f90)(&UNK_00108820);
  return;
}

