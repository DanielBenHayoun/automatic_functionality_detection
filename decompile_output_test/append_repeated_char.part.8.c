
/* WARNING: Could not reconcile some variable overlaps */

undefined8 append_repeated_char_part_8(void)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort **ppuVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int extraout_EDX;
  ushort *puVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *puVar16;
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
  undefined *puStack552;
  int *piStack544;
  uint *puStack536;
  long *plStack528;
  undefined8 *puStack520;
  ulong uStack512;
  long lStack504;
  long lStack496;
  uint uStack484;
  int iStack472;
  uint uStack468;
  long lStack464;
  long lStack456;
  undefined8 *puStack448;
  undefined8 *puStack440;
  long lStack432;
  char cStack415;
  long lStack400;
  long lStack392;
  char cStack352;
  bool bStack351;
  char acStack350 [14];
  undefined8 auStack336 [33];
  long lStack72;
  
  bVar25 = 0;
  puVar17 = &UNK_00107021;
  iVar4 = 0x10705c;
  func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2cf,__PRETTY_FUNCTION___7143);
  plVar14 = (long *)(long)iVar4;
  puVar16 = long_options;
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  puStack552 = &UNK_00101979;
  set_program_name(*(undefined8 *)puVar17);
  puStack552 = &UNK_0010198a;
  func_0x00101830(6,&UNK_001088c1);
  puStack552 = &UNK_0010199d;
  func_0x00101670(&UNK_0010710b,&UNK_00107134);
  puStack552 = &UNK_001019a9;
  func_0x00101650(&UNK_0010710b);
  puStack552 = &UNK_001019b5;
  atexit(close_stdout);
