
void fadvise(long param_1,ulong param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = func_0x00101880();
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_posix_fadvise_00308ef0)((ulong)uVar1,0,0,param_2 & 0xffffffff);
    return;
  }
  return;
}

