
/* WARNING: Could not reconcile some variable overlaps */

undefined8 tr(int param_1,undefined1 *param_2)

{
  ushort *puVar1;
  byte bVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort **ppuVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  int extraout_EDX;
  ushort *puVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined1 *unaff_R12;
  undefined uVar22;
  long lVar23;
  long in_FS_OFFSET;
  bool bVar24;
  byte bVar25;
  undefined auVar26 [16];
  int *piStack536;
  uint *puStack528;
  long *plStack520;
  undefined8 *puStack512;
  ulong uStack504;
  long lStack496;
  long lStack488;
  uint uStack476;
  int iStack464;
  uint uStack460;
  long lStack456;
  long lStack448;
  undefined8 *puStack440;
  undefined8 *puStack432;
  long lStack424;
  char cStack407;
  long lStack392;
  long lStack384;
  char cStack344;
  bool bStack343;
  char acStack342 [14];
  undefined8 auStack328 [33];
  long lStack64;
  
  bVar25 = 0;
  plVar15 = (long *)(long)param_1;
  puVar17 = long_options;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  func_0x00101830(6,&UNK_001088c1);
  func_0x00101670(&UNK_0010710b,&UNK_00107134);
  func_0x00101650(&UNK_0010710b);
  atexit(close_stdout);
code_r0x001019b8:
  iVar5 = func_0x001016d0((ulong)plVar15 & 0xffffffff,param_2,&UNK_0010715b,puVar17,0);
  if (iVar5 == -1) {
    puVar13 = (undefined8 *)(ulong)optind;
    uVar21 = (int)plVar15 - optind;
    unaff_R12 = (undefined1 *)(ulong)uVar21;
    if (uVar21 == 2) {
      if (delete == 0) {
        translating = '\x01';
        iVar5 = 2;
        if (squeeze_repeats != 0) goto code_r0x00101b0c;
      }
      else {
        translating = '\0';
        if (squeeze_repeats == 0) goto code_r0x00101af7;
      }
      lStack456 = xmalloc(0x20);
      *(undefined8 *)(lStack456 + 8) = 0;
      lStack448 = lStack456;
      cVar4 = parse_str(((undefined8 *)param_2)[(int)optind],&lStack456);
      if (cVar4 == '\0') {
code_r0x00101e01:
        puVar17 = (undefined1 *)&lStack456;
        uVar11 = 1;
code_r0x00101e06:
        if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar11;
        }
code_r0x00102461:
        func_0x001016c0();
code_r0x00102466:
        func_0x00101720(&UNK_001081a0,&UNK_00107021,0x4c5,__PRETTY_FUNCTION___7270);
        puVar20 = (undefined8 *)param_2;
code_r0x00102485:
        uVar11 = func_0x00101690(0,&UNK_00108098,5);
        func_0x00101850(1,0,uVar11);
        param_2 = (undefined1 *)puVar20;
code_r0x001024a9:
        puVar20 = (undefined8 *)param_2;
        uVar11 = func_0x00101690(0,&UNK_00108060,5);
        func_0x00101850(1,0,uVar11);
code_r0x001024cd:
        uVar11 = func_0x00101690(0,&UNK_00108110,5);
        func_0x00101850(1,0,uVar11);
        param_2 = (undefined1 *)puVar20;
      }
      else {
code_r0x00101dbb:
        plVar15 = &lStack392;
        lStack392 = xmalloc(0x20);
        *(undefined8 *)(lStack392 + 8) = 0;
        lStack384 = lStack392;
        cVar4 = parse_str(((undefined8 *)param_2)[(long)(int)optind + 1]);
        if (cVar4 == '\0') goto code_r0x00101e01;
code_r0x00101b5e:
        puVar17 = (undefined1 *)&lStack456;
        get_spec_stats(puVar17);
        if (complement != 0) {
          puVar13 = (undefined8 *)0x20;
          puStack440 = (undefined8 *)0xfffffffffffffffe;
          iVar5 = 0x100;
          puVar20 = auStack328;
          while (puVar13 != (undefined8 *)0x0) {
            puVar13 = (undefined8 *)((long)puVar13 + -1);
            *puVar20 = 0;
            puVar20 = puVar20 + (ulong)bVar25 * 0x1ffffffffffffffe + 1;
          }
          while (iVar7 = get_next(puVar17), iVar7 != -1) {
            bVar2 = *(byte *)((long)auStack328 + (long)iVar7);
            *(undefined *)((long)auStack328 + (long)iVar7) = 1;
            iVar5 = iVar5 - (uint)(bVar2 ^ 1);
          }
          param_2 = (undefined1 *)(long)iVar5;
          puStack432 = (undefined8 *)param_2;
        }
        lVar23 = lStack424;
        puVar20 = puStack432;
        if (lStack424 != 0) goto code_r0x001024a9;
        if (plVar15 == (long *)0x0) goto code_r0x00101ed1;
        get_spec_stats(plVar15);
        param_2 = (undefined1 *)puVar20;
        if ((puVar20 < (undefined8 *)plVar15[3]) || (plVar15[4] != 1)) {
          if (1 < (ulong)plVar15[4]) goto code_r0x00102485;
          if (translating != '\0') goto code_r0x00101bce;
          if (plVar15[4] == 0) goto code_r0x00101ed1;
code_r0x00102095:
          uVar11 = func_0x00101690(0,&UNK_001082f0,5);
          iVar7 = func_0x00101850(1,0,uVar11);
          iVar5 = extraout_EDX;
          goto code_r0x001020b9;
        }
        puVar13 = (undefined8 *)((long)puVar20 - (long)(undefined8 *)plVar15[3]);
        bVar24 = translating == '\0';
        *(undefined8 **)(plVar15[5] + 0x18) = puVar13;
        *(undefined8 **)(plVar15 + 3) = puVar20;
        if (bVar24) goto code_r0x00102095;
code_r0x00101bce:
        if (*(char *)(plVar15 + 6) == '\0') {
          if (*(char *)((long)plVar15 + 0x32) == '\0') {
            bVar24 = *(bool *)((long)plVar15 + 0x31);
            param_2 = (undefined1 *)(ulong)bVar24;
            if (bVar24 == false) {
code_r0x001021eb:
              puVar20 = (undefined8 *)plVar15[3];
              auVar26 = CONCAT88(puVar20,puStack432);
              if (puStack432 <= puVar20) goto code_r0x00101e78;
              if (truncate_set1 != '\0') goto code_r0x00101e78;
              if (puVar20 == (undefined8 *)0x0) {
code_r0x0010266c:
                uVar11 = func_0x00101690(0,&UNK_001081d8,5);
                func_0x00101850(1,0,uVar11);
              }
              else {
                puVar13 = (undefined8 *)plVar15[1];
                iVar5 = *(int *)puVar13;
                if (iVar5 == 1) goto code_r0x00102450;
                if (iVar5 != 0) {
                  if (iVar5 == 2) {
                    uVar11 = func_0x00101690(0,&UNK_00108210,5);
                    func_0x00101850(1,0,uVar11);
                    goto code_r0x0010266c;
                  }
                  if (iVar5 != 4) {
                    func_0x00101600();
                    goto code_r0x0010223f;
                  }
                }
                uVar22 = *(undefined *)(puVar13 + 2);
                while( true ) {
                  param_2 = (undefined1 *)(SUB168(auVar26,0) - SUB168(auVar26 >> 0x40,0));
                  puVar9 = (undefined4 *)xmalloc();
                  lVar23 = plVar15[1];
                  *(undefined8 *)(puVar9 + 2) = 0;
                  *puVar9 = 4;
                  *(undefined *)(puVar9 + 4) = uVar22;
                  *(undefined1 **)(puVar9 + 6) = param_2;
                  if (lVar23 == 0) break;
                  *(undefined4 **)(lVar23 + 8) = puVar9;
                  *(undefined4 **)(plVar15 + 1) = puVar9;
                  *(undefined8 **)(plVar15 + 3) = puStack432;
code_r0x00101e78:
                  if ((complement == 0) || (cStack407 == '\0')) {
code_r0x00101ed1:
                    fadvise();
                    plVar16 = (long *)puVar17;
                    if (squeeze_repeats == 0) goto code_r0x00101f7e;
                    if ((int)unaff_R12 == 1) {
                      set_initialize(puVar17,(ulong)complement,in_squeeze_set);
                      squeeze_filter_constprop_14();
                      goto code_r0x00101f43;
                    }
                    if ((delete != 0) && ((int)unaff_R12 == 2)) {
                      set_initialize(puVar17,(ulong)complement,in_delete_set);
                      set_initialize(plVar15,0,in_squeeze_set);
                      squeeze_filter_constprop_14();
                      goto code_r0x00101f43;
                    }
code_r0x00101f91:
                    if (translating == '\0') goto code_r0x00101f43;
                    if (complement != 0) goto code_r0x001022c7;
                    unaff_R12 = xlate;
                    lVar23 = 0;
                    do {
                      xlate[lVar23] = (char)lVar23;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 != 0x100);
                    param_2 = (undefined1 *)0xffffffffffffffff;
                    puStack440 = (undefined8 *)0xfffffffffffffffe;
                    plVar15[2] = -2;
                    piStack536 = &iStack464;
                    puStack528 = &uStack460;
code_r0x00101fe7:
                    iVar5 = get_next(puVar17,piStack536);
                    lVar23 = (long)iVar5;
                    iVar7 = get_next(plVar15);
                    puVar20 = (undefined8 *)param_2;
                    iVar5 = iStack464;
                    if (iStack464 != 0) {
code_r0x001020b9:
                      param_2 = (undefined1 *)puVar20;
                      if ((iVar5 != 1) || (uStack460 != 0)) goto code_r0x0010201a;
                      plVar16 = (long *)func_0x001018e0();
                      lVar23 = *plVar16;
                      lVar12 = 0;
                      do {
                        if ((*(byte *)(lVar23 + 1 + lVar12 * 2) & 1) != 0) {
                          plVar16 = (long *)func_0x001018d0();
                          unaff_R12[lVar12] = (char)*(undefined4 *)(*plVar16 + lVar12 * 4);
                        }
                        lVar12 = lVar12 + 1;
                      } while (lVar12 != 0x100);
                      goto code_r0x00102038;
                    }
                    if (uStack460 == 1) {
                      plVar16 = (long *)func_0x001018e0();
                      lVar23 = *plVar16;
                      lVar12 = 0;
                      do {
                        if ((*(byte *)(lVar23 + 1 + lVar12 * 2) & 2) != 0) {
                          plVar16 = (long *)func_0x001015e0();
                          unaff_R12[lVar12] = (char)*(undefined4 *)(*plVar16 + lVar12 * 4);
                        }
                        lVar12 = lVar12 + 1;
                      } while (lVar12 != 0x100);
                      goto code_r0x00102038;
                    }
code_r0x0010201a:
                    lStack424._0_4_ = (uint)lVar23;
                    if (((uint)lStack424 != 0xffffffff) && (iVar7 != -1)) goto code_r0x0010202d;
code_r0x0010223f:
                    if (((uint)lStack424 == 0xffffffff) ||
                       (plVar16 = plVar15, truncate_set1 != '\0')) {
                      do {
                        puVar17 = io_buf;
                        if (squeeze_repeats != 0) goto code_r0x00102365;
                        do {
                          plVar15 = (long *)read_and_xlate(io_buf,0x2000);
                          if (plVar15 == (long *)0x0) goto code_r0x00101f43;
                          plVar16 = (long *)func_0x00101810(io_buf,1,plVar15,stdout);
                        } while (plVar15 == plVar16);
                        plVar15 = (long *)func_0x00101690(0,&UNK_00107082,5);
                        puVar10 = (uint *)func_0x00101610();
                        func_0x00101850(1,(ulong)*puVar10,plVar15);
code_r0x001022c7:
                        unaff_R12 = xlate;
                        set_initialize(puVar17,0,in_delete_set);
                        plVar15[2] = -2;
                        lVar23 = 0;
                        do {
                          xlate[lVar23] = (char)lVar23;
                          lVar23 = lVar23 + 1;
                        } while (lVar23 != 0x100);
                        puVar17 = (undefined1 *)0x0;
                        param_2 = in_delete_set;
                        do {
                          if (*(char *)((long *)puVar17 + 0x6163c) == '\0') {
                            iVar5 = get_next(plVar15,0);
                            if (iVar5 == -1) {
                              if (truncate_set1 == '\0') {
                                func_0x00101720(&UNK_0010719d,&UNK_00107021,0x72d,
                                                &__PRETTY_FUNCTION___7483);
                                goto code_r0x00102365;
                              }
                              break;
                            }
                            *(char *)((long *)puVar17 + 0x6161c) = (char)iVar5;
                          }
                          puVar17 = (undefined1 *)((long)puVar17 + 1);
                        } while ((long *)puVar17 != (long *)0x100);
                      } while( true );
                    }
                    goto code_r0x00102515;
                  }
                  if ((undefined8 *)plVar15[3] == puStack432) {
                    plVar15[2] = -2;
                    uVar21 = get_next(plVar15,0);
                    if (uVar21 != 0xffffffff) {
                      do {
                        uVar6 = get_next(plVar15,0);
                        param_2 = (undefined1 *)(ulong)uVar21;
                        if (uVar6 == 0xffffffff) goto code_r0x00101ed1;
                      } while (uVar21 == uVar6);
                    }
                  }
code_r0x0010242c:
                  uVar11 = func_0x00101690(0,&UNK_00108280,5);
                  auVar26 = func_0x00101850(1,0,uVar11);
code_r0x00102450:
                  uVar22 = *(undefined *)((long)puVar13 + 0x11);
                }
              }
              auVar26 = append_repeated_char_part_8();
              piVar3 = piStack536;
              piStack536 = SUB168(auVar26,0);
              (*(code *)PTR___libc_start_main_0030afd8)
                        (main,piVar3,&puStack528,__libc_csu_init,__libc_csu_fini,
                         SUB168(auVar26 >> 0x40,0),&piStack536);
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            ppuVar8 = (ushort **)func_0x001018e0();
            puVar14 = *ppuVar8;
            lVar12 = 0;
            puVar1 = puVar14 + 0x100;
            do {
              lVar23 = (lVar23 + 1) - (ulong)((*puVar14 & 0x100) == 0);
              lVar12 = (lVar12 + 1) - (ulong)((*puVar14 & 0x200) == 0);
              puVar14 = puVar14 + 1;
            } while (puVar14 != puVar1);
            puStack512 = puStack432;
            uStack504 = plVar15[3];
            lStack496 = lStack448;
            lStack488 = plVar15[1];
            plVar15[2] = -2;
            puStack440 = (undefined8 *)0xfffffffffffffffe;
            piStack536 = &iStack464;
            puStack528 = &uStack460;
            plVar16 = (long *)(lVar23 - 1);
            plStack520 = (long *)puVar17;
            uStack476 = uVar21;
            do {
              uVar21 = get_next(plStack520,piStack536);
              unaff_R12 = (undefined1 *)(ulong)uVar21;
              iVar5 = get_next(plVar15);
              puVar13 = (undefined8 *)(ulong)uStack460;
              if ((char)param_2 == '\0') {
                if (uStack460 != 2) {
code_r0x00101cb1:
                  lStack448 = *(long *)(lStack448 + 8);
                  puStack440 = (undefined8 *)0xffffffffffffffff;
                  lVar23 = *(long *)(plVar15[1] + 8);
                  plVar15[2] = -1;
                  plVar15[1] = lVar23;
                  plVar18 = (long *)(lVar12 - 1U);
                  if (iStack464 == 1) {
                    plVar18 = plVar16;
                  }
                  puStack432 = (undefined8 *)((long)puStack432 - (long)plVar18);
                  plVar18 = plVar16;
                  if (uStack460 != 1) {
                    plVar18 = (long *)(lVar12 - 1U);
                  }
                  puVar13 = (undefined8 *)(plVar15[3] - (long)plVar18);
                  *(undefined8 **)(plVar15 + 3) = puVar13;
                }
              }
              else {
                if (uStack460 != 2) {
                  puVar17 = (undefined1 *)plVar15;
                  if ((bVar24 != false) && (iStack464 != 2)) goto code_r0x00101cb1;
                  goto code_r0x00102534;
                }
              }
              bVar24 = puStack440 == (undefined8 *)0xffffffffffffffff;
              lStack424._0_4_ = (uint)bVar24;
              param_2 = (undefined1 *)(ulong)(plVar15[2] == -1);
            } while ((uVar21 != 0xffffffff) && (iVar5 != -1));
            unaff_R12 = (undefined1 *)(ulong)uStack476;
            puVar17 = (undefined1 *)plStack520;
            if ((puStack432 <= puStack512) && ((ulong)plVar15[3] <= uStack504)) {
              lStack448 = lStack496;
              plVar15[1] = lStack488;
              goto code_r0x001021eb;
            }
            goto code_r0x00102466;
          }
          goto code_r0x001024cd;
        }
      }
      uVar11 = func_0x00101690(0,&UNK_001080d0,5);
      func_0x00101850(1,0,uVar11);
      plVar16 = plVar15;
code_r0x00102515:
      func_0x00101720(&UNK_001071b7,&UNK_00107021,0x762,&__PRETTY_FUNCTION___7483);
code_r0x00102534:
      uVar11 = func_0x00101690(0,&UNK_00108170,5);
      func_0x00101850(1,0,uVar11);
      plVar15 = plVar16;
code_r0x00102558:
      if ((int)unaff_R12 != 0) {
        plVar15 = (long *)quote(((undefined8 *)param_2)[(long)plVar15 - 1]);
        uVar11 = func_0x00101690(0,&UNK_00107173,5);
        func_0x00101850(0,0,uVar11,plVar15);
        puVar19 = &UNK_00107fe8;
        if (squeeze_repeats != 0) {
          puVar19 = &UNK_00107fa0;
        }
        goto code_r0x001025d2;
      }
      uVar11 = func_0x00101690(0,&UNK_00107163,5);
      func_0x00101850(0,0,uVar11);
    }
    else {
      if (squeeze_repeats == delete) {
        iVar7 = 2;
        iVar5 = 2;
      }
      else {
code_r0x00101af7:
        iVar7 = 1;
        iVar5 = 2 - (uint)(squeeze_repeats < delete);
      }
      translating = '\0';
      if ((int)uVar21 < iVar7) goto code_r0x00102558;
code_r0x00101b0c:
      if ((int)uVar21 <= iVar5) {
        lStack456 = xmalloc(0x20);
        *(undefined8 *)(lStack456 + 8) = 0;
        lStack448 = lStack456;
        cVar4 = parse_str(((undefined8 *)param_2)[(int)optind]);
        if (cVar4 != '\0') {
          plVar15 = (long *)0x0;
          if (uVar21 == 2) goto code_r0x00101dbb;
          goto code_r0x00101b5e;
        }
        goto code_r0x00101e01;
      }
      plVar15 = (long *)quote(((undefined8 *)param_2)[(int)(iVar5 + optind)]);
      uVar11 = func_0x00101690(0,&UNK_0010718c,5);
      func_0x00101850(0,0,uVar11,plVar15);
      puVar19 = &UNK_00108018;
      if (uVar21 != 2) goto code_r0x00101a27;
code_r0x001025d2:
      uVar11 = func_0x00101690(0,puVar19,5);
      func_0x001018a0(stderr,1,&UNK_00108870,uVar11);
    }
  }
  else {
    if (iVar5 == 0x43) {
code_r0x00101a99:
      complement = 1;
      goto code_r0x001019b8;
    }
    if (iVar5 < 0x44) {
      if (iVar5 == -0x82) {
        usage(0);
        goto code_r0x00102461;
      }
      if (iVar5 != 0x41) {
        if (iVar5 != -0x83) goto code_r0x00101a27;
        goto code_r0x00101a38;
      }
      goto code_r0x00101a70;
    }
    if (iVar5 == 100) {
      delete = 1;
      goto code_r0x001019b8;
    }
    if (iVar5 < 0x65) {
      if (iVar5 == 99) goto code_r0x00101a99;
      goto code_r0x00101a27;
    }
    if (iVar5 == 0x73) {
      squeeze_repeats = 1;
      goto code_r0x001019b8;
    }
    if (iVar5 == 0x74) {
      truncate_set1 = '\x01';
      goto code_r0x001019b8;
    }
  }
code_r0x00101a27:
  usage(1);
code_r0x00101a38:
  version_etc(stdout,&UNK_0010708e,&UNK_00107107,Version,&UNK_0010714e,0);
  func_0x00101880(0);
code_r0x00101a70:
  func_0x00101830(3,&UNK_0010714c);
  func_0x00101830(0,&UNK_0010714c);
  goto code_r0x001019b8;
code_r0x0010202d:
  unaff_R12[lVar23] = (char)iVar7;
  if (uStack460 != 2) {
code_r0x00102038:
    lStack448 = *(long *)(lStack448 + 8);
    lVar23 = *(long *)(plVar15[1] + 8);
    *(undefined1 **)(plVar15 + 2) = param_2;
    plVar15[1] = lVar23;
    puStack440 = (undefined8 *)param_2;
  }
  goto code_r0x00101fe7;
code_r0x00102365:
  set_initialize(plVar15,0,in_squeeze_set);
  squeeze_filter_constprop_14(read_and_xlate);
code_r0x00101f43:
  do {
    uVar11 = func_0x00101750(0);
    if ((int)uVar11 == 0) goto code_r0x00101e06;
    plVar15 = (long *)func_0x00101690(0,&UNK_001071d1,5);
    puVar10 = (uint *)func_0x00101610();
    func_0x00101850(1,(ulong)*puVar10,plVar15);
    plVar16 = (long *)puVar17;
code_r0x00101f7e:
    puVar17 = (undefined1 *)plVar16;
    if ((delete == 0) ||
       (uVar21 = (int)unaff_R12 - 1, unaff_R12 = (undefined1 *)(ulong)uVar21, uVar21 != 0))
    goto code_r0x00101f91;
    puVar17 = io_buf;
    set_initialize(plVar16,(ulong)complement,in_delete_set);
    while (plVar15 = (long *)read_and_delete(io_buf,0x2000), plVar15 != (long *)0x0) {
      puVar13 = stdout;
      plVar16 = (long *)func_0x00101810(io_buf,1,plVar15);
      if (plVar15 != plVar16) {
        plVar15 = (long *)func_0x00101690(0,&UNK_00107082,5);
        puVar10 = (uint *)func_0x00101610();
        func_0x00101850(1,(ulong)*puVar10,plVar15);
        goto code_r0x0010242c;
      }
    }
  } while( true );
}