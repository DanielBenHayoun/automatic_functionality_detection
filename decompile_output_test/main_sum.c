
undefined  [16] sum(uint param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  uint uVar9;
  undefined auVar10 [16];
  undefined8 auStack80 [4];
  
  set_program_name(*param_2);
  func_0x00101830(6,&UNK_00106ce1);
  func_0x00101670(&UNK_0010640d,&UNK_00106436);
  func_0x00101650(&UNK_0010640d);
  atexit(close_stdout);
  func_0x00101850(stdout,0,1,0);
  have_read_stdin = '\0';
  puVar5 = auStack80 + 3;
  pcVar8 = bsd_sum_file;
  while( true ) {
    puVar5[-1] = 0x1019de;
    iVar1 = func_0x001016c0((ulong)param_1,param_2,&UNK_00106470,longopts,0);
    if (iVar1 == -1) break;
    if (iVar1 == -0x82) goto code_r0x00101b1e;
    pcVar8 = bsd_sum_file;
    if (iVar1 < -0x81) {
      if (iVar1 != -0x83) goto code_r0x00101b14;
      puVar5[-2] = 0;
      puVar5[-3] = 0x101a52;
      version_etc(stdout,&UNK_001063ee,&UNK_00106409,Version,&UNK_0010645e,&UNK_0010644e);
      puVar5[-3] = 0x101a59;
      func_0x001018c0();
      puVar5 = puVar5 + -2;
    }
    else {
      if (iVar1 != 0x72) {
        if (iVar1 != 0x73) {
code_r0x00101b14:
          puVar5[-1] = 0x101b1e;
          usage(1);
code_r0x00101b1e:
          puVar5[-1] = 0x101b25;
          auVar10 = usage(0);
          uVar7 = *puVar5;
          uVar6 = (ulong)(puVar5 + 1) & 0xfffffffffffffff0;
          *(undefined8 *)(uVar6 - 8) = SUB168(auVar10,0);
          *(ulong *)(uVar6 - 0x10) = uVar6 - 8;
          *(undefined8 *)(uVar6 - 0x18) = 0x101b5a;
          (*(code *)PTR___libc_start_main_00308fe0)
                    (main,uVar7,puVar5 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar10 >> 0x40,0)
                    );
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        pcVar8 = sysv_sum_file;
      }
    }
  }
  uVar9 = param_1 - optind;
  if (0 < (int)uVar9) goto code_r0x00101ae8;
  puVar5[-1] = 0x101a84;
  uVar2 = (*pcVar8)(&UNK_001067b2,(ulong)uVar9);
  while (have_read_stdin != '\0') {
    puVar5[-1] = 0x101ab0;
    iVar1 = rpl_fclose(stdin);
    if (iVar1 != -1) break;
    puVar5[-1] = 0x101ac8;
    param_2 = (undefined8 *)quotearg_n_style_colon(0,3,&UNK_001067b2);
    puVar5[-1] = 0x101ad0;
    puVar4 = (uint *)func_0x00101600();
    uVar2 = *puVar4;
    puVar5[-1] = 0x101ae8;
    func_0x00101870(1,(ulong)uVar2,&UNK_00107172,param_2);
code_r0x00101ae8:
    uVar2 = 1;
    while (optind < (int)param_1) {
      uVar7 = param_2[optind];
      puVar5[-1] = 0x101afa;
      uVar3 = (*pcVar8)(uVar7,(ulong)uVar9);
      optind = optind + 1;
      uVar2 = uVar2 & uVar3;
    }
  }
  return CONCAT88(*puVar5,(ulong)(uVar2 ^ 1)) & (undefined  [16])0xffffffffffffffff;
}