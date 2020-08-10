
undefined8 main(uint param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  short *unaff_R13;
  long unaff_R14;
  long in_FS_OFFSET;
  undefined auVar12 [16];
  long alStack112 [8];
  
  puVar10 = longopts;
  alStack112[6] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101990(6,&UNK_00106881);
  func_0x001017b0(&UNK_00105d92,&UNK_00105dbb);
  func_0x00101780(&UNK_00105d92);
  atexit(close_stdout);
  plVar7 = alStack112 + 3;
  while( true ) {
    plVar7[-1] = 0x101b47;
    iVar3 = func_0x00101810((ulong)param_1,param_2,&UNK_00105e00,longopts,0);
    if (iVar3 == -1) break;
    puVar8 = plVar7;
    if (iVar3 == 0x69) {
code_r0x00101c20:
      include_fullname = '\0';
      include_where = '\0';
      plVar7 = puVar8;
    }
    else {
      if (iVar3 < 0x6a) {
        if (iVar3 == 0x62) {
          include_home_and_shell = 0;
        }
        else {
          if (iVar3 < 99) {
            if (iVar3 == -0x83) {
              plVar7[-1] = 0;
              puVar8 = plVar7 + -2;
              plVar7[-2] = 0x105df4;
              plVar7[-3] = 0x101c16;
              version_etc(stdout,&UNK_00105d04,&UNK_00105d8e,Version,&UNK_00105de3,&UNK_00105dd3);
              plVar7[-3] = 0x101c1d;
              func_0x00101a10();
              goto code_r0x00101c20;
            }
            if (iVar3 != -0x82) goto code_r0x00101f69;
            plVar7[-1] = 0x101f48;
            usage(0);
            goto code_r0x00101f48;
          }
          if (iVar3 == 0x66) {
            include_heading = '\0';
          }
          else {
            if (iVar3 != 0x68) goto code_r0x00101f69;
            include_project = 0;
          }
        }
      }
      else {
        if (iVar3 == 0x71) {
          include_fullname = '\0';
          include_where = '\0';
          include_idle = '\0';
        }
        else {
          if (iVar3 < 0x72) {
            if (iVar3 == 0x6c) {
              do_short_format = '\0';
            }
            else {
              if (iVar3 != 0x70) goto code_r0x00101f69;
              include_plan = 0;
            }
          }
          else {
            if (iVar3 == 0x73) {
              do_short_format = '\x01';
            }
            else {
              if (iVar3 != 0x77) goto code_r0x00101f69;
              include_fullname = '\0';
            }
          }
        }
      }
    }
  }
  lVar11 = (long)optind;
  param_1 = param_1 - optind;
  if (do_short_format == '\0') {
    if (param_1 == 0) {
code_r0x00101f48:
      plVar7[-1] = 0x101f5b;
      uVar5 = func_0x001017d0(0,&UNK_001062a8,5);
      plVar7[-1] = 0x101f69;
      func_0x001019d0(0,0,uVar5);
code_r0x00101f69:
      plVar7[-1] = 0x101f73;
      usage(1);
code_r0x00101f73:
      plVar7[-1] = 0x101f7d;
      func_0x00101850();
      goto code_r0x00101d8c;
    }
    if (0 < (int)param_1) {
      puVar8 = param_2 + lVar11;
      do {
        uVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        plVar7[-1] = 0x101cdd;
        print_long_entry(uVar5);
      } while (puVar8 != param_2 + lVar11 + (ulong)(param_1 - 1) + 1);
    }
  }
  else {
    puVar10 = (undefined1 *)(lVar11 * 8);
    plVar7[2] = 0;
    plVar7[-1] = 0x101d30;
    iVar3 = read_utmp(&UNK_00105d0a,plVar7 + 1,plVar7 + 2,0);
    if (iVar3 != 0) goto code_r0x00101f87;
    unaff_R13 = (short *)plVar7[2];
    unaff_R14 = plVar7[1];
    plVar7[-1] = 0x101d4c;
    cVar2 = hard_locale(2);
    if (cVar2 == '\0') {
      time_format_width = 0xc;
      time_format = &UNK_00105e19;
    }
    else {
      time_format_width = 0x10;
      time_format = &UNK_00105e0a;
    }
    if (include_heading != '\0') {
      plVar7[-1] = 0x101dfd;
      uVar5 = func_0x001017d0(0,&UNK_00105e25,5);
      plVar7[-1] = 0x101e13;
      func_0x001019a0(1,&UNK_00105e2b,uVar5);
      if (include_fullname != '\0') {
        plVar7[-1] = 0x101ec6;
        uVar5 = func_0x001017d0(0,&UNK_00105e30,5);
        plVar7[-1] = 0x101edc;
        func_0x001019a0(1,&UNK_00105e35,uVar5);
      }
      plVar7[-1] = 0x101e33;
      uVar5 = func_0x001017d0(0,&UNK_00105e3c,5);
      plVar7[-1] = 0x101e49;
      func_0x001019a0(1,&UNK_00105e41,uVar5);
      if (include_idle != '\0') {
        plVar7[-1] = 0x101f1f;
        uVar5 = func_0x001017d0(0,&UNK_00105e47,5);
        plVar7[-1] = 0x101f35;
        func_0x001019a0(1,&UNK_00105cf1,uVar5);
      }
      plVar7[-1] = 0x101e69;
      uVar5 = func_0x001017d0(0,&UNK_00105e4c,5);
      plVar7[-1] = 0x101e85;
      func_0x001019a0(1,&UNK_00105e51,(ulong)time_format_width,uVar5);
      if (include_where != '\0') {
        plVar7[-1] = 0x101ef4;
        uVar5 = func_0x001017d0(0,&UNK_00105e57,5);
        plVar7[-1] = 0x101f0a;
        func_0x001019a0(1,&UNK_00106300,uVar5);
      }
      puVar1 = *(undefined **)(stdout + 0x28);
      if (*(undefined **)(stdout + 0x30) <= puVar1) goto code_r0x00101f73;
      *(undefined **)(stdout + 0x28) = puVar1 + 1;
      *puVar1 = 10;
    }
code_r0x00101d8c:
    while (unaff_R14 = unaff_R14 + -1, unaff_R14 != -1) {
      if ((*(char *)(unaff_R13 + 0x16) != '\0') && (*unaff_R13 == 7)) {
        lVar11 = 0;
        uVar4 = param_1;
        while (uVar4 != 0) {
          if ((int)param_1 <= (int)lVar11) goto code_r0x00101d85;
          uVar5 = *(undefined8 *)((long)param_2 + (long)(lVar11 * 8 + (long)puVar10));
          lVar11 = lVar11 + 1;
          plVar7[-1] = 0x101ddf;
          uVar4 = func_0x00101740(unaff_R13 + 0x16,uVar5,0x20);
        }
        plVar7[-1] = 0x101dc8;
        print_entry(unaff_R13);
      }
code_r0x00101d85:
      unaff_R13 = unaff_R13 + 0xc0;
    }
  }
  if (plVar7[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  plVar7[-1] = 0x101f87;
  func_0x00101800();
code_r0x00101f87:
  plVar7[-1] = 0x101f9a;
  uVar5 = quotearg_n_style_colon(0,3,&UNK_00105d0a);
  plVar7[-1] = 0x101fa2;
  puVar6 = (uint *)func_0x00101720();
  uVar4 = *puVar6;
  plVar7[-1] = 0x101fba;
  auVar12 = func_0x001019d0(1,(ulong)uVar4,&UNK_00106301,uVar5);
  uVar5 = *plVar7;
  uVar9 = (ulong)(plVar7 + 1) & 0xfffffffffffffff0;
  *(undefined8 *)(uVar9 - 8) = SUB168(auVar12,0);
  *(ulong *)(uVar9 - 0x10) = uVar9 - 8;
  *(undefined8 *)(uVar9 - 0x18) = 0x101fea;
  (*(code *)PTR___libc_start_main_00307fd8)
            (main,uVar5,plVar7 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar12 >> 0x40,0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

