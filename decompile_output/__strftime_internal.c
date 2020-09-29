
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

ulong __strftime_internal(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,
                         int param_6,undefined8 param_7,undefined8 param_8,uint param_9)

{
  byte *pbVar1;
  undefined auVar2 [16];
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  char cVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *unaff_RBX;
  long lVar22;
  char *pcVar23;
  uint uVar24;
  uint *in_R11;
  int iVar25;
  char *pcVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  ulong uVar30;
  long in_FS_OFFSET;
  uint *puStack1248;
  char *pcStack1216;
  uint uStack1208;
  uint uStack1204;
  uint *puStack1200;
  uint *puStack1192;
  uint uStack1168;
  undefined4 uStack1160;
  undefined4 uStack1156;
  undefined4 uStack1152;
  undefined4 uStack1148;
  undefined4 uStack1144;
  undefined4 uStack1140;
  undefined4 uStack1136;
  undefined4 uStack1132;
  undefined4 uStack1128;
  undefined4 uStack1124;
  undefined4 uStack1120;
  undefined4 uStack1116;
  undefined8 uStack1112;
  undefined2 uStack1101;
  undefined uStack1099;
  undefined auStack1098 [3];
  undefined auStack1095 [21];
  char acStack1074 [1010];
  ulong uStack64;
  
  pcVar26 = *(char **)(param_3 + 0xc);
  uVar28 = param_3[2];
  bVar15 = (byte)param_4;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (pcVar26 == (char *)0x0) {
    pcVar26 = "";
  }
  if ((int)uVar28 < 0xd) {
    if (uVar28 == 0) {
      uVar28 = 0xc;
    }
  }
  else {
    uVar28 = uVar28 - 0xc;
  }
  bVar7 = *(byte *)param_2;
  uVar30 = 0;
  if (bVar7 == 0) goto code_r0x001029c2;
  unaff_RBX = param_2;
  param_2 = (uint *)(long)param_6;
  pcStack1216 = pcVar26;
  uStack1208 = uVar28;
  if (bVar7 == 0x25) goto code_r0x00102a2b;
code_r0x0010299b:
  puVar29 = (uint *)0x0;
  if (-1 < (int)param_2) {
    puVar29 = param_2;
  }
  if (puVar29 == (uint *)0x0) {
    puVar29 = (uint *)0x1;
  }
  if (puVar29 < (uint *)~uVar30) {
    if (param_1 == (uint *)0x0) goto code_r0x00102a0a;
    if ((int)param_2 < 2) goto code_r0x00102a02;
    lVar12 = 0;
    do {
      lVar12 = lVar12 + 1;
      func_0x00101a10(0x20,param_1);
      if ((long)param_2 + -1 == lVar12) goto code_r0x00102a02;
    } while( true );
  }
code_r0x001029bf:
  uVar30 = 0;
code_r0x001029c2:
  puVar29 = (uint *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (puVar29 == (uint *)0x0) {
    return uVar30;
  }
  func_0x00101980();
code_r0x001044fd:
  uVar28 = (int)param_4 + 100;
joined_r0x00104505:
  param_4 = (uint *)(ulong)uVar28;
joined_r0x00104505:
  if ((int)puStack1248 == 0) {
    if (param_5 == 0x2b) {
      uVar13 = 1;
      uVar19 = 0;
      uStack1168 = 2;
      goto code_r0x00104047;
    }
    puStack1248 = (uint *)(ulong)param_5;
    bVar5 = false;
    uVar13 = 1;
    uVar19 = 0;
    uStack1168 = 2;
    goto code_r0x0010354c;
  }
  uVar13 = 1;
  uVar19 = 0;
code_r0x00103539:
  if ((int)puStack1248 == 0x2b) goto code_r0x001044dd;
code_r0x00103544:
  bVar5 = false;
  uStack1168 = 2;
code_r0x0010354c:
  uVar28 = 0;
code_r0x00102ee5:
  cVar18 = (char)uVar19;
  if (((int)in_R11 != 0x4f) || ((char)uVar13 == '\0')) {
    if (cVar18 == '\0') goto code_r0x001031e8;
    param_4 = (uint *)(ulong)(uint)-(int)param_4;
    goto code_r0x001031e8;
  }
  puVar10 = (uint *)((ulong)puVar29 & 0xffffffff);
code_r0x00102efa:
  bVar7 = 0;
code_r0x00102f0a:
  uStack1099 = SUB81(in_R11,0);
  puVar11 = auStack1098;
  puVar29 = (uint *)(ulong)uStack1168;
code_r0x00102cd2:
  uStack1101 = 0x2520;
  *puVar11 = (char)puVar10;
  puVar11[1] = 0;
  iVar25 = (int)param_2;
  param_4 = param_3;
  in_R11 = puVar29;
  lVar12 = func_0x00101b60();
  puVar21 = unaff_RBX;
  if (lVar12 != 0) {
    param_2 = (uint *)(long)iVar25;
    puVar10 = (uint *)(lVar12 - 1);
    puVar14 = (uint *)0x0;
    if (-1 < iVar25) {
      puVar14 = param_2;
    }
    puVar27 = puVar14;
    if (puVar14 <= puVar10) {
      puVar27 = puVar10;
    }
    if ((uint *)~uVar30 <= puVar27) goto code_r0x001029bf;
    if (param_1 != (uint *)0x0) {
      if (((int)puVar29 == 0) && (puVar10 < puVar14)) {
        puVar14 = (uint *)(long)iVar25;
        if (((int)puStack1248 == 0x30) || ((int)puStack1248 == 0x2b)) {
          if (puVar14 != puVar10) {
            puVar20 = (uint *)0x0;
            do {
              puVar20 = (uint *)((long)puVar20 + 1);
              func_0x00101a10(0x30,param_1);
              puStack1248 = unaff_RBX;
            } while ((uint *)((long)puVar14 - (long)puVar10) != puVar20);
          }
        }
        else {
          puVar20 = (uint *)0x0;
          if (puVar14 != puVar10) {
            do {
              puVar20 = (uint *)((long)puVar20 + 1);
              func_0x00101a10(0x20,param_1);
              puStack1248 = unaff_RBX;
            } while ((uint *)((long)puVar14 - (long)puVar10) != puVar20);
          }
        }
      }
      if (bVar7 == 0) {
        if ((byte)uStack1204 == '\0') {
          param_4 = param_1;
          func_0x00101bf0(auStack1095,puVar10,1);
          in_R11 = puVar29;
        }
        else {
          fwrite_uppcase(param_1,auStack1095,puVar10);
          in_R11 = puVar29;
        }
      }
      else {
        fwrite_lowcase(param_1,auStack1095,puVar10);
        in_R11 = puVar29;
      }
    }
    uVar30 = uVar30 + (long)puVar27;
  }
code_r0x00102a10:
  unaff_RBX = (uint *)((long)puVar21 + 1);
  param_2 = (uint *)0xffffffffffffffff;
  if (*(byte *)((long)puVar21 + 1) == 0) goto code_r0x001029c2;
  if (*(byte *)((long)puVar21 + 1) != 0x25) goto code_r0x0010299b;
code_r0x00102a2b:
  bVar7 = 0;
  puStack1248 = (uint *)0x0;
  uStack1204 = (uint)bVar15;
  while( true ) {
    puVar14 = puStack1248;
    unaff_RBX = (uint *)((long)unaff_RBX + 1);
    uVar28 = SEXT14((char)*(byte *)unaff_RBX);
    in_R11 = (uint *)(ulong)uVar28;
    param_4 = (uint *)(ulong)(uVar28 - 0x23);
    puVar10 = (uint *)(ulong)uVar28;
    bVar16 = (byte)(uVar28 - 0x23);
    if (0x3c < bVar16) break;
    uVar19 = 1 << (bVar16 & 0x3f);
    if ((uVar19 & 0x1000000000002500) == 0) {
      if (bVar16 == 0) {
        bVar7 = 1;
      }
      else {
        if ((uVar19 & 0x800000000000000) == 0) break;
        uStack1204 = 1;
      }
    }
    else {
      puStack1248 = (uint *)(ulong)uVar28;
    }
  }
  if (uVar28 - 0x30 < 10) {
    param_2 = (uint *)0x0;
    do {
      uVar28 = SEXT14((char)*(byte *)((long)unaff_RBX + 1));
      in_R11 = (uint *)(ulong)uVar28;
      iVar25 = (int)param_2;
      param_4 = (uint *)((long)unaff_RBX + 1);
      puVar10 = (uint *)(ulong)uVar28;
      uVar28 = uVar28 - 0x30;
      if (iVar25 < 0xccccccd) {
        if ((iVar25 == 0xccccccc) && ('7' < (char)*(byte *)unaff_RBX)) goto code_r0x00102c65;
        param_2 = (uint *)(ulong)(uint)((int)(char)*(byte *)unaff_RBX + -0x30 + iVar25 * 10);
        unaff_RBX = param_4;
      }
      else {
code_r0x00102c65:
        if (9 < uVar28) {
          param_2 = (uint *)0x7fffffff;
          unaff_RBX = param_4;
          break;
        }
        uVar28 = SEXT14((char)*(byte *)((long)unaff_RBX + 2));
        in_R11 = (uint *)(ulong)uVar28;
        param_2 = (uint *)0x7fffffff;
        unaff_RBX = (uint *)((long)unaff_RBX + 2);
        puVar10 = (uint *)(ulong)uVar28;
        uVar28 = uVar28 - 0x30;
      }
    } while (uVar28 < 10);
  }
  if (((char)puVar10 == 'E') || ((char)puVar10 == 'O')) {
    pbVar1 = (byte *)((long)unaff_RBX + 1);
    puVar29 = (uint *)(ulong)(uint)(int)(char)*pbVar1;
    unaff_RBX = (uint *)((long)unaff_RBX + 1);
    puVar10 = (uint *)(ulong)(uint)(int)(char)*pbVar1;
  }
  else {
    puVar29 = in_R11;
    in_R11 = (uint *)0x0;
  }
  uStack1168 = (uint)param_2;
  iVar25 = (int)in_R11;
  puStack1200 = unaff_RBX;
  puVar21 = unaff_RBX;
  switch((ulong)puVar10 & 0xff) {
  case 0:
    bVar7 = *(byte *)((long)unaff_RBX + -1);
    puStack1200 = (uint *)((long)unaff_RBX + -1);
code_r0x001036da:
    param_4 = (uint *)(ulong)bVar7;
    uVar28 = 0;
    if (-1 < (int)uStack1168) {
      uVar28 = uStack1168;
    }
    puVar10 = (uint *)(long)(int)uVar28;
    if (bVar7 != 0x25) break;
    puVar29 = (uint *)0x1;
    if (puVar10 != (uint *)0x0) {
      puVar29 = puVar10;
    }
    puVar27 = (uint *)0x1;
    puVar21 = puStack1200;
    puVar14 = puStack1200;
    goto code_r0x00102b54;
  default:
    break;
  case 0x25:
    uVar28 = 0;
    if (-1 < (int)uStack1168) {
      uVar28 = uStack1168;
    }
    puVar10 = (uint *)(long)(int)uVar28;
    puVar29 = (uint *)0x1;
    if (puVar10 != (uint *)0x0) {
      puVar29 = puVar10;
    }
    if (iVar25 != 0) {
      puVar27 = (uint *)0x1;
      puVar14 = unaff_RBX;
      goto code_r0x00102b54;
    }
    if ((uint *)~uVar30 <= puVar29) goto code_r0x001029bf;
    if (param_1 != (uint *)0x0) {
      if (1 < (int)uStack1168) {
        if (((int)puStack1248 == 0x30) || (lVar12 = 0, (int)puStack1248 == 0x2b)) {
          lVar12 = 0;
          do {
            lVar12 = lVar12 + 1;
            func_0x00101a10(0x30,param_1);
          } while ((long)(int)uStack1168 + -1 != lVar12);
        }
        else {
          do {
            lVar12 = lVar12 + 1;
            func_0x00101a10(0x20,param_1);
          } while ((long)(int)uStack1168 + -1 != lVar12);
        }
      }
code_r0x00102a02:
      func_0x00101a10();
    }
code_r0x00102a0a:
    uVar30 = uVar30 + (long)puVar29;
    puVar21 = unaff_RBX;
    goto code_r0x00102a10;
  case 0x3a:
    bVar7 = *(byte *)((long)unaff_RBX + 1);
    puVar21 = (uint *)((long)unaff_RBX + 1);
    if (bVar7 == 0x3a) {
      lVar12 = 1;
      param_4 = (uint *)((long)unaff_RBX + 2);
      do {
        puVar21 = param_4;
        param_4 = (uint *)((long)puVar21 + 1);
        bVar7 = *(byte *)puVar21;
        lVar12 = lVar12 + 1;
      } while (bVar7 == 0x3a);
    }
    else {
      lVar12 = 1;
    }
    if (bVar7 == 0x7a) goto code_r0x001037d2;
    break;
  case 0x41:
  case 0x61:
    if (iVar25 == 0) {
      if (bVar7 != 0) {
        uStack1204._0_1_ = bVar7;
      }
      bVar7 = 0;
      puVar29 = (uint *)0x0;
      uStack1204 = (uint)(byte)uStack1204;
      puVar11 = &uStack1099;
      goto code_r0x00102cd2;
    }
    break;
  case 0x42:
    if (iVar25 != 0x45) {
      if (bVar7 != 0) {
        uStack1204 = (uint)bVar7;
        goto code_r0x00102caa;
      }
      goto code_r0x00102cad;
    }
    break;
  case 0x43:
    goto code_r0x001035f7;
  case 0x44:
    if (iVar25 == 0) {
      uVar19 = 0xffffffff;
      puStack1200 = (uint *)&UNK_00107d8a;
      goto code_r0x00102f6f;
    }
    break;
  case 0x46:
    if (iVar25 == 0) {
      in_R11 = puVar14;
      if (((int)puStack1248 == 0) && ((int)uStack1168 < 0)) {
        uVar19 = 4;
        puStack1248 = (uint *)0x2b;
        puStack1200 = (uint *)&UNK_00107d81;
      }
      else {
        uVar19 = (ulong)(uStack1168 - 6);
        if ((int)(uStack1168 - 6) < 0) {
          uVar19 = 0;
        }
        puStack1200 = (uint *)&UNK_00107d81;
      }
      goto code_r0x00102f6f;
    }
    break;
  case 0x47:
  case 0x56:
  case 0x67:
    if (iVar25 != 0x45) {
      uVar3 = param_3[5];
      uVar28 = param_3[7];
      uVar9 = param_3[6];
      iVar25 = (uVar28 - uVar9) + 0x17e;
      uVar24 = (uVar3 - 100) + ((int)uVar3 >> 0x1f & 400U);
      iVar25 = (uVar28 - iVar25) + 3 + (iVar25 / 7) * 7;
      if (iVar25 < 0) {
        uVar24 = uVar24 - 1;
        iVar25 = 0x16d;
        if (((uVar24 & 3) == 0) && (iVar25 = 0x16e, uVar24 == ((int)uVar24 / 100) * 100)) {
          iVar25 = ~-(uint)((int)uVar24 % 400 == 0) + 0x16e;
        }
        iVar8 = ((uVar28 + iVar25) - uVar9) + 0x17e;
        iVar8 = ((uVar28 + iVar25) - iVar8) + 3 + (iVar8 / 7) * 7;
        iVar17 = -1;
      }
      else {
        iVar8 = 0x16d;
        if (((uVar24 & 3) == 0) && (iVar8 = 0x16e, uVar24 == ((int)uVar24 / 100) * 100)) {
          iVar8 = (uint)(uVar24 == ((int)uVar24 / 400) * 400) + 0x16d;
        }
        iVar17 = ((uVar28 - iVar8) - uVar9) + 0x17e;
        iVar8 = ((uVar28 - iVar8) - iVar17) + 3 + (iVar17 / 7) * 7;
        iVar17 = 1;
        if (iVar8 < 0) {
          iVar17 = 0;
          iVar8 = iVar25;
        }
      }
      if ((char)puVar10 == 'G') {
        uVar28 = uVar3 + 0x76c + iVar17;
        bVar5 = (int)uVar3 < -0x76c - iVar17;
        bVar4 = -0x76c - iVar17 <= (int)uVar3;
joined_r0x0010392f:
        uVar19 = (ulong)bVar5;
        param_4 = (uint *)(ulong)uVar28;
        uVar13 = (ulong)bVar4;
        if ((int)puStack1248 == 0) {
          if (param_5 != 0x2b) {
            puStack1248 = (uint *)(ulong)param_5;
            bVar5 = false;
            uStack1168 = 4;
            goto code_r0x0010354c;
          }
        }
        else {
          if ((int)puStack1248 != 0x2b) {
            bVar5 = false;
            uStack1168 = 4;
            goto code_r0x0010354c;
          }
        }
        uStack1168 = 4;
        uVar28 = 9999;
        goto code_r0x00104031;
      }
      if ((char)puVar10 == 'g') {
        uVar28 = ((int)uVar3 % 100 + iVar17) % 100;
        param_4 = (uint *)(ulong)uVar28;
        if (-1 < (int)uVar28) goto joined_r0x00104505;
        if (-0x76c - iVar17 <= (int)uVar3) goto code_r0x001044fd;
        uVar28 = -uVar28;
        goto joined_r0x00104505;
      }
      uStack1168 = 2;
      param_4 = (uint *)(ulong)(iVar8 / 7 + 1);
code_r0x00102ed0:
      uVar28 = 0;
      bVar5 = false;
      uVar19 = (ulong)param_4 >> 0x1f;
      uVar13 = (ulong)(~(uint)param_4 >> 0x1f);
      goto code_r0x00102ee5;
    }
    break;
  case 0x48:
    if (iVar25 != 0x45) {
      uStack1168 = 2;
      param_4 = (uint *)(ulong)param_3[2];
      goto code_r0x00102ed0;
    }
    break;
  case 0x49:
    if (iVar25 != 0x45) {
      param_4 = (uint *)(ulong)uStack1208;
      uStack1168 = 2;
      goto code_r0x00102ed0;
    }
    break;
  case 0x4d:
    if (iVar25 != 0x45) {
      uStack1168 = 2;
      param_4 = (uint *)(ulong)param_3[1];
      goto code_r0x00102ed0;
    }
    break;
  case 0x4e:
    if (iVar25 != 0x45) {
      if (uStack1168 == 0xffffffff) {
        param_4 = (uint *)(ulong)param_9;
        uStack1168 = 9;
        param_2 = (uint *)0x9;
      }
      else {
        if ((int)uStack1168 < 9) {
          param_4 = (uint *)(ulong)param_9;
          uVar19 = (ulong)param_2 & 0xffffffff;
          do {
            uVar28 = (int)uVar19 + 1;
            uVar19 = (ulong)uVar28;
            param_4 = (uint *)(ulong)(uint)((int)param_4 / 10);
          } while (uVar28 != 9);
        }
        else {
          param_4 = (uint *)(ulong)param_9;
        }
      }
      goto code_r0x00102ed0;
    }
    break;
  case 0x50:
    goto code_r0x00102f41;
  case 0x52:
    uVar19 = 0xffffffff;
    puStack1200 = (uint *)&UNK_00107d72;
    goto code_r0x00102f6f;
  case 0x53:
    if (iVar25 != 0x45) {
      uStack1168 = 2;
      param_4 = (uint *)(ulong)*param_3;
      goto code_r0x00102ed0;
    }
    break;
  case 0x54:
    uVar19 = 0xffffffff;
    puStack1200 = (uint *)&UNK_00107d78;
code_r0x00102f6f:
    puVar27 = (uint *)(ulong)(byte)uStack1204;
    puVar14 = (uint *)__strftime_internal(0,puStack1200,param_3,puVar27,puStack1248,uVar19,param_7,
                                          param_8,(ulong)param_9);
    param_2 = (uint *)(long)(int)uStack1168;
    param_4 = (uint *)~uVar30;
    puVar10 = (uint *)0x0;
    if (-1 < (int)uStack1168) {
      puVar10 = param_2;
    }
    puVar29 = puVar10;
    if (puVar10 <= puVar14) {
      puVar29 = puVar14;
    }
    if (puVar29 < param_4) {
      if (param_1 != (uint *)0x0) {
        param_4 = puVar27;
        if (puVar14 < puVar10) {
          puVar10 = (uint *)(long)(int)uStack1168;
          if (((int)puStack1248 == 0x30) || ((int)puStack1248 == 0x2b)) {
            if (puVar10 != puVar14) {
              puVar27 = (uint *)0x0;
              do {
                puVar27 = (uint *)((long)puVar27 + 1);
                func_0x00101a10(0x30,param_1);
              } while ((uint *)((long)puVar10 - (long)puVar14) != puVar27);
              goto code_r0x00103e2e;
            }
          }
          else {
            puVar27 = (uint *)0x0;
            if (puVar10 != puVar14) {
              do {
                puVar27 = (uint *)((long)puVar27 + 1);
                func_0x00101a10(0x20,param_1);
              } while ((uint *)((long)puVar10 - (long)puVar14) != puVar27);
code_r0x00103e2e:
              param_4 = (uint *)(ulong)uStack1204;
            }
          }
        }
        __strftime_internal(param_1,puStack1200,param_3);
      }
      goto code_r0x00102fdf;
    }
    goto code_r0x001029bf;
  case 0x55:
    if (iVar25 != 0x45) {
      iVar25 = (param_3[7] - param_3[6]) + 7;
      iVar8 = (int)((ulong)((long)iVar25 * -0x6db6db6d) >> 0x20);
code_r0x001033c1:
      param_4 = (uint *)(ulong)(uint)((iVar8 + iVar25 >> 2) - (iVar25 >> 0x1f));
      uStack1168 = 2;
      goto code_r0x00102ed0;
    }
    break;
  case 0x57:
    if (iVar25 != 0x45) {
      iVar25 = (((int)(param_3[6] + 6) / 7) * 7 - (param_3[6] + 6)) + 7 + param_3[7];
      iVar8 = (int)((ulong)((long)iVar25 * -0x6db6db6d) >> 0x20);
      goto code_r0x001033c1;
    }
    break;
  case 0x58:
  case 99:
  case 0x78:
    if (iVar25 != 0x4f) goto code_r0x00102caa;
    break;
  case 0x59:
    if (iVar25 == 0x45) goto code_r0x00103ea3;
    if (iVar25 != 0x4f) {
      uVar3 = param_3[5];
      uVar28 = uVar3 + 0x76c;
      bVar5 = (int)uVar3 < -0x76c;
      bVar4 = -0x76d < (int)uVar3;
      goto joined_r0x0010392f;
    }
    break;
  case 0x5a:
    if (bVar7 != 0) {
      uStack1204._0_1_ = 0;
    }
    uStack1204 = (uint)(byte)uStack1204;
    puVar10 = (uint *)func_0x00101970();
    param_2 = (uint *)(long)(int)uStack1168;
    puVar29 = (uint *)0x0;
    if (-1 < (int)uStack1168) {
      puVar29 = param_2;
    }
    puVar14 = puVar29;
    if (puVar29 <= puVar10) {
      puVar14 = puVar10;
    }
    if ((uint *)~uVar30 <= puVar14) goto code_r0x001029bf;
    if (param_1 != (uint *)0x0) {
      if (puVar10 < puVar29) {
        if (((int)puStack1248 == 0x30) || ((int)puStack1248 == 0x2b)) {
          if (param_2 != puVar10) {
            puVar29 = (uint *)0x0;
            do {
              puVar29 = (uint *)((long)puVar29 + 1);
              func_0x00101a10(0x30,param_1);
              puStack1248 = unaff_RBX;
            } while ((uint *)((long)param_2 - (long)puVar10) != puVar29);
          }
        }
        else {
          puVar29 = (uint *)0x0;
          if (param_2 != puVar10) {
            do {
              puVar29 = (uint *)((long)puVar29 + 1);
              func_0x00101a10(0x20,param_1);
              puStack1248 = unaff_RBX;
            } while ((uint *)((long)param_2 - (long)puVar10) != puVar29);
          }
        }
      }
      if (bVar7 == 0) {
        if ((byte)uStack1204 == 0) {
          param_4 = param_1;
          func_0x00101bf0(pcStack1216,puVar10,1);
        }
        else {
          fwrite_uppcase(param_1,pcStack1216,puVar10);
        }
      }
      else {
        fwrite_lowcase(param_1,pcStack1216,puVar10);
      }
    }
    uVar30 = uVar30 + (long)puVar14;
    goto code_r0x00102a10;
  case 0x62:
  case 0x68:
    if (bVar7 != 0) {
      uStack1204._0_1_ = bVar7;
    }
    if (iVar25 != 0x45) {
      uStack1204 = (uint)(byte)uStack1204;
      bVar7 = 0;
      puVar10 = puVar29;
      goto code_r0x00102cad;
    }
    uStack1204 = (uint)(byte)uStack1204;
    break;
  case 100:
    if (iVar25 != 0x45) {
      uStack1168 = 2;
      param_4 = (uint *)(ulong)param_3[3];
      goto code_r0x00102ed0;
    }
    break;
  case 0x65:
    if (iVar25 != 0x45) {
      param_4 = (uint *)(ulong)param_3[3];
code_r0x00103a9e:
      uStack1168 = 2;
      if ((int)puStack1248 == 0) {
        puStack1248 = (uint *)0x5f;
      }
      goto code_r0x00102ed0;
    }
    break;
  case 0x6a:
    if (iVar25 != 0x45) {
      uStack1168 = 3;
      uVar28 = param_3[7];
      param_4 = (uint *)(ulong)(uVar28 + 1);
      uVar19 = (ulong)((int)uVar28 < -1);
      uVar13 = (ulong)(-2 < (int)uVar28);
      uVar28 = 0;
      bVar5 = false;
      goto code_r0x00102ee5;
    }
    break;
  case 0x6b:
    if (iVar25 != 0x45) {
      param_4 = (uint *)(ulong)param_3[2];
      goto code_r0x00103a9e;
    }
    break;
  case 0x6c:
    if (iVar25 != 0x45) {
      param_4 = (uint *)(ulong)uStack1208;
      goto code_r0x00103a9e;
    }
    break;
  case 0x6d:
    goto code_r0x00103b12;
  case 0x6e:
    uVar28 = 0;
    if (-1 < (int)uStack1168) {
      uVar28 = uStack1168;
    }
    puVar29 = (uint *)(long)(int)uVar28;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)0x1;
    }
    if (puVar29 < (uint *)~uVar30) {
      if (param_1 != (uint *)0x0) {
        if (1 < (int)uStack1168) {
          if (((int)puStack1248 == 0x30) || (lVar12 = 0, (int)puStack1248 == 0x2b)) {
            lVar12 = 0;
            do {
              lVar12 = lVar12 + 1;
              func_0x00101a10(0x30,param_1);
            } while ((long)(int)uStack1168 + -1 != lVar12);
          }
          else {
            do {
              lVar12 = lVar12 + 1;
              func_0x00101a10(0x20,param_1);
            } while ((long)(int)uStack1168 + -1 != lVar12);
          }
        }
        func_0x00101a10();
      }
      goto code_r0x00102fdf;
    }
    goto code_r0x001029bf;
  case 0x70:
    bVar16 = 0;
    goto code_r0x00102f46;
  case 0x71:
    goto code_r0x001031b6;
  case 0x72:
code_r0x00102caa:
    bVar7 = 0;
    goto code_r0x00102cad;
  case 0x73:
    param_2 = (uint *)((ulong)param_2 & 0xffffffff);
    pcVar26 = acStack1074 + 1;
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)param_3;
    uStack1160 = SUB164(auVar2,0);
    uStack1156 = SUB164(auVar2 >> 0x20,0);
    uStack1152 = SUB164(auVar2 >> 0x40,0);
    uStack1148 = SUB164(auVar2 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)(param_3 + 4);
    uStack1144 = SUB164(auVar2,0);
    uStack1140 = SUB164(auVar2 >> 0x20,0);
    uStack1136 = SUB164(auVar2 >> 0x40,0);
    uStack1132 = SUB164(auVar2 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)(param_3 + 8);
    uStack1112 = *(undefined8 *)(param_3 + 0xc);
    uStack1128 = SUB164(auVar2,0);
    uStack1124 = SUB164(auVar2 >> 0x20,0);
    uStack1120 = SUB164(auVar2 >> 0x40,0);
    uStack1116 = SUB164(auVar2 >> 0x60,0);
    puVar10 = (uint *)mktime_z(SUB168(auVar2,0),param_8,&uStack1160);
    puStack1192._0_4_ = (uint)param_2;
    puVar29 = puVar10;
    do {
      param_4 = (uint *)((long)puVar29 / 10);
      cVar18 = (char)puVar29 + (char)param_4 * -10;
      if ((long)puVar10 < 0) {
        cVar18 = -cVar18;
      }
      pcVar26 = pcVar26 + -1;
      *pcVar26 = cVar18 + '0';
      puVar29 = param_4;
    } while (param_4 != (uint *)0x0);
    uStack1168 = 1;
    if (0 < (int)(uint)puStack1192) {
      uStack1168 = (uint)puStack1192;
    }
    if ((long)puVar10 < 0) goto code_r0x00103c10;
