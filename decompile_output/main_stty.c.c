
undefined8 main(uint param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  undefined auVar21 [16];
  undefined *puVar22;
  undefined8 uStack88;
  int iStack80;
  byte bStack75;
  byte bStack74;
  byte bStack73;
  char cStack66;
  char cStack65;
  long lStack64;
  
  bVar20 = 0;
  puVar17 = (undefined1 *)0x1;
  puVar15 = (undefined1 *)(ulong)param_1;
  uVar14 = 0;
  puVar9 = (undefined *)0x0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(long *)param_2);
  func_0x001026b0(6,&UNK_0010e041);
  func_0x001024d0(&UNK_0010b474,&UNK_0010b59e);
  func_0x001024b0(&UNK_0010b474);
  atexit(close_stdout);
  opterr = 0;
  bStack73 = 1;
  bStack74 = 0;
  bStack75 = 0;
  iStack80 = 0;
  puVar16 = (undefined *)0x0;
  do {
    while( true ) {
      uVar10 = (uint)puVar17;
      uVar13 = (uint)uVar14;
      puVar22 = &UNK_00102887;
      iVar2 = func_0x00102530((ulong)((int)puVar15 - uVar13),(long *)param_2 + (long)puVar9,
                              &UNK_0010b5cd,longopts,0);
      if (iVar2 != -1) break;
      if ((bStack75 & bStack74) == 0) {
        if (bStack73 != 0) {
          if (puVar16 == (undefined *)0x0) {
            puVar16 = (undefined *)func_0x001024f0(0,&UNK_0010b5d3,5);
            iVar2 = func_0x001026f0(0,mode_7192);
            if (iVar2 != 0) goto code_r0x00102b44;
            goto code_r0x00102b73;
          }
code_r0x00102a36:
          iVar2 = fd_reopen(0,puVar16,0x800);
          if (iVar2 < 0) goto code_r0x00103319;
          uVar13 = rpl_fcntl(0,3);
          if ((uVar13 != 0xffffffff) &&
             (iVar2 = rpl_fcntl(0,4,(ulong)(uVar13 & 0xfffff7ff)), -1 < iVar2))
          goto code_r0x00102a81;
code_r0x001032d8:
          uVar5 = quotearg_n_style_colon(0,3,puVar16);
          uVar6 = func_0x001024f0(0,&UNK_0010da50,5);
          puVar4 = (uint *)func_0x00102450();
          func_0x001026e0(1,(ulong)*puVar4,uVar6,uVar5);
code_r0x00103319:
          uVar5 = quotearg_n_style_colon(0,3,puVar16);
          puVar4 = (uint *)func_0x00102450();
          auVar21 = func_0x001026e0(1,(ulong)*puVar4,&UNK_0010dabc,uVar5);
          uVar5 = uStack88;
          uStack88 = SUB168(auVar21,0);
          (*(code *)PTR___libc_start_main_00310fe0)
                    (main,uVar5,&iStack80,__libc_csu_init,__libc_csu_fini,SUB168(auVar21 >> 0x40,0),
                     &uStack88);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if ((bStack75 != 0) || (bStack74 != 0)) goto code_r0x001032b4;
        if (puVar16 != (undefined *)0x0) {
          apply_settings(1,puVar16,param_2,puVar15,check_mode_7223,&cStack65,&cStack66,puVar22);
          goto code_r0x00102a36;
        }
        puVar22 = &UNK_001030f8;
        puVar16 = (undefined *)func_0x001024f0(0,&UNK_0010b5d3,5);
        apply_settings(1,puVar16,param_2,puVar15,check_mode_7223,&cStack65,&cStack66,puVar22);
code_r0x00102a81:
        puVar22 = &UNK_00102a8f;
        iVar2 = func_0x001026f0(0,mode_7192);
        if (iVar2 == 0) {
          if (((bStack75 | bStack73) == 0) && (bStack74 == 0)) {
            cStack65 = '\0';
            cStack66 = '\0';
            apply_settings(0,puVar16,param_2,puVar15,mode_7192,&cStack65,&cStack66,puVar22);
            if (cStack66 != '\0') goto code_r0x00102df1;
            goto code_r0x00102aee;
          }
        }
        else {
code_r0x00102b44:
          quotearg_n_style_colon(0,3,puVar16);
          puVar4 = (uint *)func_0x00102450();
          func_0x001026e0(1,(ulong)*puVar4,&UNK_0010dabc);
        }
code_r0x00102b73:
        max_col = screen_columns();
        current_col = 0;
        if (iStack80 == 1) {
          display_speed(mode_7192,1);
          display_window_size(1,puVar16);
          wrapf(&UNK_0010b5e2,(ulong)mode_7192[16]);
          puVar9 = *(undefined **)(stdout + 0x28);
          if (puVar9 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar9 + 1;
            *puVar9 = 10;
          }
          else {
            func_0x00102570(stdout,10);
          }
          current_col = 0;
          puVar15 = control_info;
          uVar10 = 0x311180;
          puVar16 = &UNK_0010b596;
          while( true ) {
            puVar9 = *(undefined **)puVar15;
            iVar2 = func_0x00102620(puVar9,&UNK_0010b532);
            if (iVar2 == 0) break;
            iVar2 = func_0x00102620(puVar9,&UNK_0010b5ed);
            if (iVar2 != 0) {
              puVar22 = &UNK_0010b596;
              if (mode_7192[((undefined8 *)puVar15)[2] + 0x11] != 0) {
                puVar22 = (undefined *)
                          visible_part_0((ulong)(byte)mode_7192[((undefined8 *)puVar15)[2] + 0x11]);
              }
              wrapf(&UNK_0010b5f3,puVar9,puVar22);
            }
            puVar15 = (undefined1 *)((undefined8 *)puVar15 + 3);
          }
          wrapf(&UNK_0010b618,(ulong)mode_7192[23],(ulong)mode_7192[22]);
          if (current_col != 0) {
            puVar22 = *(undefined **)(stdout + 0x28);
            if (puVar22 < *(undefined **)(stdout + 0x30)) {
              *(undefined **)(stdout + 0x28) = puVar22 + 1;
              *puVar22 = 10;
            }
            else {
              func_0x00102570(stdout,10);
            }
          }
          current_col = 0;
          param_2 = mode_info;
          uVar14 = 0;
          puVar15 = mode_7192;
          while (*(long *)param_2 != 0) {
            if ((*(byte *)((long)param_2 + 0xc) & 8) == 0) {
              uVar13 = *(uint *)((long *)param_2 + 1);
              if (uVar13 != (uint)uVar14) {
                puVar9 = *(undefined **)(stdout + 0x28);
                if (puVar9 < *(undefined **)(stdout + 0x30)) {
                  *(undefined **)(stdout + 0x28) = puVar9 + 1;
                  *puVar9 = 10;
                }
                else {
                  func_0x00102570(stdout,10);
                }
                uVar14 = (ulong)uVar13;
                uVar13 = *(uint *)((long *)param_2 + 1);
                current_col = 0;
              }
              puVar9 = (undefined *)(ulong)uVar13;
              puVar4 = (uint *)mode_type_flag(puVar9,mode_7192);
              uVar13 = (uint)((long *)param_2)[3];
              if (((long *)param_2)[3] == 0) {
                uVar13 = (uint)((long *)param_2)[2];
              }
              if (puVar4 == (uint *)0x0) goto code_r0x00103295;
              if ((ulong)(uVar13 & *puVar4) == ((long *)param_2)[2]) {
                wrapf(&UNK_0010dabc,*(long *)param_2);
              }
              else {
                if ((*(byte *)((long)param_2 + 0xc) & 4) != 0) {
                  wrapf(&UNK_0010b614,*(long *)param_2);
                }
              }
            }
            param_2 = (undefined1 *)((long *)param_2 + 4);
          }
code_r0x00102ecb:
          puVar22 = *(undefined **)(stdout + 0x28);
          if (puVar22 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar22 + 1;
            *puVar22 = 10;
          }
          else {
            func_0x00102570(stdout,10);
          }
code_r0x00102eeb:
          current_col = 0;
        }
        else {
          if (iStack80 != 2) {
            display_speed(mode_7192,1);
            wrapf(&UNK_0010b5e2,(ulong)mode_7192[16]);
            puVar9 = *(undefined **)(stdout + 0x28);
            if (puVar9 < *(undefined **)(stdout + 0x30)) {
              *(undefined **)(stdout + 0x28) = puVar9 + 1;
              *puVar9 = 10;
            }
            else {
              func_0x00102570(stdout,10);
            }
            current_col = 0;
            puVar17 = control_info;
            puVar15 = (undefined1 *)0x1;
            while( true ) {
              uVar5 = *(undefined8 *)puVar17;
              iVar2 = func_0x00102620(uVar5,&UNK_0010b532);
              if (iVar2 == 0) break;
              bVar1 = mode_7192[((undefined8 *)puVar17)[2] + 0x11];
              puVar16 = (undefined *)(ulong)bVar1;
              if ((bVar1 != *(byte *)((undefined8 *)puVar17 + 1)) &&
                 (iVar2 = func_0x00102620(uVar5,&UNK_0010b5ed), iVar2 != 0)) {
                puVar9 = &UNK_0010b596;
                if (bVar1 != 0) {
                  puVar9 = (undefined *)visible_part_0((ulong)bVar1);
                }
                puVar15 = (undefined1 *)0x0;
                wrapf(&UNK_0010b5f3,uVar5,puVar9);
              }
              puVar17 = (undefined1 *)((undefined8 *)puVar17 + 3);
            }
            if ((mode_7192._12_4_ & 2) == 0) {
              wrapf(&UNK_0010b5fc,(ulong)mode_7192[23],(ulong)mode_7192[22]);
            }
            else {
              if ((char)puVar15 == '\0') {
                puVar9 = *(undefined **)(stdout + 0x28);
                if (puVar9 < *(undefined **)(stdout + 0x30)) {
                  *(undefined **)(stdout + 0x28) = puVar9 + 1;
                  *puVar9 = 10;
                }
                else {
                  func_0x00102570(stdout,10);
                }
              }
            }
            current_col = 0;
            param_2 = mode_info;
            puVar9 = (undefined *)0x0;
            uVar14 = 1;
            while( true ) {
              uVar10 = (uint)puVar17;
              if (*(long *)param_2 == 0) break;
              if ((*(byte *)((long)param_2 + 0xc) & 8) == 0) {
                puVar22 = (undefined *)((ulong)puVar9 & 0xffffffff);
                if (*(int *)((long *)param_2 + 1) != (int)puVar9) {
                  if ((char)uVar14 == '\0') {
                    puVar9 = *(undefined **)(stdout + 0x28);
                    if (puVar9 < *(undefined **)(stdout + 0x30)) {
                      *(undefined **)(stdout + 0x28) = puVar9 + 1;
                      *puVar9 = 10;
                    }
                    else {
                      func_0x00102570(stdout,10);
                    }
                    current_col = 0;
                  }
                  puVar9 = (undefined *)(ulong)*(uint *)((long *)param_2 + 1);
                  uVar14 = 1;
                  puVar22 = puVar9;
                }
                puVar4 = (uint *)mode_type_flag(puVar22,mode_7192);
                uVar13 = (uint)((long *)param_2)[3];
                if (((long *)param_2)[3] == 0) {
                  uVar13 = (uint)((long *)param_2)[2];
                }
                if (puVar4 == (uint *)0x0) {
                  func_0x001025a0(&UNK_0010b4c1,&UNK_0010b4b6,0x7a2,__PRETTY_FUNCTION___7318);
                  goto code_r0x001031c4;
                }
                if ((ulong)(uVar13 & *puVar4) == ((long *)param_2)[2]) {
                  if ((*(byte *)((long)param_2 + 0xc) & 2) != 0) {
                    uVar14 = 0;
                    wrapf(&UNK_0010dabc,*(long *)param_2);
                  }
                }
                else {
                  if ((*(byte *)((long)param_2 + 0xc) & 5) == 5) {
code_r0x00102ead:
                    uVar14 = 0;
                    wrapf(&UNK_0010b614,*(long *)param_2);
                  }
                }
              }
              param_2 = (undefined1 *)((long *)param_2 + 4);
            }
            if ((char)uVar14 == '\0') goto code_r0x00102ecb;
            goto code_r0x00102eeb;
          }
          uVar14 = 0x311191;
          puVar9 = &UNK_0010b63a;
          param_2 = (undefined1 *)0x0;
          func_0x001026d0(1,&UNK_0010b62f,(ulong)mode_7192._0_4_,(ulong)mode_7192._4_4_,
                          (ulong)mode_7192._8_4_,(ulong)mode_7192._12_4_);
          do {
            pbVar11 = (byte *)((long)param_2 + 0x311191);
            param_2 = (undefined1 *)((long)param_2 + 1);
            func_0x001026d0(1,&UNK_0010b63a,(ulong)*pbVar11);
          } while ((long *)param_2 != (long *)0x20);
          puVar22 = *(undefined **)(stdout + 0x28);
          if (puVar22 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar22 + 1;
            *puVar22 = 10;
          }
          else {
            func_0x00102570(stdout,10);
          }
        }
code_r0x00102aee:
        if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
          return 0;
        }
code_r0x001031c4:
        func_0x00102520();
      }
      uVar5 = func_0x001024f0(0,&UNK_0010d9c8,5);
      func_0x001026e0(1,0,uVar5);
code_r0x001031ed:
      puVar22 = puVar16;
      uVar5 = func_0x001024f0(0,&UNK_0010d9a0,5);
      func_0x001026e0(1,0,uVar5);
code_r0x001028f8:
      puVar17 = (undefined1 *)(ulong)uVar10;
      puVar16 = puVar22;
    }
    if (iVar2 == 0x46) {
code_r0x00102940:
      puVar22 = optarg;
      if (puVar16 == (undefined *)0x0) goto code_r0x001028ba;
      goto code_r0x001031ed;
    }
    if (iVar2 < 0x47) {
      if (iVar2 == -0x83) {
        version_etc(stdout,&UNK_0010b33d,&UNK_0010b470,Version);
        func_0x00102760();
        goto code_r0x00102940;
      }
      if (iVar2 != -0x82) goto code_r0x00102960;
      usage(0);
code_r0x00102df1:
      iVar2 = func_0x00102700(0,(ulong)tcsetattr_options,mode_7192);
      if (iVar2 == 0) {
        iVar2 = func_0x001026f0(0,new_mode_7231);
        if (iVar2 == 0) {
          iVar2 = func_0x001025f0(mode_7192,new_mode_7231,0x3c);
          if ((iVar2 != 0) &&
             ((new_mode_7231._8_4_ = new_mode_7231._8_4_ & 0xeff0ffff, cStack65 != '\0' ||
              (iVar2 = func_0x001025f0(mode_7192,new_mode_7231,0x3c), iVar2 != 0)))) {
            param_2 = (undefined1 *)quotearg_n_style_colon(0,3,puVar16);
            uVar5 = func_0x001024f0(0,&UNK_0010da78,5);
            func_0x001026e0(1,0,uVar5);
            goto code_r0x00102ead;
          }
          goto code_r0x00102aee;
        }
        uVar5 = quotearg_n_style_colon(0,3,puVar16);
        puVar4 = (uint *)func_0x00102450();
        func_0x001026e0(1,(ulong)*puVar4,&UNK_0010dabc,uVar5);
      }
      uVar5 = quotearg_n_style_colon(0,3,puVar16);
      puVar4 = (uint *)func_0x00102450();
      func_0x001026e0(1,(ulong)*puVar4,&UNK_0010dabc,uVar5);
code_r0x00103295:
      func_0x001025a0(&UNK_0010b4c1,&UNK_0010b4b6,0x7f6,__PRETTY_FUNCTION___7335);
code_r0x001032b4:
      uVar5 = func_0x001024f0(0,&UNK_0010da18,5);
      func_0x001026e0(1,0,uVar5);
      goto code_r0x001032d8;
    }
    puVar22 = puVar16;
    if (iVar2 == 0x61) {
      bStack75 = 1;
      iStack80 = 1;
code_r0x001028ba:
      uVar13 = optind;
      if ((int)uVar10 < (int)optind) {
        lVar8 = (long)(int)uVar10;
        uVar7 = (optind - 1) - uVar10;
        plVar3 = (long *)param_2 + (long)(puVar9 + lVar8);
        do {
          *plVar3 = 0;
          plVar3 = plVar3 + 1;
          uVar10 = uVar13;
        } while ((long *)param_2 + (long)(puVar9 + lVar8 + (ulong)uVar7 + 1) != plVar3);
      }
      goto code_r0x001028f8;
    }
    if (iVar2 == 0x67) {
      bStack74 = 1;
      iStack80 = 2;
      goto code_r0x001028ba;
    }
code_r0x00102960:
    bVar18 = CARRY4(uVar13,uVar10);
    uVar13 = uVar13 + uVar10;
    uVar14 = (ulong)uVar13;
    bVar19 = uVar13 == 0;
    lVar8 = 7;
    puVar9 = (undefined *)(long)(int)uVar13;
    pbVar11 = (byte *)((long *)param_2)[(long)puVar9];
    pbVar12 = &UNK_0010b5c6;
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      bVar18 = *pbVar11 < *pbVar12;
      bVar19 = *pbVar11 == *pbVar12;
      pbVar11 = pbVar11 + (ulong)bVar20 * -2 + 1;
      pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
    } while (bVar19);
    if (((!bVar18 && !bVar19) != bVar18) &&
       (iVar2 = func_0x00102620((byte *)((long *)param_2)[(long)puVar9],&UNK_0010b5c7), iVar2 != 0))
    {
      bStack73 = 0;
    }
    optind = 0;
    puVar17 = (undefined1 *)0x1;
  } while( true );
}

