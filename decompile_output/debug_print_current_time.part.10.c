
/* WARNING: Could not reconcile some variable overlaps */

undefined8 debug_print_current_time_part_10(undefined *param_1,long param_2)

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
  undefined8 uVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
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
  byte **ppbVar33;
  byte *pbVar34;
  byte *pbVar35;
  uint uVar36;
  int iVar37;
  ulong uVar38;
  int iVar39;
  byte *pbVar40;
  long lVar41;
  byte **ppbVar42;
  undefined8 unaff_R12;
  ulong unaff_R13;
  byte **ppbVar43;
  long in_FS_OFFSET;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  byte *pbStack1672;
  byte *pbStack1664;
  ulong uStack1656;
  byte *pbStack1648;
  byte *pbStack1640;
  int iStack1628;
  long lStack1624;
  byte *pbStack1616;
  byte *pbStack1608;
  byte *pbStack1600;
  byte bStack1536;
  int7 iStack1535;
  undefined8 uStack1512;
  undefined auStack1504 [16];
  byte *pbStack1488;
  undefined4 uStack1472;
  undefined4 uStack1468;
  undefined4 uStack1464;
  undefined4 uStack1460;
  undefined4 uStack1456;
  undefined4 uStack1452;
  undefined4 uStack1448;
  undefined4 uStack1444;
  undefined4 uStack1440;
  undefined4 uStack1436;
  undefined4 uStack1432;
  undefined4 uStack1428;
  undefined8 uStack1424;
  short asStack1408 [19];
  short asStack1370 [5];
  byte *apbStack1360 [139];
  char acStack244 [4];
  undefined4 uStack240;
  uint uStack221;
  long lStack216;
  long lStack200;
  undefined *puStack192;
  undefined8 uStack184;
  ulong uStack176;
  undefined auStack152 [104];
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = func_0x001027f0(0,&UNK_001100cf,5);
  dbg_printf(uVar17,param_1);
  if ((*(long *)(param_2 + 0xa8) == 0) || (*(char *)(param_2 + 0xda) != '\0')) {
    if (*(char *)(param_2 + 0xd8) != *(char *)(param_2 + 0xdf)) goto code_r0x001049da;
    bVar23 = 0;
  }
  else {
    func_0x00102af0(stderr,1,&UNK_00110151,*(undefined8 *)(param_2 + 0x28),
                    *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
    *(undefined *)(param_2 + 0xda) = 1;
    bVar23 = 1;
    if (*(char *)(param_2 + 0xd8) != *(char *)(param_2 + 0xdf)) {
      func_0x00102910(0x20,stderr);
code_r0x001049da:
      param_1 = *(undefined **)(param_2 + 0x28);
      uVar17 = func_0x001027f0(0,&UNK_0011016b,5);
      func_0x00102af0(stderr,1,uVar17);
      bVar23 = 1;
      *(undefined *)(param_2 + 0xdf) = *(undefined *)(param_2 + 0xd8);
    }
  }
  if ((*(long *)(param_2 + 200) == 0) || (*(char *)(param_2 + 0xdd) != '\0')) {
    if ((*(long *)(param_2 + 0xb0) != 0) && (*(char *)(param_2 + 0xdb) == '\0')) {
      if (bVar23 != 0) goto code_r0x00104c8f;
      goto code_r0x00104a4e;
    }
  }
  else {
    func_0x00102af0(stderr,1,&UNK_00110177 + (bVar23 ^ 1),*(undefined8 *)(param_2 + 0x48),
                    *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
    if (*(long *)(param_2 + 0x60) != 0) {
      func_0x00102af0(stderr,1,&UNK_0011018a);
    }
    if (*(int *)(param_2 + 0x1c) == 1) {
      func_0x00102ae0(&UNK_00110190,1,2);
    }
    *(undefined *)(param_2 + 0xdd) = 1;
    bVar23 = 1;
    if ((*(long *)(param_2 + 0xb0) != 0) && (bVar23 = *(byte *)(param_2 + 0xdb), bVar23 == 0)) {
code_r0x00104c8f:
      func_0x00102910(0x20,stderr);
code_r0x00104a4e:
      unaff_R13 = (ulong)*(uint *)(param_2 + 0x10);
      unaff_R12 = *(undefined8 *)(param_2 + 8);
      param_1 = (undefined *)str_days_constprop_13(param_2,auStack152);
      uVar17 = func_0x001027f0(0,&UNK_001106e8,5);
      func_0x00102af0(stderr,1,uVar17,param_1,unaff_R12,unaff_R13);
      *(undefined *)(param_2 + 0xdb) = 1;
      bVar23 = 1;
    }
  }
  if ((*(long *)(param_2 + 0xb8) == 0) || (*(char *)(param_2 + 0xdc) != '\0')) {
    if ((*(long *)(param_2 + 0xd0) != 0) && (*(char *)(param_2 + 0xde) == '\0')) {
      param_1 = &UNK_0011014a + (bVar23 ^ 1);
      goto code_r0x00104cd0;
    }
    if (*(char *)(param_2 + 0xa0) == '\0') goto code_r0x00104b84;
    param_2 = *(long *)(param_2 + 0x58);
    if (bVar23 != 0) goto code_r0x00104b1b;
  }
  else {
    func_0x00102af0(stderr,1,&UNK_00110193 + (bVar23 ^ 1));
    *(undefined *)(param_2 + 0xdc) = 1;
    if ((*(long *)(param_2 + 0xd0) != 0) && (*(char *)(param_2 + 0xde) == '\0')) {
      param_1 = &UNK_0011014a;
code_r0x00104cd0:
      time_zone_str((ulong)*(uint *)(param_2 + 0x18),auStack152);
      func_0x00102af0(stderr,1,param_1);
      *(undefined *)(param_2 + 0xde) = 1;
    }
    if (*(char *)(param_2 + 0xa0) == '\0') goto code_r0x00104b84;
    param_2 = *(long *)(param_2 + 0x58);
code_r0x00104b1b:
    func_0x00102910(0x20,stderr);
  }
  uVar17 = func_0x001027f0(0,&UNK_0011019f,5);
  func_0x00102af0(stderr,1,uVar17);
code_r0x00104b84:
  ppbVar33 = (byte **)0xa;
  func_0x00102910();
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x00102830();
  uStack176 = unaff_R13;
  uStack184 = unaff_R12;
  puStack192 = param_1;
  lStack200 = param_2;
  cVar13 = '&';
  uVar27 = 0;
  uVar38 = 0xfffffffe;
  asStack1408[0] = 0;
  lStack216 = *(long *)(in_FS_OFFSET + 0x28);
  iStack1628 = 0;
  psVar24 = asStack1408;
  ppbVar43 = apbStack1360;
code_r0x00104daa:
  uVar36 = SEXT14(cVar13);
  pbVar35 = (byte *)(ulong)uVar36;
  uVar53 = (undefined4)((ulong)uStack1512 >> 0x20);
  uVar51 = SUB164(auStack1504 >> 0x20,0);
  uVar52 = SUB164(auStack1504 >> 0x40,0);
  uVar53 = SUB164(auStack1504 >> 0x60,0);
  if (uVar36 == 0xffffffa3) goto code_r0x00104df0;
  if ((int)uVar38 != -2) goto code_r0x00104dbe;
  pbVar19 = *ppbVar33;
  uVar38 = (ulong)*pbVar19;
code_r0x00105455:
  uVar15 = (uint)uVar38;
  bVar23 = (byte)uVar38;
  uVar29 = uVar38;
  while (cVar13 = (char)uVar29, bVar23 < 0x21) {
    if ((1 << (bVar23 & 0x3f) & 0x100003e00U) == 0) {
      bVar12 = cVar13 - 0x2bU & 0xfd;
      goto code_r0x00105520;
    }
    pbVar19 = pbVar19 + 1;
    *ppbVar33 = pbVar19;
    bVar23 = *pbVar19;
    uVar15 = (uint)bVar23;
    uVar29 = (ulong)bVar23;
  }
  bVar12 = cVar13 - 0x2bU & 0xfd;
  if (9 < (byte)(bVar23 - 0x30)) {
code_r0x00105520:
    if (bVar12 == 0) {
code_r0x001054cc:
      pbVar19 = *ppbVar33;
      iVar37 = (-(uint)(cVar13 != '-') & 2) - 1;
      do {
        pbVar19 = pbVar19 + 1;
        *ppbVar33 = pbVar19;
        bVar23 = *pbVar19;
        uVar38 = (ulong)bVar23;
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
        pbVar19 = *ppbVar33;
        puVar22 = &uStack240;
        puVar26 = puVar22;
        do {
          pbVar19 = pbVar19 + 1;
          if (puVar26 < &uStack221) {
            *(char *)puVar26 = (char)uVar29;
            puVar26 = (uint *)((long)puVar26 + 1);
          }
          *ppbVar33 = pbVar19;
          bVar23 = *pbVar19;
          uVar29 = (ulong)(uint)bVar23;
          uVar15 = (uint)bVar23 - 0x41;
        } while (((uVar15 < 0x3a) && ((1 << ((byte)uVar15 & 0x3f) & 0x3ffffff03ffffffU) != 0)) ||
                (bVar23 == 0x2e));
        *(char *)puVar26 = '\0';
        puVar26 = puVar22;
        cVar13 = (char)uStack240;
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
          iVar37 = func_0x00102950();
          if (iVar37 == 0) goto code_r0x00105679;
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
        bVar45 = true;
        bVar44 = (uVar15 & 0x8080) == 0;
        if (bVar44) {
          bVar23 = (byte)(uVar16 >> 0x10);
        }
        if (bVar44) {
          puVar26 = (uint *)((long)puVar28 + 6);
        }
        lVar18 = (long)puVar26 + ((-3 - (ulong)CARRY1(bVar23,bVar23)) - (long)puVar22);
        if ((lVar18 != 3) && (bVar45 = false, lVar18 == 4)) {
          bVar45 = uStack240._3_1_ == '.';
        }
        pcVar32 = "JANUARY";
        puVar25 = month_and_day_table;
        do {
          if (bVar45) {
            iVar37 = func_0x00102760(puVar22,pcVar32,3);
          }
          else {
            iVar37 = func_0x00102950(puVar22);
          }
          bVar44 = iVar37 == 0;
          if (bVar44) {
            uVar27 = SEXT48((int)uVar27);
            goto code_r0x00105679;
          }
          puVar25 = (undefined1 *)((char **)puVar25 + 2);
          pcVar32 = *(char **)puVar25;
        } while (pcVar32 != (char *)0x0);
        uVar27 = SEXT48((int)uVar27);
        puVar25 = (undefined1 *)lookup_zone(ppbVar33);
        if ((char **)puVar25 != (char **)0x0) goto code_r0x00105679;
        iVar37 = func_0x00102950(puVar22);
        if (iVar37 == 0) goto code_r0x00106835;
        puVar25 = time_units_table;
        do {
          iVar37 = func_0x00102950(puVar22);
          if (iVar37 == 0) goto code_r0x00105679;
          puVar25 = (undefined1 *)((char **)puVar25 + 2);
        } while (*(char **)puVar25 != (char *)0x0);
        pcVar32 = acStack244 + lVar18 + 3;
        if (*pcVar32 == 'S') {
          puVar25 = time_units_table;
          *pcVar32 = '\0';
          do {
            iVar37 = func_0x00102950(puVar22);
            if (iVar37 == 0) goto code_r0x00105679;
            puVar25 = (undefined1 *)((char **)puVar25 + 2);
          } while (*(char **)puVar25 != (char *)0x0);
          *pcVar32 = 'S';
        }
        puVar25 = relative_time_table;
        do {
          iVar37 = func_0x00102950(puVar22);
          if (iVar37 == 0) goto code_r0x00105679;
          puVar25 = (undefined1 *)((char **)puVar25 + 2);
        } while (*(char **)puVar25 != (char *)0x0);
        puVar26 = puVar22;
        if (lVar18 == 1) {
          puVar25 = military_table;
          pcVar32 = "A";
          do {
            if (*pcVar32 == (char)uStack240) goto code_r0x00105679;
            puVar25 = (undefined1 *)((char **)puVar25 + 2);
            pcVar32 = *(char **)puVar25;
          } while (pcVar32 != (char *)0x0);
        }
        while (cVar13 = *(char *)puVar22, *(char *)puVar26 = cVar13, cVar13 != '\0') {
          if (*(char *)puVar22 == '.') {
            bVar44 = true;
          }
          else {
            puVar26 = (uint *)((long)puVar26 + 1);
          }
          puVar22 = (uint *)((long)puVar22 + 1);
        }
        if ((bVar44) &&
           (puVar25 = (undefined1 *)lookup_zone(ppbVar33), (char **)puVar25 != (char **)0x0))
        goto code_r0x00105679;
        if (*(char *)((long)ppbVar33 + 0xd9) != '\0') {
          uVar17 = func_0x001027f0(0,&UNK_001101d1,5);
          dbg_printf(uVar17);
          uVar15 = 2;
          uVar38 = 0x3f;
          goto code_r0x0010542e;
        }
        goto code_r0x00106387;
      }
      if (cVar13 != '(') {
        *ppbVar33 = pbVar19 + 1;
        uVar38 = (ulong)*pbVar19;
        if (*pbVar19 != 0) goto code_r0x00105420;
        goto code_r0x00105370;
      }
      lVar18 = 0;
      pbVar19 = *ppbVar33;
      do {
        pbVar40 = pbVar19;
        pbVar19 = pbVar40 + 1;
        *ppbVar33 = pbVar19;
        bVar23 = *pbVar40;
        if (bVar23 == 0) goto code_r0x00105370;
        if (bVar23 == 0x28) {
          lVar18 = lVar18 + 1;
        }
        else {
          lVar18 = lVar18 - (ulong)(bVar23 == 0x29);
        }
      } while (lVar18 != 0);
      uVar38 = (ulong)pbVar40[1];
    }
    goto code_r0x00105455;
  }
  if (bVar12 == 0) goto code_r0x001054cc;
  pbVar19 = *ppbVar33;
  iVar37 = 0;
code_r0x00106337:
  lVar18 = 0;
  pbVar35 = pbVar19;
  do {
    pbVar40 = pbVar35;
    lVar41 = lVar18 * 10;
    lVar18 = SUB168(SEXT816(lVar18) * SEXT816(10) >> 0x40,0);
    if (lVar18 != 0 && lVar18 != -1) goto code_r0x00106387;
    iVar14 = 0x30 - (int)uVar29;
    if (iVar37 != -1) {
      iVar14 = (int)uVar29 + -0x30;
    }
    lVar18 = (long)iVar14 + lVar41;
    if (SCARRY8((long)iVar14,lVar41)) goto code_r0x00106387;
    bVar23 = pbVar40[1];
    uVar29 = (ulong)bVar23;
    pbVar35 = pbVar40 + 1;
  } while ((byte)(bVar23 - 0x30) < 10);
  if (((bVar23 & 0xfd) != 0x2c) || (9 < (byte)(pbVar40[2] - 0x30))) {
    *ppbVar33 = pbVar35;
    bStack1536 = (byte)((uint)iVar37 >> 0x1f);
    pbStack1616 = pbVar35 + -(long)pbVar19;
    uVar15 = ~-(uint)(iVar37 == 0) + 0x14;
    uVar38 = (ulong)(~-(uint)(iVar37 == 0) + 0x113);
    lStack1624 = lVar18;
    goto code_r0x0010542e;
  }
  pbVar35 = pbVar40 + 3;
  uVar38 = (ulong)(uint)(int)(char)pbVar40[3];
  iVar14 = (int)(char)pbVar40[2] + -0x30;
  iVar39 = 8;
  do {
    iVar14 = iVar14 * 10;
    if ((byte)((char)uVar38 - 0x30U) < 10) {
      iVar14 = iVar14 + -0x30 + (int)uVar38;
      pbVar35 = pbVar35 + 1;
      uVar38 = (ulong)(uint)(int)(char)*pbVar35;
    }
    iVar39 = iVar39 + -1;
  } while (iVar39 != 0);
  if (iVar37 == -1) {
    while ((byte)((char)uVar38 - 0x30U) < 10) {
      if ((char)uVar38 != '0') {
        iVar14 = iVar14 + 1;
        break;
      }
      pbVar35 = pbVar35 + 1;
      uVar38 = (ulong)*pbVar35;
    }
  }
  while ((byte)((char)uVar38 - 0x30U) < 10) {
    pbVar35 = pbVar35 + 1;
    uVar38 = (ulong)*pbVar35;
  }
  if ((-1 < iVar37) || (iVar14 == 0)) {
    bStack1536 = (byte)lVar18;
    iStack1535 = (int7)((ulong)lVar18 >> 8);
    *ppbVar33 = pbVar35;
    uVar15 = ~-(uint)(iVar37 == 0) + 0x16;
    uVar38 = (ulong)(~-(uint)(iVar37 == 0) + 0x115);
    lStack1624 = (long)iVar14;
    goto code_r0x0010542e;
  }
  if (lVar18 != -0x8000000000000000) {
    *ppbVar33 = pbVar35;
    uVar38 = 0x114;
    bStack1536 = (byte)(lVar18 + -1);
    iStack1535 = (int7)((ulong)(lVar18 + -1) >> 8);
    uVar15 = 0x15;
    lStack1624 = (long)(1000000000 - iVar14);
    goto code_r0x0010542e;
  }
code_r0x00106387:
  uVar15 = 2;
  uVar38 = 0x3f;
code_r0x0010542e:
  pbVar35 = (byte *)(ulong)(uVar36 + uVar15);
code_r0x00105375:
  uVar36 = (uint)pbVar35;
  if (0x70 < uVar36) goto code_r0x00104df0;
code_r0x0010537f:
  pbVar35 = (byte *)(long)(int)uVar36;
  if ((int)(char)pbVar35[0x1111a0] != uVar15) goto code_r0x00104df0;
  bVar23 = pbVar35[0x111220];
  if (bVar23 == 0) {
    lVar18 = 0x38;
    uVar27 = 0;
    goto code_r0x00104e2d;
  }
  uVar27 = SEXT48((int)(uint)bVar23);
  uVar38 = 0xfffffffe;
  iStack1628 = iStack1628 + -1 + (uint)(iStack1628 == 0);
  ppbVar42 = ppbVar43 + 7;
  *(int *)ppbVar42 = (int)CONCAT71(iStack1535,bStack1536);
  *(undefined4 *)((long)ppbVar43 + 0x3c) = (int)((uint7)iStack1535 >> 0x18);
  *(int *)(ppbVar43 + 8) = (int)lStack1624;
  *(undefined4 *)((long)ppbVar43 + 0x44) = (int)((ulong)lStack1624 >> 0x20);
  ppbVar43[0xd] = pbStack1488;
  *(int *)(ppbVar43 + 9) = (int)pbStack1616;
  *(undefined4 *)((long)ppbVar43 + 0x4c) = (int)((ulong)pbStack1616 >> 0x20);
  *(int *)(ppbVar43 + 10) = (int)uStack1512;
  *(undefined4 *)((long)ppbVar43 + 0x54) = uVar53;
  *(int *)(ppbVar43 + 0xb) = SUB164(auStack1504,0);
  *(undefined4 *)((long)ppbVar43 + 0x5c) = uVar51;
  *(undefined4 *)(ppbVar43 + 0xc) = uVar52;
  *(undefined4 *)((long)ppbVar43 + 100) = uVar53;
code_r0x001050df:
  psVar1 = psVar24 + 1;
  psVar24[1] = (short)uVar27;
  psVar24 = psVar1;
  ppbVar43 = ppbVar42;
  if (psVar1 < asStack1370) {
    if ((int)uVar27 != 0xc) {
      cVar13 = yypact[(int)uVar27];
      goto code_r0x00104daa;
    }
    uVar17 = 0;
  }
  else {
    uVar17 = 2;
  }
code_r0x0010532d:
  if (lStack216 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
  func_0x00102830();
code_r0x00106835:
  puVar25 = dst_table;
code_r0x00105679:
  uVar38 = (ulong)*(uint *)((char **)puVar25 + 1);
  bStack1536 = (byte)*(undefined4 *)((long)puVar25 + 0xc);
  iStack1535 = (int7)(int3)((uint)*(undefined4 *)((long)puVar25 + 0xc) >> 8);
code_r0x00104dbe:
  uVar36 = (uint)pbVar35;
  if ((int)uVar38 < 1) goto code_r0x00105370;
  if ((int)uVar38 < 0x116) goto code_r0x00105420;
  uVar36 = uVar36 + 2;
  pbVar35 = (byte *)(ulong)uVar36;
  uVar15 = 2;
  if (uVar36 < 0x71) goto code_r0x0010537f;
code_r0x00104df0:
  bVar23 = yydefact[uVar27];
  if (bVar23 == 0) {
    ppbVar42 = ppbVar33;
    if (iStack1628 == 3) {
      if ((int)uVar38 < 1) {
        if ((int)uVar38 == 0) goto code_r0x00105328;
      }
      else {
        uVar38 = 0xfffffffe;
      }
    }
    while( true ) {
      if (((((int)(char)yypact[uVar27] != -0x5d) &&
           (uVar36 = (int)(char)yypact[uVar27] + 1, uVar36 < 0x71)) &&
          (yycheck[(int)uVar36] == '\x01')) &&
         (uVar27 = (ulong)(byte)yytable[(int)uVar36], yytable[(int)uVar36] != 0)) {
        ppbVar42 = ppbVar43 + 7;
        iStack1628 = 3;
        *(int *)ppbVar42 = (int)CONCAT71(iStack1535,bStack1536);
        *(undefined4 *)((long)ppbVar43 + 0x3c) = (int)((uint7)iStack1535 >> 0x18);
        *(int *)(ppbVar43 + 8) = (int)lStack1624;
        *(undefined4 *)((long)ppbVar43 + 0x44) = (int)((ulong)lStack1624 >> 0x20);
        ppbVar43[0xd] = pbStack1488;
        *(int *)(ppbVar43 + 9) = (int)pbStack1616;
        *(undefined4 *)((long)ppbVar43 + 0x4c) = (int)((ulong)pbStack1616 >> 0x20);
        *(int *)(ppbVar43 + 10) = (int)uStack1512;
        *(undefined4 *)((long)ppbVar43 + 0x54) = uVar53;
        *(int *)(ppbVar43 + 0xb) = SUB164(auStack1504,0);
        *(undefined4 *)((long)ppbVar43 + 0x5c) = uVar51;
        *(undefined4 *)(ppbVar43 + 0xc) = uVar52;
        *(undefined4 *)((long)ppbVar43 + 100) = uVar53;
        goto code_r0x001050df;
      }
      if (psVar24 == asStack1408) break;
      psVar24 = psVar24 + -1;
      uVar27 = SEXT28(*psVar24);
      ppbVar43 = ppbVar43 + -7;
    }
    goto code_r0x00105328;
  }
  uVar27 = (ulong)(byte)yyr2[(int)(uint)bVar23];
  lVar18 = (long)(int)(1 - (uint)(byte)yyr2[(int)(uint)bVar23]) * 0x38;
code_r0x00104e2d:
  ppbVar42 = (byte **)(lVar18 + (long)ppbVar43);
  pbStack1664 = ppbVar42[2];
  uStack1424._4_4_ = (uint)((ulong)ppbVar42[6] >> 0x20);
  pbVar19 = *ppbVar42;
  pbVar40 = ppbVar42[1];
  pbStack1672 = ppbVar42[3];
  pbStack1640 = ppbVar42[4];
  pbStack1648 = ppbVar42[5];
                    /* WARNING: Load size is inaccurate */
  uVar17 = SUB168(*(undefined *)(ppbVar42 + 4),0);
  uStack1656 = (ulong)*(uint *)(ppbVar42 + 6);
  ppbVar42 = ppbVar33;
  switch(bVar23) {
  case 4:
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)ppbVar43;
    uVar17 = SUB168(auVar2,0);
    puVar31 = &UNK_001101eb;
    *(int *)(ppbVar33 + 0xb) = SUB164(auVar2,0);
    *(undefined4 *)((long)ppbVar33 + 0x5c) = SUB164(auVar2 >> 0x20,0);
    *(int *)(ppbVar33 + 0xc) = SUB164(auVar2 >> 0x40,0);
    *(undefined4 *)((long)ppbVar33 + 100) = SUB164(auVar2 >> 0x60,0);
    *(undefined *)(ppbVar33 + 0x14) = 1;
    break;
  default:
    goto code_r0x00104ff0;
  case 7:
    ppbVar33[0x19] = ppbVar33[0x19] + 1;
    ppbVar33[0x15] = ppbVar33[0x15] + 1;
    puVar31 = &UNK_001101fd;
    break;
  case 8:
    ppbVar33[0x19] = ppbVar33[0x19] + 1;
    puVar31 = &UNK_0010f7fe;
    break;
  case 9:
    ppbVar33[0x17] = ppbVar33[0x17] + 1;
    puVar31 = &UNK_00110206;
    break;
  case 10:
    ppbVar33[0x1a] = ppbVar33[0x1a] + 1;
    puVar31 = &UNK_0011020c;
    break;
  case 0xb:
    ppbVar33[0x15] = ppbVar33[0x15] + 1;
    puVar31 = &UNK_0010f8fa;
    break;
  case 0xc:
    ppbVar33[0x16] = ppbVar33[0x16] + 1;
    puVar31 = &UNK_00110211;
    break;
  case 0xd:
    puVar31 = &UNK_00110215;
    goto code_r0x001061db;
  case 0xe:
    uVar17 = func_0x001027f0(uVar17,0,&UNK_0011021e,5);
    cVar13 = *(char *)((long)ppbVar33 + 0xd9);
    goto joined_r0x0010624f;
  case 0xf:
    puVar31 = &UNK_00110225;
code_r0x001061db:
    uVar17 = func_0x001027f0(uVar17,0,puVar31,5);
    cVar13 = *(char *)((long)ppbVar33 + 0xd9);
joined_r0x00104fc5:
    if (cVar13 != '\0') {
      debug_print_relative_time_part_11(uVar17);
    }
    goto code_r0x00104ff0;
  case 0x12:
    pbVar20 = ppbVar43[-6];
    ppbVar33[10] = (byte *)0x0;
    ppbVar33[0xb] = (byte *)0x0;
    ppbVar33[0xc] = (byte *)0x0;
    ppbVar33[9] = pbVar20;
    *(undefined4 *)((long)ppbVar33 + 0x1c) = (int)*ppbVar43;
    goto code_r0x00104ff0;
  case 0x13:
    pbVar20 = ppbVar43[-6];
    pbVar21 = ppbVar43[-0x14];
    ppbVar33[0xb] = (byte *)0x0;
    ppbVar33[0xc] = (byte *)0x0;
    ppbVar33[10] = pbVar20;
    pbVar20 = *ppbVar43;
    ppbVar33[9] = pbVar21;
    *(undefined4 *)((long)ppbVar33 + 0x1c) = (int)pbVar20;
    goto code_r0x00104ff0;
  case 0x14:
    pbVar20 = ppbVar43[-0x14];
    pbVar21 = ppbVar43[-0x22];
    ppbVar33[0xb] = ppbVar43[-7];
    iVar37 = *(int *)(ppbVar43 + -6);
    ppbVar33[9] = pbVar21;
    ppbVar33[10] = pbVar20;
    ppbVar33[0xc] = (byte *)(long)iVar37;
    *(undefined4 *)((long)ppbVar33 + 0x1c) = (int)*ppbVar43;
    goto code_r0x00104ff0;
  case 0x16:
    pbVar20 = ppbVar43[-6];
    ppbVar33[10] = (byte *)0x0;
    ppbVar33[0xb] = (byte *)0x0;
    ppbVar33[0xc] = (byte *)0x0;
    *(undefined4 *)((long)ppbVar33 + 0x1c) = 2;
    ppbVar33[9] = pbVar20;
    goto code_r0x00104ff0;
  case 0x17:
    pbVar20 = ppbVar43[-6];
    pbVar21 = ppbVar43[-0x14];
    ppbVar33[0xb] = (byte *)0x0;
    ppbVar33[0xc] = (byte *)0x0;
    *(undefined4 *)((long)ppbVar33 + 0x1c) = 2;
    ppbVar33[9] = pbVar21;
    ppbVar33[10] = pbVar20;
    goto code_r0x00104ff0;
  case 0x18:
    pbVar20 = ppbVar43[-7];
    pbVar21 = ppbVar43[-0x14];
    pbVar30 = ppbVar43[-0x22];
    *(undefined4 *)((long)ppbVar33 + 0x1c) = 2;
    ppbVar33[0xb] = pbVar20;
    iVar37 = *(int *)(ppbVar43 + -6);
    ppbVar33[9] = pbVar30;
    ppbVar33[10] = pbVar21;
    ppbVar33[0xc] = (byte *)(long)iVar37;
    goto code_r0x00104ff0;
  case 0x1b:
    ppbVar33[0x1a] = ppbVar33[0x1a] + 1;
    pbVar35 = *ppbVar43;
    cVar13 = time_zone_hhmm_isra_4
                       (uVar17,ppbVar33 + 3,(ulong)*(byte *)(ppbVar43 + -7),ppbVar43[-6],
                        ppbVar43[-5]);
    if (cVar13 == '\0') goto code_r0x00105328;
    goto code_r0x00104ff0;
  case 0x1c:
    *(undefined4 *)((long)ppbVar33 + 0x14) = (int)*ppbVar43;
    goto code_r0x00104ff0;
  case 0x1d:
    *(undefined4 *)((long)ppbVar33 + 0x14) = 1;
    ppbVar33[0x18] = ppbVar33[0x18] + 1;
    goto code_r0x00104ff0;
  case 0x1e:
    *(int *)(ppbVar33 + 3) = (int)*ppbVar43;
    goto code_r0x00104ff0;
  case 0x1f:
    *(undefined4 *)(ppbVar33 + 3) = 0x6270;
    goto code_r0x00104ff0;
  case 0x20:
    *(int *)(ppbVar33 + 3) = (int)ppbVar43[-7];
    goto code_r0x00104eb8;
  case 0x21:
    *(undefined4 *)(ppbVar33 + 3) = 0x6270;
code_r0x00104eb8:
    pbVar20 = *ppbVar43;
    pbVar21 = ppbVar43[2];
    pbVar30 = ppbVar43[3];
    pbVar34 = ppbVar43[4];
    pbVar7 = ppbVar43[5];
    pbVar8 = ppbVar43[1];
    bVar45 = SCARRY4(*(int *)(ppbVar43 + 6),*(int *)(ppbVar33 + 0x13));
    pbVar35 = (byte *)(ulong)bVar45;
    *(int *)(ppbVar33 + 0x13) = *(int *)(ppbVar43 + 6) + *(int *)(ppbVar33 + 0x13);
    pbVar9 = ppbVar33[0x12];
    ppbVar33[0x12] = pbVar7 + (long)ppbVar33[0x12];
    pbVar10 = ppbVar33[0x11];
    ppbVar33[0x11] = pbVar34 + (long)ppbVar33[0x11];
    pbVar11 = ppbVar33[0x10];
    pbVar5 = ppbVar33[0xf];
    ppbVar33[0x10] = pbVar30 + (long)ppbVar33[0x10];
    ppbVar33[0xf] = pbVar21 + (long)ppbVar33[0xf];
    pbVar6 = ppbVar33[0xe];
    ppbVar33[0xe] = pbVar8 + (long)ppbVar33[0xe];
    pbVar4 = ppbVar33[0xd];
    ppbVar33[0xd] = pbVar20 + (long)ppbVar33[0xd];
    if (((byte)(SCARRY8((long)pbVar8,(long)pbVar6) |
               SCARRY8((long)pbVar7,(long)pbVar9) | bVar45 | SCARRY8((long)pbVar34,(long)pbVar10) |
               SCARRY8((long)pbVar30,(long)pbVar11) | SCARRY8((long)pbVar21,(long)pbVar5)) != 0) ||
       (SCARRY8((long)pbVar20,(long)pbVar4) != false)) goto code_r0x00105328;
    *(undefined *)((long)ppbVar33 + 0xa1) = 1;
    uVar17 = func_0x001027f0(uVar17,0,&UNK_00110215,5);
    cVar13 = *(char *)((long)ppbVar33 + 0xd9);
    goto joined_r0x00104fc5;
  case 0x22:
    pbVar35 = *ppbVar43;
    cVar13 = time_zone_hhmm_isra_4
                       (uVar17,ppbVar33 + 3,(ulong)*(byte *)(ppbVar43 + -7),ppbVar43[-6],
                        ppbVar43[-5]);
    if ((cVar13 == '\0') ||
       (iVar37 = *(int *)(ppbVar33 + 3), pbVar20 = ppbVar43[-0xe],
       pbVar21 = ppbVar43[-0xe] + (long)iVar37, iVar14 = (int)pbVar21,
       *(int *)(ppbVar33 + 3) = iVar14, ppbVar42 = ppbVar33,
       pbVar21 != (byte *)(long)iVar14 || SCARRY8((long)iVar37,(long)pbVar20)))
    goto code_r0x00105328;
    goto code_r0x00104ff0;
  case 0x23:
    *(int *)(ppbVar33 + 3) = *(int *)ppbVar43 + 0xe10;
    goto code_r0x00104ff0;
  case 0x24:
    *(int *)(ppbVar33 + 3) = *(int *)(ppbVar43 + -7) + 0xe10;
    goto code_r0x00104ff0;
  case 0x25:
    pbVar20 = *ppbVar43;
    ppbVar33[1] = (byte *)0x0;
    *(int *)(ppbVar33 + 2) = (int)pbVar20;
    goto code_r0x00104ff0;
  case 0x26:
    pbVar20 = ppbVar43[-7];
    ppbVar33[1] = (byte *)0x0;
    *(int *)(ppbVar33 + 2) = (int)pbVar20;
    goto code_r0x00104ff0;
  case 0x27:
    pbVar20 = ppbVar43[-7];
    *(undefined *)(ppbVar33 + 0x1c) = 1;
    ppbVar33[1] = pbVar20;
    *(int *)(ppbVar33 + 2) = (int)*ppbVar43;
    goto code_r0x00104ff0;
  case 0x28:
    pbVar20 = ppbVar43[-6];
    *(undefined *)(ppbVar33 + 0x1c) = 1;
    ppbVar33[1] = pbVar20;
    *(int *)(ppbVar33 + 2) = (int)*ppbVar43;
    goto code_r0x00104ff0;
  case 0x29:
    goto code_r0x00105a23;
  case 0x2a:
    pbVar20 = ppbVar43[-0x1a];
    if ((long)pbVar20 < 4) {
      pbVar20 = ppbVar43[-0x1b];
      if (*(char *)((long)ppbVar33 + 0xd9) != '\0') {
        uVar17 = func_0x001027f0(uVar17,0,&UNK_00110740,5);
        dbg_printf(uVar17);
      }
      goto code_r0x00105e0c;
    }
    if (*(char *)((long)ppbVar33 + 0xd9) != '\0') {
      pbVar21 = ppbVar43[-0x1b];
      uVar17 = func_0x001027f0(uVar17,0,&UNK_00110708,5);
      dbg_printf(uVar17,pbVar21,pbVar20,pbVar20);
    }
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)(ppbVar43 + -0x1c);
    pbVar20 = ppbVar43[-0x1a];
    *(int *)(ppbVar33 + 4) = SUB164(auVar2,0);
    *(undefined4 *)((long)ppbVar33 + 0x24) = SUB164(auVar2 >> 0x20,0);
    *(int *)(ppbVar33 + 5) = SUB164(auVar2 >> 0x40,0);
    *(undefined4 *)((long)ppbVar33 + 0x2c) = SUB164(auVar2 >> 0x60,0);
    ppbVar33[6] = pbVar20;
code_r0x00105a23:
    ppbVar33[7] = ppbVar43[-0xd];
    ppbVar33[8] = ppbVar43[1];
    goto code_r0x00104ff0;
  case 0x2b:
    ppbVar33[8] = ppbVar43[-0xd];
    ppbVar33[7] = ppbVar43[-7];
    pbVar20 = ppbVar43[1];
    ppbVar33[5] = (byte *)-(long)pbVar20;
joined_r0x00105ea7:
    if (pbVar20 != (byte *)0x8000000000000000) goto code_r0x00105e23;
    goto code_r0x00105328;
  case 0x2c:
    ppbVar33[7] = ppbVar43[-0xe];
    pbVar20 = ppbVar43[-6];
    ppbVar33[8] = (byte *)-(long)pbVar20;
    if (pbVar20 != (byte *)0x8000000000000000) {
      pbVar20 = ppbVar43[1];
      ppbVar33[5] = (byte *)-(long)pbVar20;
      goto joined_r0x00105ea7;
    }
    goto code_r0x00105328;
  case 0x2d:
    ppbVar33[7] = ppbVar43[-7];
    ppbVar33[8] = ppbVar43[1];
    goto code_r0x00104ff0;
  case 0x2e:
    pbVar20 = ppbVar43[-0x15];
code_r0x00105e0c:
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)ppbVar43;
    ppbVar33[7] = pbVar20;
    pbVar20 = ppbVar43[-0xd];
    *(int *)(ppbVar33 + 4) = SUB164(auVar2,0);
    *(undefined4 *)((long)ppbVar33 + 0x24) = SUB164(auVar2 >> 0x20,0);
    *(int *)(ppbVar33 + 5) = SUB164(auVar2 >> 0x40,0);
    *(undefined4 *)((long)ppbVar33 + 0x2c) = SUB164(auVar2 >> 0x60,0);
    ppbVar33[8] = pbVar20;
code_r0x00105e23:
    ppbVar33[6] = ppbVar43[2];
    goto code_r0x00104ff0;
  case 0x2f:
    ppbVar33[8] = ppbVar43[-6];
    ppbVar33[7] = *ppbVar43;
    goto code_r0x00104ff0;
  case 0x30:
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)ppbVar43;
    ppbVar33[8] = ppbVar43[-0xd];
    pbVar20 = ppbVar43[-7];
    *(int *)(ppbVar33 + 4) = SUB164(auVar2,0);
    *(undefined4 *)((long)ppbVar33 + 0x24) = SUB164(auVar2 >> 0x20,0);
    *(int *)(ppbVar33 + 5) = SUB164(auVar2 >> 0x40,0);
    *(undefined4 *)((long)ppbVar33 + 0x2c) = SUB164(auVar2 >> 0x60,0);
    ppbVar33[7] = pbVar20;
    ppbVar33[6] = ppbVar43[2];
    goto code_r0x00104ff0;
  case 0x32:
                    /* WARNING: Load size is inaccurate */
    auVar2 = *(undefined *)(ppbVar43 + -0xe);
    ppbVar33[6] = ppbVar43[-0xc];
    pbVar20 = ppbVar43[-6];
    *(int *)(ppbVar33 + 4) = SUB164(auVar2,0);
    *(undefined4 *)((long)ppbVar33 + 0x24) = SUB164(auVar2 >> 0x20,0);
    *(int *)(ppbVar33 + 5) = SUB164(auVar2 >> 0x40,0);
    *(undefined4 *)((long)ppbVar33 + 0x2c) = SUB164(auVar2 >> 0x60,0);
    ppbVar33[7] = (byte *)-(long)pbVar20;
    if ((pbVar20 == (byte *)0x8000000000000000) ||
       (pbVar20 = ppbVar43[1], ppbVar33[8] = (byte *)-(long)pbVar20,
       pbVar20 == (byte *)0x8000000000000000)) goto code_r0x00105328;
    goto code_r0x00104ff0;
  case 0x33:
    pbVar20 = ppbVar43[-7];
    pbVar35 = ppbVar43[-3];
    pbVar21 = ppbVar43[-2];
    iVar37 = *(int *)(ppbVar43 + -1);
    iVar14 = *(int *)(ppbVar33 + 0x13);
    pbVar30 = ppbVar33[0x12];
    pbVar34 = ppbVar43[-6];
    pbVar7 = ppbVar43[-5];
    pbVar8 = ppbVar43[-4];
    pbVar9 = ppbVar33[0x11];
    pbVar10 = ppbVar33[0x10];
    pbVar11 = ppbVar33[0xf];
    pbVar5 = ppbVar33[0xe];
    pbVar6 = ppbVar33[0xd];
    if (*(int *)ppbVar43 < 0) {
      bVar46 = SBORROW4(iVar14,iVar37);
      *(int *)(ppbVar33 + 0x13) = iVar14 - iVar37;
      bVar47 = SBORROW8((long)pbVar30,(long)pbVar21);
      bVar48 = SBORROW8((long)pbVar9,(long)pbVar35);
      ppbVar33[0x11] = pbVar9 + -(long)pbVar35;
      bVar44 = SBORROW8((long)pbVar10,(long)pbVar8);
      ppbVar33[0x12] = pbVar30 + -(long)pbVar21;
      ppbVar33[0x10] = pbVar10 + -(long)pbVar8;
      bVar49 = SBORROW8((long)pbVar11,(long)pbVar7);
      ppbVar33[0xf] = pbVar11 + -(long)pbVar7;
      bVar50 = SBORROW8((long)pbVar5,(long)pbVar34);
      ppbVar33[0xe] = pbVar5 + -(long)pbVar34;
      bVar45 = SBORROW8((long)pbVar6,(long)pbVar20);
      pbVar20 = (byte *)-(long)pbVar20;
    }
    else {
      bVar46 = SCARRY4(iVar14,iVar37);
      *(int *)(ppbVar33 + 0x13) = iVar14 + iVar37;
      bVar47 = SCARRY8((long)pbVar30,(long)pbVar21);
      bVar48 = SCARRY8((long)pbVar9,(long)pbVar35);
      ppbVar33[0x11] = pbVar9 + (long)pbVar35;
      bVar44 = SCARRY8((long)pbVar10,(long)pbVar8);
      ppbVar33[0x12] = pbVar30 + (long)pbVar21;
      ppbVar33[0x10] = pbVar10 + (long)pbVar8;
      bVar49 = SCARRY8((long)pbVar11,(long)pbVar7);
      ppbVar33[0xf] = pbVar11 + (long)pbVar7;
      bVar50 = SCARRY8((long)pbVar5,(long)pbVar34);
      ppbVar33[0xe] = pbVar5 + (long)pbVar34;
      bVar45 = SCARRY8((long)pbVar6,(long)pbVar20);
    }
    pbVar35 = (byte *)(ulong)bVar46;
    ppbVar33[0xd] = pbVar6 + (long)pbVar20;
    bVar45 = (bool)(bVar47 | bVar46 | bVar48 | bVar44 | bVar49 | bVar50 | bVar45);
    goto joined_r0x00105848;
  case 0x34:
  case 0x35:
    pbStack1608 = *ppbVar43;
    pbVar35 = (byte *)0x0;
    pbVar20 = ppbVar43[2];
    pbVar21 = ppbVar43[3];
    pbVar30 = ppbVar43[4];
    pbVar34 = ppbVar43[5];
    pbStack1600 = ppbVar43[1];
    iVar37 = *(int *)(ppbVar43 + 6) + *(int *)(ppbVar33 + 0x13);
    if (SCARRY4(*(int *)(ppbVar43 + 6),*(int *)(ppbVar33 + 0x13))) {
code_r0x00105ce4:
      pbVar35 = (byte *)0x1;
    }
    goto code_r0x001057af;
  case 0x36:
    pbVar19 = ppbVar43[-7];
    goto code_r0x00105745;
  case 0x37:
  case 0x4b:
    pbVar19 = ppbVar43[-6];
