
/* WARNING: Could not reconcile some variable overlaps */

ulong main(uint param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char **ppcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  char **ppcVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  char **ppcVar18;
  char **ppcVar19;
  char *pcVar20;
  char *pcVar21;
  char **ppcVar22;
  undefined1 *puVar23;
  char **ppcVar24;
  uint uVar25;
  byte bVar26;
  ulong uVar27;
  byte *pbVar28;
  char *unaff_R13;
  char **unaff_R14;
  char **unaff_R15;
  byte *pbVar29;
  long in_FS_OFFSET;
  bool bVar30;
  undefined auVar31 [16];
  undefined *puVar32;
  char **ppcStack272;
  char **ppcStack264;
  undefined8 *puStack256;
  undefined8 *puStack240;
  undefined8 uStack224;
  code *pcStack216;
  undefined4 uStack208;
  undefined4 uStack204;
  undefined4 uStack200;
  undefined4 uStack196;
  uint uStack192;
  undefined4 uStack188;
  undefined4 uStack184;
  undefined4 uStack180;
  undefined4 uStack176;
  undefined4 uStack172;
  undefined4 uStack168;
  undefined4 uStack164;
  undefined4 uStack160;
  undefined4 uStack156;
  undefined4 uStack152;
  undefined4 uStack148;
  undefined4 uStack144;
  undefined4 uStack140;
  undefined4 uStack136;
  undefined4 uStack132;
  undefined4 uStack128;
  undefined4 uStack124;
  undefined4 uStack120;
  undefined4 uStack116;
  undefined4 uStack112;
  undefined4 uStack108;
  undefined4 uStack104;
  undefined4 uStack100;
  undefined4 uStack96;
  undefined4 uStack92;
  undefined4 uStack88;
  undefined4 uStack84;
  undefined4 uStack80;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = func_0x00101a20(&UNK_0010c83c);
  func_0x00101cd0(caught_signals);
  if (lVar6 == 0) {
    func_0x00101e60(caught_signals,10);
  }
  func_0x00101ae0(2,0,&pcStack216);
  if (pcStack216 != (code *)0x1) {
    func_0x00101e60(caught_signals,2);
  }
  uStack208 = SUB164(caught_signals._0_16_,0);
  uStack204 = SUB164(caught_signals._0_16_ >> 0x20,0);
  uStack200 = SUB164(caught_signals._0_16_ >> 0x40,0);
  uStack196 = SUB164(caught_signals._0_16_ >> 0x60,0);
  uStack192 = SUB164(caught_signals._16_16_,0);
  uStack188 = SUB164(caught_signals._16_16_ >> 0x20,0);
  uStack184 = SUB164(caught_signals._16_16_ >> 0x40,0);
  uStack180 = SUB164(caught_signals._16_16_ >> 0x60,0);
  uStack176 = SUB164(caught_signals._32_16_,0);
  uStack172 = SUB164(caught_signals._32_16_ >> 0x20,0);
  uStack168 = SUB164(caught_signals._32_16_ >> 0x40,0);
  uStack164 = SUB164(caught_signals._32_16_ >> 0x60,0);
  uStack160 = SUB164(caught_signals._48_16_,0);
  uStack156 = SUB164(caught_signals._48_16_ >> 0x20,0);
  uStack152 = SUB164(caught_signals._48_16_ >> 0x40,0);
  uStack148 = SUB164(caught_signals._48_16_ >> 0x60,0);
  uStack144 = SUB164(caught_signals._64_16_,0);
  uStack140 = SUB164(caught_signals._64_16_ >> 0x20,0);
  uStack136 = SUB164(caught_signals._64_16_ >> 0x40,0);
  uStack132 = SUB164(caught_signals._64_16_ >> 0x60,0);
  uStack128 = SUB164(caught_signals._80_16_,0);
  uStack124 = SUB164(caught_signals._80_16_ >> 0x20,0);
  uStack120 = SUB164(caught_signals._80_16_ >> 0x40,0);
  uStack116 = SUB164(caught_signals._80_16_ >> 0x60,0);
  uStack112 = SUB164(caught_signals._96_16_,0);
  uStack108 = SUB164(caught_signals._96_16_ >> 0x20,0);
  uStack104 = SUB164(caught_signals._96_16_ >> 0x40,0);
  uStack100 = SUB164(caught_signals._96_16_ >> 0x60,0);
  uStack96 = SUB164(caught_signals._112_16_,0);
  uStack92 = SUB164(caught_signals._112_16_ >> 0x20,0);
  uStack88 = SUB164(caught_signals._112_16_ >> 0x40,0);
  uStack84 = SUB164(caught_signals._112_16_ >> 0x60,0);
  iVar4 = func_0x00101e00(SUB168(caught_signals._112_16_,0),caught_signals,10);
  if (iVar4 != 0) {
    uStack80 = 0;
    pcStack216 = siginfo_handler;
    func_0x00101ae0(10,&pcStack216,0);
  }
  iVar4 = func_0x00101e00(caught_signals,2);
  if (iVar4 != 0) {
    uStack80 = 0xc0000000;
    pcStack216 = interrupt_handler;
    func_0x00101ae0(2,&pcStack216,0);
  }
  puVar23 = trans_table;
  set_program_name(*param_2);
  func_0x00101d60(6,&UNK_0010e7a1);
  func_0x00101b50(&UNK_0010c776,&UNK_0010c84c);
  func_0x00101b30(&UNK_0010c776);
  atexit(maybe_close_stdout);
  puVar32 = &UNK_0010206f;
  iVar4 = func_0x00101df0();
  page_size = (long)iVar4;
  puVar15 = Version;
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_0010c6f4,&UNK_0010c776,Version,1,usage,&UNK_0010c880,
             &UNK_0010c870,&UNK_0010c864,0,puVar32);
  close_stdout_required = 0;
  lVar6 = 0;
  do {
    trans_table[lVar6] = (char)lVar6;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x100);
  if ((int)param_1 <= (int)optind) {
    ppcStack264 = (char **)0xffffffffffffffff;
    ppcStack272 = (char **)0x0;
    ppcVar8 = (char **)0x0;
    goto code_r0x00102a47;
  }
  ppcStack272 = (char **)0x0;
  unaff_R14 = (char **)(param_2 + (long)(int)optind);
  ppcVar8 = (char **)0x0;
  ppcStack264 = (char **)0xffffffffffffffff;
  unaff_R15 = (char **)0x0;
  ppcVar24 = (char **)(param_2 + (ulong)(~optind + param_1) + (long)(int)optind + 1);
  puStack256 = &uStack224;
  do {
    unaff_R13 = *unaff_R14;
    lVar6 = func_0x00101bd0(unaff_R13,0x3d);
    ppcVar22 = ppcVar8;
    if (lVar6 == 0) goto code_r0x00103921;
    puVar15 = (undefined8 *)(lVar6 + 1);
    pcVar20 = "if";
    cVar3 = 'i';
    pcVar9 = unaff_R13;
    do {
      pcVar21 = pcVar9 + 1;
      pcVar20 = pcVar20 + 1;
      if (*pcVar9 != cVar3) goto code_r0x001028b0;
      cVar3 = *pcVar20;
      pcVar9 = pcVar21;
    } while (cVar3 != '\0');
    cVar3 = *pcVar21;
    puVar7 = output_file;
    puVar1 = puVar15;
    if ((cVar3 != '=') && (cVar3 != '\0')) {
code_r0x001028b0:
      pcVar20 = "of";
      cVar3 = 'o';
      pcVar9 = unaff_R13;
      do {
        pcVar21 = pcVar9 + 1;
        pcVar20 = pcVar20 + 1;
        if (*pcVar9 != cVar3) goto code_r0x001028f0;
        cVar3 = *pcVar20;
        pcVar9 = pcVar21;
      } while (cVar3 != '\0');
      cVar3 = *pcVar21;
      puVar7 = puVar15;
      puVar1 = input_file;
      if ((cVar3 != '=') && (cVar3 != '\0')) {
code_r0x001028f0:
        pcVar20 = "conv";
        cVar3 = 'c';
        pcVar9 = unaff_R13;
        do {
          pcVar21 = pcVar9 + 1;
          pcVar20 = pcVar20 + 1;
          if (*pcVar9 != cVar3) goto code_r0x00102941;
          cVar3 = *pcVar20;
          pcVar9 = pcVar21;
        } while (cVar3 != '\0');
        cVar3 = *pcVar21;
        if ((cVar3 == '\0') || (cVar3 == '=')) {
          uVar25 = parse_symbols(puVar15,conversions,0);
          conversions_mask = conversions_mask | uVar25;
          puVar7 = output_file;
          puVar1 = input_file;
        }
        else {
code_r0x00102941:
          pcVar20 = "iflag";
          cVar3 = 'i';
          pcVar9 = unaff_R13;
          do {
            pcVar21 = pcVar9 + 1;
            pcVar20 = pcVar20 + 1;
            if (*pcVar9 != cVar3) goto code_r0x00102992;
            cVar3 = *pcVar20;
            pcVar9 = pcVar21;
          } while (cVar3 != '\0');
          cVar3 = *pcVar21;
          if ((cVar3 == '=') || (cVar3 == '\0')) {
            uVar25 = parse_symbols(puVar15,flags,0);
            input_flags = input_flags | uVar25;
            puVar7 = output_file;
            puVar1 = input_file;
          }
          else {
code_r0x00102992:
            pcVar20 = "oflag";
            cVar3 = 'o';
            pcVar9 = unaff_R13;
            do {
              pcVar21 = pcVar9 + 1;
              pcVar20 = pcVar20 + 1;
              if (*pcVar9 != cVar3) goto code_r0x00102b55;
              cVar3 = *pcVar20;
              pcVar9 = pcVar21;
            } while (cVar3 != '\0');
            cVar3 = *pcVar21;
            if ((cVar3 == '=') || (cVar3 == '\0')) {
              uVar25 = parse_symbols(puVar15,flags,0);
              output_flags = output_flags | uVar25;
              puVar7 = output_file;
              puVar1 = input_file;
            }
            else {
code_r0x00102b55:
              pcVar20 = "status";
              cVar3 = 's';
              pcVar9 = unaff_R13;
              do {
                pcVar21 = pcVar9 + 1;
                pcVar20 = pcVar20 + 1;
                if (*pcVar9 != cVar3) goto code_r0x001033b0;
                cVar3 = *pcVar20;
                pcVar9 = pcVar21;
              } while (cVar3 != '\0');
              cVar3 = *pcVar21;
              if ((cVar3 != '\0') && (cVar3 != '=')) {
code_r0x001033b0:
                uStack224 = (char **)((ulong)uStack224 & 0xffffffff00000000);
                ppcVar18 = (char **)parse_integer(puVar15,puStack256);
                cVar3 = 'i';
                pcVar20 = "ibs";
                pcVar9 = unaff_R13;
                break;
              }
              status_level = parse_symbols(puVar15,statuses,1);
              puVar7 = output_file;
              puVar1 = input_file;
            }
          }
        }
      }
    }
    while (input_file = puVar1, output_file = puVar7, unaff_R14 = unaff_R14 + 1,
          ppcVar24 == unaff_R14) {
      ppcVar24 = unaff_R15;
      ppcVar22 = unaff_R15;
      if (unaff_R15 == (char **)0x0) {
code_r0x00102a47:
        conversions_mask = conversions_mask | 0x800;
        if (input_blocksize == (char **)0x0) {
          input_blocksize = (char **)0x200;
        }
        ppcVar24 = output_blocksize;
        ppcVar22 = input_blocksize;
        if (output_blocksize == (char **)0x0) {
          output_blocksize = (char **)0x200;
          ppcVar24 = output_blocksize;
        }
      }
      input_blocksize = ppcVar22;
      output_blocksize = ppcVar24;
      if (conversion_blocksize == (char **)0x0) {
        conversions_mask = conversions_mask & 0xffffffe7;
      }
      uVar25 = conversions_mask;
      if ((input_flags & 0x101000) != 0) {
        input_flags = input_flags | 0x101000;
      }
      uVar27 = (ulong)output_flags;
      if ((output_flags & 1) != 0) goto code_r0x00103b83;
      if ((input_flags & 0x10) != 0) {
        uVar13 = quote(&UNK_0010c8fc);
        puVar32 = &UNK_0010c8b6;
        goto code_r0x00103b9e;
      }
      if ((output_flags & 0xc) != 0) goto code_r0x00103c30;
      if ((input_flags & 8) == 0) {
        if (ppcStack272 != (char **)0x0) {
          skip_records = ppcStack272;
        }
      }
      else {
        if (ppcStack272 != (char **)0x0) {
          skip_records = (char **)((ulong)ppcStack272 / (ulong)input_blocksize);
          skip_bytes = (ulong)ppcStack272 % (ulong)input_blocksize;
        }
      }
      if ((input_flags & 4) == 0) {
        if (ppcStack264 != (char **)0xffffffffffffffff) {
          max_records = ppcStack264;
        }
      }
      else {
        if (ppcStack264 != (char **)0xffffffffffffffff) {
          max_records = (char **)((ulong)ppcStack264 / (ulong)input_blocksize);
          max_bytes = (ulong)ppcStack264 % (ulong)input_blocksize;
        }
      }
      if ((output_flags & 0x10) == 0) {
        if (ppcVar8 != (char **)0x0) {
          seek_records = ppcVar8;
        }
      }
      else {
        if (ppcVar8 != (char **)0x0) {
          seek_bytes = (char **)((ulong)ppcVar8 % (ulong)output_blocksize);
          seek_records = (char **)((ulong)ppcVar8 / (ulong)output_blocksize);
        }
      }
      ppcVar24 = (char **)(ulong)conversions_mask;
      if ((conversions_mask & 0x800) == 0) {
        if ((input_flags & 1) == 0) {
          if (((skip_records == (char **)0x0) && (0xfffffffffffffffd < (long)max_records - 1U)) &&
             (((output_flags | input_flags) & 0x4000) == 0)) {
            warn_partial_read = 0;
            iread_fnc = iread;
          }
          else {
            warn_partial_read = 1;
            iread_fnc = iread;
          }
        }
        else {
          iread_fnc = iread_fullblock;
          warn_partial_read = 0;
        }
      }
      else {
        iread_fnc = iread;
        warn_partial_read = 0;
        if ((input_flags & 1) != 0) {
          iread_fnc = iread_fullblock;
        }
      }
      uVar5 = input_flags & 0xfffffffe;
      if (((conversions_mask & 7) - 1 & conversions_mask & 7) != 0) goto code_r0x00103c0c;
      if (((conversions_mask & 0x18) - 1 & conversions_mask & 0x18) == 0) {
        if (((conversions_mask & 0x60) - 1 & conversions_mask & 0x60) != 0) goto code_r0x00103a5b;
        if (((conversions_mask & 0x3000) - 1 & conversions_mask & 0x3000) != 0) {
          input_flags = uVar5;
          uVar13 = func_0x00101b60(0,&UNK_0010da00,5);
          nl_error(1,0,uVar13);
          uVar5 = input_flags;
code_r0x00103ab5:
          input_flags = uVar5;
          uVar13 = func_0x00101b60(0,&UNK_0010da20,5);
          nl_error(1,0,uVar13);
code_r0x00103ad9:
          uVar13 = quotearg_style(4,output_file);
          uVar14 = func_0x00101b60(0,&UNK_0010c916,5);
          nl_error(1,(ulong)*(uint *)ppcStack264,uVar14,uVar13);
code_r0x00103b19:
          uVar13 = func_0x00101b60(0,&UNK_0010da48,5);
          nl_error(1,0,uVar13,ppcVar24,unaff_R14);
code_r0x00103b43:
          uVar13 = quotearg_style(4,output_file);
          uVar14 = func_0x00101b60(0,&UNK_0010c7a6,5);
          nl_error(1,(ulong)*(uint *)ppcStack264,uVar14,uVar13);
code_r0x00103b83:
          uVar13 = quote(&UNK_0010c8f2);
          puVar32 = &UNK_0010c8c9;
          goto code_r0x00103b9e;
        }
        if ((((input_flags & 0x4002) - 1 & input_flags & 0x4002) != 0) ||
           (puStack240 = (undefined8 *)0x0,
           ((output_flags & 0x4002) - 1 & output_flags & 0x4002) != 0)) goto code_r0x00103ab5;
        if ((input_flags & 2) != 0) {
          i_nocache = 1;
          i_nocache_eof = max_records == (char **)0x0 && max_bytes == 0;
          uVar5 = input_flags & 0xfffffffc;
        }
        input_flags = uVar5;
        if ((output_flags & 2) != 0) {
          o_nocache = '\x01';
          o_nocache_eof = max_records == (char **)0x0 && max_bytes == 0;
          output_flags = output_flags & 0xfffffffd;
        }
        if ((conversions_mask & 1) != 0) {
          puVar15 = (undefined8 *)trans_table;
          do {
            puVar7 = (undefined8 *)((long)puVar15 + 1);
            *(undefined1 *)puVar15 = ebcdic_to_ascii[*(byte *)puVar15];
            puVar15 = puVar7;
          } while (puVar7 != &iread_fnc);
          translation_needed = '\x01';
        }
        if ((uVar25 & 0x40) == 0) {
          if ((uVar25 & 0x20) != 0) {
            plVar16 = (long *)func_0x00101e70();
            lVar6 = *plVar16;
            puVar15 = (undefined8 *)trans_table;
            do {
              puVar7 = (undefined8 *)((long)puVar15 + 1);
              *(char *)puVar15 = (char)*(undefined4 *)(lVar6 + (ulong)*(byte *)puVar15 * 4);
              puVar15 = puVar7;
            } while (puVar7 != &iread_fnc);
            goto code_r0x001023ea;
          }
        }
        else {
          plVar16 = (long *)func_0x00101a10();
          lVar6 = *plVar16;
          puVar15 = (undefined8 *)trans_table;
          do {
            puVar7 = (undefined8 *)((long)puVar15 + 1);
            *(char *)puVar15 = (char)*(undefined4 *)(lVar6 + (ulong)*(byte *)puVar15 * 4);
            puVar15 = puVar7;
          } while (puVar7 != &iread_fnc);
code_r0x001023ea:
          translation_needed = '\x01';
        }
        if ((uVar25 & 2) == 0) {
          if ((uVar25 & 4) != 0) {
            puVar15 = (undefined8 *)trans_table;
            do {
              puVar7 = (undefined8 *)((long)puVar15 + 1);
              *(undefined1 *)puVar15 = ascii_to_ibm[*(byte *)puVar15];
              puVar15 = puVar7;
            } while (puVar7 != &iread_fnc);
            goto code_r0x00102423;
          }
        }
        else {
          puVar15 = (undefined8 *)trans_table;
          do {
            puVar7 = (undefined8 *)((long)puVar15 + 1);
            *(undefined1 *)puVar15 = ascii_to_ebcdic[*(byte *)puVar15];
            puVar15 = puVar7;
          } while (puVar7 != &iread_fnc);
code_r0x00102423:
          translation_needed = '\x01';
          newline_character = 0x25;
          space_character = 0x40;
        }
        puVar15 = input_file;
        uVar25 = input_flags;
        ppcStack264 = (char **)func_0x00101a80();
        if (puVar15 == (undefined8 *)0x0) {
          input_file = (undefined8 *)func_0x00101b60(0,&UNK_0010c907,5);
          set_fd_flags(0,(ulong)uVar25,input_file);
        }
        else {
          iVar4 = ifd_reopen(0,puVar15,(ulong)uVar25);
          if (iVar4 < 0) goto code_r0x00103bcc;
        }
        input_offset = func_0x00101c10(0,0,1);
        uVar25 = output_flags;
        input_seekable = ~(byte)(input_offset >> 0x38) >> 7;
        if ((long)input_offset < 0) {
          input_offset = 0;
        }
        input_seek_errno = *(int *)ppcStack264;
        if (output_file == (undefined8 *)0x0) {
          output_file = (undefined8 *)func_0x00101b60(0,&UNK_0010c928,5);
          set_fd_flags(1,(ulong)uVar25,output_file);
          goto code_r0x00102573;
        }
        uVar25 = (int)conversions_mask >> 6 & 0x80U | output_flags |
                 (uint)((conversions_mask & 0x1000) == 0) << 6;
        if (seek_records == (char **)0x0) {
          uVar25 = uVar25 | -(uint)((conversions_mask & 0x200) == 0) & 0x200;
code_r0x00102505:
          ppcVar24 = (char **)(ulong)uVar25;
          iVar4 = ifd_reopen(1,output_file,(ulong)(uVar25 | 1));
          if (-1 < iVar4) goto code_r0x00102521;
          goto code_r0x00103ad9;
        }
        iVar4 = ifd_reopen(1,output_file,(ulong)(uVar25 | 2));
        if (iVar4 < 0) goto code_r0x00102505;
code_r0x00102521:
        if ((seek_records == (char **)0x0) || ((conversions_mask & 0x200) != 0))
        goto code_r0x00102573;
        ppcVar8 = (char **)((long)seek_records * (long)output_blocksize + (long)seek_bytes);
        ppcVar24 = seek_records;
        unaff_R14 = output_blocksize;
        if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / ZEXT816(output_blocksize),0)
            < seek_records) goto code_r0x00103b19;
        iVar4 = iftruncate_constprop_6(ppcVar8);
        if (iVar4 != 0) {
          uVar25 = *(uint *)ppcStack264;
          iVar4 = func_0x00101d30(1,1,&pcStack216);
          if (iVar4 == 0) {
            if (((uStack192 & 0xf000) - 0x4000 & 0xffffb000) == 0) {
              puVar23 = (undefined1 *)quotearg_style(4,output_file);
              uVar13 = func_0x00101b60(0,&UNK_0010da98,5);
              nl_error(1,(ulong)uVar25,uVar13,ppcVar8,puVar23);
              goto code_r0x00103547;
            }
            goto code_r0x00102573;
          }
          goto code_r0x00103b43;
        }
code_r0x00102573:
        start_time = gethrxtime();
        ppcVar8 = input_blocksize;
        unaff_R14 = skip_records;
        uVar17 = skip_bytes;
        uVar27 = input_offset;
        next_time = start_time + 1000000000;
        if ((((skip_records != (char **)0x0) || (skip_bytes != 0)) &&
            ((lVar6 = skip(0,input_file,skip_records,input_blocksize,&skip_bytes),
             unaff_R15 = ppcVar8, lVar6 != 0 ||
             (((long)unaff_R14 * (long)ppcVar8 + uVar27 + uVar17 != input_offset &&
              (input_offset_overflow != 1)))))) && (status_level != 1)) {
          quotearg_n_style_colon(0,3,input_file);
          uVar13 = func_0x00101b60(0,&UNK_0010dad0,5);
          nl_error(0,0,uVar13);
        }
        if ((seek_records != (char **)0x0) || (seek_bytes != (char **)0x0)) {
          puVar15 = &uStack224;
          uStack224 = seek_bytes;
          ppcVar22 = (char **)skip(1);
          if (ppcVar22 == (char **)0x0) {
            if (uStack224 != (char **)0x0) {
              func_0x00101c40(obuf,0);
              goto code_r0x0010268d;
            }
          }
          else {
            func_0x00101c40(obuf,0,output_blocksize);
            do {
              ppcVar24 = output_blocksize;
              ppcVar8 = (char **)iwrite_constprop_7(obuf);
              if (ppcVar24 != ppcVar8) goto code_r0x0010395a;
              ppcVar22 = (char **)((long)ppcVar22 + -1);
            } while (ppcVar22 != (char **)0x0);
            if (uStack224 != (char **)0x0) {
code_r0x0010268d:
              ppcVar24 = uStack224;
              ppcVar8 = (char **)iwrite_constprop_7(obuf);
              if (ppcVar24 != ppcVar8) {
code_r0x0010395a:
                puVar23 = (undefined1 *)quotearg_style(4,output_file);
                uVar13 = func_0x00101b60(0,&UNK_0010c7e7,5);
                nl_error(0,(ulong)*(uint *)ppcStack264,uVar13);
                finish_up();
                auVar31 = func_0x00101e10();
                ppcVar8 = ppcVar22;
code_r0x001039a6:
                ppcVar18 = SUB168(auVar31,0);
                cVar3 = *SUB168(auVar31 >> 0x40,0);
                if ((cVar3 == '\0') || (ppcVar22 = ppcVar8, cVar3 == '=')) {
                  ppcVar22 = (char **)((page_size + 2) * -2);
                  unaff_R15 = ppcVar18;
                  if ((char **)0x7fffffffffffffff < ppcVar22) {
                    ppcVar22 = (char **)0x7fffffffffffffff;
                  }
code_r0x001035e1:
                  if (ppcVar18 != (char **)0x0) {
                    ppcVar19 = ppcStack272;
                    ppcVar2 = ppcStack264;
                    if (ppcVar22 < ppcVar18) {
                      uStack224 = (char **)CONCAT44(uStack224._4_4_,1);
                      goto code_r0x001035fb;
                    }
                    goto code_r0x001038a2;
                  }
code_r0x001037d2:
                  uStack224 = (char **)CONCAT44(uStack224._4_4_,4);
                  goto code_r0x001035fb;
                }
code_r0x001039b2:
                cVar3 = 'c';
                pcVar20 = "cbs";
                pcVar9 = unaff_R13;
                do {
                  pcVar21 = pcVar9 + 1;
                  pcVar20 = pcVar20 + 1;
                  ppcVar8 = ppcVar22;
                  ppcVar2 = ppcStack264;
                  if (*pcVar9 != cVar3) goto code_r0x001039dd;
                  cVar3 = *pcVar20;
                  pcVar9 = pcVar21;
                } while (cVar3 != '\0');
                cVar3 = *pcVar21;
                if ((cVar3 == '\0') || (cVar3 == '=')) {
                  conversion_blocksize = ppcVar18;
                  ppcVar19 = ppcStack272;
                  if (ppcVar18 == (char **)0x0) goto code_r0x001037d2;
                }
                else {
code_r0x001039dd:
                  cVar3 = 's';
                  pcVar20 = "skip";
                  pcVar9 = unaff_R13;
                  do {
                    pcVar21 = pcVar9 + 1;
                    pcVar20 = pcVar20 + 1;
                    if (*pcVar9 != cVar3) goto code_r0x0010382b;
                    cVar3 = *pcVar20;
                    pcVar9 = pcVar21;
                  } while (cVar3 != '\0');
                  cVar3 = *pcVar21;
                  ppcVar19 = ppcVar18;
                  if ((cVar3 != '=') && (cVar3 != '\0')) {
code_r0x0010382b:
                    pcVar20 = "seek";
                    cVar3 = 's';
                    pcVar9 = unaff_R13;
                    do {
                      pcVar21 = pcVar9 + 1;
                      pcVar20 = pcVar20 + 1;
                      if (*pcVar9 != cVar3) goto code_r0x00103864;
                      cVar3 = *pcVar20;
                      pcVar9 = pcVar21;
                    } while (cVar3 != '\0');
                    cVar3 = *pcVar21;
                    ppcVar8 = ppcVar18;
                    ppcVar19 = ppcStack272;
                    if ((cVar3 != '=') && (cVar3 != '\0')) {
code_r0x00103864:
                      pcVar20 = "count";
                      cVar3 = 'c';
                      pcVar9 = unaff_R13;
                      do {
                        pcVar21 = pcVar9 + 1;
                        pcVar20 = pcVar20 + 1;
                        if (*pcVar9 != cVar3) goto code_r0x00103921;
                        cVar3 = *pcVar20;
                        pcVar9 = pcVar21;
                      } while (cVar3 != '\0');
                      cVar3 = *pcVar21;
                      ppcVar8 = ppcVar22;
                      ppcVar19 = ppcStack272;
                      ppcVar2 = ppcVar18;
                      if ((cVar3 != '=') && (cVar3 != '\0')) goto code_r0x00103921;
                    }
                  }
                }
                goto code_r0x001038a2;
              }
            }
          }
        }
        if ((max_records != (char **)0x0) || (max_bytes != 0)) {
          if (ibuf == (byte *)0x0) goto code_r0x00103644;
          goto code_r0x001026d0;
        }
        puStack256 = (undefined8 *)0x0;
        goto code_r0x0010326f;
      }
      input_flags = uVar5;
      uVar13 = func_0x00101b60(0,&UNK_0010d9b8,5);
      nl_error(1,0,uVar13);
      uVar5 = input_flags;
