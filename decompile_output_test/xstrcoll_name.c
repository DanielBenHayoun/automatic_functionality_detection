
void xstrcoll_name(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  puVar3 = (undefined4 *)func_0x001032a0(uVar2,uVar1);
  *puVar3 = 0;
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcoll_0031fed0)(uVar2,uVar1);
  return;
}

