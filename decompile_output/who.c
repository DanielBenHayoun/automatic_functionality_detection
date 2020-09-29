
/* WARNING: Could not reconcile some variable overlaps */

void who(undefined *param_1,ulong param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  byte **ppbVar11;
  undefined *puVar12;
  long unaff_RBP;
  undefined *puVar13;
  byte *pbVar14;
  char *pcVar15;
  short *unaff_R12;
  short *psVar16;
  byte *pbVar17;
  uint uVar18;
  short *unaff_R13;
  short *psVar19;
  uint uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  byte *pbStack304;
  undefined *puStack296;
  byte *apbStack288 [5];
  undefined *puStack248;
  undefined *puStack240;
  undefined *puStack232;
  undefined *puStack224;
  undefined *puStack216;
  undefined8 uStack208;
  undefined8 uStack200;
  undefined *puStack192;
  undefined *puStack184;
  undefined *puStack176;
  short *psStack168;
  undefined *puStack160;
  short *psStack152;
  short *psStack144;
  long lStack136;
  undefined *puStack128;
  ulong uStack120;
  undefined8 uStack112;
  short *psStack96;
  short *psStack88;
  undefined auStack76 [12];
  long lStack64;
  
  bVar23 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  psStack144 = (short *)&UNK_001029b2;
  iVar4 = read_utmp(param_1,&psStack96,&psStack88,param_2 & 0xffffffff);
  psVar16 = psStack88;
  if (iVar4 != 0) {
    psStack144 = (short *)&UNK_00103125;
    param_1 = (undefined *)quotearg_n_style_colon(0,3,param_1);
    psStack144 = (short *)&UNK_0010312d;
    puVar6 = (uint *)func_0x00101840();
    psStack88 = (short *)0x1;
    psStack144 = (short *)&UNK_00103145;
    func_0x00101af0(1,(ulong)*puVar6,&UNK_00108cc9,param_1);
    psStack96 = unaff_R13;
    goto code_r0x00103145;
  }
  if (short_list == '\0') {
    if (include_heading != '\0') {
      psStack144 = (short *)&UNK_00102d18;
      uStack120 = func_0x001018f0(0,&UNK_001084e7,5);
      psStack144 = (short *)&UNK_00102d30;
      unaff_R12 = (short *)func_0x001018f0(0,&UNK_001084ec,5);
      psStack144 = (short *)&UNK_00102d46;
      param_1 = (undefined *)func_0x001018f0(0,&UNK_001084f4,5);
      psStack144 = (short *)&UNK_00102d5c;
      psStack168 = (short *)func_0x001018f0(0,&UNK_001084f8,5);
      psStack144 = (short *)&UNK_00102d72;
      puStack128 = (undefined *)func_0x001018f0(0,&UNK_001084fd,5);
      psStack144 = (short *)&UNK_00102d8a;
      lStack136 = func_0x001018f0(0,&UNK_00108502,5);
      psStack144 = (short *)&UNK_00102da1;
      uVar10 = func_0x001018f0(0,&UNK_00108507,5);
      psStack144 = (short *)uStack120;
      puStack176 = &UNK_00102dc9;
      puStack160 = param_1;
      psStack152 = unaff_R12;
      print_line(0xffffffff,uVar10,0x20,0xffffffff,lStack136);
    }
    if (my_line_only != '\0') {
      psStack144 = (short *)&UNK_00102cd4;
      unaff_RBP = func_0x00101a90(0);
      if (unaff_RBP == 0) goto code_r0x00102b01;
      psStack144 = (short *)&UNK_00102cf4;
      iVar4 = func_0x00101860(unaff_RBP,&UNK_0010850c,5);
      if (iVar4 == 0) {
        unaff_RBP = unaff_RBP + 5;
      }
    }
    unaff_R12 = (short *)((long)psStack96 + -1);
    lStack136 = -0x8000000000000000;
    if (psStack96 != (short *)0x0) {
      puStack128 = auStack76;
      param_1 = &UNK_00109241;
      psVar19 = unaff_R12;
      do {
        if (my_line_only == '\0') {
code_r0x00102a43:
          sVar2 = *psVar16;
          if (((need_users == '\0') || (*(char *)(psVar16 + 0x16) == '\0')) || (sVar2 != 7)) {
            if ((need_runlevel == '\0') || (sVar2 != 1)) {
              if ((need_boottime == '\0') || (sVar2 != 2)) {
                if ((need_clockchange == '\0') || (sVar2 != 3)) {
                  if ((need_initspawn == '\0') || (sVar2 != 5)) {
                    if ((need_login == '\0') || (sVar2 != 6)) {
                      if ((need_deadprocs != '\0') && (sVar2 == 8)) {
                        psStack144 = (short *)&UNK_00102f2b;
                        psStack96 = (short *)make_id_equals_comment(psVar16);
                        psStack144 = (short *)&UNK_00102f50;
                        func_0x00101bb0(puStack128,1,0xc,&UNK_00108486);
                        if (exitstr_7761 == (undefined *)0x0) {
                          psStack144 = (short *)&UNK_001030b5;
                          pcVar15 = (char *)func_0x001018f0(0,&UNK_0010854c,5);
                          uVar8 = 0xffffffffffffffff;
                          uStack112 = 0xffffffffffffffff;
                          do {
                            if (uVar8 == 0) break;
                            uVar8 = uVar8 - 1;
                            cVar1 = *pcVar15;
                            pcVar15 = pcVar15 + (ulong)bVar23 * -2 + 1;
                          } while (cVar1 != '\0');
                          uStack120 = ~uVar8 - 1;
                          psStack144 = (short *)&UNK_001030e8;
                          pcVar15 = (char *)func_0x001018f0(0,&UNK_00108552,5);
                          uVar8 = uStack112;
                          do {
                            if (uVar8 == 0) break;
                            uVar8 = uVar8 - 1;
                            cVar1 = *pcVar15;
                            pcVar15 = pcVar15 + (ulong)bVar23 * -2 + 1;
                          } while (cVar1 != '\0');
                          psStack144 = (short *)&UNK_0010310a;
                          exitstr_7761 = (undefined *)xmalloc(uStack120 + 0xd + ~uVar8);
                        }
                        uStack112 = CONCAT44(uStack112._4_4_,(int)psVar16[0xa7]);
                        psStack144 = (short *)&UNK_00102f7f;
                        psVar5 = (short *)func_0x001018f0(0,&UNK_00108552,5);
                        uStack120 = uStack120 & 0xffffffff00000000 | (ulong)(uint)(int)psVar16[0xa6]
                        ;
                        psStack144 = (short *)&UNK_00102fa2;
                        uVar10 = func_0x001018f0(0,&UNK_0010854c,5);
                        psStack144 = (short *)(uStack112 & 0xffffffff);
                        puStack160 = &UNK_00102fd1;
                        psStack152 = psVar5;
                        func_0x00101bb0(exitstr_7761,1,0xffffffffffffffff,&UNK_00108558,uVar10,
                                        uStack120 & 0xffffffff);
                        puVar12 = exitstr_7761;
                        puStack160 = &UNK_00102fe5;
                        time_string_isra_1((ulong)*(uint *)(psVar16 + 0xaa));
                        puStack160 = puVar12;
                        puStack176 = puStack128;
                        puStack184 = &UNK_00109241;
                        puStack192 = &UNK_0010300f;
                        psStack168 = psStack96;
                        print_line(0xffffffff,&UNK_00109241,0x20,0x20,psVar16 + 4);
                        psStack144 = (short *)&UNK_0010301b;
                        func_0x00101810();
                      }
                      goto code_r0x00102ad8;
                    }
                    psStack144 = (short *)&UNK_00102eb9;
                    psStack96 = (short *)make_id_equals_comment(psVar16);
                    psStack144 = (short *)&UNK_00102ede;
                    func_0x00101bb0(puStack128,1,0xc,&UNK_00108486,(long)*(int *)(psVar16 + 2));
                    psStack144 = (short *)&UNK_00102eeb;
                    time_string_isra_1((ulong)*(uint *)(psVar16 + 0xaa));
                    psStack144 = (short *)&UNK_00102f01;
                    puVar13 = (undefined *)func_0x001018f0(0,&UNK_00108546,5);
                    puStack160 = puStack128;
                  }
                  else {
                    psStack144 = (short *)&UNK_00102e44;
                    psStack96 = (short *)make_id_equals_comment(psVar16);
                    puVar12 = puStack128;
                    psStack144 = (short *)&UNK_00102e6c;
                    func_0x00101bb0(puStack128,1,0xc,&UNK_00108486,(long)*(int *)(psVar16 + 2));
                    psStack144 = (short *)&UNK_00102e79;
                    time_string_isra_1((ulong)*(uint *)(psVar16 + 0xaa));
                    puVar13 = &UNK_00109241;
                    puStack160 = puVar12;
                  }
                  psStack144 = (short *)&UNK_00109241;
                  psStack168 = (short *)&UNK_00109241;
                  puStack176 = &UNK_00102ea0;
                  psStack152 = psStack96;
                  print_line(0xffffffff,puVar13,0x20,0x20,psVar16 + 4);
                  psStack144 = (short *)&UNK_00102eac;
                  func_0x00101810();
                  goto code_r0x00102ad8;
                }
                psStack144 = (short *)&UNK_00102e2b;
                psStack96 = (short *)time_string_isra_1();
                puVar12 = &UNK_00108539;
              }
              else {
                psStack144 = (short *)&UNK_00102ddf;
                psStack96 = (short *)time_string_isra_1();
                puVar12 = &UNK_0010852d;
              }
              psStack144 = (short *)&UNK_00102df5;
              uVar10 = func_0x001018f0(0,puVar12,5);
              psStack144 = (short *)&UNK_00109241;
              psStack152 = (short *)&UNK_00109241;
              puStack160 = &UNK_00109241;
              psStack168 = (short *)&UNK_00109241;
              puStack176 = &UNK_00102e15;
              print_line(0xffffffff,&UNK_00109241,0x20,0xffffffff,uVar10);
            }
            else {
              iVar4 = *(int *)(psVar16 + 2);
              uVar3 = iVar4 / 0x100;
              if (runlevline_7780 == 0) {
                psStack144 = (short *)&UNK_00103044;
                pcVar15 = (char *)func_0x001018f0(0,&UNK_00108512,5);
                uVar8 = 0xffffffffffffffff;
                do {
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar15 + (ulong)bVar23 * -2 + 1;
                } while (cVar1 != '\0');
                psStack144 = (short *)&UNK_0010305e;
                runlevline_7780 = xmalloc(~uVar8 + 2);
              }
              psStack144 = (short *)&UNK_00102c02;
              uVar10 = func_0x001018f0(0,&UNK_00108512,5);
              psStack144 = (short *)&UNK_00102c27;
              func_0x00101bb0(runlevline_7780,1,0xffffffffffffffff,&UNK_0010851c,uVar10,
                              (ulong)(uint)(iVar4 % 0x100) & 0xff);
              if (comment_7781 == (short *)0x0) {
                psStack144 = (short *)&UNK_0010307d;
                pcVar15 = (char *)func_0x001018f0(0,&UNK_00108522,5);
                lVar9 = -1;
                do {
                  if (lVar9 == 0) break;
                  lVar9 = lVar9 + -1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar15 + (ulong)bVar23 * -2 + 1;
                } while (cVar1 != '\0');
                psStack144 = (short *)&UNK_00103093;
                comment_7781 = (short *)xmalloc(-lVar9);
              }
              uVar20 = uVar3 & 0xff;
              uVar18 = 0x53;
              if ((char)uVar3 != 'N') {
                uVar18 = uVar20;
              }
              psStack144 = (short *)&UNK_00102c5e;
              uVar10 = func_0x001018f0(0,&UNK_00108522,5);
              psStack144 = (short *)&UNK_00102c89;
              func_0x00101bb0(comment_7781,1,0xffffffffffffffff,&UNK_00108528,uVar10,(ulong)uVar18);
              psStack96 = (short *)&UNK_00109241;
              if (uVar20 - 0x20 < 0x5f) {
                psStack96 = comment_7781;
              }
              psStack144 = (short *)&UNK_00102ca3;
              time_string_isra_1();
              psStack144 = (short *)&UNK_00109241;
              puStack160 = &UNK_00109241;
              psStack168 = (short *)&UNK_00109241;
              puStack176 = &UNK_00102cc4;
              psStack152 = psStack96;
              print_line(0xffffffff,&UNK_00109241,0x20,0xffffffff,runlevline_7780);
            }
          }
          else {
            psStack144 = (short *)&UNK_0010302c;
            print_user(psVar16,lStack136);
          }
        }
        else {
          psStack144 = (short *)&UNK_00102a3b;
          iVar4 = func_0x00101860(unaff_RBP,psVar16 + 4,0x20);
          if (iVar4 == 0) goto code_r0x00102a43;
        }
code_r0x00102ad8:
        if (*psVar16 == 2) {
          lStack136 = (long)*(int *)(psVar16 + 0xaa);
        }
        psVar19 = (short *)((long)psVar19 + -1);
        unaff_R12 = psVar16 + 0xc0;
        psVar16 = unaff_R12;
      } while (psVar19 != (short *)0xffffffffffffffff);
    }
  }
  else {
    unaff_RBP = 0;
    param_1 = (undefined *)((long)psStack96 + -1);
    if (psStack96 != (short *)0x0) {
      unaff_R12 = (short *)&UNK_00109241;
      do {
        if ((*(char *)(psVar16 + 0x16) != '\0') && (*psVar16 == 7)) {
          unaff_RBP = unaff_RBP + 1;
          psStack144 = (short *)&UNK_00102ba5;
          psStack96 = (short *)extract_trimmed_name(psVar16);
          psStack144 = (short *)&UNK_00102bc1;
          func_0x00101ac0(1,&UNK_001084d4,unaff_R12,psStack96);
          psStack144 = (short *)&UNK_00102bcc;
          func_0x00101810(psStack96);
          unaff_R12 = (short *)&UNK_00108484;
        }
        param_1 = param_1 + -1;
        psVar16 = psVar16 + 0xc0;
      } while (param_1 != (undefined *)0xffffffffffffffff);
    }
    psStack144 = (short *)&UNK_00102b82;
    uVar10 = func_0x001018f0(0,&UNK_001084d9,5);
    psStack144 = (short *)&UNK_00102b94;
    func_0x00101ac0(1,uVar10,unaff_RBP);
  }
code_r0x00102b01:
  psStack144 = (short *)&UNK_00102b0b;
  func_0x00101810();
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
code_r0x00103145:
  psStack144 = (short *)&UNK_0010314a;
  func_0x00101920();
  puVar12 = program_name;
  uVar10 = 5;
  puStack184 = *(undefined **)(in_FS_OFFSET + 0x28);
  psStack168 = (short *)param_1;
  puStack160 = (undefined *)unaff_RBP;
  psStack152 = unaff_R12;
  psStack144 = psStack96;
  if ((int)psStack88 == 0) goto code_r0x001031ad;
  uVar10 = func_0x001018f0(0,&UNK_00108738,5);
  func_0x00101b40(stderr,1,uVar10,puVar12);
  do {
    func_0x00101b20((ulong)psStack88 & 0xffffffff);
    uVar10 = extraout_RDX;
code_r0x001031ad:
    uVar10 = func_0x001018f0(0,&UNK_00108760,uVar10);
    func_0x00101ac0(1,uVar10,puVar12);
    uVar10 = stdout;
    uVar7 = func_0x001018f0(0,&UNK_00108790,5);
    func_0x001019d0(uVar7,uVar10);
    uVar10 = stdout;
    uVar7 = func_0x001018f0(0,&UNK_001087d0,5);
    func_0x001019d0(uVar7,uVar10);
    uVar10 = stdout;
    uVar7 = func_0x001018f0(0,&UNK_00108898,5);
    func_0x001019d0(uVar7,uVar10);
    uVar10 = stdout;
    uVar7 = func_0x001018f0(0,&UNK_001088d0,5);
    func_0x001019d0(uVar7,uVar10);
    uVar10 = stdout;
    uVar7 = func_0x001018f0(0,&UNK_00108990,5);
    func_0x001019d0(uVar7,uVar10);
    uVar10 = stdout;
    uVar7 = func_0x001018f0(0,&UNK_00108a70,5);
    func_0x001019d0(uVar7,uVar10);
    uVar10 = stdout;
    uVar7 = func_0x001018f0(0,&UNK_00108b18,5);
    func_0x001019d0(uVar7,uVar10);
    uVar10 = stdout;
    uVar7 = func_0x001018f0(0,&UNK_00108b48,5);
    func_0x001019d0(uVar7,uVar10);
    uVar10 = func_0x001018f0(0,&UNK_00108b80,5);
    func_0x00101ac0(1,uVar10,&UNK_00108574,&UNK_00108566);
    uStack208 = 0;
    uStack200 = 0;
    pbStack304 = &UNK_00108582;
    apbStack288[4] = &UNK_001085c3;
    puStack296 = &UNK_00108584;
    puStack240 = &UNK_001085cd;
    apbStack288[0] = &UNK_001085fc;
    puStack224 = &UNK_001085d7;
    apbStack288[1] = &UNK_00108594;
    apbStack288[2] = &UNK_001085aa;
    apbStack288[3] = &UNK_001085b4;
    puStack248 = &UNK_001085b4;
    puStack232 = &UNK_001085b4;
    puStack216 = &UNK_001085b4;
    ppbVar11 = &pbStack304;
    do {
      ppbVar11 = ppbVar11;
      ppbVar11 = ppbVar11 + 2;
      pbVar17 = *ppbVar11;
      bVar21 = false;
      bVar22 = pbVar17 == (byte *)0x0;
      if (bVar22) break;
      lVar9 = 4;
      pbVar14 = &UNK_00108562;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar21 = *pbVar14 < *pbVar17;
        bVar22 = *pbVar14 == *pbVar17;
        pbVar14 = pbVar14 + (ulong)bVar23 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar23 * -2 + 1;
      } while (bVar22);
    } while ((!bVar21 && !bVar22) != bVar21);
    pbVar17 = ppbVar11[3];
    if (pbVar17 == (byte *)0x0) {
      uVar10 = func_0x001018f0(0,&UNK_001085e1,5);
      func_0x00101ac0(1,uVar10,&UNK_001085f8,&UNK_00108c00);
      lVar9 = func_0x00101ab0(5,0);
      if (lVar9 != 0) {
        iVar4 = func_0x00101860(lVar9,&UNK_00108606,3);
        if (iVar4 != 0) {
          pbVar17 = &UNK_00108562;
          goto code_r0x00103550;
        }
      }
      pbVar17 = &UNK_00108562;
      puVar12 = &UNK_0010859e;
      uVar10 = func_0x001018f0(0,&UNK_0010860a,5);
      func_0x00101ac0(1,uVar10,&UNK_00108c00,&UNK_00108562);
    }
    else {
      uVar10 = func_0x001018f0(0,&UNK_001085e1,5);
      func_0x00101ac0(1,uVar10,&UNK_001085f8,&UNK_00108c00);
      lVar9 = func_0x00101ab0(5,0);
      if (lVar9 != 0) {
        iVar4 = func_0x00101860(lVar9,&UNK_00108606,3);
        if (iVar4 != 0) {
code_r0x00103550:
          uVar10 = stdout;
          uVar7 = func_0x001018f0(0,&UNK_00108c28,5);
          func_0x001019d0(uVar7,uVar10);
        }
      }
      uVar10 = func_0x001018f0(0,&UNK_0010860a,5);
      func_0x00101ac0(1,uVar10,&UNK_00108c00,&UNK_00108562);
      puVar12 = &UNK_00109241;
      if (pbVar17 == &UNK_00108562) {
        puVar12 = &UNK_0010859e;
      }
    }
    uVar10 = func_0x001018f0(0,&UNK_00108c70,5);
    func_0x00101ac0(1,uVar10,pbVar17,puVar12);
  } while( true );
}

