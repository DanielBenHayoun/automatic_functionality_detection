
void setenv_TZ(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_setenv_0031fd40)(&UNK_00117baa,param_1,1);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_unsetenv_0031ff40)(&UNK_00117baa);
  return;
}

