
undefined  [16] comm(uint param_1,undefined8 *param_2)

{
  char cVar1;
  ulong *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined *puVar9;
  char *pcVar10;
  byte bVar11;
  undefined auVar12 [16];
  undefined8 uStack56;
  undefined *puStack48;
  undefined auStack40 [8];
  
  bVar11 = 0;
  puVar7 = (ulong *)auStack40;
  puStack48 = &UNK_001017af;
  set_program_name(*param_2);
  puStack48 = &UNK_001017c0;
  func_0x001016c0(6,&UNK_001061f9);
  puStack48 = &UNK_001017d3;
  func_0x00101520(&UNK_001060fb,&UNK_00106124);
  puStack48 = &UNK_001017df;
  func_0x00101500(&UNK_001060fb);
  puStack48 = &UNK_001017e9;
  hard_LC_COLLATE = hard_locale(3);
  puStack48 = &UNK_001017fb;
  atexit(close_stdout);
  only_file_1 = 1;
  only_file_2 = 1;
  both = 1;
  seen_unpairable = 0;
  issued_disorder_warning._1_1_ = '\0';
  issued_disorder_warning._0_1_ = '\0';
  check_input_order = 0;
  total_option = 0;
code_r0x00101840:
  do {
    puStack48 = &UNK_0010185b;
    iVar3 = func_0x00101570((ulong)param_1,param_2,&UNK_00106160,long_options,0);
    pcVar10 = optarg;
    puVar2 = (ulong *)auStack40;
    if (iVar3 == -1) {
code_r0x001019d9:
      puVar7 = puVar2;
      if (col_sep_len == 0) {
        col_sep_len = 1;
      }
      lVar5 = (long)optind;
      iVar3 = optind;
      if ((int)(param_1 - optind) < 2) goto code_r0x00101a7c;
      if (param_1 - optind == 2) {
        puVar7[-1] = 0x101a09;
        compare_files(param_2 + lVar5);
        if (((char)issued_disorder_warning == '\0') && (issued_disorder_warning._1_1_ == '\0')) {
          return ZEXT816(*puVar7) << 0x40;
        }
        puVar7[-1] = 0x101af8;
        uVar4 = func_0x00101530(0,&UNK_0010619f,5);
        puVar7[-1] = 0x101b09;
        auVar12 = func_0x001016e0(1,0,uVar4);
        uVar4 = *puVar7;
        uVar8 = (ulong)(puVar7 + 1) & 0xfffffffffffffff0;
        *(undefined8 *)(uVar8 - 8) = SUB168(auVar12,0);
        *(ulong *)(uVar8 - 0x10) = uVar8 - 8;
        *(undefined8 *)(uVar8 - 0x18) = 0x101b3a;
        (*(code *)PTR___libc_start_main_00308fc8)
                  (main,uVar4,puVar7 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar12 >> 0x40,0));
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
code_r0x00101ac7:
      uVar4 = param_2[lVar5 + 2];
      *(undefined8 *)((undefined *)puVar7 + -8) = 0x101ad1;
      param_2 = (undefined8 *)quote(uVar4);
      puVar9 = &UNK_0010618e;
      goto code_r0x00101a53;
    }
    if (iVar3 == 0x33) {
      both = 0;
      goto code_r0x00101840;
    }
    if (iVar3 < 0x34) {
      puVar9 = auStack40;
      if (iVar3 == -0x82) goto code_r0x00101a75;
      if (iVar3 < -0x81) {
        puVar9 = auStack40;
        if (iVar3 != -0x83) {
code_r0x00101a6b:
          do {
            *(undefined8 *)(puVar9 + -8) = 0x101a75;
            usage(1);
code_r0x00101a75:
            puVar7 = (ulong *)puVar9;
            *(undefined8 *)((undefined *)puVar7 + -8) = 0x101a7c;
            iVar3 = usage(0);
code_r0x00101a7c:
            if (iVar3 < (int)param_1) {
              uVar4 = param_2[(long)(int)param_1 + -1];
              *(undefined8 *)((undefined *)puVar7 + -8) = 0x101a44;
              param_2 = (undefined8 *)quote(uVar4);
              puVar9 = &UNK_00106175;
code_r0x00101a53:
              *(undefined8 *)((undefined *)puVar7 + -8) = 0x101a5a;
              uVar4 = func_0x00101530(0,puVar9,5);
              *(undefined8 *)((undefined *)puVar7 + -8) = 0x101a6b;
              func_0x001016e0(0,0,uVar4,param_2);
              puVar9 = (undefined *)puVar7;
            }
            else {
              *(undefined8 *)((undefined *)puVar7 + -8) = 0x101a93;
              uVar4 = func_0x00101530(0,&UNK_00106165,5);
              *(undefined8 *)((undefined *)puVar7 + -8) = 0x101aa1;
              func_0x001016e0(0,0,uVar4);
              puVar9 = (undefined *)puVar7;
            }
          } while( true );
        }
        uStack56 = 0;
        version_etc(stdout,&UNK_0010607c,&UNK_001060f7,Version,&UNK_0010614c,&UNK_0010613c);
        func_0x00101720(0);
        puVar2 = &uStack56;
        goto code_r0x001019d9;
      }
      if (iVar3 == 0x31) {
        only_file_1 = 0;
      }
      else {
        puVar9 = auStack40;
        if (iVar3 != 0x32) goto code_r0x00101a6b;
        only_file_2 = 0;
      }
    }
    else {
      if (iVar3 == 0x81) {
        check_input_order = 2;
      }
      else {
        if (iVar3 < 0x82) {
          if (iVar3 == 0x7a) {
            delim = 0;
          }
          else {
            puVar9 = auStack40;
            if (iVar3 != 0x80) goto code_r0x00101a6b;
            check_input_order = 1;
          }
        }
        else {
          if (iVar3 == 0x82) {
            if (col_sep_len != 0) {
              puStack48 = &UNK_00101920;
              iVar3 = func_0x00101610(col_sep,optarg);
              if (iVar3 != 0) {
                puStack48 = &UNK_00101ab6;
                uVar4 = func_0x00101530(0,&UNK_00106040,5);
                puStack48 = &UNK_00101ac7;
                lVar5 = func_0x001016e0(1,0,uVar4);
                goto code_r0x00101ac7;
              }
            }
            col_sep_len = 1;
            col_sep = pcVar10;
            if (*pcVar10 != '\0') {
              uVar6 = 0xffffffffffffffff;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + (ulong)bVar11 * -2 + 1;
              } while (cVar1 != '\0');
              col_sep_len = ~uVar6 - 1;
            }
          }
          else {
            puVar9 = auStack40;
            if (iVar3 != 0x83) goto code_r0x00101a6b;
            total_option = 1;
          }
        }
      }
    }
  } while( true );
}