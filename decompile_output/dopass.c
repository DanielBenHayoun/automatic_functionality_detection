
/* WARNING: Could not reconcile some variable overlaps */

ulong dopass(ulong param_1,uint *param_2,uint *param_3,uint **param_4,uint param_5,
            undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  byte **ppbVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  int *piVar15;
  undefined *puVar16;
  uint *puVar17;
  byte *pbVar18;
  uint *puVar19;
  byte *pbVar20;
  uint *puVar21;
  uint *puVar22;
  undefined1 *puVar23;
  int *piVar24;
  uint *puVar25;
  ulong uVar26;
  long lVar27;
  long in_FS_OFFSET;
  bool bVar28;
  bool bVar29;
  byte bVar30;
  undefined auVar31 [16];
  undefined auVar32 [16];
  byte *pbStack2664;
  undefined *puStack2656;
  byte *apbStack2648 [5];
  undefined *puStack2608;
  undefined *puStack2600;
  undefined *puStack2592;
  undefined *puStack2584;
  undefined *puStack2576;
  undefined8 uStack2568;
  undefined8 uStack2560;
  undefined8 uStack2544;
  long *plStack2528;
  undefined *puStack2520;
  uint *puStack2512;
  uint *puStack2504;
  uint *puStack2496;
  undefined *puStack2488;
  int *piStack2480;
  undefined8 uStack2472;
  bool bStack2457;
  uint *puStack2456;
  undefined8 uStack2448;
  ulong uStack2440;
  long lStack2432;
  long lStack2424;
  undefined8 uStack2416;
  long *plStack2408;
  long lStack2392;
  undefined auStack2384 [24];
  uint uStack2360;
  long lStack2336;
  long lStack2328;
  long lStack2232;
  uint *puStack2216;
  uint *puStack2208;
  uint *puStack2200;
  uint *puStack2192;
  uint *puStack2184;
  uint *puStack2176;
  uint *puStack2168;
  uint *puStack2160;
  undefined8 uStack2152;
  uint *puStack2144;
  uint uStack2136;
  bool bStack2129;
  uint *puStack2128;
  ulong uStack2120;
  undefined *puStack2112;
  ulong uStack2104;
  undefined8 uStack2096;
  uint **ppuStack2088;
  uint *puStack2080;
  long lStack2072;
  long lStack2064;
  undefined2 auStack2056 [2];
  undefined4 uStack2052;
  uint uStack2047;
  undefined2 uStack2043;
  undefined uStack2041;
  uint auStack2040 [164];
  undefined auStack1384 [656];
  undefined auStack728 [664];
  ulong uStack64;
  
  bVar30 = 0;
  param_1 = param_1 & 0xffffffff;
  puVar25 = *param_4;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack2176 = (uint *)&UNK_00102ccd;
  puStack2168 = param_2;
  puStack2160 = param_3;
  uStack2136 = param_5;
  uStack2096 = param_6;
  ppuStack2088 = param_4;
  iVar1 = func_0x001020a0();
  puVar22 = (uint *)(long)iVar1;
  if ((int)param_5 < 1) {
code_r0x00102dd0:
    puVar21 = (uint *)0x10002;
    puStack2144 = (uint *)0x10000;
  }
  else {
    param_5 = param_5 & 0xfff;
    uVar2 = param_5 << 0xc | param_5;
    cVar10 = (char)(uVar2 >> 4);
    if (((char)((ulong)uVar2 >> 8) == cVar10) && (cVar10 == (char)param_5)) goto code_r0x00102dd0;
    puVar21 = (uint *)0xf000;
    puStack2144 = (uint *)0xf000;
  }
  puStack2176 = (uint *)&UNK_00102d18;
  uStack2120 = xmalloc();
  bStack2129 = 0 < (long)puVar25 && puVar25 < puStack2144;
  if (0 >= (long)puVar25 || puVar25 >= puStack2144) {
    puStack2176 = (uint *)&UNK_0010312d;
    direct_mode(param_1,1);
  }
  puVar19 = puVar25;
  if ((puStack2168[6] & 0xf000) == 0x2000) {
    auStack2056[0] = 6;
    uStack2052 = 1;
    puStack2176 = (uint *)&UNK_00102e0e;
    iVar1 = func_0x00101e80(param_1,0x40086d01,auStack2056);
    if (iVar1 == 0) goto code_r0x00102e16;
  }
  puStack2176 = (uint *)&UNK_00102d5a;
  lVar4 = func_0x00101e30(param_1,0,0);
  if (lVar4 < 1) {
    if (lVar4 == 0) {
code_r0x00102e16:
      uVar12 = (long)puVar22 + (uStack2120 - 1);
      puVar16 = (undefined *)(uVar12 % (ulong)puVar22);
      puStack2216 = (uint *)(uVar12 - (long)puVar16);
      if ((int)uStack2136 < 0) {
        uStack2047 = 0x646e6172;
        uStack2041 = 0;
        uStack2043 = 0x6d6f;
      }
      else {
        if ((puVar21 <= puVar25) || ((long)puVar25 < 0)) {
          puVar19 = puVar21;
        }
        puVar22 = (uint *)0x3;
        uVar2 = uStack2136 & 0xfff;
        uVar3 = uVar2 | uVar2 << 0xc;
        *(undefined *)((long)puStack2216 + 1) = (char)((ulong)uVar3 >> 8);
        *(undefined *)((long)puStack2216 + 2) = (char)uVar2;
        *(char *)puStack2216 = (char)(uVar3 >> 4);
        puVar21 = puVar22;
        if ((uint *)0x2 < (uint *)((ulong)puVar19 >> 1)) {
          do {
            puVar22 = (uint *)((long)puVar21 * 2);
            puStack2176 = (uint *)&UNK_00102e8a;
            func_0x00101f00((long)puStack2216 + (long)puVar21,puStack2216,puVar21);
            puVar21 = puVar22;
          } while (puVar22 <= (uint *)((ulong)puVar19 >> 1));
        }
        if (puVar22 < puVar19) {
          puStack2176 = (uint *)&UNK_001031c2;
          func_0x00101f00((long)puStack2216 + (long)puVar22,puStack2216,
                          (uint *)((long)puVar19 - (long)puVar22));
        }
        if (((uStack2136 & 0x1000) != 0) && (puVar19 != (uint *)0x0)) {
          puVar22 = (uint *)0x0;
          do {
            *(char *)((long)puStack2216 + (long)puVar22) =
                 *(char *)((long)puStack2216 + (long)puVar22) + -0x80;
            puVar22 = puVar22 + 0x80;
          } while (puVar22 < puVar19);
        }
        puStack2184 = (uint *)(ulong)*(byte *)((long)puStack2216 + 2);
        puStack2192 = (uint *)&UNK_00102eee;
        func_0x00102120(&uStack2047,1,7,&UNK_00109614,(ulong)*(byte *)puStack2216);
        puVar16 = (undefined *)puStack2176;
      }
      if (param_8 != 0) {
        puStack2176 = (uint *)&UNK_00103163;
        uVar5 = func_0x00101d70(0,&UNK_001095bc,5);
        puStack2184 = &uStack2047;
        puStack2192 = (uint *)&UNK_00103193;
        func_0x00102020(0,0,uVar5,puStack2160,param_7,param_8);
        puStack2192 = (uint *)&UNK_0010319a;
        auVar31 = func_0x00101f10();
        puVar16 = SUB168(auVar31 >> 0x40,0);
        lStack2064 = SUB168(auVar31,0) + 5;
      }
      uStack2152 = uStack2152 & 0xffffffffffffff00;
      auVar31 = ZEXT816(puVar16) << 0x40;
      puStack2168 = (uint *)0x0;
      puStack2080 = (uint *)&UNK_0010ad90;
      puVar21 = puVar25;
      puVar22 = puStack2080;
code_r0x00102f24:
      do {
        puStack2080 = puVar22;
        lStack2072 = SUB168(auVar31,0);
        puVar17 = puStack2144;
        if (((-1 < (long)puVar21) &&
            (puVar22 = (uint *)((long)puVar21 - (long)puStack2168), puVar22 < puStack2144)) &&
           ((puVar22 == (uint *)0x0 || (puVar17 = puVar22, (long)puVar21 < (long)puStack2168)))) {
          puStack2176 = (uint *)&UNK_00103447;
          puStack2496 = puStack2160;
          iVar1 = dosync(param_1,puStack2160,SUB168(auVar31 >> 0x40,0));
          if (iVar1 == 0) {
            puStack2176 = (uint *)&UNK_001034f2;
            uVar12 = uStack2120;
            func_0x00101c50();
            uVar6 = uStack2152 & 0xff;
          }
          else {
            puStack2176 = (uint *)&UNK_00103454;
            piVar15 = (int *)func_0x00101c70();
            if (*piVar15 != 5) goto code_r0x00102d9d;
            puStack2176 = (uint *)&UNK_00103467;
            uVar12 = uStack2120;
            func_0x00101c50();
            uVar6 = 1;
          }
          goto code_r0x00102da7;
        }
        puVar22 = puVar17;
        if ((int)uStack2136 < 0) {
          puStack2176 = (uint *)&UNK_00103119;
          randread(uStack2096,puStack2216,puVar22);
        }
        puStack2112 = auStack728;
        puVar25 = (uint *)0x0;
        uStack2104 = ~(ulong)puVar21 >> 0x3f;
        puStack2128 = puVar21;
        do {
          while( true ) {
            puStack2176 = (uint *)&UNK_00102fae;
            auVar31 = func_0x00101d10(param_1,(long)puStack2216 + (long)puVar25,
                                      (uint *)((long)puVar22 - (long)puVar25));
            uVar5 = SUB168(auVar31 >> 0x40,0);
            auVar32 = CONCAT88(uVar5,puVar21);
            lVar4 = SUB168(auVar31,0);
            if (lVar4 < 1) break;
            puVar25 = (uint *)((long)puVar25 + lVar4);
code_r0x00102f93:
            if (puVar22 <= puVar25) goto code_r0x00103220;
          }
          if ((long)puStack2128 < 0) {
            if (lVar4 != 0) {
              puStack2176 = (uint *)&UNK_001030aa;
              auVar32 = func_0x00101c70();
              puVar21 = SUB168(auVar32,0);
              puVar19 = (uint *)(ulong)*puVar21;
              if (*puVar21 != 0x1c) goto code_r0x00102fca;
            }
            auVar31 = CONCAT88(SUB168(auVar32 >> 0x40,0),lStack2072);
            puVar21 = SUB168(auVar32,0);
            if ((uint *)(0x7fffffffffffffff - (long)puStack2168) < puVar25) goto code_r0x001030d1;
            puVar17 = (uint *)((long)puStack2168 + (long)puVar25);
            *ppuStack2088 = puVar17;
            puVar21 = puVar17;
            puStack2168 = puVar17;
            puVar22 = puStack2080;
            if (param_8 == 0) goto code_r0x00102f24;
            goto code_r0x001033e0;
          }
          puStack2176 = (uint *)&UNK_00102fc4;
          puVar21 = (uint *)func_0x00101c70();
          puVar19 = (uint *)(ulong)*puVar21;
code_r0x00102fca:
          bVar28 = (bool)((bStack2129 ^ 1U) & (int)puVar19 == 0x16);
          if (bVar28 == false) {
            puStack2176 = (uint *)&UNK_00102ff3;
            uStack2152 = umaxtostr((long)puStack2168 + (long)puVar25,puStack2112);
            puStack2176 = (uint *)&UNK_0010300b;
            uVar5 = func_0x00101d70(0,&UNK_00109870,5);
            puStack2176 = (uint *)&UNK_00103024;
            puStack2496 = puVar19;
            func_0x00102020(0,puVar19,uVar5,puStack2160,uStack2152);
            uStack2104._0_1_ = (int)puVar19 == 5 & (byte)uStack2104;
            uStack2152 = uStack2152 & 0xffffffffffffff00 | (ulong)(byte)uStack2104;
            if (((byte)uStack2104 != 0) && ((uint *)((ulong)puVar25 | 0x1ff) < puVar22)) {
              puVar25 = (uint *)((long)(uint *)((ulong)puVar25 | 0x1ff) + 1);
              puStack2176 = (uint *)&UNK_00103062;
              auVar31 = func_0x00101e30(param_1,(long)puStack2168 + (long)puVar25,0);
              uVar5 = SUB168(auVar31 >> 0x40,0);
              if (SUB168(auVar31,0) != -1) goto code_r0x00102f93;
              puStack2176 = (uint *)&UNK_0010307f;
              uVar5 = func_0x00101d70(0,&UNK_001095e8,5);
              puStack2496 = (uint *)(ulong)*puVar21;
              puStack2176 = (uint *)&UNK_00103094;
              func_0x00102020(0,puStack2496,uVar5,puStack2160);
            }
            goto code_r0x00102d9d;
          }
          puStack2176 = (uint *)&UNK_0010320e;
          bStack2129 = bVar28;
          direct_mode(param_1,0);
          uVar5 = extraout_RDX;
        } while (puVar25 < puVar22);
code_r0x00103220:
        puVar21 = puStack2128;
        auVar31 = CONCAT88(uVar5,lStack2072);
        if ((uint *)(0x7fffffffffffffff - (long)puStack2168) < puVar25) goto code_r0x001030d1;
        puVar17 = (uint *)((long)puStack2168 + (long)puVar25);
        puStack2168 = puVar17;
        puVar22 = puStack2080;
      } while (param_8 == 0);
      if (puStack2128 == puVar17) {
code_r0x001033e0:
        puStack2168 = puVar17;
        if (*(char *)puStack2080 == '\0') {
          puStack2176 = (uint *)&UNK_00103419;
          auVar31 = func_0x00101f10();
          lStack2072 = SUB168(auVar31,0);
          puVar22 = puStack2080;
          if (lStack2072 < lStack2064) goto code_r0x00102f24;
        }
        puStack2176 = (uint *)&UNK_0010340a;
        puVar19 = (uint *)human_readable(puVar17,auStack1384,0x1b2,1,1);
      }
      else {
        puStack2176 = (uint *)&UNK_00103268;
        auVar31 = func_0x00101f10();
        lStack2072 = SUB168(auVar31,0);
        puVar22 = puStack2080;
        if (lStack2072 < lStack2064) goto code_r0x00102f24;
        puStack2176 = (uint *)&UNK_00103299;
        puVar19 = (uint *)human_readable(puStack2168,auStack1384,0x1b2,1,1);
        puStack2176 = (uint *)&UNK_001032a9;
        iVar1 = func_0x00101ed0(puStack2080,puVar19);
        auVar31 = CONCAT88(extraout_RDX_00,lStack2072);
        puVar22 = puStack2080;
        if (iVar1 == 0) goto code_r0x00102f24;
      }
      if ((long)puVar21 < 0) {
        puStack2176 = (uint *)&UNK_00103484;
        uVar5 = func_0x00101d70(0,&UNK_001095f9,5);
        puStack2184 = &uStack2047;
        puStack2192 = (uint *)&UNK_001034b2;
        puStack2176 = puVar19;
        func_0x00102020(0,0,uVar5,puStack2160,param_7);
      }
      else {
        puVar25 = (uint *)0x64;
        if (puVar21 != (uint *)0x0) {
          if (puVar17 < (uint *)0x28f5c28f5c28f5d) {
            puVar25 = (uint *)((ulong)((long)puVar17 * 100) / (ulong)puVar21 & 0xffffffff);
          }
          else {
            puVar25 = (uint *)((ulong)puVar17 /
                               (ulong)((SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)puVar21)
                                               >> 0x40,0) + (long)puVar21 >> 6) -
                                      ((long)puVar21 >> 0x3f)) & 0xffffffff);
          }
        }
        puStack2176 = (uint *)&UNK_0010330a;
        puStack2128 = (uint *)human_readable(puVar21,auStack728,0x1b0,1,1);
        if (puVar17 == puVar21) {
          puVar19 = puStack2128;
        }
        puStack2176 = (uint *)&UNK_00103329;
        uVar5 = func_0x00101d70(0,&UNK_00109890,5);
        puStack2184 = puStack2128;
        puStack2200 = &uStack2047;
        puStack2208 = (uint *)&UNK_0010335f;
        puStack2192 = puVar19;
        puStack2176 = puVar25;
        func_0x00102020(0,0,uVar5,puStack2160,param_7);
      }
      puVar22 = auStack2040;
      puStack2176 = (uint *)&UNK_0010337b;
      func_0x00101fb0(puVar22,puVar19,0x28c);
      lStack2064 = lStack2072 + 5;
      puStack2176 = (uint *)&UNK_00103396;
      puStack2496 = puStack2160;
      iVar1 = dosync();
      auVar31 = CONCAT88(extraout_RDX_01,lStack2072);
      if (iVar1 != 0) {
        puStack2176 = (uint *)&UNK_001033a3;
        auVar32 = func_0x00101c70();
        auVar31 = CONCAT88(SUB168(auVar32 >> 0x40,0),lStack2072);
        if (*SUB168(auVar32,0) != 5) goto code_r0x00102d9d;
        uStack2152 = CONCAT71(uStack2152._1_7_,1);
      }
      goto code_r0x00102f24;
    }
    puStack2176 = (uint *)&UNK_00103143;
    puStack2216 = (uint *)func_0x00101c70();
  }
  else {
    puStack2176 = (uint *)&UNK_00102d69;
    puStack2216 = (uint *)func_0x00101c70();
    *puStack2216 = 0x16;
  }
  puStack2176 = (uint *)&UNK_00102d85;
  uVar5 = func_0x00101d70(0,&UNK_001095aa,5);
  puStack2496 = (uint *)(ulong)*puStack2216;
  goto code_r0x00102d8f;
