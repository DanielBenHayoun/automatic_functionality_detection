
/* WARNING: Could not reconcile some variable overlaps */

undefined8 main(ulong param_1,ulong *****param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong *****pppppuVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong *****pppppuVar13;
  ulong *****extraout_RDX;
  ulong *****pppppuVar14;
  ulong *****pppppuVar15;
  uint uVar16;
  ulong *****pppppuVar17;
  ulong ****ppppuVar18;
  ulong *****pppppuVar19;
  ulong *****pppppuVar20;
  ulong *****pppppuVar21;
  ulong *****pppppuVar22;
  ulong *****pppppuVar23;
  long in_FS_OFFSET;
  bool bVar24;
  byte bVar25;
  undefined auVar26 [16];
  undefined8 uStack328;
  undefined8 uStack320;
  undefined8 uStack312;
  char cStack298;
  char cStack297;
  undefined8 uStack296;
  ulong *****pppppuStack288;
  ulong *****pppppuStack280;
  ulong *****pppppuStack272;
  ulong *****pppppuStack264;
  ulong *****pppppuStack256;
  ulong *****apppppuStack248 [4];
  undefined auStack216 [24];
  uint uStack192;
  long lStack168;
  long lStack64;
  
  bVar25 = 0;
  pppppuVar17 = (ulong *****)(param_1 & 0xffffffff);
  iVar3 = (int)pppppuVar17;
  pppppuVar22 = (ulong *****)0xffffffffffffffff;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101cc0(6,&UNK_00109d10);
  func_0x00101a80(&UNK_00109183,&UNK_001091ac);
  func_0x00101a60(&UNK_00109183);
  atexit(close_stdout);
  uStack296 = apppppuStack248;
  cStack298 = '\0';
  cStack297 = '\n';
  pppppuStack288 = (ulong *****)0x0;
  uStack320 = (undefined *)((ulong)uStack320 & 0xffffffffffffff00);
  uStack312 = (ulong *****)((ulong)uStack312 & 0xffffffffffffff00);
  pppppuVar20 = (ulong *****)0xffffffffffffffff;
  pppppuVar13 = (ulong *****)0x0;
  pppppuVar14 = (ulong *****)0x0;
code_r0x00101e88:
  pppppuVar23 = pppppuVar14;
  pppppuVar21 = pppppuVar13;
  uStack312._0_1_ = 0;
  pppppuVar19 = (ulong *****)0x0;
  iVar2 = func_0x00101af0(pppppuVar17,param_2,&UNK_00109220);
  pppppuVar10 = optarg;
  if (iVar2 != -1) {
    pppppuVar13 = pppppuVar21;
    pppppuVar14 = pppppuVar23;
    if (iVar2 == 0x6e) {
      iVar2 = xstrtoul(optarg,0,10,uStack296);
      if (iVar2 == 0) {
        if (apppppuStack248[0] < pppppuVar20) {
          pppppuVar20 = apppppuStack248[0];
        }
      }
      else {
code_r0x001020e7:
        if (iVar2 != 1) {
          uVar11 = quote(optarg);
          uVar5 = func_0x00101aa0(0,&UNK_001091fd,5);
          func_0x00101cf0(1,0,uVar5,uVar11);
code_r0x00102126:
          uVar11 = func_0x00101aa0(0,&UNK_001091e2,5);
          xdectoumax(pppppuVar22,0,0xffffffffffffffff,&UNK_00109d10,uVar11,0);
code_r0x00102154:
          pppppuVar19 = (ulong *****)quote(optarg);
          iVar3 = (int)pppppuVar19;
          param_2 = (ulong *****)func_0x00101aa0(0,&UNK_001091e2,5);
          puVar6 = (uint *)func_0x001019b0();
          func_0x00101cf0(1,(ulong)*puVar6,&UNK_001091f6);
          goto code_r0x00102199;
        }
      }
      goto code_r0x00101e88;
    }
    if (0x6e < iVar2) {
      if (iVar2 == 0x72) {
        cStack298 = '\x01';
      }
      else {
        if (iVar2 < 0x73) {
          if (iVar2 != 0x6f) goto code_r0x001029e2;
          pppppuVar14 = optarg;
          if (pppppuVar23 != (ulong *****)0x0) {
            pppppuStack280 = optarg;
            iVar2 = func_0x00101c00(pppppuVar23,optarg);
            pppppuVar14 = pppppuStack280;
            if (iVar2 != 0) {
code_r0x00102a7a:
              uVar11 = func_0x00101aa0(0,&UNK_001096f0,5);
              func_0x00101cf0(1,0,uVar11);
code_r0x00102a9e:
              uStack312 = (ulong *****)
                          ((ulong)uStack312 & 0xffffffffffffff00 | (ulong)(byte)uStack312);
              pppppuVar21 = (ulong *****)randperm_new(uStack296,pppppuVar20,pppppuStack280);
              if (pppppuVar23 != (ulong *****)0x0) goto code_r0x001028ad;
code_r0x00102ac5:
              pppppuVar10 = pppppuStack272;
              pppppuVar17 = pppppuStack280;
              pppppuVar14 = (ulong *****)0x0;
              if ((byte)uStack312 == 0) goto code_r0x001023ef;
              while( true ) {
                pppppuVar23 = pppppuVar14;
                if (pppppuVar17 == pppppuVar14) goto code_r0x00102436;
                pppppuVar20 = pppppuVar10 + (long)pppppuVar21[(long)pppppuVar14] * 3;
                ppppuVar18 = (ulong ****)func_0x00101c90(pppppuVar20[2],1,pppppuVar20[1],stdout);
                if (ppppuVar18 != pppppuVar20[1]) break;
                pppppuVar14 = (ulong *****)((long)pppppuVar14 + 1);
              }
code_r0x0010260c:
              do {
                uVar11 = func_0x00101aa0(0,&UNK_00109269,5);
                puVar6 = (uint *)func_0x001019b0();
                func_0x00101cf0(1,(ulong)*puVar6,uVar11);
                pppppuVar13 = extraout_RDX;
                pppppuVar20 = pppppuVar10;
                pppppuVar23 = pppppuVar14;
code_r0x00102638:
                fadvise(pppppuVar13,2);
                if ((cStack298 != '\0') || (pppppuVar20 == (ulong *****)0xffffffffffffffff))
                goto code_r0x001026ba;
                if (pppppuVar20 != (ulong *****)0x0) {
code_r0x0010265b:
                  iVar3 = func_0x00101c70(1,0,auStack216);
                  lVar8 = lStack168;
                  if ((iVar3 == 0) && ((uStack192 & 0xd000) == 0x8000)) {
                    lVar9 = func_0x00101b40(0,0,1);
                    if ((-1 < lVar9) && (lVar8 - lVar9 < 0x800001)) goto code_r0x001026ba;
                  }
                }
code_r0x00102235:
                uStack296 = (ulong *****)randint_all_new(pppppuVar21,0xffffffffffffffff);
                if (uStack296 != (ulong *****)0x0) {
                  pppppuVar14 = (ulong *****)0x400;
                  if (pppppuVar20 < (ulong *****)0x401) {
                    pppppuVar14 = pppppuVar20;
                  }
                  pppppuVar17 = (ulong *****)0x0;
                  pppppuStack280 =
                       (ulong *****)
                       ((ulong)pppppuStack280 & 0xffffffff00000000 | (ulong)(uint)(int)cStack297);
                  uStack312 = stdin;
                  pppppuVar15 = (ulong *****)xcalloc(pppppuVar14,0x18);
                  pppppuVar19 = (ulong *****)0x0;
                  pppppuStack264 = pppppuVar22;
                  goto code_r0x00102291;
                }
code_r0x00102367:
                do {
                  param_2 = (ulong *****)quotearg_n_style_colon(0,3,pppppuVar21);
                  puVar6 = (uint *)func_0x001019b0();
                  func_0x00101cf0(1,(ulong)*puVar6,&UNK_001091fa);
code_r0x00102396:
                  if (pppppuStack280 < pppppuVar20) {
                    pppppuVar20 = pppppuStack280;
                  }
                  uVar11 = randperm_bound(pppppuVar20,pppppuStack280);
                  uStack296 = (ulong *****)randint_all_new(pppppuVar21,uVar11);
                } while (uStack296 == (ulong *****)0x0);
                uStack312._0_1_ = (byte)uStack312 | (byte)uStack320;
                if ((byte)uStack312 == 0) goto code_r0x00102505;
                pppppuVar21 = (ulong *****)randperm_new(uStack296,pppppuVar20,pppppuStack280);
                pppppuVar14 = pppppuVar23;
                if (pppppuVar23 != (ulong *****)0x0) {
                  uStack312._0_1_ = 0;
                  pppppuStack272 = (ulong *****)0x0;
code_r0x001028ad:
                  uStack312 = (ulong *****)
                              ((ulong)uStack312 & 0xffffffffffffff00 | (ulong)(byte)uStack312);
                  lVar8 = freopen_safer(pppppuVar23,&UNK_00109275,stdout);
                  if (lVar8 == 0) {
                    do {
                      pppppuVar15 = (ulong *****)quotearg_n_style_colon(0,3,pppppuVar23);
                      puVar6 = (uint *)func_0x001019b0();
                      func_0x00101cf0(1,(ulong)*puVar6,&UNK_001091fa,pppppuVar15);
                      pppppuVar22 = pppppuStack264;
code_r0x0010287c:
                      pppppuStack272 = pppppuVar15;
                      if ((*(byte *)uStack312 & 0x20) != 0) goto code_r0x00102b9c;
                      uStack312._0_1_ = 1;
                      if (pppppuVar17 < pppppuVar20) {
                        pppppuVar20 = pppppuVar17;
                      }
                      param_2 = (ulong *****)0x0;
                      pppppuStack280 = pppppuVar20;
                      while( true ) {
                        uStack312 = (ulong *****)
                                    ((ulong)uStack312 & 0xffffffffffffff00 | (ulong)(byte)uStack312)
                        ;
                        iVar3 = rpl_fclose(stdin);
                        pppppuVar13 = (ulong *****)((ulong)uStack312 & 0xff);
                        if (iVar3 == 0) break;
                        pppppuVar15 = (ulong *****)func_0x00101aa0(0,&UNK_00109c9c,5);
                        puVar6 = (uint *)func_0x001019b0();
                        lVar8 = func_0x00101cf0(1,(ulong)*puVar6,pppppuVar15);
code_r0x00102b42:
                        bVar24 = true;
code_r0x00102760:
                        pppppuVar14 = pppppuVar22;
                        if ((lVar8 < 0) || (bVar24)) {
code_r0x00102a00:
                          lVar8 = xalloc_die();
                          do {
                            bVar24 = true;
                            do {
                              pppppuStack272 = pppppuVar19;
                              if ((lVar8 < 0) || (bVar24)) goto code_r0x00102a00;
                              pppppuVar15 = (ulong *****)
                                            xrealloc(pppppuVar15,(long)pppppuVar14 * 0x18);
                              func_0x00101b80((long)((long)pppppuVar15 + 0x18) + (long)pppppuVar21,0
                                              ,0x6000);
                              pppppuVar19 = pppppuStack272;
code_r0x00102291:
                              do {
                                pppppuVar22 = pppppuStack264;
                                if (pppppuVar20 == pppppuVar17) {
                                  pppppuVar17 = pppppuVar20;
                                  if (pppppuVar19 == (ulong *****)0x0) goto code_r0x0010287c;
                                  pppppuVar21 = apppppuStack248;
                                  pppppuStack272 = pppppuVar15;
                                  initbuffer(pppppuVar21);
                                  pppppuVar14 = pppppuStack280;
                                  pppppuVar13 = uStack312;
                                  pppppuStack256 = pppppuVar22;
                                  pppppuStack264 = pppppuVar23;
                                  goto code_r0x0010282b;
                                }
                                pppppuVar21 = (ulong *****)((long)pppppuVar17 * 0x18);
                                pppppuVar19 = (ulong *****)
                                              readlinebuffer_delim
                                                        (pppppuVar15 + (long)pppppuVar17 * 3,
                                                         uStack312,
                                                         (ulong)pppppuStack280 & 0xffffffff);
                                pppppuVar22 = pppppuStack264;
                                if (pppppuVar19 == (ulong *****)0x0) goto code_r0x0010287c;
                                pppppuVar17 = (ulong *****)((long)pppppuVar17 + 1);
                              } while (pppppuVar17 < pppppuVar14);
                              pppppuVar14 = pppppuVar14 + 0x80;
                              bVar24 = false;
                              lVar8 = SUB168(ZEXT816(0x18) * ZEXT816(pppppuVar14),0);
                            } while (SUB168(ZEXT816(0x18) * ZEXT816(pppppuVar14) >> 0x40,0) == 0);
                          } while( true );
                        }
                        pppppuStack272 = pppppuVar13;
                        pppppuVar15 = (ulong *****)xmalloc((long)pppppuVar15 * 8);
                        pppppuVar10 = uStack296;
                        *(ulong ******)pppppuVar15 = pppppuStack272;
                        pppppuVar14 = pppppuVar15 + (long)pppppuStack280;
                        pppppuVar13 = pppppuStack272;
                        pppppuStack272 = pppppuVar23;
                        pppppuStack264 = pppppuVar15;
                        pppppuStack256 = pppppuVar20;
                        while (param_2 = pppppuStack264, pppppuVar20 = pppppuStack256,
                              pppppuVar23 = pppppuStack272, pppppuVar14 != pppppuVar15) {
                          pppppuVar15 = pppppuVar15 + 1;
                          lVar8 = func_0x00101bc0(pppppuVar13,(ulong)pppppuVar10 & 0xffffffff,
                                                  (ulong *****)
                                                  ((long)pppppuVar17 - (long)pppppuVar13));
                          pppppuVar13 = (ulong *****)(lVar8 + 1);
                          *(ulong ******)pppppuVar15 = pppppuVar13;
                        }
code_r0x00102346:
                        if (cStack298 == '\0') goto code_r0x00102396;
                        uStack296 = (ulong *****)randint_all_new(pppppuVar21,0xffffffffffffffff);
                        if (uStack296 == (ulong *****)0x0) goto code_r0x00102367;
                        uStack312._0_1_ = (byte)uStack312 | (byte)uStack320;
                        if ((byte)uStack312 != 0) goto code_r0x00102536;
code_r0x00102505:
                        pppppuStack272 = (ulong *****)0x0;
                      }
                      if (cStack298 == '\0') goto code_r0x00102a9e;
code_r0x00102536:
                      if ((pppppuVar23 == (ulong *****)0x0) ||
                         (lVar8 = freopen_safer(pppppuVar23,&UNK_00109275,stdout), lVar8 != 0)) {
                        pppppuVar14 = uStack296;
                        pppppuVar10 = pppppuVar20;
                        if (pppppuVar20 != (ulong *****)0x0) {
                          if (pppppuStack280 == (ulong *****)0x0) goto code_r0x00102b78;
                          if ((byte)uStack320 == '\0') {
                            pppppuVar22 = (ulong *****)0x0;
                            pppppuVar21 = (ulong *****)((long)pppppuStack280 + -1);
                            do {
                              lVar8 = randint_genmax(pppppuVar14,pppppuVar21);
                              ppppuVar18 = param_2[lVar8];
                              pppppuVar17 = (ulong *****)
                                            ((long)(param_2 + lVar8)[1] - (long)ppppuVar18);
                              pppppuVar13 = (ulong *****)
                                            func_0x00101c90(ppppuVar18,1,pppppuVar17,stdout);
                              if (pppppuVar17 != pppppuVar13) goto code_r0x0010260c;
                              pppppuVar22 = (ulong *****)((long)pppppuVar22 + 1);
                              pppppuVar23 = pppppuVar14;
                            } while (pppppuVar20 != pppppuVar22);
                          }
                          else {
                            pppppuVar17 = (ulong *****)(ulong)(uint)(int)cStack297;
                            pppppuVar10 = (ulong *****)0x0;
                            pppppuVar21 = (ulong *****)((long)pppppuStack288 - (long)pppppuVar22);
                            do {
                              lVar8 = randint_genmax(uStack296,pppppuVar21);
                              iVar3 = func_0x00101cd0(1,&UNK_00109263,(long)pppppuVar22 + lVar8,
                                                      pppppuVar17);
                              pppppuVar14 = pppppuVar20;
                              if (iVar3 < 0) goto code_r0x0010260c;
                              pppppuVar10 = (ulong *****)((long)pppppuVar10 + 1);
                              pppppuVar23 = pppppuVar20;
                            } while (pppppuVar20 != pppppuVar10);
                          }
                        }
code_r0x00102436:
                        pppppuVar20 = pppppuVar10;
                        if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
                          return 0;
                        }
code_r0x001029f3:
                        func_0x00101ad0();
                        pppppuVar17 = pppppuVar20;
                        pppppuVar15 = pppppuStack272;
                        goto code_r0x0010287c;
                      }
                    } while( true );
                  }
                  goto code_r0x00102ac5;
                }
code_r0x001023ef:
                pppppuVar10 = pppppuVar20;
                if ((byte)uStack320 == '\0') {
                  pppppuVar22 = (ulong *****)0x0;
                  while( true ) {
                    pppppuVar23 = pppppuVar14;
                    if (pppppuVar22 == pppppuVar20) goto code_r0x00102436;
                    ppppuVar18 = param_2[(long)pppppuVar21[(long)pppppuVar22]];
                    pppppuVar17 = (ulong *****)
                                  ((long)(param_2 + (long)pppppuVar21[(long)pppppuVar22])[1] -
                                  (long)ppppuVar18);
                    pppppuVar13 = (ulong *****)func_0x00101c90(ppppuVar18,1,pppppuVar17,stdout);
                    if (pppppuVar17 != pppppuVar13) break;
                    pppppuVar22 = (ulong *****)((long)pppppuVar22 + 1);
                  }
                }
                else {
                  pppppuVar14 = (ulong *****)(ulong)(uint)(int)cStack297;
                  pppppuVar13 = (ulong *****)0x0;
                  pppppuVar17 = (ulong *****)&UNK_00109263;
                  while( true ) {
                    pppppuVar23 = pppppuVar14;
                    if (pppppuVar13 == pppppuVar20) goto code_r0x00102436;
                    iVar3 = func_0x00101cd0(1,&UNK_00109263,
                                            (long)pppppuVar21[(long)pppppuVar13] + (long)pppppuVar22
                                            ,pppppuVar14);
                    if (iVar3 < 0) break;
                    pppppuVar13 = (ulong *****)((long)pppppuVar13 + 1);
                  }
                }
              } while( true );
            }
          }
        }
        else {
          if (iVar2 == 0x7a) {
            cStack297 = '\0';
          }
          else {
            if (iVar2 != 0x80) goto code_r0x001029e2;
            pppppuVar13 = optarg;
            if (pppppuVar21 != (ulong *****)0x0) {
              pppppuStack280 = optarg;
              iVar2 = func_0x00101c00(pppppuVar21,optarg);
              pppppuVar13 = pppppuStack280;
              if (iVar2 != 0) goto code_r0x00102bef;
            }
          }
        }
      }
      goto code_r0x00101e88;
    }
    if (iVar2 == -0x82) goto code_r0x001029ec;
    if (iVar2 < -0x81) {
      if (iVar2 == -0x83) {
        version_etc(stdout,&UNK_00109104,&UNK_0010917f,Version,&UNK_00109214,0);
        iVar2 = func_0x00101d70();
        goto code_r0x001020e7;
      }
      goto code_r0x001029e2;
    }
    if (iVar2 == 0x65) {
      uStack312 = (ulong *****)CONCAT71(uStack312._1_7_,1);
      goto code_r0x00101e88;
    }
    if (iVar2 == 0x69) {
      puVar4 = (undefined *)func_0x00101b20(optarg,0x2d);
      if ((byte)uStack320 != '\0') goto code_r0x00102c13;
      pppppuVar22 = pppppuVar10;
      if (puVar4 == (undefined *)0x0) goto code_r0x00102126;
      *puVar4 = 0;
      uStack320 = puVar4;
      uVar11 = func_0x00101aa0(0,&UNK_001091e2,5);
      pppppuVar22 = (ulong *****)xdectoumax(optarg,0,0xffffffffffffffff,&UNK_00109d10,uVar11);
      *uStack320 = 0x2d;
      func_0x00101aa0(0,&UNK_001091e2,5);
      pppppuStack288 = (ulong *****)xdectoumax(uStack320 + 1,0,0xffffffffffffffff,&UNK_00109d10);
      if (pppppuStack288 < pppppuVar22 !=
          ((ulong *****)((long)pppppuStack288 - (long)pppppuVar22) ==
          (ulong *****)0xffffffffffffffff)) goto code_r0x00102154;
      uStack320 = (undefined *)CONCAT71(uStack320._1_7_,1);
      goto code_r0x00101e88;
    }
code_r0x001029e2:
    usage(1);
code_r0x001029ec:
    usage(0);
    goto code_r0x001029f3;
  }
