
undefined  [16] chgrp(int param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 **ppuVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  undefined auVar18 [16];
  undefined4 *apuStack320 [7];
  undefined4 uStack264;
  char acStack260 [4];
  long lStack256;
  bool abStack248 [16];
  undefined4 *apuStack232 [6];
  uint auStack184 [30];
  undefined4 *apuStack64 [2];
  
  pcVar17 = (char *)0x1;
  uVar16 = 0xffffffff;
  uVar14 = SEXT48(param_1);
  uVar15 = 0x10;
  bVar2 = false;
  apuStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101c10(6,&UNK_0010b741);
  func_0x001019d0(&UNK_0010a4a4,&UNK_0010a4cd);
  func_0x001019a0(&UNK_0010a4a4);
  atexit(close_stdout);
  apuStack320[4] = &uStack264;
  chopt_init(apuStack320[4]);
  ppuVar11 = apuStack320 + 3;
code_r0x00101dd8:
  while( true ) {
    iVar10 = (int)uVar16;
    ppuVar11[-1] = 0x101df3;
    iVar5 = func_0x00101a50(uVar14 & 0xffffffff,param_2,&UNK_0010a502,long_options,0);
    uVar3 = reference_file;
    if (iVar5 == -1) break;
    if (iVar5 == 99) {
      *(undefined4 *)(ppuVar11 + 4) = 1;
    }
    else {
      if (iVar5 < 100) {
        if (iVar5 == 0x48) {
          uVar15 = 0x11;
        }
        else {
          if (iVar5 < 0x49) {
            if (iVar5 == -0x83) {
              puVar12 = ppuVar11 + -2;
              ppuVar11[-2] = 0;
              ppuVar11[-3] = 0x101ee2;
              version_etc(stdout,&UNK_0010a424,&UNK_0010a4a0,Version);
              ppuVar11[-3] = 0x101ee9;
              func_0x00101cd0();
              goto code_r0x00101ee9;
            }
code_r0x0010215d:
            if (iVar5 == -0x82) {
              ppuVar11[-1] = 0x10216f;
              iVar5 = usage(0);
              goto code_r0x0010216f;
            }
            goto code_r0x00101e2b;
          }
          puVar12 = ppuVar11;
          if (iVar5 == 0x50) {
code_r0x00101ee9:
            uVar15 = 0x10;
            ppuVar11 = (undefined4 **)puVar12;
          }
          else {
            if (iVar5 == 0x52) {
              *(undefined *)((long)ppuVar11 + 0x24) = (char)pcVar17;
            }
            else {
              if (iVar5 != 0x4c) goto code_r0x00101e2b;
              uVar15 = 2;
            }
          }
        }
      }
      else {
        if (iVar5 == 0x80) {
          uVar16 = 1;
        }
        else {
          if (iVar5 < 0x81) {
            if (iVar5 == 0x68) {
              uVar16 = 0;
            }
            else {
              if (iVar5 != 0x76) {
                if (iVar5 != 0x66) goto code_r0x00101e2b;
                goto code_r0x00101e35;
              }
              *(undefined4 *)(ppuVar11 + 4) = 0;
            }
          }
          else {
            if (iVar5 == 0x82) {
              bVar2 = true;
            }
            else {
              if (iVar5 < 0x82) {
                bVar2 = false;
              }
              else {
                if (iVar5 != 0x83) goto code_r0x00101e2b;
                reference_file = optarg;
              }
            }
          }
        }
      }
    }
  }
  if (*(char *)((long)ppuVar11 + 0x24) == '\0') {
    uVar15 = 0x10;
code_r0x00101f5a:
    *(bool *)(ppuVar11 + 6) = iVar10 != 0;
    iVar10 = (int)uVar14 - optind;
    uVar16 = reference_file;
    iVar5 = optind;
    if (reference_file == 0) {
      if (1 < iVar10) {
        pcVar17 = (char *)param_2[optind];
        optind = optind + 1;
        if (*pcVar17 != '\0') {
          ppuVar11[-1] = 0x1020ef;
          uVar16 = xstrdup(pcVar17);
        }
        *(ulong *)(ppuVar11 + 8) = uVar16;
        if (*pcVar17 == '\0') goto code_r0x001020df;
        ppuVar11[-1] = 0x10206c;
        lVar6 = func_0x00101b60(pcVar17);
        if (lVar6 == 0) {
          ppuVar11[-1] = 0x102112;
          iVar5 = xstrtoul(pcVar17,0,10,ppuVar11 + 3);
          if (iVar5 == 0) {
            uVar14 = (ulong)ppuVar11[3] & 0xffffffff;
            if (ppuVar11[3] < 0x100000000) goto code_r0x00102078;
          }
          ppuVar11[-1] = 0x102133;
          param_2 = (undefined8 *)quote(pcVar17);
          ppuVar11[-1] = 0x102149;
          uVar8 = func_0x001019f0(0,&UNK_0010a534,5);
          ppuVar11[-1] = 0x10215d;
          iVar5 = func_0x00101c40(1,0,uVar8,param_2);
          goto code_r0x0010215d;
        }
        uVar14 = (ulong)*(uint *)(lVar6 + 0x10);
code_r0x00102078:
        ppuVar11[-1] = 0x10207d;
        func_0x00101910();
code_r0x00101faf:
        do {
          if ((*(char *)((long)ppuVar11 + 0x24) == '\0') || (!bVar2)) {
code_r0x00101fbf:
            ppuVar11[-2] = ppuVar11[1];
            ppuVar11[-3] = 0x101fec;
            bVar4 = chown_files(param_2 + optind,(ulong)(uVar15 | 0x400),0xffffffff,uVar14,
                                0xffffffff);
            if (ppuVar11[0x1d] == (undefined4 *)*(long *)(in_FS_OFFSET + 0x28)) {
              return CONCAT88(ppuVar11[-2],(ulong)(bVar4 ^ 1));
            }
            ppuVar11[-1] = 0x1021f8;
            func_0x00101a40();
code_r0x001021f8:
            ppuVar11[-1] = 0x102205;
            uVar8 = quotearg_style(4,uVar16);
            ppuVar11[-1] = 0x10221b;
            uVar9 = func_0x001019f0(0,&UNK_0010ad98,5);
            ppuVar11[-1] = 0x102223;
            puVar7 = (uint *)func_0x00101930();
            uVar15 = *puVar7;
            ppuVar11[-1] = 0x102237;
            auVar18 = func_0x00101c40(1,(ulong)uVar15,uVar9,uVar8);
            uVar8 = *ppuVar11;
            uVar13 = (ulong)(ppuVar11 + 1) & 0xfffffffffffffff0;
            *(undefined8 *)(uVar13 - 8) = SUB168(auVar18,0);
            *(ulong *)(uVar13 - 0x10) = uVar13 - 8;
            *(undefined8 *)(uVar13 - 0x18) = 0x10226a;
            (*(code *)PTR___libc_start_main_0030dfe0)
                      (main,uVar8,ppuVar11 + 1,__libc_csu_init,__libc_csu_fini,
                       SUB168(auVar18 >> 0x40,0));
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          ppuVar11[-1] = 0x10208e;
          lVar6 = get_root_dev_ino(dev_ino_buf_7117);
          *(long *)(ppuVar11 + 5) = lVar6;
          if (lVar6 != 0) goto code_r0x00101fbf;
          ppuVar11[-1] = 0x1020ad;
          uVar8 = quotearg_style(4,&UNK_0010b20e);
          ppuVar11[-1] = 0x1020c3;
          param_2 = (undefined8 *)func_0x001019f0(0,&UNK_0010ad98,5);
          ppuVar11[-1] = 0x1020cb;
          puVar7 = (uint *)func_0x00101930();
          uVar1 = *puVar7;
          ppuVar11[-1] = 0x1020df;
          func_0x00101c40(1,(ulong)uVar1,param_2,uVar8);
code_r0x001020df:
          uVar14 = 0xffffffff;
        } while( true );
      }
    }
    else {
      if (0 < iVar10) {
        ppuVar11[-1] = 0x101f97;
        iVar5 = func_0x00101b80(1,reference_file,ppuVar11 + 10);
        uVar16 = uVar3;
        if (iVar5 != 0) goto code_r0x001021f8;
        uVar14 = (ulong)*(uint *)(ppuVar11 + 0xe);
        ppuVar11[-1] = 0x101faa;
        uVar8 = gid_to_name((ulong)*(uint *)(ppuVar11 + 0xe));
        ppuVar11[8] = uVar8;
        goto code_r0x00101faf;
      }
    }
code_r0x0010216f:
    if ((int)uVar14 <= iVar5) {
      ppuVar11[-1] = 0x102186;
      uVar8 = func_0x001019f0(0,&UNK_0010a50b,5);
      ppuVar11[-1] = 0x102194;
      func_0x00101c40(0,0,uVar8);
      goto code_r0x00101e2b;
    }
  }
  else {
    if (uVar15 != 0x10) goto code_r0x00101f5a;
    uVar16 = (ulong)(iVar10 - 1U);
    if (iVar10 - 1U != 0) {
      iVar10 = 0;
      goto code_r0x00101f5a;
    }
    ppuVar11[-1] = 0x1021ac;
    uVar8 = func_0x001019f0(0,&UNK_0010ad68,5);
    ppuVar11[-1] = 0x1021bd;
    func_0x00101c40(1,0,uVar8);
  }
  uVar8 = param_2[uVar14 - 1];
  ppuVar11[-1] = 0x1021c7;
  param_2 = (undefined8 *)quote(uVar8);
  ppuVar11[-1] = 0x1021dd;
  uVar8 = func_0x001019f0(0,&UNK_0010a51b,5);
  ppuVar11[-1] = 0x1021ee;
  func_0x00101c40(0,0,uVar8,param_2);
code_r0x00101e2b:
  ppuVar11[-1] = 0x101e35;
  usage();
code_r0x00101e35:
  *(undefined *)((long)ppuVar11 + 0x31) = (char)pcVar17;
  goto code_r0x00101dd8;
}