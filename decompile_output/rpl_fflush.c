
void rpl_fflush(uint *param_1)

{
  int iVar1;
  
  if (((param_1 != (uint *)0x0) && (iVar1 = func_0x00101390(), iVar1 != 0)) &&
     ((*param_1 & 0x100) != 0)) {
    rpl_fseeko(param_1,0,1);
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fflush_00306f48)(param_1);
  return;
}

