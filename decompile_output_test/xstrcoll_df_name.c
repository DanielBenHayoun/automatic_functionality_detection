
undefined8 xstrcoll_df_name(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
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
  uVar3 = *param_2;
  uVar2 = *param_1;
  puVar4 = (undefined4 *)func_0x001032a0(uVar2,uVar3);
  *puVar4 = 0;
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)PTR_strcoll_0031fed0)(uVar2,uVar3);
  return uVar3;
}

