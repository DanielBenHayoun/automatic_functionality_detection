
/* WARNING: Could not reconcile some variable overlaps */

undefined1 * time_string_isra_1(int param_1)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  char *pcVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  short *psVar10;
  undefined8 uVar11;
  ulong uVar12;
  char cVar13;
  byte bVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 extraout_RDX;
  byte **ppbVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  undefined *puVar23;
  undefined6 *puVar24;
  short *psVar25;
  short *psVar26;
  byte *pbVar27;
  char cVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long in_FS_OFFSET;
  bool bVar32;
  bool bVar33;
  byte bVar34;
  byte *pbStack928;
  undefined *puStack920;
  byte *apbStack912 [5];
  undefined *puStack872;
  undefined *puStack864;
  undefined *puStack856;
  undefined *puStack848;
  undefined *puStack840;
  undefined8 uStack832;
  undefined8 uStack824;
  undefined *puStack816;
  undefined *puStack808;
  undefined *puStack800;
  short *psStack792;
  undefined *puStack784;
  short *psStack776;
  short *psStack768;
  long lStack760;
  undefined *puStack752;
  ulong uStack744;
  undefined8 uStack736;
  short *psStack720;
  short *psStack712;
  undefined auStack700 [12];
  long lStack688;
  undefined1 *puStack672;
  undefined *puStack664;
  undefined4 *puStack656;
  short *psStack648;
  undefined4 *puStack640;
  undefined1 *puStack632;
  uint uStack612;
  undefined *puStack608;
  undefined *puStack600;
  short *psStack592;
  long lStack584;
  undefined auStack576 [24];
  uint uStack552;
  undefined4 *puStack504;
  undefined4 uStack419;
  undefined auStack412 [12];
  undefined4 uStack400;
  undefined2 uStack396;
  undefined4 uStack352;
  long lStack88;
  undefined1 *puStack24;
  long lStack16;
  
  bVar34 = 0;
  puStack24 = (undefined1 *)(long)param_1;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = func_0x00101820(&puStack24);
  if (lVar4 == 0) {
    puVar21 = buf_7706;
    puStack672 = puStack24;
    puVar5 = (undefined1 *)imaxtostr();
  }
  else {
    puStack672 = buf_7706;
    puVar21 = (undefined1 *)0x21;
    func_0x00101ad0(buf_7706,0x21,time_format,lVar4);
    puVar5 = buf_7706;
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
  func_0x00101920();
  puVar20 = auStack412;
  lStack88 = *(long *)(in_FS_OFFSET + 0x28);
  puStack632 = &UNK_0010240f;
  func_0x00101bb0(puVar20,1,0xc,&UNK_00108486,(long)*(int *)(puStack672 + 4));
  cVar28 = puStack672[8];
  if (cVar28 != '/') {
    uStack396 = 0x2f;
    pcVar6 = puStack672 + 8;
    uStack400 = 0x7665642f;
    puVar15 = (undefined4 *)(&uStack396 + 1);
    goto joined_r0x00102701;
  }
  pcVar6 = puStack672 + 8;
  puVar15 = &uStack400;
  do {
    pcVar6 = pcVar6 + 1;
    puVar16 = (undefined4 *)((long)puVar15 + 1);
    *(char *)puVar15 = cVar28;
    puVar15 = puVar16;
    if (puStack672 + 0x28 <= pcVar6) break;
    cVar28 = *pcVar6;
joined_r0x00102701:
  } while (cVar28 != '\0');
  *(char *)puVar15 = '\0';
  puStack632 = &UNK_00102461;
  iVar3 = func_0x00101a40(1,&uStack400,auStack576);
  if (iVar3 == 0) {
    uVar29 = (-(uint)((uStack552 & 0x10) == 0) & 2) + 0x2b;
    psVar25 = (short *)(ulong)uVar29;
    cVar28 = (char)uVar29;
    if (puStack504 == (undefined4 *)0x0) {
      uStack612 = SEXT14(cVar28);
      goto code_r0x00102494;
    }
    if (now_7699 == -0x8000000000000000) {
      puStack632 = &UNK_0010284c;
      func_0x00101a20(&now_7699);
    }
    if ((((long)puStack504 <= (long)puVar21) || ((long)puStack504 < now_7699 + -0x1517f)) ||
       (now_7699 < (long)puStack504)) {
      puStack632 = &UNK_00102663;
      puVar24 = (undefined6 *)func_0x001018f0(0,&UNK_001084bc,5);
code_r0x00102666:
      puStack632 = &UNK_0010268f;
      func_0x00101bb0(&uStack419,1,7,&UNK_001084c2,6,puVar24);
      cVar13 = puStack672[0x4c];
      uStack612 = SEXT14(cVar28);
      goto joined_r0x0010269d;
    }
    iVar3 = (int)now_7699 - (int)puStack504;
    if (iVar3 < 0x3c) {
      puVar24 = (undefined6 *)&UNK_00108480;
      goto code_r0x00102666;
    }
    if (iVar3 < 0x15180) {
      puStack632 = &UNK_001028eb;
      func_0x00101bb0(&idle_hhmm_7701,1,6,&UNK_001084b2,(ulong)(uint)(iVar3 / 0xe10),
                      (ulong)((uint)(iVar3 % 0xe10) / 0x3c));
      puVar24 = &idle_hhmm_7701;
      goto code_r0x00102666;
    }
  }
  else {
    uStack612 = 0x3f;
code_r0x00102494:
    cVar13 = puStack672[0x4c];
    uStack419 = 0x3f2020;
joined_r0x0010269d:
    if (cVar13 == '\0') {
      if (hostlen_7743 == (undefined *)0x0) {
        hostlen_7743 = (undefined *)0x1;
        puStack632 = &UNK_0010275b;
        func_0x00101810(hoststr_7742);
        puStack632 = &UNK_00102765;
        hoststr_7742 = (short *)xmalloc(1);
      }
      puVar21 = (undefined1 *)hoststr_7742;
      *(undefined *)hoststr_7742 = 0;
    }
    else {
      pcVar6 = puStack672 + 0x4c;
      puVar7 = &uStack352;
      do {
        pcVar6 = pcVar6 + 1;
        puVar8 = (uint *)((long)puVar7 + 1);
        *(char *)puVar7 = cVar13;
        if (puStack672 + 0x14c <= pcVar6) break;
        cVar13 = *pcVar6;
        puVar7 = puVar8;
      } while (cVar13 != '\0');
      *(char *)puVar8 = '\0';
      puStack632 = &UNK_001024f7;
      puVar23 = (undefined *)func_0x00101950(&uStack352);
      puVar7 = &uStack352;
      if (puVar23 == (undefined *)0x0) {
        if (((char)uStack352 == '\0') || (do_lookup == '\0')) {
          do {
            puVar8 = puVar7 + 1;
            uVar29 = *puVar7 + 0xfefefeff & ~*puVar7 & 0x80808080;
            puVar7 = puVar8;
          } while (uVar29 == 0);
        }
        else {
          puStack632 = &UNK_001028ff;
          puVar7 = (uint *)canon_host(&uStack352);
          puVar9 = &uStack352;
          if (puVar7 != (uint *)0x0) {
            puStack632 = &UNK_0010290f;
            lVar4 = func_0x00101910(puVar7);
            goto code_r0x001027dd;
          }
          do {
            puVar8 = puVar9 + 1;
            uVar29 = *puVar9 + 0xfefefeff & ~*puVar9 & 0x80808080;
            puVar9 = puVar8;
          } while (uVar29 == 0);
        }
        bVar32 = (uVar29 & 0x8080) == 0;
        bVar14 = (byte)uVar29;
        if (bVar32) {
          bVar14 = (byte)(uVar29 >> 0x10);
        }
        if (bVar32) {
          puVar8 = (uint *)((long)puVar8 + 2);
        }
        lVar4 = (long)puVar8 + ((-3 - (ulong)CARRY1(bVar14,bVar14)) - (long)&uStack352);
        puVar7 = &uStack352;
code_r0x001027dd:
        puVar23 = (undefined *)(lVar4 + 3);
        if (hostlen_7743 < puVar23) {
          puStack632 = &UNK_00102865;
          hostlen_7743 = puVar23;
          puStack608 = puVar23;
          func_0x00101810(hoststr_7742);
          puStack632 = &UNK_00102872;
          hoststr_7742 = (short *)xmalloc(puStack608);
        }
        puStack632 = &UNK_00102806;
        func_0x00101bb0(hoststr_7742,1,0xffffffffffffffff,&UNK_001084cf,puVar7);
      }
      else {
        *puVar23 = 0;
        puStack608 = puVar23 + 1;
        if (((char)uStack352 != '\0') && (do_lookup != '\0')) {
          puStack632 = &UNK_00102735;
          puVar7 = (uint *)canon_host(&uStack352);
          if (puVar7 == (uint *)0x0) {
            puVar7 = &uStack352;
          }
        }
        puStack632 = &UNK_00102525;
        lVar4 = func_0x00101910(puVar7);
        lStack584 = lVar4;
        if (puStack608 == (undefined *)0x0) goto code_r0x001027dd;
        psStack592 = hoststr_7742;
        puStack600 = hostlen_7743;
        puStack632 = &UNK_00102555;
        lVar4 = func_0x00101910();
        puVar23 = (undefined *)(lStack584 + lVar4 + 4);
        psVar25 = psStack592;
        if (puStack600 < puVar23) {
          puStack632 = &UNK_00102824;
          hostlen_7743 = puVar23;
          puStack600 = puVar23;
          func_0x00101810(psStack592);
          puStack632 = &UNK_00102831;
          psVar25 = (short *)xmalloc(puStack600);
          hoststr_7742 = psVar25;
        }
        puStack632 = &UNK_00102597;
        func_0x00101bb0(psVar25,1,0xffffffffffffffff,&UNK_001084c7,puVar7,puStack608);
      }
      if (puVar7 != &uStack352) {
        puStack632 = &UNK_001025a4;
        func_0x00101810(puVar7);
      }
      puVar21 = (undefined1 *)hoststr_7742;
      if (hoststr_7742 == (short *)0x0) {
        puVar21 = &UNK_00109241;
      }
    }
    puStack504 = &uStack419;
    psVar25 = (short *)&UNK_00109241;
    puStack632 = &UNK_001025c4;
    time_string_isra_1((ulong)*(uint *)(puStack672 + 0x154));
    puStack632 = &UNK_00109241;
    puStack664 = &UNK_001025e8;
    puStack656 = puStack504;
    psStack648 = (short *)puVar20;
    puStack640 = (undefined4 *)puVar21;
    print_line(0x20,puStack672 + 0x2c,(ulong)uStack612,0x20,puStack672 + 8);
    if (lStack88 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (undefined1 *)0x0;
    }
    puStack632 = &UNK_00102953;
    func_0x00101920();
  }
  puVar23 = &UNK_00108494;
  puStack632 = &UNK_00102972;
  func_0x00101990(&UNK_00108494,&UNK_0010848a,0xcd,__PRETTY_FUNCTION___7702);
  lStack688 = *(long *)(in_FS_OFFSET + 0x28);
  psStack768 = (short *)&UNK_001029b2;
  puStack664 = puVar20;
  puStack656 = (undefined4 *)puVar21;
  psStack648 = psVar25;
  puStack640 = puStack504;
  puStack632 = puStack672 + 8;
  iVar3 = read_utmp();
  psVar26 = psStack712;
  if (iVar3 != 0) {
    psStack768 = (short *)&UNK_00103125;
    puVar23 = (undefined *)quotearg_n_style_colon(0,3,puVar23);
    psStack768 = (short *)&UNK_0010312d;
    puVar7 = (uint *)func_0x00101840();
    psStack712 = (short *)0x1;
    psStack768 = (short *)&UNK_00103145;
    func_0x00101af0(1,(ulong)*puVar7,&UNK_00108cc9,puVar23);
    goto code_r0x00103145;
  }
  if (short_list == '\0') {
    if (include_heading != '\0') {
      psStack768 = (short *)&UNK_00102d18;
      uStack744 = func_0x001018f0(0,&UNK_001084e7,5);
      psStack768 = (short *)&UNK_00102d30;
      puVar21 = (undefined1 *)func_0x001018f0(0,&UNK_001084ec,5);
      psStack768 = (short *)&UNK_00102d46;
      puVar23 = (undefined *)func_0x001018f0(0,&UNK_001084f4,5);
      psStack768 = (short *)&UNK_00102d5c;
      psStack792 = (short *)func_0x001018f0(0,&UNK_001084f8,5);
      psStack768 = (short *)&UNK_00102d72;
      puStack752 = (undefined *)func_0x001018f0(0,&UNK_001084fd,5);
      psStack768 = (short *)&UNK_00102d8a;
      lStack760 = func_0x001018f0(0,&UNK_00108502,5);
      psStack768 = (short *)&UNK_00102da1;
      uVar17 = func_0x001018f0(0,&UNK_00108507,5);
      psStack768 = (short *)uStack744;
      puStack800 = &UNK_00102dc9;
      puStack784 = puVar23;
      psStack776 = (short *)puVar21;
      print_line(0xffffffff,uVar17,0x20,0xffffffff,lStack760);
    }
    if (my_line_only != '\0') {
      psStack768 = (short *)&UNK_00102cd4;
      puVar20 = (undefined *)func_0x00101a90(0);
      if (puVar20 == (undefined *)0x0) goto code_r0x00102b01;
      psStack768 = (short *)&UNK_00102cf4;
      iVar3 = func_0x00101860(puVar20,&UNK_0010850c,5);
      if (iVar3 == 0) {
        puVar20 = puVar20 + 5;
      }
    }
    puVar21 = (undefined1 *)((long)psStack720 + -1);
    lStack760 = -0x8000000000000000;
    if (psStack720 != (short *)0x0) {
      puStack752 = auStack700;
      puVar23 = &UNK_00109241;
      psVar25 = (short *)puVar21;
      do {
        if (my_line_only == '\0') {
code_r0x00102a43:
          sVar1 = *psVar26;
          if (((need_users == '\0') || (*(char *)(psVar26 + 0x16) == '\0')) || (sVar1 != 7)) {
            if ((need_runlevel == '\0') || (sVar1 != 1)) {
              if ((need_boottime == '\0') || (sVar1 != 2)) {
                if ((need_clockchange == '\0') || (sVar1 != 3)) {
                  if ((need_initspawn == '\0') || (sVar1 != 5)) {
                    if ((need_login == '\0') || (sVar1 != 6)) {
                      if ((need_deadprocs != '\0') && (sVar1 == 8)) {
                        psStack768 = (short *)&UNK_00102f2b;
                        psStack720 = (short *)make_id_equals_comment(psVar26);
                        psStack768 = (short *)&UNK_00102f50;
                        func_0x00101bb0(puStack752,1,0xc,&UNK_00108486);
                        if (exitstr_7761 == (undefined *)0x0) {
                          psStack768 = (short *)&UNK_001030b5;
                          pcVar6 = (char *)func_0x001018f0(0,&UNK_0010854c,5);
                          uVar12 = 0xffffffffffffffff;
                          uStack736 = 0xffffffffffffffff;
                          do {
                            if (uVar12 == 0) break;
                            uVar12 = uVar12 - 1;
                            cVar28 = *pcVar6;
                            pcVar6 = pcVar6 + (ulong)bVar34 * -2 + 1;
                          } while (cVar28 != '\0');
                          uStack744 = ~uVar12 - 1;
                          psStack768 = (short *)&UNK_001030e8;
                          pcVar6 = (char *)func_0x001018f0(0,&UNK_00108552,5);
                          uVar12 = uStack736;
                          do {
                            if (uVar12 == 0) break;
                            uVar12 = uVar12 - 1;
                            cVar28 = *pcVar6;
                            pcVar6 = pcVar6 + (ulong)bVar34 * -2 + 1;
                          } while (cVar28 != '\0');
                          psStack768 = (short *)&UNK_0010310a;
                          exitstr_7761 = (undefined *)xmalloc(uStack744 + 0xd + ~uVar12);
                        }
                        uStack736 = CONCAT44(uStack736._4_4_,(int)psVar26[0xa7]);
                        psStack768 = (short *)&UNK_00102f7f;
                        psVar10 = (short *)func_0x001018f0(0,&UNK_00108552,5);
                        uStack744 = uStack744 & 0xffffffff00000000 | (ulong)(uint)(int)psVar26[0xa6]
                        ;
                        psStack768 = (short *)&UNK_00102fa2;
                        uVar17 = func_0x001018f0(0,&UNK_0010854c,5);
                        psStack768 = (short *)(uStack736 & 0xffffffff);
                        puStack784 = &UNK_00102fd1;
                        psStack776 = psVar10;
                        func_0x00101bb0(exitstr_7761,1,0xffffffffffffffff,&UNK_00108558,uVar17,
                                        uStack744 & 0xffffffff);
                        puVar19 = exitstr_7761;
                        puStack784 = &UNK_00102fe5;
                        time_string_isra_1((ulong)*(uint *)(psVar26 + 0xaa));
                        puStack784 = puVar19;
                        puStack800 = puStack752;
                        puStack808 = &UNK_00109241;
                        puStack816 = &UNK_0010300f;
                        psStack792 = psStack720;
                        print_line(0xffffffff,&UNK_00109241,0x20,0x20,psVar26 + 4);
                        psStack768 = (short *)&UNK_0010301b;
                        func_0x00101810();
                      }
                      goto code_r0x00102ad8;
                    }
                    psStack768 = (short *)&UNK_00102eb9;
                    psStack720 = (short *)make_id_equals_comment(psVar26);
                    psStack768 = (short *)&UNK_00102ede;
                    func_0x00101bb0(puStack752,1,0xc,&UNK_00108486,(long)*(int *)(psVar26 + 2));
                    psStack768 = (short *)&UNK_00102eeb;
                    time_string_isra_1((ulong)*(uint *)(psVar26 + 0xaa));
                    psStack768 = (short *)&UNK_00102f01;
                    puVar19 = (undefined *)func_0x001018f0(0,&UNK_00108546,5);
                    puStack784 = puStack752;
                  }
                  else {
                    psStack768 = (short *)&UNK_00102e44;
                    psStack720 = (short *)make_id_equals_comment(psVar26);
                    puVar2 = puStack752;
                    psStack768 = (short *)&UNK_00102e6c;
                    func_0x00101bb0(puStack752,1,0xc,&UNK_00108486,(long)*(int *)(psVar26 + 2));
                    psStack768 = (short *)&UNK_00102e79;
                    time_string_isra_1((ulong)*(uint *)(psVar26 + 0xaa));
                    puVar19 = &UNK_00109241;
                    puStack784 = puVar2;
                  }
                  psStack768 = (short *)&UNK_00109241;
                  psStack792 = (short *)&UNK_00109241;
                  puStack800 = &UNK_00102ea0;
                  psStack776 = psStack720;
                  print_line(0xffffffff,puVar19,0x20,0x20,psVar26 + 4);
                  psStack768 = (short *)&UNK_00102eac;
                  func_0x00101810();
                  goto code_r0x00102ad8;
                }
                psStack768 = (short *)&UNK_00102e2b;
                psStack720 = (short *)time_string_isra_1();
                puVar19 = &UNK_00108539;
              }
              else {
                psStack768 = (short *)&UNK_00102ddf;
                psStack720 = (short *)time_string_isra_1();
                puVar19 = &UNK_0010852d;
              }
              psStack768 = (short *)&UNK_00102df5;
              uVar17 = func_0x001018f0(0,puVar19,5);
              psStack768 = (short *)&UNK_00109241;
              psStack776 = (short *)&UNK_00109241;
              puStack784 = &UNK_00109241;
              psStack792 = (short *)&UNK_00109241;
              puStack800 = &UNK_00102e15;
              print_line(0xffffffff,&UNK_00109241,0x20,0xffffffff,uVar17);
            }
            else {
              iVar3 = *(int *)(psVar26 + 2);
              uVar29 = iVar3 / 0x100;
              if (runlevline_7780 == 0) {
                psStack768 = (short *)&UNK_00103044;
                pcVar6 = (char *)func_0x001018f0(0,&UNK_00108512,5);
                uVar12 = 0xffffffffffffffff;
                do {
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  cVar28 = *pcVar6;
                  pcVar6 = pcVar6 + (ulong)bVar34 * -2 + 1;
                } while (cVar28 != '\0');
                psStack768 = (short *)&UNK_0010305e;
                runlevline_7780 = xmalloc(~uVar12 + 2);
              }
              psStack768 = (short *)&UNK_00102c02;
              uVar17 = func_0x001018f0(0,&UNK_00108512,5);
              psStack768 = (short *)&UNK_00102c27;
              func_0x00101bb0(runlevline_7780,1,0xffffffffffffffff,&UNK_0010851c,uVar17,
                              (ulong)(uint)(iVar3 % 0x100) & 0xff);
              if (comment_7781 == (short *)0x0) {
                psStack768 = (short *)&UNK_0010307d;
                pcVar6 = (char *)func_0x001018f0(0,&UNK_00108522,5);
                lVar4 = -1;
                do {
                  if (lVar4 == 0) break;
                  lVar4 = lVar4 + -1;
                  cVar28 = *pcVar6;
                  pcVar6 = pcVar6 + (ulong)bVar34 * -2 + 1;
                } while (cVar28 != '\0');
                psStack768 = (short *)&UNK_00103093;
                comment_7781 = (short *)xmalloc(-lVar4);
              }
              uVar31 = uVar29 & 0xff;
              uVar30 = 0x53;
              if ((char)uVar29 != 'N') {
                uVar30 = uVar31;
              }
              psStack768 = (short *)&UNK_00102c5e;
              uVar17 = func_0x001018f0(0,&UNK_00108522,5);
              psStack768 = (short *)&UNK_00102c89;
              func_0x00101bb0(comment_7781,1,0xffffffffffffffff,&UNK_00108528,uVar17,(ulong)uVar30);
              psStack720 = (short *)&UNK_00109241;
              if (uVar31 - 0x20 < 0x5f) {
                psStack720 = comment_7781;
              }
              psStack768 = (short *)&UNK_00102ca3;
              time_string_isra_1();
              psStack768 = (short *)&UNK_00109241;
              puStack784 = &UNK_00109241;
              psStack792 = (short *)&UNK_00109241;
              puStack800 = &UNK_00102cc4;
              psStack776 = psStack720;
              print_line(0xffffffff,&UNK_00109241,0x20,0xffffffff,runlevline_7780);
            }
          }
          else {
            psStack768 = (short *)&UNK_0010302c;
            print_user(psVar26,lStack760);
          }
        }
        else {
          psStack768 = (short *)&UNK_00102a3b;
          iVar3 = func_0x00101860(puVar20,psVar26 + 4,0x20);
          if (iVar3 == 0) goto code_r0x00102a43;
        }
code_r0x00102ad8:
        if (*psVar26 == 2) {
          lStack760 = (long)*(int *)(psVar26 + 0xaa);
        }
        psVar25 = (short *)((long)psVar25 + -1);
        puVar21 = (undefined1 *)(psVar26 + 0xc0);
        psVar26 = (short *)puVar21;
      } while (psVar25 != (short *)0xffffffffffffffff);
    }
  }
  else {
    puVar20 = (undefined *)0x0;
    puVar23 = (undefined *)((long)psStack720 + -1);
    if (psStack720 != (short *)0x0) {
      puVar21 = &UNK_00109241;
      psVar25 = psStack712;
      do {
        if ((*(char *)(psVar25 + 0x16) != '\0') && (*psVar25 == 7)) {
          puVar20 = puVar20 + 1;
          psStack768 = (short *)&UNK_00102ba5;
          psStack720 = (short *)extract_trimmed_name(psVar25);
          psStack768 = (short *)&UNK_00102bc1;
          func_0x00101ac0(1,&UNK_001084d4,puVar21,psStack720);
          psStack768 = (short *)&UNK_00102bcc;
          func_0x00101810(psStack720);
          puVar21 = &UNK_00108484;
        }
        puVar23 = puVar23 + -1;
        psVar25 = psVar25 + 0xc0;
      } while (puVar23 != (undefined *)0xffffffffffffffff);
    }
    psStack768 = (short *)&UNK_00102b82;
    uVar17 = func_0x001018f0(0,&UNK_001084d9,5);
    psStack768 = (short *)&UNK_00102b94;
    func_0x00101ac0(1,uVar17,puVar20);
  }
code_r0x00102b01:
  psStack768 = (short *)&UNK_00102b0b;
  func_0x00101810();
  psVar25 = psStack720;
  if (lStack688 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined1 *)0x0;
  }
