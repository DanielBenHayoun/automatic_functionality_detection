
ulong mbiter_multi_next_part_0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  undefined *puVar10;
  long lVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined auVar13 [16];
  long lStack112;
  undefined8 *puStack104;
  long alStack96 [5];
  code *pcStack16;
  
  pcStack16 = mbuiter_multi_next_part_0;
  func_0x00101750(&UNK_0010e9a2,&UNK_0010eee8,0xaa,__PRETTY_FUNCTION___5134);
  puVar5 = (undefined8 *)&UNK_0010e994;
  puVar10 = &UNK_0010e9a2;
  func_0x00101750(&UNK_0010e9a2,&UNK_0010e994,0xb3,__PRETTY_FUNCTION___5056);
  alStack96[4] = *(undefined8 *)(in_FS_OFFSET + 0x28);
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
  plVar6 = &lStack112 + 3;
  do {
    iVar9 = (int)((ulong)puVar10 & 0xffffffff);
    plVar6[-1] = 0x101a8d;
    iVar2 = func_0x00101700((ulong)puVar10 & 0xffffffff,puVar5,&UNK_0010ef6b,long_options,0);
    if (iVar2 == -1) {
      lVar11 = (long)optind;
      if (optind < iVar9) {
        uVar12 = 1;
        do {
          uVar4 = puVar5[lVar11];
          plVar6[-1] = 0x101b67;
          cVar1 = print_factors(uVar4);
          if (cVar1 == '\0') {
            uVar12 = 0;
          }
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < iVar9);
      }
      else {
        uVar12 = 1;
        plVar6[-1] = 0x101bb3;
        init_tokenbuffer(plVar6);
        while( true ) {
          plVar6[-1] = 0x101bd4;
          lVar11 = readtoken(stdin,&UNK_0010b59c,3,plVar6);
          if (lVar11 == -1) break;
          plVar6[-1] = 0x101bba;
          uVar3 = print_factors(plVar6[1]);
          uVar12 = uVar12 & uVar3;
        }
        plVar6[-1] = 0x101be4;
        func_0x001015f0();
      }
      if (plVar6[3] == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)(uVar12 ^ 1);
      }
code_r0x00101bed:
      plVar6[-1] = 0x101bf2;
      auVar13 = func_0x001016f0();
      uVar4 = *plVar6;
      uVar8 = (ulong)(plVar6 + 1) & 0xfffffffffffffff0;
      *(undefined8 *)(uVar8 - 8) = SUB168(auVar13,0);
      *(ulong *)(uVar8 - 0x10) = uVar8 - 8;
      *(undefined8 *)(uVar8 - 0x18) = 0x101c2a;
      (*(code *)PTR___libc_start_main_00311fd0)
                (main,uVar4,plVar6 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar13 >> 0x40,0));
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

