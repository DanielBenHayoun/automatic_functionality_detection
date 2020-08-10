
ulong main(uint param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined auVar8 [16];
  undefined8 uStack56;
  undefined auStack48 [16];
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101970(6,&UNK_00116c81);
  func_0x00101780(&UNK_00115ba8,&UNK_00115c7a);
  func_0x00101740(&UNK_00115ba8);
  exit_failure = 3;
  atexit(close_stdout);
  parse_long_options((ulong)param_1,param_2,&UNK_00115b29,&UNK_00115ba4,&UNK_00115c92,usage,
                     &UNK_00115cb2,&UNK_00115ca3,&UNK_00115c97,0);
  if (1 < param_1) {
    iVar4 = func_0x001018b0(param_2[1],&UNK_00115cbe);
    if (iVar4 == 0) {
      if (param_1 == 2) goto code_r0x00101ca1;
      param_2 = param_2 + 1;
    }
    args = param_2 + 1;
    piVar5 = (int *)eval(1);
    lVar2 = stdout;
    if (*args == 0) {
      if (*piVar5 == 0) {
        uVar6 = imaxtostr(*(undefined8 *)(piVar5 + 2),&uStack56);
        func_0x00101890(uVar6,lVar2);
        puVar1 = *(undefined **)(stdout + 0x28);
        if (puVar1 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar1 + 1;
          *puVar1 = 10;
        }
        else {
          func_0x00101800(stdout,10);
        }
      }
      else {
        if (*piVar5 != 1) goto code_r0x00101ccc;
        func_0x00101720(*(undefined8 *)(piVar5 + 2));
      }
      bVar3 = null(piVar5);
      if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)bVar3;
      }
      func_0x001017c0();
    }
    uVar6 = quotearg_n_style(0,8);
    uVar7 = func_0x00101790(0,&UNK_00116628,5);
    func_0x001019c0(2,0,uVar7,uVar6);
  }
code_r0x00101ca1:
  uVar6 = func_0x00101790(0,&UNK_00115cc1,5);
  func_0x001019c0(0,0,uVar6);
  usage(2);
code_r0x00101ccc:
  auVar8 = func_0x001016d0();
  uVar6 = uStack56;
  uStack56 = SUB168(auVar8,0);
  (*(code *)PTR___libc_start_main_0031afd0)
            (main,uVar6,auStack48,__libc_csu_init,__libc_csu_fini,SUB168(auVar8 >> 0x40,0),&uStack56
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

