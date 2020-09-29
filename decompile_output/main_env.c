
undefined8 env(undefined4 param_1,long **param_2)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  long **pplVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  byte extraout_DL;
  int iVar14;
  long *plVar15;
  int iVar16;
  long **unaff_RBX;
  undefined8 *puVar17;
  ulong uVar18;
  byte bVar19;
  uint uVar20;
  undefined1 *unaff_RBP;
  long **pplVar21;
  long **pplVar22;
  undefined *puVar23;
  char *pcVar24;
  byte bVar25;
  undefined uVar26;
  undefined *in_R9;
  long **in_R10;
  byte bVar27;
  undefined uVar28;
  long **in_R11;
  uint uVar29;
  long **unaff_R12;
  long **unaff_R13;
  long **unaff_R14;
  long in_FS_OFFSET;
  bool bVar30;
  byte bVar31;
  undefined auVar32 [16];
  undefined auStack328 [8];
  undefined8 uStack320;
  undefined uStack312;
  undefined uStack304;
  undefined4 uStack256;
  undefined8 uStack64;
  
  bVar31 = 0;
  puVar17 = (undefined8 *)auStack328;
  uStack64 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack256 = param_1;
  set_program_name(*param_2);
  func_0x00101b20(6,&UNK_00106c9f);
  func_0x00101940(&UNK_00106bfd,&UNK_00106c5c);
  func_0x00101920(&UNK_00106bfd);
  exit_failure = 0x7d;
  atexit(close_stdout);
  puVar5 = (undefined4 *)xmalloc(0x104);
  puVar1 = puVar5 + 0x41;
  signals = puVar5;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  } while (puVar1 != puVar5);
  uStack320 = 0;
  uStack312 = 0;
  uStack304 = 0;
