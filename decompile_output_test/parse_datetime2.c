
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

ulong parse_datetime2(long *param_1,undefined8 *******param_2,long *param_3,undefined4 param_4,
                     ulong param_5,byte *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong extraout_RDX;
  undefined *puVar25;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  byte bVar26;
  long lVar27;
  uint uVar28;
  undefined8 *******pppppppuVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  byte bVar35;
  undefined8 *******pppppppuVar36;
  int iVar37;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar38;
  bool bVar39;
  byte bVar40;
  undefined *puVar41;
  byte *pbStack1152;
  byte *pbStack1144;
  undefined8 *puStack1136;
  uint uStack1128;
  long *plStack1120;
  long alStack1064 [2];
  undefined8 uStack1048;
  int iStack1040;
  uint uStack1036;
  int iStack1032;
  uint uStack1028;
  uint uStack1024;
  int iStack1016;
  long lStack1008;
  int iStack984;
  int iStack980;
  int iStack976;
  uint uStack972;
  int iStack968;
  uint uStack964;
  int iStack952;
  int iStack920;
  int iStack916;
  int iStack912;
  int iStack908;
  int iStack904;
  int iStack900;
  int iStack888;
  long lStack872;
  long alStack856 [8];
  undefined auStack792 [32];
  int iStack760;
  uint uStack752;
  long lStack744;
  undefined8 *******pppppppuStack728;
  long lStack720;
  uint uStack712;
  int iStack708;
  uint uStack704;
  int iStack700;
  ulong uStack688;
  long lStack680;
  long lStack672;
  long lStack664;
  ulong uStack656;
  long lStack648;
  ulong uStack640;
  long lStack632;
  ulong uStack624;
  ulong uStack616;
  ulong uStack608;
  ulong uStack600;
  undefined8 *******pppppppuStack592;
  ulong uStack584;
  uint uStack576;
  byte bStack568;
  char cStack567;
  ulong uStack560;
  ulong uStack552;
  long lStack544;
  ulong uStack536;
  ulong uStack528;
  long lStack520;
  undefined uStack512;
  byte bStack511;
  undefined uStack510;
  undefined uStack509;
  undefined uStack508;
  undefined uStack507;
  undefined uStack506;
  undefined uStack505;
  undefined uStack504;
  long lStack496;
  undefined4 uStack488;
  int iStack484;
  long lStack480;
  undefined4 uStack472;
  undefined8 uStack464;
  undefined auStack437 [13];
  undefined auStack424 [32];
  undefined auStack392 [112];
  byte abStack280 [112];
  undefined2 uStack168;
  undefined uStack166;
  undefined auStack165 [101];
  long lStack64;
  
  bVar40 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = func_0x00102840(param_2);
  if (param_3 == (long *)0x0) {
    param_3 = alStack1064;
    gettime(param_3);
  }
  puStack1136 = (undefined8 *)param_3[1];
  lVar19 = *param_3;
  bVar35 = *(byte *)param_2;
  bVar38 = bVar35 < 0x20;
  bVar39 = bVar35 == 0x20;
  pppppppuVar36 = param_2;
  if ((bVar35 < 0x21) && (bVar38 = (0x100003e00U >> ((ulong)bVar35 & 0x1f) & 1) != 0, bVar38)) {
    do {
      pppppppuVar36 = (undefined8 *******)((long)pppppppuVar36 + 1);
      bVar35 = *(byte *)pppppppuVar36;
      bVar38 = bVar35 < 0x20;
      bVar39 = bVar35 == 0x20;
      if (0x20 < bVar35) break;
      bVar38 = false;
      bVar39 = (1 << (bVar35 & 0x3f) & 0x100003e00U) == 0;
    } while (!bVar39);
  }
  lVar24 = 4;
  pppppppuVar29 = pppppppuVar36;
  pbVar17 = &UNK_00113182;
  do {
    if (lVar24 == 0) break;
    lVar24 = lVar24 + -1;
    bVar38 = *(byte *)pppppppuVar29 < *pbVar17;
    bVar39 = *(byte *)pppppppuVar29 == *pbVar17;
    pppppppuVar29 = (undefined8 *******)((long)pppppppuVar29 + (ulong)bVar40 * -2 + 1);
    pbVar17 = pbVar17 + (ulong)bVar40 * -2 + 1;
  } while (bVar39);
  plStack1120 = param_1;
  if ((!bVar38 && !bVar39) == bVar38) {
    bVar35 = *(byte *)((long)pppppppuVar36 + 4);
    pbVar17 = (byte *)((long)pppppppuVar36 + 4);
    if (bVar35 == 0) goto code_r0x001089a8;
    lVar24 = 1;
    pbVar16 = pbVar17;
    bVar26 = bVar35;
code_r0x0010898b:
    if (bVar26 == 0x5c) {
      pbVar1 = pbVar16 + 1;
      pbVar2 = pbVar16 + 1;
      pbVar16 = pbVar1;
      if ((*pbVar2 != 0x5c) && (*pbVar2 != 0x22)) goto code_r0x001089a8;
code_r0x0010897b:
      bVar26 = pbVar16[1];
      lVar24 = lVar24 + 1;
      pbVar16 = pbVar16 + 1;
      if (bVar26 == 0) goto code_r0x001089a8;
      goto code_r0x0010898b;
    }
    if (bVar26 != 0x22) goto code_r0x0010897b;
    if (100 < lVar24) {
      pbStack1144 = (byte *)func_0x001029e0();
      pbVar16 = pbStack1144;
      pbStack1152 = pbStack1144;
      if (pbStack1144 != (byte *)0x0) goto joined_r0x00108dc7;
      goto code_r0x00108d90;
    }
    pbVar16 = abStack280;
    pbStack1152 = (byte *)0x0;
    pbStack1144 = pbVar16;
joined_r0x00108dc7:
    while (bVar35 != 0x22) {
      pbVar17 = pbVar17 + (bVar35 == 0x5c);
      bVar35 = pbVar17[1];
      *pbVar16 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      pbVar16 = pbVar16 + 1;
    }
    *pbVar16 = 0;
    uVar20 = 0;
    unaff_R15 = tzalloc(pbStack1144);
    if (unaff_R15 == 0) goto code_r0x00108cdc;
    pppppppuVar36 = (undefined8 *******)(pbVar17 + 1);
    if (pbVar17[1] < 0x21) {
      uVar20 = 0x100003e00U >> ((ulong)pbVar17[1] & 0x1f) & 1;
      while (uVar20 != 0) {
        pppppppuVar36 = (undefined8 *******)((long)pppppppuVar36 + 1);
        if (0x20 < *(byte *)pppppppuVar36) break;
        uVar20 = 1 << (*(byte *)pppppppuVar36 & 0x3f) & 0x100003e00;
      }
    }
    uVar20 = 0;
    lVar24 = localtime_rz(unaff_R15,param_3,&iStack920);
    if (lVar24 == 0) goto code_r0x00108cce;
  }
  else {
code_r0x001089a8:
    lVar24 = localtime_rz(param_5,param_3,&iStack920);
    unaff_R15 = param_5;
    pbStack1144 = param_6;
    if (lVar24 == 0) {
code_r0x00108d90:
      pbStack1152 = (byte *)0x0;
      uVar20 = 0;
      goto code_r0x00108cdc;
    }
    pbStack1152 = (byte *)0x0;
  }
  lStack680 = 0;
  iStack700 = 2;
  uStack624 = 0;
  uStack616 = 0;
  uStack608 = 0;
  iVar37 = 0x76a700;
  uStack600 = 0;
  pppppppuStack592 = (undefined8 *******)0x0;
  if (*(byte *)pppppppuVar36 == 0) {
    pppppppuVar36 = (undefined8 *******)&UNK_0011176b;
  }
  uStack1128._0_1_ = (byte)param_4;
  uStack584 = 0;
  lStack632 = (long)(int)puStack1136;
  uStack576 = 0;
  bStack568 = 0;
  bStack511 = (byte)uStack1128 & 1;
  uStack688 = (long)iStack900 + 0x76c;
  lStack672 = (long)(iStack904 + 1);
  lStack664 = (long)iStack908;
  uStack656 = SEXT48(iStack912);
  lStack648 = (long)iStack916;
  uStack640 = SEXT48(iStack920);
  iStack1016 = iStack888;
  cStack567 = '\0';
  uStack560 = 0;
  uStack552 = 0;
  uStack528 = 0;
  lStack544 = 0;
  uStack536 = 0;
  lStack520 = 0;
  uStack512 = 0;
  uStack510 = 0;
  uStack509 = 0;
  uStack507 = 0;
  uStack508 = 0;
  uStack506 = 0;
  uStack505 = 0;
  uStack504 = 0;
  lStack496 = lStack872;
  uStack488 = 0x10d;
  iStack484 = iStack888;
  lStack480 = 0;
  pppppppuStack728 = pppppppuVar36;
  do {
    if (SCARRY8((long)iVar37,lVar19)) break;
    alStack856[0] = (long)iVar37 + lVar19;
    lVar24 = localtime_rz(unaff_R15,alStack856,auStack792);
    if (((lVar24 != 0) && (lStack744 != 0)) && (iStack760 != iStack484)) {
      uStack472 = 0x10d;
      uStack464 = 0;
      lStack480 = lStack744;
      break;
    }
    iVar37 = iVar37 + 0x76a700;
  } while (iVar37 != 0x1da9c00);
  if (((lStack496 != 0) && (lStack480 != 0)) && (iVar37 = func_0x00102960(), iVar37 == 0)) {
    iStack484 = -1;
    lStack480 = 0;
  }
  pppppppuVar36 = &pppppppuStack728;
  iVar37 = yyparse(pppppppuVar36);
  pppppppuVar29 = pppppppuStack728;
  if (iVar37 != 0) {
    uVar20 = (ulong)bStack511;
    if (bStack511 == 0) goto code_r0x00108cce;
    if (pppppppuStack728 < (undefined8 *******)((long)param_2 + lVar15)) {
      uVar22 = func_0x00102820(0,&UNK_001136d0,5);
    }
    else {
      uVar22 = func_0x00102820(0,&UNK_00113187,5);
    }
    uVar20 = 0;
    dbg_printf(uVar22,pppppppuVar29);
    goto code_r0x00108cce;
  }
  if (bStack511 == 0) {
    uVar20 = (ulong)bStack568;
    if (bStack568 != 0) {
      *(int *)param_1 = (int)uStack640;
      *(undefined4 *)((long)param_1 + 4) = (int)(uStack640 >> 0x20);
      *(int *)(param_1 + 1) = (int)lStack632;
      *(undefined4 *)((long)param_1 + 0xc) = (int)((ulong)lStack632 >> 0x20);
      goto code_r0x00108cce;
    }
    bVar35 = bStack568;
    if (1 < (long)(uStack560 | uStack528 | uStack552 | uStack536 | lStack544 + lStack520))
    goto code_r0x00108ccb;
  }
  else {
    uVar22 = func_0x00102820(0,&UNK_0011319e,5);
    dbg_printf(uVar22);
    puVar30 = &UNK_001131af;
    if ((bStack568 == 0) && (puVar30 = &UNK_001131c8, lStack520 == 0)) {
      if (pbStack1144 == (byte *)0x0) {
        puVar30 = &UNK_00113211;
        goto code_r0x00108f50;
      }
      bVar38 = param_5 < unaff_R15;
      bVar39 = param_5 == unaff_R15;
      if (bVar39) {
        lVar15 = 5;
        pbVar17 = pbStack1144;
        pbVar16 = &UNK_00111768;
        do {
          if (lVar15 == 0) break;
          lVar15 = lVar15 + -1;
          bVar38 = *pbVar17 < *pbVar16;
          bVar39 = *pbVar17 == *pbVar16;
          pbVar17 = pbVar17 + (ulong)bVar40 * -2 + 1;
          pbVar16 = pbVar16 + (ulong)bVar40 * -2 + 1;
        } while (bVar39);
        puVar30 = &UNK_001136f8;
        if ((!bVar38 && !bVar39) == bVar38) goto code_r0x00108f50;
        uVar22 = func_0x00102820(0,&UNK_001131f7,5);
      }
      else {
        uVar22 = func_0x00102820(0,&UNK_001131e0,5);
      }
      func_0x00102b00(stderr,1,uVar22,pbStack1144);
    }
    else {
code_r0x00108f50:
      uVar22 = func_0x00102820(0,puVar30,5);
      func_0x00102b00(stderr,1,uVar22);
    }
    if (lStack544 == 0) {
code_r0x00108fc0:
      if (lStack520 != 0) {
code_r0x00109286:
        uVar22 = time_zone_str((ulong)uStack704,auStack424);
        func_0x00102b00(stderr,1,&UNK_00113220,uVar22);
      }
    }
    else {
      if (lStack520 != 0) goto code_r0x00109286;
      if (0 < iStack708) {
        func_0x00102af0(&UNK_00113226,1,5,stderr);
        goto code_r0x00108fc0;
      }
    }
    func_0x00102900(10,stderr);
    uVar20 = (ulong)bStack511;
    if (bStack568 != 0) {
      *(int *)param_1 = (int)uStack640;
      *(undefined4 *)((long)param_1 + 4) = (int)(uStack640 >> 0x20);
      *(int *)(param_1 + 1) = (int)lStack632;
      *(undefined4 *)((long)param_1 + 0xc) = (int)((ulong)lStack632 >> 0x20);
      goto code_r0x00109002;
    }
    bVar35 = bStack511;
    if (1 < (long)(uStack528 | uStack560 | uStack552 | uStack536 | lStack520 + lStack544)) {
      if (bStack511 != 0) {
        if (1 < (long)uStack528) {
          dbg_printf(&UNK_00113720);
        }
        if (1 < (long)uStack560) {
          dbg_printf(&UNK_00113748);
        }
        if (1 < (long)uStack552) {
          dbg_printf(&UNK_00113770);
        }
        if (1 < (long)uStack536) {
          dbg_printf(&UNK_00113798);
        }
        if (1 < lStack520 + lStack544) {
          dbg_printf(&UNK_001137c8);
        }
      }
      goto code_r0x00108ccb;
    }
  }
  uVar20 = uStack688;
  uVar21 = uStack688;
  if ((long)uStack688 < 0) {
    bVar26 = 0;
    lVar15 = -0x76c - uStack688;
    if (SBORROW8(-0x76c,uStack688)) goto code_r0x0010984a;
  }
  else {
    if (lStack680 == 2) {
      lVar15 = 0x76c;
      if ((long)uStack688 < 0x45) {
        lVar15 = 2000;
      }
      uVar21 = lVar15 + uStack688;
      if (bVar35 != 0) {
        uVar22 = func_0x00102820(0,&UNK_001137f0,5);
        dbg_printf(uVar22,uVar20,uVar21);
      }
    }
    bVar26 = 0;
    lVar15 = uVar21 - 0x76c;
    if (uVar21 < 0x76c) {
      if (-1 < lVar15) {
code_r0x0010984a:
        bVar26 = 1;
      }
    }
    else {
      if (lVar15 < 0) goto code_r0x0010984a;
    }
  }
  uVar20 = uStack656;
  uStack1028 = (uint)lVar15;
  if (lVar15 != (long)(int)uStack1028) {
    bVar26 = 1;
  }
  if (bVar26 == 0) {
    iStack1032 = (int)(lStack672 + -1);
    if (lStack672 + -1 == (long)iStack1032 && !SCARRY8(lStack672,-1)) {
      uStack1036 = (uint)lStack664;
      bVar38 = lStack664 != (long)(int)uStack1036;
      if (!bVar38) {
        if (uStack528 == 0) {
          if ((cStack567 == '\0') || (uStack560 != 0)) {
            uStack1048 = 0;
            iStack1040 = 0;
            lStack632 = 0;
            if (bStack511 != 0) {
code_r0x00109b93:
              lStack632 = 0;
              iStack1040 = 0;
              uStack1048 = 0;
              dbg_printf(&UNK_001138a8);
            }
            goto code_r0x00109b28;
          }
          if (uStack552 == 0) goto code_r0x00109ac3;
          uStack1048 = 0;
          iStack1040 = 0;
          lStack632 = 0;
          if (bStack511 != 0) goto code_r0x00109b93;
code_r0x001094ac:
          iStack1016 = -1;
        }
        else {
code_r0x00109ac3:
          iStack1040 = (int)uStack656;
          if (iStack700 == 0) {
            if (10 < uStack656 - 1) {
              if (uStack656 != 0xc) {
                puVar30 = &UNK_0011317a;
                goto code_r0x0010a419;
              }
              iStack1040 = 0;
            }
          }
          else {
            if (iStack700 == 1) {
              iStack1040 = iStack1040 + 0xc;
              if (10 < uStack656 - 1) {
                if (uStack656 != 0xc) {
                  puVar30 = &UNK_001130de;
                  goto code_r0x0010a419;
                }
                iStack1040 = 0xc;
              }
            }
            else {
              if (0x17 < uStack656) {
                puVar30 = &UNK_001132af;
code_r0x0010a419:
                iStack1040 = -1;
                if (bStack511 != 0) {
                  uVar22 = func_0x00102820(0,&UNK_0011324a,5);
                  dbg_printf(uVar22,uVar20,puVar30);
                }
                goto code_r0x00108ccb;
              }
            }
          }
          uStack1048 = uStack640 & 0xffffffff | lStack648 << 0x20;
          if (bStack511 != 0) {
            func_0x00102740(auStack392,100,1);
            if (uStack528 == 0) {
              uVar22 = func_0x00102820(0,&UNK_00113878,5);
            }
            else {
              uVar22 = func_0x00102820(0,&UNK_00113848,5);
            }
            dbg_printf(uVar22,auStack392);
          }
code_r0x00109b28:
          if ((uStack560 | uStack552 | uStack528) != 0) goto code_r0x001094ac;
        }
        if (lStack544 != 0) {
          iStack1016 = iStack708;
        }
        puStack1136 = &uStack1048;
        uStack1024 = 0xffffffff;
        iStack984 = (int)uStack1048;
        iStack980 = uStack1048._4_4_;
        iStack976 = iStack1040;
        uStack972 = uStack1036;
        iStack968 = iStack1032;
        uStack964 = uStack1028;
        iStack952 = iStack1016;
        lVar15 = mktime_z();
        if (((int)uStack1024 < 0) ||
           (cVar14 = mktime_ok_part_6(), uVar20 = extraout_RDX, cVar14 == '\0')) {
          lVar19 = lStack520;
          if (lStack520 != 0) {
            uStack168 = 0x5858;
            uStack166 = 0x58;
            time_zone_str((ulong)uStack704,auStack165);
            lVar15 = tzalloc(&uStack168);
            if (lVar15 == 0) {
              if (bStack511 != 0) {
                uVar22 = func_0x00102820(0,&UNK_00113274,5);
                dbg_printf(uVar22,&uStack168);
              }
              goto code_r0x00108ccb;
            }
            uStack1024 = 0xffffffff;
            uStack1048 = CONCAT44(iStack980,iStack984);
            iStack1040 = iStack976;
            uStack1036 = uStack972;
            iStack1032 = iStack968;
            uStack1028 = uStack964;
            iStack1016 = iStack952;
            lVar15 = mktime_z(lVar15);
            if ((int)uStack1024 < 0) {
              tzfree();
            }
            else {
              cVar14 = mktime_ok_part_6(&iStack984);
              tzfree();
              uVar20 = extraout_RDX_00;
              if (cVar14 != '\0') goto code_r0x00109988;
            }
          }
          uVar10 = uStack964;
          iVar9 = iStack968;
          uVar8 = uStack972;
          iVar7 = iStack976;
          iVar6 = iStack980;
          iVar5 = iStack984;
          uVar4 = uStack1028;
          iVar3 = iStack1032;
          uVar28 = uStack1036;
          iVar37 = iStack1040;
          plStack1120 = (long *)((ulong)param_1 & 0xffffffff00000000 | (ulong)uStack1028);
          pbStack1144 = (byte *)((ulong)pbStack1144 & 0xffffffff00000000 | (ulong)uStack972);
          if (((((iStack984 == (int)uStack1048) && (iStack980 == uStack1048._4_4_)) &&
               (uStack972 == uStack1036)) &&
              ((iStack976 != iStack1040 && (iStack968 == iStack1032)))) && (uStack964 == uStack1028)
             ) {
            if (bStack511 == 0) goto code_r0x00108ccb;
            uVar22 = func_0x00102820(0,&UNK_001138e0,5);
            dbg_printf(uVar22);
            uVar22 = debug_strfdatetime_constprop_12(&iStack984,pppppppuVar36,&uStack168);
            uVar23 = func_0x00102820(0,&UNK_00113292,5);
            dbg_printf(uVar23,uVar22);
            uVar22 = debug_strfdatetime_constprop_12(puStack1136,pppppppuVar36,&uStack168);
            uVar23 = func_0x00102820(0,&UNK_001132b0,5);
            puVar41 = &UNK_001096b7;
            dbg_printf(uVar23,uVar22);
            puVar31 = &UNK_001132af;
            bVar38 = true;
            puVar30 = &UNK_001132af;
          }
          else {
            if (bStack511 == 0) goto code_r0x00108ccb;
            uVar22 = func_0x00102820(0,&UNK_001138e0,5);
            dbg_printf(uVar22);
            uVar22 = debug_strfdatetime_constprop_12(&iStack984,pppppppuVar36,&uStack168);
            uVar23 = func_0x00102820(0,&UNK_00113292,5);
            dbg_printf(uVar23,uVar22);
            pppppppuVar36 =
                 (undefined8 *******)
                 debug_strfdatetime_constprop_12(puStack1136,pppppppuVar36,&uStack168);
            uVar22 = func_0x00102820(0,&UNK_001132b0,5);
            puVar41 = &UNK_0010a20a;
            dbg_printf(uVar22,pppppppuVar36);
            puVar30 = &UNK_0011317f;
            puVar31 = &UNK_001132af;
            if (iVar5 != (int)uStack1048) {
              puVar31 = &UNK_0011317f;
            }
            if (iVar6 == uStack1048._4_4_) {
              puVar30 = &UNK_001132af;
            }
          }
          puVar25 = &UNK_0011317f;
          puVar34 = &UNK_0011317d;
          puVar33 = &UNK_001132af;
          puVar32 = &UNK_001132af;
          if (iVar7 != iVar37) {
            puVar33 = &UNK_0011317f;
          }
          if (uVar8 != uVar28) {
            puVar32 = &UNK_0011317f;
          }
          if (iVar9 == iVar3) {
            puVar25 = &UNK_001132af;
          }
          if (uVar10 == uVar4) {
            puVar34 = &UNK_001132af;
          }
          func_0x00102740(&uStack168,100,1,100,&UNK_00113908,puVar34,puVar25,puVar32,puVar33,puVar30
                          ,puVar31,puVar41);
          lVar15 = 0x34;
          do {
            iVar37 = (int)lVar15;
            if (iVar37 == 0) break;
            lVar15 = lVar15 + -1;
          } while (*(char *)((long)&uStack168 + lVar15) == ' ');
          *(undefined *)((long)&uStack168 + (long)iVar37) = 0;
          dbg_printf(&UNK_00113311,&uStack168);
          uVar22 = func_0x00102820(0,&UNK_001132ce,5);
          dbg_printf(uVar22);
          if (bVar38) {
            uVar22 = func_0x00102820(0,&UNK_00113948,5);
            dbg_printf(uVar22);
          }
          if ((uVar8 != uVar28) && (iVar9 != iVar3)) {
            uVar22 = func_0x00102820(0,&UNK_00113980,5);
            dbg_printf(uVar22);
          }
          uVar22 = func_0x00102820(0,&UNK_001139a8,5);
          dbg_printf(uVar22);
          if (lVar19 == 0) {
            uVar22 = func_0x00102820(0,&UNK_001132f9,5);
          }
          else {
            uVar22 = func_0x00102820(0,&UNK_001132e6,5);
          }
          dbg_printf(&UNK_0011330a,uVar22);
          goto code_r0x00108ccb;
        }
code_r0x00109988:
        if (uStack552 == 0) {
code_r0x00109c27:
          if (bStack511 == 0) {
code_r0x00109d7e:
            uVar20 = uStack624;
            if ((uStack616 | uStack624 | uStack608) != 0) goto code_r0x00109e05;
            goto code_r0x00109d9b;
          }
          uVar21 = uStack552;
          if (uStack560 == 0) {
            if (uStack552 == 0) {
              uVar20 = (ulong)uStack1036;
              uVar28 = iStack1032 + 1;
              uVar22 = tm_year_str((ulong)uStack1028,auStack437);
              func_0x00102740(auStack392,100,1,100,&UNK_00113333,uVar22,(ulong)uVar28);
              uVar22 = func_0x00102820(0,&UNK_00113a20,5);
              dbg_printf(uVar22,auStack392);
              uVar21 = uStack560;
              if (uStack552 != 0) goto joined_r0x0010a092;
            }
          }
          else {
joined_r0x0010a092:
            if (uVar21 != 0) goto code_r0x0010a0a0;
          }
        }
        else {
          if (uStack560 == 0) {
            if (0 < lStack720) {
              bVar38 = uStack1024 != uStack712;
            }
            lVar19 = (lStack720 - (ulong)bVar38) * 7;
            lVar15 = SUB168(SEXT816((long)(lStack720 - (ulong)bVar38)) * SEXT816(7) >> 0x40,0);
            if (((lVar15 == 0 || lVar15 == -1) &&
                (lVar15 = (long)((int)((uStack712 - uStack1024) + 7) % 7), lVar24 = lVar15 + lVar19,
                !SCARRY8(lVar15,lVar19))) &&
               (lVar19 = (long)(int)uStack1036, lVar15 = lVar24 + lVar19, uStack1036 = (uint)lVar15,
               lVar15 == (long)(int)uStack1036 && !SCARRY8(lVar24,lVar19))) {
              iStack1016 = -1;
              lVar15 = mktime_z(unaff_R15,puStack1136);
              if (lVar15 != -1) {
                if (bStack511 == 0) goto code_r0x00109d7e;
                uVar22 = debug_strfdatetime_constprop_12(puStack1136,pppppppuVar36,auStack392);
                uVar23 = str_days_constprop_13(pppppppuVar36,&uStack168);
                uVar18 = func_0x00102820(0,&UNK_00113315,5);
                dbg_printf(uVar18,uVar23,uVar22);
                uVar20 = extraout_RDX_01;
                goto code_r0x00109c27;
              }
            }
            if (bStack511 != 0) {
              uVar22 = debug_strfdatetime_constprop_12(puStack1136,pppppppuVar36,auStack392);
              uVar23 = str_days_constprop_13(pppppppuVar36,&uStack168);
              uVar18 = func_0x00102820(0,&UNK_001139d0,5);
              dbg_printf(uVar18,uVar23,lStack720,(ulong)uStack712,uVar22);
            }
            goto code_r0x00108ccb;
          }
          bVar26 = bStack511;
          if (bStack511 == 0) goto code_r0x00109d7e;
code_r0x0010a0a0:
          uVar22 = str_days_constprop_13(pppppppuVar36,&uStack168,uVar20);
          uVar23 = func_0x00102820(0,&UNK_00113a50,5);
          dbg_printf(uVar23,uVar22);
        }
        uVar22 = debug_strfdatetime_constprop_12(puStack1136,pppppppuVar36,auStack392);
        uVar23 = func_0x00102820(0,&UNK_00113348,5);
        dbg_printf(uVar23,uVar22);
        bVar26 = bStack511;
        if ((uStack616 | uStack624 | uStack608) == 0) goto code_r0x00109d9b;
        uVar20 = uStack624;
        if (bStack511 == 0) goto code_r0x00109e05;
        if ((uStack616 | uStack624) != 0) {
          if (uStack1036 != 0xf) {
            uVar22 = func_0x00102820(0,&UNK_00113a90,5);
            dbg_printf(uVar22);
          }
          if (uStack608 == 0) goto code_r0x00109d00;
        }
        if (iStack1040 != 0xc) {
          uVar22 = func_0x00102820(0,&UNK_00113af8,5);
          dbg_printf(uVar22);
        }
code_r0x00109d00:
        uVar21 = (long)(int)uStack1028 + uStack624;
        if (uVar21 == (long)(int)uVar21 && !SCARRY8((long)(int)uStack1028,uStack624))
        goto code_r0x00109e30;
        goto code_r0x00109d32;
      }
    }
  }
  else {
    if (bVar35 != 0) {
      uVar22 = func_0x00102820(0,&UNK_0011322c,5);
      dbg_printf(uVar22,uVar21);
    }
  }
  puVar30 = &UNK_00113820;
  if (bStack511 != 0) goto code_r0x00109399;
code_r0x00108ccb:
  do {
    uVar20 = 0;
code_r0x00108cce:
    while( true ) {
      if (unaff_R15 != param_5) {
        tzfree(unaff_R15);
      }
code_r0x00108cdc:
      func_0x00102750(pbStack1152);
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar20;
      }
      uVar20 = func_0x00102850();
code_r0x00109e05:
      uVar21 = uVar20 + (long)(int)uStack1028;
      if (uVar21 != (long)(int)uVar21 || SCARRY8(uVar20,(long)(int)uStack1028))
      goto code_r0x00108ccb;
code_r0x00109e30:
      lVar15 = (long)iStack1032 + uStack616;
      iVar37 = (int)lVar15;
      if ((lVar15 != (long)iVar37) || (SCARRY8((long)iStack1032,uStack616) != false))
      goto code_r0x00109d32;
      uVar20 = (long)(int)uStack1036 + uStack608;
      uVar28 = (uint)uVar20;
      if ((uVar20 != (long)(int)uVar28) || (SCARRY8((long)(int)uStack1036,uStack608) != false))
      goto code_r0x00109d32;
      uStack1128 = (uint)(uVar21 & 0xffffffff);
      uStack1028 = uStack1128;
      iStack1040 = iStack976;
      uStack1048 = CONCAT44(iStack980,iStack984);
      iStack1016 = iStack952;
      uStack1036 = uVar28;
      iStack1032 = iVar37;
      lVar15 = mktime_z(unaff_R15,puStack1136);
      uVar13 = uStack608;
      uVar12 = uStack616;
      uVar11 = uStack624;
      if (lVar15 == -1) {
        if (bStack511 != 0) {
          uVar22 = debug_strfdatetime_constprop_12(puStack1136,pppppppuVar36,auStack392);
          uVar23 = func_0x00102820(0,&UNK_00113b40,5);
          dbg_printf(uVar23,uVar22);
        }
        goto code_r0x00108ccb;
      }
      bVar26 = bStack511;
      if (bStack511 != 0) {
        uVar22 = func_0x00102820(0,&UNK_00113b80,5);
        dbg_printf(uVar22,uVar11,uVar12,uVar13);
        uVar22 = debug_strfdatetime_constprop_12(puStack1136,pppppppuVar36,auStack392);
        uVar23 = func_0x00102820(0,&UNK_00113381,5);
        dbg_printf(uVar23,uVar22);
        if ((iStack952 != -1) && (iStack952 != iStack1016)) {
          uVar22 = func_0x00102820(0,&UNK_00113bc0,5);
          dbg_printf(uVar22);
        }
        bVar26 = bStack511;
        if ((uStack608 == 0) &&
           ((uVar28 != uStack1036 || ((uStack616 == 0 && (iVar37 != iStack1032)))))) {
          uVar22 = func_0x00102820(0,&UNK_00113c00,5);
          dbg_printf(uVar22);
          uVar22 = tm_year_str(uVar21 & 0xffffffff,auStack437);
          uVar23 = func_0x00102820(0,&UNK_00113c40,5);
          dbg_printf(uVar23,uVar22,(ulong)(iVar37 + 1),uVar20 & 0xffffffff);
          uVar20 = (ulong)uStack1036;
          uVar28 = iStack1032 + 1;
          uVar22 = tm_year_str((ulong)uStack1028,auStack437);
          uVar23 = func_0x00102820(0,&UNK_00113c68,5);
          dbg_printf(uVar23,uVar22,(ulong)uVar28,uVar20);
          bVar26 = bStack511;
        }
      }
code_r0x00109d9b:
      uVar28 = uStack704;
      if ((lStack520 != 0) &&
         (lVar19 = (long)(int)uStack704 - lStack1008, bVar38 = SBORROW8(lVar15,lVar19),
         lVar15 = lVar15 - lVar19, (byte)(SBORROW8((long)(int)uStack704,lStack1008) | bVar38) != 0))
      {
        if (bVar26 != 0) {
          uVar22 = func_0x00102820(0,&UNK_00113c90,5);
          dbg_printf(uVar22,(ulong)uVar28);
        }
        goto code_r0x00108ccb;
      }
      if (bVar26 != 0) {
        uVar22 = debug_strfdatetime_constprop_12(puStack1136,pppppppuVar36,auStack392);
        uVar23 = func_0x00102820(0,&UNK_0011339b,5);
        dbg_printf(uVar23,uVar22,lVar15);
      }
      uVar11 = uStack584;
      pppppppuVar29 = pppppppuStack592;
      uVar21 = uStack600;
      uVar20 = (ulong)bStack511;
      lVar19 = SUB168(SEXT816((long)uStack600) * SEXT416(0xe10) >> 0x40,0);
      if ((((lVar19 != 0 && lVar19 != -1) ||
           (lVar19 = uStack600 * 0xe10 + lVar15, SCARRY8(uStack600 * 0xe10,lVar15))) ||
          (lVar15 = SUB168(SEXT816((long)pppppppuStack592) * SEXT816(0x3c) >> 0x40,0),
          pppppppuVar36 = pppppppuStack592, lVar15 != 0 && lVar15 != -1)) ||
         ((lVar15 = lVar19 + (long)pppppppuStack592 * 0x3c,
          SCARRY8(lVar19,(long)pppppppuStack592 * 0x3c) ||
          (lVar19 = lVar15 + uStack584, SCARRY8(lVar15,uStack584))))) break;
      lVar15 = lStack632 + (long)(int)uStack576;
      lVar24 = (lVar15 % 1000000000 + 1000000000) % 1000000000;
      lVar15 = (long)(int)((lVar15 - lVar24) / 1000000000);
      lVar27 = lVar19 + lVar15;
      if (SCARRY8(lVar19,lVar15)) break;
      *plStack1120 = lVar27;
      plStack1120[1] = lVar24;
      pppppppuVar36 = pppppppuVar29;
      if ((bStack511 != 0) &&
         ((uStack600 | (ulong)pppppppuStack592 | uStack584 | (long)(int)uStack576) != 0)) {
        uVar20 = (ulong)uStack576;
        puStack1136 = (undefined8 *)((ulong)puStack1136 & 0xffffffff00000000 | uVar20);
        uVar22 = func_0x00102820(0,&UNK_00113cf0,5);
        dbg_printf(uVar22,uVar21,pppppppuVar29,uVar11,uVar20);
        uVar22 = func_0x00102820(0,&UNK_00113d40,5);
        dbg_printf(uVar22,lVar27);
        if ((iStack1016 != -1) &&
           ((lVar15 = localtime_rz(unaff_R15,plStack1120,auStack792), lVar15 != 0 &&
            (iStack1016 != iStack760)))) {
          uVar22 = func_0x00102820(0,&UNK_00113d68,5);
          dbg_printf(uVar22);
        }
        uVar20 = (ulong)bStack511;
      }
code_r0x00109002:
      if ((char)uVar20 == '\0') {
        uVar20 = 1;
      }
      else {
        puVar30 = &UNK_001133b5;
        bVar38 = false;
        bVar39 = pbStack1144 == (byte *)0x0;
        if (bVar39) {
code_r0x00109222:
          uVar22 = func_0x00102820(0,puVar30,5);
          dbg_printf(uVar22);
        }
        else {
          lVar15 = 5;
          pbVar17 = pbStack1144;
          pbVar16 = &UNK_00111768;
          do {
            if (lVar15 == 0) break;
            lVar15 = lVar15 + -1;
            bVar38 = *pbVar17 < *pbVar16;
            bVar39 = *pbVar17 == *pbVar16;
            pbVar17 = pbVar17 + (ulong)bVar40 * -2 + 1;
            pbVar16 = pbVar16 + (ulong)bVar40 * -2 + 1;
          } while (bVar39);
          if ((!bVar38 && !bVar39) == bVar38) {
            puVar30 = &UNK_001133cf;
            goto code_r0x00109222;
          }
          uVar22 = func_0x00102820(0,&UNK_00113da8,5);
          dbg_printf(uVar22,pbStack1144);
        }
        lVar15 = *plStack1120;
        uVar21 = plStack1120[1];
        uVar22 = func_0x00102820(0,&UNK_00113dd0,5);
        dbg_printf(uVar22,lVar15,uVar21 & 0xffffffff);
        lVar15 = func_0x001028c0(plStack1120,alStack856);
        if (lVar15 != 0) {
          uVar22 = debug_strfdatetime_constprop_12(alStack856,0,auStack392);
          uVar23 = func_0x00102820(0,&UNK_001133e9,5);
          dbg_printf(uVar23,uVar22);
        }
        lVar15 = localtime_rz(unaff_R15,plStack1120,auStack792);
        if (lVar15 != 0) {
          uVar22 = time_zone_str((ulong)uStack752,auStack424);
          uVar23 = debug_strfdatetime_constprop_12(auStack792,0,auStack392);
          uVar18 = func_0x00102820(0,&UNK_001133fa,5);
          dbg_printf(uVar18,uVar23,uVar22);
        }
      }
    }
    if (bStack511 != 0) {
      puVar30 = &UNK_00113cc0;
code_r0x00109399:
      uVar22 = func_0x00102820(0,puVar30,5);
      dbg_printf(uVar22);
    }
  } while( true );
code_r0x00109d32:
  if (bStack511 != 0) {
    uVar22 = func_0x00102820(0,&UNK_00113362,5);
    dbg_printf(uVar22,&UNK_00113370,0x877);
  }
  goto code_r0x00108ccb;
}

