
ulong rev_strcmp_atime(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = param_1[0xc];
  lVar2 = param_2[0xc];
  if (param_2[0xc] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    uVar5 = 1;
  }
  else {
    uVar3 = (int)param_1[0xd] - *(int *)(param_2 + 0xd);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) {
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)PTR_strcmp_0031fe48)(*param_2,*param_1);
      return uVar4;
    }
  }
  return uVar5;
}

