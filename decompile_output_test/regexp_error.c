
undefined8 regexp_error(long param_1,long param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  uint *puVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  long *plVar25;
  byte bVar26;
  char cVar27;
  undefined1 *unaff_R14;
  undefined1 *unaff_R15;
  long in_FS_OFFSET;
  bool bVar28;
  byte bVar29;
  undefined8 uStack400;
  undefined *puStack392;
  undefined auStack384 [8];
  uint uStack376;
  undefined8 uStack136;
  long lStack120;
  long *plStack112;
  undefined8 uStack104;
  long *plStack96;
  undefined auStack72 [24];
  undefined8 uStack48;
  
  bVar29 = 0;
  puVar21 = (undefined1 *)(ulong)param_3;
  uStack48 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  plVar25 = (long *)quote(*(undefined8 *)((long)global_argv + (long)*(int *)(param_1 + 0x18) * 8));
  uStack104 = program_name;
  uVar7 = func_0x00101bf0(0,&UNK_00115fed,5);
  func_0x00101f00(stderr,1,uVar7,uStack104,plVar25);
  if (param_2 == 0) {
    uStack376 = 10;
    puVar22 = stderr;
    func_0x00101cd0();
  }
  else {
    param_2 = umaxtostr(param_2,auStack72);
    uVar7 = func_0x00101bf0(0,&UNK_00115fbe,5);
    uStack376 = (uint)stderr;
    puVar22 = (undefined8 *)0x1;
    func_0x00101f00(stderr,1,uVar7,param_2);
  }
  if ((char)param_3 == '\0') {
    dump_rest_of_file();
    close_output_file();
  }
  cleanup_fatal();
  puVar20 = (undefined8 *)auStack384;
  uStack136 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack392 = &UNK_0010209a;
  lStack120 = param_2;
  plStack112 = (long *)puVar21;
  plStack96 = plVar25;
  set_program_name(*puVar22);
  puStack392 = &UNK_001020ab;
  func_0x00101e20(6,&UNK_001170c1);
  puStack392 = &UNK_001020be;
  func_0x00101be0(&UNK_001160a7,&UNK_001160d0);
  puStack392 = &UNK_001020ca;
  func_0x00101ba0(&UNK_001160a7);
  puStack392 = &UNK_001020d6;
  atexit(close_stdout);
  remove_files = 1;
  controls = (undefined8 *)0x0;
  control_used = 0;
  suppress_count = 0;
  suppress_matched = '\0';
  prefix = &UNK_001160e8;
  global_argv = puVar22;
code_r0x00102120:
  puStack392 = &UNK_00102139;
  iVar3 = func_0x00101c30((ulong)uStack376,puVar22,&UNK_00116116,longopts,0);
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
            puVar19 = auStack384;
            if (iVar3 != 0x80) goto code_r0x00102d8f;
            suppress_matched = '\x01';
          }
          goto code_r0x00102120;
        }
        if (iVar3 == 0x6e) {
          puStack392 = &UNK_001021c8;
          func_0x00101bf0(0,&UNK_001160eb,5);
          puStack392 = &UNK_001021e8;
          digits = xdectoimax(optarg,0,0x7fffffff,&UNK_001170c1);
          goto code_r0x00102120;
        }
        puVar19 = auStack384;
        if (iVar3 != 0x71) goto code_r0x00102d8f;
      }
      suppress_count = 1;
      goto code_r0x00102120;
    }
    puVar19 = auStack384;
    if (iVar3 == -0x82) goto code_r0x00102d99;
    if (iVar3 < -0x81) {
      puVar19 = auStack384;
      if (iVar3 != -0x83) goto code_r0x00102d8f;
      puVar20 = &uStack400;
      uStack400 = 0;
      version_etc(stdout,&UNK_00116026,&UNK_001160a3,Version,&UNK_0011610a,&UNK_001160fa);
      func_0x00101ee0(0);
      goto code_r0x00102291;
    }
    if (iVar3 == 0x62) {
      suffix = optarg;
    }
    else {
      puVar19 = auStack384;
      if (iVar3 != 0x66) goto code_r0x00102d8f;
      prefix = optarg;
    }
    goto code_r0x00102120;
  }
