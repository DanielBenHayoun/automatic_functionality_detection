
undefined8 localtime_rz(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)PTR_gmtime_r_00317e70)(param_2,param_3);
    return uVar2;
  }
  lVar3 = set_tz();
  if (lVar3 != 0) {
    lVar4 = func_0x001027a0(param_2,param_3);
    if ((lVar4 == 0) || (cVar1 = save_abbr(param_1,param_3), cVar1 == '\0')) {
      if (lVar3 != 1) {
        revert_tz_part_1(lVar3);
      }
    }
    else {
      if ((lVar3 == 1) || (cVar1 = revert_tz_part_1(lVar3), cVar1 != '\0')) {
        return param_3;
      }
    }
  }
  return 0;
}

