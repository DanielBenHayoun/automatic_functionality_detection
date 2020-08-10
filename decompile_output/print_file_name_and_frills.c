
/* WARNING: Could not reconcile some variable overlaps */

long print_file_name_and_frills(ulong param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  undefined8 extraout_RDX;
  ulong uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint *unaff_R12;
  char *pcVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined *in_stack_ffffffffffffe9e8;
  undefined8 uStack5624;
  long lStack5616;
  undefined8 uStack5608;
  undefined auStack5600 [16];
  int iStack5584;
  undefined auStack5536 [16];
  int iStack5520;
  undefined uStack5468;
  undefined8 uStack5467;
  ushort uStack5459;
  undefined uStack5457;
  undefined auStack5456 [32];
  undefined auStack5424 [1008];
  uint auStack4416 [914];
  long lStack760;
  ulong uStack744;
  long lStack736;
  undefined auStack696 [664];
  ulong uStack32;
  
  uStack32 = *(ulong *)(in_FS_OFFSET + 0x28);
  set_normal_color();
  if (print_inode != '\0') {
    puVar10 = &UNK_00117885;
    if ((*(char *)(param_1 + 0xb8) != '\0') && (*(long *)(param_1 + 0x20) != 0)) {
      puVar10 = (undefined *)
                umaxtostr(*(long *)(param_1 + 0x20),auStack696,extraout_RDX,&UNK_00117885);
    }
    uVar14 = 0;
    if (format != 4) {
      uVar14 = (ulong)inode_number_width;
    }
    func_0x00103710(1,&UNK_001178b2,uVar14,puVar10);
  }
  if (print_block_size != '\0') {
    puVar10 = &UNK_00117885;
    if (*(char *)(param_1 + 0xb8) != '\0') {
      puVar10 = (undefined *)
                human_readable(*(undefined8 *)(param_1 + 0x58),auStack696,(ulong)human_output_opts,
                               0x200);
    }
    uVar14 = 0;
    if (format != 4) {
      uVar14 = (ulong)block_size_width;
    }
    func_0x00103710(1,&UNK_001178b2,uVar14,puVar10);
  }
  if (print_scontext != '\0') {
    uVar14 = 0;
    if (format != 4) {
      uVar14 = (ulong)scontext_width;
    }
    func_0x00103710(1,&UNK_001178b2,uVar14,*(undefined8 *)(param_1 + 0xb0));
  }
  uVar14 = param_1;
  lStack736 = print_name_with_quoting(param_1,0,0,param_2);
  if (indicator_style != 0) {
    uVar14 = (ulong)*(byte *)(param_1 + 0xb8);
    bVar1 = print_type_indicator
                      (uVar14,(ulong)*(uint *)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0xa8));
    lStack736 = lStack736 + (ulong)bVar1;
  }
  uStack744 = uStack32 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uStack744 == 0) {
    return lStack736;
  }
  func_0x00103420();
  lStack760 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(uVar14 + 0xb8) == '\0') {
    uStack5468 = filetype_letter[*(uint *)(uVar14 + 0xa8)];
    uStack5467 = 0x3f3f3f3f3f3f3f3f;
    uStack5459 = 0x3f3f;
    uStack5459._0_1_ = 0x3f;
    uStack5457 = 0;
    if (any_has_acl == '\0') goto code_r0x00107ee5;
code_r0x001082d2:
    if (*(int *)(uVar14 + 0xbc) == 1) {
      uStack5459 = CONCAT11(0x2e,(byte)uStack5459);
      goto code_r0x00107eed;
    }
    if (*(int *)(uVar14 + 0xbc) != 2) goto code_r0x00107eed;
    uStack5459 = CONCAT11(0x2b,(byte)uStack5459);
    if (time_type != 1) goto code_r0x00107efc;
code_r0x00108308:
    lStack5616 = *(long *)(uVar14 + 0x80);
    uStack5608 = *(undefined8 *)(uVar14 + 0x88);
    cVar11 = *(char *)(uVar14 + 0xb8);
    if (print_inode != '\0') goto code_r0x00107f31;
code_r0x00108334:
    puVar16 = auStack4416;
  }
  else {
    in_stack_ffffffffffffe9e8 = &UNK_00107ed8;
    filemodestring(uVar14 + 0x18,&uStack5468);
    if (any_has_acl != '\0') goto code_r0x001082d2;
code_r0x00107ee5:
    uStack5459 = (ushort)(byte)uStack5459;
code_r0x00107eed:
    if (time_type == 1) goto code_r0x00108308;
code_r0x00107efc:
    puVar16 = (uint *)&uStack5468;
    if (time_type == 0) {
      uStack5608 = *(undefined8 *)(uVar14 + 0x78);
      lStack5616 = *(long *)(uVar14 + 0x70);
    }
    else {
      if (time_type != 2) goto code_r0x00108868;
      uStack5608 = *(undefined8 *)(uVar14 + 0x68);
      lStack5616 = *(long *)(uVar14 + 0x60);
    }
    cVar11 = *(char *)(uVar14 + 0xb8);
    if (print_inode == '\0') goto code_r0x00108334;
code_r0x00107f31:
    puVar10 = &UNK_00117885;
    if ((cVar11 != '\0') && (*(long *)(uVar14 + 0x20) != 0)) {
      puVar10 = (undefined *)umaxtostr(*(long *)(uVar14 + 0x20),auStack5424);
    }
    in_stack_ffffffffffffe9e8 = &UNK_00107f76;
    func_0x00103870(auStack4416,1,0xe3b,&UNK_001178b2,(ulong)inode_number_width,puVar10);
    puVar16 = auStack4416;
    do {
      puVar6 = puVar16;
      uVar12 = *puVar6 + 0xfefefeff & ~*puVar6;
      uVar13 = uVar12 & 0x80808080;
      puVar16 = puVar6 + 1;
    } while (uVar13 == 0);
    bVar18 = (uVar12 & 0x8080) == 0;
    bVar1 = (byte)uVar13;
    if (bVar18) {
      bVar1 = (byte)(uVar13 >> 0x10);
    }
    if (bVar18) {
      puVar16 = (uint *)((long)puVar6 + 6);
    }
    cVar11 = *(char *)(uVar14 + 0xb8);
    puVar16 = (uint *)((long)puVar16 + (-3 - (ulong)CARRY1(bVar1,bVar1)));
  }
  unaff_R12 = auStack4416;
  if (print_block_size != '\0') {
    pcVar17 = "?";
    if (cVar11 != '\0') {
      pcVar17 = (char *)human_readable(*(undefined8 *)(uVar14 + 0x58),auStack5424,
                                       (ulong)human_output_opts,0x200,output_block_size);
    }
    uVar12 = block_size_width;
    in_stack_ffffffffffffe9e8 = &UNK_00107fdc;
    iVar2 = gnu_mbswidth(pcVar17,0);
    if (0 < (int)(uVar12 - iVar2)) {
      uVar12 = (uVar12 - iVar2) - 1;
      puVar6 = puVar16;
      do {
        puVar4 = (uint *)((long)puVar6 + 1);
        *(char *)puVar6 = ' ';
        puVar6 = puVar4;
      } while ((uint *)((long)puVar16 + (ulong)uVar12 + 1) != puVar4);
      puVar16 = (uint *)((long)puVar16 + (long)(int)uVar12 + 1);
    }
    do {
      puVar6 = puVar16;
      cVar11 = *pcVar17;
      puVar16 = (uint *)((long)puVar6 + 1);
      *(char *)puVar6 = cVar11;
      pcVar17 = pcVar17 + 1;
    } while (cVar11 != '\0');
    *(char *)puVar6 = ' ';
    cVar11 = *(char *)(uVar14 + 0xb8);
  }
  puVar10 = &UNK_00117885;
  if (cVar11 != '\0') {
    in_stack_ffffffffffffe9e8 = &UNK_001084f9;
    puVar10 = (undefined *)umaxtostr(*(undefined8 *)(uVar14 + 0x28),auStack5424);
  }
  func_0x00103870(puVar16,1,0xffffffffffffffff,&UNK_001178a2,&uStack5468,(ulong)nlink_width,puVar10)
  ;
  lVar5 = func_0x00103400(puVar16);
  puVar16 = (uint *)((long)puVar16 + lVar5);
  if (dired != '\0') {
    func_0x001036d0(&UNK_001178aa,1,2,stdout,puVar10,in_stack_ffffffffffffe9e8);
    dired_pos = dired_pos + 2;
  }
  if ((((print_owner != '\0') || (print_group != '\0')) || (print_author != '\0')) ||
     (print_scontext != '\0')) {
    func_0x00103570(unaff_R12);
    dired_pos = (undefined *)((long)puVar16 + (long)((long)dired_pos - (long)unaff_R12));
    if (print_owner != '\0') {
      format_user((ulong)*(uint *)(uVar14 + 0x34),(ulong)owner_width,(ulong)*(byte *)(uVar14 + 0xb8)
                 );
    }
    uVar12 = group_width;
    if (print_group != '\0') {
      puVar10 = &UNK_00117885;
      uVar13 = *(uint *)(uVar14 + 0x38);
      if ((*(char *)(uVar14 + 0xb8) != '\0') && (puVar10 = (undefined *)0x0, numeric_ids == '\0')) {
        puVar10 = (undefined *)getgroup((ulong)uVar13);
      }
      format_user_or_group(puVar10,(ulong)uVar13,(ulong)uVar12);
    }
    if (print_author != '\0') {
      format_user((ulong)*(uint *)(uVar14 + 0x34),(ulong)author_width,
                  (ulong)*(byte *)(uVar14 + 0xb8));
    }
    puVar16 = unaff_R12;
    if (print_scontext != '\0') {
      format_user_or_group(*(undefined8 *)(uVar14 + 0xb0),0,(ulong)scontext_width);
    }
  }
  if (*(char *)(uVar14 + 0xb8) == '\0') {
    pcVar17 = "?";
code_r0x00108146:
    iVar2 = file_size_width;
    iVar3 = gnu_mbswidth(pcVar17,0);
    if (0 < iVar2 - iVar3) {
      uVar12 = (iVar2 - iVar3) - 1;
      puVar6 = puVar16;
      do {
        puVar4 = (uint *)((long)puVar6 + 1);
        *(undefined *)puVar6 = 0x20;
        puVar6 = puVar4;
      } while (puVar4 != (uint *)((long)puVar16 + (ulong)uVar12 + 1));
      puVar16 = (uint *)((long)puVar16 + (long)(int)uVar12 + 1);
    }
    do {
      puVar6 = puVar16;
      cVar11 = *pcVar17;
      puVar16 = (uint *)((long)puVar6 + 1);
      *(char *)puVar6 = cVar11;
      pcVar17 = pcVar17 + 1;
    } while (cVar11 != '\0');
    *(undefined *)puVar6 = 0x20;
  }
  else {
    if ((*(uint *)(uVar14 + 0x30) & 0xb000) != 0x2000) {
      pcVar17 = (char *)human_readable(*(undefined8 *)(uVar14 + 0x48),auStack5424,
                                       (ulong)file_human_output_opts,1);
      goto code_r0x00108146;
    }
    iVar3 = file_size_width - (major_device_number_width + 2 + minor_device_number_width);
    uVar7 = *(ulong *)(uVar14 + 0x40) & 0xff;
    uVar8 = umaxtostr((ulong)((uint)((*(ulong *)(uVar14 + 0x40) >> 0x14) << 8) | (uint)uVar7),
                      auStack5424,uVar7);
    uVar7 = (ulong)minor_device_number_width;
    uVar12 = (uint)((ulong)*(undefined8 *)(uVar14 + 0x40) >> 8) & 0xfff;
    uVar9 = umaxtostr((ulong)((uint)((ulong)*(undefined8 *)(uVar14 + 0x40) >> 0x20) & 0xfffff000 |
                             uVar12),auStack5456,(ulong)uVar12);
    iVar2 = 0;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    func_0x00103870(puVar16,1,0xffffffffffffffff,&UNK_001178ad,
                    (ulong)(uint)(iVar2 + major_device_number_width),uVar9,uVar7,uVar8);
    puVar16 = (uint *)((long)puVar16 + (long)file_size_width + 1);
  }
  *(undefined *)puVar16 = 1;
  if (*(char *)(uVar14 + 0xb8) == '\0') goto code_r0x001081ba;
  lVar5 = localtime_rz(localtz,&lStack5616,auStack5600);
  if (lVar5 != 0) {
    if (current_time._0_8_ < lStack5616) {
code_r0x00108620:
      gettime(current_time);
      iVar2 = (int)current_time._8_8_;
      lVar5 = current_time._0_8_ + -0xf0c2ac;
      if (lVar5 < lStack5616) {
code_r0x00108654:
        uVar7 = 1;
        if ((current_time._0_8_ <= lStack5616) && (uVar7 = 0, lStack5616 <= current_time._0_8_))
        goto code_r0x0010866d;
      }
      else {
code_r0x00108815:
        uVar7 = 0;
        if (lVar5 <= lStack5616) {
code_r0x00108820:
          uVar7 = 0;
          if (iVar2 - (int)uStack5608 < 0) goto code_r0x00108654;
        }
      }
    }
    else {
      iVar2 = (int)current_time._8_8_;
      if (lStack5616 < current_time._0_8_) {
        lVar5 = current_time._0_8_ + -0xf0c2ac;
        uVar7 = 1;
        if (lStack5616 <= lVar5) goto code_r0x00108815;
        goto code_r0x00108460;
      }
      if (iVar2 - (int)uStack5608 < 0) goto code_r0x00108620;
      if (lStack5616 <= current_time._0_8_ + -0xf0c2ac) {
        uVar7 = 0;
        if (lStack5616 < current_time._0_8_ + -0xf0c2ac) goto code_r0x00108460;
        goto code_r0x00108820;
      }
code_r0x0010866d:
      uVar7 = (ulong)((uint)((int)uStack5608 - iVar2) >> 0x1f);
    }
code_r0x00108460:
    if (use_abformat == '\0') {
      puVar15 = *(undefined1 **)(long_time_format + uVar7 * 8);
    }
    else {
      puVar15 = abformat + ((long)iStack5584 + uVar7 * 0xc) * 0x80;
    }
    lVar5 = nstrftime(puVar16,0x3e9,puVar15,auStack5600);
    if (lVar5 != 0) {
      puVar16 = (uint *)((long)puVar16 + lVar5);
      goto code_r0x001085cb;
    }
  }
  if (*(char *)puVar16 != '\0') goto code_r0x0010886d;
