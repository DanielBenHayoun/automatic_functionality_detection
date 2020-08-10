
ulong main(uint param_1,undefined8 *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  byte bVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 uVar15;
  byte bVar16;
  char *pcVar17;
  char cVar18;
  char *pcVar19;
  char *pcVar20;
  char cVar21;
  undefined *puVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  undefined auVar24 [16];
  long alStack288 [3];
  long lStack264;
  char *pcStack256;
  uint uStack244;
  undefined8 *puStack240;
  char *pcStack232;
  char *pcStack224;
  long alStack216 [19];
  long alStack64 [2];
  
  cVar18 = 0;
  alStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101470(6,&UNK_00105501);
  func_0x00101300(&UNK_00104b26,&UNK_00104b51);
  func_0x001012d0(&UNK_00104b26);
  atexit(close_stdout);
  lStack264._0_1_ = 0;
  plVar11 = &lStack264;
  while( true ) {
    plVar11[-1] = 0x1015c1;
    iVar3 = func_0x00101360((ulong)param_1,param_2,&UNK_00104b92,longopts);
    if (iVar3 == -1) break;
    plVar12 = plVar11;
    if (iVar3 == 0x50) {
code_r0x00101640:
      cVar18 = 1;
      plVar11 = plVar12;
    }
    else {
      if (iVar3 < 0x51) {
        if (iVar3 == -0x83) {
          plVar11[-1] = 0;
          plVar12 = plVar11 + -2;
          plVar11[-2] = 0x104b85;
          plVar11[-3] = 0x101636;
          version_etc(stdout,&UNK_00104aa4,&UNK_00104b22,Version,&UNK_00104b79,&UNK_00104b69);
          plVar11[-3] = 0x10163d;
          func_0x001014c0();
          goto code_r0x00101640;
        }
        if (iVar3 != -0x82) goto code_r0x00101bdc;
        plVar11[-1] = 0x101bbb;
        usage(0);
        goto code_r0x00101bbb;
      }
      if (iVar3 == 0x70) {
        *(undefined *)plVar11 = 1;
      }
      else {
        if (iVar3 != 0x80) goto code_r0x00101bdc;
        cVar18 = 1;
        *(undefined *)plVar11 = 1;
      }
    }
  }
  if (optind == param_1) {
code_r0x00101bbb:
    plVar11[-1] = 0x101bce;
    uVar15 = func_0x00101310(0,&UNK_00104b96,5);
    plVar11[-1] = 0x101bdc;
    func_0x00101490(0,0,uVar15);
code_r0x00101bdc:
    plVar11[-1] = 0x101be6;
    usage(1);
  }
  else {
    bVar9 = 1;
    if ((int)optind < (int)param_1) {
      *(uint *)((long)plVar11 + 0x14) = param_1;
      *(undefined8 **)(plVar11 + 3) = param_2;
      bVar9 = 1;
      do {
        pcVar2 = *(char **)(plVar11[3] + (long)(int)optind * 8);
        plVar11[-1] = 0x10171f;
        uVar5 = func_0x00101330(pcVar2);
        pcVar10 = pcVar2;
        if (cVar18 == '\0') {
          if (*(char *)plVar11 != '\0') {
            if (uVar5 != 0) goto code_r0x00101769;
            goto code_r0x00101883;
          }
code_r0x0010168f:
          plVar11[-1] = 0x1016a1;
          iVar3 = func_0x00101340(1,pcVar2,plVar11 + 6);
          if (iVar3 == 0) {
code_r0x00101949:
            bVar16 = 1;
          }
          else {
            plVar11[-1] = 0x1016ae;
            puVar4 = (uint *)func_0x00101290();
            if (*puVar4 == 2 && uVar5 != 0) {
              *(char *)(plVar11 + 1) = '\0';
              pcVar10 = pcVar2;
              if (0xff < uVar5) {
                cVar21 = *pcVar2;
                puVar22 = &UNK_00104fbe;
                *puVar4 = 0;
                if (cVar21 != '/') {
                  puVar22 = &UNK_00104b4f;
                }
                plVar11[-1] = 0x101a53;
                uVar23 = func_0x001012e0(puVar22,4);
                if (((long)uVar23 < 0) && (*puVar4 != 0)) {
                  plVar11[-1] = 0x101b29;
                  uVar15 = func_0x00101310(0,&UNK_00104eb8,5);
                  uVar1 = *puVar4;
                  plVar11[-1] = 0x101b3a;
                  func_0x00101490(0,(ulong)uVar1,uVar15);
                  bVar16 = *(byte *)(plVar11 + 1);
                  goto code_r0x001016f0;
                }
                if (uVar23 <= uVar5) goto code_r0x00101aca;
              }
              do {
                do {
                  while (pcVar7 = pcVar10, *pcVar7 == '/') {
                    pcVar10 = pcVar7 + 1;
                  }
                  if (*pcVar7 == '\0') goto code_r0x00101949;
                  pcVar10 = pcVar7 + 1;
                } while ((pcVar7[1] == '/') || (pcVar7[1] == '\0'));
                pcVar19 = pcVar7 + 2;
                do {
                  pcVar10 = pcVar19;
                  if (*pcVar10 == '/') break;
                  pcVar19 = pcVar10 + 1;
                } while (*pcVar10 != '\0');
              } while (pcVar10 + -(long)pcVar7 < (char *)0xf);
              pcVar10 = (char *)0x0;
code_r0x001017a2:
              *(char *)(plVar11 + 4) = cVar18;
              *(byte *)(plVar11 + 5) = bVar9;
              pcVar7 = pcVar2;
              pcVar19 = (char *)0xe;
              do {
                while (pcVar14 = pcVar7, cVar21 = *pcVar14, cVar21 == '/') {
                  pcVar7 = pcVar14 + 1;
                }
                if (cVar21 == '\0') {
                  cVar18 = *(char *)(plVar11 + 4);
                  bVar9 = *(byte *)(plVar11 + 5);
                  goto code_r0x00101949;
                }
                pcVar20 = pcVar10;
                if (pcVar10 == (char *)0x0) {
                  pcVar7 = ".";
                  if (pcVar2 != pcVar14) {
                    pcVar7 = pcVar2;
                  }
                  *(char **)(plVar11 + 1) = pcVar7;
                  plVar11[-1] = 0x1017f9;
                  puVar4 = (uint *)func_0x00101290();
                  lVar6 = plVar11[1];
                  *puVar4 = 0;
                  *pcVar14 = '\0';
                  plVar11[-1] = 0x101815;
                  pcVar20 = (char *)func_0x001012e0(lVar6,3);
                  *pcVar14 = cVar21;
                  if ((long)pcVar20 < 0) {
                    if (*puVar4 == 0) {
                      pcVar20 = (char *)0xffffffffffffffff;
                    }
                    else {
                      pcVar10 = pcVar19;
                      pcVar20 = pcVar19;
                      if (*puVar4 != 2) {
                        lVar6 = plVar11[1];
                        *pcVar14 = '\0';
                        cVar18 = *(char *)(plVar11 + 4);
                        bVar9 = *(byte *)(plVar11 + 5);
                        plVar11[-1] = 0x10191c;
                        quotearg_n_style_colon(0,3,lVar6);
                        uVar1 = *puVar4;
                        plVar11[-1] = 0x101931;
                        func_0x00101490(0,(ulong)uVar1,&UNK_00104f78);
                        *pcVar14 = cVar21;
                        bVar16 = 0;
                        goto code_r0x001016f0;
                      }
                    }
                  }
                }
                cVar21 = pcVar14[1];
                if ((cVar21 == '/') || (cVar21 == '\0')) {
                  pcVar7 = pcVar14 + 1;
                  pcVar17 = (char *)0x1;
                }
                else {
                  pcVar19 = pcVar14 + 2;
                  do {
                    pcVar7 = pcVar19;
                    cVar21 = *pcVar7;
                    pcVar17 = pcVar7 + -(long)pcVar14;
                    if (cVar21 == '/') break;
                    pcVar19 = pcVar7 + 1;
                  } while (cVar21 != '\0');
                }
                pcVar19 = pcVar20;
              } while (pcVar17 <= pcVar20);
              *pcVar7 = '\0';
              *(char **)(plVar11 + 1) = pcVar7;
              bVar9 = *(byte *)(plVar11 + 5);
              *(char **)(plVar11 + 5) = pcVar20;
              cVar18 = *(char *)(plVar11 + 4);
              *(char **)(plVar11 + 4) = pcVar17;
              plVar11[-1] = 0x101b6c;
              uVar15 = quote(pcVar14);
              plVar11[-1] = 0x101b82;
              uVar8 = func_0x00101310(0,&UNK_00104f28,5);
              plVar11[-1] = 0x101b9d;
              func_0x00101490(0,0,uVar8,plVar11[5],plVar11[4],uVar15);
              bVar16 = 0;
              *(char *)plVar11[1] = cVar21;
            }
            else {
              plVar11[-1] = 0x1016d6;
              quotearg_n_style_colon(0,3,pcVar2);
              uVar1 = *puVar4;
              plVar11[-1] = 0x1016eb;
              func_0x00101490(0,(ulong)uVar1,&UNK_00104f78);
              bVar16 = 0;
            }
          }
        }
        else {
          while( true ) {
            plVar11[-1] = 0x101751;
            pcVar10 = (char *)func_0x00101380(pcVar10,0x2d);
            if (pcVar10 == (char *)0x0) break;
            if ((pcVar2 == pcVar10) || (pcVar10[-1] == '/')) {
              plVar11[-1] = 0x1018b9;
              quotearg_style(4,pcVar2);
              plVar11[-1] = 0x1018cf;
              uVar15 = func_0x00101310(0,&UNK_00104e10,5);
              plVar11[-1] = 0x1018e0;
              func_0x00101490(0,0,uVar15);
              bVar16 = 0;
              goto code_r0x001016f0;
            }
            pcVar10 = pcVar10 + 1;
          }
          if (uVar5 == 0) {
code_r0x00101883:
            plVar11[-1] = 0x101896;
            uVar15 = func_0x00101310(0,&UNK_00104ba6,5);
            plVar11[-1] = 0x1018a4;
            func_0x00101490(0,0,uVar15);
            bVar16 = 0;
          }
          else {
            if (*(char *)plVar11 == '\0') goto code_r0x0010168f;
code_r0x00101769:
            plVar11[-1] = 0x101778;
            lVar6 = func_0x001013c0(pcVar2,&UNK_00104e40);
            pcVar10 = pcVar2 + lVar6;
            if (*pcVar10 == '\0') {
              if (uVar5 < 0x100) {
                pcVar10 = (char *)(ulong)((uint)((*plVar11 << 0x3f) >> 0x3f) & 0xe);
                goto code_r0x001017a2;
              }
              uVar23 = 0x100;
code_r0x00101aca:
              plVar11[-1] = 0x101ad7;
              uVar15 = quotearg_style(4,pcVar2);
              plVar11[-1] = 0x101aed;
              uVar8 = func_0x00101310(0,&UNK_00104ef0,5);
              plVar11[-1] = 0x101b05;
              func_0x00101490(0,0,uVar8,uVar23 - 1,uVar5,uVar15);
              bVar16 = 0;
            }
            else {
              plVar11[6] = 0;
              plVar11[-1] = 0x1019a4;
              uVar5 = rpl_mbrlen(pcVar10,uVar5 - lVar6,plVar11 + 6);
              plVar11[-1] = 0x1019b6;
              quotearg_n_style(0,4,pcVar2);
              if (0x10 < uVar5) {
                uVar5 = 1;
              }
              plVar11[-1] = 0x1019d9;
              quotearg_n_style_mem(1,8,pcVar10,uVar5);
              plVar11[-1] = 0x1019ef;
              uVar15 = func_0x00101310(0,&UNK_00104e88,5);
              plVar11[-1] = 0x101a03;
              func_0x00101490(0,0,uVar15);
              bVar16 = 0;
            }
          }
        }
code_r0x001016f0:
        bVar9 = bVar9 & bVar16;
        optind = optind + 1;
      } while ((int)optind < *(int *)((long)plVar11 + 0x14));
    }
    if (plVar11[0x19] == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)(bVar9 ^ 1);
    }
  }
  plVar11[-1] = 0x101beb;
  auVar24 = func_0x00101350();
  uVar15 = *plVar11;
  uVar13 = (ulong)(plVar11 + 1) & 0xfffffffffffffff0;
  *(undefined8 *)(uVar13 - 8) = SUB168(auVar24,0);
  *(ulong *)(uVar13 - 0x10) = uVar13 - 8;
  *(undefined8 *)(uVar13 - 0x18) = 0x101c1a;
  (*(code *)PTR___libc_start_main_00306fe0)
            (main,uVar15,plVar11 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar24 >> 0x40,0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

