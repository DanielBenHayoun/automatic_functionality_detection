
ulong ln(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined auVar20 [16];
  undefined *apuStack288 [9];
  undefined auStack216 [24];
  uint auStack192 [32];
  undefined8 uStack64;
  
  bVar19 = false;
  puVar9 = (undefined8 *)(param_1 & 0xffffffff);
  puVar16 = (undefined8 *)0x0;
  ppuVar10 = apuStack288 + 3;
  uStack64 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00102160(6,&UNK_0010c6f8);
  func_0x00101ec0(&UNK_0010b0bb,&UNK_0010b0e4);
  func_0x00101e90(&UNK_0010b0bb);
  atexit(close_stdin);
  hard_dir_link = '\0';
  verbose = 0;
  interactive = 0;
  remove_existing_files = '\0';
  symbolic_link = '\0';
  apuStack288[4] = 0;
  apuStack288[5] = auStack216;
  puVar15 = (undefined *)0;
  puVar18 = (undefined *)0;
code_r0x00102370:
  do {
    while( true ) {
      while( true ) {
        iVar3 = (int)puVar9;
        ppuVar10[-1] = 0x10238b;
        uVar1 = func_0x00101f40((ulong)puVar9 & 0xffffffff,param_2,&UNK_0010b135);
        pcVar14 = (code *)(ulong)uVar1;
        if (uVar1 == 0xffffffff) goto code_r0x001025fc;
        if (uVar1 != 0x62) break;
        puVar16 = (undefined8 *)0x1;
        if (optarg != (undefined *)0x0) {
          puVar18 = optarg;
        }
      }
      if ((int)uVar1 < 99) break;
      if (uVar1 == 0x6e) {
        dereference_dest_dir_symlinks = '\0';
      }
      else {
        if ((int)uVar1 < 0x6f) {
          if (uVar1 == 0x66) {
            remove_existing_files = '\x01';
            interactive = 0;
          }
          else {
            if (uVar1 == 0x69) {
              remove_existing_files = '\0';
              interactive = 1;
            }
            else {
              if (uVar1 != 100) goto code_r0x001025f2;
code_r0x001025e0:
              hard_dir_link = '\x01';
            }
          }
        }
        else {
          if (uVar1 == 0x73) {
            symbolic_link = '\x01';
          }
          else {
            if ((int)uVar1 < 0x74) goto code_r0x001024b8;
            if (uVar1 == 0x74) {
              if (puVar15 != (undefined *)0x0) {
                ppuVar10[-1] = 0x1029f0;
                uVar4 = func_0x00101ed0(0,&UNK_0010be98,5);
                ppuVar10[-1] = 0x102a01;
                func_0x001021b0(1,0,uVar4);
                goto code_r0x00102a01;
              }
              ppuVar10[-1] = 0x10251f;
              iVar3 = func_0x001020d0(1,optarg,ppuVar10[2]);
              puVar15 = optarg;
              if (iVar3 != 0) {
                ppuVar10[-1] = 0x102a73;
                uVar4 = quotearg_style(4,optarg);
                ppuVar10[-1] = 0x102a89;
                uVar5 = func_0x00101ed0(0,&UNK_0010afa8,5);
                ppuVar10[-1] = 0x102a91;
                puVar7 = (uint *)func_0x00101dd0();
                uVar1 = *puVar7;
                ppuVar10[-1] = 0x102aa5;
                auVar20 = func_0x001021b0(1,(ulong)uVar1,uVar5,uVar4);
                uVar4 = *ppuVar10;
                uVar11 = (ulong)(ppuVar10 + 1) & 0xfffffffffffffff0;
                *(undefined8 *)(uVar11 - 8) = SUB168(auVar20,0);
                *(ulong *)(uVar11 - 0x10) = uVar11 - 8;
                *(undefined8 *)(uVar11 - 0x18) = 0x102ada;
                (*(code *)PTR___libc_start_main_0030ffd0)
                          (main,uVar4,ppuVar10 + 1,__libc_csu_init,__libc_csu_fini,
                           SUB168(auVar20 >> 0x40,0));
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              if ((*(uint *)(ppuVar10 + 9) & 0xf000) != 0x4000) {
                ppuVar10[-1] = 0x10254f;
                puVar9 = (undefined8 *)quotearg_style(4,optarg);
                ppuVar10[-1] = 0x102565;
                uVar4 = func_0x00101ed0(0,&UNK_0010b0fc,5);
                ppuVar10[-1] = 0x102579;
                func_0x001021b0(1,0,uVar4,puVar9);
code_r0x00102580:
                logical = 1;
              }
            }
            else {
              if (uVar1 != 0x76) goto code_r0x001025f2;
              verbose = 1;
            }
          }
        }
      }
    }
    if (uVar1 == 0x4c) goto code_r0x00102580;
    if ((int)uVar1 < 0x4d) {
      if (uVar1 == 0xffffff7e) {
        ppuVar10[-1] = 0x102954;
        usage(0);
        goto code_r0x00102954;
      }
      if (uVar1 == 0x46) goto code_r0x001025e0;
      if (uVar1 != 0xffffff7d) {
code_r0x001025f2:
        do {
          while( true ) {
            iVar3 = (int)puVar9;
            *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1025fc;
            usage(1);
code_r0x001025fc:
            uVar1 = iVar3 - optind;
            pcVar8 = (code *)(ulong)uVar1;
            puVar9 = param_2 + optind;
            if (0 < (int)uVar1) break;
code_r0x00102954:
            *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102967;
            uVar4 = func_0x00101ed0(0,&UNK_0010b146,5);
            *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102975;
            func_0x001021b0(0,0,uVar4);
          }
          if ((relative == '\0') || (symbolic_link != '\0')) {
            if (hard_dir_link == '\0') {
              beware_hard_dir_link = 0;
            }
            if (!bVar19) goto code_r0x00102710;
            if (puVar15 != (undefined *)0x0) {
              *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102a32;
              uVar4 = func_0x00101ed0(0,&UNK_0010bee8,5);
              *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102a43;
              func_0x001021b0(1,0,uVar4);
              goto code_r0x00102a43;
            }
            if (uVar1 == 2) {
code_r0x00102655:
              if ((char)puVar16 == '\0') {
                *(int *)((undefined *)ppuVar10 + 0x10) = (int)pcVar14;
                backup_type = 0;
                *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1028c0;
                set_simple_backup_suffix(*(undefined8 *)((undefined *)ppuVar10 + 8));
                pcVar14 = (code *)(ulong)*(uint *)((undefined *)ppuVar10 + 0x10);
                goto code_r0x001028c5;
              }
              puVar15 = (undefined *)0x2;
              puVar12 = (undefined *)0x0;
code_r0x00102666:
              do {
                *(int *)((undefined *)ppuVar10 + 0x10) = (int)pcVar14;
                *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x10267e;
                uVar4 = func_0x00101ed0(0,&UNK_0010b176,5);
                *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102689;
                uVar4 = xget_version(uVar4,puVar18);
                pcVar14 = (code *)(ulong)*(uint *)((undefined *)ppuVar10 + 0x10);
                do {
                  iVar3 = (int)puVar15;
                  *(int *)((undefined *)ppuVar10 + 0x10) = (int)pcVar14;
                  backup_type = (int)uVar4;
                  *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1026a3;
                  set_simple_backup_suffix();
                  pcVar14 = (code *)(ulong)*(uint *)((undefined *)ppuVar10 + 0x10);
                  if (puVar12 == (undefined *)0x0) goto code_r0x001028c5;
                  if (iVar3 < 2) {
                    if (iVar3 == 0) {
                      uVar1 = 1;
                    }
                    else {
code_r0x0010275b:
                      puVar18 = (undefined *)ppuVar10 + 0x28;
                      uVar1 = 1;
                      puVar17 = puVar9;
                      do {
                        uVar4 = *puVar17;
                        puVar16 = puVar17 + 1;
                        *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102785;
                        uVar4 = last_component(uVar4);
                        *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102793;
                        uVar5 = file_name_concat(puVar12,uVar4,puVar18);
                        *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1027a0;
                        strip_trailing_slashes(*(undefined8 *)((undefined *)ppuVar10 + 0x28));
                        uVar4 = *puVar17;
                        pcVar14 = (code *)0xffffffff;
                        *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1027bb;
                        uVar2 = do_link(uVar4,(ulong)*(uint *)((undefined *)ppuVar10 + 0x18),
                                        *(undefined8 *)((undefined *)ppuVar10 + 0x28),uVar5);
                        uVar1 = uVar1 & uVar2;
                        *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1027c5;
                        func_0x00101db0();
                        puVar17 = puVar16;
                      } while (puVar16 != puVar9 + (ulong)(iVar3 - 1) + 1);
                    }
                    goto code_r0x001027ca;
                  }
                  if (((remove_existing_files == '\0') || (symbolic_link != '\0')) ||
                     (backup_type == 3)) goto code_r0x0010275b;
                  pcVar14 = triple_free;
                  pcVar8 = triple_compare;
                  *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1026ff;
                  dest_set = hash_initialize(0x3d,0,triple_hash);
                  if (dest_set != 0) goto code_r0x0010275b;
                  *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102710;
                  xalloc_die();
code_r0x00102710:
                  uVar13 = SUB84(pcVar14,0);
                  bVar19 = puVar15 == (undefined *)0x0;
                  iVar3 = (int)pcVar8;
                  if ((iVar3 < 2) && (bVar19)) {
                    if ((char)puVar16 == '\0') {
                      puVar12 = &UNK_0010bf54;
                      backup_type = 0;
                      iVar3 = 1;
                      *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102753;
                      set_simple_backup_suffix(*(undefined8 *)((undefined *)ppuVar10 + 8));
                      *(undefined4 *)((undefined *)ppuVar10 + 0x18) = 0xffffff9c;
                      goto code_r0x0010275b;
                    }
                    goto code_r0x00102a48;
                  }
                  if ((iVar3 == 2) && (bVar19)) {
                    uVar4 = puVar9[1];
                    uVar5 = *puVar9;
                    *(undefined4 *)((undefined *)ppuVar10 + 0x10) = 2;
                    *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102818;
                    uVar6 = atomic_link(uVar5,0xffffff9c,uVar4);
                    iVar3 = (int)uVar6;
                    pcVar14 = (code *)(uVar6 & 0xffffffff);
                    pcVar8 = (code *)(ulong)*(uint *)((undefined *)ppuVar10 + 0x10);
                    if (((iVar3 < 0) || (iVar3 == 0x11)) || (iVar3 == 0x14)) goto code_r0x0010292d;
                    puVar15 = (undefined *)0x2;
                    puVar12 = (undefined *)0x0;
                  }
                  else {
                    puVar12 = puVar15;
                    if (puVar15 != (undefined *)0x0) goto code_r0x0010285d;
code_r0x0010292d:
                    while( true ) {
                      uVar13 = SUB84(pcVar14,0);
                      iVar3 = (int)pcVar8;
                      puVar12 = (undefined *)puVar9[(long)iVar3 + -1];
code_r0x0010285d:
                      *(undefined4 *)((undefined *)ppuVar10 + 0x1c) = uVar13;
                      *(int *)((undefined *)ppuVar10 + 0x10) = iVar3;
                      *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x10288a;
                      iVar3 = openat_safer(0xffffff9c,puVar12,
                                           (ulong)((-(uint)(dereference_dest_dir_symlinks == '\0') &
                                                   0x20000) + 0x210000));
                      *(int *)((undefined *)ppuVar10 + 0x18) = iVar3;
                      pcVar14 = (code *)(ulong)*(uint *)((undefined *)ppuVar10 + 0x1c);
                      if (-1 < iVar3) break;
                      if ((*(int *)((undefined *)ppuVar10 + 0x10) == 2) &&
                         (puVar15 == (undefined *)0x0)) goto code_r0x00102655;
                      *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1028fb;
                      pcVar8 = (code *)quotearg_style(4,puVar12);
                      *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102911;
                      puVar9 = (undefined8 *)func_0x00101ed0(0,&UNK_0010b16c,5);
                      *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102919;
                      puVar7 = (uint *)func_0x00101dd0();
                      uVar1 = *puVar7;
                      *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x10292d;
                      func_0x001021b0(1,(ulong)uVar1,puVar9);
                    }
                    puVar15 = (undefined *)
                              (ulong)(*(int *)((undefined *)ppuVar10 + 0x10) - (uint)bVar19);
                  }
                  uVar4 = 0;
                } while ((char)puVar16 == '\0');
              } while( true );
            }
          }
          else {
            *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x10298d;
            uVar4 = func_0x00101ed0(0,&UNK_0010bec0,5);
            *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x10299e;
            func_0x001021b0(1,0,uVar4);
          }
          if (uVar1 == 1) {
code_r0x00102a01:
            uVar4 = *puVar9;
            *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102a0e;
            puVar9 = (undefined8 *)quotearg_style(4,uVar4);
            puVar12 = &UNK_0010bf28;
          }
          else {
            uVar4 = puVar9[2];
            *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1029b1;
            puVar9 = (undefined8 *)quotearg_style(4,uVar4);
            puVar12 = &UNK_0010b15b;
          }
          *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1029c7;
          uVar4 = func_0x00101ed0(0,puVar12,5);
          *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1029d8;
          func_0x001021b0(0,0,uVar4);
        } while( true );
      }
      ppuVar10[-2] = 0;
      pcVar14 = (code *)&UNK_0010b129;
      ppuVar10[-3] = 0x1024ab;
      version_etc(stdout,&UNK_0010b03b,&UNK_0010b0b7,Version,&UNK_0010b129,&UNK_0010b119);
      ppuVar10[-3] = 0x1024b2;
      func_0x00102240();
      ppuVar10 = ppuVar10 + -2;
code_r0x001024b8:
      if ((int)pcVar14 != 0x72) goto code_r0x001025f2;
      relative = '\x01';
      goto code_r0x00102370;
    }
    if (uVar1 == 0x53) {
      puVar16 = (undefined8 *)0x1;
      ppuVar10[1] = optarg;
    }
    else {
      if (uVar1 == 0x54) {
        bVar19 = true;
      }
      else {
        if (uVar1 != 0x50) goto code_r0x001025f2;
        logical = 0;
      }
    }
  } while( true );
code_r0x001028c5:
  uVar4 = puVar9[1];
  uVar5 = *puVar9;
  *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x1028d9;
  uVar1 = do_link(uVar5,0xffffff9c,uVar4,uVar4);
code_r0x001027ca:
  puVar9 = (undefined8 *)(ulong)(uVar1 ^ 1);
  if (*(long *)((undefined *)ppuVar10 + 200) == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)puVar9 & 0xff;
  }
code_r0x00102a43:
  *(undefined8 *)((undefined *)ppuVar10 + -8) = 0x102a48;
  func_0x00101f20();
code_r0x00102a48:
  puVar15 = (undefined *)0x1;
  *(undefined4 *)((undefined *)ppuVar10 + 0x18) = 0xffffff9c;
  puVar12 = &UNK_0010bf54;
  goto code_r0x00102666;
}