code_r0x001030d1:
  puStack2176 = (uint *)&UNK_001030e4;
  uVar5 = func_0x00101d70(0,&UNK_001095d5,5);
  puStack2496 = (uint *)0x0;
code_r0x00102d8f:
  puStack2176 = (uint *)&UNK_00102d98;
  func_0x00102020(0,puStack2496,uVar5,puStack2160);
code_r0x00102d9d:
  puStack2176 = (uint *)&UNK_00102da2;
  uVar12 = uStack2120;
  func_0x00101c50();
  uVar6 = 0xffffffff;
code_r0x00102da7:
  plStack2528 = (long *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (plStack2528 == (long *)0x0) {
    return uVar6;
  }
  puStack2176 = (uint *)&UNK_00103501;
  func_0x00101da0();
  uVar12 = uVar12 & 0xffffffff;
  lStack2232 = *(long *)(in_FS_OFFSET + 0x28);
  puStack2456 = (uint *)0x0;
  if (*(char *)((long)plStack2528 + 0x1c) != '\0') {
    puStack2456 = (uint *)((ulong)*(byte *)((long)plStack2528 + 0x1e) + plStack2528[1]);
  }
  puStack2488 = auStack2384;
  puStack2504 = (uint *)&UNK_00103577;
  uStack2448 = extraout_RDX_02;
  puStack2208 = puVar22;
  puStack2200 = puVar19;
  puStack2192 = puVar21;
  puStack2184 = (uint *)param_1;
  puStack2176 = puVar25;
  iVar1 = func_0x00101f80(1,uVar12,puStack2488);
  if (iVar1 == 0) {
    uVar2 = uStack2360 & 0xf000;
    if (uVar2 == 0x2000) {
      puStack2504 = (uint *)&UNK_0010385f;
      iVar1 = func_0x00101ce0();
      if (iVar1 == 0) {
        uVar2 = uStack2360 & 0xf000;
        goto code_r0x00103596;
      }
    }
    else {
code_r0x00103596:
      bStack2457 = uVar2 == 0xc000 || uVar2 == 0x1000;
      if (uVar2 != 0xc000 && uVar2 != 0x1000) {
        if ((uVar2 == 0x8000) && (lStack2336 < 0)) {
          puStack2504 = (uint *)&UNK_001038a2;
          uVar5 = func_0x00101d70(0,&UNK_00109648,5);
          piVar15 = (int *)0x0;
          puStack2504 = (uint *)&UNK_001038b4;
          func_0x00102020(0,0,uVar5,puStack2496);
          goto code_r0x001035d8;
        }
        piVar15 = (int *)plStack2528[1];
        if (SUB168(ZEXT816(4) * ZEXT816(piVar15) >> 0x40,0) != 0) goto code_r0x00103c16;
        puStack2504 = (uint *)&UNK_0010364d;
        piStack2480 = (int *)xmalloc((long)piVar15 << 2);
        lStack2432 = plStack2528[2];
        plVar13 = plStack2528;
        if (lStack2432 != -1) {
          uStack2440 = plStack2528[1];
          if ((uStack2360 & 0xf000) == 0x8000) {
            lStack2424 = lStack2336;
            if (0x1fffffffffffffff < lStack2328 - 1U) {
              lStack2328 = 0x200;
            }
            if (lStack2432 < lStack2328) {
              lStack2328 = lStack2432;
            }
            if (lStack2336 < lStack2328) goto code_r0x0010380e;
          }
          lStack2424 = 0;
          if (uStack2440 == 0) {
            puStack2504 = (uint *)&UNK_001038c3;
            uVar5 = randint_get_source(uStack2448);
            uStack2472 = CONCAT71(uStack2472._1_7_,1);
            goto code_r0x001038d0;
          }
code_r0x0010369a:
          uVar8 = 0;
          iVar1 = -2;
          puVar23 = patterns;
          piVar15 = piStack2480;
          uVar6 = uStack2440;
          uStack2416 = plStack2528;
          do {
            plStack2408 = uStack2416;
            if (iVar1 == 0) {
              puVar23 = patterns + 4;
              iVar1 = -2;
code_r0x001036cc:
              uVar26 = SEXT48(-iVar1);
              if (uVar6 <= uVar26) {
                uStack2472 = uVar8 + uVar6;
                goto code_r0x00103a25;
              }
              uVar8 = uVar8 + uVar26;
            }
            else {
              piVar24 = (int *)puVar23 + 1;
              puVar23 = (undefined1 *)piVar24;
              if (iVar1 < 0) goto code_r0x001036cc;
              uVar26 = SEXT48(iVar1);
              if (uVar6 < uVar26) goto code_r0x00103af8;
              puVar23 = (undefined1 *)(piVar24 + uVar26);
              puStack2504 = (uint *)&UNK_00103717;
              lVar4 = func_0x00101f00(piVar15,piVar24,uVar26 * 4);
              piVar15 = (int *)(lVar4 + uVar26 * 4);
            }
            uVar6 = uVar6 - uVar26;
            iVar1 = *(int *)puVar23;
          } while( true );
        }
        if ((uStack2360 & 0xf000) != 0x8000) {
          puStack2504 = (uint *)&UNK_00103b7b;
          lVar4 = func_0x00101e30(uVar12,0,2);
          uStack2440 = plStack2528[1];
          if (lVar4 < 1) {
            lVar4 = lStack2432;
            if (uStack2440 == 0) {
              puStack2504 = (uint *)&UNK_00103bcc;
              uVar5 = randint_get_source(uStack2448);
              goto code_r0x00103bcf;
            }
          }
          else {
            if (uStack2440 == 0) {
              puStack2504 = (uint *)&UNK_00103be5;
              uVar5 = randint_get_source(uStack2448);
              lStack2432 = lVar4;
code_r0x00103bcf:
              puVar25 = (uint *)0x0;
              uStack2472 = CONCAT71(uStack2472._1_7_,1);
              goto code_r0x001038e0;
            }
          }
          lStack2432 = lVar4;
          lStack2424 = 0;
          goto code_r0x0010369a;
        }
        uStack2440 = plStack2528[1];
        lStack2432 = lStack2336;
        uStack2472 = uStack2472 & 0xffffffffffffff00 | (ulong)*(byte *)((long)plStack2528 + 0x1d);
        if (*(byte *)((long)plStack2528 + 0x1d) != 0) {
          lStack2424 = 0;
          if (uStack2440 == 0) {
            puStack2504 = (uint *)&UNK_00103aed;
            uVar5 = randint_get_source(uStack2448);
            goto code_r0x001038d0;
          }
          goto code_r0x0010369a;
        }
        if (0x1fffffffffffffff < lStack2328 - 1U) {
          lStack2328 = 0x200;
        }
        if ((lStack2328 <= lStack2336) || (lStack2424 = lStack2336, lStack2336 == 0)) {
          lStack2424 = 0;
        }
        if (lStack2336 % lStack2328 != 0) {
          lStack2328 = lStack2328 - lStack2336 % lStack2328;
          if (0x7fffffffffffffff - lStack2336 <= lStack2328) {
            lStack2328 = 0x7fffffffffffffff - lStack2336;
          }
          lStack2432 = lStack2336 + lStack2328;
        }
code_r0x0010380e:
        if (uStack2440 != 0) goto code_r0x0010369a;
code_r0x00103820:
        puStack2504 = (uint *)&UNK_0010382a;
        uVar5 = randint_get_source(uStack2448);
        plVar13 = plStack2528;
        if (lStack2424 == 0) {
          uStack2472 = CONCAT71(uStack2472._1_7_,1);
          goto code_r0x001038d0;
        }
        lStack2392 = lStack2424;
        puVar25 = (uint *)plStack2528[1];
        uStack2472 = CONCAT71(uStack2472._1_7_,1);
        puVar21 = (uint *)0x0;
        while( true ) {
          plStack2528 = &lStack2392;
          puVar19 = (uint *)0x0;
          while (puVar19 < (uint *)((ulong)*(byte *)((long)plVar13 + 0x1e) + (long)puVar25)) {
            uVar6 = 0;
            if (puVar19 < puVar25) {
              uVar6 = (ulong)(uint)piStack2480[(long)puVar19];
            }
            puVar19 = (uint *)((long)puVar19 + 1);
            puStack2520 = &UNK_00103940;
            puStack2512 = puVar19;
            puStack2504 = puVar21;
            iVar1 = dopass(uVar12,puStack2488,puStack2496,plStack2528,uVar6,uVar5);
            if (iVar1 != 0) {
              if (iVar1 < 0) goto code_r0x001039c0;
              uStack2472 = uStack2472 & 0xffffffffffffff00;
            }
            puVar25 = (uint *)plVar13[1];
          }
code_r0x001038d0:
          plStack2528 = plVar13;
          if (lStack2432 == 0) break;
          puVar25 = (uint *)plStack2528[1];
code_r0x001038e0:
          lStack2392 = lStack2432;
          lStack2432 = 0;
          plVar13 = plStack2528;
          puVar21 = puStack2456;
        }
        if (*(int *)(plStack2528 + 3) == 0) {
code_r0x00103baf:
          bStack2457 = (bool)(undefined)uStack2472;
        }
        else {
          puStack2504 = (uint *)&UNK_0010396f;
          iVar1 = func_0x00101e20(uVar12,0);
          if ((iVar1 == 0) || ((uStack2360 & 0xf000) != 0x8000)) goto code_r0x00103baf;
          puStack2504 = (uint *)&UNK_001039a1;
          plStack2528 = (long *)func_0x00101d70(0,&UNK_00109663,5);
          puStack2504 = (uint *)&UNK_001039a9;
          puVar25 = (uint *)func_0x00101c70();
          puStack2504 = (uint *)&UNK_001039bb;
          func_0x00102020(0,(ulong)*puVar25,plStack2528,puStack2496);
        }
code_r0x001039c0:
        puStack2504 = (uint *)&UNK_001039ca;
        piVar15 = piStack2480;
        func_0x00101c50();
        goto code_r0x001035d8;
      }
    }
    puStack2504 = (uint *)&UNK_001035c1;
    uVar5 = func_0x00101d70(0,&UNK_00109632,5);
    piVar15 = (int *)0x0;
    puStack2504 = (uint *)&UNK_001035d3;
    func_0x00102020(0,0,uVar5,puStack2496);
    bStack2457 = false;
  }
  else {
    puStack2504 = (uint *)&UNK_00103733;
    plStack2528 = (long *)func_0x00101d70(0,&UNK_00109621,5);
    puStack2504 = (uint *)&UNK_0010373b;
    puVar25 = (uint *)func_0x00101c70();
    piVar15 = (int *)0x0;
    puStack2504 = (uint *)&UNK_0010374d;
    func_0x00102020(0,(ulong)*puVar25,plStack2528,puStack2496);
    bStack2457 = false;
  }
code_r0x001035d8:
  if (lStack2232 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)bStack2457;
  }
  puStack2504 = (uint *)&UNK_00103c16;
  func_0x00101da0();
