
undefined8 main(uint param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined1 *unaff_RBP;
  undefined4 *puVar20;
  undefined4 *puVar21;
  long *plVar22;
  byte bVar23;
  char cVar24;
  long *unaff_R13;
  undefined1 *unaff_R14;
  undefined1 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar25;
  byte bVar26;
  undefined8 uStack328;
  undefined *puStack320;
  undefined auStack312 [8];
  uint uStack304;
  undefined8 uStack64;
  
  bVar26 = 0;
  puVar19 = (undefined8 *)auStack312;
  uStack64 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack320 = &UNK_0010209a;
  uStack304 = param_1;
  set_program_name(*param_2);
  puStack320 = &UNK_001020ab;
  func_0x00101e20(6,&UNK_001170c1);
  puStack320 = &UNK_001020be;
  func_0x00101be0(&UNK_001160a7,&UNK_001160d0);
  puStack320 = &UNK_001020ca;
  func_0x00101ba0(&UNK_001160a7);
  puStack320 = &UNK_001020d6;
  atexit(close_stdout);
  remove_files = 1;
  controls = (undefined8 *)0x0;
  control_used = 0;
  suppress_count = 0;
  suppress_matched = '\0';
  prefix = &UNK_001160e8;
  global_argv = param_2;
code_r0x00102120:
  puStack320 = &UNK_00102139;
  iVar3 = func_0x00101c30((ulong)uStack304,param_2,&UNK_00116116,longopts,0);
  if (iVar3 != -1) {
    if (iVar3 == 0x6b) {
      remove_files = 0;
      goto code_r0x00102120;
    }
    if (0x6b < iVar3) {
      if (iVar3 != 0x73) {
        if (0x73 < iVar3) {
          if (iVar3 == 0x7a) {
            elide_empty_files = 1;
          }
          else {
            puVar18 = auStack312;
            if (iVar3 != 0x80) goto code_r0x00102d8f;
            suppress_matched = '\x01';
          }
          goto code_r0x00102120;
        }
        if (iVar3 == 0x6e) {
          puStack320 = &UNK_001021c8;
          func_0x00101bf0(0,&UNK_001160eb,5);
          puStack320 = &UNK_001021e8;
          digits = xdectoimax(optarg,0,0x7fffffff,&UNK_001170c1);
          goto code_r0x00102120;
        }
        puVar18 = auStack312;
        if (iVar3 != 0x71) goto code_r0x00102d8f;
      }
      suppress_count = 1;
      goto code_r0x00102120;
    }
    puVar18 = auStack312;
    if (iVar3 == -0x82) goto code_r0x00102d99;
    if (iVar3 < -0x81) {
      puVar18 = auStack312;
      if (iVar3 != -0x83) goto code_r0x00102d8f;
      puVar19 = &uStack328;
      uStack328 = 0;
      version_etc(stdout,&UNK_00116026,&UNK_001160a3,Version,&UNK_0011610a,&UNK_001160fa);
      func_0x00101ee0(0);
      goto code_r0x00102291;
    }
    if (iVar3 == 0x62) {
      suffix = optarg;
    }
    else {
      puVar18 = auStack312;
      if (iVar3 != 0x66) goto code_r0x00102d8f;
      prefix = optarg;
    }
    goto code_r0x00102120;
  }
code_r0x00102291:
  uVar6 = optind;
  puVar18 = (undefined *)puVar19;
  if (1 < (int)(*(int *)((undefined *)puVar19 + 8) - optind)) {
    uVar13 = 0xffffffffffffffff;
    pbVar14 = prefix;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      bVar23 = *pbVar14;
      pbVar14 = pbVar14 + (ulong)bVar26 * -2 + 1;
    } while (bVar23 != 0);
    plVar17 = (long *)(~uVar13 - 1);
    if (suffix == (byte *)0x0) {
      if (digits < 10) goto code_r0x00102b9b;
      uVar13 = SEXT48((int)digits);
      if (uVar13 <= -(long)plVar17 - 2U) goto code_r0x0010233f;
code_r0x00102ad7:
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102adc;
      uVar11 = xalloc_die();
      do {
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ae4;
        save_line_to_file(uVar11);
code_r0x001026e6:
        do {
          bVar23 = (byte)param_2;
          current_line = current_line + 1;
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x1026fd;
          plVar22 = (long *)find_line();
          if (plVar22 == (long *)0x0) goto code_r0x00102702;
          lVar7 = *plVar22;
          lVar8 = plVar22[1];
          lVar15 = lVar7 + -1;
          if (*(char *)(lVar8 + -1 + lVar7) != '\n') {
            lVar15 = lVar7;
          }
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x1026c4;
          lVar7 = rpl_re_search(unaff_RBP,lVar8,lVar15,0,lVar15,0);
          if (lVar7 == -2) goto code_r0x00102e0a;
          if (lVar7 != -1) {
code_r0x00102a14:
            unaff_RBP = (undefined1 *)(current_line + *plVar17);
            *(undefined1 **)((undefined *)puVar19 + 0x10) = unaff_RBP;
            *(undefined4 *)((undefined *)puVar19 + 0x18) = *(undefined4 *)(plVar17 + 3);
            *(undefined8 *)((undefined *)puVar19 + -8) = 0x102a32;
            plVar22 = (long *)get_first_line_in_buffer();
            if (unaff_RBP < plVar22) goto code_r0x00102f10;
            unaff_R13 = (long *)(*(long *)((undefined *)puVar19 + 0x10) - (long)plVar22);
            if (unaff_R13 != (long *)0x0) {
              unaff_RBP = (undefined1 *)0x0;
              do {
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x102a5e;
                lVar7 = remove_line();
                if (lVar7 == 0) goto code_r0x00102ecf;
                if (bVar23 == 0) {
                  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102a74;
                  save_line_to_file();
                }
                unaff_RBP = (undefined1 *)((long)unaff_RBP + 1);
              } while (unaff_R13 != (long *)unaff_RBP);
            }
            if (bVar23 == 0) {
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c14;
              close_output_file();
            }
            if (0 < *plVar17) {
              current_line = *(long *)((undefined *)puVar19 + 0x10);
            }
            unaff_R14 = (undefined1 *)((long)unaff_R14 + 1);
code_r0x00102658:
            plVar17 = (long *)((long)controls + (long)unaff_R15);
            if ((*(char *)((long)plVar17 + 0x1c) == '\0') &&
               (param_2 = controls,
               (long *)plVar17[2] <= unaff_R14 && (long *)unaff_R14 != (long *)plVar17[2]))
            goto code_r0x00102a09;
            bVar23 = *(byte *)((long)plVar17 + 0x1d);
            param_2 = (undefined8 *)(ulong)bVar23;
            if (bVar23 == 0) {
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102aa6;
              create_output_file();
            }
            if ((suppress_matched != '\0') && (current_line != 0)) {
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c0a;
              remove_line();
            }
            unaff_RBP = (undefined1 *)(plVar17 + 4);
            if (*plVar17 < 0) {
              while( true ) {
                current_line = current_line + 1;
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x10290f;
                plVar22 = (long *)find_line();
                if (plVar22 == (long *)0x0) break;
                lVar7 = *plVar22;
                lVar8 = plVar22[1];
                lVar15 = lVar7 + -1;
                if (*(char *)(lVar8 + -1 + lVar7) != '\n') {
                  lVar15 = lVar7;
                }
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x1028e4;
                lVar7 = rpl_re_search(unaff_RBP,lVar8,lVar15,0,lVar15,0);
                if (lVar7 == -2) goto code_r0x00102e0a;
                if (lVar7 != -1) goto code_r0x00102a14;
              }
code_r0x00102702:
              if (*(char *)((long)plVar17 + 0x1c) != '\0') {
                if ((char)param_2 == '\0') {
                  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102716;
                  dump_rest_of_file();
                  *(undefined8 *)((undefined *)puVar19 + -8) = 0x10271b;
                  close_output_file();
                }
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x102722;
                func_0x00101ee0(0);
                do {
                  uVar13 = 0xffffffffffffffff;
                  plVar22 = (long *)unaff_RBP;
                  do {
                    if (uVar13 == 0) break;
                    uVar13 = uVar13 - 1;
                    cVar24 = *(char *)plVar22;
                    plVar22 = (long *)((long)plVar22 + (ulong)bVar26 * -2 + 1);
                  } while (cVar24 != '\0');
                  unaff_R13 = (long *)((long)unaff_RBP + (~uVar13 - 2));
                  if (*(char *)unaff_R13 != '}') goto code_r0x00102e6a;
                  *(char *)unaff_R13 = '\0';
                  if (((char *)((long)unaff_RBP + 1) == (char *)((long)unaff_R13 + -1)) &&
                     (*(char *)((long)unaff_RBP + 1) == '*')) {
                    *(char *)((long)unaff_R14 + 0x1c) = '\x01';
                  }
                  else {
                    *(undefined8 *)((undefined *)puVar19 + -8) = 0x10276d;
                    iVar3 = xstrtoumax((char *)((long)unaff_RBP + 1),0,10,
                                       *(undefined8 *)((undefined *)puVar19 + 0x28),&UNK_001170c1);
                    if (iVar3 != 0) goto code_r0x00102e30;
                    ((long *)unaff_R14)[2] = *(long *)((undefined *)puVar19 + 0x38);
                  }
                  iVar4 = (int)plVar17 + 2;
                  iVar3 = *(int *)((undefined *)puVar19 + 8);
                  iVar1 = *(int *)((undefined *)puVar19 + 8);
                  *(char *)unaff_R13 = '}';
                  if (iVar1 == iVar4 || iVar3 < iVar4) goto code_r0x00102568;
                  unaff_RBP = *(undefined1 **)((long)param_2 + (long)((long)unaff_R15 + 8U));
                  do {
                    plVar17 = (long *)(long)iVar4;
                    *(long **)((undefined *)puVar19 + 0x10) = plVar17;
                    cVar24 = *unaff_RBP;
                    unaff_R15 = (undefined1 *)
                                ((ulong)unaff_R15 & 0xffffffffffffff00 | (ulong)(cVar24 == '%'));
                    if (cVar24 == '/') {
code_r0x00102478:
                      unaff_R14 = (undefined1 *)(ulong)(uint)(int)cVar24;
                      *(char **)((undefined *)puVar19 + 0x18) = (char *)((long)unaff_RBP + 1);
                      *(undefined8 *)((undefined *)puVar19 + -8) = 0x10248f;
                      unaff_R13 = (long *)func_0x00101c70((char *)((long)unaff_RBP + 1),
                                                          (ulong)(uint)(int)cVar24);
                      if (unaff_R13 == (long *)0x0) goto code_r0x00102cf4;
                      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1024a0;
                      unaff_R14 = (undefined1 *)new_control_record();
                      *(char *)((long)unaff_R14 + 0x1d) = (char)unaff_R15;
                      *(uint *)((long *)unaff_R14 + 3) = (uint)plVar17;
                      *(char *)((long)unaff_R14 + 0x1e) = '\x01';
                      ((long *)unaff_R14)[4] = 0;
                      ((long *)unaff_R14)[5] = 0;
                      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1024c8;
                      lVar7 = xmalloc(0x100);
                      uVar11 = *(undefined8 *)((undefined *)puVar19 + 0x18);
                      ((long *)unaff_R14)[8] = lVar7;
                      ((long *)unaff_R14)[9] = 0;
                      rpl_re_syntax_options = 0x2c6;
                      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1024f7;
                      unaff_R15 = (undefined1 *)
                                  rpl_re_compile_pattern
                                            (uVar11,(long)unaff_R13 + (-1 - (long)unaff_RBP),
                                             (long *)unaff_R14 + 4);
                      if (unaff_R15 != (undefined1 *)0x0) goto code_r0x00102cbd;
                      if (*(char *)((long)unaff_R13 + 1) != '\0') {
                        *(undefined8 *)((undefined *)puVar19 + -8) = 0x102528;
                        iVar3 = xstrtoimax((char *)((long)unaff_R13 + 1),0,10,unaff_R14,
                                           &UNK_001170c1);
                        if (iVar3 != 0) {
                          *(undefined8 *)((undefined *)puVar19 + -8) = 0x102538;
                          uVar11 = quote(unaff_RBP);
                          *(undefined8 *)((undefined *)puVar19 + -8) = 0x10254e;
                          uVar12 = func_0x00101bf0(0,&UNK_00116988,5);
                          *(undefined8 *)((undefined *)puVar19 + -8) = 0x102562;
                          func_0x00101e60(1,0,uVar12,uVar11);
                          goto code_r0x00102568;
                        }
                      }
                    }
                    else {
code_r0x001023c0:
                      if ((char)unaff_R15 != '\0') goto code_r0x00102478;
                      unaff_RBP = (undefined1 *)(param_2 + *(long *)((undefined *)puVar19 + 0x10));
                      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1023d7;
                      unaff_R14 = (undefined1 *)new_control_record();
                      uVar11 = *(undefined8 *)((undefined *)puVar19 + 0x20);
                      lVar7 = *(long *)unaff_RBP;
                      *(uint *)((long *)unaff_R14 + 3) = (uint)plVar17;
                      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1023f9;
                      iVar3 = xstrtoumax(lVar7,0,10,uVar11,&UNK_001170c1);
                      if (iVar3 != 0) goto code_r0x00102c8a;
                      uVar13 = *(ulong *)((undefined *)puVar19 + 0x30);
                      if (uVar13 == 0) goto code_r0x00102c5f;
                      if (uVar13 < last_val_7392) goto code_r0x00102d1e;
                      if (uVar13 == last_val_7392) {
                        lVar7 = *(long *)unaff_RBP;
                        *(undefined8 *)((undefined *)puVar19 + -8) = 0x1027a3;
                        quote(lVar7);
                        *(undefined8 *)((undefined *)puVar19 + -8) = 0x1027b9;
                        uVar11 = func_0x00101bf0(0,&UNK_00116a20,5);
                        *(undefined8 *)((undefined *)puVar19 + -8) = 0x1027ca;
                        func_0x00101e60(0,0,uVar11);
                        uVar13 = *(ulong *)((undefined *)puVar19 + 0x30);
                      }
                      last_val_7392 = uVar13;
                      ((long *)unaff_R14)[1] = uVar13;
                    }
                    iVar4 = (int)plVar17 + 1;
                    if (*(int *)((undefined *)puVar19 + 8) == iVar4 ||
                        *(int *)((undefined *)puVar19 + 8) < iVar4) goto code_r0x00102568;
                    unaff_R13 = (long *)(*(long *)((undefined *)puVar19 + 0x10) + 1);
                    unaff_RBP = (undefined1 *)param_2[(long)unaff_R13];
                    unaff_R15 = (undefined1 *)((long)unaff_R13 * 8);
                  } while (*unaff_RBP != '{');
                } while( true );
              }
              goto code_r0x00102e9c;
            }
            goto code_r0x001026e6;
          }
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x1026dd;
          uVar11 = remove_line();
        } while (bVar23 != 0);
      } while( true );
    }
    bVar2 = false;
    bVar23 = *suffix;
    pbVar14 = suffix;
    if (bVar23 != 0) {
code_r0x001022f5:
      bVar25 = bVar23 == 0x25;
      pbVar9 = pbVar14 + 1;
      bVar23 = pbVar14[1];
      if (bVar25) {
        if (bVar23 != 0x25) goto code_r0x00102942;
        bVar23 = pbVar14[2];
        pbVar9 = pbVar14 + 2;
      }
code_r0x001022ea:
      pbVar14 = pbVar9;
      if (bVar23 == 0) {
        if (bVar2) {
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x102acc;
          iVar3 = func_0x00101ae0(0,0,1);
          uVar13 = SEXT48(iVar3);
          if (-1 < iVar3) {
code_r0x0010233f:
            do {
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102349;
              filename_space = xmalloc((long)plVar17 + uVar13 + 1);
              uVar11 = param_2[(int)optind];
              uVar6 = optind + 1;
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102375;
              optind = uVar6;
              iVar3 = func_0x00101d40(uVar11,&UNK_00116b8a);
              if (iVar3 == 0) {
code_r0x0010237d:
                plVar17 = (long *)(ulong)uVar6;
                if (*(int *)((undefined *)puVar19 + 8) <= (int)uVar6) goto code_r0x00102568;
                unaff_RBP = (undefined1 *)param_2[(long)(int)uVar6];
                *(long *)((undefined *)puVar19 + 0x10) = (long)(int)uVar6;
                *(undefined **)((undefined *)puVar19 + 0x20) = (undefined *)puVar19 + 0x30;
                *(undefined **)((undefined *)puVar19 + 0x28) = (undefined *)puVar19 + 0x38;
                cVar24 = *unaff_RBP;
                unaff_R15 = (undefined1 *)
                            ((ulong)unaff_R15 & 0xffffffffffffff00 | (ulong)(cVar24 == '%'));
                if (cVar24 == '/') goto code_r0x00102478;
                goto code_r0x001023c0;
              }
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102af7;
              iVar3 = fd_reopen(0,uVar11,0);
              uVar6 = optind;
              if (-1 < iVar3) goto code_r0x0010237d;
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102b12;
              unaff_RBP = (undefined1 *)quotearg_style(4,uVar11);
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102b28;
              plVar17 = (long *)func_0x00101bf0(0,&UNK_0011614a,5);
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102b30;
              puVar10 = (uint *)func_0x00101b20();
              pbVar9 = (byte *)(ulong)*puVar10;
              uVar6 = 1;
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102b44;
              func_0x00101e60(1,pbVar9,plVar17);
code_r0x00102b44:
              cVar24 = (char)unaff_R13;
              if (cVar24 == 'X') goto code_r0x001029cf;
              if (cVar24 == 'd') goto code_r0x00102bf8;
              if (cVar24 == '\0') {
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f35;
                uVar11 = func_0x00101bf0(0,&UNK_00116878,5);
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f46;
                func_0x00101e60(1,0,uVar11);
                goto code_r0x00102f46;
              }
code_r0x00102b61:
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102b66;
              plVar22 = (long *)func_0x00101f50();
              if ((*(byte *)(*plVar22 + 1 + (long)unaff_RBP * 2) & 0x40) == 0) {
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c27;
                uVar11 = func_0x00101bf0(0,&UNK_001168d0,5);
                *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c3b;
                func_0x00101e60(1,0,uVar11,(ulong)unaff_R13 & 0xffffffff);
                goto code_r0x00102c3b;
              }
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102b87;
              uVar11 = func_0x00101bf0(0,&UNK_001168a0,5);
              *(undefined8 *)((undefined *)puVar19 + -8) = 0x102b9b;
              func_0x00101e60(1,0,uVar11);
code_r0x00102b9b:
              uVar13 = 10;
            } while( true );
          }
          goto code_r0x00102ad7;
        }
        goto code_r0x00102c3b;
      }
      goto code_r0x001022f5;
    }
code_r0x00102c3b:
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c4e;
    uVar11 = func_0x00101bf0(0,&UNK_00116818,5);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c5f;
    func_0x00101e60(1,0,uVar11);
code_r0x00102c5f:
    lVar7 = *(long *)unaff_RBP;
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c76;
    uVar11 = func_0x00101bf0(0,&UNK_001169b0,5);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c8a;
    func_0x00101e60(1,0,uVar11,lVar7);
code_r0x00102c8a:
    lVar7 = *(long *)unaff_RBP;
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102c93;
    uVar11 = quote(lVar7);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ca9;
    uVar12 = func_0x00101bf0(0,&UNK_00116165,5);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102cbd;
    func_0x00101e60(1,0,uVar12,uVar11);
code_r0x00102cbd:
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102cc5;
    uVar11 = quote(unaff_RBP);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102cdb;
    uVar12 = func_0x00101bf0(0,&UNK_00116960,5);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102cef;
    func_0x00101e60(0,0,uVar12,uVar11,unaff_R15);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102cf4;
    cleanup_fatal();
code_r0x00102cf4:
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d07;
    uVar11 = func_0x00101bf0(0,&UNK_00116938,5);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d1e;
    func_0x00101e60(1,0,uVar11,unaff_RBP,(ulong)unaff_R14 & 0xffffffff);
code_r0x00102d1e:
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d2b;
    param_2 = (undefined8 *)umaxtostr();
    lVar7 = *(long *)unaff_RBP;
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d37;
    uVar11 = quote(lVar7);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d4d;
    uVar12 = func_0x00101bf0(0,&UNK_001169e0,5);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d64;
    uVar6 = func_0x00101e60(1,0,uVar12,uVar11,param_2);
  }
  if ((int)uVar6 < *(int *)((undefined *)puVar19 + 8)) {
code_r0x00102f46:
    unaff_R14 = (undefined1 *)(long)*(int *)((undefined *)puVar19 + 8);
    uVar11 = param_2[(long)unaff_R14 + -1];
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f55;
    uVar11 = quote(uVar11);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f6b;
    uVar12 = func_0x00101bf0(0,&UNK_00116131,5);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f7c;
    func_0x00101e60(0,0,uVar12,uVar11);
  }
  else {
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d81;
    uVar11 = func_0x00101bf0(0,&UNK_00116121,5);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102d8f;
    func_0x00101e60(0,0,uVar11);
  }