code_r0x00105745:
    uStack1424._4_4_ = 0;
    uStack1656 = 0;
    pbStack1648 = (byte *)0x0;
    pbVar40 = (byte *)0x0;
    pbStack1640 = (byte *)0x0;
    pbStack1672 = (byte *)0x0;
    pbStack1664 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x38:
    uStack1424._4_4_ = 0;
    uStack1656 = 0;
    pbVar40 = (byte *)0x0;
    pbStack1648 = (byte *)0x0;
    pbStack1640 = (byte *)0x0;
    pbVar19 = (byte *)0x1;
    pbStack1672 = (byte *)0x0;
    pbStack1664 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x39:
    pbVar40 = ppbVar43[-7];
    goto code_r0x001056c0;
  case 0x3a:
  case 0x4c:
    pbVar40 = ppbVar43[-6];
code_r0x001056c0:
    uStack1424._4_4_ = 0;
    uStack1656 = 0;
    pbStack1648 = (byte *)0x0;
    pbVar19 = (byte *)0x0;
    pbStack1640 = (byte *)0x0;
    pbStack1672 = (byte *)0x0;
    pbStack1664 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x3b:
    uStack1424._4_4_ = 0;
    uStack1656 = 0;
    pbVar40 = (byte *)0x1;
    pbStack1648 = (byte *)0x0;
    pbStack1640 = (byte *)0x0;
    pbVar19 = (byte *)0x0;
    pbStack1672 = (byte *)0x0;
    pbStack1664 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x3c:
    bVar45 = false;
    pbStack1664 = (byte *)((long)ppbVar43[-7] * (long)*ppbVar43);
    lVar18 = SUB168(SEXT816((long)ppbVar43[-7]) * SEXT816((long)*ppbVar43) >> 0x40,0);
    if (lVar18 != 0 && lVar18 != -1) {
code_r0x00105c4c:
      bVar45 = true;
    }
    goto code_r0x00105942;
  case 0x3d:
  case 0x4d:
    bVar45 = false;
    pbStack1664 = (byte *)((long)ppbVar43[-6] * (long)*ppbVar43);
    lVar18 = SUB168(SEXT816((long)ppbVar43[-6]) * SEXT816((long)*ppbVar43) >> 0x40,0);
    if (lVar18 != 0 && lVar18 != -1) goto code_r0x00105c4c;
