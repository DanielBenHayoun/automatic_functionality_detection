
ulong excluded_fstype(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong unaff_RBP;
  
  bVar4 = param_1 == 0 || fs_exclude_list == (undefined8 *)0x0;
  puVar3 = fs_exclude_list;
  if (bVar4) {
    return 0;
  }
  do {
    iVar2 = func_0x00102340(param_1,*puVar3);
    if (iVar2 == 0) {
      return 1;
    }
    puVar1 = puVar3 + 1;
    puVar3 = (undefined8 *)*puVar1;
  } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
  return unaff_RBP & 0xffffff00 | (ulong)bVar4;
}

