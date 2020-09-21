
/* WARNING: Could not reconcile some variable overlaps */

void print_user(long param_1,short *param_2)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  short *psVar9;
  undefined8 uVar10;
  ulong uVar11;
  char cVar12;
  byte bVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined8 extraout_RDX;
  byte **ppbVar17;
  undefined *puVar18;
  undefined *puVar19;
  byte *pbVar20;
  undefined *puVar21;
  undefined6 *puVar22;
  short *psVar23;
  short *psVar24;
  byte *pbVar25;
  char cVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  bool bVar30;
  bool bVar31;
  byte bVar32;
  byte *pbStack904;
  undefined *puStack896;
  byte *apbStack888 [5];
  undefined *puStack848;
  undefined *puStack840;
  undefined *puStack832;
  undefined *puStack824;
  undefined *puStack816;
  undefined8 uStack808;
  undefined8 uStack800;
  undefined *puStack792;
  undefined *puStack784;
  undefined *puStack776;
  short *psStack768;
  undefined *puStack760;
  short *psStack752;
  short *psStack744;
  long lStack736;
  undefined *puStack728;
  ulong uStack720;
  undefined8 uStack712;
  short *psStack696;
  short *psStack688;
  undefined auStack676 [12];
  long lStack664;
  long lStack648;
  undefined *puStack640;
  undefined4 *puStack632;
  short *psStack624;
  undefined4 *puStack616;
  undefined *puStack608;
  uint uStack588;
  undefined *puStack584;
  undefined *puStack576;
  short *psStack568;
  long lStack560;
  undefined auStack552 [24];
  uint uStack528;
  undefined4 *puStack480;
  undefined4 uStack395;
  undefined auStack388 [12];
  undefined4 uStack376;
  undefined2 uStack372;
  undefined4 uStack328;
  long lStack64;
  
  bVar32 = 0;
  puVar19 = auStack388;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puStack608 = &UNK_0010240f;
  func_0x00101bb0(puVar19,1,0xc,&UNK_00108486,(long)*(int *)(param_1 + 4));
  cVar26 = *(char *)(param_1 + 8);
  if (cVar26 != '/') {
    uStack372 = 0x2f;
    pcVar4 = (char *)(param_1 + 8);
    uStack376 = 0x7665642f;
    puVar14 = (undefined4 *)(&uStack372 + 1);
    goto joined_r0x00102701;
  }
  pcVar4 = (char *)(param_1 + 8);
  puVar14 = &uStack376;
  do {
    pcVar4 = pcVar4 + 1;
    puVar15 = (undefined4 *)((long)puVar14 + 1);
    *(char *)puVar14 = cVar26;
    puVar14 = puVar15;
    if ((char *)(param_1 + 0x28) <= pcVar4) break;
    cVar26 = *pcVar4;
joined_r0x00102701:
  } while (cVar26 != '\0');
  *(char *)puVar14 = '\0';
  puStack608 = &UNK_00102461;
  iVar3 = func_0x00101a40(1,&uStack376,auStack552);
  if (iVar3 == 0) {
    uVar27 = (-(uint)((uStack528 & 0x10) == 0) & 2) + 0x2b;
    psVar23 = (short *)(ulong)uVar27;
    cVar26 = (char)uVar27;
    if (puStack480 == (undefined4 *)0x0) {
      uStack588 = SEXT14(cVar26);
      goto code_r0x00102494;
    }
    if (now_7699 == -0x8000000000000000) {
      puStack608 = &UNK_0010284c;
      func_0x00101a20(&now_7699);
    }
    if ((((long)puStack480 <= (long)param_2) || ((long)puStack480 < now_7699 + -0x1517f)) ||
       (now_7699 < (long)puStack480)) {
      puStack608 = &UNK_00102663;
      puVar22 = (undefined6 *)func_0x001018f0(0,&UNK_001084bc,5);
code_r0x00102666:
      puStack608 = &UNK_0010268f;
      func_0x00101bb0(&uStack395,1,7,&UNK_001084c2,6,puVar22);
      cVar12 = *(char *)(param_1 + 0x4c);
      uStack588 = SEXT14(cVar26);
      goto joined_r0x0010269d;
    }
    iVar3 = (int)now_7699 - (int)puStack480;
    if (iVar3 < 0x3c) {
      puVar22 = (undefined6 *)&UNK_00108480;
      goto code_r0x00102666;
    }
    if (iVar3 < 0x15180) {
      puStack608 = &UNK_001028eb;
      func_0x00101bb0(&idle_hhmm_7701,1,6,&UNK_001084b2,(ulong)(uint)(iVar3 / 0xe10),
                      (ulong)((uint)(iVar3 % 0xe10) / 0x3c));
      puVar22 = &idle_hhmm_7701;
      goto code_r0x00102666;
    }
  }
  else {
    uStack588 = 0x3f;
code_r0x00102494:
    cVar12 = *(char *)(param_1 + 0x4c);
    uStack395 = 0x3f2020;
joined_r0x0010269d:
    if (cVar12 == '\0') {
      if (hostlen_7743 == (undefined *)0x0) {
        hostlen_7743 = (undefined *)0x1;
        puStack608 = &UNK_0010275b;
        func_0x00101810(hoststr_7742);
        puStack608 = &UNK_00102765;
        hoststr_7742 = (short *)xmalloc(1);
      }
      param_2 = hoststr_7742;
      *(undefined *)hoststr_7742 = 0;
    }
    else {
      pcVar4 = (char *)(param_1 + 0x4c);
      puVar6 = &uStack328;
      do {
        pcVar4 = pcVar4 + 1;
        puVar7 = (uint *)((long)puVar6 + 1);
        *(char *)puVar6 = cVar12;
        if ((char *)(param_1 + 0x14cU) <= pcVar4) break;
        cVar12 = *pcVar4;
        puVar6 = puVar7;
      } while (cVar12 != '\0');
      *(char *)puVar7 = '\0';
      puStack608 = &UNK_001024f7;
      puVar21 = (undefined *)func_0x00101950(&uStack328);
      puVar6 = &uStack328;
      if (puVar21 == (undefined *)0x0) {
        if (((char)uStack328 == '\0') || (do_lookup == '\0')) {
          do {
            puVar7 = puVar6 + 1;
            uVar27 = *puVar6 + 0xfefefeff & ~*puVar6 & 0x80808080;
            puVar6 = puVar7;
          } while (uVar27 == 0);
        }
        else {
          puStack608 = &UNK_001028ff;
          puVar6 = (uint *)canon_host(&uStack328);
          puVar8 = &uStack328;
          if (puVar6 != (uint *)0x0) {
            puStack608 = &UNK_0010290f;
            lVar5 = func_0x00101910(puVar6);
            goto code_r0x001027dd;
          }
          do {
            puVar7 = puVar8 + 1;
            uVar27 = *puVar8 + 0xfefefeff & ~*puVar8 & 0x80808080;
            puVar8 = puVar7;
          } while (uVar27 == 0);
        }
        bVar30 = (uVar27 & 0x8080) == 0;
        bVar13 = (byte)uVar27;
        if (bVar30) {
          bVar13 = (byte)(uVar27 >> 0x10);
        }
        if (bVar30) {
          puVar7 = (uint *)((long)puVar7 + 2);
        }
        lVar5 = (long)puVar7 + ((-3 - (ulong)CARRY1(bVar13,bVar13)) - (long)&uStack328);
        puVar6 = &uStack328;
code_r0x001027dd:
        puVar21 = (undefined *)(lVar5 + 3);
        if (hostlen_7743 < puVar21) {
          puStack608 = &UNK_00102865;
          hostlen_7743 = puVar21;
          puStack584 = puVar21;
          func_0x00101810(hoststr_7742);
          puStack608 = &UNK_00102872;
          hoststr_7742 = (short *)xmalloc(puStack584);
        }
        puStack608 = &UNK_00102806;
        func_0x00101bb0(hoststr_7742,1,0xffffffffffffffff,&UNK_001084cf,puVar6);
      }
      else {
        *puVar21 = 0;
        puStack584 = puVar21 + 1;
        if (((char)uStack328 != '\0') && (do_lookup != '\0')) {
          puStack608 = &UNK_00102735;
          puVar6 = (uint *)canon_host(&uStack328);
          if (puVar6 == (uint *)0x0) {
            puVar6 = &uStack328;
          }
        }
        puStack608 = &UNK_00102525;
        lVar5 = func_0x00101910(puVar6);
        lStack560 = lVar5;
        if (puStack584 == (undefined *)0x0) goto code_r0x001027dd;
        psStack568 = hoststr_7742;
        puStack576 = hostlen_7743;
        puStack608 = &UNK_00102555;
        lVar5 = func_0x00101910();
        puVar21 = (undefined *)(lStack560 + lVar5 + 4);
        psVar23 = psStack568;
        if (puStack576 < puVar21) {
          puStack608 = &UNK_00102824;
          hostlen_7743 = puVar21;
          puStack576 = puVar21;
          func_0x00101810(psStack568);
          puStack608 = &UNK_00102831;
          psVar23 = (short *)xmalloc(puStack576);
          hoststr_7742 = psVar23;
        }
        puStack608 = &UNK_00102597;
        func_0x00101bb0(psVar23,1,0xffffffffffffffff,&UNK_001084c7,puVar6,puStack584);
      }
      if (puVar6 != &uStack328) {
        puStack608 = &UNK_001025a4;
        func_0x00101810(puVar6);
      }
      param_2 = hoststr_7742;
      if (hoststr_7742 == (short *)0x0) {
        param_2 = (short *)&UNK_00109241;
      }
    }
    puStack480 = &uStack395;
    psVar23 = (short *)&UNK_00109241;
    puStack608 = &UNK_001025c4;
    time_string_isra_1((ulong)*(uint *)(param_1 + 0x154));
    puStack608 = &UNK_00109241;
    puStack640 = &UNK_001025e8;
    puStack632 = puStack480;
    psStack624 = (short *)puVar19;
    puStack616 = (undefined4 *)param_2;
    print_line(0x20,param_1 + 0x2c,(ulong)uStack588,0x20,param_1 + 8);
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    puStack608 = &UNK_00102953;
    func_0x00101920();
  }
  puVar21 = &UNK_00108494;
  puStack608 = &UNK_00102972;
  func_0x00101990(&UNK_00108494,&UNK_0010848a,0xcd,__PRETTY_FUNCTION___7702);
  lStack664 = *(long *)(in_FS_OFFSET + 0x28);
  psStack744 = (short *)&UNK_001029b2;
  lStack648 = param_1;
  puStack640 = puVar19;
  puStack632 = (undefined4 *)param_2;
  psStack624 = psVar23;
  puStack616 = puStack480;
  puStack608 = (undefined *)(param_1 + 8);
  iVar3 = read_utmp();
  psVar24 = psStack688;
  if (iVar3 != 0) {
    psStack744 = (short *)&UNK_00103125;
    puVar21 = (undefined *)quotearg_n_style_colon(0,3,puVar21);
    psStack744 = (short *)&UNK_0010312d;
    puVar6 = (uint *)func_0x00101840();
    psStack688 = (short *)0x1;
    psStack744 = (short *)&UNK_00103145;
    func_0x00101af0(1,(ulong)*puVar6,&UNK_00108cc9,puVar21);
    goto code_r0x00103145;
  }
  if (short_list == '\0') {
    if (include_heading != '\0') {
      psStack744 = (short *)&UNK_00102d18;
      uStack720 = func_0x001018f0(0,&UNK_001084e7,5);
      psStack744 = (short *)&UNK_00102d30;
      param_2 = (short *)func_0x001018f0(0,&UNK_001084ec,5);
      psStack744 = (short *)&UNK_00102d46;
      puVar21 = (undefined *)func_0x001018f0(0,&UNK_001084f4,5);
      psStack744 = (short *)&UNK_00102d5c;
      psStack768 = (short *)func_0x001018f0(0,&UNK_001084f8,5);
      psStack744 = (short *)&UNK_00102d72;
      puStack728 = (undefined *)func_0x001018f0(0,&UNK_001084fd,5);
      psStack744 = (short *)&UNK_00102d8a;
      lStack736 = func_0x001018f0(0,&UNK_00108502,5);
      psStack744 = (short *)&UNK_00102da1;
      uVar16 = func_0x001018f0(0,&UNK_00108507,5);
      psStack744 = (short *)uStack720;
      puStack776 = &UNK_00102dc9;
      puStack760 = puVar21;
      psStack752 = param_2;
      print_line(0xffffffff,uVar16,0x20,0xffffffff,lStack736);
    }
    if (my_line_only != '\0') {
      psStack744 = (short *)&UNK_00102cd4;
      puVar19 = (undefined *)func_0x00101a90(0);
      if (puVar19 == (undefined *)0x0) goto code_r0x00102b01;
      psStack744 = (short *)&UNK_00102cf4;
      iVar3 = func_0x00101860(puVar19,&UNK_0010850c,5);
      if (iVar3 == 0) {
        puVar19 = puVar19 + 5;
      }
    }
    param_2 = (short *)((long)psStack696 + -1);
    lStack736 = -0x8000000000000000;
    if (psStack696 != (short *)0x0) {
      puStack728 = auStack676;
      puVar21 = &UNK_00109241;
      psVar23 = param_2;
      do {
        if (my_line_only == '\0') {
code_r0x00102a43:
          sVar1 = *psVar24;
          if (((need_users == '\0') || (*(char *)(psVar24 + 0x16) == '\0')) || (sVar1 != 7)) {
            if ((need_runlevel == '\0') || (sVar1 != 1)) {
              if ((need_boottime == '\0') || (sVar1 != 2)) {
                if ((need_clockchange == '\0') || (sVar1 != 3)) {
                  if ((need_initspawn == '\0') || (sVar1 != 5)) {
                    if ((need_login == '\0') || (sVar1 != 6)) {
                      if ((need_deadprocs != '\0') && (sVar1 == 8)) {
                        psStack744 = (short *)&UNK_00102f2b;
                        psStack696 = (short *)make_id_equals_comment(psVar24);
                        psStack744 = (short *)&UNK_00102f50;
                        func_0x00101bb0(puStack728,1,0xc,&UNK_00108486);
                        if (exitstr_7761 == (undefined *)0x0) {
                          psStack744 = (short *)&UNK_001030b5;
                          pcVar4 = (char *)func_0x001018f0(0,&UNK_0010854c,5);
                          uVar11 = 0xffffffffffffffff;
                          uStack712 = 0xffffffffffffffff;
                          do {
                            if (uVar11 == 0) break;
                            uVar11 = uVar11 - 1;
                            cVar26 = *pcVar4;
                            pcVar4 = pcVar4 + (ulong)bVar32 * -2 + 1;
                          } while (cVar26 != '\0');
                          uStack720 = ~uVar11 - 1;
                          psStack744 = (short *)&UNK_001030e8;
                          pcVar4 = (char *)func_0x001018f0(0,&UNK_00108552,5);
                          uVar11 = uStack712;
                          do {
                            if (uVar11 == 0) break;
                            uVar11 = uVar11 - 1;
                            cVar26 = *pcVar4;
                            pcVar4 = pcVar4 + (ulong)bVar32 * -2 + 1;
                          } while (cVar26 != '\0');
                          psStack744 = (short *)&UNK_0010310a;
                          exitstr_7761 = (undefined *)xmalloc(uStack720 + 0xd + ~uVar11);
                        }
                        uStack712 = CONCAT44(uStack712._4_4_,(int)psVar24[0xa7]);
                        psStack744 = (short *)&UNK_00102f7f;
                        psVar9 = (short *)func_0x001018f0(0,&UNK_00108552,5);
                        uStack720 = uStack720 & 0xffffffff00000000 | (ulong)(uint)(int)psVar24[0xa6]
                        ;
                        psStack744 = (short *)&UNK_00102fa2;
                        uVar16 = func_0x001018f0(0,&UNK_0010854c,5);
                        psStack744 = (short *)(uStack712 & 0xffffffff);
                        puStack760 = &UNK_00102fd1;
                        psStack752 = psVar9;
                        func_0x00101bb0(exitstr_7761,1,0xffffffffffffffff,&UNK_00108558,uVar16,
                                        uStack720 & 0xffffffff);
                        puVar18 = exitstr_7761;
                        puStack760 = &UNK_00102fe5;
                        time_string_isra_1((ulong)*(uint *)(psVar24 + 0xaa));
                        puStack760 = puVar18;
                        puStack776 = puStack728;
                        puStack784 = &UNK_00109241;
                        puStack792 = &UNK_0010300f;
                        psStack768 = psStack696;
                        print_line(0xffffffff,&UNK_00109241,0x20,0x20,psVar24 + 4);
                        psStack744 = (short *)&UNK_0010301b;
                        func_0x00101810();
                      }
                      goto code_r0x00102ad8;
                    }
                    psStack744 = (short *)&UNK_00102eb9;
                    psStack696 = (short *)make_id_equals_comment(psVar24);
                    psStack744 = (short *)&UNK_00102ede;
                    func_0x00101bb0(puStack728,1,0xc,&UNK_00108486,(long)*(int *)(psVar24 + 2));
                    psStack744 = (short *)&UNK_00102eeb;
                    time_string_isra_1((ulong)*(uint *)(psVar24 + 0xaa));
                    psStack744 = (short *)&UNK_00102f01;
                    puVar18 = (undefined *)func_0x001018f0(0,&UNK_00108546,5);
                    puStack760 = puStack728;
                  }
                  else {
                    psStack744 = (short *)&UNK_00102e44;
                    psStack696 = (short *)make_id_equals_comment(psVar24);
                    puVar2 = puStack728;
                    psStack744 = (short *)&UNK_00102e6c;
                    func_0x00101bb0(puStack728,1,0xc,&UNK_00108486,(long)*(int *)(psVar24 + 2));
                    psStack744 = (short *)&UNK_00102e79;
                    time_string_isra_1((ulong)*(uint *)(psVar24 + 0xaa));
                    puVar18 = &UNK_00109241;
                    puStack760 = puVar2;
                  }
                  psStack744 = (short *)&UNK_00109241;
                  psStack768 = (short *)&UNK_00109241;
                  puStack776 = &UNK_00102ea0;
                  psStack752 = psStack696;
                  print_line(0xffffffff,puVar18,0x20,0x20,psVar24 + 4);
                  psStack744 = (short *)&UNK_00102eac;
                  func_0x00101810();
                  goto code_r0x00102ad8;
                }
                psStack744 = (short *)&UNK_00102e2b;
                psStack696 = (short *)time_string_isra_1();
                puVar18 = &UNK_00108539;
              }
              else {
                psStack744 = (short *)&UNK_00102ddf;
                psStack696 = (short *)time_string_isra_1();
                puVar18 = &UNK_0010852d;
              }
              psStack744 = (short *)&UNK_00102df5;
              uVar16 = func_0x001018f0(0,puVar18,5);
              psStack744 = (short *)&UNK_00109241;
              psStack752 = (short *)&UNK_00109241;
              puStack760 = &UNK_00109241;
              psStack768 = (short *)&UNK_00109241;
              puStack776 = &UNK_00102e15;
              print_line(0xffffffff,&UNK_00109241,0x20,0xffffffff,uVar16);
            }
            else {
              iVar3 = *(int *)(psVar24 + 2);
              uVar27 = iVar3 / 0x100;
              if (runlevline_7780 == 0) {
                psStack744 = (short *)&UNK_00103044;
                pcVar4 = (char *)func_0x001018f0(0,&UNK_00108512,5);
                uVar11 = 0xffffffffffffffff;
                do {
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  cVar26 = *pcVar4;
                  pcVar4 = pcVar4 + (ulong)bVar32 * -2 + 1;
                } while (cVar26 != '\0');
                psStack744 = (short *)&UNK_0010305e;
                runlevline_7780 = xmalloc(~uVar11 + 2);
              }
              psStack744 = (short *)&UNK_00102c02;
              uVar16 = func_0x001018f0(0,&UNK_00108512,5);
              psStack744 = (short *)&UNK_00102c27;
              func_0x00101bb0(runlevline_7780,1,0xffffffffffffffff,&UNK_0010851c,uVar16,
                              (ulong)(uint)(iVar3 % 0x100) & 0xff);
              if (comment_7781 == (short *)0x0) {
                psStack744 = (short *)&UNK_0010307d;
                pcVar4 = (char *)func_0x001018f0(0,&UNK_00108522,5);
                lVar5 = -1;
                do {
                  if (lVar5 == 0) break;
                  lVar5 = lVar5 + -1;
                  cVar26 = *pcVar4;
                  pcVar4 = pcVar4 + (ulong)bVar32 * -2 + 1;
                } while (cVar26 != '\0');
                psStack744 = (short *)&UNK_00103093;
                comment_7781 = (short *)xmalloc(-lVar5);
              }
              uVar29 = uVar27 & 0xff;
              uVar28 = 0x53;
              if ((char)uVar27 != 'N') {
                uVar28 = uVar29;
              }
              psStack744 = (short *)&UNK_00102c5e;
              uVar16 = func_0x001018f0(0,&UNK_00108522,5);
              psStack744 = (short *)&UNK_00102c89;
              func_0x00101bb0(comment_7781,1,0xffffffffffffffff,&UNK_00108528,uVar16,(ulong)uVar28);
              psStack696 = (short *)&UNK_00109241;
              if (uVar29 - 0x20 < 0x5f) {
                psStack696 = comment_7781;
              }
              psStack744 = (short *)&UNK_00102ca3;
              time_string_isra_1();
              psStack744 = (short *)&UNK_00109241;
              puStack760 = &UNK_00109241;
              psStack768 = (short *)&UNK_00109241;
              puStack776 = &UNK_00102cc4;
              psStack752 = psStack696;
              print_line(0xffffffff,&UNK_00109241,0x20,0xffffffff,runlevline_7780);
            }
          }
          else {
            psStack744 = (short *)&UNK_0010302c;
            print_user(psVar24,lStack736);
          }
        }
        else {
          psStack744 = (short *)&UNK_00102a3b;
          iVar3 = func_0x00101860(puVar19,psVar24 + 4,0x20);
          if (iVar3 == 0) goto code_r0x00102a43;
        }
code_r0x00102ad8:
        if (*psVar24 == 2) {
          lStack736 = (long)*(int *)(psVar24 + 0xaa);
        }
        psVar23 = (short *)((long)psVar23 + -1);
        param_2 = psVar24 + 0xc0;
        psVar24 = param_2;
      } while (psVar23 != (short *)0xffffffffffffffff);
    }
  }
  else {
    puVar19 = (undefined *)0x0;
    puVar21 = (undefined *)((long)psStack696 + -1);
    if (psStack696 != (short *)0x0) {
      param_2 = (short *)&UNK_00109241;
      psVar23 = psStack688;
      do {
        if ((*(char *)(psVar23 + 0x16) != '\0') && (*psVar23 == 7)) {
          puVar19 = puVar19 + 1;
          psStack744 = (short *)&UNK_00102ba5;
          psStack696 = (short *)extract_trimmed_name(psVar23);
          psStack744 = (short *)&UNK_00102bc1;
          func_0x00101ac0(1,&UNK_001084d4,param_2,psStack696);
          psStack744 = (short *)&UNK_00102bcc;
          func_0x00101810(psStack696);
          param_2 = (short *)&UNK_00108484;
        }
        puVar21 = puVar21 + -1;
        psVar23 = psVar23 + 0xc0;
      } while (puVar21 != (undefined *)0xffffffffffffffff);
    }
    psStack744 = (short *)&UNK_00102b82;
    uVar16 = func_0x001018f0(0,&UNK_001084d9,5);
    psStack744 = (short *)&UNK_00102b94;
    func_0x00101ac0(1,uVar16,puVar19);
  }
