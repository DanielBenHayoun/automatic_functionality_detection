
undefined8 printf_parse(byte *param_1,ulong *param_2,byte **param_3)

{
  ulong *puVar1;
  byte **ppbVar2;
  byte **ppbVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  ulong *puVar14;
  byte **ppbVar15;
  byte **ppbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte bVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  bool bVar24;
  byte *pbStack120;
  byte *pbStack112;
  byte *pbStack104;
  
  puVar1 = param_2 + 4;
  ppbVar2 = param_3 + 2;
  uVar9 = 0;
  pbVar22 = (byte *)0x7;
  *param_2 = 0;
  *(ulong **)(param_2 + 1) = puVar1;
  pbVar21 = (byte *)0xffffffffffffffff;
  *param_3 = (byte *)0x0;
  *(byte ***)(param_3 + 1) = ppbVar2;
  pbStack112 = (byte *)0x0;
  pbStack120 = (byte *)0x0;
  pbStack104 = (byte *)0x0;
  puVar14 = puVar1;
  uVar23 = 7;
code_r0x0011093b:
  do {
    pbVar18 = param_1;
    if (*pbVar18 == 0) {
      *(byte **)(puVar14 + uVar9 * 0xb) = pbVar18;
      *(byte **)(param_2 + 2) = pbStack120;
      *(byte **)(param_2 + 3) = pbStack112;
      return 0;
    }
    param_1 = pbVar18 + 1;
  } while (*pbVar18 != 0x25);
  ppbVar3 = (byte **)(puVar14 + uVar9 * 0xb);
  *ppbVar3 = pbVar18;
  *(undefined4 *)(ppbVar3 + 2) = 0;
  ppbVar3[3] = (byte *)0x0;
  ppbVar3[4] = (byte *)0x0;
  ppbVar3[5] = (byte *)0xffffffffffffffff;
  ppbVar3[6] = (byte *)0x0;
  ppbVar3[7] = (byte *)0x0;
  ppbVar3[8] = (byte *)0xffffffffffffffff;
  ppbVar3[10] = (byte *)0xffffffffffffffff;
  bVar19 = pbVar18[1];
  pbVar18 = param_1;
  pbVar12 = pbVar21;
  if (9 < (byte)(bVar19 - 0x30)) {
code_r0x00110a0e:
    do {
      pbVar18 = param_1 + 1;
      if (bVar19 == 0x27) {
        *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 1;
      }
      else {
        if (bVar19 == 0x2d) {
          *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 2;
        }
        else {
          if (bVar19 == 0x2b) {
            *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 4;
          }
          else {
            if (bVar19 == 0x20) {
              *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 8;
            }
            else {
              if (bVar19 == 0x23) {
                *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x10;
              }
              else {
                if (bVar19 == 0x30) {
                  *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x20;
                }
                else {
                  if (bVar19 != 0x49) goto code_r0x00110a70;
                  *(uint *)(ppbVar3 + 2) = *(uint *)(ppbVar3 + 2) | 0x40;
                }
              }
            }
          }
        }
      }
      bVar19 = *pbVar18;
      param_1 = pbVar18;
    } while( true );
  }
  do {
    bVar4 = pbVar18[1];
    pbVar18 = pbVar18 + 1;
  } while ((byte)(bVar4 - 0x30) < 10);
  if (bVar4 != 0x24) goto code_r0x00110a0e;
  pbVar12 = (byte *)0x0;
  do {
    pbVar18 = param_1;
    pbVar11 = pbVar21;
    if (pbVar12 < (byte *)0x199999999999999a) {
      pbVar11 = (byte *)((long)pbVar12 * 10);
    }
    while( true ) {
      iVar7 = (int)(char)bVar19;
      pbVar12 = pbVar11 + (long)(iVar7 + -0x30);
      bVar19 = pbVar18[1];
      param_1 = pbVar18 + 1;
      if (CARRY8((long)(iVar7 + -0x30),(ulong)pbVar11) == false) break;
      pbVar18 = param_1;
      pbVar11 = pbVar21;
      if (9 < (byte)(bVar19 - 0x30)) goto code_r0x0011110b;
    }
  } while ((byte)(bVar19 - 0x30) < 10);
  pbVar12 = pbVar12 + -1;
  if (pbVar12 < (byte *)0xfffffffffffffffe) {
    bVar19 = pbVar18[2];
    param_1 = pbVar18 + 2;
    goto code_r0x00110a0e;
  }
  goto code_r0x0011110b;
code_r0x00110a70:
  if (bVar19 == 0x2a) {
    ppbVar3[3] = param_1;
    ppbVar3[4] = pbVar18;
    pbVar11 = (byte *)0x1;
    if (pbStack120 != (byte *)0x0) {
      pbVar11 = pbStack120;
    }
    bVar19 = param_1[1];
    pbVar20 = pbVar18;
    if ((byte)(bVar19 - 0x30) < 10) {
      do {
        bVar4 = pbVar20[1];
        pbVar20 = pbVar20 + 1;
      } while ((byte)(bVar4 - 0x30) < 10);
      if (bVar4 != 0x24) goto code_r0x00110c5a;
      pbVar20 = (byte *)0x0;
      do {
        pbVar10 = pbVar21;
        pbVar17 = pbVar18;
        if (pbVar20 < (byte *)0x199999999999999a) {
          pbVar10 = (byte *)((long)pbVar20 * 10);
        }
        while( true ) {
          iVar7 = (int)(char)bVar19;
          pbVar20 = pbVar10 + (long)(iVar7 + -0x30);
          bVar19 = pbVar17[1];
          pbVar18 = pbVar17 + 1;
          if (CARRY8((long)(iVar7 + -0x30),(ulong)pbVar10) == false) break;
          pbVar10 = pbVar21;
          pbVar17 = pbVar18;
          if (9 < (byte)(bVar19 - 0x30)) goto code_r0x0011110b;
        }
      } while ((byte)(bVar19 - 0x30) < 10);
      pbVar20 = pbVar20 + -1;
      if ((byte *)0xfffffffffffffffd < pbVar20) goto code_r0x0011110b;
      ppbVar3[5] = pbVar20;
      pbVar18 = pbVar17 + 2;
    }
    else {
code_r0x00110c5a:
      bVar24 = pbStack104 == (byte *)0xffffffffffffffff;
      ppbVar3[5] = pbStack104;
      pbVar20 = pbStack104;
      pbStack104 = pbStack104 + 1;
      if (bVar24) goto code_r0x0011110b;
    }
    ppbVar16 = (byte **)param_3[1];
    if (pbVar20 < pbVar22) {
      pbVar10 = *param_3;
code_r0x00110d07:
      ppbVar15 = ppbVar16 + (long)pbVar10 * 4;
      if (pbVar10 <= pbVar20) {
        do {
          pbVar10 = pbVar10 + 1;
          *(undefined4 *)ppbVar15 = 0;
          ppbVar15 = ppbVar15 + 4;
        } while (pbVar10 <= pbVar20);
        *param_3 = pbVar10;
      }
      iVar7 = *(int *)(ppbVar16 + (long)pbVar20 * 4);
      param_1 = pbVar18;
      pbStack120 = pbVar11;
      pbVar11 = pbStack104;
      if (iVar7 == 0) {
        *(undefined4 *)(ppbVar16 + (long)pbVar20 * 4) = 5;
        bVar19 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      }
      else {
        if (iVar7 != 5) goto code_r0x0011110f;
        bVar19 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      }
      goto joined_r0x00110d59;
    }
    pbVar22 = (byte *)((long)pbVar22 * 2);
    if (pbVar22 <= pbVar20) {
      pbVar22 = pbVar20 + 1;
    }
    if (pbVar22 < (byte *)0x800000000000000) {
      if (ppbVar2 == ppbVar16) {
        ppbVar15 = (byte **)func_0x001029e0();
        ppbVar16 = ppbVar2;
      }
      else {
        ppbVar15 = (byte **)func_0x00102a40();
        ppbVar16 = (byte **)param_3[1];
      }
      if (ppbVar15 != (byte **)0x0) {
        pbVar10 = *param_3;
        if (ppbVar2 == ppbVar16) {
          ppbVar15 = (byte **)func_0x00102970(ppbVar15,ppbVar2,(long)pbVar10 << 5);
          pbVar10 = *param_3;
        }
        *(byte ***)(param_3 + 1) = ppbVar15;
        ppbVar16 = ppbVar15;
        goto code_r0x00110d07;
      }
    }
  }
  else {
    pbVar11 = pbStack104;
    if ((byte)(bVar19 - 0x30) < 10) {
      ppbVar3[3] = param_1;
      pbVar20 = param_1;
      pbVar10 = pbStack120;
      if ((byte)(*param_1 - 0x30) < 10) {
        while (pbVar10 = pbVar18, (byte)(*pbVar10 - 0x30) < 10) {
          pbVar18 = pbVar10 + 1;
          pbVar20 = pbVar10;
        }
        pbVar18 = pbVar20 + 2;
        lVar5 = -(long)param_1;
        param_1 = pbVar10;
        pbVar10 = pbVar10 + lVar5;
        if (pbVar10 + lVar5 <= pbStack120) {
          pbVar10 = pbStack120;
        }
      }
      pbStack120 = pbVar10;
      ppbVar3[4] = param_1;
      bVar19 = *param_1;
    }
joined_r0x00110d59:
    pbVar20 = param_1;
    pbVar10 = pbStack112;
    pbStack104 = pbVar11;
    if (bVar19 != 0x2e) goto code_r0x00110a8e;
    bVar19 = param_1[1];
    ppbVar3[6] = param_1;
    if (bVar19 != 0x2a) {
      bVar19 = param_1[1];
      pbVar20 = pbVar18;
      while ((byte)(bVar19 - 0x30) < 10) {
        pbVar20 = pbVar20 + 1;
        bVar19 = *pbVar20;
      }
      ppbVar3[7] = pbVar20;
      bVar19 = *pbVar20;
      pbVar10 = pbVar20 + -(long)param_1;
      if (pbVar20 + -(long)param_1 <= pbStack112) {
        pbVar10 = pbStack112;
      }
      goto code_r0x00110a8e;
    }
    pbVar20 = param_1 + 2;
    ppbVar3[7] = pbVar20;
    pbVar10 = (byte *)0x2;
    if ((byte *)0x1 < pbStack112) {
      pbVar10 = pbStack112;
    }
    iVar7 = (int)(char)param_1[2];
    pbVar18 = pbVar20;
    if ((byte)(param_1[2] - 0x30) < 10) {
      do {
        bVar19 = pbVar18[1];
        pbVar18 = pbVar18 + 1;
      } while ((byte)(bVar19 - 0x30) < 10);
      if (bVar19 != 0x24) goto code_r0x00110d9e;
      pbVar18 = (byte *)0x0;
      do {
        pbVar11 = pbVar21;
        pbVar17 = pbVar20;
        if (pbVar18 < (byte *)0x199999999999999a) {
          pbVar11 = (byte *)((long)pbVar18 * 10);
        }
        while( true ) {
          iVar8 = iVar7 + -0x30;
          pbVar18 = pbVar11 + (long)iVar8;
          iVar7 = (int)(char)pbVar17[1];
          pbVar20 = pbVar17 + 1;
          bVar19 = pbVar17[1] - 0x30;
          if (CARRY8((ulong)pbVar11,(long)iVar8) == false) break;
          pbVar11 = pbVar21;
          pbVar17 = pbVar20;
          if (9 < bVar19) goto code_r0x0011110b;
        }
      } while (bVar19 < 10);
      pbVar18 = pbVar18 + -1;
      if ((byte *)0xfffffffffffffffd < pbVar18) goto code_r0x0011110b;
      ppbVar3[8] = pbVar18;
      pbVar20 = pbVar17 + 2;
    }
    else {
code_r0x00110d9e:
      pbVar18 = ppbVar3[8];
      if (ppbVar3[8] == (byte *)0xffffffffffffffff) {
        pbStack104 = pbVar11 + 1;
        ppbVar3[8] = pbVar11;
        pbVar18 = pbVar11;
        if (pbVar11 == (byte *)0xffffffffffffffff) goto code_r0x0011110b;
      }
    }
    ppbVar16 = (byte **)param_3[1];
    if (pbVar18 < pbVar22) {
      pbVar11 = *param_3;
code_r0x00110dbd:
      ppbVar15 = ppbVar16 + (long)pbVar11 * 4;
      if (pbVar11 <= pbVar18) {
        do {
          pbVar11 = pbVar11 + 1;
          *(undefined4 *)ppbVar15 = 0;
          ppbVar15 = ppbVar15 + 4;
        } while (pbVar11 <= pbVar18);
        *param_3 = pbVar11;
      }
      iVar7 = *(int *)(ppbVar16 + (long)pbVar18 * 4);
      if (iVar7 == 0) {
        *(undefined4 *)(ppbVar16 + (long)pbVar18 * 4) = 5;
        bVar19 = *pbVar20;
code_r0x00110a8e:
        pbStack112 = pbVar10;
        uVar9 = 0;
        do {
          pbVar20 = pbVar20 + 1;
          uVar6 = (uint)uVar9;
          if (bVar19 == 0x68) {
            uVar9 = (ulong)(uVar6 | 1 << ((byte)uVar9 & 1));
          }
          else {
            if (bVar19 == 0x4c) {
              uVar9 = (ulong)(uVar6 | 4);
            }
            else {
              if ((((bVar19 != 0x6c) && (bVar19 != 0x6a)) && ((bVar19 & 0xdf) != 0x5a)) &&
                 (bVar19 != 0x74)) goto code_r0x00110af4;
              uVar9 = (ulong)(uVar6 + 8);
            }
          }
          bVar19 = *pbVar20;
        } while( true );
      }
      if (iVar7 == 5) {
        bVar19 = *pbVar20;
        goto code_r0x00110a8e;
      }
      goto code_r0x0011110f;
    }
    pbVar22 = (byte *)((long)pbVar22 * 2);
    if (pbVar22 <= pbVar18) {
      pbVar22 = pbVar18 + 1;
    }
    if (pbVar22 < (byte *)0x800000000000000) {
      if (ppbVar2 == ppbVar16) {
        ppbVar15 = (byte **)func_0x001029e0((long)pbVar22 << 5,(long)pbVar22 << 5);
        ppbVar16 = ppbVar2;
      }
      else {
        ppbVar15 = (byte **)func_0x00102a40(ppbVar16);
        ppbVar16 = (byte **)param_3[1];
      }
      if (ppbVar15 != (byte **)0x0) {
        pbVar11 = *param_3;
        if (ppbVar2 == ppbVar16) {
          ppbVar15 = (byte **)func_0x00102970(ppbVar15,ppbVar2,(long)pbVar11 << 5);
          pbVar11 = *param_3;
        }
        *(byte ***)(param_3 + 1) = ppbVar15;
        ppbVar16 = ppbVar15;
        goto code_r0x00110dbd;
      }
    }
  }
code_r0x0011154b:
  if (ppbVar2 != ppbVar16) {
code_r0x001113b4:
    func_0x00102750(ppbVar16);
  }
  goto code_r0x001113bc;
code_r0x00110af4:
  switch(bVar19) {
  case 0x25:
    goto code_r0x00110b7b;
  default:
    goto code_r0x0011110b;
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    iVar7 = 0xc;
    if ((int)uVar6 < 0x10) {
      iVar7 = (uint)((uVar9 & 4) != 0) + 0xb;
    }
    break;
  case 0x43:
    iVar7 = 0xe;
    bVar19 = 99;
    break;
  case 0x53:
    iVar7 = 0x10;
    bVar19 = 0x73;
    break;
  case 0x58:
  case 0x6f:
  case 0x75:
  case 0x78:
    iVar7 = 10;
    if (((((int)uVar6 < 0x10) && ((uVar9 & 4) == 0)) && (iVar7 = 8, (int)uVar6 < 8)) &&
       (iVar7 = 2, (uVar9 & 2) == 0)) {
      iVar7 = (-(uint)((uVar9 & 1) == 0) & 2) + 4;
    }
    break;
  case 99:
    iVar7 = (uint)(7 < (int)uVar6) + 0xd;
    break;
  case 100:
  case 0x69:
    iVar7 = 9;
    if ((((int)uVar6 < 0x10) && ((uVar9 & 4) == 0)) &&
       ((iVar7 = 7, (int)uVar6 < 8 && (iVar7 = 1, (uVar9 & 2) == 0)))) {
      iVar7 = (-(uint)((uVar9 & 1) == 0) & 2) + 3;
    }
    break;
  case 0x6e:
    iVar7 = 0x16;
    if ((((int)uVar6 < 0x10) && ((uVar9 & 4) == 0)) &&
       ((iVar7 = 0x15, (int)uVar6 < 8 && (iVar7 = 0x12, (uVar9 & 2) == 0)))) {
      iVar7 = (uint)((uVar9 & 1) == 0) + 0x13;
    }
    break;
  case 0x70:
    iVar7 = 0x11;
    break;
  case 0x73:
    iVar7 = (uint)(7 < (int)uVar6) + 0xf;
  }
  if (pbVar12 == (byte *)0xffffffffffffffff) {
    bVar24 = pbStack104 == (byte *)0xffffffffffffffff;
    ppbVar3[10] = pbStack104;
    pbVar12 = pbStack104;
    pbStack104 = pbStack104 + 1;
    if (bVar24) {
code_r0x0011110b:
      ppbVar16 = (byte **)param_3[1];
      goto code_r0x0011110f;
    }
  }
  else {
    ppbVar3[10] = pbVar12;
  }
  ppbVar16 = (byte **)param_3[1];
  if (pbVar12 < pbVar22) {
code_r0x00110b34:
    pbVar18 = *param_3;
    ppbVar15 = ppbVar16 + (long)pbVar18 * 4;
    if (pbVar18 <= pbVar12) {
      do {
        pbVar18 = pbVar18 + 1;
        *(undefined4 *)ppbVar15 = 0;
        ppbVar15 = ppbVar15 + 4;
      } while (pbVar18 <= pbVar12);
      *param_3 = pbVar18;
    }
    iVar8 = *(int *)(ppbVar16 + (long)pbVar12 * 4);
    if (iVar8 == 0) {
      *(int *)(ppbVar16 + (long)pbVar12 * 4) = iVar7;
    }
    else {
      if (iVar8 != iVar7) {
code_r0x0011110f:
        if (ppbVar2 != ppbVar16) {
          func_0x00102750(ppbVar16);
        }
        if (puVar1 != (ulong *)param_2[1]) {
          func_0x00102750();
        }
        puVar13 = (undefined4 *)func_0x00102780();
        *puVar13 = 0x16;
        return 0xffffffff;
      }
    }
code_r0x00110b7b:
    *(byte *)(ppbVar3 + 9) = bVar19;
    uVar9 = *param_2;
    ppbVar3[1] = pbVar20;
    uVar9 = uVar9 + 1;
    *param_2 = uVar9;
    param_1 = pbVar20;
    if (uVar9 < uVar23) {
      puVar14 = (ulong *)param_2[1];
      goto code_r0x0011093b;
    }
    if (((long)uVar23 < 0) || (0x2e8ba2e8ba2e8ba < uVar23 * 2)) {
code_r0x00111547:
      ppbVar16 = (byte **)param_3[1];
      goto code_r0x0011154b;
    }
    if (puVar1 == (ulong *)param_2[1]) {
      puVar14 = (ulong *)func_0x001029e0(uVar23 * 0xb0,uVar23 * 0xb0);
      if (puVar14 == (ulong *)0x0) {
        ppbVar16 = (byte **)param_3[1];
        if (ppbVar2 == ppbVar16) goto code_r0x001113cc;
        goto code_r0x001113b4;
      }
    }
    else {
      puVar14 = (ulong *)func_0x00102a40();
      if (puVar14 == (ulong *)0x0) goto code_r0x00111547;
      uVar9 = *param_2;
      if (puVar1 != (ulong *)param_2[1]) goto code_r0x00110c17;
    }
    puVar14 = (ulong *)func_0x00102970(puVar14,puVar1,uVar9 * 0x58,puVar14);
    uVar9 = *param_2;
code_r0x00110c17:
    *(ulong **)(param_2 + 1) = puVar14;
    uVar23 = uVar23 * 2;
    goto code_r0x0011093b;
  }
  pbVar22 = (byte *)((long)pbVar22 * 2);
  if (pbVar22 <= pbVar12) {
    pbVar22 = pbVar12 + 1;
  }
  if ((byte *)0x7ffffffffffffff < pbVar22) goto code_r0x0011154b;
  if (ppbVar2 != ppbVar16) {
    ppbVar16 = (byte **)func_0x00102a40(ppbVar16);
    if (ppbVar16 != (byte **)0x0) {
      if (ppbVar2 == (byte **)param_3[1]) goto code_r0x00111259;
      goto code_r0x001111ce;
    }
    goto code_r0x00111547;
  }
  ppbVar16 = (byte **)func_0x001029e0((long)pbVar22 << 5,(long)pbVar22 << 5);
  if (ppbVar16 != (byte **)0x0) {
code_r0x00111259:
    ppbVar16 = (byte **)func_0x00102970(ppbVar16,ppbVar2,(long)*param_3 << 5,ppbVar16);
code_r0x001111ce:
    *(byte ***)(param_3 + 1) = ppbVar16;
    goto code_r0x00110b34;
  }
code_r0x001113bc:
  if (puVar1 != (ulong *)param_2[1]) {
    func_0x00102750();
  }
code_r0x001113cc:
  puVar13 = (undefined4 *)func_0x00102780();
  *puVar13 = 0xc;
  return 0xffffffff;
}

