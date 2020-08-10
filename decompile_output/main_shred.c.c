
/* WARNING: Could not reconcile some variable overlaps */

ulong main(uint param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long lVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  byte **ppbVar19;
  long in_FS_OFFSET;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  undefined auVar23 [16];
  undefined *puVar24;
  byte **ppbStack184;
  char *pcStack176;
  byte bStack165;
  uint uStack164;
  undefined8 uStack160;
  uint uStack152;
  byte bStack145;
  long lStack144;
  byte *pbStack136;
  byte *pbStack128;
  undefined8 uStack120;
  byte **ppbStack112;
  char cStack104;
  undefined3 uStack103;
  undefined4 uStack100;
  undefined8 uStack96;
  undefined8 uStack88;
  int iStack80;
  undefined4 uStack76;
  long lStack64;
  
  bVar22 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  cStack104 = '\0';
  uStack103 = 0;
  uStack100 = 0;
  uStack96 = 0;
  uStack88 = 0;
  iStack80 = 0;
  uStack76 = 0;
  set_program_name(0,*param_2);
  func_0x00101fd0(6,&UNK_0010ad90);
  func_0x00101d60(&UNK_001096f8,&UNK_00109721);
  func_0x00101d40(&UNK_001096f8);
  atexit(close_stdout);
  uStack96 = 3;
  uStack88 = 0xffffffffffffffff;
  pcVar3 = (char *)0x0;
code_r0x001021d8:
  pcVar18 = pcVar3;
  uVar5 = func_0x00101dc0((ulong)param_1,param_2,&UNK_00109787,long_opts,0);
  pcVar3 = optarg;
  if (uVar5 == 0xffffffff) {
    lVar8 = (long)optind;
    iVar6 = param_1 - optind;
    if (iVar6 != 0) {
      randint_source = randint_all_new(pcVar18,0xffffffffffffffff);
      if (randint_source == 0) goto code_r0x001029eb;
      atexit();
      if (iVar6 < 1) {
        bStack165 = 1;
      }
      else {
        ppbVar19 = (byte **)(param_2 + lVar8);
        bStack165 = 1;
        ppbStack184 = (byte **)(param_2 + lVar8 + (ulong)(iVar6 - 1) + 1);
        pcStack176 = &cStack104;
        uStack152 = uVar5;
        do {
          bVar20 = false;
          bVar21 = true;
          uVar13 = quotearg_n_style_colon(0,3,*ppbVar19);
          pbVar15 = (byte *)xstrdup(uVar13);
          lVar8 = randint_source;
          pbVar1 = *ppbVar19;
          lVar14 = 2;
          pbVar16 = pbVar1;
          pbVar17 = &UNK_0010a832;
          do {
            if (lVar14 == 0) break;
            lVar14 = lVar14 + -1;
            bVar20 = *pbVar16 < *pbVar17;
            bVar21 = *pbVar16 == *pbVar17;
            pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
            pbVar17 = pbVar17 + (ulong)bVar22 * -2 + 1;
          } while (bVar21);
          if ((!bVar20 && !bVar21) == bVar20) {
            uVar5 = rpl_fcntl(1,3);
            if ((int)uVar5 < 0) {
              uVar13 = func_0x00101d70(0,&UNK_001097a6,5);
              puVar9 = (uint *)func_0x00101c70();
              func_0x00102020(0,(ulong)*puVar9,uVar13,pbVar15);
              bVar4 = 0;
            }
            else {
              if ((uVar5 & 0x400) == 0) {
                bVar4 = do_wipefd(1,pbVar15,lVar8,pcStack176);
              }
              else {
                uVar13 = func_0x00101d70(0,&UNK_0010a530,5);
                func_0x00102020(0,0,uVar13,pbVar15);
                bVar4 = 0;
              }
            }
            bStack165 = bStack165 & bVar4;
          }
          else {
            uVar5 = open_safer(pbVar1,0x101);
            if (((int)uVar5 < 0) &&
               ((((puVar9 = (uint *)func_0x00101c70(), *puVar9 != 0xd || (cStack104 == '\0')) ||
                 (iVar6 = func_0x00102000(pbVar1,0x80), iVar6 != 0)) ||
                (uVar5 = open_safer(pbVar1,0x101), (int)uVar5 < 0)))) {
              uVar13 = func_0x00101d70(0,&UNK_0010a560,5);
              pcVar18 = (char *)0x0;
              func_0x00102020(0,(ulong)*puVar9,uVar13,pbVar15);
            }
            else {
              uVar7 = do_wipefd((ulong)uVar5,pbVar15,lVar8,pcStack176);
              pcVar18 = (char *)(ulong)uVar7;
              iVar6 = func_0x00101e90((ulong)uVar5);
              if (iVar6 == 0) {
                bVar4 = (byte)uVar7;
                if ((bVar4 != 0) && (iStack80 != 0)) {
                  lVar8 = xstrdup(pbVar1);
                  lStack144 = lVar8;
                  lVar14 = last_component(lVar8);
                  uStack120 = dir_name(lVar8);
                  uVar13 = quotearg_n_style_colon(0,3,uStack120);
                  uStack160 = xstrdup(uVar13);
                  uStack164 = uStack152;
                  if (iStack80 == 3) {
                    uStack164 = open_safer(uStack120,0x10900);
                  }
                  if ((char)uStack76 != '\0') {
                    uVar13 = func_0x00101d70(0,&UNK_001097cb,5);
                    func_0x00102020(0,0,uVar13,pbVar15);
                  }
                  if (iStack80 != 1) {
                    lVar10 = base_len(lVar14);
                    lVar8 = lStack144;
                    pbStack136 = (byte *)((ulong)pbStack136 & 0xffffffffffffff00 | (ulong)bVar4);
                    bStack145 = bVar4;
                    pbStack128 = pbVar15;
                    ppbStack112 = ppbVar19;
code_r0x0010272b:
                    lVar2 = lVar10;
                    lVar10 = lVar2 + -1;
                    if (lVar10 != -1) {
                      func_0x00101e70(lVar14,0x30);
                      *(undefined *)(lVar14 + 1 + lVar10) = 0;
                      while (iVar6 = renameatu(0xffffff9c,pbVar1,0xffffff9c,lVar8,1), iVar6 != 0) {
                        piVar11 = (int *)func_0x00101c70();
                        if (*piVar11 != 0x11) goto code_r0x0010272b;
                        pcVar18 = (char *)(lVar14 + lVar10);
                        while( true ) {
                          lVar12 = func_0x00101de0(nameset,(ulong)(uint)(int)*pcVar18);
                          if (lVar12 == 0) goto code_r0x001029c7;
                          if (*(char *)(lVar12 + 1) != '\0') break;
                          *pcVar18 = '0';
                          pcVar18 = pcVar18 + -1;
                          if ((char *)(lVar14 + -1) == pcVar18) goto code_r0x0010272b;
                        }
                        *pcVar18 = *(char *)(lVar12 + 1);
                      }
                      if ((-1 < (int)uStack164) &&
                         (iVar6 = dosync((ulong)uStack164,uStack160), iVar6 != 0)) {
                        bStack145 = 0;
                      }
                      if ((char)uStack76 != '\0') {
                        pbStack136 = pbStack128;
                        if ((char)pbStack136 == '\0') {
                          pbStack136 = pbVar1;
                        }
                        uVar13 = func_0x00101d70(0,&UNK_001097e4,5);
                        func_0x00102020(0,0,uVar13,pbStack136,lVar8);
                        pbStack136 = (byte *)((ulong)pbStack136 & 0xffffffffffffff00);
                      }
                      func_0x00101f00(pbVar1 + (lVar14 - lVar8),lVar14,lVar2 + 1);
                      goto code_r0x0010272b;
                    }
                    pcVar18 = (char *)(ulong)bStack145;
                    pbVar15 = pbStack128;
                    ppbVar19 = ppbStack112;
                  }
                  iVar6 = func_0x00101c90(pbVar1);
                  if (iVar6 == 0) {
                    if ((char)uStack76 != '\0') {
                      uVar13 = func_0x00101d70(0,&UNK_0010980b,5);
                      func_0x00102020(0,0,uVar13,pbVar15);
                    }
                  }
                  else {
                    pcVar18 = (char *)0x0;
                    uVar13 = func_0x00101d70(0,&UNK_001097f6,5);
                    puVar9 = (uint *)func_0x00101c70();
                    func_0x00102020(0,(ulong)*puVar9,uVar13,pbVar15);
                  }
                  uVar5 = uStack164;
                  if (-1 < (int)uStack164) {
                    iVar6 = dosync((ulong)uStack164,uStack160);
                    if (iVar6 != 0) {
                      pcVar18 = (char *)0x0;
                    }
                    iVar6 = func_0x00101e90((ulong)uVar5);
                    if (iVar6 != 0) {
                      pcVar18 = (char *)0x0;
                      uVar13 = func_0x00101d70(0,&UNK_001097b7,5);
                      puVar9 = (uint *)func_0x00101c70();
                      func_0x00102020(0,(ulong)*puVar9,uVar13,uStack160);
                    }
                  }
                  func_0x00101c50(lStack144);
                  func_0x00101c50(uStack120);
                  func_0x00101c50(uStack160);
                }
              }
              else {
                pcVar18 = (char *)0x0;
                uVar13 = func_0x00101d70(0,&UNK_001097b7,5);
                puVar9 = (uint *)func_0x00101c70();
                func_0x00102020(0,(ulong)*puVar9,uVar13,pbVar15);
              }
            }
            bStack165 = bStack165 & (byte)pcVar18;
          }
          ppbVar19 = ppbVar19 + 1;
          func_0x00101c50();
        } while (ppbVar19 != ppbStack184);
      }
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)(bStack165 ^ 1);
      }
      goto code_r0x001029e6;
    }
