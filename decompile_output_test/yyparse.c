
/* WARNING: Could not reconcile some variable overlaps */

undefined8 yyparse(byte **param_1)

{
  short *psVar1;
  undefined auVar2 [16];
  short sVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 uVar21;
  uint *puVar22;
  byte bVar23;
  short *psVar24;
  undefined1 *puVar25;
  uint *puVar26;
  ulong uVar27;
  uint *puVar28;
  ulong uVar29;
  byte *pbVar30;
  undefined *puVar31;
  char *pcVar32;
  byte *pbVar33;
  byte *pbVar34;
  uint uVar35;
  int iVar36;
  ulong uVar37;
  int iVar38;
  byte *pbVar39;
  long lVar40;
  byte **ppbVar41;
  byte **ppbVar42;
  long in_FS_OFFSET;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  byte *pbStack1520;
  byte *pbStack1512;
  ulong uStack1504;
  byte *pbStack1496;
  byte *pbStack1488;
  int iStack1476;
  long lStack1472;
  byte *pbStack1464;
  byte *pbStack1456;
  byte *pbStack1448;
  byte bStack1384;
  int7 iStack1383;
  undefined8 uStack1360;
  undefined auStack1352 [16];
  byte *pbStack1336;
  undefined4 uStack1320;
  undefined4 uStack1316;
  undefined4 uStack1312;
  undefined4 uStack1308;
  undefined4 uStack1304;
  undefined4 uStack1300;
  undefined4 uStack1296;
  undefined4 uStack1292;
  undefined4 uStack1288;
  undefined4 uStack1284;
  undefined4 uStack1280;
  undefined4 uStack1276;
  undefined8 uStack1272;
  short asStack1256 [19];
  short asStack1218 [5];
  byte *apbStack1208 [139];
  char acStack92 [4];
  undefined4 uStack88;
  uint uStack69;
  long lStack64;
  
  cVar13 = '&';
  uVar27 = 0;
  uVar37 = 0xfffffffe;
  asStack1256[0] = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  iStack1476 = 0;
  psVar24 = asStack1256;
  ppbVar42 = apbStack1208;
code_r0x00104daa:
  uVar35 = SEXT14(cVar13);
  pbVar34 = (byte *)(ulong)uVar35;
  uVar52 = (undefined4)((ulong)uStack1360 >> 0x20);
  uVar50 = SUB164(auStack1352 >> 0x20,0);
  uVar51 = SUB164(auStack1352 >> 0x40,0);
  uVar52 = SUB164(auStack1352 >> 0x60,0);
  if (uVar35 == 0xffffffa3) goto code_r0x00104df0;
  if ((int)uVar37 != -2) goto code_r0x00104dbe;
  pbVar18 = *param_1;
  uVar37 = (ulong)*pbVar18;
code_r0x00105455:
  uVar15 = (uint)uVar37;
  bVar23 = (byte)uVar37;
  uVar29 = uVar37;
  while (cVar13 = (char)uVar29, bVar23 < 0x21) {
    if ((1 << (bVar23 & 0x3f) & 0x100003e00U) == 0) {
      bVar12 = cVar13 - 0x2bU & 0xfd;
      goto code_r0x00105520;
    }
    pbVar18 = pbVar18 + 1;
    *param_1 = pbVar18;
    bVar23 = *pbVar18;
    uVar15 = (uint)bVar23;
    uVar29 = (ulong)bVar23;
  }
  bVar12 = cVar13 - 0x2bU & 0xfd;
  if (9 < (byte)(bVar23 - 0x30)) {
code_r0x00105520:
    if (bVar12 == 0) {
code_r0x001054cc:
      pbVar18 = *param_1;
      iVar36 = (-(uint)(cVar13 != '-') & 2) - 1;
      do {
        pbVar18 = pbVar18 + 1;
        *param_1 = pbVar18;
        bVar23 = *pbVar18;
        uVar37 = (ulong)bVar23;
        uVar29 = (ulong)bVar23;
        if (0x20 < bVar23) {
          if ((byte)(bVar23 - 0x30) < 10) goto code_r0x00106337;
          break;
        }
      } while ((1 << (bVar23 & 0x3f) & 0x100003e00U) != 0);
    }
    else {
      if ((uVar15 - 0x41 < 0x3a) &&
         ((1 << ((byte)(uVar15 - 0x41) & 0x3f) & 0x3ffffff03ffffffU) != 0)) {
        pbVar18 = *param_1;
        puVar22 = &uStack88;
        puVar26 = puVar22;
        do {
          pbVar18 = pbVar18 + 1;
          if (puVar26 < &uStack69) {
            *(char *)puVar26 = (char)uVar29;
            puVar26 = (uint *)((long)puVar26 + 1);
          }
          *param_1 = pbVar18;
          bVar23 = *pbVar18;
          uVar29 = (ulong)(uint)bVar23;
          uVar15 = (uint)bVar23 - 0x41;
        } while (((uVar15 < 0x3a) && ((1 << ((byte)uVar15 & 0x3f) & 0x3ffffff03ffffffU) != 0)) ||
                (bVar23 == 0x2e));
        *(char *)puVar26 = '\0';
        puVar26 = puVar22;
        cVar13 = (char)uStack88;
        while (cVar13 != '\0') {
          if ((byte)(cVar13 + 0x9fU) < 0x1a) {
            cVar13 = cVar13 + -0x20;
          }
          *(char *)puVar26 = cVar13;
          cVar13 = *(char *)(uint *)((long)puVar26 + 1);
          puVar26 = (uint *)((long)puVar26 + 1);
        }
        puVar25 = meridian_table;
        do {
          iVar36 = func_0x00102950();
          if (iVar36 == 0) goto code_r0x00105679;
          puVar25 = (undefined1 *)((char **)puVar25 + 2);
          puVar26 = puVar22;
        } while (*(char **)puVar25 != (char *)0x0);
        do {
          puVar28 = puVar26;
          uVar15 = *puVar28 + 0xfefefeff & ~*puVar28;
          uVar16 = uVar15 & 0x80808080;
          bVar23 = (byte)uVar16;
          puVar26 = puVar28 + 1;
        } while (uVar16 == 0);
        bVar44 = true;
        bVar43 = (uVar15 & 0x8080) == 0;
        if (bVar43) {
          bVar23 = (byte)(uVar16 >> 0x10);
        }
        if (bVar43) {
          puVar26 = (uint *)((long)puVar28 + 6);
        }
        lVar17 = (long)puVar26 + ((-3 - (ulong)CARRY1(bVar23,bVar23)) - (long)puVar22);
        if ((lVar17 != 3) && (bVar44 = false, lVar17 == 4)) {
          bVar44 = uStack88._3_1_ == '.';
        }
        pcVar32 = "JANUARY";
        puVar25 = month_and_day_table;
        do {
          if (bVar44) {
            iVar36 = func_0x00102760(puVar22,pcVar32,3);
          }
          else {
            iVar36 = func_0x00102950(puVar22);
          }
          bVar43 = iVar36 == 0;
          if (bVar43) {
            uVar27 = SEXT48((int)uVar27);
            goto code_r0x00105679;
          }
          puVar25 = (undefined1 *)((char **)puVar25 + 2);
          pcVar32 = *(char **)puVar25;
        } while (pcVar32 != (char *)0x0);
        uVar27 = SEXT48((int)uVar27);
        puVar25 = (undefined1 *)lookup_zone(param_1);
        if ((char **)puVar25 != (char **)0x0) goto code_r0x00105679;
        iVar36 = func_0x00102950(puVar22);
        if (iVar36 == 0) goto code_r0x00106835;
        puVar25 = time_units_table;
        do {
          iVar36 = func_0x00102950(puVar22);
          if (iVar36 == 0) goto code_r0x00105679;
          puVar25 = (undefined1 *)((char **)puVar25 + 2);
        } while (*(char **)puVar25 != (char *)0x0);
        pcVar32 = acStack92 + lVar17 + 3;
        if (*pcVar32 == 'S') {
          puVar25 = time_units_table;
          *pcVar32 = '\0';
          do {
            iVar36 = func_0x00102950(puVar22);
            if (iVar36 == 0) goto code_r0x00105679;
            puVar25 = (undefined1 *)((char **)puVar25 + 2);
          } while (*(char **)puVar25 != (char *)0x0);
          *pcVar32 = 'S';
        }
        puVar25 = relative_time_table;
        do {
          iVar36 = func_0x00102950(puVar22);
          if (iVar36 == 0) goto code_r0x00105679;
          puVar25 = (undefined1 *)((char **)puVar25 + 2);
        } while (*(char **)puVar25 != (char *)0x0);
        puVar26 = puVar22;
        if (lVar17 == 1) {
          puVar25 = military_table;
          pcVar32 = "A";
          do {
            if (*pcVar32 == (char)uStack88) goto code_r0x00105679;
            puVar25 = (undefined1 *)((char **)puVar25 + 2);
            pcVar32 = *(char **)puVar25;
          } while (pcVar32 != (char *)0x0);
        }
        while (cVar13 = *(char *)puVar22, *(char *)puVar26 = cVar13, cVar13 != '\0') {
          if (*(char *)puVar22 == '.') {
            bVar43 = true;
          }
          else {
            puVar26 = (uint *)((long)puVar26 + 1);
          }
          puVar22 = (uint *)((long)puVar22 + 1);
        }
        if ((bVar43) &&
           (puVar25 = (undefined1 *)lookup_zone(param_1), (char **)puVar25 != (char **)0x0))
        goto code_r0x00105679;
        if (*(char *)((long)param_1 + 0xd9) != '\0') {
          uVar21 = func_0x001027f0(0,&UNK_001101d1,5);
          dbg_printf(uVar21);
          uVar15 = 2;
          uVar37 = 0x3f;
          goto code_r0x0010542e;
        }
        goto code_r0x00106387;
      }
      if (cVar13 != '(') {
        *param_1 = pbVar18 + 1;
        uVar37 = (ulong)*pbVar18;
        if (*pbVar18 != 0) goto code_r0x00105420;
        goto code_r0x00105370;
      }
      lVar17 = 0;
      pbVar18 = *param_1;
      do {
        pbVar39 = pbVar18;
        pbVar18 = pbVar39 + 1;
        *param_1 = pbVar18;
        bVar23 = *pbVar39;
        if (bVar23 == 0) goto code_r0x00105370;
        if (bVar23 == 0x28) {
          lVar17 = lVar17 + 1;
        }
        else {
          lVar17 = lVar17 - (ulong)(bVar23 == 0x29);
        }
      } while (lVar17 != 0);
      uVar37 = (ulong)pbVar39[1];
    }
    goto code_r0x00105455;
  }
  if (bVar12 == 0) goto code_r0x001054cc;
  pbVar18 = *param_1;
  iVar36 = 0;
code_r0x00106337:
  lVar17 = 0;
  pbVar34 = pbVar18;
  do {
    pbVar39 = pbVar34;
    lVar40 = lVar17 * 10;
    lVar17 = SUB168(SEXT816(lVar17) * SEXT816(10) >> 0x40,0);
    if (lVar17 != 0 && lVar17 != -1) goto code_r0x00106387;
    iVar14 = 0x30 - (int)uVar29;
    if (iVar36 != -1) {
      iVar14 = (int)uVar29 + -0x30;
    }
    lVar17 = (long)iVar14 + lVar40;
    if (SCARRY8((long)iVar14,lVar40)) goto code_r0x00106387;
    bVar23 = pbVar39[1];
    uVar29 = (ulong)bVar23;
    pbVar34 = pbVar39 + 1;
  } while ((byte)(bVar23 - 0x30) < 10);
  if (((bVar23 & 0xfd) != 0x2c) || (9 < (byte)(pbVar39[2] - 0x30))) {
    *param_1 = pbVar34;
    bStack1384 = (byte)((uint)iVar36 >> 0x1f);
    pbStack1464 = pbVar34 + -(long)pbVar18;
    uVar15 = ~-(uint)(iVar36 == 0) + 0x14;
    uVar37 = (ulong)(~-(uint)(iVar36 == 0) + 0x113);
    lStack1472 = lVar17;
    goto code_r0x0010542e;
  }
  pbVar34 = pbVar39 + 3;
  uVar37 = (ulong)(uint)(int)(char)pbVar39[3];
  iVar14 = (int)(char)pbVar39[2] + -0x30;
  iVar38 = 8;
  do {
    iVar14 = iVar14 * 10;
    if ((byte)((char)uVar37 - 0x30U) < 10) {
      iVar14 = iVar14 + -0x30 + (int)uVar37;
      pbVar34 = pbVar34 + 1;
      uVar37 = (ulong)(uint)(int)(char)*pbVar34;
    }
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  if (iVar36 == -1) {
    while ((byte)((char)uVar37 - 0x30U) < 10) {
      if ((char)uVar37 != '0') {
        iVar14 = iVar14 + 1;
        break;
      }
      pbVar34 = pbVar34 + 1;
      uVar37 = (ulong)*pbVar34;
    }
  }
  while ((byte)((char)uVar37 - 0x30U) < 10) {
    pbVar34 = pbVar34 + 1;
    uVar37 = (ulong)*pbVar34;
  }
  if ((-1 < iVar36) || (iVar14 == 0)) {
    bStack1384 = (byte)lVar17;
    iStack1383 = (int7)((ulong)lVar17 >> 8);
    *param_1 = pbVar34;
    uVar15 = ~-(uint)(iVar36 == 0) + 0x16;
    uVar37 = (ulong)(~-(uint)(iVar36 == 0) + 0x115);
    lStack1472 = (long)iVar14;
    goto code_r0x0010542e;
  }
  if (lVar17 != -0x8000000000000000) {
    *param_1 = pbVar34;
    uVar37 = 0x114;
    bStack1384 = (byte)(lVar17 + -1);
    iStack1383 = (int7)((ulong)(lVar17 + -1) >> 8);
    uVar15 = 0x15;
    lStack1472 = (long)(1000000000 - iVar14);
    goto code_r0x0010542e;
  }
code_r0x00106387:
  uVar15 = 2;
  uVar37 = 0x3f;
code_r0x0010542e:
  pbVar34 = (byte *)(ulong)(uVar35 + uVar15);
code_r0x00105375:
  uVar35 = (uint)pbVar34;
  if (0x70 < uVar35) goto code_r0x00104df0;
code_r0x0010537f:
  pbVar34 = (byte *)(long)(int)uVar35;
  if ((int)(char)pbVar34[0x1111a0] != uVar15) goto code_r0x00104df0;
  bVar23 = pbVar34[0x111220];
  if (bVar23 == 0) {
    lVar17 = 0x38;
    uVar27 = 0;
    goto code_r0x00104e2d;
  }
  uVar27 = SEXT48((int)(uint)bVar23);
  uVar37 = 0xfffffffe;
  iStack1476 = iStack1476 + -1 + (uint)(iStack1476 == 0);
  ppbVar41 = ppbVar42 + 7;
  *(int *)ppbVar41 = (int)CONCAT71(iStack1383,bStack1384);
  *(undefined4 *)((long)ppbVar42 + 0x3c) = (int)((uint7)iStack1383 >> 0x18);
  *(int *)(ppbVar42 + 8) = (int)lStack1472;
  *(undefined4 *)((long)ppbVar42 + 0x44) = (int)((ulong)lStack1472 >> 0x20);
  ppbVar42[0xd] = pbStack1336;
  *(int *)(ppbVar42 + 9) = (int)pbStack1464;
  *(undefined4 *)((long)ppbVar42 + 0x4c) = (int)((ulong)pbStack1464 >> 0x20);
  *(int *)(ppbVar42 + 10) = (int)uStack1360;
  *(undefined4 *)((long)ppbVar42 + 0x54) = uVar52;
  *(int *)(ppbVar42 + 0xb) = SUB164(auStack1352,0);
  *(undefined4 *)((long)ppbVar42 + 0x5c) = uVar50;
  *(undefined4 *)(ppbVar42 + 0xc) = uVar51;
  *(undefined4 *)((long)ppbVar42 + 100) = uVar52;
code_r0x001050df:
  psVar1 = psVar24 + 1;
  psVar24[1] = (short)uVar27;
  psVar24 = psVar1;
  ppbVar42 = ppbVar41;
  if (psVar1 < asStack1218) {
    if ((int)uVar27 != 0xc) {
      cVar13 = yypact[(int)uVar27];
      goto code_r0x00104daa;
    }
    uVar21 = 0;
  }
  else {
    uVar21 = 2;
  }
code_r0x0010532d:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar21;
  }
  func_0x00102830();
code_r0x00106835:
  puVar25 = dst_table;
code_r0x00105679:
  uVar37 = (ulong)*(uint *)((char **)puVar25 + 1);
  bStack1384 = (byte)*(undefined4 *)((long)puVar25 + 0xc);
  iStack1383 = (int7)(int3)((uint)*(undefined4 *)((long)puVar25 + 0xc) >> 8);
code_r0x00104dbe:
  uVar35 = (uint)pbVar34;
  if ((int)uVar37 < 1) goto code_r0x00105370;
  if ((int)uVar37 < 0x116) goto code_r0x00105420;
  uVar35 = uVar35 + 2;
  pbVar34 = (byte *)(ulong)uVar35;
  uVar15 = 2;
  if (uVar35 < 0x71) goto code_r0x0010537f;
code_r0x00104df0:
  bVar23 = yydefact[uVar27];
  if (bVar23 == 0) {
    ppbVar41 = param_1;
    if (iStack1476 == 3) {
      if ((int)uVar37 < 1) {
        if ((int)uVar37 == 0) goto code_r0x00105328;
      }
      else {
        uVar37 = 0xfffffffe;
      }
    }
    while( true ) {
      if (((((int)(char)yypact[uVar27] != -0x5d) &&
           (uVar35 = (int)(char)yypact[uVar27] + 1, uVar35 < 0x71)) &&
          (yycheck[(int)uVar35] == '\x01')) &&
         (uVar27 = (ulong)(byte)yytable[(int)uVar35], yytable[(int)uVar35] != 0)) {
        ppbVar41 = ppbVar42 + 7;
        iStack1476 = 3;
        *(int *)ppbVar41 = (int)CONCAT71(iStack1383,bStack1384);
        *(undefined4 *)((long)ppbVar42 + 0x3c) = (int)((uint7)iStack1383 >> 0x18);
        *(int *)(ppbVar42 + 8) = (int)lStack1472;
        *(undefined4 *)((long)ppbVar42 + 0x44) = (int)((ulong)lStack1472 >> 0x20);
        ppbVar42[0xd] = pbStack1336;
        *(int *)(ppbVar42 + 9) = (int)pbStack1464;
        *(undefined4 *)((long)ppbVar42 + 0x4c) = (int)((ulong)pbStack1464 >> 0x20);
        *(int *)(ppbVar42 + 10) = (int)uStack1360;
        *(undefined4 *)((long)ppbVar42 + 0x54) = uVar52;
        *(int *)(ppbVar42 + 0xb) = SUB164(auStack1352,0);
        *(undefined4 *)((long)ppbVar42 + 0x5c) = uVar50;
        *(undefined4 *)(ppbVar42 + 0xc) = uVar51;
        *(undefined4 *)((long)ppbVar42 + 100) = uVar52;
        goto code_r0x001050df;
      }
      if (psVar24 == asStack1256) break;
      psVar24 = psVar24 + -1;
      uVar27 = SEXT28(*psVar24);
      ppbVar42 = ppbVar42 + -7;
    }
    goto code_r0x00105328;
  }
  uVar27 = (ulong)(byte)yyr2[(int)(uint)bVar23];
  lVar17 = (long)(int)(1 - (uint)(byte)yyr2[(int)(uint)bVar23]) * 0x38;
code_r0x00104e2d:
  ppbVar41 = (byte **)(lVar17 + (long)ppbVar42);
  pbStack1512 = ppbVar41[2];
  uStack1272._4_4_ = (uint)((ulong)ppbVar41[6] >> 0x20);
  pbVar18 = *ppbVar41;
  pbVar39 = ppbVar41[1];
  pbStack1520 = ppbVar41[3];
  pbStack1488 = ppbVar41[4];
  pbStack1496 = ppbVar41[5];
                    /* WARNING: Load size is inaccurate */
  uVar21 = SUB168(*(undefined *)(ppbVar41 + 4),0);
  uStack1504 = (ulong)*(uint *)(ppbVar41 + 6);
  ppbVar41 = param_1;
  switch(bVar23) {
  case 4:
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)ppbVar42;
    uVar21 = SUB168(auVar2,0);
    puVar31 = &UNK_001101eb;
    *(int *)(param_1 + 0xb) = SUB164(auVar2,0);
    *(undefined4 *)((long)param_1 + 0x5c) = SUB164(auVar2 >> 0x20,0);
    *(int *)(param_1 + 0xc) = SUB164(auVar2 >> 0x40,0);
    *(undefined4 *)((long)param_1 + 100) = SUB164(auVar2 >> 0x60,0);
    *(undefined *)(param_1 + 0x14) = 1;
    break;
  default:
    goto code_r0x00104ff0;
  case 7:
    param_1[0x19] = param_1[0x19] + 1;
    param_1[0x15] = param_1[0x15] + 1;
    puVar31 = &UNK_001101fd;
    break;
  case 8:
    param_1[0x19] = param_1[0x19] + 1;
    puVar31 = &UNK_0010f7fe;
    break;
  case 9:
    param_1[0x17] = param_1[0x17] + 1;
    puVar31 = &UNK_00110206;
    break;
  case 10:
    param_1[0x1a] = param_1[0x1a] + 1;
    puVar31 = &UNK_0011020c;
    break;
  case 0xb:
    param_1[0x15] = param_1[0x15] + 1;
    puVar31 = &UNK_0010f8fa;
    break;
  case 0xc:
    param_1[0x16] = param_1[0x16] + 1;
    puVar31 = &UNK_00110211;
    break;
  case 0xd:
    puVar31 = &UNK_00110215;
    goto code_r0x001061db;
  case 0xe:
    uVar21 = func_0x001027f0(uVar21,0,&UNK_0011021e,5);
    cVar13 = *(char *)((long)param_1 + 0xd9);
    goto joined_r0x0010624f;
  case 0xf:
    puVar31 = &UNK_00110225;
code_r0x001061db:
    uVar21 = func_0x001027f0(uVar21,0,puVar31,5);
    cVar13 = *(char *)((long)param_1 + 0xd9);
joined_r0x00104fc5:
    if (cVar13 != '\0') {
      debug_print_relative_time_part_11(uVar21);
    }
    goto code_r0x00104ff0;
  case 0x12:
    pbVar19 = ppbVar42[-6];
    param_1[10] = (byte *)0x0;
    param_1[0xb] = (byte *)0x0;
    param_1[0xc] = (byte *)0x0;
    param_1[9] = pbVar19;
    *(undefined4 *)((long)param_1 + 0x1c) = (int)*ppbVar42;
    goto code_r0x00104ff0;
  case 0x13:
    pbVar19 = ppbVar42[-6];
    pbVar20 = ppbVar42[-0x14];
    param_1[0xb] = (byte *)0x0;
    param_1[0xc] = (byte *)0x0;
    param_1[10] = pbVar19;
    pbVar19 = *ppbVar42;
    param_1[9] = pbVar20;
    *(undefined4 *)((long)param_1 + 0x1c) = (int)pbVar19;
    goto code_r0x00104ff0;
  case 0x14:
    pbVar19 = ppbVar42[-0x14];
    pbVar20 = ppbVar42[-0x22];
    param_1[0xb] = ppbVar42[-7];
    iVar36 = *(int *)(ppbVar42 + -6);
    param_1[9] = pbVar20;
    param_1[10] = pbVar19;
    param_1[0xc] = (byte *)(long)iVar36;
    *(undefined4 *)((long)param_1 + 0x1c) = (int)*ppbVar42;
    goto code_r0x00104ff0;
  case 0x16:
    pbVar19 = ppbVar42[-6];
    param_1[10] = (byte *)0x0;
    param_1[0xb] = (byte *)0x0;
    param_1[0xc] = (byte *)0x0;
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    param_1[9] = pbVar19;
    goto code_r0x00104ff0;
  case 0x17:
    pbVar19 = ppbVar42[-6];
    pbVar20 = ppbVar42[-0x14];
    param_1[0xb] = (byte *)0x0;
    param_1[0xc] = (byte *)0x0;
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    param_1[9] = pbVar20;
    param_1[10] = pbVar19;
    goto code_r0x00104ff0;
  case 0x18:
    pbVar19 = ppbVar42[-7];
    pbVar20 = ppbVar42[-0x14];
    pbVar30 = ppbVar42[-0x22];
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    param_1[0xb] = pbVar19;
    iVar36 = *(int *)(ppbVar42 + -6);
    param_1[9] = pbVar30;
    param_1[10] = pbVar20;
    param_1[0xc] = (byte *)(long)iVar36;
    goto code_r0x00104ff0;
  case 0x1b:
    param_1[0x1a] = param_1[0x1a] + 1;
    pbVar34 = *ppbVar42;
    cVar13 = time_zone_hhmm_isra_4
                       (uVar21,param_1 + 3,(ulong)*(byte *)(ppbVar42 + -7),ppbVar42[-6],ppbVar42[-5]
                       );
    if (cVar13 == '\0') goto code_r0x00105328;
    goto code_r0x00104ff0;
  case 0x1c:
    *(undefined4 *)((long)param_1 + 0x14) = (int)*ppbVar42;
    goto code_r0x00104ff0;
  case 0x1d:
    *(undefined4 *)((long)param_1 + 0x14) = 1;
    param_1[0x18] = param_1[0x18] + 1;
    goto code_r0x00104ff0;
  case 0x1e:
    *(int *)(param_1 + 3) = (int)*ppbVar42;
    goto code_r0x00104ff0;
  case 0x1f:
    *(undefined4 *)(param_1 + 3) = 0x6270;
    goto code_r0x00104ff0;
  case 0x20:
    *(int *)(param_1 + 3) = (int)ppbVar42[-7];
    goto code_r0x00104eb8;
  case 0x21:
    *(undefined4 *)(param_1 + 3) = 0x6270;
code_r0x00104eb8:
    pbVar19 = *ppbVar42;
    pbVar20 = ppbVar42[2];
    pbVar30 = ppbVar42[3];
    pbVar33 = ppbVar42[4];
    pbVar7 = ppbVar42[5];
    pbVar8 = ppbVar42[1];
    bVar44 = SCARRY4(*(int *)(ppbVar42 + 6),*(int *)(param_1 + 0x13));
    pbVar34 = (byte *)(ulong)bVar44;
    *(int *)(param_1 + 0x13) = *(int *)(ppbVar42 + 6) + *(int *)(param_1 + 0x13);
    pbVar9 = param_1[0x12];
    param_1[0x12] = pbVar7 + (long)param_1[0x12];
    pbVar10 = param_1[0x11];
    param_1[0x11] = pbVar33 + (long)param_1[0x11];
    pbVar11 = param_1[0x10];
    pbVar5 = param_1[0xf];
    param_1[0x10] = pbVar30 + (long)param_1[0x10];
    param_1[0xf] = pbVar20 + (long)param_1[0xf];
    pbVar6 = param_1[0xe];
    param_1[0xe] = pbVar8 + (long)param_1[0xe];
    pbVar4 = param_1[0xd];
    param_1[0xd] = pbVar19 + (long)param_1[0xd];
    if (((byte)(SCARRY8((long)pbVar8,(long)pbVar6) |
               SCARRY8((long)pbVar7,(long)pbVar9) | bVar44 | SCARRY8((long)pbVar33,(long)pbVar10) |
               SCARRY8((long)pbVar30,(long)pbVar11) | SCARRY8((long)pbVar20,(long)pbVar5)) != 0) ||
       (SCARRY8((long)pbVar19,(long)pbVar4) != false)) goto code_r0x00105328;
    *(undefined *)((long)param_1 + 0xa1) = 1;
    uVar21 = func_0x001027f0(uVar21,0,&UNK_00110215,5);
    cVar13 = *(char *)((long)param_1 + 0xd9);
    goto joined_r0x00104fc5;
  case 0x22:
    pbVar34 = *ppbVar42;
    cVar13 = time_zone_hhmm_isra_4
                       (uVar21,param_1 + 3,(ulong)*(byte *)(ppbVar42 + -7),ppbVar42[-6],ppbVar42[-5]
                       );
    if ((cVar13 == '\0') ||
       (iVar36 = *(int *)(param_1 + 3), pbVar19 = ppbVar42[-0xe],
       pbVar20 = ppbVar42[-0xe] + (long)iVar36, iVar14 = (int)pbVar20,
       *(int *)(param_1 + 3) = iVar14, ppbVar41 = param_1,
       pbVar20 != (byte *)(long)iVar14 || SCARRY8((long)iVar36,(long)pbVar19)))
    goto code_r0x00105328;
    goto code_r0x00104ff0;
  case 0x23:
    *(int *)(param_1 + 3) = *(int *)ppbVar42 + 0xe10;
    goto code_r0x00104ff0;
  case 0x24:
    *(int *)(param_1 + 3) = *(int *)(ppbVar42 + -7) + 0xe10;
    goto code_r0x00104ff0;
  case 0x25:
    pbVar19 = *ppbVar42;
    param_1[1] = (byte *)0x0;
    *(int *)(param_1 + 2) = (int)pbVar19;
    goto code_r0x00104ff0;
  case 0x26:
    pbVar19 = ppbVar42[-7];
    param_1[1] = (byte *)0x0;
    *(int *)(param_1 + 2) = (int)pbVar19;
    goto code_r0x00104ff0;
  case 0x27:
    pbVar19 = ppbVar42[-7];
    *(undefined *)(param_1 + 0x1c) = 1;
    param_1[1] = pbVar19;
    *(int *)(param_1 + 2) = (int)*ppbVar42;
    goto code_r0x00104ff0;
  case 0x28:
    pbVar19 = ppbVar42[-6];
    *(undefined *)(param_1 + 0x1c) = 1;
    param_1[1] = pbVar19;
    *(int *)(param_1 + 2) = (int)*ppbVar42;
    goto code_r0x00104ff0;
  case 0x29:
    goto code_r0x00105a23;
  case 0x2a:
    pbVar19 = ppbVar42[-0x1a];
    if ((long)pbVar19 < 4) {
      pbVar19 = ppbVar42[-0x1b];
      if (*(char *)((long)param_1 + 0xd9) != '\0') {
        uVar21 = func_0x001027f0(uVar21,0,&UNK_00110740,5);
        dbg_printf(uVar21);
      }
      goto code_r0x00105e0c;
    }
    if (*(char *)((long)param_1 + 0xd9) != '\0') {
      pbVar20 = ppbVar42[-0x1b];
      uVar21 = func_0x001027f0(uVar21,0,&UNK_00110708,5);
      dbg_printf(uVar21,pbVar20,pbVar19,pbVar19);
    }
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)(ppbVar42 + -0x1c);
    pbVar19 = ppbVar42[-0x1a];
    *(int *)(param_1 + 4) = SUB164(auVar2,0);
    *(undefined4 *)((long)param_1 + 0x24) = SUB164(auVar2 >> 0x20,0);
    *(int *)(param_1 + 5) = SUB164(auVar2 >> 0x40,0);
    *(undefined4 *)((long)param_1 + 0x2c) = SUB164(auVar2 >> 0x60,0);
    param_1[6] = pbVar19;
