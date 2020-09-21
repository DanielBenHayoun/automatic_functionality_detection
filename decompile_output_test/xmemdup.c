
void xmemdup(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = xmalloc(param_2);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcpy_00306f30)(uVar1,param_1,param_2);
  return;
}