code_r0x00101d30:
  do {
    puVar11 = longopts;
    pplVar7 = (long **)0x0;
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x101d4d;
    uVar4 = func_0x001019b0((ulong)*(uint *)((undefined *)puVar17 + 0x48),param_2,shortopts);
    uVar29 = optind;
    cVar2 = (char)pplVar7;
    if (uVar4 == 0xffffffff) {
      unaff_R13 = (long **)(ulong)optind;
      if ((int)optind < *(int *)((undefined *)puVar17 + 0x48)) {
        plVar15 = param_2[(int)optind];
        *(undefined8 *)((undefined *)puVar17 + -8) = 0x1026c2;
        iVar14 = func_0x00101a70(plVar15,&UNK_0010776a);
        if (iVar14 != 0) goto code_r0x0010258f;
        optind = uVar29 + 1;
code_r0x0010259a:
        if (dev_debug != '\0') {
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x1025c0;
          puVar11 = (undefined1 *)stderr;
          func_0x00101be0(&UNK_00106d2b,1,0x11);
        }
        unaff_R13 = (long **)(ulong)optind;
        environ = (long **)&dummy_environ_7817;
      }
      else {
code_r0x0010258f:
        if (((undefined *)puVar17)[0x18] != '\0') goto code_r0x0010259a;
        if (usvars_used != (long **)0x0) {
          unaff_R12 = (long **)0x0;
          unaff_RBP = &UNK_00106d3d;
          unaff_R13 = usvars;
code_r0x00102a07:
          if (dev_debug != '\0') {
            puVar11 = (undefined1 *)unaff_R13[(long)unaff_R12];
            *(undefined8 *)((undefined *)puVar17 + -8) = 0x102a33;
            func_0x00101bf0(stderr,1,&UNK_00106d3d);
          }
          unaff_R13 = usvars;
          unaff_RBX = usvars + (long)unaff_R12;
          plVar15 = *unaff_RBX;
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x1029f2;
          iVar14 = func_0x00101b80(plVar15);
          if (iVar14 == 0) break;
          plVar15 = *unaff_RBX;
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102ee5;
          unaff_RBP = (undefined1 *)quote(plVar15);
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102efb;
          uVar8 = func_0x00101960(0,&UNK_00106d4b,5);
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102f03;
          puVar9 = (uint *)func_0x001018c0();
          uVar29 = *puVar9;
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102f17;
          func_0x00101b40(0x7d,(ulong)uVar29,uVar8,unaff_RBP);
code_r0x00102f17:
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102f2a;
          uVar8 = func_0x00101960(0,&UNK_001074c8,5);
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102f3b;
          func_0x00101b40(0x7d,0,uVar8);
          goto code_r0x00102f3b;
        }
      }
      goto code_r0x001025d5;
    }
    if (uVar4 == 0x53) goto code_r0x00101e00;
    if ((int)uVar4 < 0x54) {
      if (uVar4 == 9) {
code_r0x00102e3a:
        unaff_RBX = (long **)(ulong)uVar4;
      }
      else {
        if ((int)uVar4 < 10) {
          if (uVar4 != 0xffffff7d) {
            if (uVar4 != 0xffffff7e) goto code_r0x00101d85;
            *(undefined8 *)((undefined *)puVar17 + -8) = 0x102e3a;
            uVar4 = usage(0);
            goto code_r0x00102e3a;
          }
          *(undefined8 *)((undefined *)puVar17 + -8) = 0;
          in_R9 = &UNK_00106cfd;
          plVar15 = (long *)&UNK_00106d0d;
          puVar23 = (undefined *)puVar17 + -0x10;
          *(undefined8 *)((undefined *)puVar17 + -0x10) = 0x106d1e;
          *(undefined8 *)((undefined *)puVar17 + -0x18) = 0x102046;
          version_etc(stdout,&UNK_00106b7f,&UNK_00106bf9);
          *(undefined8 *)((undefined *)puVar17 + -0x18) = 0x10204d;
          auVar32 = func_0x00101bd0(0);
          pplVar7 = unaff_RBX;
          pplVar22 = unaff_R12;
code_r0x00102050:
          uVar4 = (uint)unaff_RBP;
          uVar29 = SUB164(auVar32,0);
          param_2 = (long **)(ulong)(((int)param_2 + 1) - (uint)((char)pplVar22 == '\0'));
          cVar2 = SUB161(auVar32 >> 0x40,0);
          puVar17 = (undefined8 *)puVar23;
          if (cVar2 == '$') {
            unaff_R12 = (long **)0x0;
            goto code_r0x001022ab;
          }
          if ('$' < cVar2) {
            unaff_R12 = (long **)0x0;
            if (cVar2 == '\'') goto code_r0x00102288;
            if (cVar2 == '\\') goto code_r0x00101ecc;
code_r0x00102078:
            uVar13 = SUB168(auVar32,0) & 0xffffffff;
            unaff_R12 = (long **)0x0;
            goto code_r0x0010207d;
          }
          if (cVar2 != '\"') goto code_r0x00102078;
          bVar19 = (byte)unaff_R14 & (byte)unaff_RBP;
          unaff_R12 = (long **)((ulong)unaff_R14 & 0xffffff00 | (ulong)bVar19);
          if (bVar19 != 0) goto code_r0x00102f3b;
code_r0x001020a9:
          uVar13 = (ulong)uVar29;
          unaff_R13 = (long **)((long)unaff_R13 + 1);
          unaff_RBP = (undefined1 *)(ulong)((uVar4 | (uint)unaff_R14) ^ 1);
          if ((char)uVar29 != '\0') {
code_r0x00102085:
            plVar15 = *pplVar7;
            while( true ) {
              puVar23 = (undefined *)puVar17;
              uVar12 = (long)(char)uVar13;
              pplVar22 = unaff_R12;
code_r0x00101e88:
              uVar4 = (uint)unaff_RBP;
              bVar19 = *(byte *)((long)unaff_R13 + 1);
              uVar29 = (uint)bVar19;
              auVar32 = CONCAT88(uVar13,(ulong)bVar19);
              if (((*(byte *)((long)plVar15 + uVar12 * 2 + 1) & 0x20) == 0) ||
                 (auVar32 = CONCAT88(uVar13,(ulong)bVar19),
                 (byte)((byte)unaff_R14 | (byte)unaff_RBP) != 0)) goto code_r0x00102050;
              cVar2 = (char)uVar13;
              unaff_R12 = (long **)0x1;
              puVar17 = (undefined8 *)puVar23;
              if (cVar2 != '$') {
                if (cVar2 < '%') {
                  if (cVar2 == '\"') goto code_r0x001020a9;
                }
                else {
                  if (cVar2 == '\'') goto code_r0x00102288;
                  if (cVar2 == '\\') goto code_r0x00101ecc;
                }
                uVar13 = (ulong)bVar19;
                unaff_R14 = (long **)0x0;
                unaff_RBP = (undefined1 *)0x0;
                unaff_R12 = (long **)0x1;
                goto code_r0x0010207d;
              }
code_r0x001022ab:
              if ((char)unaff_R14 == '\0') break;
              unaff_R13 = (long **)((long)unaff_R13 + 1);
              if ((char)uVar29 == '\0') goto code_r0x00102f79;
              uVar13 = (ulong)uVar29;
            }
            *(undefined8 *)((undefined *)puVar17 + -8) = 0x102328;
            lVar6 = extract_varname(unaff_R13);
            if (lVar6 != 0) {
              *(undefined8 *)((undefined *)puVar17 + -8) = 0x102339;
              pcVar24 = (char *)func_0x00101880(lVar6);
              if (pcVar24 != (char *)0x0) {
                uVar13 = *(ulong *)((undefined *)puVar17 + 0x28);
                do {
                  if (uVar13 == 0) break;
                  uVar13 = uVar13 - 1;
                  cVar2 = *pcVar24;
                  pcVar24 = pcVar24 + (ulong)bVar31 * -2 + 1;
                } while (cVar2 != '\0');
                *(ulong *)((undefined *)puVar17 + 0x20) =
                     *(long *)((undefined *)puVar17 + 0x20) + -1 + ~uVar13;
              }
              uVar13 = (ulong)*(byte *)((long)unaff_R13 + 1);
              goto code_r0x0010207d;
            }
            *(undefined8 *)((undefined *)puVar17 + -8) = 0x102e83;
            uVar8 = func_0x00101960(0,&UNK_001074f8,5);
            *(undefined8 *)((undefined *)puVar17 + -8) = 0x102e97;
            uVar4 = func_0x00101b40(0x7d,0,uVar8,unaff_R13);
            goto code_r0x00102e97;
          }
code_r0x001020b9:
          bVar19 = (byte)unaff_RBP | (byte)unaff_R14;
          unaff_RBP = (undefined1 *)((ulong)unaff_RBP & 0xffffffffffffff00 | (ulong)bVar19);
          unaff_RBX = *(long ***)((undefined *)puVar17 + 0x38);
          param_2 = *(long ***)((undefined *)puVar17 + 0x40);
          unaff_R12 = unaff_RBX;
          if (bVar19 != 0) goto code_r0x00102f79;
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x1020dd;
          plVar15 = (long *)xmalloc();
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x1020f7;
          in_R10 = (long **)xmalloc();
          unaff_R13 = in_R10 + 1;
          *(undefined4 *)plVar15 = 0x4d4d5544;
          *(undefined2 *)((long)plVar15 + 4) = 0x59;
          *in_R10 = plVar15;
          unaff_RBP = (undefined1 *)((long)plVar15 + 6);
          in_R9 = (undefined *)0x0;
          in_R11 = (long **)0x0;
          cVar2 = '\x01';
          unaff_R14 = unaff_R13;
code_r0x00102121:
          bVar3 = *(byte *)unaff_RBX;
          if (bVar3 != 0) {
            do {
              pplVar7 = unaff_RBX;
              if (bVar3 == 0x23) {
                if (cVar2 != '\0') break;
                pplVar22 = (long **)((long)unaff_RBP + 1);
              }
              else {
                bVar25 = (byte)in_R9;
                bVar27 = (byte)in_R11;
                if ((char)bVar3 < '$') {
                  if (bVar3 == 0x20) {
code_r0x00102384:
                    if ((bVar27 | bVar25) == 0) {
                      *(long ***)((undefined *)puVar17 + 0x20) = in_R10;
                      *(undefined8 *)((undefined *)puVar17 + -8) = 0x1023a7;
                      lVar6 = func_0x00101a20(unaff_RBX,&UNK_00106c9d);
                      in_R9 = (undefined *)0x0;
                      unaff_RBX = (long **)((long)unaff_RBX + lVar6);
                      in_R11 = (long **)0x0;
                      cVar2 = '\x01';
                      in_R10 = *(long ***)((undefined *)puVar17 + 0x20);
                      goto code_r0x00102121;
                    }
                  }
                  else {
                    if (bVar3 == 0x22) {
                      if (bVar25 == 0) {
                        in_R11 = (long **)(ulong)((uint)in_R11 ^ 1);
                        goto joined_r0x00102553;
                      }
                    }
                    else {
                      if (bVar3 == 9) goto code_r0x00102384;
                    }
                  }
                }
                else {
                  if (bVar3 == 0x27) {
                    if (bVar27 == 0) {
                      in_R9 = (undefined *)(ulong)((uint)in_R9 ^ 1);
joined_r0x00102553:
                      if (cVar2 != '\0') {
                        *unaff_RBP = 0;
                        *(long ***)unaff_R13 = (long **)((long)unaff_RBP + 1);
                        unaff_RBP = (undefined1 *)(long **)((long)unaff_RBP + 1);
                        unaff_R13 = unaff_R13 + 1;
                      }
                      unaff_RBX = (long **)((long)unaff_RBX + 1);
                      cVar2 = '\0';
                      goto code_r0x00102121;
                    }
                  }
                  else {
                    if (bVar3 == 0x5c) {
                      puVar11 = (undefined1 *)((long)unaff_RBX + 1);
                      bVar19 = *(byte *)((long)unaff_RBX + 1);
                      pplVar7 = (long **)puVar11;
                      if (bVar25 == 0) {
                        if ((byte)((uint)bVar19 - 0x22) < 0x3b) {
                          unaff_RBX = (long **)0x400000000000027;
                          bVar3 = bVar19;
                          if ((0x400000000000027U >> ((ulong)((uint)bVar19 - 0x22) & 0x1f) & 1) == 0
                             ) {
code_r0x001028d4:
                            if (bVar19 == 99) break;
                            if (bVar19 == 0x72) {
code_r0x00102e14:
                              pplVar7 = (long **)puVar11;
                              bVar3 = 0xd;
                            }
                            else {
                              if ((char)bVar19 < 's') {
                                if (bVar19 == 0x66) {
                                  bVar3 = 0xc;
                                }
                                else {
                                  if (bVar19 != 0x6e) {
code_r0x0010300b:
                                    *(undefined8 *)((undefined *)puVar17 + -8) = 0x10302a;
                                    func_0x00101a00(&UNK_00106ca0,&UNK_00106b44,0xd2,
                                                    __PRETTY_FUNCTION___7612);
                                    goto code_r0x0010302a;
                                  }
                                  bVar3 = 10;
                                }
                              }
                              else {
code_r0x00102a9e:
                                pplVar7 = (long **)puVar11;
                                if (bVar19 == 0x74) {
                                  bVar3 = 9;
                                }
                                else {
                                  if (bVar19 != 0x76) goto code_r0x0010300b;
                                  bVar3 = 0xb;
                                }
                              }
                            }
                          }
                        }
                        else {
                          if (bVar19 != 0x5f) goto code_r0x001028d4;
                          bVar3 = 0x20;
                          if (bVar27 == 0) {
                            unaff_RBX = (long **)((long)unaff_RBX + 2);
                            in_R9 = (undefined *)((ulong)in_R11 & 0xffffffff);
                            cVar2 = '\x01';
                            goto code_r0x00102121;
                          }
                        }
                      }
                      else {
                        if ((bVar19 != 0x5c) && (pplVar7 = unaff_RBX, bVar19 == 0x27)) {
                          pplVar7 = (long **)puVar11;
                          bVar3 = 0x27;
                        }
                      }
                    }
                    else {
                      if ((bVar3 == 0x24) && (bVar25 == 0)) goto code_r0x001023da;
                    }
                  }
                }
                pplVar22 = (long **)((long)unaff_RBP + 1);
                if (cVar2 != '\0') {
                  *unaff_RBP = 0;
                  *(long ***)unaff_R13 = pplVar22;
                  pplVar21 = (long **)((long)unaff_RBP + 2);
                  unaff_R13 = unaff_R13 + 1;
                  unaff_RBP = (undefined1 *)pplVar22;
                  pplVar22 = pplVar21;
                }
              }
              unaff_RBX = (long **)((long)pplVar7 + 1);
              *unaff_RBP = bVar3;
              cVar2 = '\0';
              bVar3 = *(byte *)unaff_RBX;
              unaff_RBP = (undefined1 *)pplVar22;
              if (bVar3 == 0) break;
            } while( true );
          }
          bVar30 = dev_debug == '\0';
          *unaff_R13 = (long *)0x0;
          plVar15 = *param_2;
          *unaff_RBP = 0;
          *in_R10 = plVar15;
          if (bVar30) {
            plVar15 = in_R10[1];
            while (plVar15 != (long *)0x0) {
              unaff_R14 = unaff_R14 + 1;
              plVar15 = *unaff_R14;
            }
          }
          else {
            if (in_R10[1] != (long *)0x0) {
              *(long ***)((undefined *)puVar17 + 0x20) = in_R10;
              *(undefined8 *)((undefined *)puVar17 + -8) = 0x1021b1;
              quote(unaff_R12);
              *(undefined8 *)((undefined *)puVar17 + -8) = 0x1021ce;
              func_0x00101bf0(stderr,1,&UNK_00106cbb);
              unaff_RBX = *(long ***)((undefined *)puVar17 + 0x20);
              if (dev_debug != '\0') {
                plVar15 = unaff_RBX[1];
                unaff_R14 = unaff_RBX + 2;
                *(undefined8 *)((undefined *)puVar17 + -8) = 0x102c5b;
                quote(plVar15);
                *(undefined8 *)((undefined *)puVar17 + -8) = 0x102c78;
                func_0x00101bf0(stderr,1,&UNK_00106cca);
                unaff_RBX = *(long ***)((undefined *)puVar17 + 0x20);
              }
              do {
                do {
                  in_R10 = unaff_RBX;
                  if (*unaff_R14 == (long *)0x0) goto code_r0x00102200;
                } while (dev_debug == '\0');
                *(undefined8 *)((undefined *)puVar17 + -8) = 0x102a3a;
                quote();
                unaff_R14 = unaff_R14 + 1;
                *(undefined8 *)((undefined *)puVar17 + -8) = 0x102a5b;
                func_0x00101bf0(stderr,1,&UNK_00106cd8);
              } while( true );
            }
          }
code_r0x00102200:
          iVar14 = *(int *)((undefined *)puVar17 + 0x48);
          if ((int)optind < iVar14) {
            lVar6 = 0;
            do {
              *(undefined8 *)((long)unaff_R14 + lVar6) =
                   *(undefined8 *)((long)param_2 + lVar6 + (long)(int)optind * 8);
              lVar6 = lVar6 + 8;
            } while ((ulong)(~optind + iVar14) * 8 + 8 != lVar6);
            unaff_R14 = unaff_R14 + (ulong)(*(int *)((undefined *)puVar17 + 0x48) + ~optind) + 1;
          }
          *unaff_R14 = (long *)0x0;
          if (*in_R10 == (long *)0x0) {
            *(undefined4 *)((undefined *)puVar17 + 0x48) = 0;
          }
          else {
            iVar14 = 0;
            pplVar7 = in_R10;
            do {
              pplVar7 = pplVar7 + 1;
              iVar14 = iVar14 + 1;
            } while (*pplVar7 != (long *)0x0);
            *(int *)((undefined *)puVar17 + 0x48) = iVar14;
          }
          optind = 0;
          param_2 = in_R10;
          goto code_r0x00101d30;
        }
        if (uVar4 == 0x30) {
          ((undefined *)puVar17)[0x10] = 1;
          goto code_r0x00101d30;
        }
        if (uVar4 == 0x43) {
          *(long ***)((undefined *)puVar17 + 8) = optarg;
          goto code_r0x00101d30;
        }
code_r0x00102e97:
        unaff_RBX = (long **)(ulong)uVar4;
        if (uVar4 != 0x20) goto code_r0x00101d85;
      }
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102e4f;
      uVar8 = func_0x00101960(0,&UNK_00106ce6,5);
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102e5f;
      func_0x00101b40(0,0,uVar8,unaff_RBX);
      puVar23 = &UNK_00107580;
      goto code_r0x00102ac2;
    }
    if (uVar4 == 0x80) {
code_r0x00101f40:
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x101f51;
      parse_signal_action_params(optarg,1);
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x101f5f;
      parse_block_signal_params(optarg,0);
    }
    else {
      if ((int)uVar4 < 0x81) {
        if (uVar4 == 0x75) {
          unaff_RBX = optarg;
          if (usvars_used == usvars_alloc) {
            puVar11 = (undefined1 *)usvars_used;
            if (usvars == (long **)0x0) {
              if (usvars_used == (long **)0x0) {
                puVar11 = (undefined1 *)0x10;
              }
              bVar30 = false;
              lVar6 = SUB168(ZEXT816(8) * ZEXT816(puVar11),0);
              if (SUB168(ZEXT816(8) * ZEXT816(puVar11) >> 0x40,0) != 0) {
code_r0x00102ed3:
                bVar30 = true;
              }
              if ((lVar6 < 0) || (bVar30)) goto code_r0x00102a99;
            }
            else {
              if ((long **)0xaaaaaaaaaaaaaa9 < usvars_used) {
code_r0x00102a99:
                *(undefined8 *)((undefined *)puVar17 + -8) = 0x102a9e;
                xalloc_die();
                bVar19 = extraout_DL;
                goto code_r0x00102a9e;
              }
              puVar11 = (undefined1 *)((long)usvars_used + ((ulong)usvars_used >> 1) + 1);
            }
            *(undefined8 *)((undefined *)puVar17 + -8) = 0x10271c;
            usvars_alloc = (long **)puVar11;
            usvars = (long **)xrealloc();
          }
          pplVar7 = usvars + (long)usvars_used;
          usvars_used = (long **)((long)usvars_used + 1);
          *(long ***)pplVar7 = unaff_RBX;
        }
        else {
          if (uVar4 != 0x76) {
            if (uVar4 != 0x69) goto code_r0x00101d85;
            goto code_r0x00101d90;
          }
          dev_debug = '\x01';
        }
      }
      else {
        if (uVar4 == 0x82) {
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x101f91;
          parse_block_signal_params(optarg,1);
        }
        else {
          if ((int)uVar4 < 0x82) {
            *(undefined8 *)((undefined *)puVar17 + -8) = 0x101f76;
            parse_signal_action_params(optarg,0);
          }
          else {
            if (uVar4 != 0x83) goto code_r0x00101d85;
            report_signal_handling = '\x01';
          }
        }
      }
    }
  } while( true );
  unaff_R12 = (long **)((long)unaff_R12 + 1);
  if (usvars_used <= unaff_R12) goto code_r0x00102a60;
  goto code_r0x00102a07;