code_r0x00103c16:
  puStack2504 = (uint *)&UNK_00103c1b;
  xalloc_die();
  puVar16 = program_name;
  uVar5 = 5;
  uStack2544 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack2520 = (undefined *)uVar12;
  puStack2512 = puVar19;
  puStack2504 = puVar21;
  if ((int)piVar15 == 0) goto code_r0x00103c7d;
  uVar5 = func_0x00101d70(0,&UNK_001098b8,5);
  func_0x001020e0(stderr,1,uVar5,puVar16);
  do {
    func_0x001020c0((ulong)piVar15 & 0xffffffff);
    uVar5 = extraout_RDX_03;
code_r0x00103c7d:
    uVar5 = func_0x00101d70(0,&UNK_001098e0,uVar5);
    func_0x00101fe0(1,uVar5,puVar16);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_00109900,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_00109988,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_001099b0,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = func_0x00101d70(0,&UNK_00109a00,5);
    func_0x00101fe0(1,uVar5,3);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_00109b08,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_00109c78,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_00109ca8,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_00109ce0,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_00109ec0,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_0010a030,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_0010a170,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_0010a1e0,5);
    func_0x00101eb0(uVar9,uVar5);
    uVar5 = stdout;
    uVar9 = func_0x00101d70(0,&UNK_0010a3b8,5);
    func_0x00101eb0(uVar9,uVar5);
    uStack2568 = 0;
    uStack2560 = 0;
    pbStack2664 = &UNK_0010967e;
    apbStack2648[4] = &UNK_001096bf;
    puStack2656 = &UNK_00109680;
    puStack2600 = &UNK_001096c9;
    apbStack2648[0] = &UNK_001096f8;
    puStack2584 = &UNK_001096d3;
    apbStack2648[1] = &UNK_00109690;
    apbStack2648[2] = &UNK_001096a6;
    apbStack2648[3] = &UNK_001096b0;
    puStack2608 = &UNK_001096b0;
    puStack2592 = &UNK_001096b0;
    puStack2576 = &UNK_001096b0;
    ppbVar11 = &pbStack2664;
    do {
      ppbVar11 = ppbVar11;
      ppbVar11 = ppbVar11 + 2;
      pbVar20 = *ppbVar11;
      bVar28 = false;
      bVar29 = pbVar20 == (byte *)0x0;
      if (bVar29) break;
      lVar4 = 6;
      pbVar18 = &UNK_00109678;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar28 = *pbVar18 < *pbVar20;
        bVar29 = *pbVar18 == *pbVar20;
        pbVar18 = pbVar18 + (ulong)bVar30 * -2 + 1;
        pbVar20 = pbVar20 + (ulong)bVar30 * -2 + 1;
      } while (bVar29);
    } while ((!bVar28 && !bVar29) != bVar28);
    pbVar20 = ppbVar11[3];
    if (pbVar20 == (byte *)0x0) {
      uVar5 = func_0x00101d70(0,&UNK_001096dd,5);
      func_0x00101fe0(1,uVar5,&UNK_001096f4,&UNK_0010a460);
      lVar4 = func_0x00101fd0(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x00101ca0(lVar4,&UNK_00109702,3), iVar1 != 0)) {
        pbVar20 = &UNK_00109678;
        goto code_r0x001040b0;
      }
      pbVar20 = &UNK_00109678;
      puVar16 = &UNK_0010969a;
      uVar5 = func_0x00101d70(0,&UNK_00109706,5);
      func_0x00101fe0(1,uVar5,&UNK_0010a460,&UNK_00109678);
    }
    else {
      uVar5 = func_0x00101d70(0,&UNK_001096dd,5);
      func_0x00101fe0(1,uVar5,&UNK_001096f4,&UNK_0010a460);
      lVar4 = func_0x00101fd0(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x00101ca0(lVar4,&UNK_00109702,3), iVar1 != 0)) {
code_r0x001040b0:
        uVar5 = stdout;
        uVar9 = func_0x00101d70(0,&UNK_0010a488,5);
        func_0x00101eb0(uVar9,uVar5);
      }
      uVar5 = func_0x00101d70(0,&UNK_00109706,5);
      func_0x00101fe0(1,uVar5,&UNK_0010a460,&UNK_00109678);
      puVar16 = &UNK_0010ad90;
      if (pbVar20 == &UNK_00109678) {
        puVar16 = &UNK_0010969a;
      }
    }
    uVar5 = func_0x00101d70(0,&UNK_0010a4d0,5);
    func_0x00101fe0(1,uVar5,pbVar20,puVar16);
  } while( true );