code_r0x00102d8f:
  *(undefined8 *)(puVar18 + -8) = 0x102d99;
  usage(1);
code_r0x00102d99:
  puVar19 = (undefined8 *)puVar18;
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102da0;
  usage(0);
code_r0x00102da0:
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102da5;
  func_0x00101c20();
code_r0x00102da5:
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102db8;
  uVar11 = func_0x00101bf0(0,&UNK_00115fe2,5);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102dc0;
  puVar10 = (uint *)func_0x00101b20();
  uVar5 = *puVar10;
  uVar6 = 0;
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102dce;
  func_0x00101e60(0,(ulong)uVar5,uVar11);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102dd3;
  cleanup_fatal();
code_r0x00102dd3:
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102df4;
  uVar11 = func_0x00101bf0(0,&UNK_00116900,5);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e0a;
  func_0x00101e60(1,0,uVar11,(ulong)((-(uint)((uVar6 & 2) == 0) & 4) + 0x23),
                  (ulong)unaff_R13 & 0xffffffff);
code_r0x00102e0a:
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e1d;
  uVar11 = func_0x00101bf0(0,&UNK_00116ab8,5);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e2b;
  func_0x00101e60(0,0,uVar11);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e30;
  cleanup_fatal();
code_r0x00102e30:
  uVar11 = *(undefined8 *)((long)global_argv + (long)unaff_R15);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e40;
  uVar11 = quote(uVar11);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e56;
  uVar12 = func_0x00101bf0(0,&UNK_00116a88,5);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e6a;
  func_0x00101e60(1,0,uVar12,uVar11);
