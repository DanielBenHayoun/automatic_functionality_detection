
/* WARNING: Could not reconcile some variable overlaps */

void compare_files(byte **param_1)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  byte **ppbVar12;
  uint **ppuVar13;
  undefined *puVar14;
  uint *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  uint *puVar19;
  byte *pbVar20;
  uint *puVar21;
  uint *puVar22;
  long in_FS_OFFSET;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  byte *pbStack736;
  undefined *puStack728;
  byte *apbStack720 [5];
  undefined *puStack680;
  undefined *puStack672;
  undefined *puStack664;
  undefined *puStack656;
  undefined *puStack648;
  undefined8 uStack640;
  undefined8 uStack632;
  undefined8 uStack616;
  undefined *puStack608;
  byte **ppbStack600;
  uint *puStack592;
  uint *puStack584;
  uint *puStack576;
  ulong uStack560;
  uint *puStack552;
  undefined8 *puStack544;
  uint **ppuStack536;
  long lStack528;
  long lStack520;
  long lStack512;
  uint uStack500;
  byte **ppbStack496;
  char acStack474 [2];
  uint *puStack472;
  long lStack464;
  undefined8 uStack456;
  undefined8 uStack448;
  uint auStack440 [8];
  uint *apuStack408 [8];
  uint auStack344 [48];
  undefined auStack152 [32];
  undefined auStack120 [32];
  undefined auStack88 [24];
  long lStack64;
  
  bVar25 = 0;
  puVar15 = (uint *)0x0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puVar19 = auStack440;
  puVar22 = auStack344;
  puStack544 = &uStack456;
  ppuStack536 = apuStack408;
  puStack552 = puVar19;
  ppbStack496 = param_1;
  do {
    puVar21 = puVar22 + 0x18;
    uStack560 = uStack560 & 0xffffffff00000000 | (ulong)puVar15;
    ppuVar13 = ppuStack536 + (long)puVar15 * 4;
    do {
      puStack576 = (uint *)&UNK_00101de1;
      initbuffer(puVar22);
      *ppuVar13 = puVar22;
      puVar22 = puVar22 + 6;
      bVar23 = puVar22 < puVar21;
      bVar24 = puVar22 == puVar21;
      ppuVar13 = ppuVar13 + 1;
    } while (!bVar24);
    pbVar20 = *param_1;
    lVar9 = 2;
    *puVar19 = 0;
    puVar19[1] = 0;
    puVar19[2] = 0;
    pbVar16 = pbVar20;
    pbVar17 = &UNK_00106262;
    do {
      if (lVar9 == 0) break;
      lVar9 = lVar9 + -1;
      bVar23 = *pbVar16 < *pbVar17;
      bVar24 = *pbVar16 == *pbVar17;
      pbVar16 = pbVar16 + (ulong)bVar25 * -2 + 1;
      pbVar17 = pbVar17 + (ulong)bVar25 * -2 + 1;
    } while (bVar24);
    puVar21 = stdin;
    if ((!bVar23 && !bVar24) != bVar23) {
      puStack576 = (uint *)&UNK_00102254;
      puVar21 = (uint *)fopen_safer(pbVar20,&UNK_001061ba);
    }
    *(uint **)(puStack544 + (long)puVar15) = puVar21;
    if (puVar21 == (uint *)0x0) goto code_r0x0010230a;
    puStack576 = (uint *)&UNK_00101e4f;
    fadvise(puVar21,2);
    puStack576 = (uint *)&UNK_00101e6f;
    puVar6 = (uint *)readlinebuffer_delim
                               (apuStack408[(long)(int)uStack560 * 4],puVar21,
                                (ulong)(uint)(int)(char)delim);
    (&puStack472)[(long)puVar15] = puVar6;
    if ((*puVar21 & 0x20) != 0) goto code_r0x001022db;
    param_1 = param_1 + 1;
    puVar19 = puVar19 + 3;
    if (puVar15 == (uint *)0x1) break;
    puVar15 = (uint *)0x1;
  } while( true );
  lStack512 = 0;
  lStack528 = 0;
  lStack520 = 0;
  ppuStack536 = &puStack472;
  uStack500 = *puVar21 & 0x20;