code_r0x001030d9:
    puVar29 = (uint *)~uVar30;
    puStack1192 = (uint *)(acStack1074 + (1 - (long)pcVar26));
    if ((int)puStack1248 != 0x2d) {
      iVar25 = uStack1168 - (uint)puStack1192;
      if (0 < iVar25) {
        if ((int)puStack1248 == 0x5f) {
          cVar18 = '\0';
          goto code_r0x00103ebc;
        }
        if ((uint *)(long)(int)uStack1168 < puVar29) goto code_r0x00103351;
        goto code_r0x001029bf;
      }
    }
    param_4 = (uint *)0x0;
    if (-1 < (int)param_2) {
      param_4 = (uint *)((ulong)param_2 & 0xffffffff);
    }
    puVar10 = (uint *)(long)(int)param_4;
    puVar21 = unaff_RBX;
code_r0x0010311c:
    unaff_RBX = puStack1192;
    if (puStack1192 < puVar10) {
      unaff_RBX = puVar10;
    }
    if (unaff_RBX < puVar29) goto code_r0x00103134;
    goto code_r0x001029bf;
  case 0x74:
    uVar28 = 0;
    if (-1 < (int)uStack1168) {
      uVar28 = uStack1168;
    }
    puVar29 = (uint *)(long)(int)uVar28;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)0x1;
    }
    if ((uint *)~uVar30 <= puVar29) goto code_r0x001029bf;
    if (param_1 != (uint *)0x0) {
      if (1 < (int)uStack1168) {
        if (((int)puStack1248 == 0x30) || (lVar12 = 0, (int)puStack1248 == 0x2b)) {
          lVar12 = 0;
          do {
            lVar12 = lVar12 + 1;
            func_0x00101a10(0x30,param_1);
          } while ((long)(int)uStack1168 + -1 != lVar12);
        }
        else {
          do {
            lVar12 = lVar12 + 1;
            func_0x00101a10(0x20,param_1);
          } while ((long)(int)uStack1168 + -1 != lVar12);
        }
      }
      func_0x00101a10();
    }