code_r0x00102e6a:
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e72;
  plVar17 = (long *)quote(unaff_RBP);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e88;
  uVar11 = func_0x00101bf0(0,&UNK_00116a60,5);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102e9c;
  func_0x00101e60(1,0,uVar11,plVar17);
code_r0x00102e9c:
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102eab;
  regexp_error(plVar17,unaff_R14,(ulong)param_2 & 0xff);
  goto code_r0x00102eab;
code_r0x00102942:
  if (!bVar2) {
    uVar6 = 0;
    do {
      bVar23 = *pbVar9;
      if (bVar23 == 0x27) {
        uVar6 = uVar6 | 1;
      }
      else {
        if ((char)bVar23 < '(') {
          if (bVar23 != 0x23) {
joined_r0x0010297f:
            while ((int)(char)bVar23 - 0x30U < 10) {
              pbVar9 = pbVar9 + 1;
              bVar23 = *pbVar9;
            }
            if (bVar23 == 0x2e) {
              do {
                pbVar9 = pbVar9 + 1;
              } while ((int)(char)*pbVar9 - 0x30U < 10);
            }
            bVar23 = *pbVar9;
            unaff_RBP = (undefined1 *)(ulong)bVar23;
            unaff_R13 = (long *)unaff_RBP;
            if (bVar23 == 0x69) goto code_r0x00102bf8;
            if ((char)bVar23 < 'j') goto code_r0x00102b44;
            if (bVar23 == 0x75) {
              uVar5 = 1;
              goto code_r0x001029d4;
            }
            if (bVar23 == 0x78) goto code_r0x001029cf;
            if (bVar23 != 0x6f) goto code_r0x00102b61;
            goto code_r0x001029cf;
          }
          uVar6 = uVar6 | 2;
        }
        else {
          if ((bVar23 != 0x2d) && (bVar23 != 0x30)) goto joined_r0x0010297f;
        }
      }
      pbVar9 = pbVar9 + 1;
    } while( true );
  }
