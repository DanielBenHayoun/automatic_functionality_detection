
undefined8 rev_strcmp_size(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[9];
  lVar2 = param_2[9];
  if (param_2[9] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar1 <= lVar2) {
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)PTR_strcmp_0031fe48)(*param_2,*param_1);
    return uVar3;
  }
  return 1;
}