code_r0x00105a23:
    param_1[7] = ppbVar42[-0xd];
    param_1[8] = ppbVar42[1];
    goto code_r0x00104ff0;
  case 0x2b:
    param_1[8] = ppbVar42[-0xd];
    param_1[7] = ppbVar42[-7];
    pbVar19 = ppbVar42[1];
    param_1[5] = (byte *)-(long)pbVar19;
joined_r0x00105ea7:
    if (pbVar19 != (byte *)0x8000000000000000) goto code_r0x00105e23;
    goto code_r0x00105328;
  case 0x2c:
    param_1[7] = ppbVar42[-0xe];
    pbVar19 = ppbVar42[-6];
    param_1[8] = (byte *)-(long)pbVar19;
    if (pbVar19 != (byte *)0x8000000000000000) {
      pbVar19 = ppbVar42[1];
      param_1[5] = (byte *)-(long)pbVar19;
      goto joined_r0x00105ea7;
    }
    goto code_r0x00105328;
  case 0x2d:
    param_1[7] = ppbVar42[-7];
    param_1[8] = ppbVar42[1];
    goto code_r0x00104ff0;
  case 0x2e:
    pbVar19 = ppbVar42[-0x15];
code_r0x00105e0c:
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)ppbVar42;
    param_1[7] = pbVar19;
    pbVar19 = ppbVar42[-0xd];
    *(int *)(param_1 + 4) = SUB164(auVar2,0);
    *(undefined4 *)((long)param_1 + 0x24) = SUB164(auVar2 >> 0x20,0);
    *(int *)(param_1 + 5) = SUB164(auVar2 >> 0x40,0);
    *(undefined4 *)((long)param_1 + 0x2c) = SUB164(auVar2 >> 0x60,0);
    param_1[8] = pbVar19;
