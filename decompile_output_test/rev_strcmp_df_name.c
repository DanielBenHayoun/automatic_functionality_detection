
undefined8 rev_strcmp_df_name(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_2 + 0x15);
  if ((*(int *)(param_1 + 0x15) == 3) || (*(int *)(param_1 + 0x15) == 9)) {
    if ((iVar1 != 3 && iVar1 != 9) && ((*(uint *)((long)param_2 + 0xac) & 0xf000) != 0x4000)) {
      return 0xffffffff;
    }
  }
  else {
    uVar3 = *(uint *)((long)param_1 + 0xac) & 0xf000;
    if ((iVar1 != 3 && iVar1 != 9) && ((*(uint *)((long)param_2 + 0xac) & 0xf000) != 0x4000)) {
      if (uVar3 == 0x4000) {
        return 0xffffffff;
      }
    }
    else {
      if (uVar3 != 0x4000) {
        return 1;
      }
    }
  }
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR_strcmp_0031fe48)(*param_2,*param_1);
  return uVar2;
}