code_r0x00103a5b:
      input_flags = uVar5;
      uVar13 = func_0x00101b60(0,&UNK_0010d9e0,5);
      ppcVar19 = (char **)nl_error(1,0,uVar13);
      ppcVar2 = ppcStack264;
code_r0x001038a2:
      ppcStack264 = ppcVar2;
      ppcStack272 = ppcVar19;
      puVar7 = output_file;
      puVar1 = input_file;
      if ((int)uStack224 != 0) {
code_r0x001035fb:
        puVar23 = (undefined1 *)quote(puVar15);
        uVar13 = func_0x00101b60(0,&UNK_0010c975,5);
        uVar14 = 0x4b;
        if ((int)uStack224 != 1) {
          uVar14 = 0;
        }
        nl_error(1,uVar14,&UNK_0010c79f,uVar13,puVar23);
code_r0x00103644:
        alloc_ibuf_part_4();
code_r0x001026d0:
        alloc_obuf();
        puStack256 = (undefined8 *)0x0;
        ppcStack272 = (char **)0x0;
        goto joined_r0x001026f7;
      }
    }
  } while( true );
  while (cVar3 = *pcVar20, pcVar9 = pcVar21, cVar3 != '\0') {
    pcVar21 = pcVar9 + 1;
    pcVar20 = pcVar20 + 1;
    puStack240 = puVar15;
    if (*pcVar9 != cVar3) goto code_r0x001033fa;
  }
  cVar3 = *pcVar21;
  if ((cVar3 == '\0') || (cVar3 == '=')) {
    ppcVar22 = (char **)((page_size + 2) * -2);
    input_blocksize = ppcVar18;
    if (ppcVar22 < (char **)0x8000000000000000) goto code_r0x001035e1;
    ppcVar22 = (char **)0x7fffffffffffffff;
    goto code_r0x001035e1;
  }
