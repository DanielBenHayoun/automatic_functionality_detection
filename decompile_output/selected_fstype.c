
ulong selected_fstype(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong unaff_R12;
  bool bVar4;
  
  bVar4 = fs_select_list == (undefined8 *)0x0;
  puVar3 = fs_select_list;
  if (param_1 != 0 && !bVar4) {
    do {
      iVar2 = func_0x00102340(param_1,*puVar3);
      if (iVar2 == 0) {
        return 1;
      }
      puVar1 = puVar3 + 1;
      puVar3 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
  }
  return unaff_R12 & 0xffffff00 | (ulong)(param_1 == 0 || bVar4);
}

