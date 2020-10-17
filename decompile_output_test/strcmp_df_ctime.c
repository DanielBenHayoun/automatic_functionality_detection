
ulong strcmp_df_ctime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_2 + 0x15);
  if ((*(int *)(param_1 + 0x15) == 3) || (*(int *)(param_1 + 0x15) == 9)) {
    if (iVar1 == 3 || iVar1 == 9) goto code_r0x0010b7d8;
    uVar5 = *(uint *)((long)param_2 + 0xac) & 0xf000;
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0xac) & 0xf000;
    if ((iVar1 == 3 || iVar1 == 9) || ((*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000)) {
      if (uVar5 != 0x4000) {
        return 1;
      }
      goto code_r0x0010b7d8;
    }
  }
  if (uVar5 != 0x4000) {
    return 0xffffffff;
  }
code_r0x0010b7d8:
  lVar2 = param_2[0x10];
  lVar3 = param_1[0x10];
  if (param_1[0x10] != lVar2 && lVar2 <= lVar3) {
    return 0xffffffff;
  }
  if (lVar2 <= lVar3) {
    uVar5 = (int)param_2[0x11] - *(int *)(param_1 + 0x11);
    if (uVar5 == 0) {
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)PTR_strcmp_0031fe48)(*param_1,*param_2);
      return uVar4;
    }
    return (ulong)uVar5;
  }
  return 1;
}