code_r0x00102291:
  uVar6 = optind;
  puVar19 = (undefined *)puVar20;
  if (1 < (int)(*(int *)((undefined *)puVar20 + 8) - optind)) {
    uVar14 = 0xffffffffffffffff;
    pbVar15 = prefix;
    do {
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      bVar26 = *pbVar15;
      pbVar15 = pbVar15 + (ulong)bVar29 * -2 + 1;
    } while (bVar26 != 0);
    plVar18 = (long *)(~uVar14 - 1);
    if (suffix == (byte *)0x0) {
      if (digits < 10) goto code_r0x00102b9b;
      uVar14 = SEXT48((int)digits);
      if (uVar14 <= -(long)plVar18 - 2U) goto code_r0x0010233f;
code_r0x00102ad7:
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x102adc;
      uVar7 = xalloc_die();
      do {
        *(undefined8 *)((undefined *)puVar20 + -8) = 0x102ae4;
        save_line_to_file(uVar7);
code_r0x001026e6:
        do {
          bVar26 = (byte)puVar22;
          current_line = current_line + 1;
          *(undefined8 *)((undefined *)puVar20 + -8) = 0x1026fd;
          plVar25 = (long *)find_line();
          if (plVar25 == (long *)0x0) goto code_r0x00102702;
          lVar8 = *plVar25;
          lVar9 = plVar25[1];
          lVar16 = lVar8 + -1;
          if (*(char *)(lVar9 + -1 + lVar8) != '\n') {
            lVar16 = lVar8;
          }
          *(undefined8 *)((undefined *)puVar20 + -8) = 0x1026c4;
          lVar8 = rpl_re_search(puVar21,lVar9,lVar16,0,lVar16,0);
          if (lVar8 == -2) goto code_r0x00102e0a;
          if (lVar8 != -1) {
code_r0x00102a14:
            puVar21 = (undefined1 *)(current_line + *plVar18);
            *(undefined1 **)((undefined *)puVar20 + 0x10) = puVar21;
            *(undefined4 *)((undefined *)puVar20 + 0x18) = *(undefined4 *)(plVar18 + 3);
            *(undefined8 *)((undefined *)puVar20 + -8) = 0x102a32;
            plVar25 = (long *)get_first_line_in_buffer();
            if (puVar21 < plVar25) goto code_r0x00102f10;
            plVar25 = (long *)(*(long *)((undefined *)puVar20 + 0x10) - (long)plVar25);
            if (plVar25 != (long *)0x0) {
              puVar21 = (undefined1 *)0x0;
              do {
                *(undefined8 *)((undefined *)puVar20 + -8) = 0x102a5e;
                lVar8 = remove_line();
                if (lVar8 == 0) goto code_r0x00102ecf;
                if (bVar26 == 0) {
                  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102a74;
                  save_line_to_file();
                }
                puVar21 = (undefined1 *)((long)puVar21 + 1);
              } while (plVar25 != (long *)puVar21);
            }
            if (bVar26 == 0) {
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102c14;
              close_output_file();
            }
            if (0 < *plVar18) {
              current_line = *(long *)((undefined *)puVar20 + 0x10);
            }
            unaff_R14 = (undefined1 *)((long)unaff_R14 + 1);
code_r0x00102658:
            plVar18 = (long *)((long)controls + (long)unaff_R15);
            if ((*(char *)((long)plVar18 + 0x1c) == '\0') &&
               (puVar22 = controls,
               (long *)plVar18[2] <= unaff_R14 && (long *)unaff_R14 != (long *)plVar18[2]))
            goto code_r0x00102a09;
            bVar26 = *(byte *)((long)plVar18 + 0x1d);
            puVar22 = (undefined8 *)(ulong)bVar26;
            if (bVar26 == 0) {
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102aa6;
              create_output_file();
            }
            if ((suppress_matched != '\0') && (current_line != 0)) {
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102c0a;
              remove_line();
            }
            puVar21 = (undefined1 *)(plVar18 + 4);
            if (*plVar18 < 0) {
              while( true ) {
                current_line = current_line + 1;
                *(undefined8 *)((undefined *)puVar20 + -8) = 0x10290f;
                plVar25 = (long *)find_line();
                if (plVar25 == (long *)0x0) break;
                lVar8 = *plVar25;
                lVar9 = plVar25[1];
                lVar16 = lVar8 + -1;
                if (*(char *)(lVar9 + -1 + lVar8) != '\n') {
                  lVar16 = lVar8;
                }
                *(undefined8 *)((undefined *)puVar20 + -8) = 0x1028e4;
                lVar8 = rpl_re_search(puVar21,lVar9,lVar16,0,lVar16,0);
                if (lVar8 == -2) goto code_r0x00102e0a;
                if (lVar8 != -1) goto code_r0x00102a14;
              }
code_r0x00102702:
              if (*(char *)((long)plVar18 + 0x1c) != '\0') {
                if ((char)puVar22 == '\0') {
                  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102716;
                  dump_rest_of_file();
                  *(undefined8 *)((undefined *)puVar20 + -8) = 0x10271b;
                  close_output_file();
                }
                *(undefined8 *)((undefined *)puVar20 + -8) = 0x102722;
                func_0x00101ee0(0);
                do {
                  uVar14 = 0xffffffffffffffff;
                  plVar25 = (long *)puVar21;
                  do {
                    if (uVar14 == 0) break;
                    uVar14 = uVar14 - 1;
                    cVar27 = *(char *)plVar25;
                    plVar25 = (long *)((long)plVar25 + (ulong)bVar29 * -2 + 1);
                  } while (cVar27 != '\0');
                  plVar25 = (long *)((long)puVar21 + (~uVar14 - 2));
                  if (*(char *)plVar25 != '}') goto code_r0x00102e6a;
                  *(char *)plVar25 = '\0';
                  if (((char *)((long)puVar21 + 1) == (char *)((long)plVar25 + -1)) &&
                     (*(char *)((long)puVar21 + 1) == '*')) {
                    *(char *)((long)unaff_R14 + 0x1c) = '\x01';
                  }
                  else {
                    *(undefined8 *)((undefined *)puVar20 + -8) = 0x10276d;
                    iVar3 = xstrtoumax((char *)((long)puVar21 + 1),0,10,
                                       *(undefined8 *)((undefined *)puVar20 + 0x28),&UNK_001170c1);
                    if (iVar3 != 0) goto code_r0x00102e30;
                    ((long *)unaff_R14)[2] = *(long *)((undefined *)puVar20 + 0x38);
                  }
                  iVar4 = (int)plVar18 + 2;
                  iVar3 = *(int *)((undefined *)puVar20 + 8);
                  iVar1 = *(int *)((undefined *)puVar20 + 8);
                  *(char *)plVar25 = '}';
                  if (iVar1 == iVar4 || iVar3 < iVar4) goto code_r0x00102568;
                  puVar21 = *(undefined1 **)((long)puVar22 + (long)((long)unaff_R15 + 8U));
                  do {
                    plVar18 = (long *)(long)iVar4;
                    *(long **)((undefined *)puVar20 + 0x10) = plVar18;
                    cVar27 = *puVar21;
                    unaff_R15 = (undefined1 *)
                                ((ulong)unaff_R15 & 0xffffffffffffff00 | (ulong)(cVar27 == '%'));
                    if (cVar27 == '/') {
code_r0x00102478:
                      unaff_R14 = (undefined1 *)(ulong)(uint)(int)cVar27;
                      *(char **)((undefined *)puVar20 + 0x18) = (char *)((long)puVar21 + 1);
                      *(undefined8 *)((undefined *)puVar20 + -8) = 0x10248f;
                      plVar25 = (long *)func_0x00101c70((char *)((long)puVar21 + 1),
                                                        (ulong)(uint)(int)cVar27);
                      if (plVar25 == (long *)0x0) goto code_r0x00102cf4;
                      *(undefined8 *)((undefined *)puVar20 + -8) = 0x1024a0;
                      unaff_R14 = (undefined1 *)new_control_record();
                      *(char *)((long)unaff_R14 + 0x1d) = (char)unaff_R15;
                      *(uint *)((long *)unaff_R14 + 3) = (uint)plVar18;
                      *(char *)((long)unaff_R14 + 0x1e) = '\x01';
                      ((long *)unaff_R14)[4] = 0;
                      ((long *)unaff_R14)[5] = 0;
                      *(undefined8 *)((undefined *)puVar20 + -8) = 0x1024c8;
                      lVar8 = xmalloc(0x100);
                      uVar7 = *(undefined8 *)((undefined *)puVar20 + 0x18);
                      ((long *)unaff_R14)[8] = lVar8;
                      ((long *)unaff_R14)[9] = 0;
                      rpl_re_syntax_options = 0x2c6;
                      *(undefined8 *)((undefined *)puVar20 + -8) = 0x1024f7;
                      unaff_R15 = (undefined1 *)
                                  rpl_re_compile_pattern
                                            (uVar7,(long)plVar25 + (-1 - (long)puVar21),
                                             (long *)unaff_R14 + 4);
                      if (unaff_R15 != (undefined1 *)0x0) goto code_r0x00102cbd;
                      if (*(char *)((long)plVar25 + 1) != '\0') {
                        *(undefined8 *)((undefined *)puVar20 + -8) = 0x102528;
                        iVar3 = xstrtoimax((char *)((long)plVar25 + 1),0,10,unaff_R14,&UNK_001170c1)
                        ;
                        if (iVar3 != 0) {
                          *(undefined8 *)((undefined *)puVar20 + -8) = 0x102538;
                          uVar7 = quote(puVar21);
                          *(undefined8 *)((undefined *)puVar20 + -8) = 0x10254e;
                          uVar13 = func_0x00101bf0(0,&UNK_00116988,5);
                          *(undefined8 *)((undefined *)puVar20 + -8) = 0x102562;
                          func_0x00101e60(1,0,uVar13,uVar7);
                          goto code_r0x00102568;
                        }
                      }
                    }
                    else {
code_r0x001023c0:
                      if ((char)unaff_R15 != '\0') goto code_r0x00102478;
                      puVar21 = (undefined1 *)(puVar22 + *(long *)((undefined *)puVar20 + 0x10));
                      *(undefined8 *)((undefined *)puVar20 + -8) = 0x1023d7;
                      unaff_R14 = (undefined1 *)new_control_record();
                      uVar7 = *(undefined8 *)((undefined *)puVar20 + 0x20);
                      lVar8 = *(long *)puVar21;
                      *(uint *)((long *)unaff_R14 + 3) = (uint)plVar18;
                      *(undefined8 *)((undefined *)puVar20 + -8) = 0x1023f9;
                      iVar3 = xstrtoumax(lVar8,0,10,uVar7,&UNK_001170c1);
                      if (iVar3 != 0) goto code_r0x00102c8a;
                      uVar14 = *(ulong *)((undefined *)puVar20 + 0x30);
                      if (uVar14 == 0) goto code_r0x00102c5f;
                      if (uVar14 < last_val_7392) goto code_r0x00102d1e;
                      if (uVar14 == last_val_7392) {
                        lVar8 = *(long *)puVar21;
                        *(undefined8 *)((undefined *)puVar20 + -8) = 0x1027a3;
                        quote(lVar8);
                        *(undefined8 *)((undefined *)puVar20 + -8) = 0x1027b9;
                        uVar7 = func_0x00101bf0(0,&UNK_00116a20,5);
                        *(undefined8 *)((undefined *)puVar20 + -8) = 0x1027ca;
                        func_0x00101e60(0,0,uVar7);
                        uVar14 = *(ulong *)((undefined *)puVar20 + 0x30);
                      }
                      last_val_7392 = uVar14;
                      ((long *)unaff_R14)[1] = uVar14;
                    }
                    iVar4 = (int)plVar18 + 1;
                    if (*(int *)((undefined *)puVar20 + 8) == iVar4 ||
                        *(int *)((undefined *)puVar20 + 8) < iVar4) goto code_r0x00102568;
                    plVar25 = (long *)(*(long *)((undefined *)puVar20 + 0x10) + 1);
                    puVar21 = (undefined1 *)puVar22[(long)plVar25];
                    unaff_R15 = (undefined1 *)((long)plVar25 * 8);
                  } while (*puVar21 != '{');
                } while( true );
              }
              goto code_r0x00102e9c;
            }
            goto code_r0x001026e6;
          }
          *(undefined8 *)((undefined *)puVar20 + -8) = 0x1026dd;
          uVar7 = remove_line();
        } while (bVar26 != 0);
      } while( true );
    }
    bVar2 = false;
    bVar26 = *suffix;
    pbVar15 = suffix;
    if (bVar26 != 0) {
code_r0x001022f5:
      bVar28 = bVar26 == 0x25;
      pbVar10 = pbVar15 + 1;
      bVar26 = pbVar15[1];
      if (bVar28) {
        if (bVar26 != 0x25) goto code_r0x00102942;
        bVar26 = pbVar15[2];
        pbVar10 = pbVar15 + 2;
      }
code_r0x001022ea:
      pbVar15 = pbVar10;
      if (bVar26 == 0) {
        if (bVar2) {
          *(undefined8 *)((undefined *)puVar20 + -8) = 0x102acc;
          iVar3 = func_0x00101ae0(0,0,1);
          uVar14 = SEXT48(iVar3);
          if (-1 < iVar3) {
code_r0x0010233f:
            do {
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102349;
              filename_space = xmalloc((long)plVar18 + uVar14 + 1);
              uVar7 = puVar22[(int)optind];
              uVar6 = optind + 1;
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102375;
              optind = uVar6;
              iVar3 = func_0x00101d40(uVar7,&UNK_00116b8a);
              if (iVar3 == 0) {
code_r0x0010237d:
                plVar18 = (long *)(ulong)uVar6;
                if (*(int *)((undefined *)puVar20 + 8) <= (int)uVar6) goto code_r0x00102568;
                puVar21 = (undefined1 *)puVar22[(long)(int)uVar6];
                *(long *)((undefined *)puVar20 + 0x10) = (long)(int)uVar6;
                *(undefined **)((undefined *)puVar20 + 0x20) = (undefined *)puVar20 + 0x30;
                *(undefined **)((undefined *)puVar20 + 0x28) = (undefined *)puVar20 + 0x38;
                cVar27 = *puVar21;
                unaff_R15 = (undefined1 *)
                            ((ulong)unaff_R15 & 0xffffffffffffff00 | (ulong)(cVar27 == '%'));
                if (cVar27 == '/') goto code_r0x00102478;
                goto code_r0x001023c0;
              }
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102af7;
              iVar3 = fd_reopen(0,uVar7,0);
              uVar6 = optind;
              if (-1 < iVar3) goto code_r0x0010237d;
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102b12;
              puVar21 = (undefined1 *)quotearg_style(4,uVar7);
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102b28;
              plVar18 = (long *)func_0x00101bf0(0,&UNK_0011614a,5);
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102b30;
              puVar11 = (uint *)func_0x00101b20();
              pbVar10 = (byte *)(ulong)*puVar11;
              uVar6 = 1;
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102b44;
              func_0x00101e60(1,pbVar10,plVar18);
code_r0x00102b44:
              cVar27 = (char)plVar25;
              if (cVar27 == 'X') goto code_r0x001029cf;
              if (cVar27 == 'd') goto code_r0x00102bf8;
              if (cVar27 == '\0') {
                *(undefined8 *)((undefined *)puVar20 + -8) = 0x102f35;
                uVar7 = func_0x00101bf0(0,&UNK_00116878,5);
                *(undefined8 *)((undefined *)puVar20 + -8) = 0x102f46;
                func_0x00101e60(1,0,uVar7);
                goto code_r0x00102f46;
              }
code_r0x00102b61:
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102b66;
              plVar12 = (long *)func_0x00101f50();
              if ((*(byte *)(*plVar12 + 1 + (long)puVar21 * 2) & 0x40) == 0) {
                *(undefined8 *)((undefined *)puVar20 + -8) = 0x102c27;
                uVar7 = func_0x00101bf0(0,&UNK_001168d0,5);
                *(undefined8 *)((undefined *)puVar20 + -8) = 0x102c3b;
                func_0x00101e60(1,0,uVar7,(ulong)plVar25 & 0xffffffff);
                goto code_r0x00102c3b;
              }
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102b87;
              uVar7 = func_0x00101bf0(0,&UNK_001168a0,5);
              *(undefined8 *)((undefined *)puVar20 + -8) = 0x102b9b;
              func_0x00101e60(1,0,uVar7);
code_r0x00102b9b:
              uVar14 = 10;
            } while( true );
          }
          goto code_r0x00102ad7;
        }
        goto code_r0x00102c3b;
      }
      goto code_r0x001022f5;
    }
code_r0x00102c3b:
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102c4e;
    uVar7 = func_0x00101bf0(0,&UNK_00116818,5);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102c5f;
    func_0x00101e60(1,0,uVar7);
code_r0x00102c5f:
    lVar8 = *(long *)puVar21;
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102c76;
    uVar7 = func_0x00101bf0(0,&UNK_001169b0,5);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102c8a;
    func_0x00101e60(1,0,uVar7,lVar8);
code_r0x00102c8a:
    lVar8 = *(long *)puVar21;
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102c93;
    uVar7 = quote(lVar8);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102ca9;
    uVar13 = func_0x00101bf0(0,&UNK_00116165,5);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102cbd;
    func_0x00101e60(1,0,uVar13,uVar7);
code_r0x00102cbd:
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102cc5;
    uVar7 = quote(puVar21);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102cdb;
    uVar13 = func_0x00101bf0(0,&UNK_00116960,5);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102cef;
    func_0x00101e60(0,0,uVar13,uVar7,unaff_R15);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102cf4;
    cleanup_fatal();
code_r0x00102cf4:
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102d07;
    uVar7 = func_0x00101bf0(0,&UNK_00116938,5);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102d1e;
    func_0x00101e60(1,0,uVar7,puVar21,(ulong)unaff_R14 & 0xffffffff);
code_r0x00102d1e:
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102d2b;
    puVar22 = (undefined8 *)umaxtostr();
    lVar8 = *(long *)puVar21;
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102d37;
    uVar7 = quote(lVar8);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102d4d;
    uVar13 = func_0x00101bf0(0,&UNK_001169e0,5);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102d64;
    uVar6 = func_0x00101e60(1,0,uVar13,uVar7,puVar22);
  }
  if ((int)uVar6 < *(int *)((undefined *)puVar20 + 8)) {
code_r0x00102f46:
    unaff_R14 = (undefined1 *)(long)*(int *)((undefined *)puVar20 + 8);
    uVar7 = puVar22[(long)unaff_R14 + -1];
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102f55;
    uVar7 = quote(uVar7);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102f6b;
    uVar13 = func_0x00101bf0(0,&UNK_00116131,5);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102f7c;
    func_0x00101e60(0,0,uVar13,uVar7);
  }
  else {
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102d81;
    uVar7 = func_0x00101bf0(0,&UNK_00116121,5);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102d8f;
    func_0x00101e60(0,0,uVar7);
  }
