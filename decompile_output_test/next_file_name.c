
long * next_file_name(void)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  int *piVar16;
  int *piVar17;
  long extraout_RDX;
  ulong extraout_RDX_00;
  long extraout_RDX_01;
  undefined8 extraout_RDX_02;
  byte **ppbVar18;
  long *plVar19;
  uint *puVar20;
  undefined *puVar21;
  byte bVar22;
  long unaff_RBP;
  int *piVar23;
  byte *pbVar24;
  char cVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 *in_R8;
  undefined8 *puVar29;
  byte *pbVar30;
  long *unaff_R13;
  ulong uVar31;
  long in_FS_OFFSET;
  bool bVar32;
  bool bVar33;
  byte bVar34;
  undefined auVar35 [16];
  byte *pbStack696;
  undefined *puStack688;
  byte *apbStack680 [5];
  undefined *puStack640;
  undefined *puStack632;
  undefined *puStack624;
  undefined *puStack616;
  undefined *puStack608;
  undefined8 uStack600;
  undefined8 uStack592;
  undefined8 uStack576;
  undefined8 uStack560;
  ulong uStack552;
  ulong uStack544;
  undefined *puStack536;
  undefined8 *puStack520;
  undefined8 *puStack512;
  bool bStack498;
  bool bStack497;
  undefined8 *puStack496;
  ulong uStack488;
  ulong uStack472;
  long lStack464;
  undefined8 *puStack456;
  undefined8 *puStack448;
  ulong uStack440;
  undefined *puStack432;
  int *piStack416;
  uint *puStack408;
  uint uStack388;
  uint uStack372;
  undefined8 auStack368 [3];
  long lStack344;
  int *piStack328;
  undefined8 *puStack320;
  long lStack312;
  undefined8 *puStack304;
  undefined8 *puStack288;
  undefined8 uStack272;
  undefined *puStack264;
  undefined8 *puStack256;
  long *plStack248;
  uint uStack224;
  uint uStack220;
  long lStack216;
  uint uStack200;
  ulong uStack72;
  long *plStack64;
  long lStack56;
  undefined *puStack48;
  
  lVar9 = outfile;
  lVar7 = outfile_mid;
  plStack64 = suffix_length;
  plVar19 = sufindex_7081;
  pcVar2 = suffix_alphabet;
  bVar22 = suffix_auto;
  bVar34 = 0;
  if (outfile == 0) {
code_r0x00103ebc:
    unaff_RBP = outfile_length_7083;
    if (outfile_length_7083 == 0) {
      puStack48 = &UNK_00103ed8;
      unaff_R13 = (long *)func_0x00101c60(outbase);
      lVar7 = 0;
      outbase_length_7082 = unaff_R13;
      if (additional_suffix != 0) {
        puStack48 = &UNK_00103ef5;
        lVar7 = func_0x00101c60();
      }
      outfile_length_7083 = (long)unaff_R13 + (long)plStack64 + lVar7;
      addsuf_length_7084 = lVar7;
      if (unaff_R13 <= (long *)(outfile_length_7083 + 1)) {
        puStack48 = &UNK_00103f20;
        lVar7 = xrealloc(lVar9);
        plVar19 = outbase_length_7082;
        puStack48 = &UNK_00103f43;
        outfile = lVar7;
        func_0x00101dd0(lVar7,outbase,outbase_length_7082);
        pcVar8 = suffix_alphabet;
        unaff_R13 = sufindex_7081;
code_r0x00103f51:
        plVar3 = suffix_length;
        outfile_mid = lVar7 + (long)plVar19;
        puStack48 = &UNK_00103f71;
        lVar9 = func_0x00101d10(outfile_mid,(ulong)(uint)(int)*pcVar8,suffix_length);
        if (additional_suffix != 0) {
          puStack48 = &UNK_00103f8d;
          func_0x00101dd0(lVar9 + (long)plVar3,additional_suffix,addsuf_length_7084);
        }
        *(undefined *)(lVar7 + outfile_length_7083) = 0;
        puStack48 = &UNK_00103fa1;
        func_0x00101b50(unaff_R13);
        puStack48 = &UNK_00103fae;
        plStack64 = (long *)xcalloc(plVar3,8);
        lVar7 = numeric_suffix_start;
        if (numeric_suffix_start == 0) {
          sufindex_7081 = plStack64;
          return plStack64;
        }
        lVar9 = numeric_suffix_start;
        sufindex_7081 = plStack64;
        if (unaff_RBP == 0) {
          puStack48 = &UNK_00103fd5;
          lVar10 = func_0x00101c60(numeric_suffix_start);
          plVar19 = suffix_length;
          puStack48 = &UNK_00103ffb;
          uVar11 = func_0x00101dd0((long)suffix_length + (outfile_mid - lVar10),lVar7,lVar10);
          lVar9 = lVar10 + -1;
          if (lVar10 != 0) {
            do {
              (plStack64 + (long)(lVar10 * 0x1fffffffffffffff + (long)plVar19))[lVar9] =
                   (long)((int)*(char *)(lVar7 + lVar9) + -0x30);
              lVar9 = lVar9 + -1;
            } while (lVar9 != -1);
            return plStack64 + (long)(lVar10 * 0x1fffffffffffffff + (long)plVar19);
          }
          return (long *)uVar11;
        }
        goto code_r0x001040c7;
      }
    }
    else {
      plStack64 = (long *)((long)plStack64 + 1);
      plVar19 = (long *)(outfile_length_7083 + 3);
      outfile_length_7083 = outfile_length_7083 + 2;
      suffix_length = plStack64;
      if (outbase_length_7082 <= plVar19) {
        puStack48 = &UNK_00104063;
        lVar7 = xrealloc(lVar9);
        unaff_R13 = sufindex_7081;
        pcVar8 = suffix_alphabet;
        plVar19 = (long *)((long)outbase_length_7082 + 1);
        pcVar2 = (char *)(lVar7 + (long)outbase_length_7082);
        outbase_length_7082 = plVar19;
        outfile = lVar7;
        *pcVar2 = suffix_alphabet[*sufindex_7081];
        goto code_r0x00103f51;
      }
    }
  }
  else {
    lVar10 = (long)suffix_length + -1;
    if (suffix_length != (long *)0x0) {
      in_R8 = (undefined8 *)(ulong)suffix_auto;
      do {
        lVar1 = plVar19[lVar10];
        plVar19[lVar10] = lVar1 + 1;
        if (((lVar10 == 0) && (bVar22 != 0)) && (pcVar2[*plVar19 + 1] == '\0'))
        goto code_r0x00103ebc;
        cVar25 = pcVar2[lVar1 + 1];
        *(char *)(lVar7 + lVar10) = cVar25;
        if (cVar25 != '\0') {
          return (long *)lVar10;
        }
        plVar19[lVar10] = 0;
        *(char *)(lVar7 + lVar10) = *pcVar2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != -1);
    }
    puStack48 = &UNK_001040b1;
    uVar11 = func_0x00101c40(0,&UNK_00108ee0,5);
    puStack48 = &UNK_001040c2;
    func_0x00101ea0(1,0,uVar11);
  }
  puStack48 = &UNK_001040c7;
  xalloc_die();