code_r0x00105942:
    if (bVar45) goto code_r0x00105328;
code_r0x00105950:
    uStack1424._4_4_ = 0;
    uStack1656 = 0;
    pbStack1648 = (byte *)0x0;
    pbVar40 = (byte *)0x0;
    pbStack1640 = (byte *)0x0;
    pbStack1672 = (byte *)0x0;
    pbVar19 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x3e:
  case 0x51:
    pbStack1664 = *ppbVar43;
    goto code_r0x00105950;
  case 0x3f:
    pbStack1672 = ppbVar43[-7];
    goto code_r0x0010586a;
  case 0x40:
  case 0x4e:
    pbStack1672 = ppbVar43[-6];
code_r0x0010586a:
    uStack1424._4_4_ = 0;
    uStack1656 = 0;
    pbVar40 = (byte *)0x0;
    pbStack1648 = (byte *)0x0;
    pbStack1640 = (byte *)0x0;
    pbVar19 = (byte *)0x0;
    pbStack1664 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x41:
    uStack1424._4_4_ = 0;
    uStack1656 = 0;
    pbVar40 = (byte *)0x0;
    pbStack1648 = (byte *)0x0;
    pbStack1640 = (byte *)0x0;
    pbVar19 = (byte *)0x0;
    pbStack1672 = (byte *)0x1;
    pbStack1664 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x42:
    pbStack1640 = ppbVar43[-7];
    goto code_r0x00105703;
  case 0x43:
  case 0x4f:
    pbStack1640 = ppbVar43[-6];
