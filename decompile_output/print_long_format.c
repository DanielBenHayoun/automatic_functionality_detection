
/* WARNING: Could not reconcile some variable overlaps */

void print_long_format(long param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  int iVar14;
  undefined *puVar15;
  uint *unaff_R12;
  char *pcVar16;
  long in_FS_OFFSET;
  bool bVar17;
  undefined *in_stack_ffffffffffffeca0;
  undefined8 uStack4928;
  long lStack4920;
  undefined8 uStack4912;
  undefined auStack4904 [16];
  int iStack4888;
  undefined auStack4840 [16];
  int iStack4824;
  undefined uStack4772;
  undefined8 uStack4771;
  ushort uStack4763;
  undefined uStack4761;
  undefined auStack4760 [32];
  undefined auStack4728 [1008];
  uint auStack3720 [914];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    uStack4772 = filetype_letter[*(uint *)(param_1 + 0xa8)];
    uStack4771 = 0x3f3f3f3f3f3f3f3f;
    uStack4763 = 0x3f3f;
    uStack4763._0_1_ = 0x3f;
    uStack4761 = 0;
    if (any_has_acl == '\0') goto code_r0x00107ee5;
code_r0x001082d2:
    if (*(int *)(param_1 + 0xbc) == 1) {
      uStack4763 = CONCAT11(0x2e,(byte)uStack4763);
      goto code_r0x00107eed;
    }
    if (*(int *)(param_1 + 0xbc) != 2) goto code_r0x00107eed;
    uStack4763 = CONCAT11(0x2b,(byte)uStack4763);
    if (time_type == 1) goto code_r0x00108308;
code_r0x00107efc:
    puVar13 = (uint *)&uStack4772;
    if (time_type == 0) {
      uStack4912 = *(undefined8 *)(param_1 + 0x78);
      lStack4920 = *(long *)(param_1 + 0x70);
    }
    else {
      if (time_type != 2) goto code_r0x00108868;
      uStack4912 = *(undefined8 *)(param_1 + 0x68);
      lStack4920 = *(long *)(param_1 + 0x60);
    }
    cVar9 = *(char *)(param_1 + 0xb8);
    if (print_inode == '\0') goto code_r0x00108334;
code_r0x00107f31:
    puVar15 = &UNK_00117885;
    if ((cVar9 != '\0') && (*(long *)(param_1 + 0x20) != 0)) {
      puVar15 = (undefined *)umaxtostr(*(long *)(param_1 + 0x20),auStack4728);
    }
    in_stack_ffffffffffffeca0 = &UNK_00107f76;
    func_0x00103870(auStack3720,1,0xe3b,&UNK_001178b2,(ulong)inode_number_width,puVar15);
    puVar13 = auStack3720;
    do {
      puVar5 = puVar13;
      uVar10 = *puVar5 + 0xfefefeff & ~*puVar5;
      uVar11 = uVar10 & 0x80808080;
      puVar13 = puVar5 + 1;
    } while (uVar11 == 0);
    bVar17 = (uVar10 & 0x8080) == 0;
    bVar1 = (byte)uVar11;
    if (bVar17) {
      bVar1 = (byte)(uVar11 >> 0x10);
    }
    if (bVar17) {
      puVar13 = (uint *)((long)puVar5 + 6);
    }
    cVar9 = *(char *)(param_1 + 0xb8);
    puVar13 = (uint *)((long)puVar13 + (-3 - (ulong)CARRY1(bVar1,bVar1)));
  }
  else {
    in_stack_ffffffffffffeca0 = &UNK_00107ed8;
    filemodestring(param_1 + 0x18,&uStack4772);
    if (any_has_acl != '\0') goto code_r0x001082d2;
code_r0x00107ee5:
    uStack4763 = (ushort)(byte)uStack4763;
code_r0x00107eed:
    if (time_type != 1) goto code_r0x00107efc;
code_r0x00108308:
    lStack4920 = *(long *)(param_1 + 0x80);
    uStack4912 = *(undefined8 *)(param_1 + 0x88);
    cVar9 = *(char *)(param_1 + 0xb8);
    if (print_inode != '\0') goto code_r0x00107f31;
code_r0x00108334:
    puVar13 = auStack3720;
  }
  unaff_R12 = auStack3720;
  if (print_block_size != '\0') {
    pcVar16 = "?";
    if (cVar9 != '\0') {
      pcVar16 = (char *)human_readable(*(undefined8 *)(param_1 + 0x58),auStack4728,
                                       (ulong)human_output_opts,0x200,output_block_size);
    }
    iVar14 = block_size_width;
    in_stack_ffffffffffffeca0 = &UNK_00107fdc;
    iVar2 = gnu_mbswidth(pcVar16,0);
    if (0 < iVar14 - iVar2) {
      uVar10 = (iVar14 - iVar2) - 1;
      puVar5 = puVar13;
      do {
        puVar3 = (uint *)((long)puVar5 + 1);
        *(char *)puVar5 = ' ';
        puVar5 = puVar3;
      } while ((uint *)((long)puVar13 + (ulong)uVar10 + 1) != puVar3);
      puVar13 = (uint *)((long)puVar13 + (long)(int)uVar10 + 1);
    }
    do {
      puVar5 = puVar13;
      cVar9 = *pcVar16;
      puVar13 = (uint *)((long)puVar5 + 1);
      *(char *)puVar5 = cVar9;
      pcVar16 = pcVar16 + 1;
    } while (cVar9 != '\0');
    *(char *)puVar5 = ' ';
    cVar9 = *(char *)(param_1 + 0xb8);
  }
  puVar15 = &UNK_00117885;
  if (cVar9 != '\0') {
    in_stack_ffffffffffffeca0 = &UNK_001084f9;
    puVar15 = (undefined *)umaxtostr(*(undefined8 *)(param_1 + 0x28),auStack4728);
  }
  func_0x00103870(puVar13,1,0xffffffffffffffff,&UNK_001178a2,&uStack4772,(ulong)nlink_width,puVar15)
  ;
  lVar4 = func_0x00103400(puVar13);
  puVar13 = (uint *)((long)puVar13 + lVar4);
  if (dired != '\0') {
    func_0x001036d0(&UNK_001178aa,1,2,stdout,puVar15,in_stack_ffffffffffffeca0);
    dired_pos = dired_pos + 2;
  }
  if ((((print_owner != '\0') || (print_group != '\0')) || (print_author != '\0')) ||
     (print_scontext != '\0')) {
    func_0x00103570(unaff_R12);
    dired_pos = (undefined *)((long)puVar13 + (long)((long)dired_pos - (long)unaff_R12));
    if (print_owner != '\0') {
      format_user((ulong)*(uint *)(param_1 + 0x34),(ulong)owner_width,
                  (ulong)*(byte *)(param_1 + 0xb8));
    }
    uVar10 = group_width;
    if (print_group != '\0') {
      puVar15 = &UNK_00117885;
      uVar11 = *(uint *)(param_1 + 0x38);
      if ((*(char *)(param_1 + 0xb8) != '\0') && (puVar15 = (undefined *)0x0, numeric_ids == '\0'))
      {
        puVar15 = (undefined *)getgroup((ulong)uVar11);
      }
      format_user_or_group(puVar15,(ulong)uVar11,(ulong)uVar10);
    }
    if (print_author != '\0') {
      format_user((ulong)*(uint *)(param_1 + 0x34),(ulong)author_width,
                  (ulong)*(byte *)(param_1 + 0xb8));
    }
    puVar13 = unaff_R12;
    if (print_scontext != '\0') {
      format_user_or_group(*(undefined8 *)(param_1 + 0xb0),0,(ulong)scontext_width);
    }
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    pcVar16 = "?";
code_r0x00108146:
    iVar14 = file_size_width;
    iVar2 = gnu_mbswidth(pcVar16,0);
    if (0 < iVar14 - iVar2) {
      uVar10 = (iVar14 - iVar2) - 1;
      puVar5 = puVar13;
      do {
        puVar3 = (uint *)((long)puVar5 + 1);
        *(undefined *)puVar5 = 0x20;
        puVar5 = puVar3;
      } while (puVar3 != (uint *)((long)puVar13 + (ulong)uVar10 + 1));
      puVar13 = (uint *)((long)puVar13 + (long)(int)uVar10 + 1);
    }
    do {
      puVar5 = puVar13;
      cVar9 = *pcVar16;
      puVar13 = (uint *)((long)puVar5 + 1);
      *(char *)puVar5 = cVar9;
      pcVar16 = pcVar16 + 1;
    } while (cVar9 != '\0');
    *(undefined *)puVar5 = 0x20;
  }
  else {
    if ((*(uint *)(param_1 + 0x30) & 0xb000) != 0x2000) {
      pcVar16 = (char *)human_readable(*(undefined8 *)(param_1 + 0x48),auStack4728,
                                       (ulong)file_human_output_opts,1);
      goto code_r0x00108146;
    }
    iVar2 = file_size_width - (major_device_number_width + 2 + minor_device_number_width);
    uVar6 = *(ulong *)(param_1 + 0x40) & 0xff;
    uVar7 = umaxtostr((ulong)((uint)((*(ulong *)(param_1 + 0x40) >> 0x14) << 8) | (uint)uVar6),
                      auStack4728,uVar6);
    uVar6 = (ulong)minor_device_number_width;
    uVar10 = (uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 8) & 0xfff;
    uVar8 = umaxtostr((ulong)((uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) & 0xfffff000 |
                             uVar10),auStack4760,(ulong)uVar10);
    iVar14 = 0;
    if (-1 < iVar2) {
      iVar14 = iVar2;
    }
    func_0x00103870(puVar13,1,0xffffffffffffffff,&UNK_001178ad,
                    (ulong)(uint)(iVar14 + major_device_number_width),uVar8,uVar6,uVar7);
    puVar13 = (uint *)((long)puVar13 + (long)file_size_width + 1);
  }
  *(undefined *)puVar13 = 1;
  if (*(char *)(param_1 + 0xb8) == '\0') goto code_r0x001081ba;
  lVar4 = localtime_rz(localtz,&lStack4920,auStack4904);
  if (lVar4 != 0) {
    if (current_time._0_8_ < lStack4920) {
code_r0x00108620:
      gettime(current_time);
      iVar14 = (int)current_time._8_8_;
      lVar4 = current_time._0_8_ + -0xf0c2ac;
      if (lVar4 < lStack4920) {
code_r0x00108654:
        uVar6 = 1;
        if ((current_time._0_8_ <= lStack4920) && (uVar6 = 0, lStack4920 <= current_time._0_8_))
        goto code_r0x0010866d;
      }
      else {
code_r0x00108815:
        uVar6 = 0;
        if (lVar4 <= lStack4920) {
code_r0x00108820:
          uVar6 = 0;
          if (iVar14 - (int)uStack4912 < 0) goto code_r0x00108654;
        }
      }
    }
    else {
      iVar14 = (int)current_time._8_8_;
      if (lStack4920 < current_time._0_8_) {
        lVar4 = current_time._0_8_ + -0xf0c2ac;
        uVar6 = 1;
        if (lStack4920 <= lVar4) goto code_r0x00108815;
        goto code_r0x00108460;
      }
      if (iVar14 - (int)uStack4912 < 0) goto code_r0x00108620;
      if (lStack4920 <= current_time._0_8_ + -0xf0c2ac) {
        uVar6 = 0;
        if (lStack4920 < current_time._0_8_ + -0xf0c2ac) goto code_r0x00108460;
        goto code_r0x00108820;
      }
code_r0x0010866d:
      uVar6 = (ulong)((uint)((int)uStack4912 - iVar14) >> 0x1f);
    }
code_r0x00108460:
    if (use_abformat == '\0') {
      puVar12 = *(undefined1 **)(long_time_format + uVar6 * 8);
    }
    else {
      puVar12 = abformat + ((long)iStack4888 + uVar6 * 0xc) * 0x80;
    }
    lVar4 = nstrftime(puVar13,0x3e9,puVar12,auStack4904);
    if (lVar4 != 0) {
      puVar13 = (uint *)((long)puVar13 + lVar4);
      goto code_r0x001085cb;
    }
  }
  if (*(char *)puVar13 != '\0') goto code_r0x0010886d;
