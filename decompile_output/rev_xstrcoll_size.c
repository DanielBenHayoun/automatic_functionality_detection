
undefined8 rev_xstrcoll_size(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  lVar1 = param_1[9];
  lVar2 = param_2[9];
  if (param_2[9] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    return 1;
  }
  uVar4 = *param_1;
  uVar3 = *param_2;
  puVar5 = (undefined4 *)func_0x001032a0(uVar3,uVar4);
  *puVar5 = 0;
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)PTR_strcoll_0031fed0)(uVar3,uVar4);
  return uVar4;
}