code_r0x00105703:
    uStack1424._4_4_ = 0;
    uStack1656 = 0;
    pbVar40 = (byte *)0x0;
    pbStack1648 = (byte *)0x0;
    pbStack1672 = (byte *)0x0;
    pbVar19 = (byte *)0x0;
    pbStack1664 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x44:
    uStack1424._4_4_ = 0;
    uStack1656 = 0;
    pbVar40 = (byte *)0x0;
    pbStack1648 = (byte *)0x0;
    pbStack1640 = (byte *)0x1;
    pbVar19 = (byte *)0x0;
    pbStack1672 = (byte *)0x0;
    pbStack1664 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x45:
    pbStack1648 = ppbVar43[-7];
    goto code_r0x001058ee;
  case 0x46:
  case 0x50:
    pbStack1648 = ppbVar43[-6];
code_r0x001058ee:
    uStack1656 = 0;
    goto code_r0x001058b9;
  case 0x47:
  case 0x48:
    pbStack1648 = ppbVar43[-7];
    uStack1656 = (ulong)*(uint *)(ppbVar43 + -6);
    goto code_r0x001058b9;
  case 0x49:
    uStack1656 = 0;
    pbStack1648 = (byte *)0x1;
code_r0x001058b9:
    uStack1424._4_4_ = 0;
    pbStack1640 = (byte *)0x0;
    pbStack1672 = (byte *)0x0;
    pbVar40 = (byte *)0x0;
    pbStack1664 = (byte *)0x0;
    pbVar19 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x55:
  case 0x57:
    pbVar19 = ppbVar43[1];
    pbVar40 = (byte *)0x0;
    goto code_r0x00104ff0;
  case 0x58:
    digits_to_date_time(uVar17,ppbVar33);
    goto code_r0x00104ff0;
  case 0x59:
    digits_to_date_time(uVar17,ppbVar33);
    pbStack1608 = *ppbVar43;
    pbVar35 = (byte *)0x0;
    pbVar20 = ppbVar43[2];
    pbVar21 = ppbVar43[3];
    pbVar30 = ppbVar43[4];
    pbVar34 = ppbVar43[5];
    pbStack1600 = ppbVar43[1];
    iVar37 = *(int *)(ppbVar43 + 6) + *(int *)(ppbVar33 + 0x13);
    if (SCARRY4(*(int *)(ppbVar43 + 6),*(int *)(ppbVar33 + 0x13))) goto code_r0x00105ce4;