code_r0x00102fdf:
    uVar30 = uVar30 + (long)puVar29;
    goto code_r0x00102a10;
  case 0x75:
    goto code_r0x00102e91;
  case 0x77:
    if (iVar25 != 0x45) {
      uStack1168 = 1;
      param_4 = (uint *)(ulong)param_3[6];
      goto code_r0x00102ed0;
    }
    break;
  case 0x79:
    if (iVar25 != 0x45) {
      uVar28 = (int)param_3[5] % 100;
      param_4 = (uint *)(ulong)uVar28;
      if ((int)uVar28 < 0) {
        uVar3 = uVar28 + 100;
        if ((int)param_3[5] < -0x76c) {
          uVar3 = -uVar28;
        }
        param_4 = (uint *)(ulong)uVar3;
      }
      goto joined_r0x00104505;
    }
code_r0x00103ea3:
    uStack1168 = 0;
    goto code_r0x00102efa;
  case 0x7a:
    lVar12 = 0;
code_r0x001037d2:
    param_4 = (uint *)(ulong)param_3[8];
    if (-1 < (int)param_3[8]) {
      uVar19 = 1;
      iVar25 = (int)*(undefined8 *)(param_3 + 10);
      if ((-1 < iVar25) && (uVar19 = 0, iVar25 == 0)) {
        uVar19 = (ulong)(*pcStack1216 == '-');
      }
      uVar3 = iVar25 / 0xe10;
      param_4 = (uint *)(ulong)uVar3;
      uVar9 = (iVar25 / 0x3c) % 0x3c;
      uVar24 = (uint)uVar19;
      unaff_RBX = puVar21;
      if (lVar12 != 1) {
        if (lVar12 == 0) {
          uVar28 = 0;
          bVar5 = true;
          uStack1168 = 5;
          param_4 = (uint *)(ulong)(uVar3 * 100 + uVar9);
          uVar13 = (ulong)(uVar24 ^ 1);
          goto code_r0x00102ee5;
        }
        if (lVar12 != 2) {
          if (lVar12 != 3) {
            bVar7 = *(byte *)puVar21;
            puStack1200 = puVar21;
            goto code_r0x001036da;
          }
          if (iVar25 % 0x3c == 0) {
            if (uVar9 != 0) goto code_r0x0010430d;
            bVar5 = true;
            uVar13 = (ulong)(uVar24 ^ 1);
            uStack1168 = 3;
            uVar28 = uVar9;
            goto code_r0x00102ee5;
          }
        }
        bVar5 = true;
        uStack1168 = 9;
        uVar28 = 0x14;
        param_4 = (uint *)(ulong)(iVar25 % 0x3c + uVar3 * 10000 + uVar9 * 100);
        uVar13 = (ulong)(uVar24 ^ 1);
        goto code_r0x00102ee5;
      }
code_r0x0010430d:
      bVar5 = true;
      uVar13 = (ulong)(uVar24 ^ 1);
      uStack1168 = 6;
      param_4 = (uint *)(ulong)(uVar3 * 100 + uVar9);
      uVar28 = 4;
      goto code_r0x00102ee5;
    }
    goto code_r0x00102a10;
  }
  goto code_r0x00102b10;