code_r0x00102a60:
  unaff_R13 = (long **)(ulong)optind;
code_r0x001025d5:
  uVar29 = *(uint *)((undefined *)puVar17 + 0x48);
  unaff_R14 = (long **)(ulong)uVar29;
  if ((int)unaff_R13 < (int)uVar29) {
    unaff_RBP = &UNK_00106d5b;
    do {
      unaff_R12 = (long **)param_2[(int)unaff_R13];
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102636;
      unaff_RBX = (long **)func_0x001019d0(unaff_R12,0x3d);
      if (unaff_RBX == (long **)0x0) {
        if (((int)unaff_R13 < *(int *)((undefined *)puVar17 + 0x48)) &&
           (((undefined *)puVar17)[0x10] != '\0')) {
          puVar23 = &UNK_001075b0;
          goto code_r0x00102ac2;
        }
        unaff_R13 = (long **)0x4;
        unaff_R12 = (long **)0x1;
        *(long ***)((undefined *)puVar17 + 0x10) = param_2;
        goto code_r0x001027ea;
      }
      if (dev_debug != '\0') {
        *(undefined8 *)((undefined *)puVar17 + -8) = 0x102664;
        puVar11 = (undefined1 *)unaff_R12;
        func_0x00101bf0(stderr,1,&UNK_00106d5b);
      }
      plVar15 = param_2[(int)optind];
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102600;
      iVar14 = func_0x00101a60(plVar15);
      if (iVar14 != 0) goto code_r0x0010302a;
      optind = optind + 1;
      unaff_R13 = (long **)(ulong)optind;
    } while ((int)optind < (int)uVar29);
  }
  if ((*(long *)((undefined *)puVar17 + 8) != 0) &&
     (*(int *)((undefined *)puVar17 + 0x48) <= (int)unaff_R13)) goto code_r0x00102ffa;
  plVar15 = *environ;
  unaff_RBX = environ;
  if (plVar15 != (long *)0x0) {
    unaff_R12 = (long **)&UNK_00106d77;
    unaff_RBP = (undefined1 *)(ulong)(-(uint)(((undefined *)puVar17)[0x10] == '\0') & 10);
    do {
      unaff_RBX = unaff_RBX + 1;
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x10277d;
      func_0x00101b30(1,&UNK_00106d77,plVar15,unaff_RBP);
      plVar15 = *unaff_RBX;
    } while (plVar15 != (long *)0x0);
  }
  uVar8 = 0;
