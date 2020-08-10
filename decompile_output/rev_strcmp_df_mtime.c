
ulong rev_strcmp_df_mtime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_2 + 0x15);
  if ((*(int *)(param_1 + 0x15) == 3) || (*(int *)(param_1 + 0x15) == 9)) {
    if (iVar1 == 3 || iVar1 == 9) goto code_r0x0010b728;
    uVar5 = *(uint *)((long)param_2 + 0xac) & 0xf000;
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0xac) & 0xf000;
    if ((iVar1 == 3 || iVar1 == 9) || ((*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000)) {
      if (uVar5 != 0x4000) {
        return 1;
      }
      goto code_r0x0010b728;
    }
  }
  if (uVar5 != 0x4000) {
    return 0xffffffff;
  }
code_r0x0010b728:
  lVar2 = param_1[0xe];
  lVar3 = param_2[0xe];
  if (param_2[0xe] != lVar2 && lVar2 <= lVar3) {
    return 0xffffffff;
  }
  if (lVar2 <= lVar3) {
    uVar5 = (int)param_1[0xf] - *(int *)(param_2 + 0xf);
    if (uVar5 == 0) {
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)PTR_strcmp_0031fe48)(*param_2,*param_1);
      return uVar4;
    }
    return (ulong)uVar5;
  }
  return 1;
}