code_r0x00101ec8:
  lVar9 = lStack464;
  puVar22 = puStack472;
  if (puStack472 == (uint *)0x0) {
    if (lStack464 == 0) {
      puStack576 = (uint *)&UNK_0010215a;
      iVar5 = rpl_fclose(uStack456);
      if (iVar5 != 0) goto code_r0x0010229c;
      puStack576 = (uint *)&UNK_0010216c;
      iVar5 = rpl_fclose(uStack448);
      if (iVar5 == 0) {
        if (total_option != '\0') {
          puStack472 = (uint *)(ulong)delim;
          puStack576 = (uint *)&UNK_0010219b;
          puStack584 = (uint *)func_0x00101530(0,&UNK_00106065,5);
          puStack592 = col_sep;
          puStack576 = (uint *)&UNK_001021b7;
          param_1 = (byte **)umaxtostr(lStack512,auStack88);
          puVar19 = col_sep;
          puStack576 = (uint *)&UNK_001021d3;
          uStack560 = umaxtostr(lStack528,auStack120);
          puVar21 = col_sep;
          puStack576 = (uint *)&UNK_001021f1;
          uVar7 = umaxtostr(lStack520,auStack152);
          puStack608 = &UNK_00102218;
          ppbStack600 = param_1;
          puStack576 = puStack472;
          func_0x001016d0(1,&UNK_0010606b,uVar7,puVar21,uStack560,puVar19);
        }
        if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      else {
code_r0x00102294:
        uStack500 = 1;
code_r0x0010229c:
        puStack576 = (uint *)&UNK_001022b6;
        uVar7 = quotearg_n_style_colon(0,3,ppbStack496[(int)uStack500]);
        puStack576 = (uint *)&UNK_001022be;
        puVar22 = (uint *)func_0x001014b0();
        puStack576 = (uint *)&UNK_001022d6;
        func_0x001016e0(1,(ulong)*puVar22,&UNK_0010620f,uVar7);
      }
      puStack576 = (uint *)&UNK_001022db;
      func_0x00101560();
      puVar15 = puStack472;
code_r0x001022db:
      puStack576 = (uint *)&UNK_001022ea;
      uVar7 = quotearg_n_style_colon(0,3,*param_1);
      puStack576 = (uint *)&UNK_001022f2;
      puVar22 = (uint *)func_0x001014b0();
      puStack576 = (uint *)&UNK_0010230a;
      func_0x001016e0(1,(ulong)*puVar22,&UNK_0010620f,uVar7);
code_r0x0010230a:
      puStack576 = (uint *)&UNK_00102319;
      uVar8 = quotearg_n_style_colon(0,3,*param_1);
      puStack576 = (uint *)&UNK_00102321;
      puVar22 = (uint *)func_0x001014b0();
      uVar18 = 1;
      puStack576 = (uint *)&UNK_00102339;
      func_0x001016e0(1,(ulong)*puVar22,&UNK_0010620f,uVar8);
      puVar14 = program_name;
      uVar7 = 5;
      uStack616 = *(undefined8 *)(in_FS_OFFSET + 0x28);
      ppbStack600 = (byte **)uVar8;
      puStack592 = puVar15;
      puStack584 = puVar19;
      puStack576 = puVar21;
      if ((int)uVar18 == 0) goto code_r0x0010239d;
      uVar7 = func_0x00101530(0,&UNK_00105aa8,5);
      func_0x00101740(stderr,1,uVar7,puVar14);
      do {
        func_0x00101720(uVar18 & 0xffffffff);
        uVar7 = extraout_RDX;
code_r0x0010239d:
        uVar7 = func_0x00101530(0,&UNK_00105ad0,uVar7);
        func_0x001016d0(1,uVar7,puVar14);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105af8,5);
        func_0x001015f0(uVar8,uVar7);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105b30,5);
        func_0x001015f0(uVar8,uVar7);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105b70,5);
        func_0x001015f0(uVar8,uVar7);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105c30,5);
        func_0x001015f0(uVar8,uVar7);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105cf0,5);
        func_0x001015f0(uVar8,uVar7);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105db0,5);
        func_0x001015f0(uVar8,uVar7);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105de8,5);
        func_0x001015f0(uVar8,uVar7);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105e10,5);
        func_0x001015f0(uVar8,uVar7);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105e50,5);
        func_0x001015f0(uVar8,uVar7);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105e80,5);
        func_0x001015f0(uVar8,uVar7);
        uVar7 = stdout;
        uVar8 = func_0x00101530(0,&UNK_00105eb8,5);
        func_0x001015f0(uVar8,uVar7);
        puVar14 = program_name;
        uVar7 = func_0x00101530(0,&UNK_00105ef8,5);
        func_0x001016d0(1,uVar7,puVar14,puVar14);
        uStack640 = 0;
        uStack632 = 0;
        pbStack736 = &UNK_00106081;
        apbStack720[4] = &UNK_001060c2;
        puStack728 = &UNK_00106083;
        puStack672 = &UNK_001060cc;
        apbStack720[0] = &UNK_001060fb;
        puStack656 = &UNK_001060d6;
        apbStack720[1] = &UNK_00106093;
        apbStack720[2] = &UNK_001060a9;
        apbStack720[3] = &UNK_001060b3;
        puStack680 = &UNK_001060b3;
        puStack664 = &UNK_001060b3;
        puStack648 = &UNK_001060b3;
        ppbVar12 = &pbStack736;
        do {
          ppbVar12 = ppbVar12;
          ppbVar12 = ppbVar12 + 2;
          pbVar20 = *ppbVar12;
          bVar23 = false;
          bVar24 = pbVar20 == (byte *)0x0;
          if (bVar24) break;
          lVar9 = 5;
          pbVar16 = &UNK_0010607c;
          do {
            if (lVar9 == 0) break;
            lVar9 = lVar9 + -1;
            bVar23 = *pbVar16 < *pbVar20;
            bVar24 = *pbVar16 == *pbVar20;
            pbVar16 = pbVar16 + (ulong)bVar25 * -2 + 1;
            pbVar20 = pbVar20 + (ulong)bVar25 * -2 + 1;
          } while (bVar24);
        } while ((!bVar23 && !bVar24) != bVar23);
        pbVar20 = ppbVar12[3];
        if (pbVar20 == (byte *)0x0) {
          uVar7 = func_0x00101530(0,&UNK_001060e0,5);
          func_0x001016d0(1,uVar7,&UNK_001060f7,&UNK_00105f98);
          lVar9 = func_0x001016c0(5,0);
          if ((lVar9 != 0) && (iVar5 = func_0x001014c0(lVar9,&UNK_00106105,3), iVar5 != 0)) {
            pbVar20 = &UNK_0010607c;
            goto code_r0x001027b0;
          }
          pbVar20 = &UNK_0010607c;
          puVar14 = &UNK_0010609d;
          uVar7 = func_0x00101530(0,&UNK_00106109,5);
          func_0x001016d0(1,uVar7,&UNK_00105f98,&UNK_0010607c);
        }
        else {
          uVar7 = func_0x00101530(0,&UNK_001060e0,5);
          func_0x001016d0(1,uVar7,&UNK_001060f7,&UNK_00105f98);
          lVar9 = func_0x001016c0(5,0);
          if ((lVar9 != 0) && (iVar5 = func_0x001014c0(lVar9,&UNK_00106105,3), iVar5 != 0)) {
code_r0x001027b0:
            uVar7 = stdout;
            uVar8 = func_0x00101530(0,&UNK_00105fc0,5);
            func_0x001015f0(uVar8,uVar7);
          }
          uVar7 = func_0x00101530(0,&UNK_00106109,5);
          func_0x001016d0(1,uVar7,&UNK_00105f98,&UNK_0010607c);
          puVar14 = &UNK_001061f9;
          if (pbVar20 == &UNK_0010607c) {
            puVar14 = &UNK_0010609d;
          }
        }
        uVar7 = func_0x00101530(0,&UNK_00106008,5);
        func_0x001016d0(1,uVar7,pbVar20,puVar14);
      } while( true );
    }
    acStack474[0] = '\0';
