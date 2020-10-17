
/* WARNING: Could not reconcile some variable overlaps */

ulong printf(int param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  byte *pbVar16;
  undefined8 extraout_RDX;
  byte *pbVar17;
  undefined uVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  char cVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  long in_FS_OFFSET;
  byte bVar27;
  unkuint10 in_ST0;
  unkuint10 in_ST1;
  unkuint10 in_ST2;
  unkuint10 in_ST3;
  unkuint10 in_ST4;
  unkuint10 in_ST5;
  unkuint10 in_ST6;
  unkuint10 in_ST7;
  byte **ppbStack440;
  undefined8 uStack432;
  undefined auStack424 [8];
  undefined2 uStack416;
  undefined auStack408 [4];
  undefined auStack404 [12];
  byte **ppbStack392;
  byte *pbStack384;
  ulong uStack376;
  int iStack368;
  uint uStack364;
  uint uStack360;
  char cStack354;
  char cStack353;
  byte *pbStack352;
  undefined auStack336 [8];
  undefined8 auStack328 [8];
  undefined uStack263;
  undefined2 uStack259;
  undefined uStack257;
  undefined uStack240;
  undefined uStack231;
  uint uStack229;
  undefined uStack225;
  undefined uStack223;
  undefined uStack217;
  byte bStack213;
  undefined uStack211;
  undefined uStack208;
  long lStack64;
  
  bVar27 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101670(6,&UNK_00109512);
  func_0x001014e0(&UNK_00108c2f,&UNK_00108c5d);
  func_0x001014b0(&UNK_00108c2f);
  atexit(close_stdout);
  exit_status = 0;
  lVar9 = func_0x00101410(&UNK_00108c75);
  posixly_correct = lVar9 != 0;
  if (param_1 == 2) {
    uVar10 = param_2[1];
    iVar6 = func_0x001015e0(uVar10,&UNK_00108c85);
    if (iVar6 == 0) goto code_r0x001024fa;
    uVar8 = func_0x001015e0(uVar10,&UNK_00108c8c);
    if (uVar8 != 0) {
      iVar6 = func_0x001015e0(uVar10,&UNK_00108ca6);
      if (iVar6 != 0) goto code_r0x0010181a;
      goto code_r0x00101e9d;
    }
    version_etc(stdout,&UNK_00108bae,&UNK_00108c2b,Version,&UNK_00108c96,0);
  }
  else {
    if (1 < param_1) {
      iVar6 = func_0x001015e0(param_2[1],&UNK_00108ca6);
      if (iVar6 == 0) {
        param_1 = param_1 + -1;
        param_2 = param_2 + 1;
      }
code_r0x0010181a:
      pbStack352 = (byte *)param_2[1];
      ppbStack392 = (byte **)(param_2 + 2);
      iStack368 = param_1 + -2;
code_r0x00101840:
      bVar5 = *pbStack352;
      if (bVar5 != 0) {
        uStack360 = 0;
        uStack364 = 0;
        ppbStack440 = ppbStack392;
        pbVar26 = pbStack352;
        iVar6 = iStack368;
code_r0x00101894:
        if (bVar5 == 0x25) {
          bVar5 = pbVar26[1];
          pbVar25 = (byte *)(ulong)bVar5;
          pbVar17 = pbVar26 + 1;
          pbVar19 = pbVar26 + 2;
          if (bVar5 == 0x25) {
            puVar2 = *(undefined **)(stdout + 0x28);
            if (puVar2 < *(undefined **)(stdout + 0x30)) {
              *(undefined **)(stdout + 0x28) = puVar2 + 1;
              *puVar2 = 0x25;
            }
            else {
              func_0x00101560(stdout,0x25);
            }
          }
          else {
            if (bVar5 == 0x62) {
              if (iVar6 != 0) {
                pbVar26 = *ppbStack440;
                bVar5 = *pbVar26;
                while (pbVar25 = pbVar26, bVar5 != 0) {
                  while (bVar5 != 0x5c) {
                    pbVar26 = *(byte **)(stdout + 0x28);
                    if (pbVar26 < *(byte **)(stdout + 0x30)) {
                      *(byte **)(stdout + 0x28) = pbVar26 + 1;
                      *pbVar26 = bVar5;
                    }
                    else {
                      func_0x00101560(stdout,(ulong)bVar5);
                    }
                    bVar5 = pbVar25[1];
                    pbVar25 = pbVar25 + 1;
                    if (bVar5 == 0) goto code_r0x00101a70;
                  }
                  iVar7 = print_esc(pbVar25);
                  pbVar26 = pbVar25 + iVar7 + 1;
                  bVar5 = (pbVar25 + iVar7)[1];
                }
code_r0x00101a70:
                ppbStack440 = ppbStack440 + 1;
                iVar6 = iVar6 + -1;
              }
            }
            else {
              if (bVar5 != 0x71) {
                lVar9 = 0x20;
                pbVar22 = (byte *)0x0;
                uStack432 = (byte *)((ulong)uStack432 & 0xffffffffffffff00);
                _auStack424 = _auStack424 & 0xffffffffffffff00;
                pbVar19 = (byte *)0x1;
                puVar21 = auStack328;
                while (lVar9 != 0) {
                  lVar9 = lVar9 + -1;
                  *puVar21 = 0;
                  puVar21 = puVar21 + (ulong)bVar27 * 0x1ffffffffffffffe + 1;
                }
                bVar4 = false;
                uStack259 = 0x101;
                uStack240 = 1;
                uStack208 = 1;
                uStack211 = 1;
                bVar3 = false;
                bStack213 = 1;
                uStack217 = 1;
                bVar5 = 1;
                uStack223 = 1;
                uStack257 = 1;
                uVar10 = 0;
                uStack229 = 0x1010101;
                uStack225 = 1;
                uVar11 = 1;
                uStack263 = 1;
                uStack231 = 1;
                _auStack408 = (float10)CONCAT64(auStack404._0_6_,iVar6);
                do {
                  pbVar16 = pbVar17 + -(long)pbVar26;
                  switch((char)pbVar25) {
                  default:
                    goto code_r0x00101bd0;
                  case '#':
                    pbVar17 = pbVar17 + 1;
                    pbVar22 = (byte *)0x1;
                    uStack432 = (byte *)CONCAT71(uStack432._1_7_,1);
                    _auStack424 = CONCAT91(stack0xfffffffffffffe59,1);
                    pbVar19 = (byte *)0x0;
                    bVar4 = true;
                    bVar3 = true;
                    bVar5 = 0;
                    pbVar25 = (byte *)(ulong)*pbVar17;
                    break;
                  case '\'':
                  case 'I':
                    bVar4 = true;
                    bVar3 = true;
                    bVar5 = 0;
                    uVar10 = 1;
                    uVar11 = 0;
                  case ' ':
                  case '+':
                  case '-':
                    pbVar17 = pbVar17 + 1;
                    pbVar25 = (byte *)(ulong)*pbVar17;
                    break;
                  case '0':
                    pbVar17 = pbVar17 + 1;
                    bVar4 = true;
                    bVar3 = true;
                    bVar5 = 0;
                    pbVar25 = (byte *)(ulong)*pbVar17;
                  }
                } while( true );
              }
              if (iVar6 != 0) {
                iVar6 = iVar6 + -1;
                pbVar26 = *ppbStack440;
                ppbStack440 = ppbStack440 + 1;
                uVar10 = quotearg_style(3,pbVar26);
                func_0x001015c0(uVar10);
              }
            }
          }
          goto code_r0x0010188c;
        }
        if (bVar5 == 0x5c) {
          iVar7 = print_esc(pbVar26);
          pbVar17 = pbVar26 + iVar7;
          pbVar19 = pbVar17 + 1;
          goto code_r0x0010188c;
        }
        pbVar17 = *(byte **)(stdout + 0x28);
        if (*(byte **)(stdout + 0x30) <= pbVar17) {
          func_0x00101560(stdout,(ulong)bVar5);
          pbVar17 = pbVar26;
          pbVar19 = pbVar26 + 1;
          goto code_r0x0010188c;
        }
        *(byte **)(stdout + 0x28) = pbVar17 + 1;
        *pbVar17 = bVar5;
        bVar5 = pbVar26[1];
        pbVar26 = pbVar26 + 1;
        goto joined_r0x001018cf;
      }
      goto code_r0x001018fe;
    }
code_r0x00101e9d:
    uVar10 = func_0x001014f0(0,&UNK_00108ca9,5);
    func_0x001016b0(0,0,uVar10);
    usage(1);
code_r0x001018fe:
    uVar8 = exit_status;
    if (iStack368 != 0) {
      uVar10 = quote(*ppbStack392);
      uVar11 = func_0x001014f0(0,&UNK_00108b50,5);
      func_0x001016b0(0,0,uVar11,uVar10);
      uVar8 = exit_status;
    }
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar8;
  }
code_r0x001024f5:
  func_0x00101520();
code_r0x001024fa:
  usage(0);
  (*(code *)PTR___libc_start_main_0030bfc8)
            (main,ppbStack440,&uStack432,__libc_csu_init,__libc_csu_fini,extraout_RDX,0x48);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
code_r0x00101bd0:
  uStack240 = (undefined)uVar11;
  if ((char)uVar10 == '\0') {
    if (!bVar3) goto code_r0x00101be6;
code_r0x00101f35:
    bStack213 = bVar5;
    if ((char)uVar10 == '\0') goto code_r0x00101be6;
  }
  else {
    uStack208 = uStack240;
    if (bVar3) goto code_r0x00101f35;
  }
  uStack217 = uStack240;
  uStack259 = CONCAT11(1,uStack240);
  uStack229 = CONCAT13(1,CONCAT12(uStack240,0x101));
code_r0x00101be6:
  pbVar20 = pbVar17;
  pbVar24 = pbVar25;
  uStack240 = uStack208;
  if (bVar4) goto code_r0x0010247c;
  do {
    if ((char)uVar10 != '\0') {
      uStack263 = (char)uVar11;
      uStack231 = (char)uVar11;
    }
    uVar18 = SUB81(pbVar19,0);
    if (auStack424[0] != '\0') {
      uStack211 = uVar18;
    }
    if ((char)uStack432 != '\0') {
      uStack223 = uVar18;
    }
    if ((char)pbVar22 != '\0') {
      uStack229._0_2_ = CONCAT11(uVar18,(undefined)uStack229);
      uStack229 = uStack229 & 0xffff0000 | (uint)(ushort)uStack229;
    }
    pbVar19 = pbVar17 + 1;
    if ((char)pbVar24 == '*') {
      auStack424 = pbVar16 + 1;
      if (iVar6 == 0) {
        uStack432 = pbVar17 + 2;
        pbVar24 = (byte *)(ulong)pbVar17[1];
        uStack364 = 0;
        cStack354 = '\x01';
        pbVar17 = pbVar19;
        goto code_r0x00101c7f;
      }
      lVar9 = vstrtoimax(*ppbStack440);
      if (lVar9 + 0x80000000U < 0x100000000) {
        uStack364 = (uint)lVar9;
        uStack432 = pbVar17 + 2;
        ppbStack440 = ppbStack440 + 1;
        iVar6 = iVar6 + -1;
        pbVar24 = (byte *)(ulong)pbVar17[1];
        cStack354 = '\x01';
        pbVar17 = pbVar19;
        goto code_r0x00101c7f;
      }
code_r0x001024bf:
      uVar10 = quote(*ppbStack440);
      uVar11 = func_0x001014f0(0,&UNK_00108cb9,5);
      func_0x001016b0(1,0,uVar11,uVar10);
      goto code_r0x001024f5;
    }
    if ((int)(char)pbVar24 - 0x30U < 10) {
      while( true ) {
        auStack424 = (byte *)(((long)pbVar19 + (long)pbVar16) - (long)pbVar20);
        pbVar24 = (byte *)(ulong)(uint)(int)(char)*pbVar19;
        if (9 < (int)(char)*pbVar19 - 0x30U) break;
        pbVar17 = pbVar19;
        pbVar19 = pbVar19 + 1;
      }
      uStack432 = pbVar17 + 2;
      cStack354 = '\0';
      pbVar17 = pbVar19;
    }
    else {
      cStack354 = '\0';
      auStack424 = pbVar16;
      uStack432 = pbVar19;
    }
code_r0x00101c7f:
    if ((char)pbVar24 == '.') {
      bVar5 = pbVar17[1];
      pbVar24 = (byte *)(ulong)bVar5;
      uStack229 = uStack229 & 0xffffff00;
      if (bVar5 == 0x2a) {
        auStack424 = auStack424 + 2;
        pbVar19 = pbVar17 + 2;
        if (iVar6 == 0) {
          uStack432 = pbVar17 + 3;
          pbVar24 = (byte *)(ulong)pbVar17[2];
          uStack360 = 0;
          cStack353 = '\x01';
          pbVar17 = pbVar19;
        }
        else {
          uStack432 = auStack424;
          lVar9 = vstrtoimax(*ppbStack440);
          if (lVar9 < 0) {
            uStack360 = 0xffffffff;
          }
          else {
            if (0x7fffffff < lVar9) {
              uVar10 = quote(*ppbStack440);
              uVar11 = func_0x001014f0(0,&UNK_00108cd1,5);
              func_0x001016b0(1,0,uVar11,uVar10);
              goto code_r0x001024bf;
            }
            uStack360 = (uint)lVar9;
          }
          pbVar25 = pbVar17 + 3;
          pbVar24 = (byte *)(ulong)pbVar17[2];
          ppbStack440 = ppbStack440 + 1;
          iVar6 = iVar6 + -1;
          cStack353 = '\x01';
          auStack424 = uStack432;
          pbVar17 = pbVar19;
          uStack432 = pbVar25;
        }
      }
      else {
        auStack424 = auStack424 + 1;
        if ((int)(char)bVar5 - 0x30U < 10) {
          do {
            pbVar25 = uStack432;
            auStack424 = auStack424 + 1;
            pbVar24 = (byte *)(ulong)(uint)(int)(char)pbVar25[1];
            uStack432 = pbVar25 + 1;
          } while ((int)(char)pbVar25[1] - 0x30U < 10);
          cStack353 = '\0';
          pbVar17 = pbVar25 + 1;
          uStack432 = pbVar25 + 2;
        }
        else {
          cStack353 = '\0';
          pbVar17 = uStack432;
          uStack432 = uStack432 + 1;
        }
      }
    }
    else {
      cStack353 = '\0';
    }
    uVar8 = (int)pbVar24 - 0x4c;
    if (((byte)uVar8 < 0x2f) && (((ulong)pbVar19 >> ((ulong)uVar8 & 0x1f) & 1) != 0)) {
      do {
        uStack432 = pbVar17;
        pbVar24 = (byte *)(ulong)uStack432[1];
        pbVar17 = uStack432 + 1;
        uVar8 = (uint)uStack432[1] - 0x4c;
        if (0x2e < (byte)uVar8) break;
      } while (((ulong)pbVar19 >> ((ulong)uVar8 & 0x1f) & 1) != 0);
      uStack432 = uStack432 + 2;
    }
    pbVar25 = uStack432;
    cVar23 = (char)pbVar24;
    if (*(char *)((long)auStack328 + ((ulong)pbVar24 & 0xff)) != '\0') break;
    uVar15 = func_0x001014f0(0,&UNK_00108b28,5);
    pbVar16 = pbVar25 + -(long)pbVar26;
    pbVar20 = (byte *)0x0;
    bVar5 = 1;
    pbVar22 = pbVar26;
    func_0x001016b0(1,0,uVar15);
code_r0x0010247c:
    uStack229 = uStack229 & 0xffffff00 | (uint)bVar5;
    pbVar24 = pbVar25;
  } while( true );
  _auStack424 = CONCAT28(uStack416,0x109512);
  if (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    pbVar19 = *ppbStack440;
    ppbStack440 = ppbStack440 + 1;
    _auStack424 = CONCAT28(uStack416,pbVar19);
  }
  if ((byte)(cVar23 + 0xbfU) < 0x38) {
    uVar12 = 1 << (cVar23 + 0xbfU & 0x3f);
    uStack376 = 1;
    _auStack408 = (float10)CONCAT28(auStack404._4_2_,0x108c58);
    if ((uVar12 & 0x90410800800000) == 0) {
      uVar12 = uVar12 & 0x7100000071;
      uStack376 = (ulong)(uVar12 != 0);
      pbVar19 = &UNK_00108c5b;
      if (uVar12 == 0) {
        pbVar19 = pbVar26;
      }
      _auStack408 = (float10)CONCAT28(auStack404._4_2_,pbVar19);
    }
  }
  else {
    _auStack408 = (float10)CONCAT28(auStack404._4_2_,pbVar26);
    uStack376 = 0;
  }
  pbStack384 = auStack424;
  uVar10 = xmalloc(auStack424 + uStack376 + 2);
  uVar11 = func_0x00101690(uVar10,pbVar26,pbStack384);
  pcVar13 = (char *)func_0x00101690(uVar11,_auStack408,uStack376,uStack376);
  *pcVar13 = cVar23;
  pcVar13[1] = '\0';
  switch(cVar23) {
  case 'A':
  case 'E':
  case 'F':
  case 'G':
  case 'a':
  case 'e':
  case 'f':
  case 'g':
    if (((*auStack424 == '\"') || (*auStack424 == '\'')) &&
       (bVar5 = ((char *)auStack424)[1], bVar5 != 0)) {
      _auStack408 = (float10)CONCAT82(stack0xfffffffffffffe6a,(ushort)bVar5);
      if ((((char *)auStack424)[2] != '\0') && (posixly_correct == false)) {
        _auStack408 = (float10)(ushort)bVar5;
        uVar11 = func_0x001014f0(0,&UNK_00108448,5);
        func_0x001016b0(0,0,uVar11,(long)auStack424 + 2);
      }
    }
    else {
      puVar14 = (undefined4 *)func_0x00101450();
      *puVar14 = 0;
      cl_strtold(auStack424,auStack336);
      _auStack424 = in_ST0;
      verify_numeric(auStack424);
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
    }
    in_ST7 = in_ST6;
    if (cStack354 == '\0') {
      if (cStack353 == '\0') {
        xprintf(uVar10);
      }
      else {
        xprintf(uVar10);
      }
    }
    else {
      if (cStack353 == '\0') {
        xprintf(uVar10,(ulong)uStack364);
      }
      else {
        xprintf(uVar10,(ulong)uStack364,(ulong)uStack360);
      }
    }
  default:
    goto code_r0x00101f78;
  case 'X':
  case 'o':
  case 'u':
  case 'x':
    if (((*auStack424 == '\"') || (*auStack424 == '\'')) &&
       (pcVar13 = (char *)(ulong)(byte)((char *)auStack424)[1], ((char *)auStack424)[1] != 0)) {
      pcVar1 = (char *)auStack424 + 2;
      auStack424 = (byte *)pcVar13;
      if ((*pcVar1 != '\0') && (posixly_correct == false)) {
        uVar11 = func_0x001014f0(0,&UNK_00108448,5);
        func_0x001016b0(0,0,uVar11,(long)auStack424 + 2);
        auStack424 = (byte *)pcVar13;
      }
    }
    else {
      puVar14 = (undefined4 *)func_0x00101450();
      *puVar14 = 0;
      pcVar13 = (char *)func_0x00101590(auStack424,auStack336,0,0);
      verify_numeric(auStack424);
      auStack424 = (byte *)pcVar13;
    }
    if (cStack354 == '\0') {
      if (cStack353 == '\0') {
        xprintf(uVar10);
      }
      else {
        xprintf(uVar10,(ulong)uStack360,auStack424);
      }
      goto code_r0x00101f78;
    }
    if (cStack353 == '\0') {
      xprintf(uVar10,(ulong)uStack364,auStack424);
      goto code_r0x00101f78;
    }
    break;
  case 'c':
    if (cStack354 == '\0') {
      xprintf(uVar10);
    }
    else {
      xprintf(uVar10);
    }
    goto code_r0x00101f78;
  case 'd':
  case 'i':
    auStack424 = (byte *)vstrtoimax(auStack424);
    if (cStack354 == '\0') {
      if (cStack353 == '\0') {
        xprintf(uVar10);
      }
      else {
        xprintf(uVar10,(ulong)uStack360,auStack424);
      }
      goto code_r0x00101f78;
    }
    if (cStack353 == '\0') {
      xprintf(uVar10,(ulong)uStack364,auStack424);
      goto code_r0x00101f78;
    }
    break;
  case 's':
    if (cStack354 == '\0') {
      if (cStack353 == '\0') {
        xprintf(uVar10);
      }
      else {
        xprintf(uVar10,(ulong)uStack360,auStack424);
      }
      goto code_r0x00101f78;
    }
    if (cStack353 == '\0') {
      xprintf(uVar10,(ulong)uStack364,auStack424);
      goto code_r0x00101f78;
    }
  }
  xprintf(uVar10,(ulong)uStack364,(ulong)uStack360,auStack424);
code_r0x00101f78:
  func_0x00101430(uVar10);
  pbVar19 = uStack432;
code_r0x0010188c:
  bVar5 = pbVar17[1];
  pbVar26 = pbVar19;
joined_r0x001018cf:
  if (bVar5 == 0) goto code_r0x001018d1;
  goto code_r0x00101894;
code_r0x001018d1:
  iVar7 = iStack368 - iVar6;
  ppbStack392 = ppbStack392 + iVar7;
  iStack368 = iVar6;
  if ((iVar7 < 1) || (iVar6 < 1)) goto code_r0x001018fe;
  goto code_r0x00101840;
}