code_r0x00102d8f:
  *(undefined8 *)(puVar19 + -8) = 0x102d99;
  usage(1);
code_r0x00102d99:
  puVar20 = (undefined8 *)puVar19;
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102da0;
  usage(0);
code_r0x00102da0:
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102da5;
  func_0x00101c20();
code_r0x00102da5:
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102db8;
  uVar7 = func_0x00101bf0(0,&UNK_00115fe2,5);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102dc0;
  puVar11 = (uint *)func_0x00101b20();
  uVar5 = *puVar11;
  uVar6 = 0;
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102dce;
  func_0x00101e60(0,(ulong)uVar5,uVar7);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102dd3;
  cleanup_fatal();
code_r0x00102dd3:
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102df4;
  uVar7 = func_0x00101bf0(0,&UNK_00116900,5);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102e0a;
  func_0x00101e60(1,0,uVar7,(ulong)((-(uint)((uVar6 & 2) == 0) & 4) + 0x23),
                  (ulong)plVar25 & 0xffffffff);
code_r0x00102e0a:
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102e1d;
  uVar7 = func_0x00101bf0(0,&UNK_00116ab8,5);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102e2b;
  func_0x00101e60(0,0,uVar7);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102e30;
  cleanup_fatal();
code_r0x00102e30:
  uVar7 = *(undefined8 *)((long)global_argv + (long)unaff_R15);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102e40;
  uVar7 = quote(uVar7);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102e56;
  uVar13 = func_0x00101bf0(0,&UNK_00116a88,5);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102e6a;
  func_0x00101e60(1,0,uVar13,uVar7);
