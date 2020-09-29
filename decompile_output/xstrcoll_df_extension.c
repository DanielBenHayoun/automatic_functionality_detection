
undefined8 xstrcoll_df_extension(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  
  iVar1 = *(int *)(param_2 + 0x15);
  if ((*(int *)(param_1 + 0x15) == 3) || (*(int *)(param_1 + 0x15) == 9)) {
    if ((iVar1 != 3 && iVar1 != 9) && ((*(uint *)((long)param_2 + 0xac) & 0xf000) != 0x4000)) {
      return 0xffffffff;
    }
  }
  else {
    uVar6 = *(uint *)((long)param_1 + 0xac) & 0xf000;
    if ((iVar1 != 3 && iVar1 != 9) && ((*(uint *)((long)param_2 + 0xac) & 0xf000) != 0x4000)) {
      if (uVar6 == 0x4000) {
        return 0xffffffff;
      }
    }
    else {
      if (uVar6 != 0x4000) {
        return 1;
      }
    }
  }
  puVar7 = (undefined *)func_0x001034a0(*param_1,0x2e);
  puVar4 = (undefined *)func_0x001034a0(*param_2,0x2e);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &UNK_001178a1;
  }
  if (puVar7 == (undefined *)0x0) {
    puVar7 = &UNK_001178a1;
  }
  uVar5 = xstrcoll(puVar7,puVar4,&UNK_001178a1);
  if ((int)uVar5 == 0) {
    uVar5 = *param_2;
    uVar2 = *param_1;
    puVar3 = (undefined4 *)func_0x001032a0(uVar2,uVar5);
    *puVar3 = 0;
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)PTR_strcoll_0031fed0)(uVar2,uVar5);
    return uVar5;
  }
  return uVar5;
}