code_r0x00102b01:
  psStack744 = (short *)&UNK_00102b0b;
  func_0x00101810();
  psVar23 = psStack696;
  if (lStack664 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
code_r0x00103145:
  psStack744 = (short *)&UNK_0010314a;
  func_0x00101920();
  puVar18 = program_name;
  uVar16 = 5;
  puStack784 = *(undefined **)(in_FS_OFFSET + 0x28);
  psStack768 = (short *)puVar21;
  puStack760 = puVar19;
  psStack752 = param_2;
  psStack744 = psVar23;
  if ((int)psStack688 == 0) goto code_r0x001031ad;
  uVar16 = func_0x001018f0(0,&UNK_00108738,5);
  func_0x00101b40(stderr,1,uVar16,puVar18);
  do {
    func_0x00101b20((ulong)psStack688 & 0xffffffff);
    uVar16 = extraout_RDX;
code_r0x001031ad:
    uVar16 = func_0x001018f0(0,&UNK_00108760,uVar16);
    func_0x00101ac0(1,uVar16,puVar18);
    uVar16 = stdout;
    uVar10 = func_0x001018f0(0,&UNK_00108790,5);
    func_0x001019d0(uVar10,uVar16);
    uVar16 = stdout;
    uVar10 = func_0x001018f0(0,&UNK_001087d0,5);
    func_0x001019d0(uVar10,uVar16);
    uVar16 = stdout;
    uVar10 = func_0x001018f0(0,&UNK_00108898,5);
    func_0x001019d0(uVar10,uVar16);
    uVar16 = stdout;
    uVar10 = func_0x001018f0(0,&UNK_001088d0,5);
    func_0x001019d0(uVar10,uVar16);
    uVar16 = stdout;
    uVar10 = func_0x001018f0(0,&UNK_00108990,5);
    func_0x001019d0(uVar10,uVar16);
    uVar16 = stdout;
    uVar10 = func_0x001018f0(0,&UNK_00108a70,5);
    func_0x001019d0(uVar10,uVar16);
    uVar16 = stdout;
    uVar10 = func_0x001018f0(0,&UNK_00108b18,5);
    func_0x001019d0(uVar10,uVar16);
    uVar16 = stdout;
    uVar10 = func_0x001018f0(0,&UNK_00108b48,5);
    func_0x001019d0(uVar10,uVar16);
    uVar16 = func_0x001018f0(0,&UNK_00108b80,5);
    func_0x00101ac0(1,uVar16,&UNK_00108574,&UNK_00108566);
    uStack808 = 0;
    uStack800 = 0;
    pbStack904 = &UNK_00108582;
    apbStack888[4] = &UNK_001085c3;
    puStack896 = &UNK_00108584;
    puStack840 = &UNK_001085cd;
    apbStack888[0] = &UNK_001085fc;
    puStack824 = &UNK_001085d7;
    apbStack888[1] = &UNK_00108594;
    apbStack888[2] = &UNK_001085aa;
    apbStack888[3] = &UNK_001085b4;
    puStack848 = &UNK_001085b4;
    puStack832 = &UNK_001085b4;
    puStack816 = &UNK_001085b4;
    ppbVar17 = &pbStack904;
    do {
      ppbVar17 = ppbVar17;
      ppbVar17 = ppbVar17 + 2;
      pbVar25 = *ppbVar17;
      bVar30 = false;
      bVar31 = pbVar25 == (byte *)0x0;
      if (bVar31) break;
      lVar5 = 4;
      pbVar20 = &UNK_00108562;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar30 = *pbVar20 < *pbVar25;
        bVar31 = *pbVar20 == *pbVar25;
        pbVar20 = pbVar20 + (ulong)bVar32 * -2 + 1;
        pbVar25 = pbVar25 + (ulong)bVar32 * -2 + 1;
      } while (bVar31);
    } while ((!bVar30 && !bVar31) != bVar30);
    pbVar25 = ppbVar17[3];
    if (pbVar25 == (byte *)0x0) {
      uVar16 = func_0x001018f0(0,&UNK_001085e1,5);
      func_0x00101ac0(1,uVar16,&UNK_001085f8,&UNK_00108c00);
      lVar5 = func_0x00101ab0(5,0);
      if ((lVar5 != 0) && (iVar3 = func_0x00101860(lVar5,&UNK_00108606,3), iVar3 != 0)) {
        pbVar25 = &UNK_00108562;
        goto code_r0x00103550;
      }
      pbVar25 = &UNK_00108562;
      puVar18 = &UNK_0010859e;
      uVar16 = func_0x001018f0(0,&UNK_0010860a,5);
      func_0x00101ac0(1,uVar16,&UNK_00108c00,&UNK_00108562);
    }
    else {
      uVar16 = func_0x001018f0(0,&UNK_001085e1,5);
      func_0x00101ac0(1,uVar16,&UNK_001085f8,&UNK_00108c00);
      lVar5 = func_0x00101ab0(5,0);
      if ((lVar5 != 0) && (iVar3 = func_0x00101860(lVar5,&UNK_00108606,3), iVar3 != 0)) {
code_r0x00103550:
        uVar16 = stdout;
        uVar10 = func_0x001018f0(0,&UNK_00108c28,5);
        func_0x001019d0(uVar10,uVar16);
      }
      uVar16 = func_0x001018f0(0,&UNK_0010860a,5);
      func_0x00101ac0(1,uVar16,&UNK_00108c00,&UNK_00108562);
      puVar18 = &UNK_00109241;
      if (pbVar25 == &UNK_00108562) {
        puVar18 = &UNK_0010859e;
      }
    }
    uVar16 = func_0x001018f0(0,&UNK_00108c70,5);
    func_0x00101ac0(1,uVar16,pbVar25,puVar18);
  } while( true );
}