code_r0x00102e6a:
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102e72;
  plVar18 = (long *)quote(puVar21);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102e88;
  uVar7 = func_0x00101bf0(0,&UNK_00116a60,5);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102e9c;
  func_0x00101e60(1,0,uVar7,plVar18);
code_r0x00102e9c:
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102eab;
  regexp_error(plVar18,unaff_R14,(ulong)puVar22 & 0xff);
  goto code_r0x00102eab;
code_r0x00102942:
  if (!bVar2) {
    uVar6 = 0;
    do {
      bVar26 = *pbVar10;
      if (bVar26 == 0x27) {
        uVar6 = uVar6 | 1;
      }
      else {
        if ((char)bVar26 < '(') {
          if (bVar26 != 0x23) {
joined_r0x0010297f:
            while ((int)(char)bVar26 - 0x30U < 10) {
              pbVar10 = pbVar10 + 1;
              bVar26 = *pbVar10;
            }
            if (bVar26 == 0x2e) {
              do {
                pbVar10 = pbVar10 + 1;
              } while ((int)(char)*pbVar10 - 0x30U < 10);
            }
            bVar26 = *pbVar10;
            puVar21 = (undefined1 *)(ulong)bVar26;
            plVar25 = (long *)puVar21;
            if (bVar26 == 0x69) goto code_r0x00102bf8;
            if ((char)bVar26 < 'j') goto code_r0x00102b44;
            if (bVar26 == 0x75) {
              uVar5 = 1;
              goto code_r0x001029d4;
            }
            if (bVar26 == 0x78) goto code_r0x001029cf;
            if (bVar26 != 0x6f) goto code_r0x00102b61;
            goto code_r0x001029cf;
          }
          uVar6 = uVar6 | 2;
        }
        else {
          if ((bVar26 != 0x2d) && (bVar26 != 0x30)) goto joined_r0x0010297f;
        }
      }
      pbVar10 = pbVar10 + 1;
    } while( true );
  }