code_r0x00105e23:
    param_1[6] = ppbVar42[2];
    goto code_r0x00104ff0;
  case 0x2f:
    param_1[8] = ppbVar42[-6];
    param_1[7] = *ppbVar42;
    goto code_r0x00104ff0;
  case 0x30:
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)ppbVar42;
    param_1[8] = ppbVar42[-0xd];
    pbVar19 = ppbVar42[-7];
    *(int *)(param_1 + 4) = SUB164(auVar2,0);
    *(undefined4 *)((long)param_1 + 0x24) = SUB164(auVar2 >> 0x20,0);
    *(int *)(param_1 + 5) = SUB164(auVar2 >> 0x40,0);
    *(undefined4 *)((long)param_1 + 0x2c) = SUB164(auVar2 >> 0x60,0);
    param_1[7] = pbVar19;
    param_1[6] = ppbVar42[2];
    goto code_r0x00104ff0;
  case 0x32:
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)(ppbVar42 + -0xe);
    param_1[6] = ppbVar42[-0xc];
    pbVar19 = ppbVar42[-6];
    *(int *)(param_1 + 4) = SUB164(auVar2,0);
    *(undefined4 *)((long)param_1 + 0x24) = SUB164(auVar2 >> 0x20,0);
    *(int *)(param_1 + 5) = SUB164(auVar2 >> 0x40,0);
    *(undefined4 *)((long)param_1 + 0x2c) = SUB164(auVar2 >> 0x60,0);
    param_1[7] = (byte *)-(long)pbVar19;
    if ((pbVar19 == (byte *)0x8000000000000000) ||
       (pbVar19 = ppbVar42[1], param_1[8] = (byte *)-(long)pbVar19,
       pbVar19 == (byte *)0x8000000000000000)) goto code_r0x00105328;
    goto code_r0x00104ff0;
  case 0x33:
    pbVar19 = ppbVar42[-7];
    pbVar34 = ppbVar42[-3];
    pbVar20 = ppbVar42[-2];
    iVar36 = *(int *)(ppbVar42 + -1);
    iVar14 = *(int *)(param_1 + 0x13);
    pbVar30 = param_1[0x12];
    pbVar33 = ppbVar42[-6];
    pbVar7 = ppbVar42[-5];
    pbVar8 = ppbVar42[-4];
    pbVar9 = param_1[0x11];
    pbVar10 = param_1[0x10];
    pbVar11 = param_1[0xf];
    pbVar5 = param_1[0xe];
    pbVar6 = param_1[0xd];
    if (*(int *)ppbVar42 < 0) {
      bVar45 = SBORROW4(iVar14,iVar36);
      *(int *)(param_1 + 0x13) = iVar14 - iVar36;
      bVar46 = SBORROW8((long)pbVar30,(long)pbVar20);
      bVar47 = SBORROW8((long)pbVar9,(long)pbVar34);
      param_1[0x11] = pbVar9 + -(long)pbVar34;
      bVar43 = SBORROW8((long)pbVar10,(long)pbVar8);
      param_1[0x12] = pbVar30 + -(long)pbVar20;
      param_1[0x10] = pbVar10 + -(long)pbVar8;
      bVar48 = SBORROW8((long)pbVar11,(long)pbVar7);
      param_1[0xf] = pbVar11 + -(long)pbVar7;
      bVar49 = SBORROW8((long)pbVar5,(long)pbVar33);
      param_1[0xe] = pbVar5 + -(long)pbVar33;
      bVar44 = SBORROW8((long)pbVar6,(long)pbVar19);
      pbVar19 = (byte *)-(long)pbVar19;
    }
    else {
      bVar45 = SCARRY4(iVar14,iVar36);
      *(int *)(param_1 + 0x13) = iVar14 + iVar36;
      bVar46 = SCARRY8((long)pbVar30,(long)pbVar20);
      bVar47 = SCARRY8((long)pbVar9,(long)pbVar34);
      param_1[0x11] = pbVar9 + (long)pbVar34;
      bVar43 = SCARRY8((long)pbVar10,(long)pbVar8);
      param_1[0x12] = pbVar30 + (long)pbVar20;
      param_1[0x10] = pbVar10 + (long)pbVar8;
      bVar48 = SCARRY8((long)pbVar11,(long)pbVar7);
      param_1[0xf] = pbVar11 + (long)pbVar7;
      bVar49 = SCARRY8((long)pbVar5,(long)pbVar33);
      param_1[0xe] = pbVar5 + (long)pbVar33;
      bVar44 = SCARRY8((long)pbVar6,(long)pbVar19);
    }
    pbVar34 = (byte *)(ulong)bVar45;
    param_1[0xd] = pbVar6 + (long)pbVar19;
    bVar44 = (bool)(bVar46 | bVar45 | bVar47 | bVar43 | bVar48 | bVar49 | bVar44);
    goto joined_r0x00105848;
  case 0x34:
  case 0x35:
    pbStack1456 = *ppbVar42;
    pbVar34 = (byte *)0x0;
    pbVar19 = ppbVar42[2];
    pbVar20 = ppbVar42[3];
    pbVar30 = ppbVar42[4];
    pbVar33 = ppbVar42[5];
    pbStack1448 = ppbVar42[1];
    iVar36 = *(int *)(ppbVar42 + 6) + *(int *)(param_1 + 0x13);
    if (SCARRY4(*(int *)(ppbVar42 + 6),*(int *)(param_1 + 0x13))) {
code_r0x00105ce4:
      pbVar34 = (byte *)0x1;
    }
    goto code_r0x001057af;
  case 0x36:
    pbVar18 = ppbVar42[-7];
    goto code_r0x00105745;
  case 0x37:
  case 0x4b:
    pbVar18 = ppbVar42[-6];
