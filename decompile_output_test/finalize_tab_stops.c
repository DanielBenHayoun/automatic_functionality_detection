
ulong finalize_tab_stops(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *extraout_RDX;
  ulong *puVar7;
  bool bVar8;
  
  if (first_free_tab == 0) {
    if (increment_size == 0) {
      tab_size = extend_size;
      if (extend_size == 0) {
        tab_size = 8;
      }
      max_column_width = tab_size;
      return tab_size;
    }
    if (extend_size == 0) {
      tab_size = increment_size;
      max_column_width = increment_size;
      return increment_size;
    }
  }
  else {
    uVar1 = *tab_list;
    if (uVar1 == 0) {
code_r0x00102780:
      uVar6 = func_0x00101520(0,&UNK_00105d49,5);
      func_0x001016d0(1,0,uVar6);
    }
    else {
      uVar4 = 0;
      uVar5 = uVar1;
      do {
        uVar4 = uVar4 + 1;
        if (first_free_tab == uVar4) {
          if ((increment_size == 0) || (extend_size == 0)) {
            uVar5 = increment_size;
            if ((first_free_tab != 1) ||
               (uVar5 = increment_size | extend_size, tab_size = uVar1, uVar5 != 0)) {
              tab_size = 0;
            }
            return uVar5;
          }
          goto code_r0x001027c8;
        }
        uVar2 = tab_list[uVar4];
        if (uVar2 == 0) goto code_r0x00102780;
        bVar8 = uVar5 < uVar2;
        uVar5 = uVar2;
      } while (bVar8);
    }
    uVar6 = func_0x00101520(0,&UNK_00105d5e,5);
    func_0x001016d0(1,0,uVar6);
  }
code_r0x001027c8:
  uVar6 = func_0x00101520(0,&UNK_00105b48,5);
  puVar7 = (ulong *)0x0;
  uVar4 = 1;
  func_0x001016d0(1,0,uVar6);
  uVar5 = tab_size;
  *extraout_RDX = 0;
  puVar3 = tab_list;
  uVar1 = first_free_tab;
  if (uVar5 == 0) {
    uVar5 = *puVar7;
    if (uVar5 < first_free_tab) {
      uVar2 = tab_list[uVar5];
      while( true ) {
        if (uVar4 < uVar2) {
          return uVar2;
        }
        uVar5 = uVar5 + 1;
        *puVar7 = uVar5;
        if (uVar1 == uVar5) break;
        uVar2 = puVar3[uVar5];
      }
    }
    uVar5 = extend_size;
    if (extend_size == 0) {
      if (increment_size == 0) {
        *extraout_RDX = 1;
        return 0;
      }
      return (increment_size + uVar4) - (uVar4 - tab_list[uVar1 - 1]) % increment_size;
    }
  }
  return (uVar5 + uVar4) - uVar4 % uVar5;
}