code_r0x00102e91:
  uStack1168 = 1;
  param_4 = (uint *)(ulong)((int)(param_3[6] + 6) % 7 + 1);
  goto code_r0x00102ed0;
code_r0x001031b6:
  uStack1168 = 1;
  if (iVar25 == 0x4f) goto code_r0x00102efa;
  bVar5 = false;
  cVar18 = '\0';
  uVar28 = 0;
  param_4 = (uint *)(ulong)(((int)(param_3[4] * 0xb) >> 5) + 1);
code_r0x001031e8:
  pcVar26 = acStack1074 + 1;
  in_R11 = (uint *)0xcccccccd;
  puVar29 = param_4;
  do {
    pcVar23 = pcVar26;
    pcVar6 = pcVar26 + -1;
    if ((uVar28 & 1) != 0) {
      pcVar26[-1] = ':';
      pcVar23 = pcVar26 + -1;
      pcVar6 = pcVar26 + -2;
    }
    pcVar26 = pcVar6;
    uVar28 = (int)uVar28 >> 1;
    param_4 = (uint *)((ulong)puVar29 / 10);
    pcVar23[-1] = (char)puVar29 + (char)param_4 * -10 + '0';
    puVar29 = param_4;
  } while ((uVar28 | (uint)param_4) != 0);
  if ((int)uStack1168 <= (int)(uint)param_2) {
    uStack1168 = (uint)param_2;
  }
  if (cVar18 == '\0') {
    if (!bVar5) goto code_r0x001030d9;
    cVar18 = '+';
  }
  else {
code_r0x00103c10:
    cVar18 = '-';
  }
  iVar8 = (int)param_2;
  puVar21 = unaff_RBX;
  if ((int)puStack1248 == 0x2d) {
    param_4 = (uint *)0x0;
    if (-1 < iVar8) {
      param_4 = (uint *)((ulong)param_2 & 0xffffffff);
    }
    puVar10 = (uint *)(long)(int)param_4;
    puStack1248 = (uint *)0x1;
    if (puVar10 != (uint *)0x0) {
      puStack1248 = puVar10;
    }
    if ((uint *)~uVar30 <= puStack1248) goto code_r0x001029bf;
    if (param_1 != (uint *)0x0) {
      if (((uStack1168 == 0) && ((uint *)0x1 < puVar10)) && ((long)iVar8 != 1)) {
        lVar12 = 0;
        do {
          lVar12 = lVar12 + 1;
          func_0x00101a10(0x20,param_1);
        } while ((long)iVar8 + -1 != lVar12);
      }
      func_0x00101a10();
      param_2 = (uint *)((ulong)param_2 & 0xffffffff);
    }
    uVar30 = uVar30 + (long)puStack1248;
    puStack1248 = (uint *)0x2d;
    puStack1192 = (uint *)(acStack1074 + (1 - (long)pcVar26));
    puVar29 = (uint *)~uVar30;
  }
  else {
    puVar29 = (uint *)~uVar30;
    puStack1192 = (uint *)(acStack1074 + (1 - (long)pcVar26));
    iVar25 = (uStack1168 - 1) - (int)puStack1192;
    if (iVar25 < 1) {
      param_4 = (uint *)0x0;
      if (-1 < iVar8) {
        param_4 = (uint *)((ulong)param_2 & 0xffffffff);
      }
      puVar10 = (uint *)(long)(int)param_4;
      puVar14 = (uint *)0x1;
      if (puVar10 != (uint *)0x0) {
        puVar14 = puVar10;
      }
      if (puVar29 <= puVar14) goto code_r0x001029bf;
      if (param_1 != (uint *)0x0) {
        param_4 = (uint *)(ulong)uStack1168;
        if ((uStack1168 == 0) && ((uint *)0x1 < puVar10)) {
          lVar12 = (long)iVar8;
          if (((int)puStack1248 == 0x30) || ((int)puStack1248 == 0x2b)) {
            if (lVar12 != 1) {
              lVar22 = 0;
              do {
                lVar22 = lVar22 + 1;
                func_0x00101a10(0x30,param_1);
              } while (lVar12 + -1 != lVar22);
            }
          }
          else {
            lVar22 = 0;
            if (lVar12 != 1) {
              do {
                lVar22 = lVar22 + 1;
                func_0x00101a10(0x20,param_1);
              } while (lVar12 + -1 != lVar22);
            }
          }
        }
        func_0x00101a10();
        param_2 = (uint *)((ulong)param_2 & 0xffffffff);
      }
      uVar30 = uVar30 + (long)puVar14;
      puVar29 = (uint *)~uVar30;
    }
    else {
      if ((int)puStack1248 == 0x5f) {
code_r0x00103ebc:
        iVar8 = (int)param_2;
        puStack1248 = (uint *)(long)iVar25;
        if (puVar29 <= puStack1248) goto code_r0x001029bf;
        if (param_1 != (uint *)0x0) {
          puVar29 = (uint *)0x0;
          do {
            puVar29 = (uint *)((long)puVar29 + 1);
            func_0x00101a10();
          } while (puVar29 < puStack1248);
        }
        uVar30 = uVar30 + (long)puStack1248;
        param_2 = (uint *)0x0;
        if (iVar25 < iVar8) {
          param_2 = (uint *)(ulong)(uint)(iVar8 - iVar25);
        }
        uVar28 = (uint)param_2;
        puVar29 = (uint *)~uVar30;
        puVar21 = unaff_RBX;
        if (cVar18 == '\0') {
          puStack1248 = (uint *)0x5f;
          puStack1192 = (uint *)(acStack1074 + (1 - (long)pcVar26));
          puVar10 = (uint *)(long)(int)uVar28;
          goto code_r0x0010311c;
        }
        param_4 = (uint *)(long)(int)uVar28;
        puStack1248 = (uint *)0x1;
        if (param_4 != (uint *)0x0) {
          puStack1248 = param_4;
        }
        if (puVar29 <= puStack1248) goto code_r0x001029bf;
        if (param_1 != (uint *)0x0) {
          if ((uStack1168 == 0) && (1 < uVar28)) {
            lVar12 = 0;
            do {
              lVar12 = lVar12 + 1;
              func_0x00101a10(0x20,param_1);
            } while ((long)param_4 + -1 != lVar12);
          }
          func_0x00101a10();
        }
        uVar30 = uVar30 + (long)puStack1248;
        puStack1248 = (uint *)0x5f;
        puStack1192 = (uint *)(acStack1074 + (1 - (long)pcVar26));
        puVar29 = (uint *)~uVar30;
        puVar10 = param_4;
      }
      else {
        if (puVar29 <= (uint *)(long)(int)uStack1168) goto code_r0x001029bf;
        iVar17 = 0;
        if (-1 < iVar8) {
          iVar17 = iVar8;
        }
        puVar21 = (uint *)(long)iVar17;
        puVar10 = (uint *)0x1;
        if (puVar21 != (uint *)0x0) {
          puVar10 = puVar21;
        }
        param_4 = puVar10;
        if (puVar29 <= puVar10) goto code_r0x001029bf;
        if (param_1 != (uint *)0x0) {
          if ((uStack1168 == 0) && ((uint *)0x1 < puVar21)) {
            lVar12 = (long)iVar8;
            if (((int)puStack1248 == 0x30) || ((int)puStack1248 == 0x2b)) {
              if (lVar12 != 1) {
                lVar22 = 0;
                do {
                  lVar22 = lVar22 + 1;
                  func_0x00101a10(0x30,param_1);
                } while (lVar12 + -1 != lVar22);
              }
            }
            else {
              lVar22 = 0;
              if (lVar12 != 1) {
                do {
                  lVar22 = lVar22 + 1;
                  func_0x00101a10(0x20,param_1);
                } while (lVar12 + -1 != lVar22);
              }
            }
          }
          func_0x00101a10();
        }
        uVar30 = uVar30 + (long)puVar10;
code_r0x00103351:
        lVar12 = 0;
        if (param_1 != (uint *)0x0) {
          do {
            lVar12 = lVar12 + 1;
            func_0x00101a10();
          } while (lVar12 != (long)iVar25);
        }
        uVar30 = uVar30 + (long)iVar25;
        param_2 = (uint *)0x0;
        puVar29 = (uint *)~uVar30;
        puVar21 = unaff_RBX;
        puVar10 = (uint *)0x0;
      }
    }
  }
  goto code_r0x0010311c;
