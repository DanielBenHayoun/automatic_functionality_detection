
/* WARNING: Could not reconcile some variable overlaps */

long __strftime_internal(char *param_1,long param_2,uint *param_3,uint *param_4,byte param_5,
                        uint *param_6,int param_7,undefined8 param_8,undefined8 param_9,
                        uint param_10)

{
  undefined auVar1 [16];
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  char cVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  byte bVar21;
  int iVar22;
  uint *puVar23;
  char cVar24;
  int iVar25;
  uint *puVar26;
  char cVar27;
  uint *puVar28;
  int iVar29;
  uint uVar30;
  uint *puVar31;
  long lVar32;
  uint *puVar33;
  long in_FS_OFFSET;
  uint *puStack1224;
  uint uStack1216;
  undefined *puStack1208;
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
  char cStack1099;
  char acStack1098 [2];
  undefined uStack1096;
  undefined auStack1095 [21];
  char acStack1074 [1010];
  ulong uStack64;
  
  uVar4 = param_4[2];
  puVar33 = (uint *)(ulong)uVar4;
  iVar25 = (int)param_6;
  puVar26 = (uint *)(long)param_7;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  pcVar7 = "";
  if (*(char **)(param_4 + 0xc) != (char *)0x0) {
    pcVar7 = *(char **)(param_4 + 0xc);
  }
  if ((int)uVar4 < 0xd) {
    if (uVar4 == 0) {
      puVar33 = (uint *)0xc;
    }
  }
  else {
    puVar33 = (uint *)(ulong)(uVar4 - 0xc);
  }
  cVar16 = *(char *)param_3;
  lVar32 = 0;
  puVar15 = param_4;
  puVar14 = param_6;
  puVar28 = param_3;
  if (cVar16 == '\0') goto code_r0x0011068c;
  uStack1168 = (uint)puVar33;
code_r0x001105de:
  if (cVar16 != '%') {
    puVar31 = (uint *)0x0;
    if (-1 < (int)puVar26) {
      puVar31 = puVar26;
    }
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)0x1;
    }
    if ((uint *)(param_2 - lVar32) <= puVar31) goto code_r0x0011060c;
    if (param_1 != (char *)0x0) {
      pcVar17 = param_1;
      if (1 < (int)puVar26) {
        puVar33 = (uint *)((long)puVar26 + -1);
        pcVar17 = param_1 + (long)puVar33;
        func_0x00103500(param_1,0x20,puVar33);
      }
      param_1 = pcVar17 + 1;
      *pcVar17 = *(char *)param_3;
    }
    goto code_r0x0011066c;
  }
  bVar21 = 0;
  puVar33 = (uint *)0x0;
  puStack1224 = (uint *)(ulong)param_5;
  while( true ) {
    param_3 = (uint *)((long)param_3 + 1);
    uVar4 = SEXT14(*(char *)param_3);
    bVar11 = *(char *)param_3 - 0x23;
    puVar15 = (uint *)(ulong)uVar4;
    puVar14 = (uint *)(ulong)uVar4;
    if (0x3c < bVar11) break;
    uVar20 = 1 << (bVar11 & 0x3f);
    if ((uVar20 & 0x1000000000002500) == 0) {
      if (bVar11 == 0) {
        bVar21 = 1;
      }
      else {
        if ((uVar20 & 0x800000000000000) == 0) break;
        puStack1224 = (uint *)0x1;
      }
    }
    else {
      puVar33 = (uint *)(ulong)uVar4;
    }
  }
  if (uVar4 - 0x30 < 10) {
    puVar26 = (uint *)0x0;
    puVar14 = param_3;
    do {
      uVar4 = SEXT14(*(char *)((long)puVar14 + 1));
      iVar29 = (int)puVar26;
      param_3 = (uint *)((long)puVar14 + 1);
      puVar15 = (uint *)(ulong)uVar4;
      uVar19 = uVar4 - 0x30;
      if (iVar29 < 0xccccccd) {
        if ((iVar29 == 0xccccccc) && ('7' < *(char *)puVar14)) goto code_r0x001108c6;
        puVar26 = (uint *)(ulong)(uint)((int)*(char *)puVar14 + -0x30 + iVar29 * 10);
      }
      else {
code_r0x001108c6:
        if (9 < uVar19) {
          puVar14 = (uint *)(ulong)uVar4;
          puVar26 = (uint *)0x7fffffff;
          goto code_r0x00110728;
        }
        uVar4 = SEXT14(*(char *)((long)puVar14 + 2));
        puVar26 = (uint *)0x7fffffff;
        param_3 = (uint *)((long)puVar14 + 2);
        puVar15 = (uint *)(ulong)uVar4;
        uVar19 = uVar4 - 0x30;
      }
      puVar14 = param_3;
    } while (uVar19 < 10);
    puVar14 = (uint *)(ulong)uVar4;
  }