code_r0x00102787:
  if (*(long *)((undefined *)puVar17 + 0x108) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
code_r0x00102ff5:
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102ffa;
  func_0x001019a0();
code_r0x00102ffa:
  puVar23 = &UNK_001075d8;
code_r0x00102ac2:
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102ac9;
  uVar8 = func_0x00101960(0,puVar23,5);
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102ad7;
  func_0x00101b40(0,0,uVar8);
code_r0x00101d85:
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x101d8f;
  usage();
code_r0x00101d90:
  ((undefined *)puVar17)[0x18] = 1;
  goto code_r0x00101d30;
code_r0x001027ea:
  do {
    iVar14 = *(int *)((long)signals + (long)unaff_R13);
    iVar16 = (int)unaff_R12;
    if (iVar14 != 0) {
      param_2 = (long **)((undefined *)puVar17 + 0x50);
      uVar29 = iVar14 - 1;
      unaff_RBX = (long **)(ulong)uVar29;
      uVar20 = iVar14 - 2U & 0xfffffffd;
      unaff_RBP = (undefined1 *)(ulong)uVar20;
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102814;
      uVar4 = func_0x00101910(unaff_R12,0,param_2);
      unaff_R14 = (long **)(ulong)uVar4;
      if ((uVar4 != 0) && (uVar20 != 0)) goto code_r0x00102fc6;
      if (uVar4 == 0) {
        *(ulong *)((undefined *)puVar17 + 0x50) = (ulong)(1 < uVar29);
        *(undefined8 *)((undefined *)puVar17 + -8) = 0x102842;
        uVar4 = func_0x00101910(unaff_R12,param_2,0);
        cVar2 = (char)pplVar7;
        unaff_R14 = (long **)(ulong)uVar4;
        if ((uVar4 != 0) && (uVar20 != 0)) {
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102eb7;
          unaff_RBX = (long **)func_0x00101960(0,&UNK_00107630,5);
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102ebf;
          puVar9 = (uint *)func_0x001018c0();
          uVar29 = *puVar9;
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102ed3;
          puVar11 = (undefined1 *)unaff_R12;
          lVar6 = func_0x00101b40(0x7d,(ulong)uVar29,unaff_RBX);
          goto code_r0x00102ed3;
        }
      }
      if (dev_debug != '\0') {
        unaff_RBP = (undefined *)puVar17 + 0xf0;
        *(undefined8 *)((undefined *)puVar17 + -8) = 0x102871;
        sig2str();
        if (dev_debug != '\0') {
          puVar23 = &UNK_00106c39;
          in_R9 = &UNK_00106c4c;
          if ((int)unaff_R14 == 0) {
            puVar23 = &UNK_00106c9f;
          }
          unaff_RBX = (long **)&UNK_00106b61;
          if (1 < uVar29) {
            in_R9 = &UNK_00106b61;
          }
          *(undefined **)((undefined *)puVar17 + -0x10) = puVar23;
          *(undefined8 *)((undefined *)puVar17 + -0x18) = 0x1028cd;
          puVar11 = unaff_RBP;
          func_0x00101bf0(stderr,1,&UNK_00106d7c);
          pplVar7 = unaff_R12;
        }
      }
    }
    uVar29 = iVar16 + 1;
    unaff_R12 = (long **)(ulong)uVar29;
    unaff_R13 = (long **)((long)unaff_R13 + 4);
  } while (uVar29 != 0x41);
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x10290d;
  uVar8 = func_0x001018c0();
  param_2 = *(long ***)((undefined *)puVar17 + 0x10);
  *(undefined8 *)((undefined *)puVar17 + 0x10) = uVar8;
  if (sig_mask_changed != '\0') {
    unaff_R12 = (long **)((undefined *)puVar17 + 0x50);
    unaff_RBX = (long **)0x1;
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x102d10;
    func_0x00101a80(unaff_R12);
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x102d1c;
    iVar14 = func_0x00101890(0,0,unaff_R12);
    if (iVar14 != 0) goto code_r0x00102f9d;
    unaff_RBP = block_signals;
    unaff_R14 = (long **)((undefined *)puVar17 + 0xf0);
    unaff_R13 = (long **)&UNK_00106c56;
    *(long ***)((undefined *)puVar17 + 0x18) = param_2;
    do {
      iVar16 = (int)unaff_RBX;
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102d6e;
      iVar14 = func_0x00101bc0(block_signals,unaff_RBX);
      if (iVar14 == 0) {
        *(undefined8 *)((undefined *)puVar17 + -8) = 0x102d80;
        iVar14 = func_0x00101bc0(unblock_signals,unaff_RBX);
        if (iVar14 != 0) {
          puVar23 = &UNK_00106c54;
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102d95;
          func_0x00101b60(unaff_R12);
          goto code_r0x00102d53;
        }
      }
      else {
        puVar23 = &UNK_00106c56;
        *(undefined8 *)((undefined *)puVar17 + -8) = 0x102d53;
        func_0x00101c30(unaff_R12);
code_r0x00102d53:
        if (dev_debug != '\0') {
          *(undefined8 *)((undefined *)puVar17 + -8) = 0x102da1;
          sig2str(unaff_RBX);
          if (dev_debug != '\0') {
            *(undefined8 *)((undefined *)puVar17 + -8) = 0x102dcd;
            puVar11 = (undefined1 *)unaff_R14;
            func_0x00101bf0(stderr,1,&UNK_00107660);
            pplVar7 = unaff_RBX;
            in_R9 = puVar23;
          }
        }
      }
      cVar2 = (char)pplVar7;
      uVar29 = iVar16 + 1;
      unaff_RBX = (long **)(ulong)uVar29;
    } while (uVar29 != 0x41);
    param_2 = *(long ***)((undefined *)puVar17 + 0x18);
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x102de3;
    iVar14 = func_0x00101890(2,unaff_R12,0);
    if (iVar14 != 0) {
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102dfe;
      uVar8 = func_0x00101960(0,&UNK_00107680,5);
      uVar29 = **(uint **)((undefined *)puVar17 + 0x10);
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102e14;
      func_0x00101b40(0x7d,(ulong)uVar29,uVar8);
      goto code_r0x00102e14;
    }
  }
  if (report_signal_handling != '\0') {
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x102932;
    list_signal_handling();
  }
  if (*(long *)((undefined *)puVar17 + 8) != 0) {
    if (dev_debug != '\0') {
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102af5;
      uVar8 = quotearg_style(4,*(undefined8 *)((undefined *)puVar17 + 8));
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102b12;
      func_0x00101bf0(stderr,1,&UNK_00106d9a,uVar8);
    }
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x102951;
    iVar14 = func_0x00101990(*(undefined8 *)((undefined *)puVar17 + 8));
    if (iVar14 != 0) {
code_r0x00103093:
      puVar17[-1] = 0x1030a2;
      uVar8 = quotearg_style(4,puVar17[1]);
      puVar17[-1] = 0x1030b8;
      uVar10 = func_0x00101960(0,&UNK_00106da8,5);
      uVar29 = *(uint *)puVar17[2];
      puVar17[-1] = 0x1030d1;
      auVar32 = func_0x00101b40(0x7d,(ulong)uVar29,uVar10,uVar8);
      uVar8 = *puVar17;
      uVar18 = (ulong)(puVar17 + 1) & 0xfffffffffffffff0;
      *(undefined8 *)(uVar18 - 8) = SUB168(auVar32,0);
      *(ulong *)(uVar18 - 0x10) = uVar18 - 8;
      *(undefined8 *)(uVar18 - 0x18) = 0x10310a;
      (*(code *)PTR___libc_start_main_00309fd8)
                (main,uVar8,puVar17 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar32 >> 0x40,0));
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  if (dev_debug != '\0') {
    unaff_R12 = (long **)&UNK_00106dd5;
    plVar15 = param_2[(int)optind];
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x102cb1;
    func_0x00101bf0(stderr,1,&UNK_00106dc6,plVar15);
    uVar13 = SEXT48((int)optind);
    while (unaff_RBX = (long **)(uVar13 & 0xffffffff), unaff_RBP = (undefined1 *)unaff_RBX,
          (int)uVar13 < *(int *)((undefined *)puVar17 + 0x48)) {
      if (dev_debug != '\0') {
        plVar15 = param_2[(long)unaff_RBX];
        *(undefined8 *)((undefined *)puVar17 + -8) = 0x102ccc;
        quote(plVar15);
        *(undefined8 *)((undefined *)puVar17 + -8) = 0x102ced;
        func_0x00101bf0(stderr,1,&UNK_00106dd5,(ulong)((int)unaff_RBX - optind));
      }
      uVar13 = (long)unaff_RBX + 1;
    }
  }
  plVar15 = param_2[(int)optind];
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x10297c;
  func_0x00101b90(plVar15,param_2 + (int)optind);
  if (**(int **)((undefined *)puVar17 + 0x10) == 2) {
    plVar15 = param_2[(int)optind];
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x102b95;
    uVar8 = quote(plVar15);
    uVar29 = **(uint **)((undefined *)puVar17 + 0x10);
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x102baf;
    func_0x00101b40(0,(ulong)uVar29,&UNK_00107725,uVar8);
    plVar15 = param_2[(int)optind];
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x102bc4;
    lVar6 = func_0x001019d0(plVar15,0x20);
    if (lVar6 == 0) {
      uVar8 = 0x7f;
    }
    else {
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102be0;
      uVar8 = func_0x00101960(0,&UNK_00107580,5);
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102bee;
      func_0x00101b40(0,0,uVar8);
      uVar8 = 0x7f;
    }
  }
  else {
    plVar15 = param_2[(int)optind];
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x10299a;
    uVar8 = quote(plVar15);
    uVar29 = **(uint **)((undefined *)puVar17 + 0x10);
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x1029b4;
    func_0x00101b40(0,(ulong)uVar29,&UNK_00107725,uVar8);
    uVar8 = 0x7e;
  }
  goto code_r0x00102787;
code_r0x00101e00:
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x101e05;
  pplVar7 = (long **)func_0x00101c40();
  plVar15 = *pplVar7;
  unaff_R12 = optarg;
  while( true ) {
    uVar13 = SEXT18(*(char *)unaff_R12);
    if ((*(byte *)((long)plVar15 + uVar13 * 2 + 1) & 0x20) == 0) break;
    unaff_R12 = (long **)((long)unaff_R12 + 1);
  }
  in_R11 = pplVar7;
  if (*(char *)unaff_R12 != '\0') goto code_r0x00101e35;
  goto code_r0x00101d30;
code_r0x00101e35:
  in_R9 = (undefined *)0xffffffffffffffff;
  uVar12 = 0xffffffffffffffff;
  in_R10 = (long **)0x0;
  unaff_R14 = (long **)0x0;
  unaff_RBP = (undefined1 *)0x0;
  *(uint *)((undefined *)puVar17 + 0x30) = *(int *)((undefined *)puVar17 + 0x48) - optind;
  pplVar22 = unaff_R12;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar2 = *(char *)pplVar22;
    pplVar22 = (long **)((long)pplVar22 + (ulong)bVar31 * -2 + 1);
  } while (cVar2 != '\0');
  *(long ***)((undefined *)puVar17 + 0x38) = unaff_R12;
  *(long ***)((undefined *)puVar17 + 0x40) = param_2;
  param_2 = (long **)0x1;
  *(undefined8 *)((undefined *)puVar17 + 0x28) = 0xffffffffffffffff;
  *(ulong *)((undefined *)puVar17 + 0x20) = ~uVar12;
  puVar23 = (undefined *)puVar17;
  uVar12 = uVar13;
  pplVar22 = in_R10;
  unaff_R13 = unaff_R12;
  goto code_r0x00101e88;
code_r0x00102288:
  if (((char)unaff_R14 != '\0') && ((char)unaff_RBP != '\0')) goto code_r0x00102f5a;
  uVar13 = (ulong)uVar29;
  unaff_R14 = (long **)(ulong)(((uint)unaff_R14 | (uint)unaff_RBP) ^ 1);
  goto code_r0x0010207d;
code_r0x00101ecc:
  cVar2 = (char)uVar29;
  bVar30 = cVar2 == 'c';
  if ((bVar30) && ((char)unaff_RBP != '\0')) goto code_r0x0010306f;
  if (cVar2 == '\0') goto code_r0x00102f17;
  if ((byte)(cVar2 + 0x9aU) < 0x11) {
    bVar30 = (bool)((byte)(0x15101 >> (cVar2 + 0x9aU & 0x3f)) & 1 | bVar30);
  }
  if ((bVar30 == false) &&
     ((0x3d < (byte)(uVar29 - 0x22) ||
      ((0x2400000000000027U >> ((ulong)(uVar29 - 0x22) & 0x1f) & 1) == 0)))) {
    unaff_RBP = (undefined1 *)(ulong)uVar29;
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x101f28;
    uVar8 = func_0x00101960(0,&UNK_00106c80,5);
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x101f3d;
    func_0x00101b40(0x7d,0,uVar8,(ulong)(uint)(int)cVar2);
    unaff_RBX = pplVar7;
    goto code_r0x00101f40;
  }
  uVar13 = (ulong)*(byte *)((long)unaff_R13 + 2);
  unaff_R13 = (long **)((long)unaff_R13 + 1);
  param_2 = (long **)(ulong)((int)param_2 + (uint)(cVar2 == '_'));
code_r0x0010207d:
  unaff_R13 = (long **)((long)unaff_R13 + 1);
  if ((char)uVar13 == '\0') goto code_r0x001020b9;
  goto code_r0x00102085;
code_r0x00102f3b:
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102f5a;
  func_0x00101a00(&UNK_00106c74,&UNK_00106b44,0x134,__PRETTY_FUNCTION___7637);
code_r0x00102f5a:
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102f79;
  func_0x00101a00(&UNK_00106c74,&UNK_00106b44,0x12f,__PRETTY_FUNCTION___7637);
code_r0x00102f79:
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102f8c;
  uVar8 = func_0x00101960(0,&UNK_00107530,5);
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102f9d;
  func_0x00101b40(0x7d,0,uVar8);
code_r0x00102f9d:
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102fb0;
  uVar8 = func_0x00101960(0,&UNK_00106e68,5);
  uVar29 = **(uint **)((undefined *)puVar17 + 0x10);
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102fc6;
  func_0x00101b40(0x7d,(ulong)uVar29,uVar8);
code_r0x00102fc6:
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102fd9;
  unaff_RBX = (long **)func_0x00101960(0,&UNK_00107600,5);
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102fe1;
  puVar9 = (uint *)func_0x001018c0();
  uVar29 = *puVar9;
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102ff5;
  func_0x00101b40(0x7d,(ulong)uVar29,unaff_RBX,(ulong)unaff_R12 & 0xffffffff);
  goto code_r0x00102ff5;
code_r0x0010302a:
  *(undefined *)unaff_RBX = 0;
  plVar15 = param_2[(int)optind];
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x10303d;
  uVar8 = quote(plVar15);
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x103053;
  uVar10 = func_0x00101960(0,&UNK_00106d69,5);
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x10305b;
  puVar9 = (uint *)func_0x001018c0();
  uVar29 = *puVar9;
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x10306f;
  func_0x00101b40(0x7d,(ulong)uVar29,uVar10,uVar8);
code_r0x0010306f:
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x103082;
  uVar8 = func_0x00101960(0,&UNK_00107498,5);
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x103093;
  func_0x00101b40(0x7d,0,uVar8);
  goto code_r0x00103093;
code_r0x001023da:
  ((undefined *)puVar17)[0x4f] = bVar27;
  *(long ***)((undefined *)puVar17 + 0x40) = in_R10;
  ((undefined *)puVar17)[0x38] = 0;
  ((undefined *)puVar17)[0x30] = cVar2;
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x1023f6;
  uVar8 = extract_varname(unaff_RBX);
  *(undefined8 *)((undefined *)puVar17 + 0x28) = uVar8;
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x102403;
  lVar6 = func_0x00101880(uVar8);
  *(long *)((undefined *)puVar17 + 0x20) = lVar6;
  uVar8 = *(undefined8 *)((undefined *)puVar17 + 0x28);
  cVar2 = ((undefined *)puVar17)[0x30];
  uVar26 = ((undefined *)puVar17)[0x38];
  uVar10 = *(undefined8 *)((undefined *)puVar17 + 0x40);
  uVar28 = ((undefined *)puVar17)[0x4f];
  if (lVar6 == 0) {
    if (dev_debug != '\0') {
      ((undefined *)puVar17)[0x38] = uVar28;
      *(undefined8 *)((undefined *)puVar17 + 0x30) = uVar10;
      ((undefined *)puVar17)[0x28] = uVar26;
      ((undefined *)puVar17)[0x20] = cVar2;
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102b69;
      func_0x00101bf0(stderr,1,&UNK_00107558);
      uVar28 = ((undefined *)puVar17)[0x38];
      uVar10 = *(undefined8 *)((undefined *)puVar17 + 0x30);
      uVar26 = ((undefined *)puVar17)[0x28];
      cVar2 = ((undefined *)puVar17)[0x20];
    }
  }
  else {
    pplVar7 = (long **)unaff_RBP;
    pplVar22 = unaff_R13;
    if (cVar2 != '\0') {
      pplVar7 = (long **)((long)unaff_RBP + 1);
      *unaff_RBP = 0;
      pplVar22 = unaff_R13 + 1;
      *(long ***)unaff_R13 = pplVar7;
    }
    if (dev_debug != '\0') {
      ((undefined *)puVar17)[0x40] = uVar28;
      *(undefined8 *)((undefined *)puVar17 + 0x38) = uVar10;
      ((undefined *)puVar17)[0x30] = uVar26;
      *(undefined8 *)((undefined *)puVar17 + 0x28) = uVar8;
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102c16;
      quote(*(undefined8 *)((undefined *)puVar17 + 0x20));
      *(undefined8 *)((undefined *)puVar17 + -8) = 0x102c38;
      func_0x00101bf0(stderr,1,&UNK_00106ca2);
      uVar28 = ((undefined *)puVar17)[0x40];
      uVar10 = *(undefined8 *)((undefined *)puVar17 + 0x38);
      uVar26 = ((undefined *)puVar17)[0x30];
    }
    ((undefined *)puVar17)[0x38] = uVar28;
    *(undefined8 *)((undefined *)puVar17 + 0x30) = uVar10;
    ((undefined *)puVar17)[0x28] = uVar26;
    *(undefined8 *)((undefined *)puVar17 + -8) = 0x10246e;
    unaff_RBP = (undefined1 *)func_0x00101950(pplVar7,*(undefined8 *)((undefined *)puVar17 + 0x20));
    uVar26 = ((undefined *)puVar17)[0x28];
    uVar28 = ((undefined *)puVar17)[0x38];
    uVar10 = *(undefined8 *)((undefined *)puVar17 + 0x30);
    cVar2 = '\0';
    unaff_R13 = pplVar22;
  }
  ((undefined *)puVar17)[0x38] = uVar28;
  *(undefined8 *)((undefined *)puVar17 + 0x30) = uVar10;
  ((undefined *)puVar17)[0x28] = uVar26;
  ((undefined *)puVar17)[0x20] = cVar2;
  *(undefined8 *)((undefined *)puVar17 + -8) = 0x1024a6;
  lVar6 = func_0x001019d0(unaff_RBX,0x7d);
  cVar2 = ((undefined *)puVar17)[0x20];
  unaff_RBX = (long **)(lVar6 + 1);
  in_R9 = (undefined *)(ulong)(byte)((undefined *)puVar17)[0x28];
  in_R10 = *(long ***)((undefined *)puVar17 + 0x30);
  in_R11 = (long **)(ulong)(byte)((undefined *)puVar17)[0x38];
  goto code_r0x00102121;
}