code_r0x00103134:
  if (param_1 != (uint *)0x0) {
    if ((uStack1168 == 0) && (puStack1192 < puVar10)) {
      puVar29 = (uint *)(long)(int)param_2;
      if (((int)puStack1248 == 0x30) || ((int)puStack1248 == 0x2b)) {
        if (puVar29 != puStack1192) {
          puVar10 = (uint *)0x0;
          do {
            puVar10 = (uint *)((long)puVar10 + 1);
            func_0x00101a10(0x30,param_1);
            puStack1248 = unaff_RBX;
          } while ((uint *)((long)puVar29 - (long)puStack1192) != puVar10);
        }
      }
      else {
        puVar10 = (uint *)0x0;
        if (puVar29 != puStack1192) {
          do {
            puVar10 = (uint *)((long)puVar10 + 1);
            func_0x00101a10(0x20,param_1);
            puStack1248 = unaff_RBX;
          } while ((uint *)((long)puVar29 - (long)puStack1192) != puVar10);
        }
      }
    }
    if ((byte)uStack1204 == '\0') {
      param_4 = param_1;
      func_0x00101bf0(pcVar26,puStack1192,1);
    }
    else {
      fwrite_uppcase(param_1,pcVar26,puStack1192);
    }
  }
  uVar30 = uVar30 + (long)unaff_RBX;
  goto code_r0x00102a10;