code_r0x00105745:
    uStack1272._4_4_ = 0;
    uStack1504 = 0;
    pbStack1496 = (byte *)0x0;
    pbVar39 = (byte *)0x0;
    pbStack1488 = (byte *)0x0;
    pbStack1520 = (byte *)0x0;
    pbStack1512 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x38:
    uStack1272._4_4_ = 0;
    uStack1504 = 0;
    pbVar39 = (byte *)0x0;
    pbStack1496 = (byte *)0x0;
    pbStack1488 = (byte *)0x0;
    pbVar18 = (byte *)0x1;
    pbStack1520 = (byte *)0x0;
    pbStack1512 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x39:
    pbVar39 = ppbVar42[-7];
    goto code_r0x001056c0;
  case 0x3a:
  case 0x4c:
    pbVar39 = ppbVar42[-6];
code_r0x001056c0:
    uStack1272._4_4_ = 0;
    uStack1504 = 0;
    pbStack1496 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    pbStack1488 = (byte *)0x0;
    pbStack1520 = (byte *)0x0;
    pbStack1512 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x3b:
    uStack1272._4_4_ = 0;
    uStack1504 = 0;
    pbVar39 = (byte *)0x1;
    pbStack1496 = (byte *)0x0;
    pbStack1488 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    pbStack1520 = (byte *)0x0;
    pbStack1512 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x3c:
    bVar44 = false;
    pbStack1512 = (byte *)((long)ppbVar42[-7] * (long)*ppbVar42);
    lVar17 = SUB168(SEXT816((long)ppbVar42[-7]) * SEXT816((long)*ppbVar42) >> 0x40,0);
    if (lVar17 != 0 && lVar17 != -1) {
code_r0x00105c4c:
      bVar44 = true;
    }
    goto code_r0x00105942;
  case 0x3d:
  case 0x4d:
    bVar44 = false;
    pbStack1512 = (byte *)((long)ppbVar42[-6] * (long)*ppbVar42);
    lVar17 = SUB168(SEXT816((long)ppbVar42[-6]) * SEXT816((long)*ppbVar42) >> 0x40,0);
    if (lVar17 != 0 && lVar17 != -1) goto code_r0x00105c4c;