code_r0x001033fa:
  pcVar20 = "obs";
  cVar3 = 'o';
  pcVar9 = unaff_R13;
  do {
    pcVar21 = pcVar9 + 1;
    pcVar20 = pcVar20 + 1;
    if (*pcVar9 != cVar3) goto code_r0x00103433;
    cVar3 = *pcVar20;
    pcVar9 = pcVar21;
  } while (cVar3 != '\0');
  cVar3 = *pcVar21;
  if ((cVar3 == '\0') || (cVar3 == '=')) {
    ppcVar22 = (char **)-page_size;
    output_blocksize = ppcVar18;
    if (ppcVar22 < (char **)0x7fffffffffffffff || page_size == -0x7fffffffffffffff)
    goto code_r0x001035e1;
    ppcVar22 = (char **)0x7fffffffffffffff;
    goto code_r0x001035e1;
  }
code_r0x00103433:
  cVar3 = 'b';
  pcVar20 = "bs";
  pcVar9 = unaff_R13;
  do {
    auVar31 = CONCAT88(pcVar9 + 1,ppcVar18);
    pcVar20 = pcVar20 + 1;
    if (*pcVar9 != cVar3) goto code_r0x001039b2;
    cVar3 = *pcVar20;
    pcVar9 = pcVar9 + 1;
    if (cVar3 == '\0') goto code_r0x001039a6;
  } while( true );
