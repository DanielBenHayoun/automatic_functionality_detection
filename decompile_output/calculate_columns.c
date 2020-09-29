
ulong calculate_columns(char param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_RBP;
  ulong uVar17;
  bool bVar18;
  
  uVar16 = max_idx;
  if (cwd_n_used <= max_idx) {
    uVar16 = cwd_n_used;
  }
  uVar11 = column_info_alloc_11173;
  if (column_info_alloc_11173 < uVar16) {
    if (uVar16 < max_idx >> 1) {
      bVar18 = SUB168(ZEXT816(0x30) * ZEXT816(uVar16) >> 0x40,0) != 0;
      uVar11 = (ulong)bVar18;
      if (bVar18) goto code_r0x00108dd1;
      unaff_RBP = uVar16 * 2;
      column_info = (char *)xrealloc(column_info,uVar16 * 0x30);
    }
    else {
      uVar11 = max_idx;
      if (SUB168(ZEXT816(0x18) * ZEXT816(max_idx) >> 0x40,0) != 0) goto code_r0x00108dd1;
      column_info = (char *)xrealloc(column_info,max_idx * 0x18);
      unaff_RBP = max_idx;
    }
    uVar6 = column_info_alloc_11173 + 1 + unaff_RBP;
    uVar11 = (unaff_RBP - column_info_alloc_11173) * uVar6;
    if (CARRY8(column_info_alloc_11173 + 1,unaff_RBP) != false) goto code_r0x00108dd1;
    if (uVar6 != uVar11 / (unaff_RBP - column_info_alloc_11173)) goto code_r0x00108dd1;
    uVar11 = uVar11 >> 1;
    bVar18 = false;
    lVar7 = 0;
    while ((lVar7 < 0 || (bVar18))) {
code_r0x00108dd1:
      lVar7 = xalloc_die();
      bVar18 = true;
    }
    lVar7 = xmalloc(uVar11 * 8);
    uVar11 = unaff_RBP;
    if (column_info_alloc_11173 < unaff_RBP) {
      lVar14 = column_info_alloc_11173 * 8 + 8;
      plVar12 = (long *)(column_info + column_info_alloc_11173 * 0x18 + 0x10);
      do {
        *plVar12 = lVar7;
        lVar7 = lVar7 + lVar14;
        lVar14 = lVar14 + 8;
        plVar12 = plVar12 + 3;
        uVar11 = unaff_RBP;
      } while (unaff_RBP * 8 + 8 != lVar14);
    }
  }
  column_info_alloc_11173 = uVar11;
  uVar11 = cwd_n_used;
  pcVar13 = column_info;
  if (uVar16 != 0) {
    lVar14 = 0;
    lVar7 = 3;
    do {
      puVar8 = *(undefined8 **)(pcVar13 + lVar7 * 8 + -8);
      lVar14 = lVar14 + 8;
      pcVar13[lVar7 * 8 + -0x18] = '\x01';
      *(long *)(pcVar13 + lVar7 * 8 + -0x10) = lVar7;
      puVar2 = (undefined8 *)((long)puVar8 + lVar14);
      do {
        *puVar8 = 3;
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
      lVar7 = lVar7 + 3;
    } while (uVar16 * 3 + 3 != lVar7);
  }
  if (uVar11 != 0) {
    uVar11 = 0;
    do {
      uVar9 = length_of_file_name_and_frills(*(undefined8 *)(sorted_file + uVar11 * 8));
      uVar5 = cwd_n_used;
      uVar6 = line_length;
      if (uVar16 != 0) {
        lVar7 = cwd_n_used - 1;
        pcVar13 = column_info;
        uVar17 = 0;
        do {
          uVar1 = uVar17 + 1;
          if (*pcVar13 != '\0') {
            if (param_1 == '\0') {
              uVar15 = uVar11 % uVar1;
            }
            else {
              uVar15 = SUB168(ZEXT816(uVar11) /
                              (ZEXT816(lVar7 + uVar1) / ZEXT816(uVar1) &
                              (undefined  [16])0xffffffffffffffff),0);
            }
            uVar10 = uVar9;
            if (uVar15 != uVar17) {
              uVar10 = uVar9 + 2;
            }
            puVar3 = (ulong *)(*(long *)(pcVar13 + 0x10) + uVar15 * 8);
            uVar17 = *puVar3;
            if (uVar17 < uVar10) {
              *(ulong *)(pcVar13 + 8) = (*(long *)(pcVar13 + 8) - uVar17) + uVar10;
              *puVar3 = uVar10;
              *(bool *)pcVar13 = *(ulong *)(pcVar13 + 8) < uVar6;
            }
          }
          pcVar13 = pcVar13 + 0x18;
          uVar17 = uVar1;
        } while (uVar16 != uVar1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
  if ((1 < uVar16) && (column_info[uVar16 * 0x18 + -0x18] == '\0')) {
    pcVar13 = column_info + uVar16 * 0x18 + -0x30;
    do {
      uVar16 = uVar16 - 1;
      if (uVar16 == 1) {
        return 1;
      }
      cVar4 = *pcVar13;
      pcVar13 = pcVar13 + -0x18;
    } while (cVar4 == '\0');
  }
  return uVar16;
}