code_r0x00105942:
    if (bVar44) goto code_r0x00105328;
code_r0x00105950:
    uStack1272._4_4_ = 0;
    uStack1504 = 0;
    pbStack1496 = (byte *)0x0;
    pbVar39 = (byte *)0x0;
    pbStack1488 = (byte *)0x0;
    pbStack1520 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x3e:
  case 0x51:
    pbStack1512 = *ppbVar42;
    goto code_r0x00105950;
  case 0x3f:
    pbStack1520 = ppbVar42[-7];
    goto code_r0x0010586a;
  case 0x40:
  case 0x4e:
    pbStack1520 = ppbVar42[-6];
code_r0x0010586a:
    uStack1272._4_4_ = 0;
    uStack1504 = 0;
    pbVar39 = (byte *)0x0;
    pbStack1496 = (byte *)0x0;
    pbStack1488 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    pbStack1512 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x41:
    uStack1272._4_4_ = 0;
    uStack1504 = 0;
    pbVar39 = (byte *)0x0;
    pbStack1496 = (byte *)0x0;
    pbStack1488 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    pbStack1520 = (byte *)0x1;
    pbStack1512 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x42:
    pbStack1488 = ppbVar42[-7];
    goto code_r0x00105703;
  case 0x43:
  case 0x4f:
    pbStack1488 = ppbVar42[-6];
