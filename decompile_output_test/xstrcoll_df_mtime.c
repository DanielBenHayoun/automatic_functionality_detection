
ulong xstrcoll_df_mtime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar1 = *(int *)(param_2 + 0x15);
  if ((*(int *)(param_1 + 0x15) == 3) || (*(int *)(param_1 + 0x15) == 9)) {
    if (iVar1 == 3 || iVar1 == 9) goto code_r0x0010b008;
    uVar7 = *(uint *)((long)param_2 + 0xac) & 0xf000;
  }
  else {
    uVar7 = *(uint *)((long)param_1 + 0xac) & 0xf000;
    if ((iVar1 == 3 || iVar1 == 9) || ((*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000)) {
      if (uVar7 != 0x4000) {
        return 1;
      }
      goto code_r0x0010b008;
    }
  }
  if (uVar7 != 0x4000) {
    return 0xffffffff;
  }
code_r0x0010b008:
  lVar2 = param_2[0xe];
  lVar3 = param_1[0xe];
  if (param_1[0xe] != lVar2 && lVar2 <= lVar3) {
    return 0xffffffff;
  }
  if (lVar2 <= lVar3) {
    uVar7 = (int)param_2[0xf] - *(int *)(param_1 + 0xf);
    if (uVar7 == 0) {
      uVar5 = *param_2;
      uVar4 = *param_1;
      puVar6 = (undefined4 *)func_0x001032a0(uVar4,uVar5);
      *puVar6 = 0;
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)PTR_strcoll_0031fed0)(uVar4,uVar5);
      return uVar5;
    }
    return (ulong)uVar7;
  }
  return 1;
}