code_r0x001020c4:
    seen_unpairable = '\x01';
    lStack528 = lStack528 + 1;
    puStack576 = (uint *)&UNK_001020dc;
    writeline_isra_0(lVar9 + 8,lVar9 + 0x10,stdout,2);
    acStack474[1] = '\x01';
  }
  else {
    acStack474[0] = '\0';
    acStack474[1] = '\0';
    if (lStack464 == 0) {
code_r0x001020fe:
      seen_unpairable = '\x01';
      lStack520 = lStack520 + 1;
      puStack576 = (uint *)&UNK_00102116;
      writeline_isra_0(puVar22 + 2,puVar22 + 4,stdout,1);
    }
    else {
      uVar18 = *(ulong *)(lStack464 + 8);
      uVar2 = *(ulong *)(puStack472 + 2);
      if (hard_LC_COLLATE == '\0') {
        uVar11 = uVar18;
        if (uVar2 <= uVar18) {
          uVar11 = uVar2;
        }
        puStack576 = (uint *)&UNK_00101f1e;
        uVar4 = func_0x001015e0(*(undefined8 *)(puStack472 + 4),*(undefined8 *)(lStack464 + 0x10),
                                uVar11 - 1);
        if (uVar4 == 0) {
          if (uVar2 < uVar18) goto code_r0x001020fe;
          uVar4 = (uint)(uVar2 != uVar18);
          goto code_r0x00101f35;
        }
code_r0x00102127:
        if (0 < (int)uVar4) goto code_r0x001020c4;
        goto code_r0x001020fe;
      }
      puStack576 = (uint *)&UNK_0010214b;
      uVar4 = xmemcoll(*(undefined8 *)(puStack472 + 4),uVar2 - 1,*(undefined8 *)(lStack464 + 0x10),
                       uVar18 - 1);
code_r0x00101f35:
      if (uVar4 != 0) goto code_r0x00102127;
      lStack512 = lStack512 + 1;
      puStack576 = (uint *)&UNK_00101f5c;
      writeline_isra_0(lVar9 + 8,lVar9 + 0x10,stdout,3);
      acStack474[1] = '\x01';
    }
    acStack474[0] = '\x01';
  }
  param_1 = (byte **)0x0;
  puVar22 = puStack552;
  cVar3 = acStack474[0];
  while( true ) {
    if (cVar3 != '\0') {
      uVar4 = *puVar22;
      puVar19 = (uint *)(long)(int)uVar4;
      uVar1 = puVar22[1];
      uVar10 = SEXT14((char)delim);
      puVar21 = (uint *)puStack544[(long)param_1];
      puVar22[1] = uVar4;
      puVar22[2] = uVar1;
      uStack560 = (long)param_1 * 4;
      uVar4 = uVar4 + 1 & 3;
      *puVar22 = uVar4;
      puStack576 = (uint *)&UNK_00101fe5;
      puVar15 = (uint *)readlinebuffer_delim
                                  (apuStack408[(long)(int)uVar4 + (long)param_1 * 4],puVar21,
                                   (ulong)uVar10);
      ppuStack536[(long)param_1] = puVar15;
      iVar5 = (int)param_1;
      if (puVar15 == (uint *)0x0) {
        puVar15 = apuStack408[uStack560 + (long)(int)uVar1];
        if (((*(long *)(puVar15 + 4) != 0) && (check_input_order != 2)) &&
           ((check_input_order == 1 || (seen_unpairable != '\0')))) {
          puStack576 = (uint *)&UNK_001020a3;
          check_order_isra_1_part_2
                    (puVar15 + 2,puVar15 + 4,apuStack408[(long)(puVar19 + iVar5)] + 2,
                     apuStack408[(long)(puVar19 + iVar5)] + 4,(ulong)(iVar5 + 1));
        }
      }
      else {
        if ((check_input_order != 2) && ((check_input_order == 1 || (seen_unpairable != '\0')))) {
          puStack576 = (uint *)&UNK_00102039;
          check_order_isra_1_part_2
                    (apuStack408[(long)(puVar19 + iVar5)] + 2,
                     apuStack408[(long)(puVar19 + iVar5)] + 4,puVar15 + 2,puVar15 + 4,
                     (ulong)(iVar5 + 1));
        }
      }
      if ((*(byte *)puVar21 & 0x20) != 0) {
        puStack576 = (uint *)&UNK_00102274;
        uVar7 = quotearg_n_style_colon(0,3,ppbStack496[iVar5]);
        puStack576 = (uint *)&UNK_0010227c;
        puVar15 = (uint *)func_0x001014b0();
        puStack576 = (uint *)&UNK_00102294;
        func_0x001016e0(1,(ulong)*puVar15,&UNK_0010620f,uVar7);
        puStack472 = puVar22;
        goto code_r0x00102294;
      }
      acStack474[(long)param_1] = '\0';
    }
    puVar22 = puVar22 + 3;
    if (param_1 == (byte **)0x1) break;
    param_1 = (byte **)0x1;
    cVar3 = acStack474[1];
  }
  goto code_r0x00101ec8;
}

