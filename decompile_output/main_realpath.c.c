
undefined  [16] main(uint param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  undefined auVar14 [16];
  undefined8 uStack56;
  
  uVar8 = 1;
  set_program_name(*param_2);
  func_0x001016f0(6,&UNK_00107b41);
  func_0x00101540(&UNK_00106fd6,&UNK_00106fff);
  func_0x00101520(&UNK_00106fd6);
  atexit(close_stdout);
  uVar9 = 0;
  uVar12 = 0;
code_r0x00101830:
  do {
    uVar4 = uVar12;
    uVar11 = uVar9;
    iVar3 = func_0x001015a0((ulong)param_1,param_2,&UNK_00107017,longopts,0);
    if (iVar3 == -1) {
      if (optind < (int)param_1) {
        uVar10 = uVar8 & 3;
        uVar9 = (ulong)uVar10;
        if (((uVar11 == 0) || (uVar12 = uVar11, uVar4 != 0)) && (uVar12 = uVar4, uVar4 == 0)) {
code_r0x001019c8:
          if (uVar11 == uVar4) {
            can_relative_base = can_relative_to;
            uVar12 = can_relative_base;
            goto code_r0x00101a16;
          }
          uVar12 = can_relative_base;
          if (uVar11 == 0) goto code_r0x00101a16;
          uVar4 = realpath_canon(uVar11,(ulong)uVar8);
          if (uVar4 == 0) goto code_r0x00101c53;
          uVar12 = uVar4;
          if (uVar10 == 0) goto code_r0x00101b92;
code_r0x001019f5:
          uVar9 = can_relative_to;
          cVar2 = path_prefix(uVar12,can_relative_to);
          if (cVar2 != '\0') goto code_r0x00101a16;
        }
        else {
          can_relative_to = realpath_canon(uVar12,(ulong)uVar8);
          if (can_relative_to == 0) goto code_r0x00101c24;
          uVar4 = uVar12;
          if ((uVar10 != 0) || (cVar2 = isdir(can_relative_to), cVar2 != '\0'))
          goto code_r0x001019c8;
          uVar7 = quotearg_n_style_colon(0,3,uVar12);
          uVar4 = func_0x00101720(1,0x14,&UNK_0010750d,uVar7);
code_r0x00101b92:
          cVar2 = isdir(uVar4);
          if (cVar2 != '\0') goto code_r0x001019f5;
          uVar7 = quotearg_n_style_colon(0,3,uVar11);
          func_0x00101720(1,0x14,&UNK_0010750d,uVar7);
        }
        func_0x001014b0(uVar12);
        can_relative_to = 0;
        uVar12 = uVar9;
code_r0x00101a16:
        can_relative_base = uVar12;
        uVar10 = 1;
        while (optind < (int)param_1) {
          uVar7 = param_2[optind];
          lVar5 = realpath_canon(uVar7,(ulong)uVar8);
          if (lVar5 == 0) {
            uVar10 = (uint)verbose;
            if (verbose != 0) {
              quotearg_n_style_colon(0,3,uVar7);
              puVar6 = (uint *)func_0x001014d0();
              uVar10 = 0;
              func_0x00101720(0,(ulong)*puVar6,&UNK_0010750d);
            }
          }
          else {
            if (((can_relative_to == 0) ||
                ((uVar9 = can_relative_to, can_relative_base != 0 &&
                 (cVar2 = path_prefix(can_relative_base,lVar5), cVar2 == '\0')))) ||
               (cVar2 = relpath(lVar5,uVar9,0,0), cVar2 == '\0')) {
              func_0x00101640(lVar5);
            }
            bVar13 = use_nuls == '\0';
            pbVar1 = *(byte **)(stdout + 0x28);
            if (pbVar1 < *(byte **)(stdout + 0x30)) {
              *(byte **)(stdout + 0x28) = pbVar1 + 1;
              *pbVar1 = -bVar13 & 10;
            }
            else {
              func_0x001015d0();
            }
            func_0x001014b0(lVar5);
          }
          optind = optind + 1;
        }
        return CONCAT88(uStack56,(ulong)(uVar10 ^ 1)) & (undefined  [16])0xffffffffffffffff;
      }
code_r0x00101bf9:
      uVar7 = func_0x00101550(0,&UNK_0010702d,5);
      func_0x00101720(0,0,uVar7);
      goto code_r0x00101c1a;
    }
    uVar9 = uVar11;
    uVar12 = uVar4;
    if (iVar3 == 0x6d) {
code_r0x00101920:
      uVar8 = uVar8 & 0xfffffffc | 2;
      goto code_r0x00101830;
    }
    if (iVar3 < 0x6e) {
      if (iVar3 == 0x4c) {
        uVar8 = uVar8 | 4;
        logical = 1;
      }
      else {
        if (iVar3 < 0x4d) {
          if (iVar3 == -0x83) {
            version_etc(stdout,&UNK_00106f53,&UNK_00106fd2,Version,&UNK_0010701f,0);
            func_0x00101750();
            goto code_r0x00101920;
          }
          if (iVar3 == -0x82) {
            usage(0);
            goto code_r0x00101bf9;
          }
          goto code_r0x00101c1a;
        }
        if (iVar3 == 0x50) {
          uVar8 = uVar8 & 0xfffffffb;
          logical = 0;
        }
        else {
          if (iVar3 != 0x65) goto code_r0x00101c1a;
          uVar8 = uVar8 & 0xfffffffc;
        }
      }
    }
    else {
      if (iVar3 == 0x7a) {
        use_nuls = '\x01';
      }
      else {
        if (iVar3 < 0x7b) {
          if (iVar3 == 0x71) {
            verbose = 0;
          }
          else {
            if (iVar3 != 0x73) goto code_r0x00101c1a;
            uVar8 = uVar8 | 4;
            logical = 0;
          }
        }
        else {
          uVar12 = optarg;
          if ((iVar3 != 0x80) && (uVar9 = optarg, uVar12 = uVar4, iVar3 != 0x81)) {
code_r0x00101c1a:
            usage(1);
            uVar12 = uVar4;
code_r0x00101c24:
            uVar7 = quotearg_n_style_colon(0,3,uVar12);
            puVar6 = (uint *)func_0x001014d0();
            func_0x00101720(1,(ulong)*puVar6,&UNK_0010750d,uVar7);
code_r0x00101c53:
            uVar7 = quotearg_n_style_colon(0,3,uVar11);
            puVar6 = (uint *)func_0x001014d0();
            auVar14 = func_0x00101720(1,(ulong)*puVar6,&UNK_0010750d,uVar7);
            uVar7 = uStack56;
            uStack56 = SUB168(auVar14,0);
            (*(code *)PTR___libc_start_main_00309fc8)
                      (main,uVar7,&stack0xffffffffffffffd0,__libc_csu_init,__libc_csu_fini,
                       SUB168(auVar14 >> 0x40,0),&uStack56);
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
        }
      }
    }
  } while( true );
}

