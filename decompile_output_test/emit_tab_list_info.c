
/* WARNING: Possible PIC construction at 0x00102b41: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00102b46) */

void emit_tab_list_info(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = stdout;
  uVar2 = func_0x00101520(0,&UNK_00105b78,5);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fputs_unlocked_00307f10)(uVar2,uVar1);
  return;
}