code_r0x00103921:
  uVar13 = quote(unaff_R13);
  uVar14 = func_0x00101b60(0,&UNK_0010c88b,5);
  nl_error(0,0,uVar14,uVar13);
  usage(1);
  goto code_r0x0010395a;
joined_r0x001026f7:
  if ((status_level == 4) && (lVar6 = gethrxtime(), next_time <= lVar6)) {
    print_xfer_stats();
    next_time = next_time + 1000000000;
  }
  uVar27 = max_bytes;
  ppcVar8 = max_records;
  ppcVar24 = (char **)(r_full + r_partial);
  uVar17 = (ulong)conversions_mask;
  if (ppcVar24 < (char **)((ulong)(max_bytes != 0) + (long)max_records)) {
    pbVar29 = ibuf;
    if ((conversions_mask & 0x500) == 0x500) {
      uVar17 = (ulong)(conversions_mask & 0x18);
      if ((conversions_mask & 0x18) != 0) {
        uVar17 = 0x20;
      }
      pbVar29 = (byte *)func_0x00101c40(ibuf,uVar17,input_blocksize);
    }
    if (ppcVar8 <= ppcVar24) {
      ppcVar8 = (char **)(*iread_fnc)(0,pbVar29,uVar27);
      if ((long)ppcVar8 < 1) goto code_r0x00102c28;
code_r0x00102789:
      bVar30 = CARRY8((ulong)ppcVar8,input_offset);
      input_offset = (long)ppcVar8 + input_offset;
      if (bVar30 != false) {
        input_offset_overflow = 1;
      }
      if (i_nocache != 0) {
        invalidate_cache(0);
      }
      if (ppcVar8 < input_blocksize) goto code_r0x001027cb;
      goto code_r0x00102d60;
    }
    ppcVar8 = (char **)(*iread_fnc)(0,pbVar29,input_blocksize);
    if (0 < (long)ppcVar8) goto code_r0x00102789;
code_r0x00102c28:
    uVar17 = (ulong)conversions_mask;
    if (ppcVar8 == (char **)0x0) {
      i_nocache_eof = (bool)(i_nocache_eof | i_nocache);
      if (o_nocache != '\0') {
        puStack240._0_1_ = (conversions_mask & 0x200) == 0;
      }
      o_nocache_eof = (bool)((o_nocache_eof | puStack240._0_1_) & 1);
      goto code_r0x00103142;
    }
    if (((conversions_mask & 0x100) == 0) || (status_level != 1)) {
      quotearg_style(4,input_file);
      uVar13 = func_0x00101b60(0,&UNK_0010c7d6,5);
      nl_error(0,(ulong)*(uint *)ppcStack264,uVar13);
      uVar17 = (ulong)conversions_mask;
      if ((conversions_mask & 0x100) == 0) {
        puStack256 = (undefined8 *)0x1;
        goto code_r0x00103142;
      }
      if (status_level != 1) {
        print_stats_part_2();
      }
    }
    ppcVar24 = (char **)((long)input_blocksize - (long)ppcStack272);
    invalidate_cache();
    if (input_seekable == 0) {
      if (input_seek_errno == 0x1d) goto code_r0x00102d2f;
      *(int *)ppcStack264 = input_seek_errno;
      goto code_r0x00102cd7;
    }
    uVar27 = (long)ppcVar24 + input_offset;
    if (CARRY8((ulong)ppcVar24,input_offset) == false) {
      input_offset_overflow = input_offset_overflow | (byte)(uVar27 >> 0x3f);
      if (input_offset_overflow != 0) goto code_r0x00102e6a;
      input_offset = uVar27;
      uVar17 = func_0x00101c10(0,0,1);
      if ((long)uVar17 < 0) {
code_r0x00102cd7:
        quotearg_n_style_colon(0,3,input_file);
        uVar13 = func_0x00101b60(0,&UNK_0010c7c6,5);
        nl_error(0,(ulong)*(uint *)ppcStack264,uVar13);
        goto code_r0x00102d16;
      }
      if (uVar27 != uVar17) {
        ppcVar8 = (char **)(uVar27 - uVar17);
        if (((long)ppcVar8 < 0) || (ppcVar24 < ppcVar8)) {
code_r0x00103547:
          if (status_level != 1) {
            uVar13 = func_0x00101b60(0,&UNK_0010db20,5);
            nl_error(0,0,uVar13);
          }
        }
        lVar6 = skip_via_lseek(input_file,0,ppcVar8);
        if (lVar6 < 0) {
          if (*(int *)ppcStack264 == 0) {
            uVar13 = func_0x00101b60(0,&UNK_0010db50,5);
            nl_error(0,0,uVar13);
          }
          goto code_r0x00102cd7;
        }
      }
    }
    else {
      input_offset_overflow = 1;
code_r0x00102e6a:
      input_offset = uVar27;
      quotearg_style(4,input_file);
      uVar13 = func_0x00101b60(0,&UNK_0010daf8,5);
      nl_error(0,0,uVar13);
code_r0x00102d16:
      input_seekable = 0;
      input_seek_errno = 0x1d;
      puStack256 = (undefined8 *)0x1;
    }
code_r0x00102d2f:
    if (((conversions_mask & 0x400) == 0) || (ppcStack272 != (char **)0x0)) goto joined_r0x001026f7;
    ppcVar8 = (char **)0x0;
    if (input_blocksize == (char **)0x0) {
code_r0x00102d60:
      r_full = r_full + 1;
      ppcStack272 = (char **)0x0;
      ppcVar24 = ppcVar8;
    }
    else {
code_r0x001027cb:
      r_partial = r_partial + 1;
      ppcVar24 = ppcVar8;
      ppcStack272 = ppcVar8;
      if (((conversions_mask & 0x400) != 0) &&
         (ppcVar24 = input_blocksize, (conversions_mask & 0x100) == 0)) {
        uVar27 = (ulong)(conversions_mask & 0x18);
        if ((conversions_mask & 0x18) != 0) {
          uVar27 = 0x20;
        }
        func_0x00101c40(ibuf + (long)ppcVar8,uVar27,(char **)((long)input_blocksize - (long)ppcVar8)
                       );
      }
    }
    pbVar29 = ibuf;
    pbVar28 = obuf;
    if (ibuf != obuf) {
      uVar25 = conversions_mask;
      if ((translation_needed != '\0') && (ppcVar24 != (char **)0x0)) {
        pbVar11 = ibuf + (long)ppcVar24;
        pbVar12 = ibuf;
        do {
          pbVar10 = pbVar12 + 1;
          *pbVar12 = puVar23[*pbVar12];
          pbVar12 = pbVar10;
          uVar25 = conversions_mask;
        } while (pbVar10 != pbVar11);
      }
      conversions_mask = uVar25;
      if ((uVar25 & 0x80) != 0) {
        if (char_is_saved != '\0') {
          ppcVar24 = (char **)((long)ppcVar24 + 1);
          char_is_saved = '\0';
          pbVar29 = pbVar29 + -1;
          *pbVar29 = saved_char;
        }
        if (((ulong)ppcVar24 & 1) != 0) {
          ppcVar24 = (char **)((long)ppcVar24 + -1);
          char_is_saved = '\x01';
          saved_char = pbVar29[(long)ppcVar24];
        }
        if ((ulong)ppcVar24 >> 1 != 0) {
          pbVar11 = pbVar29 + (long)ppcVar24;
          do {
            pbVar12 = pbVar11 + -2;
            *pbVar11 = pbVar11[-2];
            pbVar11 = pbVar12;
          } while (pbVar12 != pbVar29 + (long)ppcVar24 + ((ulong)ppcVar24 >> 1) * -2);
        }
        pbVar29 = pbVar29 + 1;
      }
      if ((uVar25 & 8) == 0) {
        if ((uVar25 & 0x10) == 0) {
          do {
            ppcVar8 = output_blocksize;
            ppcVar22 = (char **)((long)output_blocksize - (long)oc);
            if (ppcVar24 < (char **)((long)output_blocksize - (long)oc)) {
              ppcVar22 = ppcVar24;
            }
            ppcVar24 = (char **)((long)ppcVar24 - (long)ppcVar22);
            ppcVar18 = (char **)((long)ppcVar22 + (long)oc);
            func_0x00101ce0(pbVar28 + (long)oc,pbVar29,ppcVar22);
            oc = ppcVar18;
            if (ppcVar8 <= ppcVar18) {
              write_output();
            }
            pbVar28 = obuf;
            pbVar29 = pbVar29 + (long)ppcVar22;
          } while (ppcVar24 != (char **)0x0);
        }
        else {
          copy_with_unblock();
        }
      }
      else {
        copy_with_block();
      }
      goto joined_r0x001026f7;
    }
    ppcVar8 = (char **)iwrite_constprop_7();
    w_bytes = w_bytes + (long)ppcVar8;
    if (ppcVar8 == ppcVar24) {
      if (input_blocksize == ppcVar24) {
        w_full = w_full + 1;
      }
      else {
        w_partial = w_partial + 1;
      }
      goto joined_r0x001026f7;
    }
    goto code_r0x00102ec2;
  }
