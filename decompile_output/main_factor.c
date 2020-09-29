
ulong factor(uint param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined auVar10 [16];
  long lStack96;
  undefined8 *puStack88;
  long alStack80 [5];
  
  alStack80[4] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101860(6,&UNK_0010ef6b);
  func_0x001016b0(&UNK_0010b510,&UNK_0010b539);
  func_0x00101690(&UNK_0010b510);
  if (lbuf._0_8_ == 0) {
    lbuf._0_8_ = xmalloc(0x400);
    lbuf._8_8_ = lbuf._0_8_;
  }
  atexit(close_stdout);
  atexit(lbuf_flush);
  plVar5 = &lStack96 + 3;
  do {
    plVar5[-1] = 0x101a8d;
    iVar2 = func_0x00101700((ulong)param_1,param_2,&UNK_0010ef6b,long_options,0);
    if (iVar2 == -1) {
      lVar8 = (long)optind;
      if (optind < (int)param_1) {
        uVar9 = 1;
        do {
          uVar4 = param_2[lVar8];
          plVar5[-1] = 0x101b67;
          cVar1 = print_factors(uVar4);
          if (cVar1 == '\0') {
            uVar9 = 0;
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < (int)param_1);
      }
      else {
        uVar9 = 1;
        plVar5[-1] = 0x101bb3;
        init_tokenbuffer(plVar5);
        while( true ) {
          plVar5[-1] = 0x101bd4;
          lVar8 = readtoken(stdin,&UNK_0010b59c,3,plVar5);
          if (lVar8 == -1) break;
          plVar5[-1] = 0x101bba;
          uVar3 = print_factors(plVar5[1]);
          uVar9 = uVar9 & uVar3;
        }
        plVar5[-1] = 0x101be4;
        func_0x001015f0();
      }
      if (plVar5[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)(uVar9 ^ 1);
      }
code_r0x00101bed:
      plVar5[-1] = 0x101bf2;
      auVar10 = func_0x001016f0();
      uVar4 = *plVar5;
      uVar7 = (ulong)(plVar5 + 1) & 0xfffffffffffffff0;
      *(undefined8 *)(uVar7 - 8) = SUB168(auVar10,0);
      *(ulong *)(uVar7 - 0x10) = uVar7 - 8;
      *(undefined8 *)(uVar7 - 0x18) = 0x101c2a;
      (*(code *)PTR___libc_start_main_00311fd0)
                (main,uVar4,plVar5 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar10 >> 0x40,0));
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar2 == -0x82) {
      plVar5[-1] = 0x101bed;
      usage(0);
      goto code_r0x00101bed;
    }
    puVar6 = plVar5;
    if (iVar2 != 0x80) {
      if (iVar2 != -0x83) {
        plVar5[-1] = 0x101ab9;
        usage(1);
      }
      plVar5[-1] = 0x101ad3;
      param_2 = (undefined8 *)proper_name_utf8(&UNK_0010b55f,&UNK_0010b551);
      plVar5[-1] = 0x101ae9;
      uVar4 = proper_name_utf8(&UNK_0010b57f,&UNK_0010b56c);
      plVar5[-1] = 0;
      puVar6 = plVar5 + -2;
      *(undefined8 **)(plVar5 + -2) = param_2;
      plVar5[-3] = 0x101b19;
      version_etc(stdout,&UNK_0010b48f,&UNK_0010b50c,Version,&UNK_0010b591,uVar4);
      plVar5[-3] = 0x101b20;
      func_0x001018e0();
    }
    dev_debug = 1;
    plVar5 = puVar6;
  } while( true );
}