code_r0x00110728:
  uVar19 = (uint)puVar26;
  if (((char)puVar15 == 'E') || (puVar31 = (uint *)0x0, (char)puVar15 == 'O')) {
    puVar15 = (uint *)(ulong)(uint)(int)*(char *)((long)param_3 + 1);
    puVar31 = (uint *)(ulong)uVar4;
    param_3 = (uint *)((long)param_3 + 1);
    puVar14 = puVar15;
  }
  iVar22 = (int)puVar31;
  cVar24 = (char)puVar14;
  cVar27 = (char)puVar31;
  cVar16 = (char)puVar15;
  iVar29 = (int)puVar33;
  puVar23 = param_3;
  puVar28 = puVar31;
  switch((ulong)puVar15 & 0xff) {
  case 0:
    cVar16 = *(char *)((long)param_3 + -1);
    param_3 = (uint *)((long)param_3 + -1);
    goto code_r0x00111739;
  case 0x25:
    puVar10 = (uint *)(param_2 - lVar32);
    uVar4 = 0;
    if (-1 < (int)uVar19) {
      uVar4 = uVar19;
    }
    puVar8 = (uint *)(long)(int)uVar4;
    puVar15 = (uint *)0x1;
    if (puVar8 != (uint *)0x0) {
      puVar15 = puVar8;
    }
    if (iVar22 == 0) {
      if (puVar15 < puVar10) {
        if (param_1 != (char *)0x0) {
          if (1 < (int)uVar19) {
            param_1 = param_1 + (long)(int)uVar19 + -1;
            func_0x00103500();
            cVar16 = *(char *)param_3;
            puStack1224 = puVar15;
          }
          *param_1 = cVar16;
          param_1 = param_1 + 1;
        }
        goto code_r0x00110b78;
      }
      goto code_r0x0011060c;
    }
    puVar23 = (uint *)0x1;
    puVar14 = param_3;
    goto code_r0x001107d1;
  case 0x3a:
    cVar16 = *(char *)((long)param_3 + 1);
    puVar23 = (uint *)((long)param_3 + 1);
    if (cVar16 == ':') {
      lVar9 = 1;
      puVar15 = (uint *)((long)param_3 + 2);
      do {
        puVar23 = puVar15;
        cVar16 = *(char *)puVar23;
        lVar9 = lVar9 + 1;
        puVar15 = (uint *)((long)puVar23 + 1);
      } while (cVar16 == ':');
    }
    else {
      lVar9 = 1;
    }
    if (cVar16 == 'z') goto code_r0x00110f6f;
    break;
  case 0x41:
  case 0x61:
    if (iVar22 == 0) {
      if (bVar21 != 0) {
        puStack1224._0_1_ = bVar21;
      }
      bVar21 = 0;
      puVar31 = (uint *)0x0;
      puStack1224 = (uint *)(ulong)(byte)puStack1224;
      pcVar17 = &cStack1099;
      goto code_r0x0011092a;
    }
    break;
  case 0x42:
    if (iVar22 != 0x45) {
      if (bVar21 == 0) goto code_r0x00110905;
      puStack1224 = (uint *)(ulong)bVar21;
      goto code_r0x00110902;
    }
    break;
  case 0x43:
    if (iVar22 != 0x45) {
      uVar4 = param_4[5];
      iVar12 = (int)uVar4 / 100 + 0x13;
      uStack1216._0_1_ = (int)uVar4 < -0x76c;
      puVar14 = (uint *)(ulong)(iVar12 - ((uint)(0 < iVar12) & (uint)((int)uVar4 % 100) >> 0x1f));
      bVar3 = -0x76d < (int)uVar4;
      if (iVar29 != 0) goto code_r0x00110f2c;
      puVar33 = (uint *)((ulong)param_6 & 0xffffffff);
      if (iVar25 != 0x2b) goto code_r0x00110f36;
      goto code_r0x001116a3;
    }
    goto code_r0x00111aca;
  case 0x44:
    if (iVar22 == 0) {
      puStack1208 = &UNK_0011a0b2;
      goto code_r0x00110bb2;
    }
    break;
  case 0x46:
    if (iVar22 == 0) {
      if ((iVar29 == 0) && ((int)uVar19 < 0)) {
        puVar33 = (uint *)0x2b;
        puStack1208 = &UNK_0011a0a9;
      }
      else {
        puStack1208 = &UNK_0011a0a9;
      }
      goto code_r0x00110bb2;
    }
    break;
  case 0x47:
  case 0x56:
  case 0x67:
    if (iVar22 != 0x45) {
      uVar19 = param_4[5];
      uVar4 = param_4[7];
      uVar30 = (uVar19 - 100) + ((int)uVar19 >> 0x1f & 400U);
      uVar18 = param_4[6];
      iVar12 = (uVar4 - uVar18) + 0x17e;
      iVar12 = (uVar4 - iVar12) + 3 + (iVar12 / 7) * 7;
      if (iVar12 < 0) {
        uVar30 = uVar30 - 1;
        iVar12 = 0x16d;
        if (((uVar30 & 3) == 0) && (iVar12 = 0x16e, uVar30 == ((int)uVar30 / 100) * 100)) {
          iVar12 = ~-(uint)((int)uVar30 % 400 == 0) + 0x16e;
        }
        iVar6 = ((uVar4 + iVar12) - uVar18) + 0x17e;
        iVar6 = ((uVar4 + iVar12) - iVar6) + 3 + (iVar6 / 7) * 7;
        iVar13 = -1;
      }
      else {
        iVar6 = 0x16d;
        if (((uVar30 & 3) == 0) && (iVar6 = 0x16e, uVar30 == ((int)uVar30 / 100) * 100)) {
          iVar6 = (uint)(uVar30 == ((int)uVar30 / 400) * 400) + 0x16d;
        }
        iVar13 = ((uVar4 - iVar6) - uVar18) + 0x17e;
        iVar6 = ((uVar4 - iVar6) - iVar13) + 3 + (iVar13 / 7) * 7;
        iVar13 = 1;
        if (iVar6 < 0) {
          iVar13 = 0;
          iVar6 = iVar12;
        }
      }
      if (cVar16 == 'G') {
        uVar4 = uVar19 + 0x76c + iVar13;
        uStack1216._0_1_ = (int)uVar19 < -0x76c - iVar13;
        bVar3 = -0x76c - iVar13 <= (int)uVar19;
joined_r0x00110dca:
        puVar14 = (uint *)(ulong)uVar4;
        if (iVar29 == 0) {
          puVar33 = (uint *)((ulong)param_6 & 0xffffffff);
          iVar29 = iVar25;
        }
        if (iVar29 == 0x2b) {
          uVar4 = 4;
          uVar19 = 9999;
          goto code_r0x001116ad;
        }
        bVar2 = false;
        uVar4 = 4;
        goto code_r0x00110de9;
      }
      if (cVar16 == 'g') {
        uVar4 = ((int)uVar19 % 100 + iVar13) % 100;
        puVar14 = (uint *)(ulong)uVar4;
        if (-1 < (int)uVar4) goto joined_r0x00110f1c;
        if (-0x76c - iVar13 <= (int)uVar19) goto code_r0x00111fda;
        puVar14 = (uint *)(ulong)-uVar4;
        if (iVar29 != 0) goto code_r0x00110f22;
        goto code_r0x0011154a;
      }
      puVar14 = (uint *)(ulong)(iVar6 / 7 + 1);
      uVar4 = 2;
code_r0x00110aa0:
      uVar18 = 0;
      bVar2 = false;
      uStack1216._0_1_ = SUB81((ulong)puVar14 >> 0x1f,0);
      bVar3 = (bool)(~(byte)((ulong)puVar14 >> 0x18) >> 7);
      cVar16 = cVar24;
      goto code_r0x00110ab7;
    }
    break;
  case 0x48:
    if (iVar22 != 0x45) {
      puVar14 = (uint *)(ulong)param_4[2];
      uVar4 = 2;
      goto code_r0x00110aa0;
    }
    break;
  case 0x49:
    if (iVar22 != 0x45) {
      puVar14 = (uint *)(ulong)uStack1168;
      uVar4 = 2;
      goto code_r0x00110aa0;
    }
    break;
  case 0x4d:
    if (iVar22 != 0x45) {
      puVar14 = (uint *)(ulong)param_4[1];
      uVar4 = 2;
      goto code_r0x00110aa0;
    }
    break;
  case 0x4e:
    if (iVar22 != 0x45) {
      if (uVar19 == 0xffffffff) {
        puVar14 = (uint *)(ulong)param_10;
        puVar26 = (uint *)0x9;
        uVar4 = 9;
      }
      else {
        uVar4 = uVar19;
        if ((int)uVar19 < 9) {
          puVar14 = (uint *)(ulong)param_10;
          uVar20 = (ulong)puVar26 & 0xffffffff;
          do {
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulong)uVar19;
            puVar14 = (uint *)(ulong)(uint)((int)puVar14 / 10);
          } while (uVar19 != 9);
        }
        else {
          puVar14 = (uint *)(ulong)param_10;
        }
      }
      goto code_r0x00110aa0;
    }
    break;
  case 0x50:
    bVar11 = 1;
    goto code_r0x00110b88;
  case 0x52:
    puStack1208 = &UNK_00117b61;
    goto code_r0x00110bb2;
  case 0x53:
    if (iVar22 != 0x45) {
      puVar14 = (uint *)(ulong)*param_4;
      uVar4 = 2;
      goto code_r0x00110aa0;
    }
    break;
  case 0x54:
    puStack1208 = &UNK_0011a0a0;