code_r0x001040c7:
  puVar15 = __PRETTY_FUNCTION___7087;
  puVar26 = (undefined8 *)&UNK_00108ad0;
  puStack48 = &UNK_001040e6;
  func_0x00101cf0(&UNK_00108ad0,&UNK_00108ac4,0x198);
  uStack72 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack256 = puVar26;
  lStack56 = unaff_RBP;
  puStack48 = (undefined *)lVar9;
  if (filter_command == (undefined8 *)0x0) goto code_r0x001042d8;
  puStack264 = (undefined *)func_0x00101b30(&UNK_00108b19);
  if (puStack264 == (undefined *)0x0) {
    puStack264 = &UNK_00108ad8;
  }
  iVar4 = func_0x00101be0(&UNK_00108b1f,puVar26,1);
  if (iVar4 != 0) goto code_r0x00104501;
  if (verbose != '\0') goto code_r0x001043a0;
  do {
    iVar4 = func_0x00101d30();
    if (iVar4 != 0) goto code_r0x0010452d;
    uVar5 = func_0x00101fa0();
    if (uVar5 != 0) {
      if (uVar5 != 0xffffffff) {
        iVar4 = func_0x00101d20((ulong)uStack224);
        if (iVar4 == 0) {
          filter_pid = uVar5;
          if (n_open_pipes != open_pipes_alloc) goto code_r0x001041ba;
          puVar15 = n_open_pipes;
          if (open_pipes != (int *)0x0) {
            if ((undefined1 *)0x1555555555555554 < n_open_pipes) goto code_r0x001044ca;
            puVar15 = n_open_pipes + ((ulong)n_open_pipes >> 1) + 1;
            goto code_r0x00104477;
          }
          if (n_open_pipes == (undefined1 *)0x0) {
            puVar15 = (undefined1 *)0x20;
          }
          bVar33 = false;
          lVar7 = SUB168(ZEXT816(4) * ZEXT816(puVar15),0);
          if (SUB168(ZEXT816(4) * ZEXT816(puVar15) >> 0x40,0) != 0) goto code_r0x00104559;
          goto code_r0x001044c0;
        }
        goto code_r0x00104621;
      }
code_r0x0010464d:
      uStack272 = func_0x00101c40(0,&UNK_00108ba1,5);
      puVar20 = (uint *)func_0x00101b70();
      uVar28 = (ulong)*puVar20;
      lStack312 = 1;
      func_0x00101ea0(1,uVar28,uStack272);
      puStack448 = (undefined8 *)(uVar28 * 0x20 + lStack312);
      puStack320 = (undefined8 *)0x0;
      if ((int)*(uint *)(puStack448 + 1) < 0) {
        uStack440 = extraout_RDX - 1;
        uVar11 = *puStack448;
        uVar31 = uVar28 - 1;
        if (uVar28 == 0) {
          uVar31 = uStack440;
        }
        plStack248 = unaff_R13;
        if (*(uint *)(puStack448 + 1) == 0xffffffff) goto code_r0x0010476b;
code_r0x001046d8:
        puStack304 = (undefined8 *)&UNK_001046e4;
        uVar5 = open_safer(uVar11,0xc01);
        if ((int)uVar5 < 0) {
          do {
            puStack304 = (undefined8 *)&UNK_001046f1;
            in_R8 = (undefined8 *)func_0x00101b70();
            if (1 < *(uint *)in_R8 - 0x17) {
code_r0x001047e3:
              puStack304 = (undefined8 *)&UNK_001047f8;
              puStack288 = in_R8;
              uVar11 = quotearg_n_style_colon(0,3,*puStack448);
              puStack304 = (undefined8 *)&UNK_00104816;
              func_0x00101ea0(1,(ulong)*(uint *)puStack288,&UNK_00108ddc,uVar11);
code_r0x00104816:
              puStack304 = (undefined8 *)&UNK_00104826;
              uVar11 = quotearg_n_style_colon(0,3,*puStack320);
              puStack304 = (undefined8 *)&UNK_00104844;
              in_R8 = puStack288;
              func_0x00101ea0(1,(ulong)*(uint *)puStack288,&UNK_00108ddc,uVar11);
              goto code_r0x00104844;
            }
            while (puStack320 = (undefined8 *)(uVar31 * 0x20 + lStack312), puStack288 = in_R8,
                  *(int *)(puStack320 + 1) < 0) {
              bVar33 = uVar31 == 0;
              uVar31 = uVar31 - 1;
              if (bVar33) {
                uVar31 = uStack440;
              }
              if (uVar31 == uVar28) {
                puStack304 = (undefined8 *)&UNK_001047c5;
                uVar11 = quotearg_n_style_colon(0,3,*puStack448);
                puStack304 = (undefined8 *)&UNK_001047e3;
                func_0x00101ea0(1,(ulong)*(uint *)puStack288,&UNK_00108ddc,uVar11);
                in_R8 = puStack288;
                goto code_r0x001047e3;
              }
            }
            puStack304 = (undefined8 *)&UNK_0010473e;
            iVar4 = rpl_fclose(puStack320[2]);
            if (iVar4 != 0) goto code_r0x00104816;
            *(undefined4 *)(puStack320 + 1) = 0xfffffffe;
            uVar5 = *(uint *)(puStack448 + 1);
            puStack320[2] = 0;
            uVar11 = *puStack448;
            puStack320 = (undefined8 *)0x1;
            if (uVar5 != 0xffffffff) goto code_r0x001046d8;
code_r0x0010476b:
            puStack304 = (undefined8 *)&UNK_00104770;
            uVar5 = create();
            if (-1 < (int)uVar5) break;
          } while( true );
        }
        *(uint *)(puStack448 + 1) = uVar5;
        puStack304 = (undefined8 *)&UNK_0010478a;
        lVar7 = func_0x00101e60((ulong)uVar5,&UNK_00108bd4);
        puStack448[2] = lVar7;
        uVar5 = filter_pid;
        if (lVar7 == 0) {
code_r0x00104844:
          puStack304 = (undefined8 *)&UNK_00104854;
          piStack328 = (int *)quotearg_n_style_colon(0,3,*puStack448);
          puStack304 = (undefined8 *)&UNK_0010485c;
          puVar20 = (uint *)func_0x00101b70();
          uVar31 = (ulong)*puVar20;
          lVar7 = 1;
          puStack304 = (undefined8 *)&UNK_00104874;
          piStack416 = piStack328;
          func_0x00101ea0(1,uVar31,&UNK_00108ddc);
          puStack456 = (undefined8 *)(extraout_RDX_00 & 0xffffffff);
          uVar5 = (uint)uVar31;
          puVar20 = (uint *)(uVar31 & 0xffffffff);
          lStack344 = *(long *)(in_FS_OFFSET + 0x28);
          iVar4 = (int)puVar20;
          piVar16 = piStack416;
          puStack304 = puStack448;
          if (lVar7 == 0) {
code_r0x001049b8:
            uStack388 = (uint)piVar16;
            if (-1 < (int)uVar5) {
              puStack408 = (uint *)&UNK_001049c7;
              iVar6 = func_0x00101d20(puVar20);
              if (-1 < iVar6) goto code_r0x001048bc;
              puStack408 = (uint *)&UNK_001049de;
              piStack416 = (int *)quotearg_n_style_colon(0,3,piStack416);
              puStack408 = (uint *)&UNK_001049e6;
              puVar13 = (uint *)func_0x00101b70();
              piVar17 = (int *)(ulong)*puVar13;
              puVar15 = (undefined1 *)0x1;
              puStack408 = (uint *)&UNK_001049fe;
              func_0x00101ea0(1,piVar17,&UNK_00108ddc,piStack416);
code_r0x00104a00:
              puVar15 = puVar15 + -1;
              piVar23 = piVar17;
code_r0x00104a10:
              uStack388 = (uint)piVar17;
              n_open_pipes = puVar15;
              *piVar17 = piVar23[(long)puVar15];
            }
          }
          else {
            puStack408 = (uint *)&UNK_001048b0;
            iVar6 = rpl_fclose();
            if (iVar6 != 0) {
              puStack408 = (uint *)&UNK_00104975;
              puStack448 = (undefined8 *)func_0x00101b70();
              if ((filter_command == (undefined8 *)0x0) || (*(uint *)puStack448 != 0x20)) {
                puStack408 = (uint *)&UNK_0010499a;
                piVar16 = (int *)quotearg_n_style_colon(0,3,piStack416);
                uVar5 = *(uint *)puStack448;
                puStack408 = (uint *)&UNK_001049b4;
                func_0x00101ea0(1,(ulong)uVar5,&UNK_00108ddc);
                goto code_r0x001049b8;
              }
            }
            uStack388 = (uint)piVar16;
            if (-1 < iVar4) {
code_r0x001048bc:
              uStack388 = (uint)piVar16;
              if (n_open_pipes != (undefined1 *)0x0) {
                piVar17 = open_pipes;
                puVar15 = n_open_pipes;
                if (iVar4 == *open_pipes) goto code_r0x00104a00;
                puVar15 = n_open_pipes + -1;
                puVar12 = (undefined1 *)0x0;
                while( true ) {
                  piVar17 = piVar17 + 1;
                  uStack388 = (uint)piVar16;
                  if (puVar15 == puVar12) break;
                  puVar12 = puVar12 + 1;
                  piVar16 = piVar17;
                  piVar23 = open_pipes;
                  if (*piVar17 == iVar4) goto code_r0x00104a10;
                }
              }
            }
          }
          if (0 < (int)puStack456) {
            uStack372 = 0;
            puStack408 = (uint *)&UNK_0010491c;
            iVar4 = func_0x00101ec0(puStack456,&uStack372,0);
            if (iVar4 == -1) {
              puStack408 = (uint *)&UNK_00104a8d;
              puVar20 = (uint *)func_0x00101b70();
              if (*puVar20 == 10) goto code_r0x00104925;
              puStack408 = (uint *)&UNK_00104aac;
              uVar11 = func_0x00101c40(0,&UNK_00108bd6,5);
              puStack408 = (uint *)&UNK_00104abe;
              func_0x00101ea0(1,(ulong)*puVar20,uVar11);
code_r0x00104ac0:
              puStack408 = (uint *)&UNK_00104acf;
              iVar4 = sig2str((ulong)puVar20 & 0xffffffff,auStack368);
              if (iVar4 != 0) {
                puStack408 = (uint *)&UNK_00104b3e;
                func_0x00101fc0(auStack368,1,0x13,&UNK_00108bf0,(ulong)puVar20 & 0xffffffff);
              }
              puStack448 = filter_command;
              puStack408 = (uint *)&UNK_00104ae9;
              piStack416 = (int *)quotearg_n_style_colon(0,3,piStack416);
              uStack388 = (uint)piStack416;
              puStack408 = (uint *)&UNK_00104aff;
              uVar11 = func_0x00101c40(0,&UNK_00108f78,5);
              puStack408 = (uint *)&UNK_00104b1a;
              in_R8 = auStack368;
              func_0x00101ea0((ulong)((int)puVar20 + 0x80),0,uVar11,piStack416,auStack368,puStack448
                             );
              puStack456 = auStack368;
            }
            else {
code_r0x00104925:
              puVar26 = filter_command;
              uVar5 = uStack372 & 0x7f;
              puVar20 = (uint *)(ulong)uVar5;
              uStack388 = uStack372;
              if ((char)((char)uVar5 + '\x01') < '\x02') {
                if (uVar5 != 0) goto code_r0x00104b45;
                bVar22 = (byte)((ulong)uStack372 >> 8);
                puVar20 = (uint *)(ulong)bVar22;
                if (bVar22 != 0) {
                  puStack408 = (uint *)&UNK_00104a51;
                  piStack416 = (int *)quotearg_n_style_colon(0,3,piStack416);
                  uStack388 = (uint)piStack416;
                  puStack408 = (uint *)&UNK_00104a67;
                  uVar11 = func_0x00101c40(0,&UNK_00108fa8,5);
                  in_R8 = (undefined8 *)(ulong)(uint)bVar22;
                  puStack408 = (uint *)&UNK_00104a7e;
                  func_0x00101ea0((ulong)(uint)bVar22,0,uVar11,piStack416,in_R8,puVar26);
                  puStack456 = puVar26;
                }
              }
              else {
                if (uVar5 != 0xd) goto code_r0x00104ac0;
              }
            }
          }
          if (lStack344 == *(long *)(in_FS_OFFSET + 0x28)) {
            return (long *)0x0;
          }
          puStack408 = (uint *)&UNK_00104b45;
          func_0x00101c70();
code_r0x00104b45:
          puStack408 = (uint *)&UNK_00104b5c;
          uVar11 = func_0x00101c40(0,&UNK_00108fd0,5);
          lStack464 = 0;
          cVar25 = '\x01';
          puStack408 = (uint *)&UNK_00104b71;
          func_0x00101ea0(1,0,uVar11,(ulong)uStack388);
          puStack408 = puVar20;
          if (cVar25 != '\0') {
            if (((lStack464 == 0) && (extraout_RDX_01 == 0)) && (elide_empty_files != '\0')) {
              return (long *)1;
            }
            puStack432 = &UNK_00104bc6;
            closeout(0,(ulong)output_desc,(ulong)filter_pid,outfile);
            puStack432 = &UNK_00104bcb;
            next_file_name();
            puStack432 = &UNK_00104bd7;
            output_desc = create(outfile);
            if ((int)output_desc < 0) {
              puStack432 = &UNK_00104c6b;
              uStack472 = quotearg_n_style_colon(0,3,outfile);
              puStack432 = &UNK_00104c73;
              puVar20 = (uint *)func_0x00101b70();
              puStack496 = (undefined8 *)(ulong)*puVar20;
              uVar27 = 1;
              puStack432 = &UNK_00104c8b;
              uVar31 = uStack472;
              auVar35 = func_0x00101ea0(1,puStack496,&UNK_00108ddc);
              uStack488 = SUB168(auVar35 >> 0x40,0);
              puVar26 = (undefined8 *)0x0;
              uStack552 = 1;
              bVar33 = true;
              uStack544 = uVar27;
              puStack432 = (undefined *)uVar28;
              if (uVar31 == 0xffffffffffffffff) goto code_r0x00104d64;
              bStack497 = uVar31 < uStack488;
              if (uVar31 < uVar27) goto code_r0x00104da6;
              do {
                bVar32 = in_R8 == (undefined8 *)0x0;
                puVar29 = puStack496;
                do {
                  uStack488 = SUB168(auVar35 >> 0x40,0);
                  bVar22 = (byte)uStack552 | bVar33;
                  uStack552 = uStack552 & 0xffffffffffffff00 | (ulong)bVar22;
                  if (bVar22 != 0) {
                    puStack536 = &UNK_00104d3a;
                    puStack520 = puVar29;
                    puStack512 = in_R8;
                    bStack498 = bVar32;
                    uStack552 = cwrite((ulong)bVar33,puVar29,uStack544);
                    auVar35 = CONCAT88(uStack488,uStack552);
                    uStack552 = uStack552 & 0xffffffff;
                    in_R8 = puStack512;
                    puVar29 = puStack520;
                    bVar32 = bStack498;
                  }
                  uStack488 = SUB168(auVar35 >> 0x40,0);
                  puVar26 = (undefined8 *)((long)puVar26 + (ulong)bVar33);
                  bVar33 = (bool)(puVar26 < in_R8 | bVar32);
                  if ((bVar33 == false) && ((char)uStack552 == '\0')) {
                    return (long *)SUB168(auVar35,0);
                  }
                  uVar31 = uVar31 - uStack544;
                  puVar29 = (undefined8 *)((long)puVar29 + uStack544);
                  uStack544 = uVar27;
                } while (uVar27 <= uVar31);
                if (uVar31 != 0) goto code_r0x00104de0;
                while( true ) {
                  uStack488 = SUB168(auVar35 >> 0x40,0);
                  if (bStack497 != false) {
                    puVar21 = (undefined *)((long)puVar26 + 1);
                    if (puVar26 < in_R8) {
                      do {
                        puVar21 = puVar21 + 1;
                        puStack536 = &UNK_00104e72;
                        uVar11 = cwrite(1,0,0);
                      } while ((undefined *)((long)in_R8 + 1) != puVar21);
                      return (long *)uVar11;
                    }
                    return (long *)SUB168(auVar35,0);
                  }
code_r0x00104d64:
                  puStack520 = in_R8;
                  if ((char)uStack552 == '\0') {
                    puStack536 = &UNK_00104e34;
                    lVar7 = func_0x00101ce0(0,uStack544,1);
                    if (lVar7 != -1) {
                      bVar33 = true;
                      uStack544 = uVar27;
                    }
                  }
                  puStack536 = &UNK_00104d83;
                  uVar31 = safe_read(0,puStack496,uStack488);
                  auVar35 = CONCAT88(uStack488,uVar31);
                  if (uVar31 == 0xffffffffffffffff) {
                    puStack536 = &UNK_00104e99;
                    uStack560 = quotearg_n_style_colon(0,3,infile);
                    puStack536 = &UNK_00104ea1;
                    puVar20 = (uint *)func_0x00101b70();
                    uVar28 = 1;
                    puStack536 = &UNK_00104eb9;
                    func_0x00101ea0(1,(ulong)*puVar20,&UNK_00108ddc,uStack560);
                    puVar21 = program_name;
                    uVar11 = 5;
                    uStack576 = *(undefined8 *)(in_FS_OFFSET + 0x28);
                    puStack536 = (undefined *)uVar31;
                    if ((int)uVar28 == 0) goto code_r0x00104f1d;
                    uVar11 = func_0x00101c40(0,&UNK_00108ff8,5);
                    func_0x00101f40(stderr,1,uVar11,puVar21);
                    goto code_r0x00104f16;
                  }
                  bStack497 = uVar31 == 0;
                  in_R8 = puStack520;
                  if (uStack544 <= uVar31) break;
code_r0x00104da6:
                  uStack488 = SUB168(auVar35 >> 0x40,0);
                  if (uVar31 != 0) {
                    puVar29 = puStack496;
                    if ((byte)((byte)uStack552 | bVar33) == 0) {
                      uVar28 = 0;
                      uStack552 = 0;
                      bVar33 = in_R8 == puVar26;
                      if (bVar33) {
                        return (long *)0;
                      }
                    }
                    else {
code_r0x00104de0:
                      puStack536 = &UNK_00104df3;
                      puStack520 = in_R8;
                      uVar5 = cwrite((ulong)bVar33,puVar29,uVar31);
                      uStack552 = (ulong)uVar5;
                      uVar28 = (ulong)bVar33;
                      puVar26 = (undefined8 *)((long)puVar26 + uVar28);
                      bVar33 = (bool)(puStack520 == puVar26 & ((byte)uVar5 ^ 1));
                      in_R8 = puStack520;
                      if (bVar33 != false) {
                        return (long *)uVar28;
                      }
                    }
                    auVar35 = CONCAT88(uStack488,uVar28);
                    uStack544 = uStack544 - uVar31;
                  }
                }
              } while( true );
            }
          }
          puStack432 = &UNK_00104bee;
          lVar7 = full_write((ulong)output_desc,lStack464,extraout_RDX_01);
          if (lVar7 != extraout_RDX_01) {
            puStack432 = &UNK_00104bf8;
            puVar20 = (uint *)func_0x00101b70();
            if ((filter_command != (undefined8 *)0x0) && (*puVar20 == 0x20)) {
              return (long *)0;
            }
            puStack432 = &UNK_00104c1f;
            uVar11 = quotearg_n_style_colon(0,3,outfile);
            puStack432 = &UNK_00104c37;
            func_0x00101ea0(1,(ulong)*puVar20,&UNK_00108ddc,uVar11);
          }
          return (long *)1;
        }
        filter_pid = 0;
        *(uint *)(puStack448 + 3) = uVar5;
      }
      return puStack320;
    }
    if (n_open_pipes != (undefined1 *)0x0) {
      puVar12 = (undefined1 *)0x0;
      do {
        iVar4 = func_0x00101d20();
        if (iVar4 != 0) goto code_r0x001044d0;
        puVar12 = puVar12 + 1;
      } while (puVar12 < n_open_pipes);
    }
    uVar5 = func_0x00101d20();
    puStack256 = (undefined8 *)(ulong)uVar5;
    puVar20 = (uint *)func_0x00101b70();
    if (uVar5 != 0) {
code_r0x0010459a:
      uVar11 = func_0x00101c40(0,&UNK_00108b65,5);
      func_0x00101ea0(1,(ulong)*puVar20,uVar11);
code_r0x001045be:
      uVar11 = func_0x00101c40(0,&UNK_00108b79,5);
      func_0x00101ea0(1,(ulong)*puVar20,uVar11);
code_r0x001045e2:
      puStack264 = (undefined *)quotearg_style(4,puStack256);
      uVar11 = func_0x00101c40(0,&UNK_00108af2,5);
      puVar20 = (uint *)func_0x00101b70();
      func_0x00101ea0(1,(ulong)*puVar20,uVar11,puStack264);
code_r0x00104621:
      uVar11 = func_0x00101c40(0,&UNK_00108bb9,5);
      puVar20 = (uint *)func_0x00101b70();
      func_0x00101ea0(1,(ulong)*puVar20,uVar11);
      goto code_r0x0010464d;
    }
    if (uStack224 != 0) {
      iVar4 = func_0x00101ca0((ulong)uStack224,0);
      if (iVar4 == 0) {
        iVar4 = func_0x00101d20((ulong)uStack224);
        if (iVar4 == 0) goto code_r0x0010426f;
        uVar11 = func_0x00101c40(0,&UNK_00108b8b,5);
        puVar26 = (undefined8 *)0x1;
        func_0x00101ea0(1,(ulong)*puVar20,uVar11);
        goto code_r0x00104410;
      }
      goto code_r0x001045be;
    }
code_r0x0010426f:
    func_0x00101b40(2,oldblocked,0);
    puStack256 = filter_command;
    uVar11 = last_component(puStack264);
    func_0x00101f70(puStack264,uVar11,&UNK_00108b9e,puStack256,0);
    uVar11 = func_0x00101c40(0,&UNK_00108f50,5);
    puVar26 = (undefined8 *)0x1;
    in_R8 = puStack256;
    func_0x00101ea0(1,(ulong)*puVar20,uVar11,puStack264);
code_r0x001042d8:
    if (verbose != '\0') {
code_r0x00104410:
      uVar11 = quotearg_style(4,puVar26);
      uVar14 = func_0x00101c40(0,&UNK_00108ae0,5);
      func_0x00101f40(stdout,1,uVar14,uVar11);
    }
    uVar5 = open_safer(puStack256,0x41,0x1b6);
    if ((int)uVar5 < 0) {
code_r0x001041d0:
      while( true ) {
        puVar15 = (undefined1 *)(uStack72 ^ *(ulong *)(in_FS_OFFSET + 0x28));
        if (puVar15 == (undefined1 *)0x0) break;
        while( true ) {
          func_0x00101c70();
code_r0x00104501:
          uVar11 = func_0x00101c40(0,&UNK_00108f28,5);
          puVar20 = (uint *)func_0x00101b70();
          func_0x00101ea0(1,(ulong)*puVar20,uVar11);
code_r0x0010452d:
          uVar11 = func_0x00101c40(0,&UNK_00108b3c,5);
          puVar20 = (uint *)func_0x00101b70();
          lVar7 = func_0x00101ea0(1,(ulong)*puVar20,uVar11);
code_r0x00104559:
          bVar33 = true;
code_r0x001044c0:
          if ((-1 < lVar7) && (!bVar33)) break;
code_r0x001044ca:
          xalloc_die();
code_r0x001044d0:
          uVar11 = func_0x00101c40(0,&UNK_00108b52,5);
          puVar20 = (uint *)func_0x00101b70();
          func_0x00101ea0(1,(ulong)*puVar20,uVar11);
        }
code_r0x00104477:
        open_pipes_alloc = puVar15;
        open_pipes = (int *)xrealloc();
code_r0x001041ba:
        puVar20 = (uint *)(open_pipes + (long)n_open_pipes);
        n_open_pipes = n_open_pipes + 1;
        *puVar20 = uStack220;
        uVar5 = uStack220;
      }
      return (long *)(ulong)uVar5;
    }
    iVar4 = func_0x00101e20(1,(ulong)uVar5,&uStack224);
    if (iVar4 != 0) goto code_r0x001045e2;
    if ((in_stat_buf._8_8_ == lStack216) && (in_stat_buf._0_8_ == CONCAT44(uStack220,uStack224))) {
      puVar20 = (uint *)quotearg_style(4,puStack256);
      uVar11 = func_0x00101c40(0,&UNK_00108f00,5);
      func_0x00101ea0(1,0,uVar11,puVar20);
      goto code_r0x0010459a;
    }
    iVar4 = func_0x00101cd0((ulong)uVar5,0);
    if ((iVar4 == 0) || ((uStack200 & 0xf000) != 0x8000)) goto code_r0x001041d0;
    puStack264 = (undefined *)quotearg_n_style_colon(0,3,puStack256);
    uVar11 = func_0x00101c40(0,&UNK_00108b04,5);
    puVar20 = (uint *)func_0x00101b70();
    func_0x00101ea0(1,(ulong)*puVar20,uVar11,puStack264);
code_r0x001043a0:
    puVar15 = (undefined1 *)quotearg_n_style_colon(0,3,puStack256);
    uVar11 = func_0x00101c40(0,&UNK_00108b24,5);
    func_0x00101f40(stdout,1,uVar11);
  } while( true );
