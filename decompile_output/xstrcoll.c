
void xstrcoll(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x001032a0();
  *puVar1 = 0;
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcoll_0031fed0)(param_1,param_2);
  return;
}

