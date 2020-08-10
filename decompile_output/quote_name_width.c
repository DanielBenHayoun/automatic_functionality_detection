
undefined8 * quote_name_width(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined auStack8960 [664];
  long lStack8296;
  undefined8 *puStack8280;
  undefined8 *puStack8272;
  byte bStack8249;
  undefined8 *puStack8248;
  long lStack8240;
  undefined8 auStack8232 [1025];
  long lStack32;
  
  puStack8280 = auStack8232;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  puStack8272 = (undefined8 *)&UNK_001088e5;
  puStack8248 = puStack8280;
  quote_name_buf_constprop_54
            (&puStack8248,param_1,param_2,param_3 & 0xffffffff,&lStack8240,&bStack8249);
  puVar17 = puStack8248;
  if ((puStack8248 != puStack8280) && (puStack8248 != param_1)) {
    puStack8272 = (undefined8 *)&UNK_001088f9;
    func_0x00103880();
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *)((ulong)bStack8249 + lStack8240);
  }
  puStack8272 = (undefined8 *)&UNK_00108925;
  func_0x00103420();
  lStack8296 = *(long *)(in_FS_OFFSET + 0x28);
  puStack8272 = param_1;
  if (print_inode == '\0') {
    lVar15 = 0;
code_r0x00108a0a:
    if (print_block_size != '\0') {
      if (format != 4) goto code_r0x00108981;
      lVar5 = 2;
      if (*(char *)(puVar17 + 0x17) != '\0') {
        uVar6 = human_readable(puVar17[0xb],auStack8960,(ulong)human_output_opts,0x200,
                               output_block_size);
        lVar5 = func_0x00103400(uVar6);
        lVar5 = lVar5 + 1;
      }
code_r0x0010898c:
      lVar15 = lVar15 + lVar5;
    }
    if (print_scontext == '\0') goto code_r0x0010899c;
    if (format != 4) goto code_r0x00108a71;
    lVar5 = func_0x00103400(puVar17[0x16]);
  }
  else {
    if (format == 4) {
      uVar6 = umaxtostr(puVar17[4],auStack8960);
      lVar15 = func_0x00103400(uVar6);
      lVar15 = lVar15 + 1;
      goto code_r0x00108a0a;
    }
    lVar15 = (long)inode_number_width + 1;
    if (print_block_size != '\0') {
code_r0x00108981:
      lVar5 = (long)block_size_width + 1;
      goto code_r0x0010898c;
    }
    if (print_scontext == '\0') goto code_r0x0010899c;
code_r0x00108a71:
    lVar5 = (long)scontext_width;
  }
  lVar15 = lVar15 + lVar5 + 1;
