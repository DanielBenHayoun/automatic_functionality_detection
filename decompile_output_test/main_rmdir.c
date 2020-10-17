
undefined  [16] rmdir(uint param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined auVar11 [16];
  undefined8 uStack56;
  
  set_program_name(*param_2);
  func_0x00101620(6,&UNK_001076c1);
  func_0x00101470(&UNK_00106d64,&UNK_00106d8d);
  func_0x00101450(&UNK_00106d64);
  atexit(close_stdout);
  remove_empty_parents = 0;
code_r0x00101755:
  do {
    iVar3 = func_0x001014e0((ulong)param_1,param_2,&UNK_00106db5,longopts,0);
    if (iVar3 == -1) {
      if (optind != param_1) {
        uVar8 = 1;
        do {
          if ((int)param_1 <= (int)optind) {
            return CONCAT88(uStack56,(ulong)(uVar8 ^ 1)) & (undefined  [16])0xffffffffffffffff;
          }
          pcVar1 = (char *)param_2[(int)optind];
          if (verbose != '\0') {
            uVar7 = quotearg_style(4,pcVar1);
            uVar4 = func_0x00101490(0,&UNK_00106dc8,5);
            prog_fprintf(stdout,uVar4,uVar7);
          }
          iVar3 = func_0x00101480(pcVar1);
          if (iVar3 == 0) {
            uVar9 = (uint)remove_empty_parents;
            if (remove_empty_parents != 0) {
              strip_trailing_slashes(pcVar1);
              do {
                pcVar6 = (char *)func_0x00101510(pcVar1,0x2f);
                if (pcVar6 == (char *)0x0) goto code_r0x00101985;
                if (pcVar1 < pcVar6) {
                  do {
                    if (*pcVar6 != '/') break;
                    pcVar6 = pcVar6 + -1;
                  } while (pcVar1 != pcVar6);
                }
                bVar10 = verbose != '\0';
                pcVar6[1] = '\0';
                if (bVar10) {
                  uVar7 = quotearg_style(4,pcVar1);
                  uVar4 = func_0x00101490(0,&UNK_00106dc8,5);
                  prog_fprintf(stdout,uVar4,uVar7);
                }
                iVar3 = func_0x00101480(pcVar1);
              } while (iVar3 == 0);
              puVar5 = (uint *)func_0x00101410();
              cVar2 = ignorable_failure((ulong)*puVar5,pcVar1);
              if (cVar2 == '\0') {
                uVar7 = quotearg_style(4,pcVar1);
                uVar4 = func_0x00101490(0,&UNK_00106df3,5);
                uVar9 = 0;
                func_0x00101640(0,(ulong)*puVar5,uVar4,uVar7);
              }
code_r0x00101985:
              uVar8 = uVar8 & uVar9;
            }
          }
          else {
            puVar5 = (uint *)func_0x00101410();
            cVar2 = ignorable_failure((ulong)*puVar5,pcVar1);
            if (cVar2 == '\0') {
              uVar7 = quotearg_style(4,pcVar1);
              uVar4 = func_0x00101490(0,&UNK_00106ddf,5);
              uVar8 = 0;
              func_0x00101640(0,(ulong)*puVar5,uVar4,uVar7);
            }
          }
          optind = optind + 1;
        } while( true );
      }
code_r0x001019eb:
      uVar7 = func_0x00101490(0,&UNK_00106db8,5);
      func_0x00101640(0,0,uVar7);
code_r0x00101a0c:
      auVar11 = usage(1);
      uVar7 = uStack56;
      uStack56 = SUB168(auVar11,0);
      (*(code *)PTR___libc_start_main_00309fc8)
                (main,uVar7,&stack0xffffffffffffffd0,__libc_csu_init,__libc_csu_fini,
                 SUB168(auVar11 >> 0x40,0),&uStack56);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar3 != 0x70) {
      if (0x70 < iVar3) {
        if (iVar3 == 0x76) {
          verbose = '\x01';
        }
        else {
          if (iVar3 != 0x80) goto code_r0x00101a0c;
          ignore_fail_on_non_empty = 1;
        }
        goto code_r0x00101755;
      }
      if (iVar3 != -0x83) {
        if (iVar3 != -0x82) goto code_r0x00101a0c;
        usage(0);
        goto code_r0x001019eb;
      }
      version_etc(stdout,&UNK_00106ce4,&UNK_00106d60,Version,&UNK_00106da5,0);
      func_0x00101680();
    }
    remove_empty_parents = 1;
  } while( true );
}