code_r0x00103145:
  psStack768 = (short *)&UNK_0010314a;
  func_0x00101920();
  puVar19 = program_name;
  uVar17 = 5;
  puStack808 = *(undefined **)(in_FS_OFFSET + 0x28);
  psStack792 = (short *)puVar23;
  puStack784 = puVar20;
  psStack776 = (short *)puVar21;
  psStack768 = psVar25;
  if ((int)psStack712 == 0) goto code_r0x001031ad;
  uVar17 = func_0x001018f0(0,&UNK_00108738,5);
  func_0x00101b40(stderr,1,uVar17,puVar19);
  do {
    func_0x00101b20((ulong)psStack712 & 0xffffffff);
    uVar17 = extraout_RDX;
code_r0x001031ad:
    uVar17 = func_0x001018f0(0,&UNK_00108760,uVar17);
    func_0x00101ac0(1,uVar17,puVar19);
    uVar17 = stdout;
    uVar11 = func_0x001018f0(0,&UNK_00108790,5);
    func_0x001019d0(uVar11,uVar17);
    uVar17 = stdout;
    uVar11 = func_0x001018f0(0,&UNK_001087d0,5);
    func_0x001019d0(uVar11,uVar17);
    uVar17 = stdout;
    uVar11 = func_0x001018f0(0,&UNK_00108898,5);
    func_0x001019d0(uVar11,uVar17);
    uVar17 = stdout;
    uVar11 = func_0x001018f0(0,&UNK_001088d0,5);
    func_0x001019d0(uVar11,uVar17);
    uVar17 = stdout;
    uVar11 = func_0x001018f0(0,&UNK_00108990,5);
    func_0x001019d0(uVar11,uVar17);
    uVar17 = stdout;
    uVar11 = func_0x001018f0(0,&UNK_00108a70,5);
    func_0x001019d0(uVar11,uVar17);
    uVar17 = stdout;
    uVar11 = func_0x001018f0(0,&UNK_00108b18,5);
    func_0x001019d0(uVar11,uVar17);
    uVar17 = stdout;
    uVar11 = func_0x001018f0(0,&UNK_00108b48,5);
    func_0x001019d0(uVar11,uVar17);
    uVar17 = func_0x001018f0(0,&UNK_00108b80,5);
    func_0x00101ac0(1,uVar17,&UNK_00108574,&UNK_00108566);
    uStack832 = 0;
    uStack824 = 0;
    pbStack928 = &UNK_00108582;
    apbStack912[4] = &UNK_001085c3;
    puStack920 = &UNK_00108584;
    puStack864 = &UNK_001085cd;
    apbStack912[0] = &UNK_001085fc;
    puStack848 = &UNK_001085d7;
    apbStack912[1] = &UNK_00108594;
    apbStack912[2] = &UNK_001085aa;
    apbStack912[3] = &UNK_001085b4;
    puStack872 = &UNK_001085b4;
    puStack856 = &UNK_001085b4;
    puStack840 = &UNK_001085b4;
    ppbVar18 = &pbStack928;
    do {
      ppbVar18 = ppbVar18;
      ppbVar18 = ppbVar18 + 2;
      pbVar27 = *ppbVar18;
      bVar32 = false;
      bVar33 = pbVar27 == (byte *)0x0;
      if (bVar33) break;
      lVar4 = 4;
      pbVar22 = &UNK_00108562;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar32 = *pbVar22 < *pbVar27;
        bVar33 = *pbVar22 == *pbVar27;
        pbVar22 = pbVar22 + (ulong)bVar34 * -2 + 1;
        pbVar27 = pbVar27 + (ulong)bVar34 * -2 + 1;
      } while (bVar33);
    } while ((!bVar32 && !bVar33) != bVar32);
    pbVar27 = ppbVar18[3];
    if (pbVar27 == (byte *)0x0) {
      uVar17 = func_0x001018f0(0,&UNK_001085e1,5);
      func_0x00101ac0(1,uVar17,&UNK_001085f8,&UNK_00108c00);
      lVar4 = func_0x00101ab0(5,0);
      if ((lVar4 != 0) && (iVar3 = func_0x00101860(lVar4,&UNK_00108606,3), iVar3 != 0)) {
        pbVar27 = &UNK_00108562;
        goto code_r0x00103550;
      }
      pbVar27 = &UNK_00108562;
      puVar19 = &UNK_0010859e;
      uVar17 = func_0x001018f0(0,&UNK_0010860a,5);
      func_0x00101ac0(1,uVar17,&UNK_00108c00,&UNK_00108562);
    }
    else {
      uVar17 = func_0x001018f0(0,&UNK_001085e1,5);
      func_0x00101ac0(1,uVar17,&UNK_001085f8,&UNK_00108c00);
      lVar4 = func_0x00101ab0(5,0);
      if ((lVar4 != 0) && (iVar3 = func_0x00101860(lVar4,&UNK_00108606,3), iVar3 != 0)) {
code_r0x00103550:
        uVar17 = stdout;
        uVar11 = func_0x001018f0(0,&UNK_00108c28,5);
        func_0x001019d0(uVar11,uVar17);
      }
      uVar17 = func_0x001018f0(0,&UNK_0010860a,5);
      func_0x00101ac0(1,uVar17,&UNK_00108c00,&UNK_00108562);
      puVar19 = &UNK_00109241;
      if (pbVar27 == &UNK_00108562) {
        puVar19 = &UNK_0010859e;
      }
    }
    uVar17 = func_0x001018f0(0,&UNK_00108c70,5);
    func_0x00101ac0(1,uVar17,pbVar27,puVar19);
  } while( true );
}