code_r0x00105703:
    uStack1272._4_4_ = 0;
    uStack1504 = 0;
    pbVar39 = (byte *)0x0;
    pbStack1496 = (byte *)0x0;
    pbStack1520 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    pbStack1512 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x44:
    uStack1272._4_4_ = 0;
    uStack1504 = 0;
    pbVar39 = (byte *)0x0;
    pbStack1496 = (byte *)0x0;
    pbStack1488 = (byte *)0x1;
    pbVar18 = (byte *)0x0;
    pbStack1520 = (byte *)0x0;
    pbStack1512 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x45:
    pbStack1496 = ppbVar42[-7];
    goto code_r0x001058ee;
  case 0x46:
  case 0x50:
    pbStack1496 = ppbVar42[-6];
code_r0x001058ee:
    uStack1504 = 0;
    goto code_r0x001058b9;
  case 0x47:
  case 0x48:
    pbStack1496 = ppbVar42[-7];
    uStack1504 = (ulong)*(uint *)(ppbVar42 + -6);
    goto code_r0x001058b9;
  case 0x49:
    uStack1504 = 0;
    pbStack1496 = (byte *)0x1;
code_r0x001058b9:
    uStack1272._4_4_ = 0;
    pbStack1488 = (byte *)0x0;
    pbStack1520 = (byte *)0x0;
    pbVar39 = (byte *)0x0;
    pbStack1512 = (byte *)0x0;
    pbVar18 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x55:
  case 0x57:
    pbVar18 = ppbVar42[1];
    pbVar39 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x58:
    digits_to_date_time(uVar21,param_1);
    goto code_r0x00104ff0;
  case 0x59:
    digits_to_date_time(uVar21,param_1);
    pbStack1456 = *ppbVar42;
    pbVar34 = (byte *)0x0;
    pbVar19 = ppbVar42[2];
    pbVar20 = ppbVar42[3];
    pbVar30 = ppbVar42[4];
    pbVar33 = ppbVar42[5];
    pbStack1448 = ppbVar42[1];
    iVar36 = *(int *)(ppbVar42 + 6) + *(int *)(param_1 + 0x13);
    if (SCARRY4(*(int *)(ppbVar42 + 6),*(int *)(param_1 + 0x13))) goto code_r0x00105ce4;
