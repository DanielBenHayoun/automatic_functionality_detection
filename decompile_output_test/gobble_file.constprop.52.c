
/* WARNING: Could not reconcile some variable overlaps */

undefined8 gobble_file_constprop_52(char *param_1,uint param_2,ulong param_3,undefined8 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 uVar15;
  uint *puVar16;
  int *piVar17;
  char cVar18;
  char cVar19;
  ulong uVar20;
  undefined4 uVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  undefined *puVar25;
  undefined8 *puVar26;
  char *pcVar27;
  char *pcVar28;
  char cVar29;
  uint *puVar30;
  char *pcVar31;
  long in_FS_OFFSET;
  bool bVar32;
  byte bVar33;
  undefined auStack936 [14];
  char cStack922;
  char cStack921;
  uint *puStack920;
  char *pcStack912;
  undefined auStack904 [24];
  undefined4 uStack880;
  undefined auStack760 [32];
  uint auStack728 [166];
  long lStack64;
  
  bVar33 = 0;
  pcVar31 = (char *)(ulong)param_2;
  puVar30 = (uint *)(param_3 & 0xffffffff);
  puVar25 = auStack936;
  pcStack912 = param_1;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (cwd_n_used != cwd_n_alloc) goto code_r0x00109728;
  bVar32 = false;
  lVar11 = SUB168(ZEXT816(400) * ZEXT816(cwd_n_used),0);
  puVar25 = auStack936;
  puVar5 = auStack936;
  if (SUB168(ZEXT816(400) * ZEXT816(cwd_n_used) >> 0x40,0) != 0) goto code_r0x0010a3de;
  do {
    puVar25 = puVar5;
    if ((-1 < lVar11) && (!bVar32)) {
      *(undefined8 *)(puVar25 + -8) = 0x109710;
      cwd_file = xrealloc();
      cwd_n_alloc = cwd_n_alloc << 1;
code_r0x00109728:
      pcVar28 = pcStack912;
      puVar3 = (undefined8 *)(cwd_file + cwd_n_used * 200);
      *puVar3 = 0;
      *(undefined8 *)((long)puVar3 + 0xbc) = 0;
      uVar20 = (ulong)(((int)puVar3 - (int)(undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8))
                       + 0xc4U >> 3);
      puVar26 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
      while (uVar20 != 0) {
        uVar20 = uVar20 - 1;
        *puVar26 = 0;
        puVar26 = puVar26 + (ulong)bVar33 * 0x1ffffffffffffffe + 1;
      }
      puVar3[4] = 0;
      iVar10 = (int)pcVar31;
      *(int *)(puVar3 + 0x15) = iVar10;
      *(undefined4 *)((long)puVar3 + 0xc4) = 0xffffffff;
      if ((cwd_some_quoted == '\0') && (align_variable_outer_quotes != '\0')) {
        *(undefined8 *)(puVar25 + -8) = 0x109e8c;
        bVar6 = needs_quoting(pcVar28);
        *(uint *)((long)puVar3 + 0xc4) = (uint)bVar6;
        if (bVar6 != 0) {
          cwd_some_quoted = '\x01';
        }
      }
      cVar29 = (char)puVar30;
      pcVar28 = pcStack912;
      puStack920._0_1_ = print_hyperlink;
      if (cVar29 == '\0') {
        if (print_hyperlink != 0) {
          cVar7 = *pcStack912;
          if ((cVar7 != '/') && (cVar18 = *(char *)param_4, cVar18 != '\0')) goto code_r0x00109db3;
          goto code_r0x00109bfa;
        }
        if (format_needs_stat != '\0') {
code_r0x00109b00:
          cVar7 = *pcStack912;
          pcVar28 = pcStack912;
          if (cVar7 != '/') {
            cVar18 = *(char *)param_4;
            if (cVar18 != '\0') goto code_r0x00109db3;
            goto code_r0x001097cc;
          }
          if (((2 < dereference) && (4 < dereference)) && (dereference == 5)) goto code_r0x001097f1;
          goto code_r0x00109b40;
        }
        if ((iVar10 == 3) && (print_with_color != '\0')) {
          puStack920 = (uint *)((ulong)puStack920 & 0xffffffffffffff00);
          *(undefined8 *)(puVar25 + -8) = 0x10a30e;
          cVar7 = is_colored(0x13);
          if (cVar7 == '\0') {
            *(undefined8 *)(puVar25 + -8) = 0x10a328;
            cVar7 = is_colored(0x12);
            if (cVar7 == '\0') {
              *(undefined8 *)(puVar25 + -8) = 0x10a342;
              cVar7 = is_colored(0x14);
              if (cVar7 == '\0') goto code_r0x001099e0;
            }
          }
          goto code_r0x00109b00;
        }
code_r0x001099e0:
        if (print_inode != '\0') {
          if ((iVar10 == 6) || (iVar10 == 0)) {
code_r0x00109a34:
            if ((dereference != 5) &&
               (((color_symlink_as_referent == '\0' && (check_symlink_mode == '\0')) &&
                (print_inode == '\0')))) {
              if (format_needs_type == '\0') goto code_r0x00109a10;
              if (iVar10 != 0) goto code_r0x00109a74;
            }
          }
          goto code_r0x00109b00;
        }
        if (format_needs_type == '\0') {
code_r0x00109a10:
          uVar15 = 0;
        }
        else {
          if ((iVar10 == 6) || (iVar10 == 0)) goto code_r0x00109a34;
          if (format_needs_type == '\0') goto code_r0x00109a10;
code_r0x00109a74:
          uVar15 = 0;
          if (iVar10 == 5) {
            if (indicator_style != 3) {
              puStack920 = (uint *)((ulong)puStack920 & 0xffffffffffffff00 | (ulong)(byte)puStack920
                                   );
              if (print_with_color == '\0') goto code_r0x0010997a;
              *(undefined8 *)(puVar25 + -8) = 0x109aa8;
              cVar7 = is_colored(0xe);
              if (cVar7 == '\0') {
                *(undefined8 *)(puVar25 + -8) = 0x109abe;
                cVar7 = is_colored(0x10);
                if (cVar7 == '\0') {
                  *(undefined8 *)(puVar25 + -8) = 0x109ad4;
                  cVar7 = is_colored(0x11);
                  if (cVar7 == '\0') {
                    *(undefined8 *)(puVar25 + -8) = 0x109aea;
                    cVar7 = is_colored(0x15);
                    if (cVar7 == '\0') goto code_r0x0010997a;
                  }
                }
              }
            }
            goto code_r0x00109b00;
          }
        }
code_r0x0010997a:
        pcVar28 = pcStack912;
        *(undefined8 *)(puVar25 + -8) = 0x109986;
        uVar12 = xstrdup(pcVar28);
        cwd_n_used = cwd_n_used + 1;
        *puVar3 = uVar12;
      }
      else {
        cVar7 = *pcStack912;
        bVar6 = print_hyperlink;
        if ((cVar7 != '/') && (cVar18 = *(char *)param_4, cVar18 != '\0')) {
code_r0x00109db3:
          pcVar28 = pcStack912;
          cStack922 = cVar7;
          cStack921 = cVar18;
          puStack920 = (uint *)((ulong)puStack920 & 0xffffffffffffff00 | (ulong)(byte)puStack920);
          *(undefined8 *)(puVar25 + -8) = 0x109dd2;
          lVar11 = func_0x00103400(pcVar28);
          *(undefined8 *)(puVar25 + -8) = 0x109ddd;
          lVar14 = func_0x00103400(param_4);
          cVar7 = *(char *)((long)param_4 + 1);
          lVar11 = -(lVar11 + 0x20 + lVar14 & 0xfffffffffffffff0U);
          pcVar28 = (char *)((ulong)(puVar25 + lVar11 + 0xf) & 0xfffffffffffffff0);
          puVar26 = param_4;
          pcVar27 = pcVar28;
          cVar19 = cStack921;
          cVar18 = cStack922;
          pcVar4 = pcStack912;
          if ((cStack921 != '.') || (pcVar2 = pcVar28, cVar7 != '\0')) {
            while( true ) {
              pcVar2 = pcVar27 + 1;
              *pcVar27 = cVar19;
              if (cVar7 == '\0') break;
              pcVar1 = (char *)((long)puVar26 + 2);
              puVar26 = (undefined8 *)((long)puVar26 + 1);
              pcVar27 = pcVar2;
              cVar19 = cVar7;
              cVar7 = *pcVar1;
            }
            if ((param_4 < (undefined8 *)((long)puVar26 + 1)) && (*(char *)puVar26 != '/')) {
              *pcVar2 = '/';
              pcVar2 = pcVar27 + 2;
            }
          }
          while (cVar18 != '\0') {
            *pcVar2 = cVar18;
            pcVar2 = pcVar2 + 1;
            cVar18 = pcVar4[1];
            pcVar4 = pcVar4 + 1;
          }
          *pcVar2 = '\0';
          puVar25 = puVar25 + lVar11;
          bVar6 = (byte)puStack920;
        }
        if (bVar6 != 0) {
code_r0x00109bfa:
          *(undefined8 *)(puVar25 + -8) = 0x109c07;
          lVar11 = canonicalize_filename_mode(pcVar28,2);
          puVar3[2] = lVar11;
          if (lVar11 == 0) {
            *(undefined8 *)(puVar25 + -8) = 0x109c27;
            uVar15 = func_0x001033e0(0,&UNK_001178bc,5);
            *(undefined8 *)(puVar25 + -8) = 0x109c36;
            file_failure((ulong)puVar30 & 0xff,uVar15,pcVar28);
          }
        }
code_r0x001097cc:
        param_4 = puVar3 + 3;
        if (dereference < 3) {
code_r0x00109b40:
          *(undefined8 *)(puVar25 + -8) = 0x109b50;
          iVar8 = func_0x00103410(1,pcVar28,puVar3 + 3);
          if (iVar8 == 0) {
code_r0x00109809:
            param_4 = puVar3 + 3;
            *(undefined *)(puVar3 + 0x17) = 1;
            if (((iVar10 == 5) || ((*(uint *)(puVar3 + 6) & 0xf000) == 0x8000)) &&
               (print_with_color != '\0')) {
              *(undefined8 *)(puVar25 + -8) = 0x109ba7;
              cVar7 = is_colored(0x15);
              if (cVar7 != '\0') {
                pcVar31 = (char *)puVar3[3];
                *(undefined8 *)(puVar25 + -8) = 0x109bb8;
                puVar13 = (undefined4 *)func_0x001032a0();
                bVar32 = pcVar31 != unsupported_device_10326;
                *puVar13 = 0x5f;
                if (bVar32) {
                  unsupported_device_10326 = pcVar31;
                }
                *(undefined *)(puVar3 + 0x18) = 0;
              }
            }
            if ((format == 0) || (print_scontext != '\0')) {
              *(undefined8 *)(puVar25 + -8) = 0x109847;
              puVar24 = (uint *)func_0x001032a0();
              pcVar31 = (char *)puVar3[3];
              bVar32 = pcVar31 != unsupported_device_10314;
              *puVar24 = 0x5f;
              iVar10 = format;
              if (bVar32) {
                unsupported_device_10314 = pcVar31;
              }
              puVar3[0x16] = 0x320022;
              if (iVar10 != 0) {
                *(undefined4 *)((long)puVar3 + 0xbc) = 0;
                goto code_r0x0010988c;
              }
              if (pcVar31 == unsupported_device_10320) {
                *puVar24 = 0x5f;
                *(undefined4 *)((long)puVar3 + 0xbc) = 0;
                uVar9 = *(uint *)(puVar3 + 6) & 0xf000;
                if (uVar9 != 0xa000) goto code_r0x0010989f;
                goto code_r0x00109fed;
              }
              *puVar24 = 0;
              puStack920 = puVar24;
              *(undefined8 *)(puVar25 + -8) = 0x109f66;
              iVar10 = file_has_acl(pcVar28,param_4);
              bVar6 = 1;
              uVar21 = 2;
              if (iVar10 < 1) {
                if (((*puStack920 - 0x16 & 0xffffffef) == 0) || (*puStack920 == 0x5f)) {
                  unsupported_device_10320 = (char *)puVar3[3];
                }
                bVar6 = 0;
                uVar21 = 0;
              }
              any_has_acl = any_has_acl | bVar6;
              *(undefined4 *)((long)puVar3 + 0xbc) = uVar21;
              if (iVar10 < 0) {
                *(undefined8 *)(puVar25 + -8) = 0x109fa5;
                quotearg_n_style_colon(0,3,pcVar28);
                uVar9 = *puStack920;
                *(undefined8 *)(puVar25 + -8) = 0x109fc2;
                func_0x00103760(0,(ulong)uVar9,&UNK_00119f74);
              }
              uVar9 = *(uint *)(puVar3 + 6) & 0xf000;
              if (uVar9 == 0xa000) {
                if (format == 0) goto code_r0x00109fed;
                goto code_r0x00109fe0;
              }
code_r0x0010989f:
              if (uVar9 == 0x4000) {
                if ((cVar29 == '\0') || (immediate_dirs != '\0')) {
                  *(undefined4 *)(puVar3 + 0x15) = 3;
                }
                else {
                  *(undefined4 *)(puVar3 + 0x15) = 9;
                }
              }
              else {
                *(undefined4 *)(puVar3 + 0x15) = 5;
              }
            }
            else {
code_r0x0010988c:
              uVar9 = *(uint *)(puVar3 + 6) & 0xf000;
              if (uVar9 != 0xa000) goto code_r0x0010989f;
code_r0x00109fe0:
              if (check_symlink_mode != '\0') {
code_r0x00109fed:
                *(undefined8 *)(puVar25 + -8) = 0x109ff9;
                pcVar31 = (char *)areadlink_with_size(pcVar28);
                *(char **)(puVar3 + 1) = pcVar31;
                if (pcVar31 == (char *)0x0) {
                  *(undefined8 *)(puVar25 + -8) = 0x10a2c3;
                  uVar15 = func_0x001033e0(0,&UNK_001178e5,5);
                  *(undefined8 *)(puVar25 + -8) = 0x10a2d2;
                  file_failure((ulong)puVar30 & 0xff,uVar15,pcVar28);
                  pcVar31 = (char *)puVar3[1];
                  if (pcVar31 != (char *)0x0) goto code_r0x0010a009;
code_r0x0010a2e0:
                  param_4 = (undefined8 *)0x0;
                }
                else {
code_r0x0010a009:
                  if (*pcVar31 == '/') {
code_r0x0010a228:
                    *(undefined8 *)(puVar25 + -8) = 0x10a230;
                    param_4 = (undefined8 *)xstrdup(pcVar31);
                  }
                  else {
                    *(undefined8 *)(puVar25 + -8) = 0x10a01b;
                    puVar24 = (uint *)dir_len(pcVar28);
                    if (puVar24 == (uint *)0x0) goto code_r0x0010a228;
                    puStack920 = puVar24;
                    *(undefined8 *)(puVar25 + -8) = 0x10a033;
                    lVar11 = func_0x00103400(pcVar31);
                    lVar11 = (long)puStack920 + lVar11 + 2;
                    *(undefined8 *)(puVar25 + -8) = 0x10a044;
                    param_4 = (undefined8 *)xmalloc(lVar11);
                    puVar24 = puStack920;
                    if (*(char *)((long)pcVar28 + -1 + (long)puStack920) != '/') {
                      puVar24 = (uint *)((long)puStack920 + 1);
                    }
                    *(undefined8 *)(puVar25 + -8) = 0x10a065;
                    uVar15 = func_0x001036f0(param_4,pcVar28,puVar24);
                    *(undefined8 *)(puVar25 + -8) = 0x10a070;
                    func_0x001032e0(uVar15);
                  }
                  if (param_4 == (undefined8 *)0x0) goto code_r0x0010a2e0;
                  if (*(int *)((long)puVar3 + 0xc4) == 0) {
                    uVar15 = puVar3[1];
                    *(undefined8 *)(puVar25 + -8) = 0x10a399;
                    cVar7 = needs_quoting(uVar15);
                    if (cVar7 != '\0') {
                      *(undefined4 *)((long)puVar3 + 0xc4) = 0xffffffff;
                    }
                  }
                  if ((1 < indicator_style) || (check_symlink_mode != '\0')) {
                    *(undefined8 *)(puVar25 + -8) = 0x10a0e4;
                    iVar10 = func_0x00103640(1,param_4,auStack904);
                    if (iVar10 == 0) {
                      *(undefined *)((long)puVar3 + 0xb9) = 1;
                      *(undefined4 *)((long)puVar3 + 0xac) = uStack880;
                    }
                  }
                }
                *(undefined8 *)(puVar25 + -8) = 0x10a0a8;
                func_0x00103880(param_4);
                uVar9 = *(uint *)(puVar3 + 6) & 0xf000;
                if (uVar9 != 0xa000) goto code_r0x0010989f;
              }
              *(undefined4 *)(puVar3 + 0x15) = 6;
            }
            uVar15 = puVar3[0xb];
            if ((format == 0) || (print_block_size != '\0')) {
              puVar30 = auStack728;
              *(undefined8 *)(puVar25 + -8) = 0x1098ef;
              uVar12 = human_readable(uVar15,puVar30,(ulong)human_output_opts);
              *(undefined8 *)(puVar25 + -8) = 0x1098f9;
              iVar10 = gnu_mbswidth(uVar12,0);
              if (block_size_width < iVar10) {
                block_size_width = iVar10;
              }
              if (format == 0) {
                if (print_owner != '\0') {
                  uVar9 = *(uint *)((long)puVar3 + 0x34);
                  *(undefined8 *)(puVar25 + -8) = 0x10a138;
                  iVar10 = format_user_width((ulong)uVar9);
                  if (owner_width < iVar10) {
                    owner_width = iVar10;
                  }
                }
                if (print_group != '\0') {
                  pcVar31 = (char *)(ulong)*(uint *)(puVar3 + 7);
                  if (numeric_ids == '\0') {
                    *(undefined8 *)(puVar25 + -8) = 0x10a368;
                    lVar11 = getgroup(pcVar31);
                    if (lVar11 == 0) goto code_r0x0010a1a1;
                    *(undefined8 *)(puVar25 + -8) = 0x10a37b;
                    iVar10 = gnu_mbswidth(lVar11,0);
                    if (iVar10 < 0) {
                      iVar10 = 0;
                    }
                  }
                  else {
code_r0x0010a1a1:
                    *(undefined8 *)(puVar25 + -8) = 0x10a1bf;
                    func_0x00103870(puVar30,1,0x15);
                    puVar24 = puVar30;
                    do {
                      puVar16 = puVar24;
                      uVar9 = *puVar16 + 0xfefefeff & ~*puVar16;
                      uVar22 = uVar9 & 0x80808080;
                      puVar24 = puVar16 + 1;
                    } while (uVar22 == 0);
                    bVar32 = (uVar9 & 0x8080) == 0;
                    bVar6 = (byte)uVar22;
                    if (bVar32) {
                      bVar6 = (byte)(uVar22 >> 0x10);
                    }
                    iVar10 = (int)(puVar16 + 1);
                    if (bVar32) {
                      iVar10 = (int)puVar16 + 6;
                    }
                    iVar10 = ((iVar10 + -3) - (uint)CARRY1(bVar6,bVar6)) - (int)puVar30;
                  }
                  if (group_width < iVar10) {
                    group_width = iVar10;
                  }
                }
                if (print_author != '\0') {
                  uVar9 = *(uint *)((long)puVar3 + 0x34);
                  *(undefined8 *)(puVar25 + -8) = 0x10a170;
                  iVar10 = format_user_width((ulong)uVar9);
                  if (author_width < iVar10) {
                    author_width = iVar10;
                  }
                }
                goto code_r0x0010993c;
              }
              if (print_scontext != '\0') goto code_r0x00109945;
            }
            else {
code_r0x0010993c:
              if (print_scontext != '\0') {
code_r0x00109945:
                uVar12 = puVar3[0x16];
                *(undefined8 *)(puVar25 + -8) = 0x109951;
                iVar10 = func_0x00103400(uVar12);
                if (scontext_width < iVar10) {
                  scontext_width = iVar10;
                }
              }
              if (format == 0) {
                uVar12 = puVar3[5];
                *(undefined8 *)(puVar25 + -8) = 0x109ce0;
                uVar12 = umaxtostr(uVar12,auStack760);
                *(undefined8 *)(puVar25 + -8) = 0x109ce8;
                iVar10 = func_0x00103400(uVar12);
                if (nlink_width < iVar10) {
                  nlink_width = iVar10;
                }
                if ((*(uint *)(puVar3 + 6) & 0xb000) == 0x2000) {
                  uVar12 = puVar3[8];
                  puVar30 = auStack728;
                  uVar9 = (uint)((ulong)uVar12 >> 8) & 0xfff;
                  *(undefined8 *)(puVar25 + -8) = 0x109d3a;
                  uVar12 = umaxtostr((ulong)((uint)((ulong)uVar12 >> 0x20) & 0xfffff000 | uVar9),
                                     puVar30,(ulong)uVar9);
                  *(undefined8 *)(puVar25 + -8) = 0x109d42;
                  iVar10 = func_0x00103400(uVar12);
                  if (major_device_number_width < iVar10) {
                    major_device_number_width = iVar10;
                  }
                  uVar20 = puVar3[8];
                  uVar23 = uVar20 & 0xff;
                  *(undefined8 *)(puVar25 + -8) = 0x109d6b;
                  uVar12 = umaxtostr((ulong)((uint)((uVar20 >> 0x14) << 8) | (uint)uVar23),puVar30,
                                     uVar23);
                  *(undefined8 *)(puVar25 + -8) = 0x109d73;
                  iVar10 = func_0x00103400(uVar12);
                  if (minor_device_number_width < iVar10) {
                    minor_device_number_width = iVar10;
                  }
                  iVar10 = minor_device_number_width + 2 + major_device_number_width;
                  if (file_size_width < iVar10) {
code_r0x00109ef8:
                    file_size_width = iVar10;
                  }
                }
                else {
                  uVar12 = puVar3[9];
                  *(undefined8 *)(puVar25 + -8) = 0x109ee2;
                  uVar12 = human_readable(uVar12,auStack728,(ulong)file_human_output_opts);
                  *(undefined8 *)(puVar25 + -8) = 0x109eec;
                  iVar10 = gnu_mbswidth(uVar12,0);
                  if (file_size_width < iVar10) goto code_r0x00109ef8;
                }
              }
            }
            if (print_inode != '\0') {
              uVar12 = puVar3[4];
              *(undefined8 *)(puVar25 + -8) = 0x109ca8;
              uVar12 = umaxtostr(uVar12,auStack728);
              *(undefined8 *)(puVar25 + -8) = 0x109cb0;
              iVar10 = func_0x00103400(uVar12);
              if (inode_number_width < iVar10) {
                inode_number_width = iVar10;
              }
            }
            goto code_r0x0010997a;
          }
code_r0x00109b58:
          param_4 = puVar3 + 3;
          *(undefined8 *)(puVar25 + -8) = 0x109b6b;
          uVar15 = func_0x001033e0(0,&UNK_001178d4,5);
          *(undefined8 *)(puVar25 + -8) = 0x109b7a;
          file_failure((ulong)puVar30 & 0xff,uVar15,pcVar28);
          uVar15 = 0;
          if (cVar29 == '\0') goto code_r0x0010997a;
        }
        else {
          if (4 < dereference) {
            if (dereference != 5) goto code_r0x00109b40;
code_r0x001097f1:
            *(undefined8 *)(puVar25 + -8) = 0x109801;
            iVar8 = func_0x00103640(1,pcVar28,puVar3 + 3);
            if (iVar8 != 0) goto code_r0x00109b58;
            goto code_r0x00109809;
          }
          if (cVar29 == '\0') goto code_r0x00109b40;
          puStack920 = (uint *)((ulong)puStack920 & 0xffffffff00000000 | (ulong)dereference);
          *(undefined8 *)(puVar25 + -8) = 0x109c5f;
          iVar8 = func_0x00103640(1,pcVar28,param_4);
          if ((int)puStack920 == 3) {
code_r0x00109c87:
            if (iVar8 == 0) goto code_r0x00109809;
          }
          else {
            if (-1 < iVar8) {
              if ((*(uint *)(puVar3 + 6) & 0xf000) != 0x4000) goto code_r0x00109b40;
              goto code_r0x00109c87;
            }
            *(undefined8 *)(puVar25 + -8) = 0x10a275;
            piVar17 = (int *)func_0x001032a0();
            if (*piVar17 == 2) goto code_r0x00109b40;
          }
          *(undefined8 *)(puVar25 + -8) = 0x10a291;
          uVar15 = func_0x001033e0(0,&UNK_001178d4,5);
          *(undefined8 *)(puVar25 + -8) = 0x10a2a1;
          file_failure(1,uVar15,pcVar28);
          uVar15 = 0;
        }
      }
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar15;
      }
      *(undefined8 *)(puVar25 + -8) = 0x10a3d9;
      func_0x00103420();
    }
    *(undefined8 *)(puVar25 + -8) = 0x10a3de;
    lVar11 = xalloc_die();
code_r0x0010a3de:
    bVar32 = true;
    puVar5 = puVar25;
  } while( true );
}

