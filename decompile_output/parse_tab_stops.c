
byte * parse_tab_stops(byte *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 in_RAX;
  long *plVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *extraout_RDX;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  char cVar15;
  ulong uVar16;
  byte bVar17;
  bool bVar18;
  byte *pbStack72;
  char cStack64;
  
  bVar17 = *param_1;
  if (bVar17 == 0) {
    return (byte *)in_RAX;
  }
  cStack64 = '\x01';
  pbStack72 = (byte *)0x0;
  uVar8 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar7 = 0;
  do {
    while( true ) {
      pbVar5 = param_1;
      cVar15 = (char)uVar12;
      cVar1 = (char)uVar11;
      uVar16 = uVar7;
      if (bVar17 == 0x2c) break;
      plVar4 = (long *)func_0x00101760();
      param_4 = (ulong)bVar17;
      if ((*(byte *)(*plVar4 + param_4 * 2) & 1) != 0) break;
      if (bVar17 == 0x2f) {
        if (cVar1 == '\0') {
          uVar8 = 0;
          uVar12 = 1;
        }
        else {
          uVar8 = 0;
          param_4 = quote(pbVar5);
          uVar9 = func_0x00101520(0,&UNK_00105ab8,5);
          func_0x001016d0(0,0,uVar9);
          cStack64 = '\0';
          uVar12 = uVar11;
        }
      }
      else {
        if (bVar17 == 0x2b) {
          if (cVar1 == '\0') {
            uVar12 = 0;
            uVar8 = 1;
          }
          else {
            param_4 = quote(pbVar5);
            uVar9 = func_0x00101520(0,&UNK_00105ae8,5);
            func_0x001016d0(0,0,uVar9);
            cStack64 = '\0';
            uVar12 = 0;
            uVar8 = uVar11;
          }
        }
        else {
          uVar2 = (int)(char)bVar17 - 0x30;
          if (9 < uVar2) {
            uVar9 = quote(pbVar5);
            uVar6 = func_0x00101520(0,&UNK_00105b18,5);
            func_0x001016d0(0,0,uVar6,uVar9);
            goto code_r0x0010269f;
          }
          if (cVar1 == '\0') {
            uVar11 = 1;
            uVar16 = (long)(int)uVar2;
            pbStack72 = pbVar5;
          }
          else {
            if ((0x1999999999999999 < uVar7) ||
               (uVar16 = (long)(int)uVar2 + uVar7 * 10, uVar16 < uVar7)) {
              lVar3 = func_0x001015d0(pbStack72,&UNK_00105d25);
              uVar9 = xstrndup(pbStack72,lVar3);
              param_4 = quote(uVar9);
              uVar6 = func_0x00101520(0,&UNK_00105d30,5);
              func_0x001016d0(0,0,uVar6);
              func_0x00101480(uVar9);
              cStack64 = '\0';
              pbVar5 = pbStack72 + lVar3 + -1;
              uVar16 = uVar7;
            }
          }
        }
      }
code_r0x001023e0:
      cVar1 = (char)uVar8;
      cVar15 = (char)uVar12;
      cVar10 = (char)uVar11;
      bVar17 = pbVar5[1];
      param_1 = pbVar5 + 1;
      uVar7 = uVar16;
      if (bVar17 == 0) goto code_r0x00102438;
    }
    if (cVar1 == '\0') goto code_r0x001023e0;
    if (cVar15 != '\0') {
      uVar2 = set_extend_size(uVar7);
      if ((char)uVar2 != '\0') {
        uVar11 = 0;
        uVar12 = (ulong)uVar2;
        goto code_r0x001023e0;
      }
      goto code_r0x0010269f;
    }
    if ((char)uVar8 == '\0') {
      add_tab_stop();
      uVar11 = 0;
      uVar12 = uVar8;
      goto code_r0x001023e0;
    }
    uVar2 = set_increment_size();
    cVar1 = (char)uVar2;
    uVar8 = (ulong)uVar2;
    if (cVar1 == '\0') goto code_r0x0010269f;
    uVar11 = 0;
    cVar10 = '\0';
    bVar17 = pbVar5[1];
    param_1 = pbVar5 + 1;
  } while (bVar17 != 0);
code_r0x00102438:
  if (cVar10 != '\0') {
    if (cStack64 == '\0') goto code_r0x0010269f;
    if (cVar15 == '\0') {
      if (cVar1 == '\0') {
        uVar8 = first_free_tab;
        uVar7 = uVar16;
        uVar12 = n_tabs_allocated;
        puVar14 = tab_list;
        if (first_free_tab == 0) goto code_r0x0010228b;
        param_4 = tab_list[first_free_tab - 1];
        if (param_4 <= uVar16) goto code_r0x00102332;
        if (first_free_tab != n_tabs_allocated) {
          lVar3 = first_free_tab + 1;
          tab_list[first_free_tab] = uVar16;
          first_free_tab = lVar3;
          return (byte *)lVar3;
        }
        uVar7 = 0;
        do {
          if (puVar14 == (ulong *)0x0) {
            if (uVar12 == 0) {
              uVar12 = 0x10;
            }
            bVar18 = SUB168(ZEXT816(8) * ZEXT816(uVar12) >> 0x40,0) != 0;
            param_4 = (ulong)bVar18;
            if (!bVar18) goto code_r0x001022e1;
          }
          else {
            if (uVar12 < 0xaaaaaaaaaaaaaaa) {
              uVar12 = uVar12 + 1 + (uVar12 >> 1);
code_r0x001022e1:
              n_tabs_allocated = uVar12;
              puVar14 = (ulong *)xrealloc();
              uVar8 = first_free_tab;
              tab_list = puVar14;
              break;
            }
          }
          uVar8 = xalloc_die();
code_r0x00102332:
          uVar7 = uVar16 - param_4;
code_r0x0010228b:
        } while (uVar8 == uVar12);
        puVar14[uVar8] = uVar16;
        if (max_column_width < uVar7) {
          max_column_width = uVar7;
        }
        first_free_tab = uVar8 + 1;
        return (byte *)uVar8;
      }
      pbVar5 = (byte *)set_increment_size();
      cStack64 = (char)pbVar5;
    }
    else {
      pbVar5 = (byte *)set_extend_size();
      cStack64 = (char)pbVar5;
    }
  }
  if (cStack64 != '\0') {
    return pbVar5;
  }
code_r0x0010269f:
  func_0x00101710(1);
  if (first_free_tab == 0) {
    if (increment_size == 0) {
      tab_size = extend_size;
      if (extend_size == 0) {
        tab_size = 8;
      }
      max_column_width = tab_size;
      return (byte *)tab_size;
    }
    if (extend_size == 0) {
      tab_size = increment_size;
      max_column_width = increment_size;
      return (byte *)increment_size;
    }
  }
  else {
    uVar12 = *tab_list;
    if (uVar12 == 0) {
code_r0x00102780:
      uVar9 = func_0x00101520(0,&UNK_00105d49,5);
      func_0x001016d0(1,0,uVar9);
    }
    else {
      uVar7 = 0;
      uVar8 = uVar12;
      do {
        uVar7 = uVar7 + 1;
        if (first_free_tab == uVar7) {
          if ((increment_size == 0) || (extend_size == 0)) {
            uVar8 = increment_size;
            if ((first_free_tab != 1) ||
               (uVar8 = increment_size | extend_size, tab_size = uVar12, uVar8 != 0)) {
              tab_size = 0;
            }
            return (byte *)uVar8;
          }
          goto code_r0x001027c8;
        }
        uVar11 = tab_list[uVar7];
        if (uVar11 == 0) goto code_r0x00102780;
        bVar18 = uVar8 < uVar11;
        uVar8 = uVar11;
      } while (bVar18);
    }
    uVar9 = func_0x00101520(0,&UNK_00105d5e,5);
    func_0x001016d0(1,0,uVar9);
  }
code_r0x001027c8:
  uVar9 = func_0x00101520(0,&UNK_00105b48,5);
  puVar13 = (ulong *)0x0;
  uVar7 = 1;
  func_0x001016d0(1,0,uVar9);
  uVar8 = tab_size;
  *extraout_RDX = 0;
  puVar14 = tab_list;
  uVar12 = first_free_tab;
  if (uVar8 == 0) {
    uVar8 = *puVar13;
    if (uVar8 < first_free_tab) {
      uVar11 = tab_list[uVar8];
      while( true ) {
        if (uVar7 < uVar11) {
          return (byte *)uVar11;
        }
        uVar8 = uVar8 + 1;
        *puVar13 = uVar8;
        if (uVar12 == uVar8) break;
        uVar11 = puVar14[uVar8];
      }
    }
    uVar8 = extend_size;
    if (extend_size == 0) {
      if (increment_size == 0) {
        *extraout_RDX = 1;
        return (byte *)0;
      }
      return (byte *)((increment_size + uVar7) - (uVar7 - tab_list[uVar12 - 1]) % increment_size);
    }
  }
  return (byte *)((uVar8 + uVar7) - uVar7 % uVar8);
}