code_r0x00103b12:
  if (iVar25 != 0x45) {
    uStack1168 = 2;
    uVar28 = param_3[4];
    param_4 = (uint *)(ulong)(uVar28 + 1);
    uVar19 = (ulong)((int)uVar28 < -1);
    uVar13 = (ulong)(-2 < (int)uVar28);
    uVar28 = 0;
    bVar5 = false;
    goto code_r0x00102ee5;
  }
code_r0x00102b10:
  iVar25 = 1;
  puVar14 = puStack1200;
  do {
    puVar14 = (uint *)((long)puVar14 + -1);
    iVar25 = iVar25 + 1;
  } while (*(byte *)puVar14 != 0x25);
  puVar27 = (uint *)(long)iVar25;
  uVar28 = 0;
  if (-1 < (int)uStack1168) {
    uVar28 = uStack1168;
  }
  puVar10 = (uint *)(long)(int)uVar28;
  unaff_RBX = puStack1200;
  puVar21 = puStack1200;
  puVar29 = puVar27;
  if (puVar27 <= puVar10) {
    puVar29 = puVar10;
  }
code_r0x00102b54:
  puStack1200 = puVar14;
  if ((uint *)~uVar30 <= puVar29) goto code_r0x001029bf;
  if (param_1 != (uint *)0x0) {
    if (puVar27 < puVar10) {
      puVar10 = (uint *)(long)(int)uStack1168;
      if (((int)puStack1248 == 0x30) || ((int)puStack1248 == 0x2b)) {
        if (puVar10 != puVar27) {
          puVar14 = (uint *)0x0;
          do {
            puVar14 = (uint *)((long)puVar14 + 1);
            func_0x00101a10(0x30,param_1);
            puStack1248 = puVar21;
          } while ((uint *)((long)puVar10 - (long)puVar27) != puVar14);
        }
      }
      else {
        puVar14 = (uint *)0x0;
        if (puVar10 != puVar27) {
          do {
            puVar14 = (uint *)((long)puVar14 + 1);
            func_0x00101a10(0x20,param_1);
            puStack1248 = puVar21;
          } while ((uint *)((long)puVar10 - (long)puVar27) != puVar14);
        }
      }
    }
    if ((byte)uStack1204 == '\0') {
      param_4 = param_1;
      func_0x00101bf0(puStack1200,puVar27,1);
    }
    else {
      fwrite_uppcase(param_1,puStack1200,puVar27);
    }
  }
  uVar30 = uVar30 + (long)puVar29;
  goto code_r0x00102a10;
