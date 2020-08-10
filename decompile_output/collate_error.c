
/* WARNING: Possible PIC construction at 0x00105d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00105d35: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00105d19) */
/* WARNING: Removing unreachable block (ram,0x00105d3a) */

void collate_error(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x00101800(0,&UNK_00107ac0,5);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_error_00309f80)(0,(ulong)param_1,uVar1);
  return;
}