code_r0x00102199:
  uVar16 = iVar3 - optind;
  pppppuVar17 = (ulong *****)(ulong)uVar16;
  param_2 = param_2 + optind;
  if ((byte)uStack312 == '\0') {
    if ((byte)uStack320 == '\0') goto code_r0x001021bc;
    if ((int)uVar16 < 1) {
      pppppuStack280 = (ulong *****)((long)pppppuStack288 + (1 - (long)pppppuVar22));
      param_2 = (ulong *****)0x0;
      goto code_r0x00102346;
    }
    lVar8 = 0;
code_r0x00102a11:
    param_2 = (ulong *****)quote(*(undefined8 *)((long)param_2 + lVar8));
    uVar11 = func_0x00101aa0(0,&UNK_0010922a,5);
    func_0x00101cf0(0,0,uVar11,param_2);
    usage(1);
  }
  else {
    if ((byte)uStack320 != '\0') {
      uVar11 = func_0x00101aa0(0,&UNK_00109738,5);
      func_0x00101cf0(0,0,uVar11);
      goto code_r0x001029e2;
    }
code_r0x001021bc:
    if ((byte)uStack312 != '\0') {
      pppppuStack280 = (ulong *****)(long)(int)uVar16;
      lVar8 = 0;
      pppppuVar19 = (ulong *****)0xffffffffffffffff;
      pppppuVar13 = pppppuStack280;
      do {
        if ((int)uVar16 <= (int)lVar8) {
          ppppuVar18 = (ulong ****)xmalloc(pppppuVar13,pppppuVar13);
          cVar1 = cStack297;
          lVar8 = 0;
          uStack296 = pppppuVar22;
          pppppuStack272 = pppppuVar21;
          pppppuStack264 = pppppuVar20;
          while ((int)lVar8 < (int)uVar16) {
            pcVar7 = (char *)func_0x00101a90(ppppuVar18,param_2[lVar8]);
            param_2[lVar8] = ppppuVar18;
            ppppuVar18 = (ulong ****)(pcVar7 + 1);
            *pcVar7 = cVar1;
            lVar8 = lVar8 + 1;
          }
          param_2[(long)pppppuStack280] = ppppuVar18;
          pppppuVar20 = pppppuStack264;
          pppppuVar21 = pppppuStack272;
          pppppuVar22 = uStack296;
          goto code_r0x00102346;
        }
        pppppuVar14 = param_2 + lVar8;
        uVar12 = 0xffffffffffffffff;
        lVar8 = lVar8 + 1;
        ppppuVar18 = *pppppuVar14;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar1 = *(char *)ppppuVar18;
          ppppuVar18 = (ulong ****)((long)ppppuVar18 + (ulong)bVar25 * -2 + 1);
        } while (cVar1 != '\0');
        pppppuVar13 = (ulong *****)((long)pppppuVar13 + (~uVar12 - 1));
      } while( true );
    }
    lVar8 = 8;
    if (1 < (int)uVar16) goto code_r0x00102a11;
    pppppuVar17 = (ulong *****)(ulong)(uVar16 - 1);
    pppppuVar13 = stdin;
    if (uVar16 - 1 != 0) goto code_r0x00102638;
    pppppuVar17 = (ulong *****)*param_2;
    uStack296 = stdin;
    iVar3 = func_0x00101c00(pppppuVar17,&UNK_001097aa);
    pppppuVar13 = uStack296;
    if (iVar3 == 0) goto code_r0x00102638;
    if (pppppuVar20 == (ulong *****)0x0) {
      fadvise(uStack296,2);
      if (cStack298 == '\0') goto code_r0x00102235;
      goto code_r0x001026ba;
    }
    lVar8 = freopen_safer(pppppuVar17,&UNK_00109ca5,uStack296);
    if (lVar8 != 0) {
      fadvise(stdin,2);
      if ((cStack298 == '\0') && (pppppuVar20 != (ulong *****)0xffffffffffffffff))
      goto code_r0x0010265b;
code_r0x001026ba:
      uStack296 = (ulong *****)CONCAT44(uStack296._4_4_,(int)cStack297);
      pppppuVar13 = (ulong *****)fread_file(stdin);
      pppppuVar14 = uStack296;
      if (pppppuVar13 != (ulong *****)0x0) {
        if ((apppppuStack248[0] != (ulong *****)0x0) &&
           (cStack297 != *(char *)((long)pppppuVar13 + -1 + (long)apppppuStack248[0]))) {
          *(char *)((long)pppppuVar13 + (long)apppppuStack248[0]) = cStack297;
          apppppuStack248[0] = (ulong *****)((long)apppppuStack248[0] + 1);
        }
        pppppuVar17 = (ulong *****)((long)apppppuStack248[0] + (long)pppppuVar13);
        pppppuVar10 = (ulong *****)0x0;
        pppppuStack272 = pppppuVar13;
        pppppuStack264 = pppppuVar20;
        while (pppppuVar15 = (ulong *****)((long)pppppuVar10 + 1), pppppuVar13 < pppppuVar17) {
          lVar8 = func_0x00101bc0(pppppuVar13,(ulong)pppppuVar14 & 0xffffffff,
                                  (ulong *****)((long)pppppuVar17 - (long)pppppuVar13));
          pppppuVar13 = (ulong *****)(lVar8 + 1);
          pppppuVar10 = pppppuVar15;
        }
        bVar24 = false;
        lVar8 = SUB168(ZEXT816(8) * ZEXT816(pppppuVar15),0);
        pppppuVar13 = pppppuStack272;
        pppppuVar20 = pppppuStack264;
        pppppuStack280 = pppppuVar10;
        if (SUB168(ZEXT816(8) * ZEXT816(pppppuVar15) >> 0x40,0) != 0) goto code_r0x00102b42;
        goto code_r0x00102760;
      }
      uVar11 = func_0x00101aa0(0,&UNK_00109c9c,5);
      puVar6 = (uint *)func_0x001019b0();
      func_0x00101cf0(1,(ulong)*puVar6,uVar11);
code_r0x00102b78:
      uVar11 = func_0x00101aa0(0,&UNK_00109250,5);
      func_0x00101cf0(1,0,uVar11);
code_r0x00102b9c:
      uVar11 = func_0x00101aa0(0,&UNK_00109c9c,5);
      puVar6 = (uint *)func_0x001019b0();
      func_0x00101cf0(1,(ulong)*puVar6,uVar11);
code_r0x00102bc8:
      uVar11 = func_0x00101aa0(0,&UNK_0010923b,5);
      func_0x00101cf0(1,0x4b,uVar11);
code_r0x00102bef:
      uVar11 = func_0x00101aa0(0,&UNK_00109710,5);
      func_0x00101cf0(1,0,uVar11);
code_r0x00102c13:
      uVar11 = func_0x00101aa0(0,&UNK_001091c4,5);
      auVar26 = func_0x00101cf0(1,0,uVar11);
      uVar11 = uStack328;
      uStack328 = SUB168(auVar26,0);
      (*(code *)PTR___libc_start_main_0030cfd0)
                (main,uVar11,&uStack320,__libc_csu_init,__libc_csu_fini,SUB168(auVar26 >> 0x40,0),
                 &uStack328);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  param_2 = (ulong *****)quotearg_n_style_colon(0,3,*param_2);
  uStack312._0_1_ = (byte)param_2;
  puVar6 = (uint *)func_0x001019b0();
  func_0x00101cf0(1,(ulong)*puVar6,&UNK_001091fa);
  goto code_r0x00102a7a;
  while (bVar24 = pppppuVar17 != (ulong *****)0x0,
        pppppuVar17 = (ulong *****)((long)pppppuVar17 + 1), bVar24) {
code_r0x0010282b:
    pppppuVar10 = (ulong *****)randint_genmax(uStack296,pppppuVar17);
    pppppuVar22 = pppppuVar21;
    if (pppppuVar10 < pppppuVar20) {
      pppppuVar22 = pppppuStack272 + (long)pppppuVar10 * 3;
    }
    lVar8 = readlinebuffer_delim(pppppuVar22,pppppuVar13,(ulong)pppppuVar14 & 0xffffffff);
    pppppuVar22 = pppppuStack256;
    pppppuVar23 = pppppuStack264;
    if (lVar8 == 0) {
      if (pppppuVar17 != (ulong *****)0x0) goto code_r0x00102874;
      goto code_r0x00102bc8;
    }
  }
  pppppuVar17 = (ulong *****)0x1;
code_r0x00102874:
  freebuffer();
  pppppuVar15 = pppppuStack272;
  goto code_r0x0010287c;
}