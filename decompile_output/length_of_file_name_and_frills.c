
undefined8 * length_of_file_name_and_frills(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  byte bVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined auStack696 [664];
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  if (print_inode == '\0') {
    lVar16 = 0;
code_r0x00108a0a:
    if (print_block_size != '\0') {
      if (format != 4) goto code_r0x00108981;
      lVar6 = 2;
      if (*(char *)(param_1 + 0x17) != '\0') {
        uVar7 = human_readable(param_1[0xb],auStack696,(ulong)human_output_opts,0x200,
                               output_block_size);
        lVar6 = func_0x00103400(uVar7);
        lVar6 = lVar6 + 1;
      }
code_r0x0010898c:
      lVar16 = lVar16 + lVar6;
    }
    if (print_scontext == '\0') goto code_r0x0010899c;
    if (format != 4) goto code_r0x00108a71;
    lVar6 = func_0x00103400(param_1[0x16]);
  }
  else {
    if (format == 4) {
      uVar7 = umaxtostr(param_1[4],auStack696);
      lVar16 = func_0x00103400(uVar7);
      lVar16 = lVar16 + 1;
      goto code_r0x00108a0a;
    }
    lVar16 = (long)inode_number_width + 1;
    if (print_block_size != '\0') {
code_r0x00108981:
      lVar6 = (long)block_size_width + 1;
      goto code_r0x0010898c;
    }
    if (print_scontext == '\0') goto code_r0x0010899c;
code_r0x00108a71:
    lVar6 = (long)scontext_width;
  }
  lVar16 = lVar16 + lVar6 + 1;
code_r0x0010899c:
  bVar18 = (byte)*param_1;
  lVar6 = quote_name_width(*param_1,filename_quoting_options,(ulong)*(uint *)((long)param_1 + 0xc4))
  ;
  lVar16 = lVar16 + lVar6;
  if (indicator_style != 0) {
    bVar18 = *(byte *)(param_1 + 0x17);
    cVar5 = get_type_indicator((ulong)bVar18,(ulong)*(uint *)(param_1 + 6),
                               (ulong)*(uint *)(param_1 + 0x15));
    lVar16 = lVar16 + (ulong)(cVar5 != '\0');
  }
  if (lStack32 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00103420();
    puVar17 = max_idx;
    if (cwd_n_used <= max_idx) {
      puVar17 = cwd_n_used;
    }
    puVar15 = column_info_alloc_11173;
    if (column_info_alloc_11173 < puVar17) {
      if (puVar17 < (undefined8 *)((ulong)max_idx >> 1)) {
        bVar19 = SUB168(ZEXT816(0x30) * ZEXT816(puVar17) >> 0x40,0) != 0;
        puVar15 = (undefined8 *)(ulong)bVar19;
        if (bVar19) goto code_r0x00108dd1;
        param_1 = (undefined8 *)((long)puVar17 * 2);
        column_info = (char *)xrealloc(column_info,(long)puVar17 * 0x30);
      }
      else {
        puVar15 = max_idx;
        if (SUB168(ZEXT816(0x18) * ZEXT816(max_idx) >> 0x40,0) != 0) goto code_r0x00108dd1;
        column_info = (char *)xrealloc(column_info,(long)max_idx * 0x18);
        param_1 = max_idx;
      }
      uVar8 = (long)column_info_alloc_11173 + 1U + (long)param_1;
      puVar15 = (undefined8 *)
                ((long)(undefined8 *)((long)param_1 - (long)column_info_alloc_11173) * uVar8);
      if (CARRY8((long)column_info_alloc_11173 + 1U,(ulong)param_1) != false) goto code_r0x00108dd1;
      if (uVar8 != (ulong)puVar15 /
                   (ulong)(undefined8 *)((long)param_1 - (long)column_info_alloc_11173))
      goto code_r0x00108dd1;
      puVar15 = (undefined8 *)((ulong)puVar15 >> 1);
      bVar19 = false;
      lVar16 = 0;
      while ((lVar16 < 0 || (bVar19))) {
code_r0x00108dd1:
        lVar16 = xalloc_die();
        bVar19 = true;
      }
      lVar16 = xmalloc((long)puVar15 * 8);
      puVar15 = param_1;
      if (column_info_alloc_11173 < param_1) {
        lVar6 = (long)column_info_alloc_11173 * 8 + 8;
        plVar13 = (long *)(column_info + (long)column_info_alloc_11173 * 0x18 + 0x10);
        do {
          *plVar13 = lVar16;
          lVar16 = lVar16 + lVar6;
          lVar6 = lVar6 + 8;
          plVar13 = plVar13 + 3;
          puVar15 = param_1;
        } while ((long)param_1 * 8 + 8 != lVar6);
      }
    }
    column_info_alloc_11173 = puVar15;
    puVar15 = cwd_n_used;
    pcVar14 = column_info;
    if (puVar17 != (undefined8 *)0x0) {
      lVar6 = 0;
      lVar16 = 3;
      do {
        puVar9 = *(undefined8 **)(pcVar14 + lVar16 * 8 + -8);
        lVar6 = lVar6 + 8;
        pcVar14[lVar16 * 8 + -0x18] = '\x01';
        *(long *)(pcVar14 + lVar16 * 8 + -0x10) = lVar16;
        puVar4 = (undefined8 *)((long)puVar9 + lVar6);
        do {
          *puVar9 = 3;
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        lVar16 = lVar16 + 3;
      } while ((long)puVar17 * 3 + 3 != lVar16);
    }
    if (puVar15 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
      do {
        uVar10 = length_of_file_name_and_frills(*(undefined8 *)(sorted_file + (long)puVar15 * 8));
        puVar4 = cwd_n_used;
        uVar8 = line_length;
        if (puVar17 != (undefined8 *)0x0) {
          lVar16 = (long)cwd_n_used + -1;
          pcVar14 = column_info;
          puVar9 = (undefined8 *)0x0;
          do {
            puVar1 = (undefined8 *)((long)puVar9 + 1);
            if (*pcVar14 != '\0') {
              if (bVar18 == 0) {
                puVar11 = (undefined8 *)((ulong)puVar15 % (ulong)puVar1);
              }
              else {
                puVar11 = SUB168(ZEXT816(puVar15) /
                                 (ZEXT816((ulong)(lVar16 + (long)puVar1)) / ZEXT816(puVar1) &
                                 (undefined  [16])0xffffffffffffffff),0);
              }
              uVar12 = uVar10;
              if (puVar11 != puVar9) {
                uVar12 = uVar10 + 2;
              }
              puVar2 = (ulong *)(*(long *)(pcVar14 + 0x10) + (long)puVar11 * 8);
              uVar3 = *puVar2;
              if (uVar3 < uVar12) {
                *(ulong *)(pcVar14 + 8) = (*(long *)(pcVar14 + 8) - uVar3) + uVar12;
                *puVar2 = uVar12;
                *(bool *)pcVar14 = *(ulong *)(pcVar14 + 8) < uVar8;
              }
            }
            pcVar14 = pcVar14 + 0x18;
            puVar9 = puVar1;
          } while (puVar17 != puVar1);
        }
        puVar15 = (undefined8 *)((long)puVar15 + 1);
      } while (puVar15 < puVar4);
    }
    if (((undefined8 *)0x1 < puVar17) && (column_info[(long)puVar17 * 0x18 + -0x18] == '\0')) {
      pcVar14 = column_info + (long)puVar17 * 0x18 + -0x30;
      do {
        puVar17 = (undefined8 *)((long)puVar17 + -1);
        if (puVar17 == (undefined8 *)0x1) {
          return (undefined8 *)1;
        }
        cVar5 = *pcVar14;
        pcVar14 = pcVar14 + -0x18;
      } while (cVar5 == '\0');
    }
    return puVar17;
  }
  return (undefined8 *)lVar16;
}