code_r0x001019b8:
  puStack552 = &UNK_001019cf;
  iVar4 = func_0x001016d0((ulong)plVar14 & 0xffffffff,puVar17,&UNK_0010715b,puVar16,0);
  if (iVar4 == -1) {
    puVar12 = (undefined8 *)(ulong)optind;
    uVar21 = (int)plVar14 - optind;
    unaff_R12 = (undefined1 *)(ulong)uVar21;
    if (uVar21 == 2) {
      if (delete == 0) {
        translating = '\x01';
        iVar4 = 2;
        if (squeeze_repeats != 0) goto code_r0x00101b0c;
      }
      else {
        translating = '\0';
        if (squeeze_repeats == 0) goto code_r0x00101af7;
      }
      puStack552 = &UNK_00101d91;
      lStack464 = xmalloc(0x20);
      *(undefined8 *)(lStack464 + 8) = 0;
      puStack552 = &UNK_00101db7;
      lStack456 = lStack464;
      cVar3 = parse_str(((undefined8 *)puVar17)[(int)optind],&lStack464);
      if (cVar3 == '\0') {
code_r0x00101e01:
        puVar16 = (undefined1 *)&lStack464;
        uVar10 = 1;
code_r0x00101e06:
        if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar10;
        }
code_r0x00102461:
        puStack552 = &UNK_00102466;
        func_0x001016c0();
code_r0x00102466:
        puStack552 = &UNK_00102485;
        func_0x00101720(&UNK_001081a0,&UNK_00107021,0x4c5,__PRETTY_FUNCTION___7270);
        puVar20 = (undefined8 *)puVar17;
code_r0x00102485:
        puStack552 = &UNK_00102498;
        uVar10 = func_0x00101690(0,&UNK_00108098,5);
        puStack552 = &UNK_001024a9;
        func_0x00101850(1,0,uVar10);
        puVar17 = (undefined1 *)puVar20;
code_r0x001024a9:
        puVar20 = (undefined8 *)puVar17;
        puStack552 = &UNK_001024bc;
        uVar10 = func_0x00101690(0,&UNK_00108060,5);
        puStack552 = &UNK_001024cd;
        func_0x00101850(1,0,uVar10);
code_r0x001024cd:
        puStack552 = &UNK_001024e0;
        uVar10 = func_0x00101690(0,&UNK_00108110,5);
        puStack552 = &UNK_001024f1;
        func_0x00101850(1,0,uVar10);
        puVar17 = (undefined1 *)puVar20;
      }
      else {
code_r0x00101dbb:
        plVar14 = &lStack400;
        puStack552 = &UNK_00101dcd;
        lStack400 = xmalloc(0x20);
        *(undefined8 *)(lStack400 + 8) = 0;
        puStack552 = &UNK_00101df9;
        lStack392 = lStack400;
        cVar3 = parse_str(((undefined8 *)puVar17)[(long)(int)optind + 1]);
        if (cVar3 == '\0') goto code_r0x00101e01;
code_r0x00101b5e:
        puVar16 = (undefined1 *)&lStack464;
        puStack552 = &UNK_00101b66;
        get_spec_stats(puVar16);
        if (complement != 0) {
          puVar12 = (undefined8 *)0x20;
          puStack448 = (undefined8 *)0xfffffffffffffffe;
          iVar4 = 0x100;
          puVar20 = auStack336;
          while (puVar12 != (undefined8 *)0x0) {
            puVar12 = (undefined8 *)((long)puVar12 + -1);
            *puVar20 = 0;
            puVar20 = puVar20 + (ulong)bVar25 * 0x1ffffffffffffffe + 1;
          }
          while( true ) {
            puStack552 = &UNK_0010219a;
            iVar6 = get_next(puVar16);
            if (iVar6 == -1) break;
            bVar2 = *(byte *)((long)auStack336 + (long)iVar6);
            *(undefined *)((long)auStack336 + (long)iVar6) = 1;
            iVar4 = iVar4 - (uint)(bVar2 ^ 1);
          }
          puVar17 = (undefined1 *)(long)iVar4;
          puStack440 = (undefined8 *)puVar17;
        }
        lVar23 = lStack432;
        puVar20 = puStack440;
        if (lStack432 != 0) goto code_r0x001024a9;
        if (plVar14 == (long *)0x0) goto code_r0x00101ed1;
        puStack552 = &UNK_00101b97;
        get_spec_stats(plVar14);
        puVar17 = (undefined1 *)puVar20;
        if ((puVar20 < (undefined8 *)plVar14[3]) || (plVar14[4] != 1)) {
          if (1 < (ulong)plVar14[4]) goto code_r0x00102485;
          if (translating != '\0') goto code_r0x00101bce;
          if (plVar14[4] == 0) goto code_r0x00101ed1;
code_r0x00102095:
          puStack552 = &UNK_001020a8;
          uVar10 = func_0x00101690(0,&UNK_001082f0,5);
          puStack552 = &UNK_001020b9;
          iVar6 = func_0x00101850(1,0,uVar10);
          iVar4 = extraout_EDX;
          goto code_r0x001020b9;
        }
        puVar12 = (undefined8 *)((long)puVar20 - (long)(undefined8 *)plVar14[3]);
        bVar24 = translating == '\0';
        *(undefined8 **)(plVar14[5] + 0x18) = puVar12;
        *(undefined8 **)(plVar14 + 3) = puVar20;
        if (bVar24) goto code_r0x00102095;
code_r0x00101bce:
        if (*(char *)(plVar14 + 6) == '\0') {
          if (*(char *)((long)plVar14 + 0x32) == '\0') {
            bVar24 = *(bool *)((long)plVar14 + 0x31);
            puVar17 = (undefined1 *)(ulong)bVar24;
            if (bVar24 == false) {
code_r0x001021eb:
              puVar20 = (undefined8 *)plVar14[3];
              auVar26 = CONCAT88(puVar20,puStack440);
              if (puStack440 <= puVar20) goto code_r0x00101e78;
              if (truncate_set1 != '\0') goto code_r0x00101e78;
              if (puVar20 == (undefined8 *)0x0) {
code_r0x0010266c:
                puStack552 = &UNK_0010267f;
                uVar10 = func_0x00101690(0,&UNK_001081d8,5);
                puStack552 = &UNK_00102690;
                func_0x00101850(1,0,uVar10);
              }
              else {
                puVar12 = (undefined8 *)plVar14[1];
                iVar4 = *(int *)puVar12;
                if (iVar4 == 1) goto code_r0x00102450;
                if (iVar4 != 0) {
                  if (iVar4 == 2) {
                    puStack552 = &UNK_0010265b;
                    uVar10 = func_0x00101690(0,&UNK_00108210,5);
                    puStack552 = &UNK_0010266c;
                    func_0x00101850(1,0,uVar10);
                    goto code_r0x0010266c;
                  }
                  if (iVar4 != 4) {
                    puStack552 = &UNK_0010223f;
                    func_0x00101600();
                    goto code_r0x0010223f;
                  }
                }
                uVar22 = *(undefined *)(puVar12 + 2);
                while( true ) {
                  puVar17 = (undefined1 *)(SUB168(auVar26,0) - SUB168(auVar26 >> 0x40,0));
                  puStack552 = &UNK_00101e44;
                  puVar8 = (undefined4 *)xmalloc();
                  lVar23 = plVar14[1];
                  *(undefined8 *)(puVar8 + 2) = 0;
                  *puVar8 = 4;
                  *(undefined *)(puVar8 + 4) = uVar22;
                  *(undefined1 **)(puVar8 + 6) = puVar17;
                  if (lVar23 == 0) break;
                  *(undefined4 **)(lVar23 + 8) = puVar8;
                  *(undefined4 **)(plVar14 + 1) = puVar8;
                  *(undefined8 **)(plVar14 + 3) = puStack440;
code_r0x00101e78:
                  if ((complement == 0) || (cStack415 == '\0')) {
code_r0x00101ed1:
                    puStack552 = &UNK_00101ee2;
                    fadvise();
                    plVar15 = (long *)puVar16;
                    if (squeeze_repeats == 0) goto code_r0x00101f7e;
                    if ((int)unaff_R12 == 1) {
                      puStack552 = &UNK_0010239d;
                      set_initialize(puVar16,(ulong)complement,in_squeeze_set);
                      puStack552 = &UNK_001023a9;
                      squeeze_filter_constprop_14();
                      goto code_r0x00101f43;
                    }
                    if ((delete != 0) && ((int)unaff_R12 == 2)) {
                      puStack552 = &UNK_00101f26;
                      set_initialize(puVar16,(ulong)complement,in_delete_set);
                      puStack552 = &UNK_00101f37;
                      set_initialize(plVar14,0,in_squeeze_set);
                      puStack552 = &UNK_00101f43;
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
                    puVar17 = (undefined1 *)0xffffffffffffffff;
                    puStack448 = (undefined8 *)0xfffffffffffffffe;
                    plVar14[2] = -2;
                    piStack544 = &iStack472;
                    puStack536 = &uStack468;
code_r0x00101fe7:
                    puStack552 = &UNK_00101ff3;
                    iVar4 = get_next(puVar16,piStack544);
                    lVar23 = (long)iVar4;
                    puStack552 = &UNK_00102003;
                    iVar6 = get_next(plVar14);
                    puVar20 = (undefined8 *)puVar17;
                    iVar4 = iStack472;
                    if (iStack472 != 0) {
code_r0x001020b9:
                      puVar17 = (undefined1 *)puVar20;
                      if ((iVar4 != 1) || (uStack468 != 0)) goto code_r0x0010201a;
                      puStack552 = &UNK_001020d2;
                      plVar15 = (long *)func_0x001018e0();
                      lVar23 = *plVar15;
                      lVar11 = 0;
                      do {
                        if ((*(byte *)(lVar23 + 1 + lVar11 * 2) & 1) != 0) {
                          puStack552 = &UNK_001020ed;
                          plVar15 = (long *)func_0x001018d0();
                          unaff_R12[lVar11] = (char)*(undefined4 *)(*plVar15 + lVar11 * 4);
                        }
                        lVar11 = lVar11 + 1;
                      } while (lVar11 != 0x100);
                      goto code_r0x00102038;
                    }
                    if (uStack468 == 1) {
                      puStack552 = &UNK_0010211e;
                      plVar15 = (long *)func_0x001018e0();
                      lVar23 = *plVar15;
                      lVar11 = 0;
                      do {
                        if ((*(byte *)(lVar23 + 1 + lVar11 * 2) & 2) != 0) {
                          puStack552 = &UNK_00102135;
                          plVar15 = (long *)func_0x001015e0();
                          unaff_R12[lVar11] = (char)*(undefined4 *)(*plVar15 + lVar11 * 4);
                        }
                        lVar11 = lVar11 + 1;
                      } while (lVar11 != 0x100);
                      goto code_r0x00102038;
                    }
code_r0x0010201a:
                    lStack432._0_4_ = (uint)lVar23;
                    if (((uint)lStack432 != 0xffffffff) && (iVar6 != -1)) goto code_r0x0010202d;
code_r0x0010223f:
                    if (((uint)lStack432 == 0xffffffff) ||
                       (plVar15 = plVar14, truncate_set1 != '\0')) {
                      do {
                        puVar16 = io_buf;
                        if (squeeze_repeats != 0) goto code_r0x00102365;
                        do {
                          puStack552 = &UNK_00102273;
                          plVar14 = (long *)read_and_xlate(io_buf,0x2000);
                          if (plVar14 == (long *)0x0) goto code_r0x00101f43;
                          puStack552 = &UNK_00102296;
                          plVar15 = (long *)func_0x00101810(io_buf,1,plVar14,stdout);
                        } while (plVar14 == plVar15);
                        puStack552 = &UNK_001022ae;
                        plVar14 = (long *)func_0x00101690(0,&UNK_00107082,5);
                        puStack552 = &UNK_001022b6;
                        puVar9 = (uint *)func_0x00101610();
                        puStack552 = &UNK_001022c7;
                        func_0x00101850(1,(ulong)*puVar9,plVar14);
code_r0x001022c7:
                        unaff_R12 = xlate;
                        puStack552 = &UNK_001022df;
                        set_initialize(puVar16,0,in_delete_set);
                        plVar14[2] = -2;
                        lVar23 = 0;
                        do {
                          xlate[lVar23] = (char)lVar23;
                          lVar23 = lVar23 + 1;
                        } while (lVar23 != 0x100);
                        puVar16 = (undefined1 *)0x0;
                        puVar17 = in_delete_set;
                        do {
                          if (*(char *)((long *)puVar16 + 0x6163c) == '\0') {
                            puStack552 = &UNK_0010232e;
                            iVar4 = get_next(plVar14,0);
                            if (iVar4 == -1) {
                              if (truncate_set1 == '\0') {
                                puStack552 = &UNK_00102365;
                                func_0x00101720(&UNK_0010719d,&UNK_00107021,0x72d,
                                                &__PRETTY_FUNCTION___7483);
                                goto code_r0x00102365;
                              }
                              break;
                            }
                            *(char *)((long *)puVar16 + 0x6161c) = (char)iVar4;
                          }
                          puVar16 = (undefined1 *)((long)puVar16 + 1);
                        } while ((long *)puVar16 != (long *)0x100);
                      } while( true );
                    }
                    goto code_r0x00102515;
                  }
                  if ((undefined8 *)plVar14[3] == puStack440) {
                    plVar14[2] = -2;
                    puStack552 = &UNK_00101eac;
                    uVar21 = get_next(plVar14,0);
                    if (uVar21 != 0xffffffff) {
                      do {
                        puStack552 = &UNK_00101ecc;
                        uVar5 = get_next(plVar14,0);
                        puVar17 = (undefined1 *)(ulong)uVar21;
                        if (uVar5 == 0xffffffff) goto code_r0x00101ed1;
                      } while (uVar21 == uVar5);
                    }
                  }
code_r0x0010242c:
                  puStack552 = &UNK_0010243f;
                  uVar10 = func_0x00101690(0,&UNK_00108280,5);
                  puStack552 = &UNK_00102450;
                  auVar26 = func_0x00101850(1,0,uVar10);
code_r0x00102450:
                  uVar22 = *(undefined *)((long)puVar12 + 0x11);
                }
              }
              puStack552 = &UNK_00102695;
              auVar26 = append_repeated_char_part_8();
              puStack552 = SUB168(auVar26,0);
              (*(code *)PTR___libc_start_main_0030afd8)
                        (main,piStack544,&puStack536,__libc_csu_init,__libc_csu_fini,
                         SUB168(auVar26 >> 0x40,0),&puStack552);
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            puStack552 = &UNK_00101bf5;
            ppuVar7 = (ushort **)func_0x001018e0();
            puVar13 = *ppuVar7;
            lVar11 = 0;
            puVar1 = puVar13 + 0x100;
            do {
              lVar23 = (lVar23 + 1) - (ulong)((*puVar13 & 0x100) == 0);
              lVar11 = (lVar11 + 1) - (ulong)((*puVar13 & 0x200) == 0);
              puVar13 = puVar13 + 1;
            } while (puVar13 != puVar1);
            puStack520 = puStack440;
            uStack512 = plVar14[3];
            lStack504 = lStack456;
            lStack496 = plVar14[1];
            plVar14[2] = -2;
            puStack448 = (undefined8 *)0xfffffffffffffffe;
            piStack544 = &iStack472;
            puStack536 = &uStack468;
            plVar15 = (long *)(lVar23 - 1);
            plStack528 = (long *)puVar16;
            uStack484 = uVar21;
            do {
              puStack552 = &UNK_00101d3e;
              uVar21 = get_next(plStack528,piStack544);
              unaff_R12 = (undefined1 *)(ulong)uVar21;
              puStack552 = &UNK_00101d4e;
              iVar4 = get_next(plVar14);
              puVar12 = (undefined8 *)(ulong)uStack468;
              if ((char)puVar17 == '\0') {
                if (uStack468 != 2) {
code_r0x00101cb1:
                  lStack456 = *(long *)(lStack456 + 8);
                  puStack448 = (undefined8 *)0xffffffffffffffff;
                  lVar23 = *(long *)(plVar14[1] + 8);
                  plVar14[2] = -1;
                  plVar14[1] = lVar23;
                  plVar18 = (long *)(lVar11 - 1U);
                  if (iStack472 == 1) {
                    plVar18 = plVar15;
                  }
                  puStack440 = (undefined8 *)((long)puStack440 - (long)plVar18);
                  plVar18 = plVar15;
                  if (uStack468 != 1) {
                    plVar18 = (long *)(lVar11 - 1U);
                  }
                  puVar12 = (undefined8 *)(plVar14[3] - (long)plVar18);
                  *(undefined8 **)(plVar14 + 3) = puVar12;
                }
              }
              else {
                if (uStack468 != 2) {
                  puVar16 = (undefined1 *)plVar14;
                  if ((bVar24 != false) && (iStack472 != 2)) goto code_r0x00101cb1;
                  goto code_r0x00102534;
                }
              }
              bVar24 = puStack448 == (undefined8 *)0xffffffffffffffff;
              lStack432._0_4_ = (uint)bVar24;
              puVar17 = (undefined1 *)(ulong)(plVar14[2] == -1);
            } while ((uVar21 != 0xffffffff) && (iVar4 != -1));
            unaff_R12 = (undefined1 *)(ulong)uStack484;
            puVar16 = (undefined1 *)plStack528;
            if ((puStack440 <= puStack520) && ((ulong)plVar14[3] <= uStack512)) {
              lStack456 = lStack504;
              plVar14[1] = lStack496;
              goto code_r0x001021eb;
            }
            goto code_r0x00102466;
          }
          goto code_r0x001024cd;
        }
      }
      puStack552 = &UNK_00102504;
      uVar10 = func_0x00101690(0,&UNK_001080d0,5);
      puStack552 = &UNK_00102515;
      func_0x00101850(1,0,uVar10);
      plVar15 = plVar14;
code_r0x00102515:
      puStack552 = &UNK_00102534;
      func_0x00101720(&UNK_001071b7,&UNK_00107021,0x762,&__PRETTY_FUNCTION___7483);
code_r0x00102534:
      puStack552 = &UNK_00102547;
      uVar10 = func_0x00101690(0,&UNK_00108170,5);
      puStack552 = &UNK_00102558;
      func_0x00101850(1,0,uVar10);
      plVar14 = plVar15;
code_r0x00102558:
      if ((int)unaff_R12 != 0) {
        puStack552 = &UNK_0010258d;
        plVar14 = (long *)quote(((undefined8 *)puVar17)[(long)plVar14 - 1]);
        puStack552 = &UNK_001025a3;
        uVar10 = func_0x00101690(0,&UNK_00107173,5);
        puStack552 = &UNK_001025b4;
        func_0x00101850(0,0,uVar10,plVar14);
        puVar19 = &UNK_00107fe8;
        if (squeeze_repeats != 0) {
          puVar19 = &UNK_00107fa0;
        }
        goto code_r0x001025d2;
      }
      puStack552 = &UNK_00102570;
      uVar10 = func_0x00101690(0,&UNK_00107163,5);
      puStack552 = &UNK_0010257e;
      func_0x00101850(0,0,uVar10);
    }
    else {
      if (squeeze_repeats == delete) {
        iVar6 = 2;
        iVar4 = 2;
      }
      else {
code_r0x00101af7:
        iVar6 = 1;
        iVar4 = 2 - (uint)(squeeze_repeats < delete);
      }
      translating = '\0';
      if ((int)uVar21 < iVar6) goto code_r0x00102558;
code_r0x00101b0c:
      if ((int)uVar21 <= iVar4) {
        puStack552 = &UNK_00101b24;
        lStack464 = xmalloc(0x20);
        *(undefined8 *)(lStack464 + 8) = 0;
        puStack552 = &UNK_00101b4a;
        lStack456 = lStack464;
        cVar3 = parse_str(((undefined8 *)puVar17)[(int)optind]);
        if (cVar3 != '\0') {
          plVar14 = (long *)0x0;
          if (uVar21 == 2) goto code_r0x00101dbb;
          goto code_r0x00101b5e;
        }
        goto code_r0x00101e01;
      }
      puStack552 = &UNK_00102609;
      plVar14 = (long *)quote(((undefined8 *)puVar17)[(int)(iVar4 + optind)]);
      puStack552 = &UNK_0010261f;
      uVar10 = func_0x00101690(0,&UNK_0010718c,5);
      puStack552 = &UNK_00102630;
      func_0x00101850(0,0,uVar10,plVar14);
      puVar19 = &UNK_00108018;
      if (uVar21 != 2) goto code_r0x00101a27;
code_r0x001025d2:
      puStack552 = &UNK_001025d9;
      uVar10 = func_0x00101690(0,puVar19,5);
      puStack552 = &UNK_001025f6;
      func_0x001018a0(stderr,1,&UNK_00108870,uVar10);
    }
  }
  else {
    if (iVar4 == 0x43) {
code_r0x00101a99:
      complement = 1;
      goto code_r0x001019b8;
    }
    if (iVar4 < 0x44) {
      if (iVar4 == -0x82) {
        puStack552 = &UNK_00102461;
        usage(0);
        goto code_r0x00102461;
      }
      if (iVar4 != 0x41) {
        if (iVar4 != -0x83) goto code_r0x00101a27;
        goto code_r0x00101a38;
      }
      goto code_r0x00101a70;
    }
    if (iVar4 == 100) {
      delete = 1;
      goto code_r0x001019b8;
    }
    if (iVar4 < 0x65) {
      if (iVar4 == 99) goto code_r0x00101a99;
      goto code_r0x00101a27;
    }
    if (iVar4 == 0x73) {
      squeeze_repeats = 1;
      goto code_r0x001019b8;
    }
    if (iVar4 == 0x74) {
      truncate_set1 = '\x01';
      goto code_r0x001019b8;
    }
  }
code_r0x00101a27:
  puStack552 = &UNK_00101a31;
  usage(1);
code_r0x00101a38:
  puStack552 = &UNK_00101a65;
  version_etc(stdout,&UNK_0010708e,&UNK_00107107,Version,&UNK_0010714e,0);
  puStack552 = &UNK_00101a6c;
  func_0x00101880(0);
code_r0x00101a70:
  puStack552 = &UNK_00101a81;
  func_0x00101830(3,&UNK_0010714c);
  puStack552 = &UNK_00101a8f;
  func_0x00101830(0,&UNK_0010714c);
  goto code_r0x001019b8;
code_r0x0010202d:
  unaff_R12[lVar23] = (char)iVar6;
  if (uStack468 != 2) {
code_r0x00102038:
    lStack456 = *(long *)(lStack456 + 8);
    lVar23 = *(long *)(plVar14[1] + 8);
    *(undefined1 **)(plVar14 + 2) = puVar17;
    plVar14[1] = lVar23;
    puStack448 = (undefined8 *)puVar17;
  }
  goto code_r0x00101fe7;
code_r0x00102365:
  puStack552 = &UNK_00102376;
  set_initialize(plVar14,0,in_squeeze_set);
  puStack552 = &UNK_00102382;
  squeeze_filter_constprop_14(read_and_xlate);
code_r0x00101f43:
  do {
    puStack552 = &UNK_00101f4a;
    uVar10 = func_0x00101750(0);
    if ((int)uVar10 == 0) goto code_r0x00101e06;
    puStack552 = &UNK_00101f65;
    plVar14 = (long *)func_0x00101690(0,&UNK_001071d1,5);
    puStack552 = &UNK_00101f6d;
    puVar9 = (uint *)func_0x00101610();
    puStack552 = &UNK_00101f7e;
    func_0x00101850(1,(ulong)*puVar9,plVar14);
    plVar15 = (long *)puVar16;
code_r0x00101f7e:
    puVar16 = (undefined1 *)plVar15;
    if ((delete == 0) ||
       (uVar21 = (int)unaff_R12 - 1, unaff_R12 = (undefined1 *)(ulong)uVar21, uVar21 != 0))
    goto code_r0x00101f91;
    puVar16 = io_buf;
    puStack552 = &UNK_001023cb;
    set_initialize(plVar15,(ulong)complement,in_delete_set);
    while( true ) {
      puStack552 = &UNK_001023d8;
      plVar14 = (long *)read_and_delete(io_buf,0x2000);
      if (plVar14 == (long *)0x0) break;
      puStack552 = &UNK_001023fb;
      puVar12 = stdout;
      plVar15 = (long *)func_0x00101810(io_buf,1,plVar14);
      if (plVar14 != plVar15) {
        puStack552 = &UNK_00102413;
        plVar14 = (long *)func_0x00101690(0,&UNK_00107082,5);
        puStack552 = &UNK_0010241b;
        puVar9 = (uint *)func_0x00101610();
        puStack552 = &UNK_0010242c;
        func_0x00101850(1,(ulong)*puVar9,plVar14);
        goto code_r0x0010242c;
      }
    }
  } while( true );
}

