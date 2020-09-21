
void fchmod_or_lchmod(int param_1,undefined8 param_2,uint param_3)

{
  if (-1 < param_1) {
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fchmod_0031bee8)();
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_chmod_0031bef8)(param_2,(ulong)param_3);
  return;
}