code_r0x00110bb2:
    puVar15 = param_4;
    puVar14 = puVar33;
    puVar28 = (uint *)__strftime_internal(0,0xffffffffffffffff,puStack1208);
    puVar26 = (uint *)(long)(int)uVar19;
    puVar23 = (uint *)0x0;
    if (-1 < (int)uVar19) {
      puVar23 = puVar26;
    }
    puVar31 = puVar23;
    if (puVar23 <= puVar28) {
      puVar31 = puVar28;
    }
    if (puVar31 < (uint *)(param_2 - lVar32)) {
      if (param_1 != (char *)0x0) {
        pcVar17 = param_1;
        if (puVar28 < puVar23) {
          pcVar17 = param_1 + ((long)(int)uVar19 - (long)puVar28);
          if (((int)puVar33 == 0x30) || ((int)puVar33 == 0x2b)) {
            func_0x00103500(param_1,0x30);
          }
          else {
            func_0x00103500(param_1,0x20);
          }
        }
        puVar15 = param_4;
        puVar14 = puVar33;
        __strftime_internal(pcVar17,(uint *)(param_2 - lVar32),puStack1208);
        param_1 = pcVar17 + (long)puVar28;
      }
code_r0x0011066c:
      lVar32 = lVar32 + (long)puVar31;
      puVar23 = param_3;
      goto code_r0x00110672;
    }
    goto code_r0x0011060c;
  case 0x55:
    if (iVar22 != 0x45) {
      iVar29 = (param_4[7] - param_4[6]) + 7;
      iVar12 = (int)((ulong)((long)iVar29 * -0x6db6db6d) >> 0x20);
code_r0x00110d82:
      puVar14 = (uint *)(ulong)(uint)((iVar12 + iVar29 >> 2) - (iVar29 >> 0x1f));
      uVar4 = 2;
      goto code_r0x00110aa0;
    }
    break;
  case 0x57:
    if (iVar22 != 0x45) {
      iVar29 = (((int)(param_4[6] + 6) / 7) * 7 - (param_4[6] + 6)) + 7 + param_4[7];
      iVar12 = (int)((ulong)((long)iVar29 * -0x6db6db6d) >> 0x20);
      goto code_r0x00110d82;
    }
    break;
  case 0x58:
  case 99:
  case 0x78:
    if (iVar22 != 0x4f) goto code_r0x00110902;
    break;
  case 0x59:
    if (iVar22 == 0x45) goto code_r0x00111aca;
    if (iVar22 != 0x4f) {
      uVar19 = param_4[5];
      uVar4 = uVar19 + 0x76c;
      uStack1216._0_1_ = (int)uVar19 < -0x76c;
      bVar3 = -0x76d < (int)uVar19;
      goto joined_r0x00110dca;
    }
    break;
  case 0x5a:
    if (bVar21 != 0) {
      puStack1224._0_1_ = 0;
    }
    puStack1224 = (uint *)(ulong)(byte)puStack1224;
    puVar8 = (uint *)func_0x00103400();
    puVar26 = (uint *)(long)(int)uVar19;
    puVar10 = (uint *)0x0;
    if (-1 < (int)uVar19) {
      puVar10 = puVar26;
    }
    puVar15 = puVar10;
    if (puVar10 <= puVar8) {
      puVar15 = puVar8;
    }
    puVar28 = puVar31;
    if (puVar15 < (uint *)(param_2 - lVar32)) {
      if (param_1 != (char *)0x0) {
        pcVar17 = param_1;
        if (puVar8 < puVar10) {
          pcVar17 = param_1 + ((long)(int)uVar19 - (long)puVar8);
          if ((iVar29 == 0x30) || (iVar29 == 0x2b)) {
            func_0x00103500(param_1,0x30);
          }
          else {
            func_0x00103500(param_1,0x20);
          }
        }
        if (bVar21 == 0) {
          if ((byte)puStack1224 == 0) {
            func_0x001035f0(pcVar17,pcVar7,puVar8);
          }
          else {
            memcpy_uppcase();
          }
        }
        else {
          memcpy_lowcase(pcVar17,pcVar7,puVar8);
        }
        param_1 = pcVar17 + (long)puVar8;
        puStack1224 = puVar15;
      }
code_r0x00110b78:
      lVar32 = lVar32 + (long)puVar15;
      puVar28 = puVar31;
      goto code_r0x00110672;
    }
    goto code_r0x0011060c;
  case 0x62:
  case 0x68:
    if (bVar21 != 0) {
      puStack1224._0_1_ = bVar21;
    }
    if (iVar22 != 0x45) {
      puStack1224 = (uint *)(ulong)(byte)puStack1224;
      bVar21 = 0;
      cVar16 = cVar24;
      goto code_r0x00110905;
    }
    puStack1224 = (uint *)(ulong)(byte)puStack1224;
    break;
  case 100:
    if (iVar22 != 0x45) {
      puVar14 = (uint *)(ulong)param_4[3];
      uVar4 = 2;
      goto code_r0x00110aa0;
    }
    break;
  case 0x65:
    if (iVar22 != 0x45) {
      puVar14 = (uint *)(ulong)param_4[3];
code_r0x00111814:
      uVar4 = 2;
      if (iVar29 == 0) {
        puVar33 = (uint *)0x5f;
      }
      goto code_r0x00110aa0;
    }
    break;
  case 0x6a:
    if (iVar22 != 0x45) {
      uVar19 = param_4[7];
      bVar2 = false;
      uVar4 = 3;
      puVar14 = (uint *)(ulong)(uVar19 + 1);
      uStack1216._0_1_ = (int)uVar19 < -1;
      bVar3 = -2 < (int)uVar19;
      uVar18 = 0;
      cVar16 = cVar24;
      goto code_r0x00110ab7;
    }
    break;
  case 0x6b:
    if (iVar22 != 0x45) {
      puVar14 = (uint *)(ulong)param_4[2];
      goto code_r0x00111814;
    }
    break;
  case 0x6c:
    if (iVar22 != 0x45) {
      puVar14 = (uint *)(ulong)uStack1168;
      goto code_r0x00111814;
    }
    break;
  case 0x6d:
    if (iVar22 != 0x45) {
      uVar19 = param_4[4];
      bVar2 = false;
      uVar4 = 2;
      puVar14 = (uint *)(ulong)(uVar19 + 1);
      uStack1216._0_1_ = (int)uVar19 < -1;
      bVar3 = -2 < (int)uVar19;
      uVar18 = 0;
      cVar16 = cVar24;
      goto code_r0x00110ab7;
    }
    break;
  case 0x6e:
    uVar4 = 0;
    if (-1 < (int)uVar19) {
      uVar4 = uVar19;
    }
    puVar15 = (uint *)(long)(int)uVar4;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)0x1;
    }
    if (puVar15 < (uint *)(param_2 - lVar32)) {
      if (param_1 != (char *)0x0) {
        if (1 < (int)uVar19) {
          param_1 = param_1 + (long)(int)uVar19 + -1;
          puStack1224 = puVar15;
          if ((iVar29 == 0x30) || (iVar29 == 0x2b)) {
            func_0x00103500();
          }
          else {
            func_0x00103500();
          }
        }
        *param_1 = '\n';
        param_1 = param_1 + 1;
      }
      goto code_r0x00110b78;
    }
    goto code_r0x0011060c;
  case 0x70:
    bVar11 = 0;
