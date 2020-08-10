
ulong main(uint param_1,undefined8 *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  ulong unaff_R14;
  long unaff_R15;
  undefined auVar7 [16];
  undefined8 uStack72;
  undefined auStack64 [3];
  undefined uStack61;
  uint uStack60;
  
  bVar2 = false;
  uVar6 = 0xffffffff;
  set_program_name(*param_2);
  func_0x00101680(6,&UNK_00107601);
  func_0x001014d0(&UNK_00106967,&UNK_00106990);
  func_0x001014b0(&UNK_00106967);
  atexit(close_stdout);
code_r0x001017b0:
  do {
    iVar3 = func_0x00101530((ulong)param_1,param_2,&UNK_001069b8,longopts,0);
    if (iVar3 == -1) {
code_r0x001018bf:
      if (optind < (int)param_1) {
        if (param_1 - optind != 1) {
          if (no_newline != '\0') {
            uVar4 = func_0x001014e0(0,&UNK_00106f98,5);
            func_0x001016b0(0,0,uVar4);
          }
          no_newline = '\0';
          if ((int)param_1 <= optind) {
            unaff_R14 = 0;
code_r0x001019d8:
            return unaff_R14 & 0xffffffff;
          }
        }
        unaff_R14 = 0;
        uStack60 = -(uint)!bVar2 & 10;
        uStack61 = (undefined)uStack60;
        goto code_r0x00101967;
      }
      uVar4 = func_0x001014e0(0,&UNK_001069c1,5);
      func_0x001016b0(0,0,uVar4);
code_r0x00101a37:
      usage(1);
      do {
        func_0x00101560();
        while( true ) {
          do {
            func_0x00101440(unaff_R15);
            while( true ) {
              optind = optind + 1;
              if ((int)param_1 <= optind) goto code_r0x001019d8;
code_r0x00101967:
              uVar4 = param_2[optind];
              if (uVar6 == 0xffffffff) {
                unaff_R15 = areadlink_with_size(uVar4,0x3f);
              }
              else {
                unaff_R15 = canonicalize_filename_mode(uVar4,(ulong)uVar6);
              }
              if (unaff_R15 != 0) break;
              unaff_R14 = 1;
              if (verbose != '\0') {
                uVar4 = quotearg_n_style_colon(0,3,uVar4);
                puVar5 = (uint *)func_0x00101460();
                func_0x001016b0(0,(ulong)*puVar5,&UNK_00106fdb,uVar4);
              }
            }
            func_0x001015d0(unaff_R15);
          } while (no_newline != '\0');
          puVar1 = *(undefined **)(stdout + 0x28);
          if (*(undefined **)(ulong *)(stdout + 0x30) < puVar1 ||
              *(undefined **)(ulong *)(stdout + 0x30) == puVar1) break;
          *(undefined **)(stdout + 0x28) = puVar1 + 1;
          *puVar1 = uStack61;
        }
      } while( true );
    }
    if (iVar3 != 0x6d) {
      if (iVar3 < 0x6e) {
        if (iVar3 == -0x82) {
          auVar7 = usage(0);
          uVar4 = uStack72;
          uStack72 = SUB168(auVar7,0);
          (*(code *)PTR___libc_start_main_00309fc8)
                    (main,uVar4,auStack64,__libc_csu_init,__libc_csu_fini,SUB168(auVar7 >> 0x40,0),
                     &uStack72);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (iVar3 < -0x81) {
          if (iVar3 != -0x83) goto code_r0x00101a37;
          version_etc(stdout,&UNK_001068e4,&UNK_00106963,Version,&UNK_001069a8,0);
          func_0x001016e0(0);
          goto code_r0x001018bf;
        }
        if (iVar3 == 0x65) {
          uVar6 = 0;
        }
        else {
          if (iVar3 != 0x66) goto code_r0x00101a37;
          uVar6 = 1;
        }
      }
      else {
        if (iVar3 != 0x73) {
          if (0x73 < iVar3) {
            if (iVar3 == 0x76) {
              verbose = '\x01';
            }
            else {
              if (iVar3 != 0x7a) goto code_r0x00101a37;
              bVar2 = true;
            }
            goto code_r0x001017b0;
          }
          if (iVar3 == 0x6e) {
            no_newline = '\x01';
            goto code_r0x001017b0;
          }
          if (iVar3 != 0x71) goto code_r0x00101a37;
        }
        verbose = '\0';
      }
      goto code_r0x001017b0;
    }
    uVar6 = 2;
  } while( true );
}

