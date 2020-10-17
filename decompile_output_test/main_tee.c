
ulong tee(uint param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined8 auStack48 [3];
  
  puVar6 = (undefined8 *)&stack0xffffffffffffffe8;
  set_program_name(*param_2);
  func_0x00101780(6,&UNK_00106081);
  func_0x001015d0(&UNK_00105501,&UNK_0010552a);
  func_0x001015b0(&UNK_00105501);
  atexit(close_stdout);
  append = 0;
  ignore_interrupts = '\0';
code_r0x001018c2:
  do {
    puVar6[-1] = 0x1018d9;
    iVar1 = func_0x00101620((ulong)param_1,param_2,&UNK_00105581,long_options,0);
    if (iVar1 == -1) {
      if (ignore_interrupts != '\0') {
        puVar6[-1] = 0x101a18;
        func_0x001016e0(2,1);
      }
      if (output_error != 0) {
        puVar6[-1] = 0x101a29;
        func_0x001016e0(0xd,1);
      }
      puVar6[-1] = 0x1019f1;
      uVar2 = tee_files((ulong)(param_1 - optind),param_2 + (long)optind,(long)optind);
      puVar6[-1] = 0x1019fa;
      iVar1 = func_0x00101680(0);
      if (iVar1 == 0) {
        return (ulong)(uVar2 ^ 1) & 0xff;
      }
code_r0x00101a43:
      puVar6[-1] = 0x101a56;
      uVar4 = func_0x001015e0(0,&UNK_00105585,5);
      puVar6[-1] = 0x101a5e;
      puVar5 = (uint *)func_0x00101550();
      uVar2 = *puVar5;
      puVar6[-1] = 0x101a76;
      auVar8 = func_0x001017b0(1,(ulong)uVar2,&UNK_00105afc,uVar4);
      uVar4 = *puVar6;
      uVar7 = (ulong)(puVar6 + 1) & 0xfffffffffffffff0;
      *(undefined8 *)(uVar7 - 8) = SUB168(auVar8,0);
      *(ulong *)(uVar7 - 0x10) = uVar7 - 8;
      *(undefined8 *)(uVar7 - 0x18) = 0x101aaa;
      (*(code *)PTR___libc_start_main_00307fd8)
                (main,uVar4,puVar6 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar8 >> 0x40,0));
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar1 != 0x61) {
      if (iVar1 < 0x62) {
        if (iVar1 == -0x83) {
          puVar6[-1] = 0;
          puVar6[-2] = 0x105571;
          puVar6[-3] = 0x101996;
          version_etc(stdout,&UNK_00105483,&UNK_001054fd,Version,&UNK_00105565,&UNK_00105551);
          puVar6[-3] = 0x10199d;
          func_0x001017f0();
          puVar6 = puVar6 + -2;
          goto code_r0x001019a0;
        }
        if (iVar1 == -0x82) {
          puVar6[-1] = 0x101a39;
          usage(0);
        }
      }
      else {
        if (iVar1 == 0x69) {
          ignore_interrupts = '\x01';
          goto code_r0x001018c2;
        }
        if (iVar1 == 0x70) {
          if (optarg == 0) {
            output_error = 2;
          }
          else {
            puVar6[-1] = 0x101936;
            lVar3 = __xargmatch_internal
                              (&UNK_00105542,optarg,output_error_args,output_error_types,4,
                               argmatch_die);
            output_error = *(int *)(output_error_types + lVar3 * 4);
          }
          goto code_r0x001018c2;
        }
      }
      puVar6[-1] = 0x101a43;
      usage(1);
      goto code_r0x00101a43;
    }
code_r0x001019a0:
    append = 1;
  } while( true );
}