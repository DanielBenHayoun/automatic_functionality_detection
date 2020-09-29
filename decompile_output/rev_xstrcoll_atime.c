
ulong rev_xstrcoll_atime(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  
  lVar1 = param_1[0xc];
  lVar2 = param_2[0xc];
  if (param_2[0xc] != lVar1 && lVar1 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar1) {
    uVar7 = 1;
  }
  else {
    uVar4 = (int)param_1[0xd] - *(int *)(param_2 + 0xd);
    uVar7 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar5 = *param_1;
      uVar3 = *param_2;
      puVar6 = (undefined4 *)func_0x001032a0(uVar3,uVar5);
      *puVar6 = 0;
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)PTR_strcoll_0031fed0)(uVar3,uVar5);
      return uVar5;
    }
  }
  return uVar7;
}

