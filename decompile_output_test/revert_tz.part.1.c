
ulong revert_tz_part_1(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)func_0x00102780();
  uVar4 = *puVar2;
  lVar3 = param_1 + 9;
  if (*(char *)(param_1 + 8) == '\0') {
    lVar3 = 0;
  }
  iVar1 = setenv_TZ(lVar3);
  if (iVar1 == 0) {
    func_0x00102980();
  }
  else {
    uVar4 = *puVar2;
  }
  tzfree_part_0(param_1);
  *puVar2 = uVar4;
  return (ulong)(iVar1 == 0);
}

