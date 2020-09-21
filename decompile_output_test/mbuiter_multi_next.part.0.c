
ulong mbuiter_multi_next_part_0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined *puVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  undefined auVar12 [16];
  long lStack104;
  undefined8 *puStack96;
  long alStack88 [5];
  
  puVar5 = (undefined8 *)&UNK_0010e994;
  puVar9 = &UNK_0010e9a2;
  func_0x00101750(&UNK_0010e9a2,&UNK_0010e994,0xb3,__PRETTY_FUNCTION___5056);
  alStack88[4] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*puVar5);
  func_0x00101860(6,&UNK_0010ef6b);
  func_0x001016b0(&UNK_0010b510,&UNK_0010b539);
  func_0x00101690(&UNK_0010b510);
  if (lbuf._0_8_ == 0) {
    lbuf._0_8_ = xmalloc(0x400);
    lbuf._8_8_ = lbuf._0_8_;
  }
  atexit(close_stdout);
  atexit(lbuf_flush);
  plVar6 = &lStack104 + 3;
  do {
    iVar8 = (int)((ulong)puVar9 & 0xffffffff);
    plVar6[-1] = 0x101a8d;
    iVar2 = func_0x00101700((ulong)puVar9 & 0xffffffff,puVar5,&UNK_0010ef6b,long_options,0);
    if (iVar2 == -1) {
      lVar10 = (long)optind;
      if (optind < iVar8) {
        uVar11 = 1;
        do {
          uVar4 = puVar5[lVar10];
          plVar6[-1] = 0x101b67;
          cVar1 = print_factors(uVar4);
          if (cVar1 == '\0') {
            uVar11 = 0;
          }
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 < iVar8);
      }
      else {
        uVar11 = 1;
        plVar6[-1] = 0x101bb3;
        init_tokenbuffer(plVar6);
        while( true ) {
          plVar6[-1] = 0x101bd4;
          lVar10 = readtoken(stdin,&UNK_0010b59c,3,plVar6);
          if (lVar10 == -1) break;
          plVar6[-1] = 0x101bba;
          uVar3 = print_factors(plVar6[1]);
          uVar11 = uVar11 & uVar3;
        }
        plVar6[-1] = 0x101be4;
        func_0x001015f0();
      }
      if (plVar6[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)(uVar11 ^ 1);
      }
code_r0x00101bed:
      plVar6[-1] = 0x101bf2;
      auVar12 = func_0x001016f0();
      plVar6[-1] = SUB168(auVar12,0);
      *(long **)(plVar6 + -2) = plVar6 + -1;
      plVar6[-3] = 0x101c2a;
      (*(code *)PTR___libc_start_main_00311fd0)
                (main,*plVar6,plVar6 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar12 >> 0x40,0));
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar2 == -0x82) {
      plVar6[-1] = 0x101bed;
      usage(0);
      goto code_r0x00101bed;
    }
    puVar7 = plVar6;
    if (iVar2 != 0x80) {
      if (iVar2 != -0x83) {
        plVar6[-1] = 0x101ab9;
        usage(1);
      }
      plVar6[-1] = 0x101ad3;
      puVar5 = (undefined8 *)proper_name_utf8(&UNK_0010b55f,&UNK_0010b551);
      plVar6[-1] = 0x101ae9;
      uVar4 = proper_name_utf8(&UNK_0010b57f,&UNK_0010b56c);
      plVar6[-1] = 0;
      puVar7 = plVar6 + -2;
      *(undefined8 **)(plVar6 + -2) = puVar5;
      plVar6[-3] = 0x101b19;
      version_etc(stdout,&UNK_0010b48f,&UNK_0010b50c,Version,&UNK_0010b591,uVar4);
      plVar6[-3] = 0x101b20;
      func_0x001018e0();
    }
    dev_debug = 1;
    plVar6 = puVar7;
  } while( true );
}