code_r0x00102eab:
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102ebe;
  uVar7 = func_0x00101bf0(0,&UNK_00116848,5);
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x102ecf;
  func_0x00101e60(1,0,uVar7);
code_r0x00102ecf:
  uVar7 = global_argv[*(int *)((undefined *)puVar20 + 0x18)];
  do {
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102ee4;
    uVar7 = quote(uVar7);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102efa;
    uVar13 = func_0x00101bf0(0,&UNK_00116179,5);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102f0b;
    func_0x00101e60(0,0,uVar13,uVar7);
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x102f10;
    cleanup_fatal();
code_r0x00102f10:
    uVar7 = global_argv[*(int *)((undefined *)puVar20 + 0x18)];
  } while( true );
code_r0x001029cf:
  uVar5 = 2;
  goto code_r0x001029d4;
code_r0x00102bf8:
  *pbVar10 = 0x75;
  uVar5 = 1;
code_r0x001029d4:
  uVar6 = uVar6 & ~uVar5;
  if (uVar6 != 0) goto code_r0x00102dd3;
  bVar26 = pbVar10[1];
  pbVar10 = pbVar10 + 1;
  bVar2 = true;
  goto code_r0x001022ea;
code_r0x00102568:
  puVar17 = sig_7486;
  plVar25 = (long *)((undefined *)puVar20 + 0x40);
  unaff_R15 = caught_signals;
  puVar21 = sig_7486;
  *(undefined8 *)((undefined *)puVar20 + -8) = 0x10258e;
  func_0x00101d60(caught_signals);
  do {
    uVar6 = *(uint *)puVar21;
    *(undefined8 *)((undefined *)puVar20 + -8) = 0x10259f;
    func_0x00101b80((ulong)uVar6,0,plVar25);
    if (*(long *)((undefined *)puVar20 + 0x40) != 1) {
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x1025b2;
      func_0x00101f30();
    }
    puVar21 = (undefined1 *)((long)puVar21 + 4);
  } while (puVar21 != &UNK_00116b2c);
  lVar8 = 0x20;
  *(undefined4 *)((undefined *)puVar20 + 200) = 0;
  unaff_R14 = caught_signals;
  *(undefined8 *)((undefined *)puVar20 + 0x40) = 0x1035e0;
  puVar23 = (undefined4 *)caught_signals;
  puVar24 = (undefined4 *)((undefined *)puVar20 + 0x48);
  while (lVar8 != 0) {
    lVar8 = lVar8 + -1;
    *puVar24 = *puVar23;
    puVar23 = puVar23 + (ulong)bVar29 * 0x3ffffffffffffffe + 1;
    puVar24 = puVar24 + (ulong)bVar29 * 0x3ffffffffffffffe + 1;
  }
  do {
    while( true ) {
      uVar6 = *(uint *)puVar17;
      puVar22 = (undefined8 *)(ulong)uVar6;
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x102607;
      iVar3 = func_0x00101ed0(caught_signals);
      if (iVar3 == 0) break;
      puVar17 = (undefined1 *)((uint *)puVar17 + 1);
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x10261c;
      func_0x00101b80((ulong)uVar6,plVar25,0);
      if (puVar17 == &UNK_00116b2c) goto code_r0x00102621;
    }
    puVar17 = (undefined1 *)((uint *)puVar17 + 1);
  } while (puVar17 != &UNK_00116b2c);