code_r0x00103142:
  bVar26 = (byte)uVar17;
  if (char_is_saved != '\0') {
    if ((uVar17 & 8) == 0) {
      if ((uVar17 & 0x10) == 0) {
        ppcVar8 = (char **)((long)oc + 1);
        bVar30 = ppcVar8 < output_blocksize;
        obuf[(long)oc] = saved_char;
        oc = ppcVar8;
        if (bVar30) goto code_r0x0010318f;
        write_output();
        bVar26 = (byte)conversions_mask;
      }
      else {
        copy_with_unblock(&saved_char);
        bVar26 = (byte)conversions_mask;
      }
    }
    else {
      copy_with_block(&saved_char);
      bVar26 = (byte)conversions_mask;
    }
  }
  if ((bVar26 & 8) == 0) goto code_r0x00103357;
  ppcVar24 = col;
  ppcVar8 = oc;
  if (col != (char **)0x0) {
    while (ppcVar24 < conversion_blocksize) {
      bVar30 = output_blocksize <= (char **)((long)oc + 1U);
      pbVar29 = obuf + (long)oc;
      oc = (char **)((long)oc + 1U);
      *pbVar29 = space_character;
      if (bVar30) {
        write_output();
      }
      ppcVar24 = (char **)((long)ppcVar24 + 1);
    }
code_r0x00103357:
    ppcVar8 = oc;
    if ((col != (char **)0x0) && ((conversions_mask & 0x10) != 0)) {
      ppcVar8 = (char **)((long)oc + 1);
      bVar30 = output_blocksize <= ppcVar8;
      pbVar29 = obuf + (long)oc;
      oc = ppcVar8;
      *pbVar29 = newline_character;
      if (bVar30) {
        write_output();
        ppcVar8 = oc;
      }
    }
  }