code_r0x00110b88:
    if (bVar21 == 0) {
      cVar16 = 'p';
      bVar21 = bVar11;
    }
    else {
      puStack1224 = (uint *)0x0;
      cVar16 = 'p';
    }
code_r0x00110905:
    if (iVar22 != 0) {
      uVar4 = 0;
      goto code_r0x00110adc;
    }
    pcVar17 = &cStack1099;
    goto code_r0x0011092a;
  case 0x71:
    uVar4 = 1;
    if (iVar22 == 0x4f) goto code_r0x00110acc;
    bVar2 = false;
    uStack1216._0_1_ = false;
    uVar18 = 0;
    puVar14 = (uint *)(ulong)(((int)(param_4[4] * 0xb) >> 5) + 1);
    uVar4 = 1;
    goto code_r0x00111070;
  case 0x72:
code_r0x00110902:
    bVar21 = 0;
    goto code_r0x00110905;
  case 0x73:
                    /* WARNING: Load size is inaccurate */
    auVar1 = *(undefined *)param_4;
    uStack1112 = *(undefined8 *)(param_4 + 0xc);
    uStack1160 = SUB164(auVar1,0);
    uStack1156 = SUB164(auVar1 >> 0x20,0);
    uStack1152 = SUB164(auVar1 >> 0x40,0);
    uStack1148 = SUB164(auVar1 >> 0x60,0);
    puVar26 = (uint *)((ulong)puVar26 & 0xffffffff);
                    /* WARNING: Load size is inaccurate */
    auVar1 = *(undefined *)(param_4 + 4);
    uStack1144 = SUB164(auVar1,0);
    uStack1140 = SUB164(auVar1 >> 0x20,0);
    uStack1136 = SUB164(auVar1 >> 0x40,0);
    uStack1132 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
    auVar1 = *(undefined *)(param_4 + 8);
    uStack1128 = SUB164(auVar1,0);
    uStack1124 = SUB164(auVar1 >> 0x20,0);
    uStack1120 = SUB164(auVar1 >> 0x40,0);
    uStack1116 = SUB164(auVar1 >> 0x60,0);
    puVar31 = (uint *)mktime_z(SUB168(auVar1,0),param_9,&uStack1160);
    puVar28 = (uint *)0x6666666666666667;
    uStack1216 = (uint)puVar26;
    puVar23 = (uint *)(acStack1074 + 1);
    puVar14 = puVar31;
    do {
      puVar15 = (uint *)((long)puVar14 / 10);
      cVar16 = (char)puVar14 + (char)puVar15 * -10;
      if ((long)puVar31 < 0) {
        cVar16 = -cVar16;
      }
      puVar23 = (uint *)((long)puVar23 + -1);
      *(char *)puVar23 = cVar16 + '0';
      puVar14 = puVar15;
    } while (puVar15 != (uint *)0x0);
    uVar4 = 1;
    if (0 < (int)uStack1216) {
      uVar4 = uStack1216;
    }
    if ((long)puVar31 < 0) goto code_r0x00111958;
    goto code_r0x00111379;
  case 0x74:
    uVar4 = 0;
    if (-1 < (int)uVar19) {
      uVar4 = uVar19;
    }
    puVar15 = (uint *)(long)(int)uVar4;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)0x1;
    }
    if (puVar15 < (uint *)(param_2 - lVar32)) {
      if (param_1 != (char *)0x0) {
        if (1 < (int)uVar19) {
          param_1 = param_1 + (long)(int)uVar19 + -1;
          puStack1224 = puVar15;
          if ((iVar29 == 0x30) || (iVar29 == 0x2b)) {
            func_0x00103500();
          }
          else {
            func_0x00103500();
          }
        }
        *param_1 = '\t';
        param_1 = param_1 + 1;
      }
      goto code_r0x00110b78;
    }
    goto code_r0x0011060c;
  case 0x75:
    puVar14 = (uint *)(ulong)((int)(param_4[6] + 6) % 7 + 1);
    uVar4 = 1;
    goto code_r0x00110aa0;
  case 0x77:
    if (iVar22 != 0x45) {
      puVar14 = (uint *)(ulong)param_4[6];
      uVar4 = 1;
      goto code_r0x00110aa0;
    }
    break;
  case 0x79:
    if (iVar22 != 0x45) {
      uVar4 = (int)param_4[5] % 100;
      puVar14 = (uint *)(ulong)uVar4;
      if (-1 < (int)uVar4) goto joined_r0x00110f1c;
      puVar14 = (uint *)(ulong)(uVar4 + 100);
      if (-0x76d < (int)param_4[5]) goto joined_r0x00110f1c;
      puVar14 = (uint *)(ulong)-uVar4;
      goto joined_r0x00110f1c;
    }