code_r0x001085cb:
  puVar15 = (undefined *)((long)puVar13 + 1);
  *(undefined2 *)puVar13 = 0x20;
  while( true ) {
    puVar15 = puVar15 + -(long)unaff_R12;
    func_0x00103570(unaff_R12,stdout);
    dired_pos = puVar15 + (long)dired_pos;
    unaff_R12 = (uint *)print_name_with_quoting(param_1,0,dired_obstack,puVar15);
    if (*(int *)(param_1 + 0xa8) == 6) {
      if (*(long *)(param_1 + 8) != 0) {
        func_0x001036d0(&UNK_001178b7,1,4,stdout);
        dired_pos = dired_pos + 4;
        print_name_with_quoting(param_1,1,0,puVar15 + 4 + (long)unaff_R12);
        if (indicator_style != 0) {
          print_type_indicator(1,(ulong)*(uint *)(param_1 + 0xac),0);
        }
      }
    }
    else {
      if (indicator_style != 0) {
        print_type_indicator((ulong)*(byte *)(param_1 + 0xb8),(ulong)*(uint *)(param_1 + 0x30));
      }
    }
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) break;
    func_0x00103420();
code_r0x00108868:
    func_0x00103290();
code_r0x0010886d:
    if (*(char *)(param_1 + 0xb8) != '\0') {
      imaxtostr(lStack4920,auStack4760);
    }
code_r0x001081ba:
    if (width_10774 < 0) {
      uStack4928 = 0;
      lVar4 = localtime_rz(localtz,&uStack4928,auStack4840);
      if (lVar4 != 0) {
        puVar12 = long_time_format._0_8_;
        if (use_abformat != '\0') {
          puVar12 = abformat + (long)iStack4824 * 0x80;
        }
        lVar4 = nstrftime(auStack4728,0x3e9,puVar12,auStack4840,localtz,0);
        if (lVar4 != 0) {
          width_10774 = mbsnwidth(auStack4728,lVar4,0);
        }
      }
      if (width_10774 < 0) {
        width_10774 = 0;
      }
    }
    func_0x00103870(puVar13,1,0xffffffffffffffff,&UNK_001178b2);
    lVar4 = func_0x00103400(puVar13);
    puVar15 = (undefined *)((long)puVar13 + lVar4);
  }
  return;
}

