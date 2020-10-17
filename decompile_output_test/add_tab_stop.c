
void add_tab_stop(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  uVar2 = first_free_tab;
  uVar3 = param_1;
  uVar4 = n_tabs_allocated;
  lVar1 = tab_list;
  if (first_free_tab == 0) goto code_r0x0010228b;
  param_4 = *(ulong *)(tab_list + -8 + first_free_tab * 8);
  if (param_4 <= param_1) goto code_r0x00102332;
  if (first_free_tab != n_tabs_allocated) {
    *(ulong *)(tab_list + first_free_tab * 8) = param_1;
    first_free_tab = first_free_tab + 1;
    return;
  }
  uVar3 = 0;
  do {
    if (lVar1 == 0) {
      if (uVar4 == 0) {
        uVar4 = 0x10;
      }
      bVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar4) >> 0x40,0) != 0;
      param_4 = (ulong)bVar5;
      if (!bVar5) goto code_r0x001022e1;
    }
    else {
      if (uVar4 < 0xaaaaaaaaaaaaaaa) {
        uVar4 = uVar4 + 1 + (uVar4 >> 1);
code_r0x001022e1:
        n_tabs_allocated = uVar4;
        lVar1 = xrealloc();
        uVar2 = first_free_tab;
        tab_list = lVar1;
        break;
      }
    }
    uVar2 = xalloc_die();
code_r0x00102332:
    uVar3 = param_1 - param_4;
code_r0x0010228b:
  } while (uVar2 == uVar4);
  *(ulong *)(lVar1 + uVar2 * 8) = param_1;
  if (max_column_width < uVar3) {
    max_column_width = uVar3;
  }
  first_free_tab = uVar2 + 1;
  return;
}

