
ulong print_dir(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  undefined8 *puStack896;
  long lStack888;
  undefined8 uStack872;
  undefined8 uStack864;
  undefined auStack728 [664];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puVar15 = param_2;
  piVar8 = (int *)func_0x001032a0();
  *piVar8 = 0;
  puVar16 = (undefined8 *)func_0x001033b0();
  if (puVar16 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)func_0x001033e0(0,&UNK_00117902,5);
    puVar16 = (undefined8 *)(param_3 & 0xff);
    file_failure(puVar16,puVar15,param_1);
  }
  else {
    if (active_dir_set == (undefined8 *)0x0) {
code_r0x0010a5c7:
      puStack896 = (undefined8 *)&UNK_0010a5cc;
      clear_files();
      if ((recursive != '\0') || (print_dir_name != '\0')) {
        if (first_10256 == '\0') {
          puVar1 = (undefined *)stdout[5];
          if (puVar1 < (undefined *)stdout[6]) {
            *(undefined **)(stdout + 5) = puVar1 + 1;
            *puVar1 = 10;
          }
          else {
            puStack896 = (undefined8 *)&UNK_0010aa95;
            func_0x00103490(stdout,10);
          }
          dired_pos = dired_pos + 1;
        }
        first_10256 = '\0';
        if (dired != '\0') {
          puStack896 = (undefined8 *)&UNK_0010aa60;
          func_0x001036d0(&UNK_001178aa,1,2,stdout);
          dired_pos = dired_pos + 2;
        }
        lVar13 = 0;
        if (print_hyperlink != '\0') {
          puStack896 = (undefined8 *)&UNK_0010aa0f;
          lVar13 = canonicalize_filename_mode(param_1,2);
          if (lVar13 == 0) {
            uVar6 = func_0x001033e0(0,&UNK_001178bc,5);
            puStack896 = (undefined8 *)&UNK_0010aa3e;
            file_failure(param_3 & 0xff,uVar6,param_1);
          }
        }
        if (param_2 == (undefined8 *)0x0) {
          param_2 = param_1;
        }
        quote_name(param_2,dirname_quoting_options,0xffffffff,0,1,subdired_obstack,lVar13);
        func_0x00103880(lVar13);
        func_0x001036d0(&UNK_00117b2d,1,2,stdout);
        dired_pos = dired_pos + 2;
        puVar15 = puStack896;
      }
      lStack888 = 0;
      do {
        *piVar8 = 0;
        lVar13 = func_0x00103650(puVar16);
        if (lVar13 == 0) {
          if (*piVar8 == 0) goto code_r0x0010a776;
          puVar15 = (undefined8 *)func_0x001033e0(0,&UNK_0011791b,5);
          file_failure(param_3 & 0xff,puVar15,param_1);
          if (*piVar8 != 0x4b) goto code_r0x0010a776;
        }
        else {
          puVar12 = (undefined8 *)(lVar13 + 0x13);
          puVar9 = ignore_patterns;
          if (ignore_mode != 2) {
            if (*(char *)(lVar13 + 0x13) == '.') {
              if ((ignore_mode == 0) ||
                 (*(char *)(lVar13 + 0x14 + (ulong)(*(char *)(lVar13 + 0x14) == '.')) == '\0'))
              goto code_r0x0010a670;
            }
            else {
              puVar10 = hide_patterns;
              if (ignore_mode == 0) {
                while (puVar9 = ignore_patterns, puVar10 != (undefined8 *)0x0) {
                  puVar15 = puVar12;
                  iVar5 = func_0x001034f0(*puVar10,puVar12,4);
                  if (iVar5 == 0) goto code_r0x0010a670;
                  puVar10 = (undefined8 *)puVar10[1];
                }
              }
            }
          }
          while (puVar9 != (undefined8 *)0x0) {
            puVar15 = puVar12;
            iVar5 = func_0x001034f0(*puVar9,puVar12,4);
            if (iVar5 == 0) goto code_r0x0010a670;
            puVar9 = (undefined8 *)puVar9[1];
          }
          puVar15 = (undefined8 *)0x0;
          bVar3 = *(char *)(lVar13 + 0x12) - 1;
          if (bVar3 < 0xe) {
            puVar15 = (undefined8 *)(ulong)*(uint *)(CSWTCH_920 + (ulong)bVar3 * 4);
          }
          lVar13 = gobble_file_constprop_52(puVar12,puVar15,0,param_1);
          lStack888 = lStack888 + lVar13;
          if ((((format == 1) && (sort_type == -1)) && (print_block_size == '\0')) &&
             (recursive == '\0')) {
            sort_files();
            print_current_files();
            clear_files();
          }
        }
code_r0x0010a670:
        process_signals();
      } while( true );
    }
    uVar4 = func_0x001035b0(puVar16);
    if ((int)uVar4 < 0) {
      iVar5 = func_0x00103640(1,param_1,&uStack872);
      uVar6 = uStack872;
      uVar11 = uStack864;
    }
    else {
      iVar5 = func_0x00103690(1,(ulong)uVar4);
      uVar6 = uStack872;
      uVar11 = uStack864;
    }
    if (iVar5 < 0) {
      puVar15 = (undefined8 *)func_0x001033e0(0,&UNK_00117e40,5);
      file_failure(param_3 & 0xff,puVar15,param_1);
      func_0x00103540();
    }
    else {
      uStack872 = uVar6;
      uStack864 = uVar11;
      puVar9 = (undefined8 *)xmalloc(0x10);
      puVar12 = active_dir_set;
      puVar9[1] = uVar6;
      *puVar9 = uVar11;
      puVar15 = puVar9;
      puVar10 = (undefined8 *)hash_insert();
      if (puVar10 == (undefined8 *)0x0) goto code_r0x0010aa9f;
      if (puVar9 == puVar10) {
        puVar12 = dev_ino_obstack._24_8_;
        if ((ulong)(dev_ino_obstack._32_8_ - (long)dev_ino_obstack._24_8_) < 0x10) {
          puVar15 = (undefined8 *)0x10;
          _obstack_newchunk(dev_ino_obstack);
          puVar12 = dev_ino_obstack._24_8_;
        }
        dev_ino_obstack._24_8_ = puVar12 + 2;
        puVar12[1] = uStack872;
        *puVar12 = uStack864;
        goto code_r0x0010a5c7;
      }
      func_0x00103880(puVar9);
      uVar6 = quotearg_n_style_colon(0,3,param_1);
      uVar11 = func_0x001033e0(0,&UNK_00117e68,5);
      puVar15 = (undefined8 *)0x0;
      func_0x00103760(0,0,uVar11,uVar6);
      func_0x00103540();
      exit_status = 2;
    }
  }
  goto code_r0x0010a4a1;