code_r0x001057af:
    *(int *)(ppbVar33 + 0x13) = iVar37;
    pbVar7 = ppbVar33[0x12];
    ppbVar33[0x12] = pbVar34 + (long)ppbVar33[0x12];
    pbVar8 = ppbVar33[0x11];
    ppbVar33[0x11] = pbVar30 + (long)ppbVar33[0x11];
    pbVar9 = ppbVar33[0x10];
    ppbVar33[0x10] = pbVar21 + (long)ppbVar33[0x10];
    pbVar10 = ppbVar33[0xf];
    ppbVar33[0xf] = pbVar20 + (long)ppbVar33[0xf];
    pbVar11 = ppbVar33[0xe];
    ppbVar33[0xe] = pbStack1600 + (long)ppbVar33[0xe];
    bVar45 = SCARRY8((long)pbStack1608,(long)ppbVar33[0xd]);
    ppbVar33[0xd] = pbStack1608 + (long)ppbVar33[0xd];
    if ((byte)(SCARRY8((long)pbStack1600,(long)pbVar11) |
              SCARRY8((long)pbVar34,(long)pbVar7) | (byte)pbVar35 |
              SCARRY8((long)pbVar30,(long)pbVar8) | SCARRY8((long)pbVar21,(long)pbVar9) |
              SCARRY8((long)pbVar20,(long)pbVar10)) != 0) {
code_r0x00105328:
      uVar17 = 1;
      ppbVar33 = ppbVar42;
      goto code_r0x0010532d;
    }