code_r0x00111aca:
    uVar4 = 0;
    goto code_r0x00110acc;
  case 0x7a:
    lVar9 = 0;
code_r0x00110f6f:
    puVar15 = (uint *)(ulong)param_4[8];
    if ((int)param_4[8] < 0) goto code_r0x00110672;
    uStack1216._0_1_ = true;
    iVar12 = (int)*(undefined8 *)(param_4 + 10);
    if ((-1 < iVar12) && (uStack1216._0_1_ = false, iVar12 == 0)) {
      uStack1216._0_1_ = *pcVar7 == '-';
    }
    uVar30 = iVar12 / 0xe10;
    uVar5 = (iVar12 / 0x3c) % 0x3c;
    param_3 = puVar23;
    if (lVar9 == 1) {
code_r0x00111e42:
      bVar2 = true;
      uVar4 = 6;
      bVar3 = (bool)(uStack1216._0_1_ ^ 1);
      puVar14 = (uint *)(ulong)(uVar30 * 100 + uVar5);
      uVar18 = 4;
      cVar16 = cVar24;
      goto code_r0x00110ab7;
    }
    if (lVar9 == 0) {
      uVar18 = 0;
      bVar2 = true;
      uVar4 = 5;
      puVar14 = (uint *)(ulong)(uVar30 * 100 + uVar5);
      bVar3 = (bool)(uStack1216._0_1_ ^ 1);
      cVar16 = cVar24;
      goto code_r0x00110ab7;
    }
    if (lVar9 == 2) {
code_r0x00111df5:
      bVar2 = true;
      uVar4 = 9;
      uVar18 = 0x14;
      puVar14 = (uint *)(ulong)(iVar12 % 0x3c + uVar30 * 10000 + uVar5 * 100);
      bVar3 = (bool)(uStack1216._0_1_ ^ 1);
      cVar16 = cVar24;
      goto code_r0x00110ab7;
    }
    if (lVar9 == 3) {
      if (iVar12 % 0x3c == 0) {
        if (uVar5 == 0) {
          puVar14 = (uint *)(ulong)uVar30;
          bVar2 = true;
          uVar4 = 3;
          bVar3 = (bool)(uStack1216._0_1_ ^ 1);
          cVar16 = cVar24;
          uVar18 = uVar5;
          goto code_r0x00110ab7;
        }
        goto code_r0x00111e42;
      }
      goto code_r0x00111df5;
    }
    cVar16 = *(char *)puVar23;
