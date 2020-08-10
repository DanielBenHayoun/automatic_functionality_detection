
undefined8 main(uint param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong unaff_RBX;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  undefined auVar12 [16];
  undefined8 auStack464 [52];
  undefined8 uStack48;
  
  puVar8 = auStack464 + 3;
  puVar7 = auStack464 + 3;
  uStack48 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101540(6,&UNK_00104965);
  func_0x001013d0(&UNK_001049de,&UNK_00104a07);
  func_0x001013b0(&UNK_001049de);
  atexit(close_stdout);
  puVar1 = auStack464 + 3;
  if (uname_mode == 2) goto code_r0x001017f0;
  unaff_RBX = 0;
  while( true ) {
    iVar2 = func_0x00101420((ulong)param_1,param_2,&UNK_00104a39,uname_long_options,0);
    uVar6 = (uint)unaff_RBX;
    if (iVar2 == -1) break;
    if (iVar2 == 0x6e) {
code_r0x00101763:
      unaff_RBX = (ulong)(uVar6 | 2);
    }
    else {
      if (iVar2 < 0x6f) {
        if (iVar2 == 0x61) {
          unaff_RBX = 0xffffffff;
        }
        else {
          if (iVar2 < 0x62) {
            puVar1 = auStack464 + 3;
            if (iVar2 == -0x83) {
              puVar10 = &UNK_00104924;
              if (uname_mode != 1) {
                puVar10 = &UNK_0010492a;
              }
              version_etc(stdout,puVar10,&UNK_001049da,Version,&UNK_00104a29,0);
              func_0x00101590();
              goto code_r0x00101763;
            }
            goto code_r0x001019b9;
          }
          if (iVar2 == 0x69) {
            unaff_RBX = (ulong)(uVar6 | 0x40);
          }
          else {
            puVar1 = auStack464 + 3;
            if (iVar2 != 0x6d) goto code_r0x001019f8;
            unaff_RBX = (ulong)(uVar6 | 0x10);
          }
        }
      }
      else {
        if (iVar2 == 0x72) {
          unaff_RBX = (ulong)(uVar6 | 4);
        }
        else {
          if (iVar2 < 0x73) {
            if (iVar2 == 0x6f) {
              unaff_RBX = unaff_RBX | 0x80;
            }
            else {
              puVar1 = auStack464 + 3;
              if (iVar2 != 0x70) goto code_r0x001019f8;
              unaff_RBX = (ulong)(uVar6 | 0x20);
            }
          }
          else {
            if (iVar2 == 0x73) {
              unaff_RBX = (ulong)(uVar6 | 1);
            }
            else {
              puVar1 = auStack464 + 3;
              if (iVar2 != 0x76) goto code_r0x001019f8;
              unaff_RBX = (ulong)(uVar6 | 8);
            }
          }
        }
      }
    }
  }
  lVar4 = (long)(int)optind;
  if (param_1 == optind) {
    if (uVar6 != 0) goto code_r0x00101870;
    unaff_RBX = 1;
    iVar2 = func_0x00101460(auStack464 + 3);
    puVar7 = auStack464 + 3;
    puVar8 = auStack464 + 3;
    if (iVar2 == -1) {
      do {
        while( true ) {
          puVar7[-1] = 0x1017d7;
          unaff_RBX = func_0x001013e0(0,&UNK_00104a54,5);
          puVar7[-1] = 0x1017df;
          puVar3 = (uint *)func_0x00101370();
          uVar6 = *puVar3;
          puVar7[-1] = 0x1017f0;
          func_0x00101560(1,(ulong)uVar6,unaff_RBX);
          puVar1 = puVar7;
          param_2 = puVar7;
code_r0x001017f0:
          puVar7 = puVar1;
          puVar7[-1] = 0x10180c;
          iVar2 = func_0x00101420((ulong)param_1,param_2,&UNK_00104965,arch_long_options,0);
          if (iVar2 == -1) break;
          puVar1 = puVar7;
          if (iVar2 != -0x83) goto code_r0x001019b9;
          puVar10 = &UNK_00104924;
          if (uname_mode != 1) {
            puVar10 = &UNK_0010492a;
          }
          puVar8 = puVar7 + -2;
          puVar7[-2] = 0;
          puVar7[-3] = 0x101869;
          version_etc(stdout,puVar10,&UNK_001049da,Version,&UNK_00104a29,&UNK_00104a1f);
          puVar7[-3] = 0x101870;
          func_0x00101590(0);
code_r0x00101870:
          uVar6 = (uint)unaff_RBX;
          if ((unaff_RBX & 0x1f) == 0) goto code_r0x00101879;
          puVar8[-1] = 0x101981;
          iVar2 = func_0x00101460();
          puVar7 = puVar8;
          if (iVar2 != -1) {
            if ((unaff_RBX & 1) != 0) goto code_r0x0010198f;
            goto code_r0x00101997;
          }
        }
        lVar4 = (long)(int)optind;
        if (param_1 != optind) goto code_r0x001019c7;
        puVar7[-1] = 0x101917;
        iVar2 = func_0x00101460();
      } while (iVar2 == -1);
      unaff_RBX = 0x10;
      puVar8 = puVar7;
    }
    else {
code_r0x0010198f:
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x101997;
      print_element(puVar8);
code_r0x00101997:
      if ((unaff_RBX & 2) != 0) {
        *(undefined8 *)((undefined *)puVar8 + -8) = 0x1019a5;
        print_element((undefined *)puVar8 + 0x41);
      }
    }
    uVar6 = (uint)unaff_RBX;
    if ((unaff_RBX & 4) != 0) {
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x101974;
      print_element((undefined *)puVar8 + 0x82);
    }
    if ((unaff_RBX & 8) != 0) {
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x101966;
      print_element((undefined *)puVar8 + 0xc3);
    }
    if ((unaff_RBX & 0x10) != 0) {
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x101944;
      print_element((undefined *)puVar8 + 0x104);
    }
code_r0x00101879:
    if (((uVar6 & 0x20) != 0) && (uVar6 != 0xffffffff)) {
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x101896;
      print_element(&unknown_7592);
    }
    if (((uVar6 & 0x40) != 0) && (uVar6 != 0xffffffff)) {
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x1018ac;
      print_element(&unknown_7592);
    }
    if ((uVar6 & 0x80) != 0) {
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x101955;
      print_element(&UNK_00104a6b);
    }
    puVar10 = *(undefined **)(stdout + 0x28);
    if (puVar10 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar10 + 1;
      *puVar10 = 10;
    }
    else {
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x1019b4;
      func_0x00101440(stdout,10);
    }
    if (*(long *)((undefined *)puVar8 + 0x188) == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
    goto code_r0x00101a02;
  }
code_r0x001019c7:
  uVar11 = param_2[lVar4];
  *(undefined8 *)((undefined *)puVar7 + -8) = 0x1019d1;
  uVar11 = quote(uVar11);
  *(undefined8 *)((undefined *)puVar7 + -8) = 0x1019e7;
  uVar5 = func_0x001013e0(0,&UNK_00104a43,5);
  *(undefined8 *)((undefined *)puVar7 + -8) = 0x1019f8;
  func_0x00101560(0,0,uVar5,uVar11);
  puVar1 = puVar7;
code_r0x001019f8:
  puVar8 = puVar1;
  *(undefined8 *)((undefined *)puVar8 + -8) = 0x101a02;
  usage(1);
code_r0x00101a02:
  puVar8[-1] = 0x101a07;
  auVar12 = func_0x00101410();
  uVar11 = *puVar8;
  uVar9 = (ulong)(puVar8 + 1) & 0xfffffffffffffff0;
  *(undefined8 *)(uVar9 - 8) = SUB168(auVar12,0);
  *(ulong *)(uVar9 - 0x10) = uVar9 - 8;
  *(undefined8 *)(uVar9 - 0x18) = 0x101a3a;
  (*(code *)PTR___libc_start_main_00306fd8)
            (main,uVar11,puVar8 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar12 >> 0x40,0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
code_r0x001019b9:
  puVar7 = puVar1;
  puVar1 = puVar7;
  if (iVar2 == -0x82) {
    *(undefined8 *)((undefined *)puVar7 + -8) = 0x1019c7;
    lVar4 = usage(0);
    goto code_r0x001019c7;
  }
  goto code_r0x001019f8;
}