code_r0x0010318f:
  if (ppcVar8 == (char **)0x0) {
code_r0x00103198:
    if (final_op_was_seek == '\0') {
code_r0x001031a5:
      if (((conversions_mask & 0x4000) != 0) && (iVar4 = func_0x00101a90(1), iVar4 != 0)) {
        if ((*(int *)ppcStack264 - 0x16U & 0xffffffef) != 0) {
          uVar13 = quotearg_style(4,output_file);
          uVar14 = func_0x00101b60(0,&UNK_0010c949,5);
          nl_error(0,(ulong)*(uint *)ppcStack264,uVar14,uVar13);
          puStack256 = (undefined8 *)0x1;
        }
        conversions_mask = conversions_mask | 0x8000;
      }
      if ((conversions_mask & 0x8000) == 0) goto code_r0x00102f07;
      do {
        iVar4 = func_0x00101da0(1);
        if (iVar4 == 0) goto code_r0x00102f07;
      } while (*(int *)ppcStack264 == 4);
      uVar13 = quotearg_style(4,output_file);
      puVar32 = &UNK_0010c961;
      goto code_r0x00102ee2;
    }
    iVar4 = func_0x00101d30(1,1,&pcStack216);
    if (iVar4 != 0) {
      uVar13 = quotearg_style(4,output_file);
      puVar32 = &UNK_0010c7a6;
      goto code_r0x00102ee2;
    }
    if (((((uStack192 & 0xf000) != 0x8000) || (lVar6 = func_0x00101c10(1,0,1), lVar6 < 0)) ||
        (lVar6 <= CONCAT44(uStack164,uStack168))) ||
       (iVar4 = iftruncate_constprop_6(lVar6), iVar4 == 0)) goto code_r0x001031a5;
    uVar13 = quotearg_style(4,output_file);
    uVar14 = func_0x00101b60(0,&UNK_0010db78,5);
    nl_error(0,(ulong)*(uint *)ppcStack264,uVar14,lVar6,uVar13);
  }
  else {
    ppcVar8 = (char **)iwrite_constprop_7(obuf);
    w_bytes = w_bytes + (long)ppcVar8;
    if (ppcVar8 != (char **)0x0) {
      w_partial = w_partial + 1;
    }
    if (ppcVar8 == oc) goto code_r0x00103198;
code_r0x00102ec2:
    uVar13 = quotearg_style(4,output_file);
    puVar32 = &UNK_0010c938;
code_r0x00102ee2:
    uVar14 = func_0x00101b60(0,puVar32,5);
    nl_error(0,(ulong)*(uint *)ppcStack264,uVar14,uVar13);
  }
  puStack256 = (undefined8 *)0x1;