code_r0x00103af8:
  if ((1 < uVar6) && (uStack2472 = uVar8, uVar26 <= uVar6 * 3)) {
    do {
      if (uVar6 == uVar26) {
code_r0x00103b49:
        uVar6 = uVar6 - 1;
        piVar14 = piVar15 + 1;
        *piVar15 = *piVar24;
        plStack2408 = uStack2416;
        if (uVar6 == 0) goto code_r0x00103a25;
      }
      else {
        puStack2504 = (uint *)&UNK_00103b44;
        uVar8 = randint_genmax(uStack2448,uVar26 - 1);
        piVar14 = piVar15;
        if (uVar8 < uVar6) goto code_r0x00103b49;
      }
      uVar26 = uVar26 - 1;
      piVar15 = piVar14;
      piVar24 = piVar24 + 1;
    } while( true );
  }
  uStack2472 = uVar8 + uVar6;
code_r0x00103a25:
  piVar15 = piStack2480;
  uStack2416 = (long *)(uVar12 | (ulong)uStack2416._4_4_ << 0x20);
  puVar25 = (uint *)(uStack2472 - 1);
  lVar4 = uStack2440 - 1;
  lVar27 = uStack2440 - uStack2472;
  uVar12 = 0;
  puVar21 = puVar25;
  do {
    while (uVar6 = uVar12, puVar25 < puVar21) {
      uStack2472 = uStack2472 & 0xffffffff00000000 | (ulong)(uint)piVar15[uVar6];
      puVar21 = (uint *)((long)puVar21 - (long)puVar25);
      puStack2504 = (uint *)&UNK_00103aa3;
      lVar7 = randint_genmax(uStack2448);
      piVar15[uVar6] = piVar15[lVar7 + uVar6];
      piVar15[lVar7 + uVar6] = (int)uStack2472;
      uVar12 = uVar6 + 1;
      if (uVar6 + 1 == uStack2440) goto code_r0x00103ac3;
    }
    piVar15[lVar27] = piVar15[uVar6];
    piVar15[uVar6] = -1;
    lVar27 = lVar27 + 1;
    puVar21 = (uint *)((long)puVar21 + (lVar4 - (long)puVar25));
    uVar12 = uVar6 + 1;
  } while (uVar6 + 1 != uStack2440);
code_r0x00103ac3:
  puVar19 = (uint *)(uVar6 + 1);
  uVar12 = (ulong)uStack2416 & 0xffffffff;
  plStack2528 = plStack2408;
  goto code_r0x00103820;
}