code_r0x00102eab:
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ebe;
  uVar11 = func_0x00101bf0(0,&UNK_00116848,5);
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ecf;
  func_0x00101e60(1,0,uVar11);
code_r0x00102ecf:
  uVar11 = global_argv[*(int *)((undefined *)puVar19 + 0x18)];
  do {
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102ee4;
    uVar11 = quote(uVar11);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102efa;
    uVar12 = func_0x00101bf0(0,&UNK_00116179,5);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f0b;
    func_0x00101e60(0,0,uVar12,uVar11);
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x102f10;
    cleanup_fatal();
code_r0x00102f10:
    uVar11 = global_argv[*(int *)((undefined *)puVar19 + 0x18)];
  } while( true );
code_r0x001029cf:
  uVar5 = 2;
  goto code_r0x001029d4;
code_r0x00102bf8:
  *pbVar9 = 0x75;
  uVar5 = 1;
code_r0x001029d4:
  uVar6 = uVar6 & ~uVar5;
  if (uVar6 != 0) goto code_r0x00102dd3;
  bVar23 = pbVar9[1];
  pbVar9 = pbVar9 + 1;
  bVar2 = true;
  goto code_r0x001022ea;
code_r0x00102568:
  puVar16 = sig_7486;
  unaff_R13 = (long *)((undefined *)puVar19 + 0x40);
  unaff_R15 = caught_signals;
  unaff_RBP = sig_7486;
  *(undefined8 *)((undefined *)puVar19 + -8) = 0x10258e;
  func_0x00101d60(caught_signals);
  do {
    uVar6 = *(uint *)unaff_RBP;
    *(undefined8 *)((undefined *)puVar19 + -8) = 0x10259f;
    func_0x00101b80((ulong)uVar6,0,unaff_R13);
    if (*(long *)((undefined *)puVar19 + 0x40) != 1) {
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x1025b2;
      func_0x00101f30();
    }
    unaff_RBP = (undefined1 *)((long)unaff_RBP + 4);
  } while (unaff_RBP != &UNK_00116b2c);
  lVar7 = 0x20;
  *(undefined4 *)((undefined *)puVar19 + 200) = 0;
  unaff_R14 = caught_signals;
  *(undefined8 *)((undefined *)puVar19 + 0x40) = 0x1035e0;
  puVar20 = (undefined4 *)caught_signals;
  puVar21 = (undefined4 *)((undefined *)puVar19 + 0x48);
  while (lVar7 != 0) {
    lVar7 = lVar7 + -1;
    *puVar21 = *puVar20;
    puVar20 = puVar20 + (ulong)bVar26 * 0x3ffffffffffffffe + 1;
    puVar21 = puVar21 + (ulong)bVar26 * 0x3ffffffffffffffe + 1;
  }
  do {
    while( true ) {
      uVar6 = *(uint *)puVar16;
      param_2 = (undefined8 *)(ulong)uVar6;
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102607;
      iVar3 = func_0x00101ed0(caught_signals);
      if (iVar3 == 0) break;
      puVar16 = (undefined1 *)((uint *)puVar16 + 1);
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x10261c;
      func_0x00101b80((ulong)uVar6,unaff_R13,0);
      if (puVar16 == &UNK_00116b2c) goto code_r0x00102621;
    }
    puVar16 = (undefined1 *)((uint *)puVar16 + 1);
  } while (puVar16 != &UNK_00116b2c);
