
undefined  [16] printenv(uint param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char **ppcVar9;
  undefined **ppuVar10;
  char cVar11;
  int iVar12;
  long lVar13;
  bool bVar14;
  undefined auVar15 [16];
  undefined *puStack72;
  undefined8 *puStack64;
  undefined8 uStack56;
  
  ppuVar10 = (undefined **)&uStack56;
  puStack64 = (undefined8 *)&UNK_001014ee;
  set_program_name(*param_2);
  puStack64 = (undefined8 *)&UNK_001014ff;
  func_0x00101410(6,&UNK_00104f01);
  puStack64 = (undefined8 *)&UNK_00101512;
  func_0x001012c0(&UNK_00104607,&UNK_00104630);
  puStack64 = (undefined8 *)&UNK_0010151e;
  func_0x001012a0(&UNK_00104607);
  exit_failure = 2;
  puStack64 = (undefined8 *)&UNK_00101534;
  atexit(close_stdout);
  bVar14 = false;
  do {
    bVar2 = bVar14;
    puStack64 = (undefined8 *)&UNK_0010154f;
    iVar4 = func_0x00101310((ulong)param_1,param_2,&UNK_00104669,longopts,0);
    if (iVar4 == -1) goto code_r0x001015be;
    bVar2 = true;
    if (iVar4 == -0x82) {
      puStack64 = (undefined8 *)&UNK_001016d9;
      auVar15 = usage(0);
      uVar1 = uStack56;
      uStack56 = SUB168(auVar15,0);
      puStack64 = &uStack56;
      puStack72 = &UNK_0010170a;
      (*(code *)PTR___libc_start_main_00306fc8)
                (main,uVar1,&stack0xffffffffffffffd0,__libc_csu_init,__libc_csu_fini,
                 SUB168(auVar15 >> 0x40,0));
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    bVar14 = true;
  } while (iVar4 == 0x30);
  if (iVar4 != -0x83) {
    puStack64 = (undefined8 *)&UNK_0010157b;
    usage(2);
  }
  ppuVar10 = &puStack72;
  puStack72 = (undefined *)0x0;
  version_etc(stdout,&UNK_00104584,&UNK_00104603,Version,&UNK_00104659);
  func_0x00101460(0);
code_r0x001015be:
  lVar13 = (long)optind;
  if (optind < (int)param_1) {
    iVar4 = 0;
    do {
      uVar1 = param_2[lVar13];
      ppuVar10[-1] = 0x10163e;
      lVar5 = func_0x00101330(uVar1);
      if (lVar5 == 0) {
        iVar12 = 0;
        ppcVar9 = environ;
        while (pcVar6 = *ppcVar9, pcVar6 != (char *)0x0) {
          pcVar8 = (char *)param_2[lVar13];
          cVar3 = *pcVar6;
          while ((cVar3 != '\0' && (cVar11 = *pcVar8, pcVar7 = pcVar6, cVar11 != '\0'))) {
            while( true ) {
              pcVar8 = pcVar8 + 1;
              pcVar6 = pcVar7 + 1;
              if (cVar11 != cVar3) goto code_r0x00101694;
              cVar3 = pcVar7[1];
              if (cVar3 != '=') break;
              if (*pcVar8 == '\0') {
                ppuVar10[-1] = 0x1016ca;
                func_0x00101420(1,&UNK_0010466f,pcVar7 + 2,(ulong)(-(uint)!bVar2 & 10));
                iVar12 = 1;
                goto code_r0x00101694;
              }
              cVar11 = *pcVar8;
              pcVar7 = pcVar6;
              if (cVar11 == '\0') goto code_r0x00101694;
            }
          }
code_r0x00101694:
          ppcVar9 = ppcVar9 + 1;
        }
        iVar4 = iVar4 + iVar12;
      }
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < (int)param_1);
    bVar14 = param_1 - optind == iVar4;
  }
  else {
    ppcVar9 = environ;
    while (pcVar6 = *ppcVar9, pcVar6 != (char *)0x0) {
      ppcVar9 = ppcVar9 + 1;
      ppuVar10[-1] = 0x1015f8;
      func_0x00101420(1,&UNK_0010466f,pcVar6,(ulong)(-(uint)!bVar2 & 10));
    }
    bVar14 = true;
  }
  return CONCAT88(*ppuVar10,(ulong)(bVar14 ^ 1));
}