code_r0x0010a776:
  iVar5 = func_0x00103540();
  if (iVar5 != 0) {
    puVar15 = (undefined8 *)func_0x001033e0(0,&UNK_00117930,5);
    puVar16 = (undefined8 *)(param_3 & 0xff);
    file_failure(puVar16,puVar15,param_1);
  }
  sort_files();
  if (recursive != '\0') {
    puVar15 = (undefined8 *)0x0;
    extract_dirs_from_files();
    puVar16 = param_1;
  }
  if ((format == 0) || (print_block_size != '\0')) {
    if (dired != '\0') {
      func_0x001036d0(&UNK_001178aa,1,2,stdout);
      dired_pos = dired_pos + 2;
    }
    uVar6 = func_0x001033e0(0,&UNK_00117945,5);
    func_0x00103570(uVar6,stdout);
    lVar13 = func_0x00103400(uVar6);
    dired_pos = dired_pos + lVar13;
    puVar1 = (undefined *)stdout[5];
    if (puVar1 < (undefined *)stdout[6]) {
      *(undefined **)(stdout + 5) = puVar1 + 1;
      *puVar1 = 0x20;
    }
    else {
      func_0x00103490(stdout,0x20);
    }
    dired_pos = dired_pos + 1;
    uVar6 = human_readable(lStack888,auStack728,(ulong)human_output_opts,0x200,output_block_size);
    puVar15 = stdout;
    func_0x00103570(uVar6);
    lVar13 = func_0x00103400(uVar6);
    puVar16 = stdout;
    dired_pos = dired_pos + lVar13;
    puVar1 = (undefined *)stdout[5];
    if (puVar1 < (undefined *)stdout[6]) {
      *(undefined **)(stdout + 5) = puVar1 + 1;
      *puVar1 = 10;
    }
    else {
      puVar15 = (undefined8 *)0xa;
      func_0x00103490();
    }
    dired_pos = dired_pos + 1;
  }
  if (cwd_n_used != 0) {
    print_current_files();
  }
code_r0x0010a4a1:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x00103420();
  puVar12 = puVar16;
code_r0x0010aa9f:
  xalloc_die();
  lVar13 = puVar15[0x10];
  lVar2 = puVar12[0x10];
  if (puVar12[0x10] != lVar13 && lVar13 <= lVar2) {
    return 0xffffffff;
  }
  if (lVar2 < lVar13) {
    uVar14 = 1;
  }
  else {
    uVar4 = (int)puVar15[0x11] - *(int *)(puVar12 + 0x11);
    uVar14 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar6 = *puVar15;
      uVar11 = *puVar12;
      puVar7 = (undefined4 *)func_0x001032a0(uVar11,uVar6);
      *puVar7 = 0;
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)PTR_strcoll_0031fed0)(uVar11,uVar6);
      return uVar6;
    }
  }
  return uVar14;
}