code_r0x00102621:
  *(undefined8 *)((undefined *)puVar19 + 8) = 0;
  while( true ) {
    if (control_used <= *(ulong *)((undefined *)puVar19 + 8)) {
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102baa;
      create_output_file();
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102baf;
      dump_rest_of_file();
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102bb4;
      close_output_file();
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102bbb;
      iVar3 = func_0x00101cc0(0);
      if (iVar3 != 0) goto code_r0x00102da5;
      if (*(long *)((undefined *)puVar19 + 0xf8) == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
      goto code_r0x00102da0;
    }
    lVar7 = *(long *)((undefined *)puVar19 + 8);
    unaff_R15 = (undefined1 *)(lVar7 * 0x60);
    unaff_R14 = (undefined1 *)0x0;
    if (*(char *)((long)controls + (long)((long)unaff_R15 + 0x1eU)) != '\0') break;
    while ((param_2 = controls + lVar7 * 0xc, *(char *)((long)param_2 + 0x1c) != '\0' ||
           (unaff_R14 < (long *)param_2[2] || (long *)unaff_R14 == (long *)param_2[2]))) {
      lVar8 = param_2[1];
      unaff_R13 = (long *)((long)unaff_R14 + 1);
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102847;
      create_output_file();
      unaff_RBP = (undefined1 *)(lVar8 * (long)unaff_R13);
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x10285b;
      lVar8 = find_line(current_line + 1);
      unaff_R14 = (undefined1 *)unaff_R13;
      if ((lVar8 == 0) && (suppress_matched != '\0')) goto code_r0x00102926;
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102869;
      plVar22 = (long *)get_first_line_in_buffer();
      plVar17 = (long *)((long)plVar22 + 1);
      if (unaff_RBP < plVar22 || (long *)((long)unaff_RBP - (long)plVar22) == (long *)0x0) {
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x1027ea;
        close_output_file();
      }
      else {
        unaff_RBP = (undefined1 *)((long)unaff_RBP + 1);
        do {
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x102885;
          lVar8 = remove_line();
          if (lVar8 == 0) goto code_r0x00102926;
          plVar17 = (long *)((long)plVar17 + 1);
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x10289a;
          save_line_to_file(lVar8);
        } while (plVar17 != (long *)unaff_RBP);
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x1028a4;
        close_output_file();
      }
      if (suppress_matched != '\0') {
        *(undefined8 *)((undefined *)puVar19 + -8) = 0x1028b6;
        remove_line();
      }
      *(undefined8 *)((undefined *)puVar19 + -8) = 0x102810;
      lVar8 = find_line();
      if (lVar8 == 0) {
        while (suppress_matched == '\0') {
code_r0x00102926:
          *(undefined8 *)((undefined *)puVar19 + -8) = 0x102933;
          handle_line_error_isra_1();
        }
      }
    }
code_r0x00102a09:
    *(long *)((undefined *)puVar19 + 8) = *(long *)((undefined *)puVar19 + 8) + 1;
  }
  goto code_r0x00102658;
}

