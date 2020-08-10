
undefined8 main(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  undefined8 uVar5;
  
  uVar5 = 0;
  bVar1 = false;
  set_program_name(*param_2);
  func_0x00101450(6,&UNK_001052a1);
  func_0x001012f0(&UNK_001048c7,&UNK_001048f0);
  func_0x001012d0(&UNK_001048c7);
  atexit(close_stdout);
  uVar3 = 0;
  while( true ) {
    puVar4 = longopts;
    iVar2 = func_0x00101340((ulong)param_1,param_2,&UNK_00104908,longopts,0);
    if (iVar2 == -1) break;
    if (iVar2 == 0x61) {
code_r0x001015f0:
      bVar1 = true;
    }
    else {
      if (iVar2 < 0x62) {
        if (iVar2 == -0x83) {
          version_etc(stdout,&UNK_00104844,&UNK_001048c3,Version,&UNK_0010490e,0);
          func_0x001014a0();
          goto code_r0x001015f0;
        }
        if (iVar2 != -0x82) goto code_r0x001016aa;
        usage(0);
        goto code_r0x00101689;
      }
      if (iVar2 == 0x73) {
        bVar1 = true;
        uVar3 = optarg;
      }
      else {
        if (iVar2 != 0x7a) goto code_r0x001016aa;
        uVar5 = 1;
      }
    }
  }
  if ((int)param_1 <= optind) {
code_r0x00101689:
    uVar3 = func_0x00101300(0,&UNK_0010491e,5);
    func_0x00101470(0,0,uVar3);
code_r0x001016aa:
    usage(1);
code_r0x001016b4:
    uVar3 = quote(param_2[(long)(puVar4 + 2)]);
    uVar5 = func_0x00101300(0,&UNK_0010492e,5);
    func_0x00101470(0,0,uVar5,uVar3);
    usage(1);
    (*(code *)PTR___libc_start_main_00306fd0)
              (main,unaff_RBX,&stack0xffffffffffffffe0,__libc_csu_init,__libc_csu_fini,extraout_RDX,
               &stack0xffffffffffffffd8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (bVar1) {
    do {
      perform_basename(param_2[optind],uVar3,uVar5);
      optind = optind + 1;
    } while (optind < (int)param_1);
  }
  else {
    puVar4 = (undefined1 *)(long)optind;
    if ((int)(optind + 2U) < (int)param_1) goto code_r0x001016b4;
    uVar3 = 0;
    if (optind + 2U == param_1) {
      uVar3 = param_2[(long)(puVar4 + 1)];
    }
    perform_basename(param_2[(long)puVar4],uVar3,uVar5);
  }
  return 0;
}

