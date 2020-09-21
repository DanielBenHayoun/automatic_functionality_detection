
/* WARNING: Could not reconcile some variable overlaps */

ulong main(uint param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  undefined auVar12 [16];
  ulong uStack56;
  long alStack48 [2];
  
  uVar10 = 0x50;
  alStack48[0] = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101690(6,&UNK_00105c01);
  func_0x001014f0(&UNK_001052e3,&UNK_0010530c);
  func_0x001014d0(&UNK_001052e3);
  atexit(close_stdout);
  have_read_stdin = '\0';
  count_bytes = 0;
  break_spaces = 0;
  while( true ) {
    iVar4 = func_0x00101540((ulong)param_1,param_2,shortopts,longopts,0);
    uVar3 = (undefined)iVar4;
    if (iVar4 == -1) break;
    if (iVar4 < 0x3a) {
      if (iVar4 < 0x30) {
        if (iVar4 != -0x83) {
          if (iVar4 != -0x82) {
code_r0x00101833:
            usage();
            goto code_r0x00101840;
          }
          usage(0);
          goto code_r0x001019d8;
        }
        version_etc(stdout,&UNK_00105264,&UNK_001052df,Version,&UNK_0010533e,0);
        uVar3 = func_0x00101700(0);
      }
      if (optarg == 0) {
        uStack56 = (ulong)CONCAT16(uVar3,(undefined6)uStack56);
        optarg = (long)&uStack56 + 6;
      }
      else {
        optarg = optarg + -1;
      }
code_r0x001018af:
      func_0x00101500(0,&UNK_00105324,5);
      uVar10 = xdectoumax(optarg,1,0xfffffffffffffff6,&UNK_00105c01);
    }
    else {
      if (iVar4 == 0x73) {
        break_spaces = 1;
      }
      else {
        if (iVar4 == 0x77) goto code_r0x001018af;
        if (iVar4 != 0x62) goto code_r0x00101833;
code_r0x00101840:
        count_bytes = 1;
      }
    }
  }
  if (optind == param_1) goto code_r0x001019ac;
  if ((int)optind < (int)param_1) {
    lVar8 = (long)(int)optind;
    uVar5 = ~optind;
    puVar11 = param_2 + lVar8;
    uVar9 = 1;
    do {
      uVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      uVar6 = fold_file(uVar1,uVar10);
      uVar9 = uVar9 & uVar6;
    } while (puVar11 != param_2 + (ulong)(uVar5 + param_1) + lVar8 + 1);
  }
  else {
    uVar9 = 1;
  }
  while (have_read_stdin != '\0') {
    iVar4 = rpl_fclose(stdin);
    if (iVar4 != -1) break;
    puVar7 = (uint *)func_0x00101490();
    func_0x001016c0(1,(ulong)*puVar7,&UNK_001056c2);
code_r0x001019ac:
    uVar9 = fold_file(&UNK_001056c2);
  }
  if (alStack48[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)(uVar9 ^ 1) & 0xff;
  }
code_r0x001019d8:
  auVar12 = func_0x00101530();
  uVar2 = uStack56;
  uStack56 = SUB168(auVar12,0);
  (*(code *)PTR___libc_start_main_00307fc8)
            (main,uVar2,alStack48,__libc_csu_init,__libc_csu_fini,SUB168(auVar12 >> 0x40,0),
             &uStack56);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}