code_r0x001057af:
    *(int *)(param_1 + 0x13) = iVar36;
    pbVar7 = param_1[0x12];
    param_1[0x12] = pbVar33 + (long)param_1[0x12];
    pbVar8 = param_1[0x11];
    param_1[0x11] = pbVar30 + (long)param_1[0x11];
    pbVar9 = param_1[0x10];
    param_1[0x10] = pbVar20 + (long)param_1[0x10];
    pbVar10 = param_1[0xf];
    param_1[0xf] = pbVar19 + (long)param_1[0xf];
    pbVar11 = param_1[0xe];
    param_1[0xe] = pbStack1448 + (long)param_1[0xe];
    bVar44 = SCARRY8((long)pbStack1456,(long)param_1[0xd]);
    param_1[0xd] = pbStack1456 + (long)param_1[0xd];
    if ((byte)(SCARRY8((long)pbStack1448,(long)pbVar11) |
              SCARRY8((long)pbVar33,(long)pbVar7) | (byte)pbVar34 |
              SCARRY8((long)pbVar30,(long)pbVar8) | SCARRY8((long)pbVar20,(long)pbVar9) |
              SCARRY8((long)pbVar19,(long)pbVar10)) != 0) {
code_r0x00105328:
      uVar21 = 1;
      param_1 = ppbVar41;
      goto code_r0x0010532d;
    }
