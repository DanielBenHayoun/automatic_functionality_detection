
ulong do_copy(int param_1,ulong *param_2,ulong param_3,char param_4,uint *param_5)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  byte *pbVar17;
  undefined *puVar18;
  uint *puVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long in_FS_OFFSET;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  undefined *puStack280;
  long *plStack272;
  ulong *puStack264;
  ulong uStack256;
  byte bStack234;
  undefined uStack233;
  long lStack232;
  long lStack224;
  undefined auStack216 [24];
  uint uStack192;
  long lStack64;
  
  bVar25 = 0;
  uVar21 = SEXT48(param_1);
  ppuVar14 = &puStack280;
  ppuVar15 = &puStack280;
  uStack256 = param_3;
  bStack234 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  bVar23 = (param_5[5] & 0xffff00) != 0;
  ppuVar16 = &puStack280;
  if (param_1 <= (int)(uint)(param_3 == 0)) goto code_r0x00104c93;
  if (param_4 == '\0') {
    if (param_3 == 0) {
      if (param_1 != 1) {
        cVar3 = target_directory_operand
                          (param_2[(long)param_1 + -1],auStack216,&bStack234,(ulong)bVar23);
        if (cVar3 == '\0') {
          if (param_1 == 2) goto code_r0x00104872;
          param_2 = (ulong *)quotearg_style(4,param_2[(long)param_1 + -1]);
          uVar11 = func_0x001028e0(0,&UNK_00112a1b,5);
          func_0x00102cb0(1,0,uVar11,param_2);
        }
        param_1 = param_1 + -1;
        uStack256 = param_2[param_1];
        if (param_2[param_1] != 0) goto code_r0x00104944;
      }
      goto code_r0x00104872;
    }
code_r0x00104944:
    if (param_1 != 1) {
      dest_info_init(param_5);
      src_info_init(param_5);
    }
    uVar7 = 1;
    puStack264 = param_2 + (ulong)(param_1 - 1) + 1;
    puStack280 = &uStack233;
    plStack272 = &lStack224;
    ppuVar14 = &puStack280;
    do {
      lStack224 = 0;
      uVar1 = *param_2;
      if (remove_trailing_slashes != '\0') {
        *(undefined8 *)((undefined *)ppuVar14 + -8) = 0x104b68;
        strip_trailing_slashes(uVar1);
      }
      if (parents_option == '\0') {
        *(undefined8 *)((undefined *)ppuVar14 + -8) = 0x104a74;
        uVar11 = last_component();
        *(undefined8 *)((undefined *)ppuVar14 + -8) = 0x104a7f;
        lVar8 = func_0x00102900(uVar11);
        lVar12 = -(lVar8 + 0x1fU & 0xfffffffffffffff0);
        ppuVar15 = (undefined **)((undefined *)ppuVar14 + lVar12);
        bVar23 = false;
        bVar24 = ((ulong)((undefined *)ppuVar14 + lVar12 + 0xf) & 0xfffffffffffffff0) == 0;
        *(undefined8 *)((undefined *)ppuVar14 + lVar12 + -8) = 0x104a9f;
        pbVar9 = (byte *)func_0x00102b60((ulong)((undefined *)ppuVar14 + lVar12 + 0xf) &
                                         0xfffffffffffffff0,uVar11,lVar8 + 1);
        *(undefined8 *)((undefined *)ppuVar14 + lVar12 + -8) = 0x104aaa;
        strip_trailing_slashes(pbVar9);
        uVar21 = uStack256;
        lVar8 = 3;
        pbVar17 = pbVar9;
        pbVar20 = &UNK_00112a38;
        do {
          if (lVar8 == 0) break;
          lVar8 = lVar8 + -1;
          bVar23 = *pbVar17 < *pbVar20;
          bVar24 = *pbVar17 == *pbVar20;
          pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
          pbVar20 = pbVar20 + (ulong)bVar25 * -2 + 1;
        } while (bVar24);
        if ((!bVar23 && !bVar24) == bVar23) {
          *(undefined8 *)((undefined *)ppuVar14 + lVar12 + -8) = 0x104ad4;
          uVar21 = xstrdup(uVar21);
          ppuVar15 = (undefined **)((undefined *)ppuVar14 + lVar12);
        }
        else {
          *(undefined8 *)((undefined *)ppuVar14 + lVar12 + -8) = 0x104b81;
          uVar21 = file_name_concat(uVar21,pbVar9,0);
        }
code_r0x00104ad7:
        puVar18 = puStack280;
        uVar13 = (ulong)bStack234;
        *(undefined8 *)((undefined *)ppuVar15 + -8) = 0x104af6;
        uVar5 = copy(uVar1,uVar21,uVar13,param_5,puVar18,0);
        lVar12 = lStack232;
        uVar5 = (uint)uVar7 & uVar5;
        uVar7 = (ulong)uVar5;
        if (parents_option != '\0') {
          lVar8 = lStack224 - uVar21;
          *(undefined8 *)((undefined *)ppuVar15 + -8) = 0x104b22;
          uVar6 = re_protect(uVar21,lVar8,lVar12,param_5);
          uVar7 = (ulong)(uVar5 & uVar6);
          goto code_r0x00104a23;
        }
      }
      else {
        *(undefined8 *)((undefined *)ppuVar14 + -8) = 0x104995;
        lVar8 = func_0x00102900(uVar1);
        lVar12 = -(lVar8 + 0x1fU & 0xfffffffffffffff0);
        ppuVar15 = (undefined **)((undefined *)ppuVar14 + lVar12);
        *(undefined8 *)((undefined *)ppuVar14 + lVar12 + -8) = 0x1049b5;
        uVar11 = func_0x00102b60((ulong)((undefined *)ppuVar14 + lVar12 + 0xf) & 0xfffffffffffffff0,
                                 uVar1,lVar8 + 1);
        *(undefined8 *)((undefined *)ppuVar14 + lVar12 + -8) = 0x1049c0;
        strip_trailing_slashes(uVar11);
        uVar21 = uStack256;
        plVar2 = plStack272;
        *(undefined8 *)((undefined *)ppuVar14 + lVar12 + -8) = 0x1049d6;
        uVar21 = file_name_concat(uVar21,uVar11,plVar2);
        puVar18 = (undefined *)0x0;
        if (*(char *)((long)param_5 + 0x2e) != '\0') {
          puVar18 = &UNK_001129eb;
        }
        lVar8 = lStack224 - uVar21;
        *(undefined8 *)((undefined *)ppuVar14 + lVar12 + -8) = 0x104a11;
        cVar3 = make_dir_parents_private(uVar21,lVar8,puVar18,&lStack232,&bStack234,param_5);
        if (cVar3 != '\0') goto code_r0x00104ad7;
        uVar7 = 0;
        ppuVar15 = (undefined **)((undefined *)ppuVar14 + lVar12);
code_r0x00104a23:
        if (parents_option != '\0') {
          while (lStack232 != 0) {
            lStack232 = *(long *)(lStack232 + 0xa0);
            *(undefined8 *)((undefined *)ppuVar15 + -8) = 0x104b4b;
            func_0x00102e10();
          }
        }
      }
      param_2 = param_2 + 1;
      *(undefined8 *)((undefined *)ppuVar15 + -8) = 0x104a37;
      func_0x00102e10(uVar21);
      ppuVar14 = ppuVar15;
    } while (puStack264 != param_2);
  }
  else {
    ppuVar16 = &puStack280;
    if (param_3 != 0) goto code_r0x00104c6f;
    if (2 < param_1) {
      uVar11 = quotearg_style(4,param_2[2]);
      puVar18 = &UNK_00112a0a;
      goto code_r0x00104c4d;
    }
    target_directory_operand(param_2[uVar21 - 1],auStack216,&bStack234,(ulong)bVar23);
code_r0x00104872:
    uVar21 = *param_2;
    uVar7 = param_2[1];
    ppuVar14 = &puStack280;
    if (parents_option != '\0') goto code_r0x00104cbc;
    puVar22 = (undefined1 *)param_5;
    if ((((*(char *)((long)param_5 + 0x16) != '\0') && (uVar5 = *param_5, uVar5 != 0)) &&
        (iVar4 = func_0x00102af0(uVar21,uVar7), iVar4 == 0)) &&
       ((bStack234 == 0 && ((uStack192 & 0xf000) == 0x8000)))) {
      uVar7 = find_backup_file_name(0xffffff9c,uVar7,(ulong)uVar5);
      puVar22 = x_tmp_7353;
      lVar12 = 0x14;
      puVar19 = (uint *)x_tmp_7353;
      while (lVar12 != 0) {
        lVar12 = lVar12 + -1;
        *puVar19 = *param_5;
        param_5 = param_5 + (ulong)bVar25 * 0x3ffffffffffffffe + 1;
        puVar19 = puVar19 + (ulong)bVar25 * 0x3ffffffffffffffe + 1;
      }
      x_tmp_7353._0_4_ = 0;
    }
    uVar5 = copy(uVar21,uVar7,0,puVar22,&lStack224,0);
    uVar7 = (ulong)uVar5;
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
  *(undefined8 *)((undefined *)ppuVar15 + -8) = 0x104cbc;
  func_0x00102930();
  ppuVar14 = ppuVar15;
code_r0x00104cbc:
  puVar18 = &UNK_00114508;
  do {
    *(undefined8 *)((undefined *)ppuVar14 + -8) = 0x104ccf;
    uVar11 = func_0x001028e0(0,puVar18,5);
    *(undefined8 *)((undefined *)ppuVar14 + -8) = 0x104cdd;
    func_0x00102cb0(0,0,uVar11);
    while( true ) {
      param_1 = (int)uVar21;
      *(undefined8 *)((undefined *)ppuVar14 + -8) = 0x104c6f;
      usage(1);
      ppuVar16 = ppuVar14;
code_r0x00104c6f:
      *(undefined8 *)((undefined *)ppuVar16 + -8) = 0x104c82;
      uVar11 = func_0x001028e0(0,&UNK_001144c0,5);
      param_2 = (ulong *)0x0;
      *(undefined8 *)((undefined *)ppuVar16 + -8) = 0x104c93;
      func_0x00102cb0(1,0,uVar11);
code_r0x00104c93:
      ppuVar14 = ppuVar16;
      uVar21 = (ulong)(param_1 - 1U);
      if (param_1 - 1U != 0) break;
      uVar7 = *param_2;
      *(undefined8 *)((undefined *)ppuVar14 + -8) = 0x104ca6;
      uVar11 = quotearg_style(4,uVar7);
      puVar18 = &UNK_00114490;
code_r0x00104c4d:
      *(undefined8 *)((undefined *)ppuVar14 + -8) = 0x104c54;
      uVar10 = func_0x001028e0(0,puVar18,5);
      *(undefined8 *)((undefined *)ppuVar14 + -8) = 0x104c65;
      func_0x00102cb0(0,0,uVar10,uVar11);
    }
    puVar18 = &UNK_001129f5;
  } while( true );
}

