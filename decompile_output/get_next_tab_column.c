
ulong get_next_tab_column(ulong param_1,ulong *param_2,undefined *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = tab_size;
  *param_3 = 0;
  lVar3 = tab_list;
  uVar2 = first_free_tab;
  if (uVar4 == 0) {
    uVar4 = *param_2;
    if (uVar4 < first_free_tab) {
      uVar1 = *(ulong *)(tab_list + uVar4 * 8);
      if (param_1 < uVar1) {
        return uVar1;
      }
      uVar4 = uVar4 + 1;
      while (*param_2 = uVar4, uVar2 != uVar4) {
        uVar4 = uVar4 + 1;
        uVar1 = *(ulong *)(lVar3 + -8 + uVar4 * 8);
        if (param_1 < uVar1) {
          return uVar1;
        }
      }
    }
    uVar4 = extend_size;
    if (extend_size == 0) {
      if (increment_size == 0) {
        *param_3 = 1;
        return 0;
      }
      return (increment_size + param_1) -
             (param_1 - *(long *)(tab_list + -8 + uVar2 * 8)) % increment_size;
    }
  }
  return (uVar4 + param_1) - param_1 % uVar4;
}

