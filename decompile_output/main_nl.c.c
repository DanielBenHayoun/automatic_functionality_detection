
ulong main(uint param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  byte **ppbVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  byte *pbVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  undefined auVar23 [16];
  byte *apbStack96 [3];
  byte *apbStack72 [3];
  
  bVar22 = 0;
  puVar15 = (undefined8 *)&FORMAT_RIGHT_NOLZ;
  pbVar19 = &UNK_001144b2;
  puVar17 = longopts;
  uVar18 = 1;
  ppbVar10 = apbStack72;
  set_program_name(*param_2);
  func_0x00101b70(6,&UNK_001145ad);
  func_0x00101990(&UNK_00114436,&UNK_0011445f);
  func_0x00101950(&UNK_00114436);
  atexit(close_stdout);
  have_read_stdin = '\0';
  puVar16 = lineno_format;
code_r0x00101d10:
  do {
    lineno_format = puVar16;
    uVar4 = (uint)uVar18;
    ppbVar10[-1] = 0x101d27;
    uVar2 = func_0x001019f0((ulong)param_1,param_2,&UNK_001144d9,puVar17);
    if (uVar2 == 0xffffffff) {
      if ((char)uVar18 == '\0') {
        ppbVar10[-1] = 0x102304;
        auVar23 = usage(1);
        uVar5 = *ppbVar10;
        uVar11 = (ulong)(ppbVar10 + 1) & 0xfffffffffffffff0;
        *(undefined8 *)(uVar11 - 8) = SUB168(auVar23,0);
        *(ulong *)(uVar11 - 0x10) = uVar11 - 8;
        *(undefined8 *)(uVar11 - 0x18) = 0x10233a;
        (*(code *)PTR___libc_start_main_00318fd0)
                  (main,uVar5,ppbVar10 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar23 >> 0x40,0)
                  );
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar9 = 0xffffffffffffffff;
      ppbVar10[1] = 0xffffffffffffffff;
      *(undefined *)ppbVar10 = 0;
      puVar15 = section_del;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *(char *)puVar15;
        puVar15 = (undefined8 *)((long)puVar15 + (ulong)bVar22 * -2 + 1);
      } while (cVar1 != '\0');
      pbVar19 = (byte *)~uVar9;
      pbVar14 = pbVar19 + -1;
      header_del_len = (long)pbVar14 * 3;
      ppbVar10[-1] = 0x102113;
      header_del = xmalloc(header_del_len + 1);
      puVar15 = section_del;
      ppbVar10[-1] = 0x10212c;
      uVar5 = func_0x001019a0(header_del,section_del);
      ppbVar10[-1] = 0x102137;
      uVar5 = func_0x001019a0(uVar5,puVar15);
      ppbVar10[-1] = 0x102142;
      func_0x00101920(uVar5,puVar15);
      body_del_len = (long)pbVar14 * 2;
      ppbVar10[-1] = 0x102156;
      body_del = xmalloc(body_del_len + 1);
      puVar15 = section_del;
      ppbVar10[-1] = 0x10216f;
      uVar5 = func_0x001019a0(body_del,section_del);
      ppbVar10[-1] = 0x10217a;
      func_0x00101920(uVar5,puVar15);
      ppbVar10[-1] = 0x102189;
      footer_del_len = pbVar14;
      footer_del = xmalloc(pbVar19);
      ppbVar10[-1] = 0x10219f;
      func_0x00101920(footer_del,section_del);
      ppbVar10[-1] = 0x1021ab;
      initbuffer(line_buf);
      uVar9 = (ulong)ppbVar10[1];
      puVar16 = separator_str;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *(char *)puVar16;
        puVar16 = (undefined8 *)((long)puVar16 + (ulong)bVar22 * -2 + 1);
      } while (*(char *)ppbVar10 != cVar1);
      ppbVar10[-1] = 0x1021dd;
      print_no_line_fmt = xmalloc(~uVar9 + (long)lineno_width);
      puVar17 = (undefined1 *)((~uVar9 - 1) + (long)lineno_width);
      ppbVar10[-1] = 0x102201;
      lVar8 = func_0x00101a60(print_no_line_fmt,0x20,puVar17,print_no_line_fmt);
      puVar17[lVar8] = 0;
      line_no = starting_line_number;
      current_type = body_type;
      current_regex = body_regex;
      if (optind == param_1) {
        ppbVar10[-1] = 0x1022f2;
        uVar4 = nl_file(&UNK_00114eb2);
      }
      else {
        while ((int)optind < (int)param_1) {
          uVar5 = param_2[(int)optind];
          ppbVar10[-1] = 0x10224b;
          uVar4 = nl_file(uVar5);
          uVar4 = (uint)uVar18 & uVar4;
          uVar18 = (ulong)uVar4;
          optind = optind + 1;
        }
      }
      if (have_read_stdin != '\0') {
        ppbVar10[-1] = 0x1022ab;
        iVar3 = rpl_fclose(stdin);
        if (iVar3 == -1) {
          ppbVar10[-1] = 0x1022b5;
          puVar7 = (uint *)func_0x001018f0();
          uVar4 = *puVar7;
          ppbVar10[-1] = 0x1022ca;
          func_0x00101bb0(1,(ulong)uVar4,&UNK_00114eb2);
code_r0x001022ca:
          ppbVar10[-1] = 0x1022d2;
          uVar5 = quote();
          puVar13 = &UNK_00114e10;
          goto code_r0x00102015;
        }
      }
      return (ulong)(uVar4 ^ 1) & 0xff;
    }
    if (uVar2 != 0x69) {
      puVar16 = puVar15;
      if ((int)uVar2 < 0x6a) {
        if (uVar2 == 0x62) {
          ppbVar10[-1] = 0x101ff2;
          cVar1 = build_type_arg(&body_type,body_regex,body_fastmap);
          puVar16 = lineno_format;
          if (cVar1 != '\0') goto code_r0x00101d10;
          ppbVar10[-1] = 0x102006;
          uVar5 = quote();
          puVar13 = &UNK_00114d78;
        }
        else {
          if ((int)uVar2 < 99) {
            if (uVar2 == 0xffffff7d) {
              ppbVar10[-2] = 0;
              ppbVar10[-3] = 0x101e32;
              version_etc(stdout,&UNK_001143b9,&UNK_00114432,Version);
              ppbVar10[-3] = 0x101e39;
              func_0x00101c10();
              ppbVar10 = ppbVar10 + -2;
              goto code_r0x00101e40;
            }
            if (uVar2 != 0xffffff7e) goto code_r0x00101d61;
            ppbVar10[-1] = 0x102293;
            usage();
            goto code_r0x00101d10;
          }
          if (uVar2 == 0x66) {
            ppbVar10[-1] = 0x101eb2;
            cVar1 = build_type_arg(&footer_type,footer_regex,footer_fastmap);
            puVar16 = lineno_format;
            if (cVar1 != '\0') goto code_r0x00101d10;
            ppbVar10[-1] = 0x101ec6;
            uVar5 = quote();
            puVar13 = &UNK_00114da0;
          }
          else {
            if (uVar2 != 0x68) {
              if (uVar2 != 100) goto code_r0x00101d61;
              section_del = optarg;
              puVar16 = lineno_format;
              goto code_r0x00101d10;
            }
            ppbVar10[-1] = 0x101e6a;
            cVar1 = build_type_arg(&header_type,header_regex,header_fastmap);
            puVar16 = lineno_format;
            if (cVar1 != '\0') goto code_r0x00101d10;
            ppbVar10[-1] = 0x101e7e;
            uVar5 = quote();
            puVar13 = &UNK_00114d50;
          }
        }
code_r0x00102015:
        ppbVar10[-1] = 0x10201c;
        uVar6 = func_0x001019b0(0,puVar13,5);
        uVar18 = 0;
        ppbVar10[-1] = 0x102030;
        func_0x00101bb0(0,0,uVar6,uVar5);
        puVar16 = lineno_format;
        goto code_r0x00101d10;
      }
      if (uVar2 == 0x70) {
code_r0x00101e40:
        reset_numbers = 0;
        puVar16 = lineno_format;
        goto code_r0x00101d10;
      }
      if ((int)uVar2 < 0x71) {
        if (uVar2 == 0x6c) {
          ppbVar10[-1] = 0x10204b;
          uVar5 = func_0x001019b0(0,&UNK_00114dc8,5);
          ppbVar10[-1] = 0x102073;
          blank_join = xdectoimax(optarg,1,0x7fffffffffffffff,&UNK_001145ad,uVar5,0);
          puVar16 = lineno_format;
          goto code_r0x00101d10;
        }
        bVar20 = uVar2 < 0x6e;
        bVar21 = uVar2 == 0x6e;
        if (bVar21) {
          lVar8 = 3;
          puVar12 = optarg;
          pbVar14 = pbVar19;
          do {
            if (lVar8 == 0) break;
            lVar8 = lVar8 + -1;
            bVar20 = *(byte *)puVar12 < *pbVar14;
            bVar21 = *(byte *)puVar12 == *pbVar14;
            puVar12 = (undefined8 *)((long)puVar12 + (ulong)bVar22 * -2 + 1);
            pbVar14 = pbVar14 + (ulong)bVar22 * -2 + 1;
          } while (bVar21);
          if ((!bVar20 && !bVar21) == bVar20) {
            lineno_format = &FORMAT_LEFT;
            puVar16 = lineno_format;
          }
          else {
            *(undefined8 **)ppbVar10 = optarg;
            ppbVar10[-1] = 0x102092;
            iVar3 = func_0x00101ac0(optarg,&UNK_001144b5);
            uVar5 = *ppbVar10;
            if (iVar3 != 0) {
              *ppbVar10 = uVar5;
              ppbVar10[-1] = 0x1020b1;
              iVar3 = func_0x00101ac0(uVar5,&UNK_001144b8);
              if (iVar3 != 0) goto code_r0x001022ca;
              lineno_format = &FORMAT_RIGHT_LZ;
              puVar16 = lineno_format;
            }
          }
          goto code_r0x00101d10;
        }
      }
      else {
        if (uVar2 == 0x76) {
          ppbVar10[-1] = 0x101f3b;
          uVar5 = func_0x001019b0(0,&UNK_00114477,5);
          ppbVar10[-1] = 0x101f68;
          starting_line_number =
               xdectoimax(optarg,0x8000000000000000,0x7fffffffffffffff,&UNK_001145ad,uVar5,0);
          puVar16 = lineno_format;
          goto code_r0x00101d10;
        }
        if (uVar2 == 0x77) {
          ppbVar10[-1] = 0x101ef3;
          uVar5 = func_0x001019b0(0,&UNK_00114df0,5);
          ppbVar10[-1] = 0x101f16;
          lineno_width = xdectoimax(optarg,1,0x7fffffff,&UNK_001145ad,uVar5,0);
          puVar16 = lineno_format;
          goto code_r0x00101d10;
        }
        if (uVar2 == 0x73) {
          separator_str = optarg;
          puVar16 = lineno_format;
          goto code_r0x00101d10;
        }
      }
code_r0x00101d61:
      uVar18 = 0;
      puVar16 = lineno_format;
      goto code_r0x00101d10;
    }
    ppbVar10[-1] = 0x101f8b;
    uVar5 = func_0x001019b0(0,&UNK_00114494,5);
    ppbVar10[-1] = 0x101fb3;
    page_incr = xdectoimax(optarg,1,0x7fffffffffffffff,&UNK_001145ad,uVar5,0);
    puVar16 = lineno_format;
  } while( true );
}

