
/* WARNING: Possible PIC construction at 0x0010b8db: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010b8e0) */
/* WARNING: Removing unreachable block (ram,0x0010b8f8) */

undefined8 strcmp_df_extension(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined auVar9 [16];
  
  iVar1 = *(int *)(param_2 + 0x15);
  if ((*(int *)(param_1 + 0x15) == 3) || (*(int *)(param_1 + 0x15) == 9)) {
    if ((iVar1 != 3 && iVar1 != 9) && ((*(uint *)((long)param_2 + 0xac) & 0xf000) != 0x4000)) {
      return 0xffffffff;
    }
  }
  else {
    uVar4 = *(uint *)((long)param_1 + 0xac) & 0xf000;
    if ((iVar1 != 3 && iVar1 != 9) && ((*(uint *)((long)param_2 + 0xac) & 0xf000) != 0x4000)) {
      if (uVar4 == 0x4000) {
        return 0xffffffff;
      }
    }
    else {
      if (uVar4 != 0x4000) {
        return 1;
      }
    }
  }
  puVar8 = (undefined *)*param_1;
  puVar6 = (undefined *)func_0x001034a0(puVar8,0x2e);
  puVar7 = (undefined *)*param_2;
  auVar9 = func_0x001034a0(puVar7,0x2e);
  puVar5 = SUB168(auVar9 >> 0x40,0);
  puVar3 = SUB168(auVar9,0);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = &UNK_001178a1;
    if (puVar6 == (undefined *)0x0) goto code_r0x00103590;
  }
  else {
    puVar5 = &UNK_001178a1;
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &UNK_001178a1;
    }
  }
  puVar7 = puVar3;
  puVar8 = puVar6;
code_r0x00103590:
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR_strcmp_0031fe48)(puVar8,puVar7,puVar5);
  return uVar2;
}

