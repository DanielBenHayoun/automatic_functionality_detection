
ulong mbuiter_multi_next_part_6(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined *puVar9;
  long in_FS_OFFSET;
  undefined auVar10 [16];
  undefined *puStack72;
  undefined8 uStack64;
  undefined auStack56 [16];
  long lStack40;
  
  puVar7 = (undefined8 *)&UNK_00115b07;
  puVar9 = &UNK_00115b17;
  func_0x00101830(&UNK_00115b17,&UNK_00115b07,0xb3,__PRETTY_FUNCTION___7929);
  lStack40 = *(long *)(in_FS_OFFSET + 0x28);
  puStack72 = &UNK_00101b03;
  set_program_name(*puVar7);
  puStack72 = &UNK_00101b14;
  func_0x00101970(6,&UNK_00116c81);
  puStack72 = &UNK_00101b27;
  func_0x00101780(&UNK_00115ba8,&UNK_00115c7a);
  puStack72 = &UNK_00101b33;
  func_0x00101740(&UNK_00115ba8);
  exit_failure = 3;
  puStack72 = &UNK_00101b49;
  atexit(close_stdout);
  puStack72 = (undefined *)0x0;
  uVar8 = (uint)((ulong)puVar9 & 0xffffffff);
  parse_long_options((ulong)puVar9 & 0xffffffff,puVar7,&UNK_00115b29,&UNK_00115ba4,&UNK_00115c92,
                     usage,&UNK_00115cb2,&UNK_00115ca3,&UNK_00115c97);
  if (1 < uVar8) {
    puStack72 = &UNK_00101ba8;
    iVar3 = func_0x001018b0(puVar7[1],&UNK_00115cbe);
    if (iVar3 == 0) {
      if (uVar8 == 2) goto code_r0x00101ca1;
      puVar7 = puVar7 + 1;
    }
    args = puVar7 + 1;
    puStack72 = &UNK_00101bce;
    piVar4 = (int *)eval(1);
    lVar1 = stdout;
    if (*args == 0) {
      if (*piVar4 == 0) {
        puStack72 = &UNK_00101c31;
        uVar5 = imaxtostr(*(undefined8 *)(piVar4 + 2),&uStack64);
        puStack72 = &UNK_00101c3c;
        func_0x00101890(uVar5,lVar1);
        puVar9 = *(undefined **)(stdout + 0x28);
        if (puVar9 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar9 + 1;
          *puVar9 = 10;
        }
        else {
          puStack72 = &UNK_00101c64;
          func_0x00101800(stdout,10);
        }
      }
      else {
        if (*piVar4 != 1) goto code_r0x00101ccc;
        puStack72 = &UNK_00101bfc;
        func_0x00101720(*(undefined8 *)(piVar4 + 2));
      }
      puStack72 = &UNK_00101c04;
      bVar2 = null(piVar4);
      if (lStack40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)bVar2;
      }
      puStack72 = &UNK_00101c6b;
      func_0x001017c0();
    }
    puStack72 = &UNK_00101c77;
    uVar5 = quotearg_n_style(0,8);
    puStack72 = &UNK_00101c8d;
    uVar6 = func_0x00101790(0,&UNK_00116628,5);
    puStack72 = &UNK_00101ca1;
    func_0x001019c0(2,0,uVar6,uVar5);
  }
code_r0x00101ca1:
  puStack72 = &UNK_00101cb4;
  uVar5 = func_0x00101790(0,&UNK_00115cc1,5);
  puStack72 = &UNK_00101cc2;
  func_0x001019c0(0,0,uVar5);
  puStack72 = &UNK_00101ccc;
  usage(2);
code_r0x00101ccc:
  puStack72 = &UNK_00101cd1;
  auVar10 = func_0x001016d0();
  puStack72 = SUB168(auVar10,0);
  (*(code *)PTR___libc_start_main_0031afd0)
            (main,uStack64,auStack56,__libc_csu_init,__libc_csu_fini,SUB168(auVar10 >> 0x40,0),
             &puStack72);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