code_r0x00111739:
    puVar10 = (uint *)(param_2 - lVar32);
    uVar4 = 0;
    if (-1 < (int)uVar19) {
      uVar4 = uVar19;
    }
    puVar8 = (uint *)(long)(int)uVar4;
    if (cVar16 != '%') break;
    puVar15 = (uint *)0x1;
    if (puVar8 != (uint *)0x0) {
      puVar15 = puVar8;
    }
    puVar23 = (uint *)0x1;
    puVar14 = param_3;
    goto code_r0x001107d1;
  }
  iVar22 = 1;
  puVar14 = param_3;
  do {
    puVar14 = (uint *)((long)puVar14 + -1);
    iVar22 = iVar22 + 1;
  } while (*(char *)puVar14 != '%');
  puVar23 = (uint *)(long)iVar22;
  puVar10 = (uint *)(param_2 - lVar32);
  uVar4 = 0;
  if (-1 < (int)uVar19) {
    uVar4 = uVar19;
  }
  puVar8 = (uint *)(long)(int)uVar4;
  puVar15 = puVar23;
  if (puVar23 <= puVar8) {
    puVar15 = puVar8;
  }
code_r0x001107d1:
  if (puVar15 < puVar10) {
    if (param_1 != (char *)0x0) {
      pcVar17 = param_1;
      if (puVar23 < puVar8) {
        pcVar17 = param_1 + ((long)(int)uVar19 - (long)puVar23);
        if ((iVar29 == 0x30) || (iVar29 == 0x2b)) {
          func_0x00103500(param_1,0x30);
        }
        else {
          func_0x00103500(param_1,0x20);
        }
      }
      if ((byte)puStack1224 == '\0') {
        func_0x001035f0(pcVar17,puVar14,puVar23);
      }
      else {
        memcpy_uppcase();
      }
      param_1 = pcVar17 + (long)puVar23;
      puStack1224 = puVar23;
    }
    lVar32 = lVar32 + (long)puVar15;
    puVar28 = puVar31;
    puVar23 = param_3;
    goto code_r0x00110672;
  }
code_r0x0011060c:
  lVar32 = 0;
