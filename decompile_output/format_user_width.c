
/* WARNING: Could not reconcile some variable overlaps */

ulong format_user_width(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  uint *puVar14;
  int *piVar15;
  char cVar16;
  char cVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  ulong extraout_RDX;
  uint *puVar22;
  uint *unaff_RBX;
  undefined *puVar23;
  char *pcVar24;
  ulong uVar25;
  undefined8 *puVar26;
  uint *puVar27;
  char *pcVar28;
  char *pcVar29;
  char cVar30;
  char *pcVar31;
  long in_FS_OFFSET;
  bool bVar32;
  byte bVar33;
  undefined auStack992 [14];
  char cStack978;
  char cStack977;
  uint *puStack976;
  char *pcStack968;
  undefined auStack960 [24];
  undefined4 uStack936;
  undefined auStack816 [32];
  uint auStack784 [166];
  long lStack120;
  undefined *puStack104;
  undefined *puStack64;
  uint auStack56 [6];
  ulong uStack32;
  
  bVar33 = 0;
  puVar27 = auStack56;
  uStack32 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (numeric_ids == '\0') {
    puStack64 = &UNK_0010965d;
    pcStack968 = (char *)getuser();
    if (pcStack968 != (char *)0x0) {
      puStack64 = &UNK_00109670;
      uVar18 = gnu_mbswidth(pcStack968,0);
      if ((int)uVar18 < 0) {
        uVar18 = 0;
      }
      goto code_r0x0010963e;
    }
  }
  puStack64 = &UNK_00109602;
  func_0x00103870(auStack56,1,0x15);
  puVar22 = auStack56;
  do {
    puVar14 = puVar22;
    uVar19 = *puVar14 + 0xfefefeff & ~*puVar14;
    uVar20 = uVar19 & 0x80808080;
    puVar22 = puVar14 + 1;
  } while (uVar20 == 0);
  bVar32 = (uVar19 & 0x8080) == 0;
  bVar5 = (byte)uVar20;
  if (bVar32) {
    bVar5 = (byte)(uVar20 >> 0x10);
  }
  param_4 = (undefined8 *)((long)puVar14 + 6);
  iVar8 = (int)(puVar14 + 1);
  if (bVar32) {
    iVar8 = (int)param_4;
  }
  uVar18 = (ulong)(((iVar8 + -3) - (uint)CARRY1(bVar5,bVar5)) - ((int)register0x00000020 + -0x38));
  unaff_RBX = auStack56;
  pcStack968 = (char *)puVar27;
code_r0x0010963e:
  uVar25 = uStack32 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  uVar19 = (uint)uVar25;
  if (uVar25 == 0) {
    return uVar18;
  }
  puStack64 = &UNK_00109681;
  func_0x00103420();
  puStack64 = (undefined *)(param_1 & 0xffffffff);
  puStack104 = (undefined *)unaff_RBX;
  pcVar31 = (char *)(ulong)uVar19;
  puVar27 = (uint *)(extraout_RDX & 0xffffffff);
  puVar23 = auStack992;
  lStack120 = *(long *)(in_FS_OFFSET + 0x28);
  if (cwd_n_used != cwd_n_alloc) goto code_r0x00109728;
  bVar32 = false;
  lVar9 = SUB168(ZEXT816(400) * ZEXT816(cwd_n_used),0);
  puVar23 = auStack992;
  puVar4 = auStack992;
  if (SUB168(ZEXT816(400) * ZEXT816(cwd_n_used) >> 0x40,0) != 0) goto code_r0x0010a3de;
  do {
    puVar23 = puVar4;
    if ((-1 < lVar9) && (!bVar32)) {
      *(undefined8 *)(puVar23 + -8) = 0x109710;
      cwd_file = xrealloc();
      cwd_n_alloc = cwd_n_alloc << 1;
code_r0x00109728:
      pcVar29 = pcStack968;
      puVar2 = (undefined8 *)(cwd_file + cwd_n_used * 200);
      *puVar2 = 0;
      *(undefined8 *)((long)puVar2 + 0xbc) = 0;
      uVar18 = (ulong)(((int)puVar2 - (int)(undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8))
                       + 0xc4U >> 3);
      puVar26 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
      while (uVar18 != 0) {
        uVar18 = uVar18 - 1;
        *puVar26 = 0;
        puVar26 = puVar26 + (ulong)bVar33 * 0x1ffffffffffffffe + 1;
      }
      puVar2[4] = 0;
      iVar8 = (int)pcVar31;
      *(int *)(puVar2 + 0x15) = iVar8;
      *(undefined4 *)((long)puVar2 + 0xc4) = 0xffffffff;
      if ((cwd_some_quoted == '\0') && (align_variable_outer_quotes != '\0')) {
        *(undefined8 *)(puVar23 + -8) = 0x109e8c;
        bVar5 = needs_quoting(pcVar29);
        *(uint *)((long)puVar2 + 0xc4) = (uint)bVar5;
        if (bVar5 != 0) {
          cwd_some_quoted = '\x01';
        }
      }
      cVar30 = (char)puVar27;
      pcVar29 = pcStack968;
      puStack976._0_1_ = print_hyperlink;
      if (cVar30 == '\0') {
        if (print_hyperlink != 0) {
          cVar6 = *pcStack968;
          if ((cVar6 != '/') && (cVar16 = *(char *)param_4, cVar16 != '\0')) goto code_r0x00109db3;
          goto code_r0x00109bfa;
        }
        if (format_needs_stat != '\0') {
code_r0x00109b00:
          cVar6 = *pcStack968;
          pcVar29 = pcStack968;
          if (cVar6 != '/') {
            cVar16 = *(char *)param_4;
            if (cVar16 != '\0') goto code_r0x00109db3;
            goto code_r0x001097cc;
          }
          if (((2 < dereference) && (4 < dereference)) && (dereference == 5)) goto code_r0x001097f1;
          goto code_r0x00109b40;
        }
        if ((iVar8 == 3) && (print_with_color != '\0')) {
          puStack976 = (uint *)((ulong)puStack976 & 0xffffffffffffff00);
          *(undefined8 *)(puVar23 + -8) = 0x10a30e;
          cVar6 = is_colored(0x13);
          if (cVar6 == '\0') {
            *(undefined8 *)(puVar23 + -8) = 0x10a328;
            cVar6 = is_colored(0x12);
            if (cVar6 == '\0') {
              *(undefined8 *)(puVar23 + -8) = 0x10a342;
              cVar6 = is_colored(0x14);
              if (cVar6 == '\0') goto code_r0x001099e0;
            }
          }
          goto code_r0x00109b00;
        }
code_r0x001099e0:
        if (print_inode != '\0') {
          if ((iVar8 == 6) || (iVar8 == 0)) {
code_r0x00109a34:
            if ((dereference != 5) &&
               (((color_symlink_as_referent == '\0' && (check_symlink_mode == '\0')) &&
                (print_inode == '\0')))) {
              if (format_needs_type == '\0') goto code_r0x00109a10;
              if (iVar8 != 0) goto code_r0x00109a74;
            }
          }
          goto code_r0x00109b00;
        }
        if (format_needs_type == '\0') {
code_r0x00109a10:
          uVar13 = 0;
        }
        else {
          if ((iVar8 == 6) || (iVar8 == 0)) goto code_r0x00109a34;
          if (format_needs_type == '\0') goto code_r0x00109a10;
code_r0x00109a74:
          uVar13 = 0;
          if (iVar8 == 5) {
            if (indicator_style != 3) {
              puStack976 = (uint *)((ulong)puStack976 & 0xffffffffffffff00 | (ulong)(byte)puStack976
                                   );
              if (print_with_color == '\0') goto code_r0x0010997a;
              *(undefined8 *)(puVar23 + -8) = 0x109aa8;
              cVar6 = is_colored(0xe);
              if (cVar6 == '\0') {
                *(undefined8 *)(puVar23 + -8) = 0x109abe;
                cVar6 = is_colored(0x10);
                if (cVar6 == '\0') {
                  *(undefined8 *)(puVar23 + -8) = 0x109ad4;
                  cVar6 = is_colored(0x11);
                  if (cVar6 == '\0') {
                    *(undefined8 *)(puVar23 + -8) = 0x109aea;
                    cVar6 = is_colored(0x15);
                    if (cVar6 == '\0') goto code_r0x0010997a;
                  }
                }
              }
            }
            goto code_r0x00109b00;
          }
        }
code_r0x0010997a:
        pcVar29 = pcStack968;
        *(undefined8 *)(puVar23 + -8) = 0x109986;
        uVar10 = xstrdup(pcVar29);
        cwd_n_used = cwd_n_used + 1;
        *puVar2 = uVar10;
      }
      else {
        cVar6 = *pcStack968;
        bVar5 = print_hyperlink;
        if ((cVar6 != '/') && (cVar16 = *(char *)param_4, cVar16 != '\0')) {
code_r0x00109db3:
          pcVar29 = pcStack968;
          cStack978 = cVar6;
          cStack977 = cVar16;
          puStack976 = (uint *)((ulong)puStack976 & 0xffffffffffffff00 | (ulong)(byte)puStack976);
          *(undefined8 *)(puVar23 + -8) = 0x109dd2;
          lVar9 = func_0x00103400(pcVar29);
          *(undefined8 *)(puVar23 + -8) = 0x109ddd;
          lVar12 = func_0x00103400(param_4);
          cVar6 = *(char *)((long)param_4 + 1);
          lVar9 = -(lVar9 + 0x20 + lVar12 & 0xfffffffffffffff0U);
          pcVar24 = puVar23 + lVar9;
          pcVar24 = puVar23 + lVar9;
          pcVar29 = puVar23 + lVar9;
          pcVar24 = puVar23 + lVar9;
          puVar23 = puVar23 + lVar9;
          puVar26 = param_4;
          pcVar28 = pcVar24;
          cVar17 = cStack977;
          cVar16 = cStack978;
          pcVar3 = pcStack968;
          if ((cStack977 != '.') || (pcVar28 = pcVar24, cVar6 != '\0')) {
            while( true ) {
              pcVar29 = pcVar28 + 1;
              *pcVar28 = cVar17;
              if (cVar6 == '\0') break;
              pcVar1 = (char *)((long)puVar26 + 2);
              puVar26 = (undefined8 *)((long)puVar26 + 1);
              pcVar28 = pcVar29;
              cVar17 = cVar6;
              cVar6 = *pcVar1;
            }
            if ((param_4 < (undefined8 *)((long)puVar26 + 1)) && (*(char *)puVar26 != '/')) {
              *pcVar29 = '/';
              pcVar29 = pcVar28 + 2;
            }
          }
          while (cVar16 != '\0') {
            *pcVar29 = cVar16;
            pcVar29 = pcVar29 + 1;
            cVar16 = pcVar3[1];
            pcVar3 = pcVar3 + 1;
          }
          *pcVar29 = '\0';
          pcVar29 = pcVar24;
          bVar5 = (byte)puStack976;
        }
        if (bVar5 != 0) {
code_r0x00109bfa:
          *(undefined8 *)(puVar23 + -8) = 0x109c07;
          lVar9 = canonicalize_filename_mode(pcVar29,2);
          puVar2[2] = lVar9;
          if (lVar9 == 0) {
            *(undefined8 *)(puVar23 + -8) = 0x109c27;
            uVar13 = func_0x001033e0(0,&UNK_001178bc,5);
            *(undefined8 *)(puVar23 + -8) = 0x109c36;
            file_failure((ulong)puVar27 & 0xff,uVar13,pcVar29);
          }
        }
code_r0x001097cc:
        param_4 = puVar2 + 3;
        if (dereference < 3) {
code_r0x00109b40:
          *(undefined8 *)(puVar23 + -8) = 0x109b50;
          iVar7 = func_0x00103410(1,pcVar29,puVar2 + 3);
          if (iVar7 == 0) {
code_r0x00109809:
            param_4 = puVar2 + 3;
            *(undefined *)(puVar2 + 0x17) = 1;
            if (((iVar8 == 5) || ((*(uint *)(puVar2 + 6) & 0xf000) == 0x8000)) &&
               (print_with_color != '\0')) {
              *(undefined8 *)(puVar23 + -8) = 0x109ba7;
              cVar6 = is_colored(0x15);
              if (cVar6 != '\0') {
                pcVar31 = (char *)puVar2[3];
                *(undefined8 *)(puVar23 + -8) = 0x109bb8;
                puVar11 = (undefined4 *)func_0x001032a0();
                bVar32 = pcVar31 != unsupported_device_10326;
                *puVar11 = 0x5f;
                if (bVar32) {
                  unsupported_device_10326 = pcVar31;
                }
                *(undefined *)(puVar2 + 0x18) = 0;
              }
            }
            if ((format == 0) || (print_scontext != '\0')) {
              *(undefined8 *)(puVar23 + -8) = 0x109847;
              puVar22 = (uint *)func_0x001032a0();
              pcVar31 = (char *)puVar2[3];
              bVar32 = pcVar31 != unsupported_device_10314;
              *puVar22 = 0x5f;
              iVar8 = format;
              if (bVar32) {
                unsupported_device_10314 = pcVar31;
              }
              puVar2[0x16] = 0x320022;
              if (iVar8 != 0) {
                *(undefined4 *)((long)puVar2 + 0xbc) = 0;
                goto code_r0x0010988c;
              }
              if (pcVar31 == unsupported_device_10320) {
                *puVar22 = 0x5f;
                *(undefined4 *)((long)puVar2 + 0xbc) = 0;
                uVar19 = *(uint *)(puVar2 + 6) & 0xf000;
                if (uVar19 != 0xa000) goto code_r0x0010989f;
                goto code_r0x00109fed;
              }
              *puVar22 = 0;
              puStack976 = puVar22;
              *(undefined8 *)(puVar23 + -8) = 0x109f66;
              iVar8 = file_has_acl(pcVar29,param_4);
              bVar5 = 1;
              uVar21 = 2;
              if (iVar8 < 1) {
                if (((*puStack976 - 0x16 & 0xffffffef) == 0) || (*puStack976 == 0x5f)) {
                  unsupported_device_10320 = (char *)puVar2[3];
                }
                bVar5 = 0;
                uVar21 = 0;
              }
              any_has_acl = any_has_acl | bVar5;
              *(undefined4 *)((long)puVar2 + 0xbc) = uVar21;
              if (iVar8 < 0) {
                *(undefined8 *)(puVar23 + -8) = 0x109fa5;
                quotearg_n_style_colon(0,3,pcVar29);
                uVar19 = *puStack976;
                *(undefined8 *)(puVar23 + -8) = 0x109fc2;
                func_0x00103760(0,(ulong)uVar19,&UNK_00119f74);
              }
              uVar19 = *(uint *)(puVar2 + 6) & 0xf000;
              if (uVar19 == 0xa000) {
                if (format == 0) goto code_r0x00109fed;
                goto code_r0x00109fe0;
              }
code_r0x0010989f:
              if (uVar19 == 0x4000) {
                if ((cVar30 == '\0') || (immediate_dirs != '\0')) {
                  *(undefined4 *)(puVar2 + 0x15) = 3;
                }
                else {
                  *(undefined4 *)(puVar2 + 0x15) = 9;
                }
              }
              else {
                *(undefined4 *)(puVar2 + 0x15) = 5;
              }
            }
            else {
code_r0x0010988c:
              uVar19 = *(uint *)(puVar2 + 6) & 0xf000;
              if (uVar19 != 0xa000) goto code_r0x0010989f;
code_r0x00109fe0:
              if (check_symlink_mode != '\0') {
code_r0x00109fed:
                *(undefined8 *)(puVar23 + -8) = 0x109ff9;
                pcVar31 = (char *)areadlink_with_size(pcVar29);
                *(char **)(puVar2 + 1) = pcVar31;
                if (pcVar31 == (char *)0x0) {
                  *(undefined8 *)(puVar23 + -8) = 0x10a2c3;
                  uVar13 = func_0x001033e0(0,&UNK_001178e5,5);
                  *(undefined8 *)(puVar23 + -8) = 0x10a2d2;
                  file_failure((ulong)puVar27 & 0xff,uVar13,pcVar29);
                  pcVar31 = (char *)puVar2[1];
                  if (pcVar31 != (char *)0x0) goto code_r0x0010a009;
code_r0x0010a2e0:
                  param_4 = (undefined8 *)0x0;
                }
                else {
code_r0x0010a009:
                  if (*pcVar31 == '/') {
code_r0x0010a228:
                    *(undefined8 *)(puVar23 + -8) = 0x10a230;
                    param_4 = (undefined8 *)xstrdup(pcVar31);
                  }
                  else {
                    *(undefined8 *)(puVar23 + -8) = 0x10a01b;
                    puVar22 = (uint *)dir_len(pcVar29);
                    if (puVar22 == (uint *)0x0) goto code_r0x0010a228;
                    puStack976 = puVar22;
                    *(undefined8 *)(puVar23 + -8) = 0x10a033;
                    lVar9 = func_0x00103400(pcVar31);
                    lVar9 = (long)puStack976 + lVar9 + 2;
                    *(undefined8 *)(puVar23 + -8) = 0x10a044;
                    param_4 = (undefined8 *)xmalloc(lVar9);
                    puVar22 = puStack976;
                    if (*(char *)((long)pcVar29 + -1 + (long)puStack976) != '/') {
                      puVar22 = (uint *)((long)puStack976 + 1);
                    }
                    *(undefined8 *)(puVar23 + -8) = 0x10a065;
                    uVar13 = func_0x001036f0(param_4,pcVar29,puVar22);
                    *(undefined8 *)(puVar23 + -8) = 0x10a070;
                    func_0x001032e0(uVar13);
                  }
                  if (param_4 == (undefined8 *)0x0) goto code_r0x0010a2e0;
                  if (*(int *)((long)puVar2 + 0xc4) == 0) {
                    uVar13 = puVar2[1];
                    *(undefined8 *)(puVar23 + -8) = 0x10a399;
                    cVar6 = needs_quoting(uVar13);
                    if (cVar6 != '\0') {
                      *(undefined4 *)((long)puVar2 + 0xc4) = 0xffffffff;
                    }
                  }
                  if ((1 < indicator_style) || (check_symlink_mode != '\0')) {
                    *(undefined8 *)(puVar23 + -8) = 0x10a0e4;
                    iVar8 = func_0x00103640(1,param_4,auStack960);
                    if (iVar8 == 0) {
                      *(undefined *)((long)puVar2 + 0xb9) = 1;
                      *(undefined4 *)((long)puVar2 + 0xac) = uStack936;
                    }
                  }
                }
                *(undefined8 *)(puVar23 + -8) = 0x10a0a8;
                func_0x00103880(param_4);
                uVar19 = *(uint *)(puVar2 + 6) & 0xf000;
                if (uVar19 != 0xa000) goto code_r0x0010989f;
              }
              *(undefined4 *)(puVar2 + 0x15) = 6;
            }
            uVar13 = puVar2[0xb];
            if ((format == 0) || (print_block_size != '\0')) {
              puVar27 = auStack784;
              *(undefined8 *)(puVar23 + -8) = 0x1098ef;
              uVar10 = human_readable(uVar13,puVar27,(ulong)human_output_opts);
              *(undefined8 *)(puVar23 + -8) = 0x1098f9;
              iVar8 = gnu_mbswidth(uVar10,0);
              if (block_size_width < iVar8) {
                block_size_width = iVar8;
              }
              if (format == 0) {
                if (print_owner != '\0') {
                  uVar19 = *(uint *)((long)puVar2 + 0x34);
                  *(undefined8 *)(puVar23 + -8) = 0x10a138;
                  iVar8 = format_user_width((ulong)uVar19);
                  if (owner_width < iVar8) {
                    owner_width = iVar8;
                  }
                }
                if (print_group != '\0') {
                  pcVar31 = (char *)(ulong)*(uint *)(puVar2 + 7);
                  if (numeric_ids == '\0') {
                    *(undefined8 *)(puVar23 + -8) = 0x10a368;
                    lVar9 = getgroup(pcVar31);
                    if (lVar9 == 0) goto code_r0x0010a1a1;
                    *(undefined8 *)(puVar23 + -8) = 0x10a37b;
                    iVar8 = gnu_mbswidth(lVar9,0);
                    if (iVar8 < 0) {
                      iVar8 = 0;
                    }
                  }
                  else {
code_r0x0010a1a1:
                    *(undefined8 *)(puVar23 + -8) = 0x10a1bf;
                    func_0x00103870(puVar27,1,0x15);
                    puVar22 = puVar27;
                    do {
                      puVar14 = puVar22;
                      uVar19 = *puVar14 + 0xfefefeff & ~*puVar14;
                      uVar20 = uVar19 & 0x80808080;
                      puVar22 = puVar14 + 1;
                    } while (uVar20 == 0);
                    bVar32 = (uVar19 & 0x8080) == 0;
                    bVar5 = (byte)uVar20;
                    if (bVar32) {
                      bVar5 = (byte)(uVar20 >> 0x10);
                    }
                    iVar8 = (int)(puVar14 + 1);
                    if (bVar32) {
                      iVar8 = (int)puVar14 + 6;
                    }
                    iVar8 = ((iVar8 + -3) - (uint)CARRY1(bVar5,bVar5)) - (int)puVar27;
                  }
                  if (group_width < iVar8) {
                    group_width = iVar8;
                  }
                }
                if (print_author != '\0') {
                  uVar19 = *(uint *)((long)puVar2 + 0x34);
                  *(undefined8 *)(puVar23 + -8) = 0x10a170;
                  iVar8 = format_user_width((ulong)uVar19);
                  if (author_width < iVar8) {
                    author_width = iVar8;
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
                uVar10 = puVar2[0x16];
                *(undefined8 *)(puVar23 + -8) = 0x109951;
                iVar8 = func_0x00103400(uVar10);
                if (scontext_width < iVar8) {
                  scontext_width = iVar8;
                }
              }
              if (format == 0) {
                uVar10 = puVar2[5];
                *(undefined8 *)(puVar23 + -8) = 0x109ce0;
                uVar10 = umaxtostr(uVar10,auStack816);
                *(undefined8 *)(puVar23 + -8) = 0x109ce8;
                iVar8 = func_0x00103400(uVar10);
                if (nlink_width < iVar8) {
                  nlink_width = iVar8;
                }
                if ((*(uint *)(puVar2 + 6) & 0xb000) == 0x2000) {
                  uVar10 = puVar2[8];
                  puVar27 = auStack784;
                  uVar19 = (uint)((ulong)uVar10 >> 8) & 0xfff;
                  *(undefined8 *)(puVar23 + -8) = 0x109d3a;
                  uVar10 = umaxtostr((ulong)((uint)((ulong)uVar10 >> 0x20) & 0xfffff000 | uVar19),
                                     puVar27,(ulong)uVar19);
                  *(undefined8 *)(puVar23 + -8) = 0x109d42;
                  iVar8 = func_0x00103400(uVar10);
                  if (major_device_number_width < iVar8) {
                    major_device_number_width = iVar8;
                  }
                  uVar18 = puVar2[8];
                  uVar25 = uVar18 & 0xff;
                  *(undefined8 *)(puVar23 + -8) = 0x109d6b;
                  uVar10 = umaxtostr((ulong)((uint)((uVar18 >> 0x14) << 8) | (uint)uVar25),puVar27,
                                     uVar25);
                  *(undefined8 *)(puVar23 + -8) = 0x109d73;
                  iVar8 = func_0x00103400(uVar10);
                  if (minor_device_number_width < iVar8) {
                    minor_device_number_width = iVar8;
                  }
                  iVar8 = minor_device_number_width + 2 + major_device_number_width;
                  if (file_size_width < iVar8) {
code_r0x00109ef8:
                    file_size_width = iVar8;
                  }
                }
                else {
                  uVar10 = puVar2[9];
                  *(undefined8 *)(puVar23 + -8) = 0x109ee2;
                  uVar10 = human_readable(uVar10,auStack784,(ulong)file_human_output_opts);
                  *(undefined8 *)(puVar23 + -8) = 0x109eec;
                  iVar8 = gnu_mbswidth(uVar10,0);
                  if (file_size_width < iVar8) goto code_r0x00109ef8;
                }
              }
            }
            if (print_inode != '\0') {
              uVar10 = puVar2[4];
              *(undefined8 *)(puVar23 + -8) = 0x109ca8;
              uVar10 = umaxtostr(uVar10,auStack784);
              *(undefined8 *)(puVar23 + -8) = 0x109cb0;
              iVar8 = func_0x00103400(uVar10);
              if (inode_number_width < iVar8) {
                inode_number_width = iVar8;
              }
            }
            goto code_r0x0010997a;
          }
code_r0x00109b58:
          param_4 = puVar2 + 3;
          *(undefined8 *)(puVar23 + -8) = 0x109b6b;
          uVar13 = func_0x001033e0(0,&UNK_001178d4,5);
          *(undefined8 *)(puVar23 + -8) = 0x109b7a;
          file_failure((ulong)puVar27 & 0xff,uVar13,pcVar29);
          uVar13 = 0;
          if (cVar30 == '\0') goto code_r0x0010997a;
        }
        else {
          if (4 < dereference) {
            if (dereference != 5) goto code_r0x00109b40;
code_r0x001097f1:
            *(undefined8 *)(puVar23 + -8) = 0x109801;
            iVar7 = func_0x00103640(1,pcVar29,puVar2 + 3);
            if (iVar7 != 0) goto code_r0x00109b58;
            goto code_r0x00109809;
          }
          if (cVar30 == '\0') goto code_r0x00109b40;
          puStack976 = (uint *)((ulong)puStack976 & 0xffffffff00000000 | (ulong)dereference);
          *(undefined8 *)(puVar23 + -8) = 0x109c5f;
          iVar7 = func_0x00103640(1,pcVar29,param_4);
          if ((int)puStack976 == 3) {
code_r0x00109c87:
            if (iVar7 == 0) goto code_r0x00109809;
          }
          else {
            if (-1 < iVar7) {
              if ((*(uint *)(puVar2 + 6) & 0xf000) != 0x4000) goto code_r0x00109b40;
              goto code_r0x00109c87;
            }
            *(undefined8 *)(puVar23 + -8) = 0x10a275;
            piVar15 = (int *)func_0x001032a0();
            if (*piVar15 == 2) goto code_r0x00109b40;
          }
          *(undefined8 *)(puVar23 + -8) = 0x10a291;
          uVar13 = func_0x001033e0(0,&UNK_001178d4,5);
          *(undefined8 *)(puVar23 + -8) = 0x10a2a1;
          file_failure(1,uVar13,pcVar29);
          uVar13 = 0;
        }
      }
      if (lStack120 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar13;
      }
      *(undefined8 *)(puVar23 + -8) = 0x10a3d9;
      func_0x00103420();
    }
    *(undefined8 *)(puVar23 + -8) = 0x10a3de;
    lVar9 = xalloc_die();
code_r0x0010a3de:
    bVar32 = true;
    puVar4 = puVar23;
  } while( true );
}

