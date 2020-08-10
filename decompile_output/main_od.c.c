
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

ulong main(uint param_1,undefined8 *param_2)

{
  undefined8 *****pppppuVar1;
  undefined *puVar2;
  byte *pbVar3;
  bool bVar4;
  undefined8 *******pppppppuVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  uint *puVar16;
  ulong uVar17;
  char extraout_DL;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  uint *puVar23;
  undefined8 *******pppppppuVar24;
  uint *in_R9;
  undefined1 *in_R10;
  undefined8 *******pppppppuVar25;
  undefined8 *******pppppppuVar26;
  undefined8 *******pppppppuVar27;
  undefined8 *******pppppppuVar28;
  long in_FS_OFFSET;
  undefined auVar29 [16];
  undefined8 uStack136;
  undefined8 *******pppppppuStack128;
  undefined8 *******pppppppuStack120;
  undefined8 *******pppppppuStack112;
  uint uStack104;
  undefined4 uStack100;
  undefined8 *******pppppppuStack96;
  undefined8 ******ppppppuStack88;
  long lStack80;
  long lStack64;
  
  bVar20 = (byte)param_2;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101a60(6,&UNK_0010cdc1);
  func_0x001018a0(&UNK_0010ae28,&UNK_0010ae51);
  func_0x00101880(&UNK_0010ae28);
  atexit(close_stdout);
  puVar11 = integral_type_size;
  do {
    *(undefined4 *)puVar11 = 0;
    puVar11 = (undefined1 *)((undefined4 *)puVar11 + 1);
  } while (puVar11 != &have_read_stdin);
  puVar11 = fp_type_size;
  integral_type_size._4_4_ = 1;
  integral_type_size._8_4_ = 2;
  integral_type_size._16_4_ = 3;
  integral_type_size._32_4_ = 5;
  do {
    *(undefined4 *)puVar11 = 0;
    puVar11 = (undefined1 *)((undefined4 *)puVar11 + 1);
  } while ((undefined4 *)puVar11 != (undefined4 *)0x310164);
  pppppppuVar22 = (undefined8 *******)&uStack104;
  pppppppuVar21 = (undefined8 *******)0x0;
  fp_type_size._16_4_ = 6;
  fp_type_size._64_4_ = 8;
  pppppppuVar25 = (undefined8 *******)0x1;
  format_address = format_address_std;
  pppppppuStack128 = &pppppppuStack96;
  fp_type_size._32_4_ = 7;
  n_specs = (uint *)0x0;
  n_specs_allocated = 0;
  pppppppuVar28 = (undefined8 *******)0x0;
  spec = (uint *)0x0;
  address_base = 8;
  address_pad_len = 7;
  flag_dump_strings = 0;
  uStack136 = (undefined8 *******)((ulong)uStack136 & 0xffffffffffffff00);
code_r0x00101cd0:
  bVar6 = (byte)pppppppuVar28;
  puVar11 = long_options;
  uStack104 = 0xffffffff;
  pppppppuVar24 = pppppppuVar22;
  iVar8 = func_0x001018f0((ulong)param_1,param_2,short_options);
  uVar10 = (uint)pppppppuVar24;
  if (iVar8 == -1) {
    if ((char)pppppppuVar25 == '\0') {
      uVar12 = 1;
code_r0x001022db:
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar12;
      }
code_r0x00102cb7:
      func_0x001018e0();
code_r0x00102cbc:
      uVar15 = func_0x001018b0(0,&UNK_0010be90,5);
      uVar10 = func_0x00101aa0(1,0,uVar15,(ulong)(uint)(int)(char)bVar6);
code_r0x00102ce4:
      xstrtol_fatal((ulong)uVar10,(ulong)uStack104,0x77,long_options,optarg);
    }
    else {
      if ((flag_dump_strings == 0) || (n_specs == (uint *)0x0)) {
        lVar14 = (long)optind;
        param_1 = param_1 - optind;
        pppppppuVar27 = (undefined8 *******)(ulong)param_1;
        cVar7 = traditional;
        if (bVar6 == 0) {
          if (param_1 == 2) goto code_r0x00102820;
          if (param_1 == 3) goto code_r0x001027b6;
          if (param_1 != 1) goto code_r0x0010246d;
          if (traditional != '\0') goto code_r0x001026d3;
          if (*(char *)param_2[lVar14] == '+') goto code_r0x001026d3;
          goto code_r0x001029bb;
        }
        if (traditional != '\0') goto code_r0x001026b5;
        goto code_r0x00102142;
      }
    }
    uVar15 = func_0x001018b0(0,&UNK_0010bed8,5);
    uVar10 = func_0x00101aa0(1,0,uVar15);
code_r0x00102d26:
    uVar10 = xstrtol_fatal((ulong)uVar10,(ulong)uStack104,0x6a,long_options,optarg);
code_r0x00102d44:
    auVar29 = xstrtol_fatal((ulong)uVar10,(ulong)uStack104,0x53,long_options,optarg);
    pppppppuVar22 = uStack136;
    uStack136 = (undefined8 *******)SUB168(auVar29,0);
    (*(code *)PTR___libc_start_main_0030ffd8)
              (main,pppppppuVar22,&pppppppuStack128,__libc_csu_init,__libc_csu_fini,
               SUB168(auVar29 >> 0x40,0),&uStack136);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar9 = (uint)pppppppuVar25;
  switch(iVar8) {
  case 0x41:
    bVar6 = *optarg;
    if (bVar6 == 0x6e) {
      address_pad_len = 0;
      pppppppuVar28 = (undefined8 *******)0x1;
      format_address = format_address_none;
    }
    else {
      if ((char)bVar6 < 'o') {
        if (bVar6 != 100) goto code_r0x00102cbc;
        address_base = 10;
        address_pad_len = 7;
        pppppppuVar28 = (undefined8 *******)0x1;
        format_address = format_address_std;
      }
      else {
        if (bVar6 == 0x6f) {
          address_base = 8;
          address_pad_len = 7;
          pppppppuVar28 = (undefined8 *******)0x1;
          format_address = format_address_std;
        }
        else {
          if (bVar6 != 0x78) goto code_r0x00102cbc;
          address_base = 0x10;
          address_pad_len = 6;
          pppppppuVar28 = (undefined8 *******)0x1;
          format_address = format_address_std;
        }
      }
    }
    goto code_r0x00101cd0;
  case 0x42:
  case 0x6f:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x44:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x46:
  case 0x65:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x48:
  case 0x58:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x49:
  case 0x4c:
  case 0x6c:
    goto code_r0x00101fc0;
  case 0x4e:
    limit_bytes_to_format = 1;
    uVar10 = xstrtoumax(optarg,0,0,&max_bytes_to_format,multipliers_7627);
    if (uVar10 == 0) goto code_r0x00101e4e;
    xstrtol_fatal((ulong)uVar10,(ulong)uStack104,0x4e,long_options,optarg);
code_r0x00101fc0:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x4f:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x53:
    if (optarg == (byte *)0x0) goto code_r0x001020cc;
    uVar10 = xstrtoumax(optarg,0,0,pppppppuStack128,multipliers_7627);
    if (uVar10 != 0) goto code_r0x00102d44;
    string_min = pppppppuStack96;
    break;
  case 0x61:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x62:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 99:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 100:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x66:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x68:
  case 0x78:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x69:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x6a:
    uVar10 = xstrtoumax(optarg,0,0,&n_bytes_to_skip,multipliers_7627);
    if (uVar10 != 0) goto code_r0x00102d26;
code_r0x00101e4e:
    pppppppuVar28 = (undefined8 *******)0x1;
    goto code_r0x00101cd0;
  case 0x73:
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x74:
    pppppppuVar28 = (undefined8 *******)0x1;
    uVar10 = decode_format_string();
    pppppppuVar25 = (undefined8 *******)(ulong)(uVar9 & uVar10);
    goto code_r0x00101cd0;
  case 0x76:
    abbreviate_duplicate_blocks = 0;
    pppppppuVar28 = (undefined8 *******)0x1;
    goto code_r0x00101cd0;
  case 0x77:
    if (optarg == (byte *)0x0) {
      uStack136 = (undefined8 *******)CONCAT71(uStack136._1_7_,1);
      pppppppuVar28 = (undefined8 *******)0x1;
      pppppppuStack120 = (undefined8 *******)0x20;
    }
    else {
      uVar10 = xstrtoumax(optarg,0,10,pppppppuStack128,&UNK_0010cdc1);
      if (uVar10 != 0) goto code_r0x00102ce4;
      pppppppuStack120 = pppppppuStack96;
      uStack136 = (undefined8 *******)CONCAT71(uStack136._1_7_,1);
      pppppppuVar28 = (undefined8 *******)0x1;
    }
    goto code_r0x00101cd0;
  case 0x80:
    traditional = '\x01';
    goto code_r0x00101cd0;
  case 0x81:
    goto code_r0x00101d20;
  case -0x83:
    in_R9 = (uint *)0x0;
    version_etc(stdout,&UNK_0010adab,&UNK_0010ae24,Version,&UNK_0010ae96);
    func_0x00101af0();
code_r0x001020cc:
    string_min = (undefined8 *******)0x3;
    break;
  case -0x82:
    usage(0);
    do {
      puVar2 = *(undefined **)(puVar11 + 0x28);
      pppppppuVar5 = pppppppuVar25;
      if (puVar2 < *(undefined **)(puVar11 + 0x30)) {
        *(undefined **)(puVar11 + 0x28) = puVar2 + 1;
        *puVar2 = 10;
      }
      else {
        func_0x00101920(puVar11,10);
      }
code_r0x001025cd:
      pppppppuVar27 = pppppppuVar5;
      pppppppuVar26 = uStack136;
      if ((limit_bytes_to_format != 0) &&
         ((end_offset < string_min ||
          ((undefined8 *******)((long)end_offset - (long)string_min) <= pppppppuVar27)))) {
        func_0x001017d0(uStack136);
        uVar10 = check_and_close(0);
        pppppppuVar21 = (undefined8 *******)(ulong)((uint)pppppppuVar21 & uVar10);
        goto code_r0x00102852;
      }
      pppppppuVar25 = pppppppuVar27;
      while ((undefined8 *******)((long)pppppppuVar25 - (long)pppppppuVar27) < string_min) {
        pppppppuVar25 = (undefined8 *******)((long)pppppppuVar25 + 1);
        uVar9 = read_char(pppppppuVar22);
        uVar10 = uStack104;
        pppppppuVar28 = (undefined8 *******)(ulong)uStack104;
        pppppppuVar21 = (undefined8 *******)(ulong)((uint)pppppppuVar21 & uVar9);
        if ((int)uStack104 < 0) goto code_r0x00102843;
        plVar13 = (long *)func_0x00101b40();
        pppppppuVar5 = pppppppuVar25;
        if ((*(byte *)(*plVar13 + 1 + (long)(int)uVar10 * 2) & 0x40) == 0) goto code_r0x001025cd;
        *(undefined *)((long)pppppppuVar26 + (-1 - (long)pppppppuVar27) + (long)pppppppuVar25) =
             (char)uVar10;
      }
      while ((pppppppuVar26 = (undefined8 *******)((long)pppppppuVar25 - (long)pppppppuVar27),
             limit_bytes_to_format == 0 || (pppppppuVar25 < end_offset))) {
        if (pppppppuVar26 == pppppppuStack96) {
          uStack136 = (undefined8 *******)x2realloc(uStack136,pppppppuStack120);
        }
        pppppppuVar25 = (undefined8 *******)((long)pppppppuVar25 + 1);
        uVar9 = read_char(pppppppuVar22);
        uVar10 = uStack104;
        pppppppuVar28 = (undefined8 *******)(ulong)uStack104;
        pppppppuVar21 = (undefined8 *******)(ulong)((uint)pppppppuVar21 & uVar9);
        if ((int)uStack104 < 0) goto code_r0x00102843;
        if (uStack104 == 0) break;
        plVar13 = (long *)func_0x00101b40();
        pppppppuVar5 = pppppppuVar25;
        if ((*(byte *)(*plVar13 + 1 + (long)(int)uVar10 * 2) & 0x40) == 0) goto code_r0x001025cd;
        *(undefined *)((long)uStack136 + (long)pppppppuVar26) = (char)uVar10;
      }
      pppppppuVar28 = uStack136;
      *(undefined *)((long)uStack136 + (long)pppppppuVar26) = 0;
      (*format_address)(~(ulong)pppppppuVar26 + (long)pppppppuVar25,0x20);
      pppppppuVar27 = pppppppuVar28;
      while( true ) {
        bVar20 = *(byte *)pppppppuVar27;
        uStack104 = SEXT14((char)bVar20);
        puVar11 = stdout;
        if (uStack104 == 0) break;
        switch(bVar20) {
        case 7:
          func_0x00101a40(&UNK_0010ad48,1,2);
          break;
        case 8:
          func_0x00101a40(&UNK_0010ad4b,1,2);
          break;
        case 9:
          func_0x00101a40(&UNK_0010ad57,1,2);
          break;
        case 10:
          func_0x00101a40(&UNK_0010ad51,1,2);
          break;
        case 0xb:
          func_0x00101a40(&UNK_0010ad5a,1,2);
          break;
        case 0xc:
          func_0x00101a40(&UNK_0010ad4e,1,2);
          break;
        case 0xd:
          func_0x00101a40(&UNK_0010ad54,1,2);
          break;
        default:
          pbVar3 = *(byte **)(stdout + 0x28);
          if (pbVar3 < *(byte **)(stdout + 0x30)) {
            *(byte **)(stdout + 0x28) = pbVar3 + 1;
            *pbVar3 = bVar20;
          }
          else {
            func_0x00101920(stdout,(ulong)bVar20);
          }
        }
        pppppppuVar27 = (undefined8 *******)((long)pppppppuVar27 + 1);
      }
    } while( true );
  default:
    goto code_r0x001024d8;
  }
  flag_dump_strings = 1;
  pppppppuVar28 = (undefined8 *******)0x1;
  goto code_r0x00101cd0;
code_r0x00101d20:
  in_R9 = argmatch_die;
  lVar14 = __xargmatch_internal(&UNK_0010ae69,optarg,endian_args,&endian_types,4);
  iVar8 = *(int *)((long)&endian_types + lVar14 * 4);
  if (iVar8 == 0) {
    input_swap = 0;
  }
  else {
    if (iVar8 == 1) {
      input_swap = 1;
    }
  }
  goto code_r0x00101cd0;
code_r0x00102843:
  func_0x001017d0(uStack136);
code_r0x00102852:
  uVar12 = (ulong)(byte)pppppppuStack128;
code_r0x0010240b:
  param_2 = (undefined8 *)(ulong)((uint)uVar12 & (uint)pppppppuVar21 & 1);
code_r0x00102412:
  while ((bVar6 = (byte)pppppppuVar28, have_read_stdin != '\0' &&
         (iVar8 = rpl_fclose(stdin), iVar8 == -1))) {
    pppppppuVar22 = (undefined8 *******)func_0x001018b0(0,&UNK_0010ad78,5);
    puVar16 = (uint *)func_0x001017f0();
    lVar14 = func_0x00101aa0(1,(ulong)*puVar16,pppppppuVar22);
    cVar7 = extraout_DL;
code_r0x001026b5:
    iVar8 = (int)pppppppuVar27;
    if (iVar8 == 2) {
code_r0x00102820:
      if ((cVar7 == '\0') &&
         ((cVar7 = *(char *)param_2[lVar14 + 1], cVar7 != '+' && (9 < (int)cVar7 - 0x30U)))) {
        pppppppuVar27 = (undefined8 *******)0x2;
        goto code_r0x00102142;
      }
      cVar7 = parse_old_offset((char *)param_2[lVar14 + 1],&pppppppuStack96);
      if (cVar7 != '\0') {
        if ((traditional == '\0') ||
           (cVar7 = parse_old_offset(param_2[optind],pppppppuVar22), cVar7 == '\0')) {
          pppppppuVar27 = (undefined8 *******)0x1;
          n_bytes_to_skip = pppppppuStack96;
          param_2[(long)optind + 1] = param_2[(long)optind];
          param_2 = param_2 + 1;
        }
        else {
          n_bytes_to_skip = (undefined8 *******)CONCAT44(uStack100,uStack104);
          flag_pseudo_start = '\x01';
          param_2 = param_2 + 2;
          pppppppuVar27 = (undefined8 *******)0x0;
          pppppppuStack112 = pppppppuStack96;
        }
        goto code_r0x00102142;
      }
      pppppppuVar27 = (undefined8 *******)0x2;
code_r0x001027df:
      uVar10 = (uint)pppppppuVar24;
      if (traditional == '\0') goto code_r0x00102142;
      lVar14 = (long)optind;
code_r0x0010247f:
      bVar20 = (byte)param_2;
      pppppppuVar22 = (undefined8 *******)quote(param_2[lVar14 + 1]);
      uVar15 = func_0x001018b0(0,&UNK_0010aea3,5);
      func_0x00101aa0(0,0,uVar15,pppppppuVar22);
      uVar15 = func_0x001018b0(0,&UNK_0010bf08,5);
      func_0x00101aa0(0,0,&UNK_0010c7e0,uVar15);
code_r0x001024d8:
      usage(1);
      goto code_r0x001024e2;
    }
    if (iVar8 == 3) {
code_r0x001027b6:
      pppppppuVar27 = (undefined8 *******)0x3;
      if (cVar7 != '\0') {
        cVar7 = parse_old_offset(param_2[lVar14 + 1],pppppppuVar22);
        if ((cVar7 == '\0') ||
           (cVar7 = parse_old_offset(param_2[(long)optind + 2],&pppppppuStack96), cVar7 == '\0')) {
          pppppppuVar27 = (undefined8 *******)0x3;
          goto code_r0x001027df;
        }
        n_bytes_to_skip = (undefined8 *******)CONCAT44(uStack100,uStack104);
        flag_pseudo_start = '\x01';
        pppppppuVar27 = (undefined8 *******)0x1;
        pppppppuStack112 = pppppppuStack96;
        param_2[(long)optind + 2] = param_2[(long)optind];
        param_2 = param_2 + 2;
      }
    }
    else {
      if (iVar8 == 1) {
code_r0x001026d3:
        cVar7 = parse_old_offset(param_2[lVar14],pppppppuVar22);
        if (cVar7 == '\0') {
code_r0x001029bb:
          pppppppuVar27 = (undefined8 *******)0x1;
        }
        else {
          n_bytes_to_skip = (undefined8 *******)CONCAT44(uStack100,uStack104);
          param_2 = param_2 + 1;
          pppppppuVar27 = (undefined8 *******)0x0;
        }
      }
      else {
code_r0x0010246d:
        uVar10 = (uint)pppppppuVar24;
        if ((1 < (int)pppppppuVar27) && (cVar7 != '\0')) goto code_r0x0010247f;
      }
    }
code_r0x00102142:
    if (flag_pseudo_start != '\0') {
      if (format_address == format_address_none) {
        address_base = 8;
        address_pad_len = 7;
        format_address = format_address_paren;
      }
      else {
        format_address = format_address_label;
      }
    }
    if (limit_bytes_to_format != 0) {
      bVar4 = false;
      end_offset = (undefined8 *******)(max_bytes_to_format + (long)n_bytes_to_skip);
      if (CARRY8(max_bytes_to_format,(ulong)n_bytes_to_skip)) goto code_r0x00102c60;
      while (bVar4) {
        uVar15 = func_0x001018b0(0,&UNK_0010bf38,5);
        end_offset = (undefined8 *******)func_0x00101aa0(1,0,uVar15);
code_r0x00102c60:
        bVar4 = true;
      }
    }
    if (n_specs == (uint *)0x0) {
      decode_format_string(&UNK_0010aeb4);
    }
    if ((int)pppppppuVar27 < 1) {
      file_list = default_file_list;
    }
    else {
      file_list = (undefined1 *)(param_2 + optind);
    }
    uVar10 = open_next_file();
    param_2 = (undefined8 *)(ulong)uVar10;
    if (in_stream != 0) goto code_r0x001021dc;
  }
  uVar12 = (ulong)((uint)param_2 ^ 1) & 0xff;
  goto code_r0x001022db;
code_r0x001021dc:
  uVar9 = skip();
  param_2 = (undefined8 *)(ulong)(uVar10 & uVar9);
  bVar20 = (byte)(uVar10 & uVar9);
  if (in_stream != 0) goto code_r0x001021f9;
  goto code_r0x00102412;
code_r0x001021f9:
  pseudo_offset = (undefined8 *******)0x0;
  if (flag_pseudo_start != '\0') {
    pseudo_offset = (undefined8 *******)((long)pppppppuStack112 - (long)n_bytes_to_skip);
  }
  puVar16 = (uint *)0x0;
  uVar10 = 1;
  while (in_R9 = n_specs, in_R10 = (undefined1 *)spec, puVar16 != n_specs) {
    lVar14 = (long)puVar16 * 10;
    uVar12 = (long)(int)uVar10;
    uVar18 = (long)*(int *)(width_bytes + (ulong)spec[lVar14 + 1] * 4);
    do {
      uVar19 = uVar18;
      uVar18 = uVar12 % uVar19;
      uVar12 = uVar19;
    } while (uVar18 != 0);
    puVar16 = (uint *)((long)puVar16 + 1);
    uVar10 = uVar10 * (int)((ulong)(long)*(int *)(width_bytes + (ulong)spec[lVar14 + 1] * 4) /
                           uVar19);
  }
code_r0x001024e2:
  puVar16 = (uint *)in_R10;
  if ((char)uStack136 == '\0') {
    if ((int)uVar10 < 0x10) {
      bytes_per_block = (undefined8 *******)(long)(int)((int)(0x10 / (long)(int)uVar10) * uVar10);
    }
    else {
      bytes_per_block = (undefined8 *******)(long)(int)uVar10;
    }
  }
  else {
    if ((pppppppuStack120 == (undefined8 *******)0x0) ||
       ((ulong)pppppppuStack120 % (ulong)(undefined8 *******)(long)(int)uVar10 != 0)) {
      uStack136 = (undefined8 *******)((ulong)uStack136 & 0xffffffff00000000 | (ulong)uVar10);
      uVar15 = func_0x001018b0(0,&UNK_0010bf60,5);
      func_0x00101aa0(0,0,uVar15,pppppppuStack120);
      in_R9 = n_specs;
      puVar16 = spec;
      bytes_per_block = (undefined8 *******)(long)(int)uVar10;
    }
    else {
      bytes_per_block = pppppppuStack120;
    }
  }
  pppppppuVar27 = bytes_per_block;
  pppppppuVar24 = (undefined8 *******)0x0;
  in_R9 = puVar16 + (long)in_R9 * 10 + 1;
  puVar23 = puVar16 + 1;
  while (in_R9 != puVar23) {
    pppppppuVar21 =
         (undefined8 *******)
         (long)(int)((int)((ulong)bytes_per_block /
                          (ulong)(long)*(int *)(width_bytes + (ulong)*puVar23 * 4)) *
                    (puVar23[6] + 1));
    if (pppppppuVar24 < pppppppuVar21) {
      pppppppuVar24 = pppppppuVar21;
    }
    puVar23 = puVar23 + 10;
  }
  in_R10 = width_bytes;
  puVar16 = puVar16 + 1;
  while (puVar23 != puVar16) {
    in_R9 = (uint *)(long)*(int *)(width_bytes + (ulong)*puVar16 * 4);
    puVar16[7] = (int)pppppppuVar24 - (int)((ulong)pppppppuVar27 / (ulong)in_R9) * puVar16[6];
    puVar16 = puVar16 + 10;
  }
  pppppppuVar21 = (undefined8 *******)(ulong)flag_dump_strings;
  if (flag_dump_strings != 0) goto code_r0x00102594;
  bVar4 = false;
  lVar14 = SUB168(ZEXT816(2) * ZEXT816(pppppppuVar27),0);
  if (SUB168(ZEXT816(2) * ZEXT816(pppppppuVar27) >> 0x40,0) != 0) goto code_r0x00102c6f;
  while ((lVar14 < 0 || (bVar4))) {
    lVar14 = xalloc_die();
code_r0x00102c6f:
    bVar4 = true;
  }
  ppppppuStack88 = (undefined8 ******)xmalloc((long)pppppppuVar27 * 2);
  uVar10 = (uint)limit_bytes_to_format;
  lStack80 = (long)ppppppuStack88 + (long)bytes_per_block;
  pppppppuVar27 = n_bytes_to_skip;
  if (limit_bytes_to_format == 0) {
    uVar12 = (ulong)pppppppuVar25 & 0xffffffff;
    pppppppuVar28 = (undefined8 *******)0x0;
    uStack136 = (undefined8 *******)((ulong)uStack136 & 0xffffffffffffff00 | (ulong)bVar20);
    while( true ) {
      bVar6 = (byte)pppppppuVar28;
      pppppuVar1 = (&ppppppuStack88)[(int)(uint)pppppppuVar28];
      uVar10 = read_block(bytes_per_block,pppppuVar1,&pppppppuStack96);
      uVar10 = (uint)uVar12 & uVar10;
      uVar12 = (ulong)uVar10;
      bVar20 = (byte)uVar10;
      if (pppppppuStack96 < bytes_per_block) break;
      if (pppppppuStack96 != bytes_per_block) goto code_r0x00102c98;
      pppppppuVar28 = (undefined8 *******)(ulong)((uint)pppppppuVar28 ^ 1);
      write_block(pppppppuVar27,pppppppuStack96,(&ppppppuStack88)[(long)pppppppuVar28],pppppuVar1);
      pppppppuVar27 = (undefined8 *******)((long)pppppppuVar27 + (long)pppppppuStack96);
    }
code_r0x00102935:
    pppppppuVar25 = (undefined8 *******)0x0;
    uVar12 = (ulong)uStack136 & 0xff;
    pppppppuVar24 = pppppppuStack96;
    if (pppppppuStack96 != (undefined8 *******)0x0) {
      in_R9 = (uint *)0x0;
      iVar8 = 1;
      while (uVar18 = SEXT48(iVar8), in_R9 != n_specs) {
        lVar14 = (long)in_R9 * 10;
        uVar19 = (long)*(int *)(width_bytes + (ulong)spec[lVar14 + 1] * 4);
        do {
          uVar17 = uVar19;
          uVar19 = uVar18 % uVar17;
          uVar18 = uVar17;
        } while (uVar19 != 0);
        in_R9 = (uint *)((long)in_R9 + 1);
        iVar8 = iVar8 * (int)((ulong)(long)*(int *)(width_bytes + (ulong)spec[lVar14 + 1] * 4) /
                             uVar17);
      }
      pppppppuVar25 = (undefined8 *******)(&ppppppuStack88)[(long)pppppppuVar28];
      uStack136 = pppppppuStack96;
      in_R10 = (undefined1 *)n_specs;
      func_0x00101980((long)pppppppuVar25 + (long)pppppppuStack96,0,
                      (((uVar18 - 1) + (long)pppppppuStack96) / uVar18) * uVar18 -
                      (long)pppppppuStack96);
      pppppppuVar24 = uStack136;
      write_block(pppppppuVar27,uStack136,(&ppppppuStack88)[bVar6 ^ 1],pppppppuVar25);
      pppppppuVar27 = (undefined8 *******)((long)pppppppuVar27 + (long)pppppppuStack96);
    }
  }
  else {
    pppppppuVar25 = &pppppppuStack96;
    uStack136 = (undefined8 *******)((ulong)uStack136 & 0xffffffffffffff00 | (ulong)bVar20);
    pppppppuVar22 = pppppppuVar28;
code_r0x001023bb:
    pppppppuVar28 = pppppppuVar21;
    bVar6 = (byte)pppppppuVar28;
    bVar20 = (byte)uVar10;
    if (pppppppuVar27 < end_offset) {
      pppppuVar1 = (&ppppppuStack88)[(long)pppppppuVar28];
      pppppppuVar22 = bytes_per_block;
      if ((undefined8 *******)((long)end_offset - (long)pppppppuVar27) <= bytes_per_block) {
        pppppppuVar22 = (undefined8 *******)((long)end_offset - (long)pppppppuVar27);
      }
      uVar9 = read_block(pppppppuVar22,pppppuVar1,pppppppuVar25);
      uVar10 = uVar10 & uVar9;
      bVar20 = (byte)uVar10;
      if (bytes_per_block <= pppppppuStack96) {
        if (pppppppuStack96 == bytes_per_block) goto code_r0x0010239f;
        func_0x00101950(&UNK_0010bf90,&UNK_0010acec,0x576,&__PRETTY_FUNCTION___7577);
code_r0x00102c98:
        func_0x00101950(&UNK_0010bf90,&UNK_0010acec,0x584,&__PRETTY_FUNCTION___7577);
        goto code_r0x00102cb7;
      }
      goto code_r0x00102935;
    }
    uVar12 = (ulong)uStack136 & 0xff;
    pppppppuStack96 = (undefined8 *******)0x0;
    pppppppuVar28 = pppppppuVar22;
  }
  (*format_address)(pppppppuVar27,10);
  if ((limit_bytes_to_format != 0) && (end_offset <= pppppppuVar27)) {
    bVar6 = check_and_close(0);
    bVar20 = bVar20 & bVar6;
  }
  pppppppuVar21 = (undefined8 *******)(ulong)bVar20;
  func_0x001017d0(ppppppuStack88);
  goto code_r0x0010240b;
code_r0x00102594:
  pppppppuStack96 = (undefined8 *******)0x64;
  if ((undefined8 *******)0x63 < string_min) {
    pppppppuStack96 = string_min;
  }
  uStack136 = (undefined8 *******)xmalloc();
  pppppppuStack120 = &pppppppuStack96;
  pppppppuStack128 =
       (undefined8 *******)((ulong)pppppppuStack128 & 0xffffffffffffff00 | (ulong)bVar20);
  pppppppuVar5 = n_bytes_to_skip;
  goto code_r0x001025cd;
code_r0x0010239f:
  pppppppuVar21 = (undefined8 *******)(ulong)((uint)pppppppuVar28 ^ 1);
  write_block(pppppppuVar27,pppppppuStack96,(&ppppppuStack88)[(long)pppppppuVar21],pppppuVar1);
  pppppppuVar27 = (undefined8 *******)((long)pppppppuVar27 + (long)pppppppuStack96);
  pppppppuVar22 = pppppppuVar28;
  goto code_r0x001023bb;
}