code_r0x00102f07:
  if ((max_records == (char **)0x0) && (max_bytes == 0)) {
code_r0x0010326f:
    if ((i_nocache != 0) && (cVar3 = invalidate_cache(0,0), cVar3 == '\0')) {
      uVar13 = quotearg_n_style_colon(0,3,input_file);
      uVar14 = func_0x00101b60(0,&UNK_0010dbb0,5);
      nl_error(0,(ulong)*(uint *)ppcStack264,uVar14,uVar13);
      puStack256 = (undefined8 *)0x1;
    }
    if ((o_nocache != '\0') && (cVar3 = invalidate_cache(1,0), cVar3 == '\0')) {
      uVar13 = quotearg_n_style_colon(0,3,output_file);
      uVar14 = func_0x00101b60(0,&UNK_0010dbb0,5);
      nl_error(0,(ulong)*(uint *)ppcStack264,uVar14,uVar13);
      puStack256 = (undefined8 *)0x1;
    }
  }
  else {
    if ((i_nocache != 0) || (i_nocache_eof != false)) {
      invalidate_cache(0,0);
    }
    if ((o_nocache != '\0') || (o_nocache_eof != false)) {
      invalidate_cache(1,0);
    }
  }
  finish_up();
  if (lStack64 != *(long *)(in_FS_OFFSET + 0x28)) {
    do {
      func_0x00101b90();
code_r0x00103bcc:
      uVar13 = quotearg_style(4,input_file);
      uVar14 = func_0x00101b60(0,&UNK_0010c916,5);
      nl_error(1,(ulong)*(uint *)ppcStack264,uVar14,uVar13);
      uVar5 = input_flags;
code_r0x00103c0c:
      input_flags = uVar5;
      uVar13 = func_0x00101b60(0,&UNK_0010d988,5);
      uVar27 = 0;
      nl_error(1,0,uVar13);
code_r0x00103c30:
      puVar32 = &UNK_0010c831;
      if ((uVar27 & 4) != 0) {
        puVar32 = &UNK_0010c825;
      }
      uVar13 = quote(puVar32);
      puVar32 = &UNK_0010c8c9;
code_r0x00103b9e:
      uVar14 = func_0x00101b60(0,puVar32,5);
      nl_error(0,0,&UNK_0010c79f,uVar14,uVar13);
      usage(1);
    } while( true );
  }
  return (ulong)puStack256 & 0xffffffff;
}

