
void xzalloc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = xmalloc();
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memset_00317e88)(uVar1,0,param_1);
  return;
}

