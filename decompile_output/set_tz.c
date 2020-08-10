
long set_tz(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  
  lVar3 = func_0x00103250(&UNK_00117baa);
  if (lVar3 == 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      return 1;
    }
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      iVar2 = func_0x00103590(param_1 + 9,lVar3);
      if (iVar2 == 0) {
        return 1;
      }
    }
  }
  lVar3 = tzalloc(lVar3);
  if (lVar3 != 0) {
    lVar5 = 0;
    if (*(char *)(param_1 + 8) != '\0') {
      lVar5 = param_1 + 9;
    }
    iVar2 = setenv_TZ(lVar5);
    if (iVar2 == 0) {
      func_0x00103610();
    }
    else {
      puVar4 = (undefined4 *)func_0x001032a0();
      uVar1 = *puVar4;
      if (lVar3 != 1) {
        tzfree_part_0(lVar3);
      }
      *puVar4 = uVar1;
      lVar3 = 0;
    }
  }
  return lVar3;
}

