
undefined8 rev_strcmp_df_size(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_2 + 0x15);
  if ((*(int *)(param_1 + 0x15) == 3) || (*(int *)(param_1 + 0x15) == 9)) {
    if ((iVar1 != 3 && iVar1 != 9) && ((*(uint *)((long)param_2 + 0xac) & 0xf000) != 0x4000)) {
      return 0xffffffff;
    }
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0xac) & 0xf000;
    if ((iVar1 != 3 && iVar1 != 9) && ((*(uint *)((long)param_2 + 0xac) & 0xf000) != 0x4000)) {
      if (uVar5 == 0x4000) {
        return 0xffffffff;
      }
    }
    else {
      if (uVar5 != 0x4000) {
        return 1;
      }
    }
  }
  lVar2 = param_1[9];
  lVar3 = param_2[9];
  if (param_2[9] != lVar2 && lVar2 <= lVar3) {
    return 0xffffffff;
  }
  if (lVar3 < lVar2) {
    return 1;
  }
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)PTR_strcmp_0031fe48)(*param_2,*param_1);
  return uVar4;
}

