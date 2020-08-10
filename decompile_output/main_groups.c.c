
undefined  [16] main(uint param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined auVar12 [16];
  undefined *puStack72;
  undefined8 *puStack64;
  undefined8 uStack56;
  
  uVar11 = (ulong)param_1;
  ppuVar10 = (undefined **)&uStack56;
  puStack64 = (undefined8 *)&UNK_001016ac;
  set_program_name(*param_2);
  puStack64 = (undefined8 *)&UNK_001016bd;
  func_0x001015c0(6,&UNK_00105761);
  puStack64 = (undefined8 *)&UNK_001016d0;
  func_0x00101410(&UNK_00104e85,&UNK_00104eae);
  puStack64 = (undefined8 *)&UNK_001016dc;
  func_0x001013e0(&UNK_00104e85);
  puStack64 = (undefined8 *)&UNK_001016e8;
  atexit(close_stdout);
  puStack64 = (undefined8 *)&UNK_00101704;
  iVar4 = func_0x00101470(uVar11,param_2,&UNK_00105761,longopts,0);
  if (iVar4 != -1) {
    if (iVar4 != -0x83) {
      if (iVar4 == -0x82) {
        puStack64 = (undefined8 *)&UNK_0010199b;
        usage(0);
      }
      puStack64 = (undefined8 *)&UNK_001019a5;
      auVar12 = usage(1);
      uVar8 = uStack56;
      uStack56 = SUB168(auVar12,0);
      puStack64 = &uStack56;
      puStack72 = &UNK_001019da;
      (*(code *)PTR___libc_start_main_00306fc8)
                (main,uVar8,&stack0xffffffffffffffd0,__libc_csu_init,__libc_csu_fini,
                 SUB168(auVar12 >> 0x40,0));
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    ppuVar10 = &puStack72;
    puStack72 = (undefined *)0x0;
    version_etc(stdout,&UNK_00104e04,&UNK_00104e81,Version,&UNK_00104ed5,&UNK_00104ec6);
    func_0x00101620(0);
  }
  if (optind == param_1) {
    ppuVar10[-1] = 0x10185d;
    puVar9 = (uint *)func_0x001013a0();
    *puVar9 = 0;
    ppuVar10[-1] = 0x10186b;
    uVar5 = func_0x00101460();
    if (uVar5 == 0xffffffff) goto code_r0x00101924;
    do {
      *puVar9 = 0;
      ppuVar10[-1] = 0x101881;
      uVar6 = func_0x00101590();
      uVar11 = (ulong)uVar6;
      if ((uVar6 != 0xffffffff) || (*puVar9 == 0)) {
        *puVar9 = 0;
        ppuVar10[-1] = 0x101894;
        uVar6 = func_0x00101540();
        if (uVar6 != 0xffffffff) goto code_r0x0010189d;
        goto code_r0x00101951;
      }
      ppuVar10[-1] = 0x101913;
      uVar8 = func_0x00101420(0,&UNK_00104ef9,5);
      uVar6 = *puVar9;
      ppuVar10[-1] = 0x101924;
      func_0x001015e0(1,(ulong)uVar6,uVar8);
code_r0x00101924:
    } while (*puVar9 == 0);
    ppuVar10[-1] = 0x101940;
    uVar8 = func_0x00101420(0,&UNK_00104ee5,5);
    uVar6 = *puVar9;
    ppuVar10[-1] = 0x101951;
    uVar6 = func_0x001015e0(1,(ulong)uVar6,uVar8);
code_r0x00101951:
    if (*puVar9 == 0) {
code_r0x0010189d:
      ppuVar10[-1] = 0x1018b7;
      uVar5 = print_group_list(0,(ulong)uVar5,(ulong)uVar6,uVar11,1,0x20);
      puVar2 = *(undefined **)(stdout + 0x28);
      if (puVar2 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar2 + 1;
        *puVar2 = 10;
        goto code_r0x001018d9;
      }
    }
    else {
      ppuVar10[-1] = 0x10196d;
      uVar8 = func_0x00101420(0,&UNK_00104f12,5);
      uVar6 = *puVar9;
      ppuVar10[-1] = 0x10197e;
      func_0x001015e0(1,(ulong)uVar6,uVar8);
    }
    ppuVar10[-1] = 0x101988;
    func_0x001014a0();
  }
  else {
    uVar5 = 1;
    while ((int)optind < (int)param_1) {
      uVar8 = param_2[(int)optind];
      ppuVar10[-1] = 0x101814;
      lVar7 = func_0x00101510(uVar8);
      if (lVar7 == 0) {
        uVar8 = param_2[(int)optind];
        ppuVar10[-1] = 0x10182d;
        quote(uVar8);
        ppuVar10[-1] = 0x101843;
        uVar8 = func_0x00101420(0,&UNK_00104f26,5);
        uVar5 = 0;
        ppuVar10[-1] = 0x101856;
        func_0x001015e0(0,0,uVar8);
      }
      else {
        uVar6 = *(uint *)(lVar7 + 0x14);
        uVar1 = *(uint *)(lVar7 + 0x10);
        uVar8 = param_2[(int)optind];
        ppuVar10[-1] = 0x1017a2;
        func_0x001015d0(1,&UNK_00104f37,uVar8);
        uVar8 = param_2[(int)optind];
        ppuVar10[-1] = 0x1017c7;
        cVar3 = print_group_list(uVar8,(ulong)uVar1,(ulong)uVar6,(ulong)uVar6,1,0x20);
        if (cVar3 == '\0') {
          uVar5 = 0;
        }
        puVar2 = *(undefined **)(stdout + 0x28);
        if (puVar2 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar2 + 1;
          *puVar2 = 10;
        }
        else {
          ppuVar10[-1] = 0x1018f6;
          func_0x001014a0(stdout,10);
        }
      }
      optind = optind + 1;
    }
  }
code_r0x001018d9:
  return CONCAT88(*ppuVar10,(ulong)(uVar5 ^ 1)) & (undefined  [16])0xffffffffffffffff;
}

