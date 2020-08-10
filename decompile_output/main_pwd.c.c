
undefined8 main(uint param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  bool bVar6;
  
  lVar3 = func_0x00101480(&UNK_001051e2);
  bVar6 = lVar3 != 0;
  set_program_name(*param_2);
  func_0x00101700(6,&UNK_0010513e);
  func_0x00101530(&UNK_001051b9,&UNK_001051f2);
  func_0x00101500(&UNK_001051b9);
  atexit(close_stdout);
  while( true ) {
    iVar2 = func_0x001015a0((ulong)param_1,param_2,&UNK_0010520a,longopts,0);
    if (iVar2 == -1) {
      if (optind < (int)param_1) {
        uVar4 = func_0x00101540(0,&UNK_0010521a,5);
        func_0x00101720(0,0,uVar4);
      }
      if ((bVar6) && (lVar3 = logical_getcwd(), lVar3 != 0)) {
        func_0x001014f0(lVar3);
        return 0;
      }
      lVar3 = xgetcwd();
      if (lVar3 == 0) {
        plVar5 = (long *)xmalloc(0x18);
        plVar5[1] = 0x2000;
        lVar3 = xmalloc(0x2000);
        *plVar5 = lVar3;
        puVar1 = (undefined *)(lVar3 + -1 + plVar5[1]);
        *(undefined **)(plVar5 + 2) = puVar1;
        *puVar1 = 0;
        robust_getcwd(plVar5);
        func_0x001014f0(plVar5[2]);
        func_0x00101490(*plVar5);
        func_0x00101490(plVar5);
      }
      else {
        func_0x001014f0(lVar3);
        func_0x00101490(lVar3);
      }
      return 0;
    }
    if (iVar2 == -0x82) goto code_r0x00101985;
    if (iVar2 < -0x81) break;
    if (iVar2 == 0x4c) {
code_r0x001018b0:
      bVar6 = true;
    }
    else {
      if (iVar2 != 0x50) goto code_r0x0010197b;
      bVar6 = false;
    }
  }
  if (iVar2 == -0x83) {
    version_etc(stdout,&UNK_00105124,&UNK_001051b5,Version,&UNK_0010520d,0);
    func_0x00101750();
    goto code_r0x001018b0;
  }
code_r0x0010197b:
  usage(1);
code_r0x00101985:
  usage(0);
  (*(code *)PTR___libc_start_main_00307fc8)
            (main,unaff_RBX,&stack0xfffffffffffffff0,__libc_csu_init,__libc_csu_fini,extraout_RDX,
             &stack0xffffffffffffffe8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

