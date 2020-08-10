
undefined8 * main(uint param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  uint *puVar10;
  uint *puVar11;
  uint **ppuVar12;
  char **ppcVar13;
  undefined *puVar14;
  char *pcVar15;
  uint *puVar16;
  uint **ppuVar17;
  char **ppcVar18;
  long in_FS_OFFSET;
  bool bVar19;
  byte bVar20;
  undefined *puVar21;
  uint *puStack128;
  char *apcStack120 [4];
  uint auStack88 [6];
  long lStack64;
  
  bVar20 = 0;
  bVar19 = false;
  puVar16 = (uint *)(ulong)param_1;
  ppcVar13 = (char **)0xffffffff;
  ppuVar17 = (uint **)0x0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  ppcVar18 = apcStack120;
  set_program_name(*param_2);
  func_0x001016e0(6,&UNK_00105d81);
  func_0x00101550(&UNK_001051a3,&UNK_001051ce);
  func_0x00101520(&UNK_001051a3);
  atexit(close_stdout);
  do {
    while( true ) {
      uVar3 = func_0x001015a0((ulong)puVar16 & 0xffffffff,param_2,short_options);
      if (uVar3 != 0xffffffff) break;
code_r0x001019d0:
      lVar8 = (long)optind;
      if ((int)ppcVar13 == -1) {
        if ((char)ppuVar17 == '\0') {
code_r0x00101d9e:
          ppcVar13 = (char **)0xf;
          goto code_r0x001019f5;
        }
        ppcVar13 = (char **)0x0;
        if (optind < (int)puVar16) {
          ppcVar13 = (char **)(param_2 + lVar8);
        }
        if (bVar19) {
          puVar16 = auStack88;
          ppuVar17 = (uint **)0x0;
          uVar3 = 1;
          do {
            iVar4 = sig2str((ulong)uVar3);
            puVar11 = puVar16;
            if (iVar4 == 0) {
              do {
                puVar10 = puVar11;
                uVar5 = *puVar10 + 0xfefefeff & ~*puVar10;
                _bVar2 = uVar5 & 0x80808080;
                bVar2 = (byte)_bVar2;
                puVar11 = puVar10 + 1;
              } while (_bVar2 == 0);
              bVar19 = (uVar5 & 0x8080) == 0;
              if (bVar19) {
                bVar2 = (byte)(_bVar2 >> 0x10);
              }
              if (bVar19) {
                puVar11 = (uint *)((long)puVar10 + 6);
              }
              ppuVar12 = (uint **)((long)puVar11 +
                                  ((-3 - (ulong)CARRY1(bVar2,bVar2)) - (long)puVar16));
              if (ppuVar17 < ppuVar12) {
                ppuVar17 = (uint **)((ulong)ppuVar12 & 0xffffffff);
              }
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 != 0x41);
          param_2 = (undefined8 *)0x0;
          ppcVar18 = (char **)&UNK_001051cc;
          if (ppcVar13 == (char **)0x0) {
            uVar3 = 1;
            do {
              iVar4 = sig2str((ulong)uVar3,puVar16);
              if (iVar4 == 0) {
                puVar21 = &UNK_00101cc1;
                puVar14 = (undefined *)func_0x001016c0((ulong)uVar3);
                if (puVar14 == (undefined *)0x0) {
                  puVar14 = &UNK_001051cc;
                }
                func_0x001016f0(1,&UNK_0010521f,2,(ulong)uVar3,ppuVar17,puVar16,puVar14,puVar21);
              }
              uVar3 = uVar3 + 1;
              ppcVar13 = ppcVar18;
            } while (uVar3 != 0x41);
code_r0x00101aa0:
            puVar16 = auStack88;
            param_2 = (undefined8 *)0x0;
          }
          else {
            while (*ppcVar13 != (char *)0x0) {
              uVar3 = operand2sig(*ppcVar13,puVar16);
              if ((int)uVar3 < 0) {
                param_2 = (undefined8 *)0x1;
              }
              else {
                puVar21 = &UNK_00101bca;
                puVar14 = (undefined *)func_0x001016c0((ulong)uVar3);
                if (puVar14 == (undefined *)0x0) {
                  puVar14 = &UNK_001051cc;
                }
                func_0x001016f0(1,&UNK_0010521f,2,(ulong)uVar3,ppuVar17,puVar16,puVar14,puVar21);
              }
              ppcVar13 = ppcVar13 + 1;
            }
          }
        }
        else {
          param_2 = (undefined8 *)0x0;
          puVar16 = auStack88;
          if (ppcVar13 == (char **)0x0) {
            uVar3 = 1;
            do {
              iVar4 = sig2str((ulong)uVar3,puVar16);
              if (iVar4 == 0) {
                func_0x00101510();
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 != 0x41);
            goto code_r0x00101aa0;
          }
          while (*ppcVar13 != (char *)0x0) {
            uVar3 = operand2sig(*ppcVar13,puVar16);
            if ((int)uVar3 < 0) {
              param_2 = (undefined8 *)0x1;
            }
            else {
              if ((int)**ppcVar13 - 0x30U < 10) {
                func_0x00101510(puVar16);
              }
              else {
                func_0x001016f0(1,&UNK_0010522c,(ulong)uVar3);
              }
            }
            ppcVar13 = ppcVar13 + 1;
          }
        }
      }
      else {
        puVar14 = &UNK_00105730;
        if ((char)ppuVar17 != '\0') goto code_r0x00101d4c;
code_r0x001019f5:
        puVar14 = &UNK_00105207;
        if ((int)puVar16 <= (int)lVar8) goto code_r0x00101d4c;
        ppuVar17 = (uint **)(param_2 + lVar8);
        param_2 = (undefined8 *)0x0;
        ppcVar18 = (char **)func_0x001014c0();
        puVar16 = *ppuVar17;
        do {
          *(undefined4 *)ppcVar18 = 0;
          uVar6 = func_0x00101530(puVar16,&puStack128,10,0);
          if ((((*(int *)ppcVar18 == 0x22) || (uVar6 != (long)(int)uVar6)) ||
              (puVar16 == puStack128)) || (*(char *)puStack128 != '\0')) {
            quote(puVar16);
            uVar7 = func_0x00101560(0,&UNK_00105230,5);
            param_2 = (undefined8 *)0x1;
            func_0x00101700(0,0,uVar7);
          }
          else {
            iVar4 = func_0x00101660(uVar6 & 0xffffffff,(ulong)ppcVar13 & 0xffffffff);
            if (iVar4 != 0) {
              param_2 = (undefined8 *)0x1;
              quote(puVar16);
              func_0x00101700(0,(ulong)*(uint *)ppcVar18,&UNK_00105814);
            }
          }
          ppuVar17 = ppuVar17 + 1;
          puVar16 = *ppuVar17;
        } while (puVar16 != (uint *)0x0);
      }
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_2;
      }
code_r0x00101d3b:
      func_0x00101590();
      do {
        puVar14 = &UNK_00105708;
code_r0x00101d4c:
        uVar7 = func_0x00101560(0,puVar14,5);
        func_0x00101700(0,0,uVar7);
code_r0x001018a6:
        usage();
code_r0x001018b0:
        bVar19 = true;
code_r0x001018b6:
      } while ((char)ppuVar17 != '\0');
      ppuVar17 = (uint **)0x1;
    }
    if (uVar3 == 0x4c) goto code_r0x001018b0;
    if ((int)uVar3 < 0x4d) {
      if (0x39 < (int)uVar3) {
        if ((int)uVar3 < 0x41) goto code_r0x001018a6;
code_r0x0010195c:
        pcVar9 = (char *)param_2[(long)optind + -1];
        if (optarg == (char *)0x0) {
          uVar6 = 0xffffffffffffffff;
          pcVar15 = pcVar9;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar15 + (ulong)bVar20 * -2 + 1;
          } while (cVar1 != '\0');
          optarg = pcVar9 + (~uVar6 - 1);
          pcVar9 = (char *)param_2[(long)optind + -1];
        }
        if (optarg != pcVar9 + 2) {
          uVar7 = func_0x00101560(0,&UNK_001051e6,5);
          func_0x00101700(0,0,uVar7,(ulong)uVar3);
          lVar8 = usage(1);
          goto code_r0x00101d9e;
        }
        optarg = pcVar9 + 1;
        goto code_r0x0010192f;
      }
      if (0x2f < (int)uVar3) {
        if (optind != 2) {
          optind = optind + -1;
          goto code_r0x001019d0;
        }
        goto code_r0x0010195c;
      }
      if (uVar3 == 0xffffff7d) {
        version_etc(stdout,&UNK_00105124,&UNK_0010519f,Version,&UNK_001051fb,0);
        func_0x00101740(0);
        goto code_r0x0010192f;
      }
      if (uVar3 != 0xffffff7e) goto code_r0x001018a6;
      usage(0);
code_r0x00101d05:
      param_2 = (undefined8 *)quote();
      uVar7 = func_0x00101560(0,&UNK_001056e8,5);
      func_0x00101700(0,0,uVar7,param_2);
      usage(1);
      goto code_r0x00101d3b;
    }
    if (uVar3 == 0x6c) goto code_r0x001018b6;
    if ((int)uVar3 < 0x6d) {
      if (0x5a < (int)uVar3) goto code_r0x001018a6;
      goto code_r0x0010195c;
    }
    if (uVar3 != 0x73) {
      if (uVar3 == 0x74) goto code_r0x001018b0;
      if (uVar3 != 0x6e) goto code_r0x001018a6;
    }
code_r0x0010192f:
    if ((int)ppcVar13 != -1) goto code_r0x00101d05;
    uVar3 = operand2sig(optarg,ppcVar18);
    ppcVar13 = (char **)(ulong)uVar3;
    if ((int)uVar3 < 0) goto code_r0x001018a6;
  } while( true );
}

