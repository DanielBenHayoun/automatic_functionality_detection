
ulong main(uint param_1,undefined8 *param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  undefined auVar15 [16];
  undefined8 uStack88;
  long lStack80;
  undefined uStack66;
  undefined uStack65;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101640(6,&UNK_001060c1);
  func_0x001014b0(&UNK_00105485,&UNK_001054ae);
  func_0x00101490(&UNK_00105485);
  atexit(close_stdout);
  convert_entire_line = 1;
code_r0x00101783:
  iVar3 = func_0x00101500((ulong)param_1,param_2,shortopts,longopts,0);
  if (iVar3 == -1) {
    finalize_tab_stops();
    puVar11 = (undefined8 *)0x0;
    if (optind < (int)param_1) {
      puVar11 = param_2 + optind;
    }
    set_file_list(puVar11);
    lVar4 = next_file(0);
    if (lVar4 != 0) {
      do {
        lStack80 = 0;
        uVar12 = 0;
        uVar14 = 1;
code_r0x001018f7:
        do {
          pbVar2 = *(byte **)(lVar4 + 8);
          if (pbVar2 < *(byte **)(lVar4 + 0x10)) {
            *(byte **)(lVar4 + 8) = pbVar2 + 1;
            uVar10 = (ulong)*pbVar2;
code_r0x0010190c:
            uVar9 = (uint)uVar10;
            if ((char)uVar14 == '\0') goto code_r0x001018d3;
            uVar14 = uVar12;
            if (uVar9 == 9) goto code_r0x001019de;
          }
          else {
            uVar7 = func_0x00101410(lVar4);
            uVar10 = uVar7 & 0xffffffff;
            if (-1 < (int)uVar7) goto code_r0x0010190c;
            lVar4 = next_file(lVar4);
            if (lVar4 != 0) goto code_r0x001018f7;
            if ((char)uVar14 == '\0') goto code_r0x00101974;
          }
          uVar9 = (uint)uVar10;
          if (uVar9 != 8) {
            uVar12 = uVar12 + 1;
            if (uVar12 != 0) {
              uVar13 = (uint)convert_entire_line;
              if (convert_entire_line != 0) goto code_r0x001018cb;
              goto code_r0x001018b7;
            }
            goto code_r0x00101a9c;
          }
          uVar12 = uVar12 - (uVar12 != 0);
          lStack80 = lStack80 - (ulong)(lStack80 != 0);
          while( true ) {
            uVar9 = (uint)uVar10;
            uVar14 = (ulong)convert_entire_line;
            if (convert_entire_line == 0) {
code_r0x001018b7:
              plVar5 = (long *)func_0x001016f0();
              uVar13 = (uint)*(ushort *)(*plVar5 + (long)(int)uVar9 * 2) & 1;
code_r0x001018cb:
              uVar14 = (ulong)uVar13;
              if ((int)uVar9 < 0) goto code_r0x00101974;
            }
code_r0x001018d3:
            puVar1 = *(undefined **)(stdout + 0x28);
            if (puVar1 < *(undefined **)(stdout + 0x30)) break;
            iVar3 = func_0x00101520(stdout,(ulong)(uVar9 & 0xff));
            if (-1 < iVar3) goto code_r0x001018f2;
            uVar8 = func_0x001014c0(0,&UNK_001054ed,5);
            puVar6 = (uint *)func_0x00101440();
            func_0x00101660(1,(ulong)*puVar6,uVar8);
            uVar14 = uVar12;
code_r0x001019de:
            uVar7 = get_next_tab_column(uVar14,&lStack80,(long)&uStack88 + 7);
            if (uStack88._7_1_ == '\0') {
              uVar12 = uVar14;
              if (uVar7 < uVar14) goto code_r0x00101ac0;
              while (uVar12 = uVar12 + 1, uVar12 < uVar7) {
                puVar1 = *(undefined **)(stdout + 0x28);
                if (puVar1 < *(undefined **)(stdout + 0x30)) {
                  *(undefined **)(stdout + 0x28) = puVar1 + 1;
                  *puVar1 = 0x20;
                }
                else {
                  iVar3 = func_0x00101520(stdout,0x20);
                  if (iVar3 < 0) {
                    uVar8 = func_0x001014c0(0,&UNK_001054ed,5);
                    puVar6 = (uint *)func_0x00101440();
                    iVar3 = func_0x00101660(1,(ulong)*puVar6,uVar8);
                    goto code_r0x00101a7f;
                  }
                }
              }
            }
            else {
              uVar12 = uVar14 + 1;
              if (uVar14 == 0xffffffffffffffff) goto code_r0x00101ac0;
            }
            uVar10 = 0x20;
          }
          *(undefined **)(stdout + 0x28) = puVar1 + 1;
          *puVar1 = (char)uVar9;
code_r0x001018f2:
        } while (uVar9 != 10);
      } while( true );
    }
code_r0x00101974:
    cleanup_file_list_stdin();
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)exit_status;
    }
  }
  else {
    if (0x39 < iVar3) {
code_r0x001017f0:
      if (iVar3 == 0x69) {
        convert_entire_line = 0;
      }
      else {
        if (iVar3 != 0x74) goto code_r0x00101a8d;
        parse_tab_stops();
      }
      goto code_r0x00101783;
    }
    if (0x2f < iVar3) {
      if (optarg == 0) {
        uStack66 = (undefined)iVar3;
        uStack65 = 0;
        parse_tab_stops();
      }
      else {
        parse_tab_stops();
      }
      goto code_r0x00101783;
    }
    if (iVar3 == -0x83) {
      version_etc(stdout,&UNK_00105404,&UNK_00105481,Version,&UNK_001054c6,0);
      iVar3 = func_0x001016a0();
      goto code_r0x001017f0;
    }
code_r0x00101a7f:
    if (iVar3 == -0x82) {
      usage(0);
    }
code_r0x00101a8d:
    usage(1);
  }
  func_0x001014f0();
code_r0x00101a9c:
  uVar8 = func_0x001014c0(0,&UNK_001054d6,5);
  func_0x00101660(1,0,uVar8);
code_r0x00101ac0:
  uVar8 = func_0x001014c0(0,&UNK_001054d6,5);
  auVar15 = func_0x00101660(1,0,uVar8);
  uVar8 = uStack88;
  uStack88 = SUB168(auVar15,0);
  (*(code *)PTR___libc_start_main_00307fe0)
            (main,uVar8,&lStack80,__libc_csu_init,__libc_csu_fini,SUB168(auVar15 >> 0x40,0),
             &uStack88);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