joined_r0x00105848:
    if (bVar44 != false) goto code_r0x00105328;
    *(undefined *)((long)param_1 + 0xa1) = 1;
code_r0x00104ff0:
    uStack1320 = SUB84(pbVar18,0);
    uStack1316 = (undefined4)((ulong)pbVar18 >> 0x20);
    uStack1312 = SUB84(pbVar39,0);
    uStack1308 = (undefined4)((ulong)pbVar39 >> 0x20);
    uStack1304 = SUB84(pbStack1512,0);
    uStack1300 = (undefined4)((ulong)pbStack1512 >> 0x20);
    ppbVar42 = ppbVar42 + uVar27 * 0x1ffffffffffffff9;
    psVar24 = psVar24 + uVar27 * 0x7fffffffffffffff;
    ppbVar41 = ppbVar42 + 7;
    uStack1296 = SUB84(pbStack1520,0);
    uStack1292 = (undefined4)((ulong)pbStack1520 >> 0x20);
    *(undefined4 *)(ppbVar42 + 7) = uStack1320;
    *(undefined4 *)((long)ppbVar42 + 0x3c) = uStack1316;
    *(undefined4 *)(ppbVar42 + 8) = uStack1312;
    *(undefined4 *)((long)ppbVar42 + 0x44) = uStack1308;
    uStack1288 = SUB84(pbStack1488,0);
    uStack1284 = (undefined4)((ulong)pbStack1488 >> 0x20);
    uStack1280 = SUB84(pbStack1496,0);
    uStack1276 = (undefined4)((ulong)pbStack1496 >> 0x20);
    *(undefined4 *)(ppbVar42 + 9) = uStack1304;
    *(undefined4 *)((long)ppbVar42 + 0x4c) = uStack1300;
    *(undefined4 *)(ppbVar42 + 10) = uStack1296;
    *(undefined4 *)((long)ppbVar42 + 0x54) = uStack1292;
    uStack1272 = (byte *)(uStack1504 | (ulong)uStack1272._4_4_ << 0x20);
    sVar3 = *psVar24;
    ppbVar42[0xd] = uStack1272;
    *(undefined4 *)(ppbVar42 + 0xb) = uStack1288;
    *(undefined4 *)((long)ppbVar42 + 0x5c) = uStack1284;
    *(undefined4 *)(ppbVar42 + 0xc) = uStack1280;
    *(undefined4 *)((long)ppbVar42 + 100) = uStack1276;
    uVar35 = (int)(char)yypgoto[(int)((uint)(byte)yyr1[bVar23] - 0x1c)] + (int)sVar3;
    if ((uVar35 < 0x71) && (sVar3 == (short)(char)yycheck[(int)uVar35])) {
      uVar27 = (ulong)(byte)yytable[(int)uVar35];
    }
    else {
      uVar27 = SEXT18((char)yydefgoto[(int)((uint)(byte)yyr1[bVar23] - 0x1c)]);
    }
    goto code_r0x001050df;
  case 0x5a:
    pbVar18 = (byte *)0xffffffffffffffff;
    goto code_r0x00104ff0;
  case 0x5b:
    pbVar18 = ppbVar42[1];
    goto code_r0x00104ff0;
  }
  uVar21 = func_0x001027f0(uVar21,0,puVar31,5);
  cVar13 = *(char *)((long)param_1 + 0xd9);
joined_r0x0010624f:
  if (cVar13 != '\0') {
    debug_print_current_time_part_10(uVar21);
  }
  goto code_r0x00104ff0;
code_r0x00105370:
  uVar15 = 0;
  uVar37 = 0;
  goto code_r0x00105375;
code_r0x00105420:
  uVar15 = (uint)(byte)yytranslate[(int)uVar37];
  goto code_r0x0010542e;
}

