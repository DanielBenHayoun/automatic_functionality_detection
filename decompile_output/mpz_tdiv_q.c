
/* WARNING: Possible PIC construction at 0x00101fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00101fd1) */

void mpz_tdiv_q(long *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if ((*param_2 == -0x8000000000000000) && (*param_3 == -1)) {
    integer_overflow(0x2f);
    if (*args == 0) {
      uVar1 = quotearg_n_style(0,8,args[-1]);
      uVar2 = func_0x00101790(0,&UNK_00115cd8,5);
      piVar3 = (int *)0x2;
      func_0x001019c0(2,0,uVar2,uVar1);
      if (*piVar3 == 1) {
        piVar3 = *(int **)(piVar3 + 2);
      }
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_free_0031ade8)(piVar3);
      return;
    }
    return;
  }
  *param_1 = *param_2 / *param_3;
  return;
}

