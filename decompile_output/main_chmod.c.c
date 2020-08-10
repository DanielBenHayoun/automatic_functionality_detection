
ulong main(uint param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  uint *puVar16;
  byte bVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  uint *apuStack320 [3];
  undefined auStack296 [24];
  uint **ppuStack272;
  uint *apuStack264 [25];
  undefined8 uStack64;
  
  lVar5 = 0;
  uVar13 = SEXT48((int)param_1);
  puVar16 = (uint *)0x0;
  lVar7 = 0;
  uStack64 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  apuStack264[3] = 0;
  set_program_name(*param_2);
  func_0x001019a0(6,&UNK_0010abc1);
  func_0x00101780(&UNK_00109c84,&UNK_00109cad);
  func_0x00101760(&UNK_00109c84);
  atexit(close_stdout);
  diagnose_surprises = 0;
  force_silent = 0;
  recurse = 0;
  ppuStack272 = apuStack264 + 3;
  puVar12 = (uint *)auStack296;
  uVar18 = 0;
code_r0x00101b48:
  *(undefined8 *)(puVar12 + -2) = 0x101b63;
  iVar2 = func_0x001017f0((ulong)param_1,param_2,&UNK_0010a250,long_options,0);
  if (iVar2 == -1) {
    if (uVar18 == 0) {
      lVar4 = (long)optind;
      if (lVar7 == 0) {
        optind = optind + 1;
        lVar7 = param_2[lVar4];
        if (optind < (int)param_1) goto code_r0x00102105;
        if (lVar7 == 0) goto code_r0x00102688;
      }
      else {
        if (optind < (int)param_1) {
code_r0x00102105:
          *(undefined8 *)(puVar12 + -2) = 0x10210d;
          change = mode_compile(lVar7);
          if (change == 0) goto code_r0x0010274f;
          *(undefined8 *)(puVar12 + -2) = 0x102124;
          umask_value = func_0x001018d0(0);
code_r0x00101d95:
          bVar17 = (byte)lVar5 & recurse;
          *(undefined8 *)(puVar12 + -2) = 0x101da1;
          uVar6 = func_0x00101700();
          *(undefined8 *)(puVar12 + 8) = uVar6;
          if (bVar17 == 0) {
            root_dev_ino = (long *)0x0;
          }
          else {
            *(undefined8 *)(puVar12 + -2) = 0x1025ed;
            root_dev_ino = (long *)get_root_dev_ino(dev_ino_buf_7087);
            if (root_dev_ino == (long *)0x0) {
              *(undefined8 *)(puVar12 + -2) = 0x10260e;
              param_2 = (undefined8 *)quotearg_style(4,&UNK_0010a686);
              *(undefined8 *)(puVar12 + -2) = 0x102624;
              uVar6 = func_0x00101790(0,&UNK_0010a2c8,5);
              uVar10 = **(uint **)(puVar12 + 8);
              *(undefined8 *)(puVar12 + -2) = 0x10263d;
              func_0x001019d0(1,(ulong)uVar10,uVar6,param_2);
              *(undefined8 *)((ulong)bVar17 + 0x20) = 1;
              uVar18 = 1;
              *(undefined8 *)(puVar12 + -2) = 0x10265b;
              rpl_fts_set(uVar13,(ulong)bVar17,1);
              goto code_r0x00101e48;
            }
          }
          puVar16 = (uint *)&UNK_0010a574;
          puVar1 = param_2 + optind;
          param_2 = (undefined8 *)0x1;
          uVar10 = 1;
          *(undefined8 *)(puVar12 + -2) = 0x101ddd;
          uVar13 = xfts_open(puVar1,0x411,0);
          *(uint **)(puVar12 + 2) = puVar12 + 0x34;
          *(uint **)(puVar12 + 4) = puVar12 + 0x37;
          *(undefined **)(puVar12 + 6) = (undefined *)((long)puVar12 + 0xdd);
          *(undefined8 *)(puVar12 + -2) = 0x101e0f;
          lVar5 = rpl_fts_read();
          goto joined_r0x00101e15;
        }
      }
      if (param_2[(long)optind + -1] == lVar7) goto code_r0x00102788;
code_r0x00102688:
      puVar14 = &UNK_00109ce2;
    }
    else {
      if (lVar7 == 0) {
        uVar13 = (ulong)param_1;
        if (optind < (int)param_1) {
          *(undefined8 *)(puVar12 + -2) = 0x101d7a;
          uVar13 = mode_create_from_ref(uVar18);
          *(undefined8 *)(puVar12 + -2) = 0x101d89;
          change = uVar13;
          puVar16 = (uint *)func_0x00101700();
          if (uVar13 == 0) goto code_r0x00102716;
          goto code_r0x00101d95;
        }
        goto code_r0x00102688;
      }
      puVar14 = &UNK_0010a298;
    }
    *(undefined8 *)(puVar12 + -2) = 0x10269b;
    uVar6 = func_0x00101790(0,puVar14,5);
    *(undefined8 *)(puVar12 + -2) = 0x1026a9;
    func_0x001019d0(0,0,uVar6);
    goto code_r0x001026a9;
  }
  if (iVar2 == 99) {
    verbosity = 1;
    goto code_r0x00101b48;
  }
  if (iVar2 < 100) {
    if (iVar2 < 0x38) {
      if (iVar2 < 0x30) {
        if (iVar2 == -0x82) {
          *(undefined8 *)(puVar12 + -2) = 0x102711;
          usage(0);
          goto code_r0x00102711;
        }
        if (iVar2 < -0x81) {
          if (iVar2 == -0x83) {
            puVar11 = puVar12 + -4;
            *(undefined8 *)(puVar12 + -4) = 0;
            *(undefined8 *)(puVar12 + -6) = 0x101c25;
            version_etc(stdout,&UNK_00109c04,&UNK_00109c80,Version,&UNK_00109cd2,&UNK_00109cc5);
            *(undefined8 *)(puVar12 + -6) = 0x101c2c;
            iVar2 = func_0x00101a30();
            goto code_r0x00101c30;
          }
          goto code_r0x001026a9;
        }
        if (1 < iVar2 - 0x2bU) goto code_r0x001026a9;
      }
    }
    else {
      if (iVar2 == 0x52) {
        recurse = 1;
        goto code_r0x00101b48;
      }
      if (iVar2 < 0x53) {
        if (iVar2 != 0x3d) goto code_r0x001026a9;
      }
      else {
        if ((iVar2 != 0x58) && (iVar2 != 0x61)) goto code_r0x001026a9;
      }
    }
  }
  else {
    if (iVar2 == 0x76) {
      verbosity = 0;
      goto code_r0x00101b48;
    }
    puVar11 = puVar12;
    if (0x76 < iVar2) {
      if (iVar2 == 0x80) {
        lVar5 = 0;
      }
      else {
        if (iVar2 < 0x81) {
          if (iVar2 < 0x79) goto code_r0x00101c78;
          goto code_r0x001026a9;
        }
        if (iVar2 == 0x81) {
          lVar5 = 1;
        }
        else {
          uVar18 = optarg;
          if (iVar2 != 0x82) {
code_r0x001026a9:
            do {
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x1026b3;
              usage(1);
code_r0x001026b3:
              *(undefined8 *)(puVar12 + -2) = 0x1026c9;
              uVar6 = quotearg_n_style(1,4,&UNK_0010a686);
              *(undefined8 *)(puVar12 + -2) = 0x1026db;
              lVar7 = quotearg_n_style(0,4,lVar7);
              *(undefined8 *)(puVar12 + -2) = 0x1026f1;
              uVar8 = func_0x00101790(0,&UNK_0010a400,5);
              *(undefined8 *)(puVar12 + -2) = 0x102705;
              func_0x001019d0(0,0,uVar8,lVar7,uVar6);
code_r0x001024e3:
              uVar18 = 0;
              *(undefined8 *)(puVar12 + -2) = 0x1024f9;
              uVar6 = func_0x00101790(0,&UNK_0010a440,5);
              *(undefined8 *)(puVar12 + -2) = 0x102507;
              func_0x001019d0(0,0,uVar6);
              *(undefined8 *)(puVar12 + -2) = 0x102517;
              rpl_fts_set(uVar13,lVar5,4);
              *(undefined8 *)(puVar12 + -2) = 0x10251f;
              rpl_fts_read(uVar13);
code_r0x00101e48:
              uVar10 = (uint)param_2 & (uint)uVar18;
              param_2 = (undefined8 *)(ulong)uVar10;
              *(undefined8 *)(puVar12 + -2) = 0x101e53;
              lVar5 = rpl_fts_read();
joined_r0x00101e15:
              if (lVar5 != 0) {
                lVar7 = *(long *)(lVar5 + 0x38);
                if (*(ushort *)(lVar5 + 0x70) < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x00101e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar6 = (*(code *)((long)(int)puVar16[*(ushort *)(lVar5 + 0x70)] + (long)puVar16))
                                    ();
                  return uVar6;
                }
                if (((root_dev_ino == (long *)0x0) || (*(long *)(lVar5 + 0x80) != *root_dev_ino)) ||
                   (*(long *)(lVar5 + 0x78) != root_dev_ino[1])) {
                  uVar10 = *(uint *)(lVar5 + 0x90);
                  *(undefined8 *)(puVar12 + 10) = *(undefined8 *)(lVar5 + 0x30);
                  puVar12[1] = uVar10;
                  *(undefined8 *)(puVar12 + -2) = 0x10206b;
                  uVar3 = mode_adjust((ulong)uVar10,(ulong)((uVar10 & 0xf000) == 0x4000),
                                      (ulong)umask_value,change,0);
                  *puVar12 = uVar3;
                  if ((uVar10 & 0xf000) == 0xa000) {
                    if ((verbosity != 2) && (verbosity == 0)) {
                      uVar18 = 1;
                      *(undefined8 *)(puVar12 + -2) = 0x1021e4;
                      lVar7 = quotearg_style(4,lVar7);
                      *(undefined8 *)(puVar12 + -2) = 0x1021fa;
                      uVar6 = func_0x00101790(0,&UNK_0010a4d8,5);
                      *(undefined8 *)(puVar12 + -2) = 0x10220c;
                      func_0x001019b0(1,uVar6,lVar7);
                      goto code_r0x00101f09;
                    }
code_r0x00102211:
                    uVar18 = 1;
                  }
                  else {
                    *(undefined8 *)(puVar12 + -2) = 0x10208c;
                    iVar2 = func_0x00101940();
                    if (iVar2 == 0) {
                      if (verbosity != 2) {
                        uVar10 = *puVar12;
                        if ((uVar10 & 0xe00) == 0) {
code_r0x00102237:
                          if (((uVar10 ^ puVar12[1]) & 0xfff) != 0) {
                            *(undefined8 *)(puVar12 + -2) = 0x102253;
                            strmode((ulong)*puVar12,*(undefined8 *)(puVar12 + 2));
                            *(undefined *)((long)puVar12 + 0xda) = 0;
                            *(undefined8 *)(puVar12 + -2) = 0x102269;
                            strmode((ulong)puVar12[1],*(undefined8 *)(puVar12 + 4));
                            *(undefined *)((long)puVar12 + 0xe6) = 0;
                            *(undefined8 *)(puVar12 + -2) = 0x102284;
                            uVar6 = func_0x00101790(0,&UNK_0010a4a0,5);
                            *(undefined8 *)(puVar12 + -2) = 0x102294;
                            uVar8 = quotearg_style(4,lVar7);
                            *(long *)(puVar12 + -4) = *(long *)(puVar12 + 2) + 1;
                            *(undefined8 *)(puVar12 + -6) = 0x1022cf;
                            func_0x001019b0(1,uVar6,uVar8,(ulong)(puVar12[1] & 0xfff),
                                            *(undefined8 *)(puVar12 + 6),(ulong)(*puVar12 & 0xfff));
                            goto code_r0x001022d1;
                          }
                        }
                        else {
                          uVar10 = *(uint *)(uVar13 + 0x2c);
                          *(undefined8 *)(puVar12 + -2) = 0x1023ab;
                          iVar2 = func_0x00101810(1,(ulong)uVar10,*(undefined8 *)(puVar12 + 10),
                                                  puVar12 + 0x10);
                          if (iVar2 == 0) {
                            uVar10 = puVar12[0x16];
                            goto code_r0x00102237;
                          }
                          if (force_silent == 0) {
                            *(undefined8 *)(puVar12 + -2) = 0x1023c9;
                            uVar6 = quotearg_style(4,lVar7);
                            *(undefined8 *)(puVar12 + -2) = 0x1023df;
                            uVar8 = func_0x00101790(0,&UNK_00109d71,5);
                            uVar10 = **(uint **)(puVar12 + 8);
                            *(undefined8 *)(puVar12 + -2) = 0x1023f5;
                            func_0x001019d0(0,(ulong)uVar10,uVar8,uVar6);
                          }
                        }
                        if (verbosity == 0) {
                          *(undefined8 *)(puVar12 + -2) = 0x10240f;
                          strmode((ulong)*puVar12,*(undefined8 *)(puVar12 + 2));
                          *(undefined *)((long)puVar12 + 0xda) = 0;
                          *(undefined8 *)(puVar12 + -2) = 0x102425;
                          strmode((ulong)puVar12[1],*(undefined8 *)(puVar12 + 4));
                          *(undefined *)((long)puVar12 + 0xe6) = 0;
                          *(undefined8 *)(puVar12 + -2) = 0x102440;
                          uVar6 = func_0x00101790(0,&UNK_0010a550,5);
                          *(undefined8 *)(puVar12 + -2) = 0x102450;
                          uVar8 = quotearg_style(4,lVar7);
                          *(undefined8 *)(puVar12 + -2) = 0x102474;
                          func_0x001019b0(1,uVar6,uVar8,(ulong)(*puVar12 & 0xfff));
                        }
                      }
code_r0x001022d1:
                      uVar18 = (ulong)diagnose_surprises;
                      if (diagnose_surprises == 0) goto code_r0x00102211;
                      *(undefined8 *)(puVar12 + -2) = 0x102309;
                      uVar10 = mode_adjust((ulong)puVar12[1],
                                           (ulong)((puVar12[1] & 0xf000) == 0x4000),0,change,0);
                      if ((*puVar12 & ~uVar10) != 0) {
                        puVar12[10] = uVar10;
                        *(undefined8 *)(puVar12 + -2) = 0x10232a;
                        strmode((ulong)*puVar12,*(undefined8 *)(puVar12 + 2));
                        *(undefined8 *)(puVar12 + -2) = 0x10233a;
                        strmode((ulong)puVar12[10],*(undefined8 *)(puVar12 + 4));
                        *(undefined *)((long)puVar12 + 0xe6) = 0;
                        *(undefined *)((long)puVar12 + 0xda) = 0;
                        *(undefined8 *)(puVar12 + -2) = 0x102359;
                        lVar7 = quotearg_n_style_colon(0,3,lVar7);
                        *(undefined8 *)(puVar12 + -2) = 0x10236f;
                        uVar6 = func_0x00101790(0,&UNK_0010a478,5);
                        uVar18 = 0;
                        *(undefined8 *)(puVar12 + -2) = 0x10238c;
                        func_0x001019d0(0,0,uVar6,lVar7);
                      }
                    }
                    else {
                      if (force_silent == 0) {
                        *(undefined8 *)(puVar12 + -2) = 0x1020ae;
                        uVar6 = quotearg_style(4,lVar7);
                        *(undefined8 *)(puVar12 + -2) = 0x1020c4;
                        uVar8 = func_0x00101790(0,&UNK_00109d56,5);
                        uVar10 = **(uint **)(puVar12 + 8);
                        *(undefined8 *)(puVar12 + -2) = 0x1020da;
                        func_0x001019d0(0,(ulong)uVar10,uVar8,uVar6);
                      }
                      if ((verbosity == 2) || (verbosity != 0)) {
                        uVar18 = 0;
                      }
                      else {
                        *(undefined8 *)(puVar12 + -2) = 0x10213c;
                        strmode((ulong)*puVar12,*(undefined8 *)(puVar12 + 2));
                        *(undefined *)((long)puVar12 + 0xda) = 0;
                        *(undefined8 *)(puVar12 + -2) = 0x102152;
                        strmode((ulong)puVar12[1],*(undefined8 *)(puVar12 + 4));
                        *(undefined *)((long)puVar12 + 0xe6) = 0;
                        *(undefined8 *)(puVar12 + -2) = 0x10216d;
                        uVar6 = func_0x00101790(0,&UNK_0010a510,5);
                        *(undefined8 *)(puVar12 + -2) = 0x10217d;
                        uVar8 = quotearg_style(4,lVar7);
                        uVar18 = 0;
                        *(long *)(puVar12 + -4) = *(long *)(puVar12 + 2) + 1;
                        *(undefined8 *)(puVar12 + -6) = 0x1021bb;
                        func_0x001019b0(1,uVar6,uVar8,(ulong)(puVar12[1] & 0xfff),
                                        *(undefined8 *)(puVar12 + 6),(ulong)(*puVar12 & 0xfff));
                      }
                    }
                  }
code_r0x00101f09:
                  if (recurse == 0) {
                    *(undefined8 *)(puVar12 + -2) = 0x101f26;
                    rpl_fts_set(uVar13,lVar5,4);
                  }
                  goto code_r0x00101e48;
                }
                *(undefined8 *)(puVar12 + -2) = 0x1024a7;
                iVar2 = func_0x001018b0(lVar7,&UNK_0010a686);
                if (iVar2 != 0) goto code_r0x001026b3;
                *(undefined8 *)(puVar12 + -2) = 0x1024bc;
                lVar7 = quotearg_style(4,lVar7);
                *(undefined8 *)(puVar12 + -2) = 0x1024d2;
                uVar6 = func_0x00101790(0,&UNK_0010a3d0,5);
                *(undefined8 *)(puVar12 + -2) = 0x1024e3;
                func_0x001019d0(0,0,uVar6,lVar7);
                goto code_r0x001024e3;
              }
              if (**(int **)(puVar12 + 8) != 0) {
                uVar10 = (uint)force_silent;
                if (force_silent == 0) {
                  *(undefined8 *)(puVar12 + -2) = 0x1025c9;
                  uVar6 = func_0x00101790(0,&UNK_00109d1c,5);
                  uVar3 = **(uint **)(puVar12 + 8);
                  *(undefined8 *)(puVar12 + -2) = 0x1025dc;
                  func_0x001019d0(0,(ulong)uVar3,uVar6);
                }
                else {
                  uVar10 = 0;
                }
              }
              *(undefined8 *)(puVar12 + -2) = 0x101e7e;
              iVar2 = rpl_fts_close(uVar13);
              if (iVar2 != 0) {
                uVar10 = 0;
                *(undefined8 *)(puVar12 + -2) = 0x101e97;
                uVar6 = func_0x00101790(0,&UNK_00109d8e,5);
                uVar3 = **(uint **)(puVar12 + 8);
                *(undefined8 *)(puVar12 + -2) = 0x101eaa;
                func_0x001019d0(0,(ulong)uVar3,uVar6);
              }
              if (*(long *)(puVar12 + 0x3a) == *(long *)(in_FS_OFFSET + 0x28)) {
                return (ulong)(uVar10 ^ 1);
              }
code_r0x00102711:
              *(undefined8 *)(puVar12 + -2) = 0x102716;
              func_0x001017e0();
code_r0x00102716:
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x102723;
              uVar6 = quotearg_style(4,uVar18);
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x102739;
              uVar8 = func_0x00101790(0,&UNK_0010a2c8,5);
              uVar10 = *puVar16;
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x10274f;
              func_0x001019d0(1,(ulong)uVar10,uVar8,uVar6);
code_r0x0010274f:
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x102757;
              param_2 = (undefined8 *)quote(lVar7);
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x10276d;
              uVar6 = func_0x00101790(0,&UNK_00109d0b,5);
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x10277e;
              func_0x001019d0(0,0,uVar6,param_2);
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x102788;
              usage(1);
code_r0x00102788:
              uVar6 = param_2[uVar13 - 1];
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x102792;
              param_2 = (undefined8 *)quote(uVar6);
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x1027a8;
              uVar6 = func_0x00101790(0,&UNK_00109cf2,5);
              *(undefined8 *)((undefined *)puVar12 + -8) = 0x1027b9;
              func_0x001019d0(0,0,uVar6,param_2);
            } while( true );
          }
        }
      }
      goto code_r0x00101b48;
    }
code_r0x00101c30:
    puVar12 = puVar11;
    if (iVar2 != 0x6f) {
      if (iVar2 < 0x70) {
        if (iVar2 != 0x66) {
          if (iVar2 == 0x67) goto code_r0x00101c78;
          goto code_r0x001026a9;
        }
        force_silent = 1;
        goto code_r0x00101b48;
      }
      if (iVar2 < 0x72) goto code_r0x001026a9;
    }
  }
code_r0x00101c78:
  uVar6 = param_2[(long)optind + -1];
  *(undefined8 *)((undefined *)puVar12 + 8) = uVar6;
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101c91;
  lVar4 = func_0x001017b0(uVar6);
  lVar9 = (ulong)(puVar16 != (uint *)0x0) + (long)puVar16;
  uVar15 = lVar4 + lVar9;
  if (*(ulong *)((undefined *)puVar12 + 0x38) < uVar15 ||
      *(ulong *)((undefined *)puVar12 + 0x38) == uVar15) {
    *(long *)((undefined *)puVar12 + 0x28) = lVar4;
    *(long *)((undefined *)puVar12 + 0x20) = lVar9;
    *(ulong *)((undefined *)puVar12 + 0x10) = uVar15;
    *(ulong *)((undefined *)puVar12 + 0x38) = uVar15 + 1;
    *(undefined8 *)((undefined *)puVar12 + -8) = 0x101d3d;
    lVar7 = x2realloc(lVar7,*(undefined8 *)((undefined *)puVar12 + 0x18),lVar4);
    lVar4 = *(long *)((undefined *)puVar12 + 0x28);
    lVar9 = *(long *)((undefined *)puVar12 + 0x20);
    uVar15 = *(ulong *)((undefined *)puVar12 + 0x10);
  }
  uVar6 = *(undefined8 *)((undefined *)puVar12 + 8);
  *(undefined *)(lVar7 + (long)puVar16) = 0x2c;
  *(ulong *)((undefined *)puVar12 + 0x10) = uVar15;
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101cc8;
  func_0x001018e0(lVar7 + lVar9,uVar6,lVar4 + 1);
  puVar16 = *(uint **)((undefined *)puVar12 + 0x10);
  diagnose_surprises = 1;
  goto code_r0x00101b48;
}

