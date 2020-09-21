
/* WARNING: Possible PIC construction at 0x001051e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00105205: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x001051e9) */
/* WARNING: Removing unreachable block (ram,0x0010520a) */

void collate_error(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x00101530(0,&UNK_00106ac0,5);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_error_00308f70)(0,(ulong)param_1,uVar1);
  return;
}

