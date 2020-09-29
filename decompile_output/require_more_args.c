
/* WARNING: Possible PIC construction at 0x00101fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00101fd1) */

void require_more_args(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
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