joined_r0x00105848:
    if (bVar45 != false) goto code_r0x00105328;
    *(undefined *)((long)ppbVar33 + 0xa1) = 1;
code_r0x00104ff0:
    uStack1472 = SUB84(pbVar19,0);
    uStack1468 = (undefined4)((ulong)pbVar19 >> 0x20);
    uStack1464 = SUB84(pbVar40,0);
    uStack1460 = (undefined4)((ulong)pbVar40 >> 0x20);
    uStack1456 = SUB84(pbStack1664,0);
    uStack1452 = (undefined4)((ulong)pbStack1664 >> 0x20);
    ppbVar43 = ppbVar43 + uVar27 * 0x1ffffffffffffff9;
    psVar24 = psVar24 + uVar27 * 0x7fffffffffffffff;
    ppbVar42 = ppbVar43 + 7;
    uStack1448 = SUB84(pbStack1672,0);
    uStack1444 = (undefined4)((ulong)pbStack1672 >> 0x20);
    *(undefined4 *)(ppbVar43 + 7) = uStack1472;
    *(undefined4 *)((long)ppbVar43 + 0x3c) = uStack1468;
    *(undefined4 *)(ppbVar43 + 8) = uStack1464;
    *(undefined4 *)((long)ppbVar43 + 0x44) = uStack1460;
    uStack1440 = SUB84(pbStack1640,0);
    uStack1436 = (undefined4)((ulong)pbStack1640 >> 0x20);
    uStack1432 = SUB84(pbStack1648,0);
    uStack1428 = (undefined4)((ulong)pbStack1648 >> 0x20);
    *(undefined4 *)(ppbVar43 + 9) = uStack1456;
    *(undefined4 *)((long)ppbVar43 + 0x4c) = uStack1452;
    *(undefined4 *)(ppbVar43 + 10) = uStack1448;
    *(undefined4 *)((long)ppbVar43 + 0x54) = uStack1444;
    uStack1424 = (byte *)(uStack1656 | (ulong)uStack1424._4_4_ << 0x20);
    sVar3 = *psVar24;
    ppbVar43[0xd] = uStack1424;
    *(undefined4 *)(ppbVar43 + 0xb) = uStack1440;
    *(undefined4 *)((long)ppbVar43 + 0x5c) = uStack1436;
    *(undefined4 *)(ppbVar43 + 0xc) = uStack1432;
    *(undefined4 *)((long)ppbVar43 + 100) = uStack1428;
    uVar36 = (int)(char)yypgoto[(int)((uint)(byte)yyr1[bVar23] - 0x1c)] + (int)sVar3;
    if ((uVar36 < 0x71) && (sVar3 == (short)(char)yycheck[(int)uVar36])) {
      uVar27 = (ulong)(byte)yytable[(int)uVar36];
    }
    else {
      uVar27 = SEXT18((char)yydefgoto[(int)((uint)(byte)yyr1[bVar23] - 0x1c)]);
    }
    goto code_r0x001050df;
  case 0x5a:
    pbVar19 = (byte *)0xffffffffffffffff;
    goto code_r0x00104ff0;
  case 0x5b:
    pbVar19 = ppbVar43[1];
    goto code_r0x00104ff0;
  }
  uVar17 = func_0x001027f0(uVar17,0,puVar31,5);
  cVar13 = *(char *)((long)ppbVar33 + 0xd9);
joined_r0x0010624f:
  if (cVar13 != '\0') {
    debug_print_current_time_part_10(uVar17);
  }
  goto code_r0x00104ff0;
code_r0x00105370:
  uVar15 = 0;
  uVar38 = 0;
  goto code_r0x00105375;
code_r0x00105420:
  uVar15 = (uint)(byte)yytranslate[(int)uVar38];
  goto code_r0x0010542e;
}