code_r0x00102f41:
  bVar16 = 1;
code_r0x00102f46:
  if (bVar7 == 0) {
    puVar10 = (uint *)0x70;
    bVar7 = bVar16;
  }
  else {
    uStack1204 = 0;
    puVar10 = (uint *)0x70;
  }
code_r0x00102cad:
  if (iVar25 != 0) goto code_r0x00104510;
  puVar11 = &uStack1099;
  puVar29 = in_R11;
  goto code_r0x00102cd2;
code_r0x001035f7:
  if (iVar25 == 0x45) goto code_r0x00103ea3;
  uVar28 = param_3[5];
  iVar25 = (int)uVar28 / 100 + 0x13;
  uVar19 = (ulong)((int)uVar28 < -0x76c);
  param_4 = (uint *)(ulong)(iVar25 - ((uint)(0 < iVar25) & (uint)((int)uVar28 % 100) >> 0x1f));
  uVar13 = (ulong)(-0x76d < (int)uVar28);
  if ((int)puStack1248 != 0) goto code_r0x00103539;
  if (param_5 == 0x2b) goto code_r0x001044dd;
  puStack1248 = (uint *)(ulong)param_5;
  goto code_r0x00103544;
code_r0x001044dd:
  uStack1168 = 2;
  uVar28 = 99;
code_r0x00104031:
  bVar5 = true;
  puStack1248 = (uint *)0x2b;
  if ((uint)param_4 <= uVar28) {
code_r0x00104047:
    puStack1248 = (uint *)0x2b;
    bVar5 = (int)uStack1168 < (int)param_2;
  }
  goto code_r0x0010354c;
code_r0x00104510:
  uStack1168 = 0;
  goto code_r0x00102f0a;
}