code_r0x00102621:
  *(undefined8 *)((undefined *)puVar20 + 8) = 0;
  while( true ) {
    if (control_used <= *(ulong *)((undefined *)puVar20 + 8)) {
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x102baa;
      create_output_file();
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x102baf;
      dump_rest_of_file();
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x102bb4;
      close_output_file();
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x102bbb;
      iVar3 = func_0x00101cc0(0);
      if (iVar3 != 0) goto code_r0x00102da5;
      if (*(long *)((undefined *)puVar20 + 0xf8) == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
      goto code_r0x00102da0;
    }
    lVar8 = *(long *)((undefined *)puVar20 + 8);
    unaff_R15 = (undefined1 *)(lVar8 * 0x60);
    unaff_R14 = (undefined1 *)0x0;
    if (*(char *)((long)controls + (long)((long)unaff_R15 + 0x1eU)) != '\0') break;
    while ((puVar22 = controls + lVar8 * 0xc, *(char *)((long)puVar22 + 0x1c) != '\0' ||
           (unaff_R14 < (long *)puVar22[2] || (long *)unaff_R14 == (long *)puVar22[2]))) {
      lVar9 = puVar22[1];
      plVar25 = (long *)((long)unaff_R14 + 1);
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x102847;
      create_output_file();
      puVar21 = (undefined1 *)(lVar9 * (long)plVar25);
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x10285b;
      lVar9 = find_line(current_line + 1);
      unaff_R14 = (undefined1 *)plVar25;
      if ((lVar9 == 0) && (suppress_matched != '\0')) goto code_r0x00102926;
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x102869;
      plVar12 = (long *)get_first_line_in_buffer();
      plVar18 = (long *)((long)plVar12 + 1);
      if (puVar21 < plVar12 || (long *)((long)puVar21 - (long)plVar12) == (long *)0x0) {
        *(undefined8 *)((undefined *)puVar20 + -8) = 0x1027ea;
        close_output_file();
      }
      else {
        puVar21 = (undefined1 *)((long)puVar21 + 1);
        do {
          *(undefined8 *)((undefined *)puVar20 + -8) = 0x102885;
          lVar9 = remove_line();
          if (lVar9 == 0) goto code_r0x00102926;
          plVar18 = (long *)((long)plVar18 + 1);
          *(undefined8 *)((undefined *)puVar20 + -8) = 0x10289a;
          save_line_to_file(lVar9);
        } while (plVar18 != (long *)puVar21);
        *(undefined8 *)((undefined *)puVar20 + -8) = 0x1028a4;
        close_output_file();
      }
      if (suppress_matched != '\0') {
        *(undefined8 *)((undefined *)puVar20 + -8) = 0x1028b6;
        remove_line();
      }
      *(undefined8 *)((undefined *)puVar20 + -8) = 0x102810;
      lVar9 = find_line();
      if (lVar9 == 0) {
        while (suppress_matched == '\0') {
code_r0x00102926:
          *(undefined8 *)((undefined *)puVar20 + -8) = 0x102933;
          handle_line_error_isra_1();
        }
      }
    }
code_r0x00102a09:
    *(long *)((undefined *)puVar20 + 8) = *(long *)((undefined *)puVar20 + 8) + 1;
  }
  goto code_r0x00102658;
}