code_r0x0010899c:
  bVar18 = (byte)*puVar17;
  lVar5 = quote_name_width(*puVar17,filename_quoting_options,(ulong)*(uint *)((long)puVar17 + 0xc4))
  ;
  lVar15 = lVar15 + lVar5;
  if (indicator_style != 0) {
    bVar18 = *(byte *)(puVar17 + 0x17);
    cVar4 = get_type_indicator((ulong)bVar18,(ulong)*(uint *)(puVar17 + 6),
                               (ulong)*(uint *)(puVar17 + 0x15));
    lVar15 = lVar15 + (ulong)(cVar4 != '\0');
  }
  if (lStack8296 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00103420();
    puVar16 = max_idx;
    if (cwd_n_used <= max_idx) {
      puVar16 = cwd_n_used;
    }
    puVar14 = column_info_alloc_11173;
    if (column_info_alloc_11173 < puVar16) {
      if (puVar16 < (undefined8 *)((ulong)max_idx >> 1)) {
        bVar19 = SUB168(ZEXT816(0x30) * ZEXT816(puVar16) >> 0x40,0) != 0;
        puVar14 = (undefined8 *)(ulong)bVar19;
        if (bVar19) goto code_r0x00108dd1;
        puVar17 = (undefined8 *)((long)puVar16 * 2);
        column_info = (char *)xrealloc(column_info,(long)puVar16 * 0x30);
      }
      else {
        puVar14 = max_idx;
        if (SUB168(ZEXT816(0x18) * ZEXT816(max_idx) >> 0x40,0) != 0) goto code_r0x00108dd1;
        column_info = (char *)xrealloc(column_info,(long)max_idx * 0x18);
        puVar17 = max_idx;
      }
      uVar7 = (long)column_info_alloc_11173 + 1U + (long)puVar17;
      puVar14 = (undefined8 *)
                ((long)(undefined8 *)((long)puVar17 - (long)column_info_alloc_11173) * uVar7);
      if (CARRY8((long)column_info_alloc_11173 + 1U,(ulong)puVar17) != false) goto code_r0x00108dd1;
      if (uVar7 != (ulong)puVar14 /
                   (ulong)(undefined8 *)((long)puVar17 - (long)column_info_alloc_11173))
      goto code_r0x00108dd1;
      puVar14 = (undefined8 *)((ulong)puVar14 >> 1);
      bVar19 = false;
      lVar15 = 0;
      while ((lVar15 < 0 || (bVar19))) {
code_r0x00108dd1:
        lVar15 = xalloc_die();
        bVar19 = true;
      }
      lVar15 = xmalloc((long)puVar14 * 8);
      puVar14 = puVar17;
      if (column_info_alloc_11173 < puVar17) {
        lVar5 = (long)column_info_alloc_11173 * 8 + 8;
        plVar12 = (long *)(column_info + (long)column_info_alloc_11173 * 0x18 + 0x10);
        do {
          *plVar12 = lVar15;
          lVar15 = lVar15 + lVar5;
          lVar5 = lVar5 + 8;
          plVar12 = plVar12 + 3;
        } while ((long)puVar17 * 8 + 8 != lVar5);
      }
    }
    column_info_alloc_11173 = puVar14;
    puVar17 = cwd_n_used;
    pcVar13 = column_info;
    if (puVar16 != (undefined8 *)0x0) {
      lVar5 = 0;
      lVar15 = 3;
      do {
        puVar8 = *(undefined8 **)(pcVar13 + lVar15 * 8 + -8);
        lVar5 = lVar5 + 8;
        pcVar13[lVar15 * 8 + -0x18] = '\x01';
        *(long *)(pcVar13 + lVar15 * 8 + -0x10) = lVar15;
        puVar14 = (undefined8 *)((long)puVar8 + lVar5);
        do {
          *puVar8 = 3;
          puVar8 = puVar8 + 1;
        } while (puVar14 != puVar8);
        lVar15 = lVar15 + 3;
      } while ((long)puVar16 * 3 + 3 != lVar15);
    }
    if (puVar17 != (undefined8 *)0x0) {
      puVar17 = (undefined8 *)0x0;
      do {
        uVar9 = length_of_file_name_and_frills(*(undefined8 *)(sorted_file + (long)puVar17 * 8));
        puVar14 = cwd_n_used;
        uVar7 = line_length;
        if (puVar16 != (undefined8 *)0x0) {
          lVar15 = (long)cwd_n_used + -1;
          pcVar13 = column_info;
          puVar8 = (undefined8 *)0x0;
          do {
            puVar1 = (undefined8 *)((long)puVar8 + 1);
            if (*pcVar13 != '\0') {
              if (bVar18 == 0) {
                puVar10 = (undefined8 *)((ulong)puVar17 % (ulong)puVar1);
              }
              else {
                puVar10 = SUB168(ZEXT816(puVar17) /
                                 (ZEXT816((ulong)(lVar15 + (long)puVar1)) / ZEXT816(puVar1) &
                                 (undefined  [16])0xffffffffffffffff),0);
              }
              uVar11 = uVar9;
              if (puVar10 != puVar8) {
                uVar11 = uVar9 + 2;
              }
              puVar2 = (ulong *)(*(long *)(pcVar13 + 0x10) + (long)puVar10 * 8);
              uVar3 = *puVar2;
              if (uVar3 < uVar11) {
                *(ulong *)(pcVar13 + 8) = (*(long *)(pcVar13 + 8) - uVar3) + uVar11;
                *puVar2 = uVar11;
                *(bool *)pcVar13 = *(ulong *)(pcVar13 + 8) < uVar7;
              }
            }
            pcVar13 = pcVar13 + 0x18;
            puVar8 = puVar1;
          } while (puVar16 != puVar1);
        }
        puVar17 = (undefined8 *)((long)puVar17 + 1);
      } while (puVar17 < puVar14);
    }
    if (((undefined8 *)0x1 < puVar16) && (column_info[(long)puVar16 * 0x18 + -0x18] == '\0')) {
      pcVar13 = column_info + (long)puVar16 * 0x18 + -0x30;
      do {
        puVar16 = (undefined8 *)((long)puVar16 + -1);
        if (puVar16 == (undefined8 *)0x1) {
          return (undefined8 *)1;
        }
        cVar4 = *pcVar13;
        pcVar13 = pcVar13 + -0x18;
      } while (cVar4 == '\0');
    }
    return puVar16;
  }
  return (undefined8 *)lVar15;
}