code_r0x0010299c:
    uVar13 = func_0x00101d70(0,&UNK_00109791,5);
    func_0x00102020(0,0,uVar13);
  }
  else {
    if (uVar5 == 0x73) {
      puVar24 = &UNK_00102303;
      uVar13 = func_0x00101d70(0,&UNK_0010975b,5);
      uStack88 = xnumtoumax(optarg,0,0,0x7fffffffffffffff,&UNK_0010976d,uVar13,0,puVar24);
      pcVar3 = pcVar18;
      goto code_r0x001021d8;
    }
    if (0x73 < (int)uVar5) {
      if (uVar5 == 0x78) {
        uStack76._0_2_ = CONCAT11(1,(char)uStack76);
        uStack76 = uStack76 & 0xffff0000 | (uint)(ushort)uStack76;
        pcVar3 = pcVar18;
        goto code_r0x001021d8;
      }
      if ((int)uVar5 < 0x79) {
        if (uVar5 == 0x75) {
          if (optarg == (char *)0x0) {
code_r0x001023df:
            iStack80 = 3;
            pcVar3 = pcVar18;
          }
          else {
            lVar8 = __xargmatch_internal(&UNK_00109752,optarg,remove_args,remove_methods);
            iStack80 = *(int *)(remove_methods + lVar8 * 4);
            pcVar3 = pcVar18;
          }
        }
        else {
          if (uVar5 != 0x76) goto code_r0x001029bd;
          uStack76 = CONCAT31(uStack76._1_3_,1);
          pcVar3 = pcVar18;
        }
        goto code_r0x001021d8;
      }
      if (uVar5 == 0x7a) {
        uStack76._0_3_ = CONCAT12(1,(ushort)uStack76);
        uStack76 = uStack76 & 0xff000000 | (uint)(uint3)uStack76;
        pcVar3 = pcVar18;
        goto code_r0x001021d8;
      }
      if (uVar5 != 0x80) goto code_r0x001029bd;
      if ((pcVar18 == (char *)0x0) || (iVar6 = func_0x00101ed0(pcVar18,optarg), iVar6 == 0))
      goto code_r0x001021d8;
      goto code_r0x00102a1a;
    }
    if (uVar5 == 0xffffff7e) {
      usage(0);
      goto code_r0x0010299c;
    }
    if ((int)uVar5 < -0x81) {
      if (uVar5 == 0xffffff7d) {
        version_etc(stdout,&UNK_00109678,&UNK_001096f4,Version,&UNK_0010977b,0);
        func_0x001020c0();
        goto code_r0x001023df;
      }
      goto code_r0x001029bd;
    }
    if (uVar5 == 0x66) {
      cStack104 = '\x01';
      pcVar3 = pcVar18;
      goto code_r0x001021d8;
    }
    if (uVar5 == 0x6e) {
      func_0x00101d70(0,&UNK_00109739,5);
      uStack96 = xdectoumax(optarg,0,0x3fffffffffffffff,&UNK_0010ad90);
      pcVar3 = pcVar18;
      goto code_r0x001021d8;
    }
  }
code_r0x001029bd:
  usage(1);
code_r0x001029c7:
  func_0x00101e50(&UNK_0010984c,&UNK_001097d8,0x40c,&__PRETTY_FUNCTION___7286);
code_r0x001029e6:
  func_0x00101da0();
code_r0x001029eb:
  uVar13 = quotearg_n_style_colon(0,3,pcVar18);
  puVar9 = (uint *)func_0x00101c70();
  func_0x00102020(1,(ulong)*puVar9,&UNK_0010a748,uVar13);
code_r0x00102a1a:
  uVar13 = func_0x00101d70(0,&UNK_0010a508,5);
  auVar23 = func_0x00102020(1,0,uVar13);
  ppbVar19 = ppbStack184;
  ppbStack184 = SUB168(auVar23,0);
  (*(code *)PTR___libc_start_main_0030cfe0)
            (main,ppbVar19,&pcStack176,__libc_csu_init,__libc_csu_fini,SUB168(auVar23 >> 0x40,0),
             &ppbStack184);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