code_r0x001085cb:
  puVar10 = (undefined *)((long)puVar16 + 1);
  *(undefined2 *)puVar16 = 0x20;
  while( true ) {
    puVar10 = puVar10 + -(long)unaff_R12;
    func_0x00103570(unaff_R12,stdout);
    dired_pos = puVar10 + (long)dired_pos;
    unaff_R12 = (uint *)print_name_with_quoting(uVar14,0,dired_obstack,puVar10);
    if (*(int *)(uVar14 + 0xa8) == 6) {
      if (*(long *)(uVar14 + 8) != 0) {
        func_0x001036d0(&UNK_001178b7,1,4,stdout);
        dired_pos = dired_pos + 4;
        print_name_with_quoting(uVar14,1,0,puVar10 + 4 + (long)unaff_R12);
        if (indicator_style != 0) {
          print_type_indicator(1,(ulong)*(uint *)(uVar14 + 0xac),0);
        }
      }
    }
    else {
      if (indicator_style != 0) {
        print_type_indicator((ulong)*(byte *)(uVar14 + 0xb8),(ulong)*(uint *)(uVar14 + 0x30));
      }
    }
    if (lStack760 == *(long *)(in_FS_OFFSET + 0x28)) break;
    func_0x00103420();
code_r0x00108868:
    func_0x00103290();
code_r0x0010886d:
    if (*(char *)(uVar14 + 0xb8) != '\0') {
      imaxtostr(lStack5616,auStack5456);
    }
code_r0x001081ba:
    if (width_10774 < 0) {
      uStack5624 = 0;
      lVar5 = localtime_rz(localtz,&uStack5624,auStack5536);
      if (lVar5 != 0) {
        puVar15 = long_time_format._0_8_;
        if (use_abformat != '\0') {
          puVar15 = abformat + (long)iStack5520 * 0x80;
        }
        lVar5 = nstrftime(auStack5424,0x3e9,puVar15,auStack5536,localtz,0);
        if (lVar5 != 0) {
          width_10774 = mbsnwidth(auStack5424,lVar5,0);
        }
      }
      if (width_10774 < 0) {
        width_10774 = 0;
      }
    }
    func_0x00103870(puVar16,1,0xffffffffffffffff,&UNK_001178b2);
    lVar5 = func_0x00103400(puVar16);
    puVar10 = (undefined *)((long)puVar16 + lVar5);
  }
  return 0;
}