code_r0x0011060f:
  cVar24 = (char)puVar14;
  iVar22 = (int)puVar28;
  uVar4 = (uint)puVar15;
  param_3 = (uint *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (param_3 == (uint *)0x0) {
    return lVar32;
  }
  func_0x00103420();
code_r0x00111fda:
  puVar14 = (uint *)(ulong)(uVar4 + 100);
  iVar29 = (int)puVar33;
joined_r0x00110f1c:
  if (iVar29 == 0) {
code_r0x0011154a:
    puVar33 = (uint *)((ulong)param_6 & 0xffffffff);
    bVar3 = true;
    if (iVar25 == 0x2b) {
      uStack1216._0_1_ = false;
      uVar4 = 2;
      bVar3 = true;
code_r0x001116c0:
      puVar33 = (uint *)0x2b;
      bVar2 = (int)uVar4 < (int)puVar26;
      cVar16 = cVar24;
      uVar18 = 0;
    }
    else {
      bVar2 = false;
      uStack1216._0_1_ = false;
      uVar4 = 2;
      cVar16 = cVar24;
      uVar18 = 0;
    }
  }
  else {
code_r0x00110f22:
    bVar3 = true;
    uStack1216._0_1_ = false;
code_r0x00110f2c:
    if ((int)puVar33 == 0x2b) {
code_r0x001116a3:
      uVar4 = 2;
      uVar19 = 99;
code_r0x001116ad:
      bVar2 = true;
      puVar33 = (uint *)0x2b;
      if ((uint)puVar14 <= uVar19) goto code_r0x001116c0;
code_r0x00110de9:
      cVar16 = cVar24;
      uVar18 = 0;
    }
    else {
code_r0x00110f36:
      bVar2 = false;
      uVar4 = 2;
      cVar16 = cVar24;
      uVar18 = 0;
    }
  }
code_r0x00110ab7:
  uVar19 = (uint)puVar26;
  cVar27 = (char)iVar22;
  if ((iVar22 == 0x4f) && (bVar3 != false)) {
code_r0x00110acc:
    bVar21 = 0;
code_r0x00110adc:
    puVar31 = (uint *)(ulong)uVar4;
    pcVar17 = acStack1098;
    cStack1099 = cVar27;
code_r0x0011092a:
    uStack1101 = 0x2520;
    puVar10 = (uint *)&uStack1096;
    *pcVar17 = cVar16;
    pcVar17[1] = '\0';
    puVar15 = param_4;
    puVar14 = puVar10;
    puVar28 = puVar31;
    lVar9 = func_0x00103730();
    puVar23 = param_3;
    if (lVar9 != 0) {
      puVar26 = (uint *)(long)(int)uVar19;
      puVar15 = (uint *)(lVar9 - 1);
      puVar23 = (uint *)0x0;
      if (-1 < (int)uVar19) {
        puVar23 = puVar26;
      }
      puVar8 = puVar23;
      if (puVar23 <= puVar15) {
        puVar8 = puVar15;
      }
      if (puVar8 < (uint *)(param_2 - lVar32)) {
        if (param_1 != (char *)0x0) {
          pcVar17 = param_1;
          if (((int)puVar31 == 0) && (puVar15 < puVar23)) {
            pcVar17 = param_1 + ((long)(int)uVar19 - (long)puVar15);
            if (((int)puVar33 == 0x30) || ((int)puVar33 == 0x2b)) {
              func_0x00103500(param_1,0x30);
            }
            else {
              func_0x00103500(param_1,0x20);
            }
          }
          puVar23 = (uint *)(&uStack1096 + 1);
          puStack1224 = puVar15;
          if (bVar21 == 0) {
            if ((byte)puStack1224 == '\0') goto code_r0x001112a1;
            goto code_r0x00110a31;
          }
          memcpy_lowcase(pcVar17,puVar23,puVar15);
          goto code_r0x00110a3b;
        }
        goto code_r0x00110a3e;
      }
      goto code_r0x0011060c;
    }
  }
  else {
    if (uStack1216._0_1_ != false) {
      puVar14 = (uint *)(ulong)(uint)-(int)puVar14;
    }
code_r0x00111070:
    puVar28 = (uint *)(acStack1074 + 1);
    do {
      puVar23 = (uint *)((long)puVar28 + -1);
      if ((uVar18 & 1) != 0) {
        puVar23 = (uint *)((long)puVar28 + -2);
        *(undefined *)((long)puVar28 + -1) = 0x3a;
        puVar28 = (uint *)((long)puVar28 + -1);
      }
      uVar18 = (int)uVar18 >> 1;
      puVar15 = (uint *)((ulong)puVar14 / 10);
      *(char *)((long)puVar28 + -1) = (char)puVar14 + (char)puVar15 * -10 + '0';
      puVar14 = puVar15;
      puVar28 = puVar23;
    } while ((uVar18 | (uint)puVar15) != 0);
    if ((int)uVar4 <= (int)(uint)puVar26) {
      uVar4 = (uint)puVar26;
    }
    if (uStack1216._0_1_ == false) {
      if (bVar2) {
        if ((int)puVar33 == 0x2d) {
          puVar33 = (uint *)0x2b;
          goto code_r0x00111967;
        }
        cVar16 = '+';
        pcVar17 = param_1;
code_r0x001110f4:
        puVar14 = (uint *)&uStack1096;
        puVar15 = (uint *)(acStack1074 + (1 - (long)puVar23));
        puVar10 = (uint *)(param_2 - lVar32);
        iVar29 = (uVar4 - 1) - (int)puVar15;
        iVar22 = (int)puVar26;
        iVar12 = (int)puVar33;
        param_1 = pcVar17;
        if (iVar29 < 1) {
          iVar29 = 0;
          if (-1 < iVar22) {
            iVar29 = iVar22;
          }
          puVar31 = (uint *)(long)iVar29;
          puVar8 = (uint *)0x1;
          if (puVar31 != (uint *)0x0) {
            puVar8 = puVar31;
          }
          puVar28 = puVar31;
          if (puVar10 <= puVar8) goto code_r0x0011060c;
          if (pcVar17 != (char *)0x0) {
            if ((uVar4 == 0) && ((uint *)0x1 < puVar31)) {
              pcVar17 = pcVar17 + (long)iVar22 + -1;
              if ((iVar12 == 0x30) || (iVar12 == 0x2b)) {
                func_0x00103500();
                puVar26 = (uint *)((ulong)puVar26 & 0xffffffff);
              }
              else {
                func_0x00103500();
                puVar26 = (uint *)((ulong)puVar26 & 0xffffffff);
              }
            }
            param_1 = pcVar17 + 1;
            *pcVar17 = cVar16;
          }
          lVar32 = lVar32 + (long)puVar8;
          puVar10 = (uint *)(param_2 - lVar32);
        }
        else {
          if (iVar12 == 0x5f) goto code_r0x00111ad6;
          if (puVar10 <= (uint *)(long)(int)uVar4) goto code_r0x0011060c;
          iVar6 = 0;
          if (-1 < iVar22) {
            iVar6 = iVar22;
          }
          puVar8 = (uint *)(long)iVar6;
          puVar31 = (uint *)0x1;
          if (puVar8 != (uint *)0x0) {
            puVar31 = puVar8;
          }
          if (puVar10 <= puVar31) goto code_r0x0011060c;
          lVar32 = lVar32 + (long)puVar31;
          puVar14 = (uint *)(long)iVar29;
          if (pcVar17 != (char *)0x0) {
            if ((uVar4 == 0) && ((uint *)0x1 < puVar8)) {
              pcVar17 = pcVar17 + (long)iVar22 + -1;
              if ((iVar12 == 0x30) || (iVar12 == 0x2b)) {
                func_0x00103500();
              }
              else {
                func_0x00103500();
              }
            }
            param_1 = pcVar17 + 1;
            *pcVar17 = cVar16;
            goto code_r0x001111ce;
          }
code_r0x00111204:
          lVar32 = lVar32 + (long)puVar14;
          puVar31 = (uint *)0x0;
          puVar26 = (uint *)0x0;
          puVar10 = (uint *)(param_2 - lVar32);
        }
      }
      else {
code_r0x00111379:
        puVar14 = (uint *)&uStack1096;
        puVar15 = (uint *)(acStack1074 + (1 - (long)puVar23));
        puVar10 = (uint *)(param_2 - lVar32);
        if (((int)puVar33 == 0x2d) || (iVar29 = uVar4 - (int)puVar15, iVar29 < 1)) {
          iVar29 = 0;
          if (-1 < (int)puVar26) {
            iVar29 = (int)puVar26;
          }
          puVar31 = (uint *)(long)iVar29;
          goto code_r0x00111215;
        }
        if ((int)puVar33 != 0x5f) {
          if ((uint *)(long)(int)uVar4 < puVar10) {
            puVar14 = (uint *)(long)iVar29;
code_r0x001111ce:
            if (param_1 != (char *)0x0) {
              func_0x00103500(param_1,0x30,puVar14);
              param_1 = param_1 + (long)puVar14;
            }
            goto code_r0x00111204;
          }
          goto code_r0x0011060c;
        }
        cVar16 = '\0';
code_r0x00111ad6:
        puVar14 = (uint *)&uStack1096;
        iVar22 = (int)puVar26;
        puVar33 = (uint *)(long)iVar29;
        if (puVar10 <= puVar33) goto code_r0x0011060c;
        pcVar17 = param_1;
        if (param_1 != (char *)0x0) {
          pcVar17 = param_1 + (long)puVar33;
          func_0x00103500(param_1,0x20,puVar33);
        }
        lVar32 = lVar32 + (long)puVar33;
        puVar26 = (uint *)0x0;
        if (iVar29 < iVar22) {
          puVar26 = (uint *)(ulong)(uint)(iVar22 - iVar29);
        }
        puVar10 = (uint *)(param_2 - lVar32);
        param_1 = pcVar17;
        if (cVar16 == '\0') {
          puVar14 = (uint *)(acStack1074 + 1);
          puVar31 = (uint *)(long)(int)puVar26;
          puVar33 = (uint *)0x5f;
          puVar15 = (uint *)((long)puVar14 - (long)puVar23);
        }
        else {
          puVar31 = (uint *)(long)(int)puVar26;
          puVar8 = (uint *)0x1;
          if (puVar31 != (uint *)0x0) {
            puVar8 = puVar31;
          }
          puVar33 = puVar31;
          if (puVar10 <= puVar8) goto code_r0x0011060c;
          if (pcVar17 != (char *)0x0) {
            if ((uVar4 == 0) && ((uint *)0x1 < puVar31)) {
              func_0x00103500(pcVar17,0x20,(long)puVar31 + -1);
              pcVar17 = pcVar17 + (long)puVar31 + -1;
            }
            param_1 = pcVar17 + 1;
            *pcVar17 = cVar16;
          }
          puVar14 = (uint *)(acStack1074 + 1);
          lVar32 = lVar32 + (long)puVar8;
          puVar15 = (uint *)((long)puVar14 - (long)puVar23);
          puVar33 = (uint *)0x5f;
          puVar10 = (uint *)(param_2 - lVar32);
        }
      }
    }
    else {
code_r0x00111958:
      cVar16 = '-';
      pcVar17 = param_1;
      if ((int)puVar33 != 0x2d) goto code_r0x001110f4;
code_r0x00111967:
      puVar14 = (uint *)&uStack1096;
      iVar22 = (int)puVar26;
      iVar29 = 0;
      if (-1 < iVar22) {
        iVar29 = iVar22;
      }
      puVar31 = (uint *)(long)iVar29;
      puVar10 = (uint *)0x1;
      if (puVar31 != (uint *)0x0) {
        puVar10 = puVar31;
      }
      puVar28 = puVar31;
      if ((uint *)(param_2 - lVar32) <= puVar10) goto code_r0x0011060c;
      if (param_1 != (char *)0x0) {
        if ((uVar4 == 0) && ((uint *)0x1 < puVar31)) {
          puVar26 = (uint *)((ulong)puVar26 & 0xffffffff);
          func_0x00103500(param_1,0x20,(long)iVar22 + -1);
          param_1 = param_1 + (long)iVar22 + -1;
        }
        *param_1 = (char)puVar33;
        param_1 = param_1 + 1;
      }
      lVar32 = lVar32 + (long)puVar10;
      puVar33 = (uint *)0x2d;
      puVar15 = (uint *)(acStack1074 + (1 - (long)puVar23));
      puVar10 = (uint *)(param_2 - lVar32);
    }
code_r0x00111215:
    puVar8 = puVar31;
    if (puVar31 <= puVar15) {
      puVar8 = puVar15;
    }
    puVar28 = puVar31;
    if (puVar10 <= puVar8) goto code_r0x0011060c;
    if (param_1 != (char *)0x0) {
      pcVar17 = param_1;
      if ((uVar4 == 0) && (puVar15 < puVar31)) {
        pcVar17 = param_1 + ((long)(int)puVar26 - (long)puVar15);
        if (((int)puVar33 == 0x30) || ((int)puVar33 == 0x2b)) {
          func_0x00103500(param_1,0x30);
        }
        else {
          func_0x00103500(param_1,0x20);
        }
      }
      puVar10 = puVar14;
      puStack1224 = puVar15;
      if ((byte)puStack1224 == '\0') {
code_r0x001112a1:
        func_0x001035f0(pcVar17,puVar23,puVar15);
        puStack1224 = puVar15;
      }
      else {
code_r0x00110a31:
        memcpy_uppcase();
      }
code_r0x00110a3b:
      param_1 = pcVar17 + (long)puStack1224;
      puVar15 = puStack1224;
      puVar14 = puVar10;
      puVar28 = puVar31;
    }
code_r0x00110a3e:
    lVar32 = lVar32 + (long)puVar8;
    puVar23 = param_3;
  }
code_r0x00110672:
  cVar16 = *(char *)((long)puVar23 + 1);
  param_3 = (uint *)((long)puVar23 + 1);
  puVar26 = (uint *)0xffffffffffffffff;
  if (cVar16 != '\0') goto code_r0x001105de;
code_r0x0011068c:
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
  }
  goto code_r0x0011060f;
}

