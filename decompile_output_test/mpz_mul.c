
/* WARNING: Possible PIC construction at 0x00101fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00101fd1) */

void mpz_mul(long *param_1,long *param_2,long **param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *extraout_RDX;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  
  lVar1 = *param_2;
  plVar4 = *param_3;
  lVar7 = lVar1 * (long)plVar4;
  if (((lVar1 != 0) && (plVar4 != (long *)0x0)) &&
     (((byte)(((byte)((ulong)lVar1 >> 0x38) ^ (byte)((ulong)plVar4 >> 0x38)) >> 7) !=
       (byte)-(char)(lVar7 >> 0x3f) || ((long *)(lVar7 / lVar1) != plVar4)))) {
    plVar5 = (long *)0x2a;
    integer_overflow();
    if ((*plVar4 == -0x8000000000000000) && (*extraout_RDX == -1)) {
      integer_overflow(0x2f);
      if (*args == 0) {
        uVar2 = quotearg_n_style(0,8,args[-1]);
        uVar3 = func_0x00101790(0,&UNK_00115cd8,5);
        piVar6 = (int *)0x2;
        func_0x001019c0(2,0,uVar3,uVar2);
        if (*piVar6 == 1) {
          piVar6 = *(int **)(piVar6 + 2);
        }
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR_free_0031ade8)(piVar6);
        return;
      }
      return;
    }
    *plVar5 = *plVar4 / *extraout_RDX;
    return;
  }
  *param_1 = lVar7;
  return;
}