code_r0x00104f16:
  func_0x00101f20(uVar28 & 0xffffffff);
  uVar11 = extraout_RDX_02;
code_r0x00104f1d:
  uVar11 = func_0x00101c40(0,&UNK_00109020,uVar11);
  func_0x00101e80(1,uVar11,puVar21);
  uVar11 = stdout;
  uVar14 = func_0x00101c40(0,&UNK_00109048,5);
  func_0x00101d80(uVar14,uVar11);
  uVar11 = stdout;
  uVar14 = func_0x00101c40(0,&UNK_001090b8,5);
  func_0x00101d80(uVar14,uVar11);
  uVar11 = stdout;
  uVar14 = func_0x00101c40(0,&UNK_001090f0,5);
  func_0x00101d80(uVar14,uVar11);
  uVar11 = func_0x00101c40(0,&UNK_00109140,5);
  func_0x00101f40(stdout,1,uVar11,2);
  uVar11 = stdout;
  uVar14 = func_0x00101c40(0,&UNK_00109588,5);
  func_0x00101d80(uVar14,uVar11);
  uVar11 = stdout;
  uVar14 = func_0x00101c40(0,&UNK_00109600,5);
  func_0x00101d80(uVar14,uVar11);
  uVar11 = stdout;
  uVar14 = func_0x00101c40(0,&UNK_00109630,5);
  func_0x00101d80(uVar14,uVar11);
  uVar11 = stdout;
  uVar14 = func_0x00101c40(0,&UNK_00109668,5);
  func_0x00101d80(uVar14,uVar11);
  uVar11 = stdout;
  uVar14 = func_0x00101c40(0,&UNK_00109740,5);
  func_0x00101d80(uVar14,uVar11);
  uStack600 = 0;
  uStack592 = 0;
  pbStack696 = &UNK_00108bf9;
  apbStack680[4] = &UNK_00108c3a;
  puStack688 = &UNK_00108bfb;
  puStack632 = &UNK_00108c44;
  apbStack680[0] = &UNK_00108c73;
  puStack616 = &UNK_00108c4e;
  apbStack680[1] = &UNK_00108c0b;
  apbStack680[2] = &UNK_00108c21;
  apbStack680[3] = &UNK_00108c2b;
  puStack640 = &UNK_00108c2b;
  puStack624 = &UNK_00108c2b;
  puStack608 = &UNK_00108c2b;
  ppbVar18 = &pbStack696;
  do {
    ppbVar18 = ppbVar18;
    ppbVar18 = ppbVar18 + 2;
    pbVar30 = *ppbVar18;
    bVar33 = false;
    bVar32 = pbVar30 == (byte *)0x0;
    if (bVar32) break;
    lVar7 = 6;
    pbVar24 = &UNK_00108bf3;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar33 = *pbVar24 < *pbVar30;
      bVar32 = *pbVar24 == *pbVar30;
      pbVar24 = pbVar24 + (ulong)bVar34 * -2 + 1;
      pbVar30 = pbVar30 + (ulong)bVar34 * -2 + 1;
    } while (bVar32);
  } while ((!bVar33 && !bVar32) != bVar33);
  pbVar30 = ppbVar18[3];
  if (pbVar30 == (byte *)0x0) {
    uVar11 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar11,&UNK_00108c6f,&UNK_00109898);
    lVar7 = func_0x00101e70(5,0);
    if ((lVar7 != 0) && (iVar4 = func_0x00101b80(lVar7,&UNK_00108c7d,3), iVar4 != 0)) {
      pbVar30 = &UNK_00108bf3;
      goto code_r0x001052c0;
    }
    pbVar30 = &UNK_00108bf3;
    puVar21 = &UNK_00108c15;
    uVar11 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar11,&UNK_00109898,&UNK_00108bf3);
  }
  else {
    uVar11 = func_0x00101c40(0,&UNK_00108c58,5);
    func_0x00101e80(1,uVar11,&UNK_00108c6f,&UNK_00109898);
    lVar7 = func_0x00101e70(5,0);
    if ((lVar7 != 0) && (iVar4 = func_0x00101b80(lVar7,&UNK_00108c7d,3), iVar4 != 0)) {
code_r0x001052c0:
      uVar11 = stdout;
      uVar14 = func_0x00101c40(0,&UNK_001098c0,5);
      func_0x00101d80(uVar14,uVar11);
    }
    uVar11 = func_0x00101c40(0,&UNK_00108c81,5);
    func_0x00101e80(1,uVar11,&UNK_00109898,&UNK_00108bf3);
    puVar21 = &UNK_0010a141;
    if (pbVar30 == &UNK_00108bf3) {
      puVar21 = &UNK_00108c15;
    }
  }
  uVar11 = func_0x00101c40(0,&UNK_00109908,5);
  func_0x00101e80(1,uVar11,pbVar30,puVar21);
  goto code_r0x00104f16;
}

