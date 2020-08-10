
undefined8 *
create(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  long extraout_RDX;
  ulong extraout_RDX_00;
  long extraout_RDX_01;
  undefined8 extraout_RDX_02;
  byte **ppbVar10;
  uint *puVar11;
  undefined *puVar12;
  byte bVar13;
  int *piVar14;
  byte *pbVar15;
  char cVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  long in_FS_OFFSET;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  undefined auVar26 [16];
  byte *pbStack656;
  undefined *puStack648;
  byte *apbStack640 [5];
  undefined *puStack600;
  undefined *puStack592;
  undefined *puStack584;
  undefined *puStack576;
  undefined *puStack568;
  undefined8 uStack560;
  undefined8 uStack552;
  undefined8 uStack536;
  undefined8 uStack520;
  ulong uStack512;
  ulong uStack504;
  undefined *puStack496;
  undefined8 *puStack480;
  undefined8 *puStack472;
  bool bStack458;
  bool bStack457;
  undefined8 *puStack456;
  ulong uStack448;
  ulong uStack432;
  long lStack424;
  undefined8 *puStack416;
  undefined8 *puStack408;
  ulong uStack400;
  undefined *puStack392;
  int *piStack376;
  uint *puStack368;
  uint uStack348;
  uint uStack332;
  undefined8 auStack328 [3];
  long lStack304;
  int *piStack288;
  undefined8 *puStack280;
  long lStack272;
  undefined8 *puStack264;
  undefined8 *puStack248;
  undefined8 uStack232;
  undefined *puStack224;
  undefined8 *puStack216;
  uint uStack184;
  uint uStack180;
  long lStack176;
  uint uStack160;
  ulong uStack32;
  
  bVar25 = 0;
  uStack32 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack216 = param_1;
  if (filter_command == (undefined8 *)0x0) goto code_r0x001042d8;
  puStack224 = (undefined *)func_0x00101b30(&UNK_00108b19);
  if (puStack224 == (undefined *)0x0) {
    puStack224 = &UNK_00108ad8;
  }
  iVar1 = func_0x00101be0(&UNK_00108b1f,param_1,1);
  if (iVar1 != 0) goto code_r0x00104501;
  if (verbose != '\0') goto code_r0x001043a0;
  do {
    iVar1 = func_0x00101d30();
    if (iVar1 != 0) goto code_r0x0010452d;
    uVar2 = func_0x00101fa0();
    if (uVar2 != 0) {
      if (uVar2 != 0xffffffff) {
        iVar1 = func_0x00101d20((ulong)uStack184);
        if (iVar1 == 0) {
          filter_pid = uVar2;
          if (n_open_pipes != open_pipes_alloc) goto code_r0x001041ba;
          param_4 = n_open_pipes;
          if (open_pipes != (int *)0x0) {
            if (0x1555555555555554 < n_open_pipes) goto code_r0x001044ca;
            param_4 = n_open_pipes + 1 + (n_open_pipes >> 1);
            goto code_r0x00104477;
          }
          if (n_open_pipes == 0) {
            param_4 = 0x20;
          }
          bVar24 = false;
          lVar5 = SUB168(ZEXT816(4) * ZEXT816(param_4),0);
          if (SUB168(ZEXT816(4) * ZEXT816(param_4) >> 0x40,0) != 0) goto code_r0x00104559;
          goto code_r0x001044c0;
        }
        goto code_r0x00104621;
      }
code_r0x0010464d:
      uStack232 = func_0x00101c40(0,&UNK_00108ba1,5);
      puVar11 = (uint *)func_0x00101b70();
      uVar19 = (ulong)*puVar11;
      lStack272 = 1;
      func_0x00101ea0(1,uVar19,uStack232);
      puStack408 = (undefined8 *)(uVar19 * 0x20 + lStack272);
      puStack280 = (undefined8 *)0x0;
      if ((int)*(uint *)(puStack408 + 1) < 0) {
        uStack400 = extraout_RDX - 1;
        uVar4 = *puStack408;
        uVar17 = uVar19 - 1;
        if (uVar19 == 0) {
          uVar17 = uStack400;
        }
        if (*(uint *)(puStack408 + 1) == 0xffffffff) goto code_r0x0010476b;
code_r0x001046d8:
        puStack264 = (undefined8 *)&UNK_001046e4;
        uVar2 = open_safer(uVar4,0xc01);
        if ((int)uVar2 < 0) {
          do {
            puStack264 = (undefined8 *)&UNK_001046f1;
            param_5 = (undefined8 *)func_0x00101b70();
            if (1 < *(uint *)param_5 - 0x17) {
code_r0x001047e3:
              puStack264 = (undefined8 *)&UNK_001047f8;
              puStack248 = param_5;
              uVar4 = quotearg_n_style_colon(0,3,*puStack408);
              puStack264 = (undefined8 *)&UNK_00104816;
              func_0x00101ea0(1,(ulong)*(uint *)puStack248,&UNK_00108ddc,uVar4);
code_r0x00104816:
              puStack264 = (undefined8 *)&UNK_00104826;
              uVar4 = quotearg_n_style_colon(0,3,*puStack280);
              puStack264 = (undefined8 *)&UNK_00104844;
              param_5 = puStack248;
              func_0x00101ea0(1,(ulong)*(uint *)puStack248,&UNK_00108ddc,uVar4);
              goto code_r0x00104844;
            }
            while (puStack280 = (undefined8 *)(uVar17 * 0x20 + lStack272), puStack248 = param_5,
                  *(int *)(puStack280 + 1) < 0) {
              bVar24 = uVar17 == 0;
              uVar17 = uVar17 - 1;
              if (bVar24) {
                uVar17 = uStack400;
              }
              if (uVar17 == uVar19) {
                puStack264 = (undefined8 *)&UNK_001047c5;
                uVar4 = quotearg_n_style_colon(0,3,*puStack408);
                puStack264 = (undefined8 *)&UNK_001047e3;
                func_0x00101ea0(1,(ulong)*(uint *)puStack248,&UNK_00108ddc,uVar4);
                param_5 = puStack248;
                goto code_r0x001047e3;
              }
            }
            puStack264 = (undefined8 *)&UNK_0010473e;
            iVar1 = rpl_fclose(puStack280[2]);
            if (iVar1 != 0) goto code_r0x00104816;
            *(undefined4 *)(puStack280 + 1) = 0xfffffffe;
            uVar2 = *(uint *)(puStack408 + 1);
            puStack280[2] = 0;
            uVar4 = *puStack408;
            puStack280 = (undefined8 *)0x1;
            if (uVar2 != 0xffffffff) goto code_r0x001046d8;
code_r0x0010476b:
            puStack264 = (undefined8 *)&UNK_00104770;
            uVar2 = create();
            if (-1 < (int)uVar2) break;
          } while( true );
        }
        *(uint *)(puStack408 + 1) = uVar2;
        puStack264 = (undefined8 *)&UNK_0010478a;
        lVar5 = func_0x00101e60((ulong)uVar2,&UNK_00108bd4);
        puStack408[2] = lVar5;
        uVar2 = filter_pid;
        if (lVar5 == 0) {
code_r0x00104844:
          puStack264 = (undefined8 *)&UNK_00104854;
          piStack288 = (int *)quotearg_n_style_colon(0,3,*puStack408);
          puStack264 = (undefined8 *)&UNK_0010485c;
          puVar11 = (uint *)func_0x00101b70();
          uVar17 = (ulong)*puVar11;
          lVar5 = 1;
          puStack264 = (undefined8 *)&UNK_00104874;
          piStack376 = piStack288;
          func_0x00101ea0(1,uVar17,&UNK_00108ddc);
          puStack416 = (undefined8 *)(extraout_RDX_00 & 0xffffffff);
          uVar2 = (uint)uVar17;
          puVar11 = (uint *)(uVar17 & 0xffffffff);
          lStack304 = *(long *)(in_FS_OFFSET + 0x28);
          iVar1 = (int)puVar11;
          piVar8 = piStack376;
          puStack264 = puStack408;
          if (lVar5 == 0) {
code_r0x001049b8:
            uStack348 = (uint)piVar8;
            if (-1 < (int)uVar2) {
              puStack368 = (uint *)&UNK_001049c7;
              iVar3 = func_0x00101d20(puVar11);
              if (-1 < iVar3) goto code_r0x001048bc;
              puStack368 = (uint *)&UNK_001049de;
              piStack376 = (int *)quotearg_n_style_colon(0,3,piStack376);
              puStack368 = (uint *)&UNK_001049e6;
              puVar6 = (uint *)func_0x00101b70();
              piVar9 = (int *)(ulong)*puVar6;
              uVar17 = 1;
              puStack368 = (uint *)&UNK_001049fe;
              func_0x00101ea0(1,piVar9,&UNK_00108ddc,piStack376);
code_r0x00104a00:
              uVar17 = uVar17 - 1;
              piVar14 = piVar9;
code_r0x00104a10:
              uStack348 = (uint)piVar9;
              n_open_pipes = uVar17;
              *piVar9 = piVar14[uVar17];
            }
          }
          else {
            puStack368 = (uint *)&UNK_001048b0;
            iVar3 = rpl_fclose();
            if (iVar3 != 0) {
              puStack368 = (uint *)&UNK_00104975;
              puStack408 = (undefined8 *)func_0x00101b70();
              if ((filter_command == (undefined8 *)0x0) || (*(uint *)puStack408 != 0x20)) {
                puStack368 = (uint *)&UNK_0010499a;
                piVar8 = (int *)quotearg_n_style_colon(0,3,piStack376);
                uVar2 = *(uint *)puStack408;
                puStack368 = (uint *)&UNK_001049b4;
                func_0x00101ea0(1,(ulong)uVar2,&UNK_00108ddc);
                goto code_r0x001049b8;
              }
            }
            uStack348 = (uint)piVar8;
            if (-1 < iVar1) {
code_r0x001048bc:
              uStack348 = (uint)piVar8;
              if (n_open_pipes != 0) {
                piVar9 = open_pipes;
                uVar17 = n_open_pipes;
                if (iVar1 == *open_pipes) goto code_r0x00104a00;
                uVar17 = n_open_pipes - 1;
                uVar18 = 0;
                while( true ) {
                  piVar9 = piVar9 + 1;
                  uStack348 = (uint)piVar8;
                  if (uVar17 == uVar18) break;
                  uVar18 = uVar18 + 1;
                  piVar8 = piVar9;
                  piVar14 = open_pipes;
                  if (*piVar9 == iVar1) goto code_r0x00104a10;
                }
              }
            }
          }
          if (0 < (int)puStack416) {
            uStack332 = 0;
            puStack368 = (uint *)&UNK_0010491c;
            iVar1 = func_0x00101ec0(puStack416,&uStack332,0);
            if (iVar1 == -1) {
              puStack368 = (uint *)&UNK_00104a8d;
              puVar11 = (uint *)func_0x00101b70();
              if (*puVar11 == 10) goto code_r0x00104925;
              puStack368 = (uint *)&UNK_00104aac;
              uVar4 = func_0x00101c40(0,&UNK_00108bd6,5);
              puStack368 = (uint *)&UNK_00104abe;
              func_0x00101ea0(1,(ulong)*puVar11,uVar4);
code_r0x00104ac0:
              puStack368 = (uint *)&UNK_00104acf;
              iVar1 = sig2str((ulong)puVar11 & 0xffffffff,auStack328);
              if (iVar1 != 0) {
                puStack368 = (uint *)&UNK_00104b3e;
                func_0x00101fc0(auStack328,1,0x13,&UNK_00108bf0,(ulong)puVar11 & 0xffffffff);
              }
              puStack408 = filter_command;
              puStack368 = (uint *)&UNK_00104ae9;
              piStack376 = (int *)quotearg_n_style_colon(0,3,piStack376);
              uStack348 = (uint)piStack376;
              puStack368 = (uint *)&UNK_00104aff;
              uVar4 = func_0x00101c40(0,&UNK_00108f78,5);
              puStack368 = (uint *)&UNK_00104b1a;
              param_5 = auStack328;
              func_0x00101ea0((ulong)((int)puVar11 + 0x80),0,uVar4,piStack376,auStack328,puStack408)
              ;
              puStack416 = auStack328;
            }
            else {
code_r0x00104925:
              puVar22 = filter_command;
              uVar2 = uStack332 & 0x7f;
              puVar11 = (uint *)(ulong)uVar2;
              uStack348 = uStack332;
              if ((char)((char)uVar2 + '\x01') < '\x02') {
                if (uVar2 != 0) goto code_r0x00104b45;
                bVar13 = (byte)((ulong)uStack332 >> 8);
                puVar11 = (uint *)(ulong)bVar13;
                if (bVar13 != 0) {
                  puStack368 = (uint *)&UNK_00104a51;
                  piStack376 = (int *)quotearg_n_style_colon(0,3,piStack376);
                  uStack348 = (uint)piStack376;
                  puStack368 = (uint *)&UNK_00104a67;
                  uVar4 = func_0x00101c40(0,&UNK_00108fa8,5);
                  param_5 = (undefined8 *)(ulong)(uint)bVar13;
                  puStack368 = (uint *)&UNK_00104a7e;
                  func_0x00101ea0((ulong)(uint)bVar13,0,uVar4,piStack376,param_5,puVar22);
                  puStack416 = puVar22;
                }
              }
              else {
                if (uVar2 != 0xd) goto code_r0x00104ac0;
              }
            }
          }
          if (lStack304 == *(long *)(in_FS_OFFSET + 0x28)) {
            return (undefined8 *)0x0;
          }
          puStack368 = (uint *)&UNK_00104b45;
          func_0x00101c70();
code_r0x00104b45:
          puStack368 = (uint *)&UNK_00104b5c;
          uVar4 = func_0x00101c40(0,&UNK_00108fd0,5);
          lStack424 = 0;
          cVar16 = '\x01';
          puStack368 = (uint *)&UNK_00104b71;
          func_0x00101ea0(1,0,uVar4,(ulong)uStack348);
          puStack368 = puVar11;
          if (cVar16 != '\0') {
            if (((lStack424 == 0) && (extraout_RDX_01 == 0)) && (elide_empty_files != '\0')) {
              return (undefined8 *)1;
            }
            puStack392 = &UNK_00104bc6;
            closeout(0,(ulong)output_desc,(ulong)filter_pid,outfile);
            puStack392 = &UNK_00104bcb;
            next_file_name();
            puStack392 = &UNK_00104bd7;
            output_desc = create(outfile);
            if ((int)output_desc < 0) {
              puStack392 = &UNK_00104c6b;
              uStack432 = quotearg_n_style_colon(0,3,outfile);
              puStack392 = &UNK_00104c73;
              puVar11 = (uint *)func_0x00101b70();
              puStack456 = (undefined8 *)(ulong)*puVar11;
              uVar18 = 1;
              puStack392 = &UNK_00104c8b;
              uVar17 = uStack432;
              auVar26 = func_0x00101ea0(1,puStack456,&UNK_00108ddc);
              uStack448 = SUB168(auVar26 >> 0x40,0);
              puVar22 = (undefined8 *)0x0;
              uStack512 = 1;
              bVar24 = true;
              uStack504 = uVar18;
              puStack392 = (undefined *)uVar19;
              if (uVar17 == 0xffffffffffffffff) goto code_r0x00104d64;
              bStack457 = uVar17 < uStack448;
              if (uVar17 < uVar18) goto code_r0x00104da6;
              do {
                bVar23 = param_5 == (undefined8 *)0x0;
                puVar20 = puStack456;
                do {
                  uStack448 = SUB168(auVar26 >> 0x40,0);
                  bVar13 = (byte)uStack512 | bVar24;
                  uStack512 = uStack512 & 0xffffffffffffff00 | (ulong)bVar13;
                  if (bVar13 != 0) {
                    puStack496 = &UNK_00104d3a;
                    puStack480 = puVar20;
                    puStack472 = param_5;
                    bStack458 = bVar23;
                    uStack512 = cwrite((ulong)bVar24,puVar20,uStack504);
                    auVar26 = CONCAT88(uStack448,uStack512);
                    uStack512 = uStack512 & 0xffffffff;
                    param_5 = puStack472;
                    puVar20 = puStack480;
                    bVar23 = bStack458;
                  }
                  uStack448 = SUB168(auVar26 >> 0x40,0);
                  puVar22 = (undefined8 *)((long)puVar22 + (ulong)bVar24);
                  bVar24 = (bool)(puVar22 < param_5 | bVar23);
                  if ((bVar24 == false) && ((char)uStack512 == '\0')) {
                    return (undefined8 *)SUB168(auVar26,0);
                  }
                  uVar17 = uVar17 - uStack504;
                  puVar20 = (undefined8 *)((long)puVar20 + uStack504);
                  uStack504 = uVar18;
                } while (uVar18 <= uVar17);
                if (uVar17 != 0) goto code_r0x00104de0;
                while( true ) {
                  uStack448 = SUB168(auVar26 >> 0x40,0);
                  if (bStack457 != false) {
                    lVar5 = (long)puVar22 + 1;
                    if (puVar22 < param_5) {
                      do {
                        lVar5 = lVar5 + 1;
                        puStack496 = &UNK_00104e72;
                        uVar4 = cwrite(1,0,0);
                      } while ((long)param_5 + 1 != lVar5);
                      return (undefined8 *)uVar4;
                    }
                    return (undefined8 *)SUB168(auVar26,0);
                  }
code_r0x00104d64:
                  puStack480 = param_5;
                  if ((char)uStack512 == '\0') {
                    puStack496 = &UNK_00104e34;
                    lVar5 = func_0x00101ce0(0,uStack504,1);
                    if (lVar5 != -1) {
                      bVar24 = true;
                      uStack504 = uVar18;
                    }
                  }
                  puStack496 = &UNK_00104d83;
                  uVar17 = safe_read(0,puStack456,uStack448);
                  auVar26 = CONCAT88(uStack448,uVar17);
                  if (uVar17 == 0xffffffffffffffff) {
                    puStack496 = &UNK_00104e99;
                    uStack520 = quotearg_n_style_colon(0,3,infile);
                    puStack496 = &UNK_00104ea1;
                    puVar11 = (uint *)func_0x00101b70();
                    uVar19 = 1;
                    puStack496 = &UNK_00104eb9;
                    func_0x00101ea0(1,(ulong)*puVar11,&UNK_00108ddc,uStack520);
                    puVar12 = program_name;
                    uVar4 = 5;
                    uStack536 = *(undefined8 *)(in_FS_OFFSET + 0x28);
                    puStack496 = (undefined *)uVar17;
                    if ((int)uVar19 == 0) goto code_r0x00104f1d;
                    uVar4 = func_0x00101c40(0,&UNK_00108ff8,5);
                    func_0x00101f40(stderr,1,uVar4,puVar12);
                    goto code_r0x00104f16;
                  }
                  bStack457 = uVar17 == 0;
                  param_5 = puStack480;
                  if (uStack504 <= uVar17) break;
code_r0x00104da6:
                  uStack448 = SUB168(auVar26 >> 0x40,0);
                  if (uVar17 != 0) {
                    puVar20 = puStack456;
                    if ((byte)((byte)uStack512 | bVar24) == 0) {
                      uVar19 = 0;
                      uStack512 = 0;
                      bVar24 = param_5 == puVar22;
                      if (bVar24) {
                        return (undefined8 *)0;
                      }
                    }
                    else {
code_r0x00104de0:
                      puStack496 = &UNK_00104df3;
                      puStack480 = param_5;
                      uVar2 = cwrite((ulong)bVar24,puVar20,uVar17);
                      uStack512 = (ulong)uVar2;
                      uVar19 = (ulong)bVar24;
                      puVar22 = (undefined8 *)((long)puVar22 + uVar19);
                      bVar24 = (bool)(puStack480 == puVar22 & ((byte)uVar2 ^ 1));
                      param_5 = puStack480;
                      if (bVar24 != false) {
                        return (undefined8 *)uVar19;
                      }
                    }
                    auVar26 = CONCAT88(uStack448,uVar19);
                    uStack504 = uStack504 - uVar17;
                  }
                }
              } while( true );
            }
          }
          puStack392 = &UNK_00104bee;
          lVar5 = full_write((ulong)output_desc,lStack424,extraout_RDX_01);
          if (lVar5 != extraout_RDX_01) {
            puStack392 = &UNK_00104bf8;
            puVar11 = (uint *)func_0x00101b70();
            if ((filter_command != (undefined8 *)0x0) && (*puVar11 == 0x20)) {
              return (undefined8 *)0;
            }
            puStack392 = &UNK_00104c1f;
            uVar4 = quotearg_n_style_colon(0,3,outfile);
            puStack392 = &UNK_00104c37;
            func_0x00101ea0(1,(ulong)*puVar11,&UNK_00108ddc,uVar4);
          }
          return (undefined8 *)1;
        }
        filter_pid = 0;
        *(uint *)(puStack408 + 3) = uVar2;
      }
      return puStack280;
    }
    if (n_open_pipes != 0) {
      uVar19 = 0;
      do {
        iVar1 = func_0x00101d20();
        if (iVar1 != 0) goto code_r0x001044d0;
        uVar19 = uVar19 + 1;
      } while (uVar19 < n_open_pipes);
    }
    uVar2 = func_0x00101d20();
    puStack216 = (undefined8 *)(ulong)uVar2;
    puVar11 = (uint *)func_0x00101b70();
    if (uVar2 != 0) {
code_r0x0010459a:
      uVar4 = func_0x00101c40(0,&UNK_00108b65,5);
      func_0x00101ea0(1,(ulong)*puVar11,uVar4);
code_r0x001045be:
      uVar4 = func_0x00101c40(0,&UNK_00108b79,5);
      func_0x00101ea0(1,(ulong)*puVar11,uVar4);
code_r0x001045e2:
      puStack224 = (undefined *)quotearg_style(4,puStack216);
      uVar4 = func_0x00101c40(0,&UNK_00108af2,5);
      puVar11 = (uint *)func_0x00101b70();
      func_0x00101ea0(1,(ulong)*puVar11,uVar4,puStack224);
code_r0x00104621:
      uVar4 = func_0x00101c40(0,&UNK_00108bb9,5);
      puVar11 = (uint *)func_0x00101b70();
      func_0x00101ea0(1,(ulong)*puVar11,uVar4);
      goto code_r0x0010464d;
    }
    if (uStack184 != 0) {
      iVar1 = func_0x00101ca0((ulong)uStack184,0);
      if (iVar1 == 0) {
        iVar1 = func_0x00101d20((ulong)uStack184);
        if (iVar1 == 0) goto code_r0x0010426f;
        uVar4 = func_0x00101c40(0,&UNK_00108b8b,5);
        param_1 = (undefined8 *)0x1;
        func_0x00101ea0(1,(ulong)*puVar11,uVar4);
        goto code_r0x00104410;
      }
      goto code_r0x001045be;
    }
code_r0x0010426f:
    func_0x00101b40(2,oldblocked,0);
    puStack216 = filter_command;
    uVar4 = last_component(puStack224);
    func_0x00101f70(puStack224,uVar4,&UNK_00108b9e,puStack216,0);
    uVar4 = func_0x00101c40(0,&UNK_00108f50,5);
    param_1 = (undefined8 *)0x1;
    param_5 = puStack216;
    func_0x00101ea0(1,(ulong)*puVar11,uVar4,puStack224);
code_r0x001042d8:
    if (verbose != '\0') {
code_r0x00104410:
      uVar4 = quotearg_style(4,param_1);
      uVar7 = func_0x00101c40(0,&UNK_00108ae0,5);
      func_0x00101f40(stdout,1,uVar7,uVar4);
    }
    uVar2 = open_safer(puStack216,0x41,0x1b6);
    if ((int)uVar2 < 0) {
code_r0x001041d0:
      while( true ) {
        param_4 = uStack32 ^ *(ulong *)(in_FS_OFFSET + 0x28);
        if (param_4 == 0) break;
        while( true ) {
          func_0x00101c70();
code_r0x00104501:
          uVar4 = func_0x00101c40(0,&UNK_00108f28,5);
          puVar11 = (uint *)func_0x00101b70();
          func_0x00101ea0(1,(ulong)*puVar11,uVar4);
code_r0x0010452d:
          uVar4 = func_0x00101c40(0,&UNK_00108b3c,5);
          puVar11 = (uint *)func_0x00101b70();
          lVar5 = func_0x00101ea0(1,(ulong)*puVar11,uVar4);
code_r0x00104559:
          bVar24 = true;
code_r0x001044c0:
          if ((-1 < lVar5) && (!bVar24)) break;
code_r0x001044ca:
          xalloc_die();
code_r0x001044d0:
          uVar4 = func_0x00101c40(0,&UNK_00108b52,5);
          puVar11 = (uint *)func_0x00101b70();
          func_0x00101ea0(1,(ulong)*puVar11,uVar4);
        }
code_r0x00104477:
        open_pipes_alloc = param_4;
        open_pipes = (int *)xrealloc();
code_r0x001041ba:
        puVar11 = (uint *)(open_pipes + n_open_pipes);
        n_open_pipes = n_open_pipes + 1;
        *puVar11 = uStack180;
        uVar2 = uStack180;
      }
      return (undefined8 *)(ulong)uVar2;
    }
    iVar1 = func_0x00101e20(1,(ulong)uVar2,&uStack184);
    if (iVar1 != 0) goto code_r0x001045e2;
    if ((in_stat_buf._8_8_ == lStack176) && (in_stat_buf._0_8_ == CONCAT44(uStack180,uStack184))) {
      puVar11 = (uint *)quotearg_style(4,puStack216);
      uVar4 = func_0x00101c40(0,&UNK_00108f00,5);
      func_0x00101ea0(1,0,uVar4,puVar11);
      goto code_r0x0010459a;
    }
    iVar1 = func_0x00101cd0((ulong)uVar2,0);
    if ((iVar1 == 0) || ((uStack160 & 0xf000) != 0x8000)) goto code_r0x001041d0;
    puStack224 = (undefined *)quotearg_n_style_colon(0,3,puStack216);
    uVar4 = func_0x00101c40(0,&UNK_00108b04,5);
    puVar11 = (uint *)func_0x00101b70();
    func_0x00101ea0(1,(ulong)*puVar11,uVar4,puStack224);
code_r0x001043a0:
    param_4 = quotearg_n_style_colon(0,3,puStack216);
    uVar4 = func_0x00101c40(0,&UNK_00108b24,5);
    func_0x00101f40(stdout,1,uVar4);
  } while( true );
code_r0x00104f16:
  func_0x00101f20(uVar19 & 0xffffffff);
  uVar4 = extraout_RDX_02;
code_r0x00104f1d:
  uVar4 = func_0x00101c40(0,&UNK_00109020,uVar4);
  func_0x00101e80(1,uVar4,puVar12);
  uVar4 = stdout;
  uVar7 = func_0x00101c40(0,&UNK_00109048,5);
  func_0x00101d80(uVar7,uVar4);
  uVar4 = stdout;
  uVar7 = func_0x00101c40(0,&UNK_001090b8,5);
  func_0x00101d80(uVar7,uVar4);
  uVar4 = stdout;
  uVar7 = func_0x00101c40(0,&UNK_001090f0,5);
  func_0x00101d80(uVar7,uVar4);
  uVar4 = func_0x00101c40(0,&UNK_00109140,5);
  func_0x00101f40(stdout,1,uVar4,2);
  uVar4 = stdout;
  uVar7 = func_0x00101c40(0,&UNK_00109588,5);
  func_0x00101d80(uVar7,uVar4);
  uVar4 = stdout;
  uVar7 = func_0x00101c40(0,&UNK_00109600,5);
  func_0x00101d80(uVar7,uVar4);
  uVar4 = stdout;
  uVar7 = func_0x00101c40(0,&UNK_00109630,5);
  func_0x00101d80(uVar7,uVar4);
  uVar4 = stdout;
  uVar7 = func_0x00101c40(0,&UNK_00109668,5);
  func_0x00101d80(uVar7,uVar4);
  uVar4 = stdout;
  uVar7 = func_0x00101c40(0,&UNK_00109740,5);
  func_0x00101d80(uVar7,uVar4);
  uStack560 = 0;
  uStack552 = 0;
  pbStack656 = &UNK_00108bf9;
  apbStack640[4] = &UNK_00108c3a;
  puStack648 = &UNK_00108bfb;
  puStack592 = &UNK_00108c44;
  apbStack640[0] = &UNK_00108c73;
  puStack576 = &UNK_00108c4e;
  apbStack640[1] = &UNK_00108c0b;
  apbStack640[2] = &UNK_00108c21;
  apbStack640[3] = &UNK_00108c2b;
  puStack600 = &UNK_00108c2b;
  puStack584 = &UNK_00108c2b;
  puStack568 = &UNK_00108c2b;
  ppbVar10 = &pbStack656;
  do {
    ppbVar10 = ppbVar10;
    ppbVar10 = ppbVar10 + 2;
    pbVar21 = *ppbVar10;
    bVar24 = false;
    bVar23 = pbVar21 == (byte *)0x0;
    if (bVar23) break;
    lVar5 = 6;
    pbVar15 = &UNK_00108bf3;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar24 = *pbVar15 < *pbVar21;
      bVar23 = *pbVar15 == *pbVar21;
      pbVar15 = pbVar15 + (ulong)bVar25 * -2 + 1;
      pbVar21 = pbVar21 + (ulong)bVar25 * -2 + 1;
    } while (bVar23);
  } while ((!bVar24 && !bVar23) != bVar24);
  pbVar21 = ppbVar10[3];
  if (pbVar21 == (byte *)0x0) {
    uVar4 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar4,&UNK_00108c6f,&UNK_00109898);
    lVar5 = func_0x00101e70(5,0);
    if ((lVar5 != 0) && (iVar1 = func_0x00101b80(lVar5,&UNK_00108c7d,3), iVar1 != 0)) {
      pbVar21 = &UNK_00108bf3;
      goto code_r0x001052c0;
    }
    pbVar21 = &UNK_00108bf3;
    puVar12 = &UNK_00108c15;
    uVar4 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar4,&UNK_00109898,&UNK_00108bf3);
  }
  else {
    uVar4 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar4,&UNK_00108c6f,&UNK_00109898);
    lVar5 = func_0x00101e70(5,0);
    if ((lVar5 != 0) && (iVar1 = func_0x00101b80(lVar5,&UNK_00108c7d,3), iVar1 != 0)) {
code_r0x001052c0:
      uVar4 = stdout;
      uVar7 = func_0x00101c40(0,&UNK_001098c0,5);
      func_0x00101d80(uVar7,uVar4);
    }
    uVar4 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar4,&UNK_00109898,&UNK_00108bf3);
    puVar12 = &UNK_0010a141;
    if (pbVar21 == &UNK_00108bf3) {
      puVar12 = &UNK_00108c15;
    }
  }
  uVar4 = func_0x00101c40(0,&UNK_00109908,5);
  func_0x00101e80(1,uVar4,pbVar21,puVar12);
  goto code_r0x00104f16;
}

