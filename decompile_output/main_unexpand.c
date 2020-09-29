
ulong unexpand(ulong param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong in_R10;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar21;
  undefined auVar22 [16];
  undefined *puStack120;
  undefined auStack112 [6];
  byte bStack106;
  byte bStack105;
  char *pcStack104;
  long *plStack96;
  char cStack73;
  long lStack72;
  long lStack64;
  
  bVar4 = false;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x001016b0(6,&UNK_00106321);
  func_0x00101510(&UNK_00105687,&UNK_001056b0);
  func_0x001014f0(&UNK_00105687);
  atexit(close_stdout);
  bStack106 = 0;
code_r0x00101800:
  iVar5 = func_0x00101560(param_1 & 0xffffffff,param_2,&UNK_001056f4,longopts,0);
  if (iVar5 == -1) {
    if (bStack106 != 0) {
      convert_entire_line = 0;
    }
    if (bVar4) {
      add_tab_stop(unaff_R15);
    }
    finalize_tab_stops();
    puVar15 = (undefined8 *)0x0;
    if (optind < (int)(param_1 & 0xffffffff)) {
      puVar15 = param_2 + optind;
    }
    set_file_list(puVar15);
    lVar8 = next_file(0);
    if (lVar8 != 0) {
      puStack120 = (undefined *)xmalloc(max_column_width);
      pcStack104 = &cStack73;
      plStack96 = &lStack72;
      do {
        lStack72 = 0;
        uVar14 = 0;
        uVar19 = 1;
        bStack106 = 0;
        uVar17 = 0;
        uVar7 = 1;
code_r0x00101a6a:
        do {
          pbVar3 = *(byte **)(lVar8 + 8);
          if (pbVar3 < *(byte **)(lVar8 + 0x10)) {
            *(byte **)(lVar8 + 8) = pbVar3 + 1;
            uVar20 = (ulong)*pbVar3;
          }
          else {
            uVar16 = func_0x00101470(lVar8);
            uVar20 = (ulong)uVar16;
            if (((int)uVar16 < 0) && (lVar8 = next_file(lVar8), lVar8 != 0)) goto code_r0x00101a6a;
          }
          iVar5 = (int)uVar20;
          uVar13 = uVar7;
          if ((char)uVar7 == '\0') goto code_r0x00101a37;
          plVar9 = (long *)func_0x00101760();
          uVar1 = *(ushort *)(*plVar9 + (long)iVar5 * 2);
          uVar16 = (uint)uVar1 & 1;
          in_R10 = (ulong)uVar16;
          if ((uVar1 & 1) == 0) {
            if (iVar5 == 8) {
              uVar10 = uVar17 - (uVar17 != 0);
              lStack72 = lStack72 - (ulong)(lStack72 != 0);
            }
            else {
              uVar10 = uVar17 + 1;
              if (uVar10 == 0) goto code_r0x00101cb1;
            }
code_r0x001019dc:
            while( true ) {
              if (uVar14 != 0) {
                if ((1 < uVar14) && (bStack106 != 0)) {
                  *puStack120 = 9;
                }
                bStack106 = (byte)in_R10;
                uVar17 = func_0x00101690(puStack120,1,uVar14,stdout);
                in_R10 = (ulong)bStack106;
                if (uVar14 != uVar17) goto code_r0x00101c85;
                bStack106 = 0;
              }
              uVar19 = in_R10 & 0xffffffff;
              uVar14 = 0;
              uVar13 = (ulong)((uint)uVar7 & ((uint)convert_entire_line | (uint)in_R10));
              uVar17 = uVar10;
code_r0x00101a37:
              iVar5 = (int)uVar20;
              if (iVar5 < 0) {
                func_0x00101480(puStack120);
                goto code_r0x00101bb3;
              }
              puVar2 = *(undefined **)(stdout + 0x28);
              if (puVar2 < *(undefined **)(stdout + 0x30)) break;
              iVar6 = func_0x00101580(stdout,uVar20 & 0xff);
              if (-1 < iVar6) goto code_r0x00101a60;
              uVar12 = func_0x00101520(0,&UNK_0010571a,5);
              puVar11 = (uint *)func_0x001014a0();
              func_0x001016d0(1,(ulong)*puVar11,uVar12);
code_r0x00101ba3:
              uVar10 = uVar17;
              uVar7 = 0;
            }
            *(undefined **)(stdout + 0x28) = puVar2 + 1;
            *puVar2 = (char)uVar20;
          }
          else {
            bStack105 = (byte)uVar16;
            uVar10 = get_next_tab_column(uVar17,plStack96,pcStack104);
            in_R10 = (ulong)bStack105;
            if (cStack73 != '\0') goto code_r0x00101ba3;
            if (uVar10 < uVar17) goto code_r0x00101c61;
            if (iVar5 == 9) {
              if (uVar14 != 0) {
                *puStack120 = 9;
              }
code_r0x00101b02:
              uVar14 = (ulong)bStack106;
              uVar20 = 9;
              goto code_r0x001019dc;
            }
            uVar17 = uVar17 + 1;
            bVar18 = (byte)uVar19 ^ 1 | uVar10 != uVar17;
            uVar13 = (ulong)bVar18;
            if (bVar18 == 0) {
              *puStack120 = 9;
              uVar10 = uVar17;
              goto code_r0x00101b02;
            }
            if (uVar10 == uVar17) {
              bStack106 = bVar18;
            }
            puStack120[uVar14] = (char)uVar20;
            uVar14 = uVar14 + 1;
            uVar19 = uVar13;
          }
code_r0x00101a60:
          uVar7 = uVar13;
        } while (iVar5 != 10);
      } while( true );
    }
code_r0x00101bb3:
    cleanup_file_list_stdin();
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)exit_status;
    }
    goto code_r0x00101c5c;
  }
  if (iVar5 == 0x3f) {
code_r0x00101c2e:
    usage(1);
code_r0x00101c38:
    uVar12 = func_0x00101520(0,&UNK_001056d8,5);
    func_0x001016d0(1,0,uVar12);
code_r0x00101c5c:
    func_0x00101550();
code_r0x00101c61:
    uVar12 = func_0x00101520(0,&UNK_00105703,5);
    func_0x001016d0(1,0,uVar12);
code_r0x00101c85:
    uVar12 = func_0x00101520(0,&UNK_0010571a,5);
    puVar11 = (uint *)func_0x001014a0();
    func_0x001016d0(1,(ulong)*puVar11,uVar12);
code_r0x00101cb1:
    uVar12 = func_0x00101520(0,&UNK_00105703,5);
    auVar22 = func_0x001016d0(1,0,uVar12);
    puVar2 = puStack120;
    puStack120 = SUB168(auVar22,0);
    (*(code *)PTR___libc_start_main_00307fc8)
              (main,puVar2,auStack112,__libc_csu_init,__libc_csu_fini,SUB168(auVar22 >> 0x40,0),
               &puStack120);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (iVar5 < 0x40) {
    if (iVar5 == -0x82) {
      usage(0);
      goto code_r0x00101c2e;
    }
    if (iVar5 == 0x2c) {
      if (bVar4) {
        bVar4 = false;
        add_tab_stop();
      }
      goto code_r0x00101800;
    }
    if (iVar5 == -0x83) {
      version_etc(stdout,&UNK_00105604,&UNK_00105683,Version,&UNK_001056c8,0);
      func_0x00101710();
code_r0x001018d0:
      convert_entire_line = 1;
      goto code_r0x00101800;
    }
  }
  else {
    if (iVar5 == 0x74) {
      convert_entire_line = 1;
      parse_tab_stops();
      goto code_r0x00101800;
    }
    if (iVar5 == 0x80) {
      bStack106 = 1;
      goto code_r0x00101800;
    }
    if (iVar5 == 0x61) goto code_r0x001018d0;
  }
  if (bVar4) {
    if ((0x1999999999999999 < unaff_R15) ||
       (uVar7 = (long)(iVar5 + -0x30) + unaff_R15 * 10, bVar21 = uVar7 < unaff_R15,
       unaff_R15 = uVar7, bVar21)) goto code_r0x00101c38;
  }
  else {
    bVar4 = true;
    unaff_R15 = (long)(iVar5 + -0x30);
  }
  goto code_r0x00101800;
}