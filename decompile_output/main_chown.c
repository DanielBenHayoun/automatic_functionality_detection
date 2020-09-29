
undefined  [16] chown(int param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  uint **ppuVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  long lStack320;
  uint *puStack312;
  long lStack304;
  uint *puStack296;
  long lStack288;
  uint auStack280 [5];
  char acStack260 [4];
  long lStack256;
  bool abStack248 [8];
  long alStack240 [6];
  uint auStack188 [31];
  long alStack64 [2];
  
  bVar2 = false;
  uVar13 = 0xffffffff;
  uVar11 = SEXT48(param_1);
  uVar12 = 0x10;
  alStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  auStack280[0] = 0xffffffff;
  auStack280[1] = 0xffffffff;
  auStack280[2] = 0xffffffff;
  auStack280[3] = 0xffffffff;
  set_program_name(*param_2);
  func_0x00101cc0(6,&UNK_0010c049);
  func_0x00101a60(&UNK_0010aae4,&UNK_0010ab0d);
  func_0x00101a30(&UNK_0010aae4);
  atexit(close_stdout);
  chopt_init(auStack280 + 4);
  puStack296 = auStack280 + 3;
  lStack288 = auStack280 + 2;
  ppuVar9 = &puStack296;
code_r0x00101eb0:
  do {
    while( true ) {
      iVar8 = (int)uVar13;
      ((long *)ppuVar9)[-1] = 0x101ecb;
      iVar4 = func_0x00101ae0(uVar11 & 0xffffffff,param_2,&UNK_0010ab49,long_options,0);
      uVar14 = reference_file;
      if (iVar4 != -1) break;
      if (*(char *)((long)ppuVar9 + 0x24) == '\0') {
        uVar12 = 0x10;
code_r0x001020cc:
        *(bool *)((long *)ppuVar9 + 6) = iVar8 != 0;
        iVar8 = (int)uVar11 - optind;
        iVar4 = optind;
        if (reference_file == 0) {
          if (1 < iVar8) {
            uVar7 = param_2[optind];
            ((long *)ppuVar9)[-1] = 0x1021eb;
            uVar11 = parse_user_spec(uVar7,(long *)ppuVar9 + 2,(long)ppuVar9 + 0x14,alStack240);
            uVar13 = uVar14;
            if (uVar11 == 0) {
              if (((long *)ppuVar9)[7] == 0) goto code_r0x00102268;
              goto code_r0x001021ff;
            }
            goto code_r0x0010228d;
          }
        }
        else {
          if (0 < iVar8) {
            ((long *)ppuVar9)[-1] = 0x102109;
            iVar4 = func_0x00101c20(1,reference_file,(long *)ppuVar9 + 10);
            if (iVar4 == 0) {
              *(undefined4 *)((long *)ppuVar9 + 2) = *(undefined4 *)((long)ppuVar9 + 0x6c);
              *(undefined4 *)((long)ppuVar9 + 0x14) = *(undefined4 *)((long *)ppuVar9 + 0xe);
              ((long *)ppuVar9)[-1] = 0x102126;
              lVar5 = uid_to_name();
              ((long *)ppuVar9)[7] = lVar5;
              ((long *)ppuVar9)[-1] = 0x102134;
              lVar5 = gid_to_name((ulong)*(uint *)((long *)ppuVar9 + 0xe));
              ((long *)ppuVar9)[8] = lVar5;
              while ((*(char *)((long)ppuVar9 + 0x24) != '\0' && (bVar2))) {
                ((long *)ppuVar9)[-1] = 0x102217;
                lVar5 = get_root_dev_ino(dev_ino_buf_7022);
                ((long *)ppuVar9)[5] = lVar5;
                if (lVar5 != 0) break;
                ((long *)ppuVar9)[-1] = 0x102236;
                uVar7 = quotearg_style(4,&UNK_0010bae6);
                ((long *)ppuVar9)[-1] = 0x10224c;
                param_2 = (undefined8 *)func_0x00101a80(0,&UNK_0010b678,5);
                ((long *)ppuVar9)[-1] = 0x102254;
                puVar6 = (uint *)func_0x001019c0();
                uVar1 = *puVar6;
                ((long *)ppuVar9)[-1] = 0x102268;
                func_0x00101cf0(1,(ulong)uVar1,param_2,uVar7);
code_r0x00102268:
                if (((long *)ppuVar9)[8] != 0) {
                  ((long *)ppuVar9)[-1] = 0x10227c;
                  lVar5 = xstrdup(&UNK_0010c049);
                  ((long *)ppuVar9)[7] = lVar5;
                }
code_r0x001021ff:
                optind = optind + 1;
              }
              *(uint **)((long *)ppuVar9 + -2) = auStack280 + 4;
              ((long *)ppuVar9)[-3] = 0x10217a;
              bVar3 = chown_files(param_2 + optind,(ulong)(uVar12 | 0x400),
                                  (ulong)*(uint *)((long *)ppuVar9 + 2),
                                  (ulong)*(uint *)((long)ppuVar9 + 0x14),
                                  (ulong)*(uint *)((long *)ppuVar9 + 3),
                                  (ulong)*(uint *)((long)ppuVar9 + 0x1c));
              if (((long *)ppuVar9)[0x1d] == *(long *)(in_FS_OFFSET + 0x28)) {
                return CONCAT88(((long *)ppuVar9)[-2],(ulong)(bVar3 ^ 1));
              }
              goto code_r0x001022dc;
            }
            goto code_r0x001022e1;
          }
        }
      }
      else {
        if (uVar12 != 0x10) goto code_r0x001020cc;
        uVar13 = (ulong)(iVar8 - 1U);
        if (iVar8 - 1U != 0) {
          iVar8 = 0;
          goto code_r0x001020cc;
        }
code_r0x001022b8:
        ((long *)ppuVar9)[-1] = 0x1022cb;
        uVar7 = func_0x00101a80(0,&UNK_0010b648,5);
        ((long *)ppuVar9)[-1] = 0x1022dc;
        func_0x00101cf0(1,0,uVar7);
        uVar14 = uVar13;
code_r0x001022dc:
        ((long *)ppuVar9)[-1] = 0x1022e1;
        func_0x00101ad0();
code_r0x001022e1:
        ((long *)ppuVar9)[-1] = 0x1022ee;
        uVar11 = quotearg_style(4,uVar14);
        ((long *)ppuVar9)[-1] = 0x102304;
        param_2 = (undefined8 *)func_0x00101a80(0,&UNK_0010b678,5);
        ((long *)ppuVar9)[-1] = 0x10230c;
        puVar6 = (uint *)func_0x001019c0();
        uVar1 = *puVar6;
        ((long *)ppuVar9)[-1] = 0x102320;
        iVar4 = func_0x00101cf0(1,(ulong)uVar1,param_2,uVar11);
      }
      if (iVar4 < (int)uVar11) {
        uVar7 = param_2[uVar11 - 1];
        ((long *)ppuVar9)[-1] = 0x102354;
        param_2 = (undefined8 *)quote(uVar7);
        ((long *)ppuVar9)[-1] = 0x10236a;
        uVar7 = func_0x00101a80(0,&UNK_0010ab62,5);
        ((long *)ppuVar9)[-1] = 0x10237b;
        func_0x00101cf0(0,0,uVar7,param_2);
      }
      else {
        ((long *)ppuVar9)[-1] = 0x102337;
        uVar7 = func_0x00101a80(0,&UNK_0010ab52,5);
        ((long *)ppuVar9)[-1] = 0x102345;
        func_0x00101cf0(0,0,uVar7);
      }
code_r0x00101f05:
      ((long *)ppuVar9)[-1] = 0x101f0f;
      usage();
code_r0x00101f10:
      uVar13 = 0;
    }
    if (iVar4 != 0x66) {
      if (iVar4 < 0x67) {
        if (iVar4 == 0x4c) {
          uVar12 = 2;
        }
        else {
          if (iVar4 < 0x4d) {
            if (iVar4 == -0x82) {
              ((long *)ppuVar9)[-1] = 0x10228d;
              usage(0);
code_r0x0010228d:
              uVar7 = param_2[optind];
              ((long *)ppuVar9)[-1] = 0x10229d;
              quote(uVar7);
              ((long *)ppuVar9)[-1] = 0x1022b8;
              func_0x00101cf0(1,0,&UNK_0010ab25,uVar11);
              goto code_r0x001022b8;
            }
            plVar10 = (long *)ppuVar9;
            if (iVar4 != 0x48) {
              if (iVar4 != -0x83) goto code_r0x00101f05;
              plVar10 = (long *)ppuVar9 + -2;
              ((long *)ppuVar9)[-2] = 0;
              ((long *)ppuVar9)[-3] = 0x101fca;
              version_etc(stdout,&UNK_0010aa64,&UNK_0010aae0,Version);
              ((long *)ppuVar9)[-3] = 0x101fd1;
              func_0x00101d80();
            }
            uVar12 = 0x11;
            ppuVar9 = (uint **)plVar10;
          }
          else {
            if (iVar4 == 0x52) {
              *(undefined *)((long)ppuVar9 + 0x24) = 1;
            }
            else {
              if (iVar4 == 99) {
                *(undefined4 *)((long *)ppuVar9 + 4) = 1;
              }
              else {
                if (iVar4 != 0x50) goto code_r0x00101f05;
                uVar12 = 0x10;
              }
            }
          }
        }
      }
      else {
        if (iVar4 == 0x81) {
          ((long *)ppuVar9)[-1] = 0x102022;
          lVar5 = parse_user_spec(optarg,((long *)ppuVar9)[1],*ppuVar9,0);
          if (lVar5 != 0) {
            *(long *)ppuVar9 = lVar5;
            ((long *)ppuVar9)[-1] = 0x10203b;
            quote(optarg);
            ((long *)ppuVar9)[-1] = 0x102057;
            func_0x00101cf0(1,0,&UNK_0010ab25,*ppuVar9);
code_r0x00102060:
            uVar13 = 1;
          }
        }
        else {
          if (iVar4 < 0x82) {
            if (iVar4 != 0x76) {
              if (iVar4 == 0x80) goto code_r0x00102060;
              if (iVar4 != 0x68) goto code_r0x00101f05;
              goto code_r0x00101f10;
            }
            *(undefined4 *)((long *)ppuVar9 + 4) = 0;
          }
          else {
            if (iVar4 == 0x83) {
              bVar2 = true;
            }
            else {
              if (iVar4 < 0x83) {
                bVar2 = false;
              }
              else {
                if (iVar4 != 0x84) goto code_r0x00101f05;
                reference_file = optarg;
              }
            }
          }
        }
      }
      goto code_r0x00101eb0;
    }
    *(undefined *)((long)ppuVar9 + 0x31) = 1;
  } while( true );
}