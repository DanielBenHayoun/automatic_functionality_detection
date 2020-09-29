
undefined  [16] cut(uint param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  char *pcVar11;
  uint uVar12;
  char *unaff_R15;
  byte bVar13;
  undefined8 auStack80 [3];
  undefined auStack56 [8];
  
  bVar13 = 0;
  bVar2 = false;
  set_program_name(*param_2);
  func_0x00101900(6,&UNK_00107581);
  func_0x00101730(&UNK_00106519,&UNK_00106542);
  func_0x00101710(&UNK_00106519);
  atexit(close_stdout);
  operating_mode = 0;
  suppress_non_delimited = '\0';
  delim = '\0';
  have_read_stdin = '\0';
  puVar8 = (undefined8 *)auStack56;
code_r0x00101a80:
  *(undefined8 *)((undefined *)puVar8 + -8) = 0x101a93;
  uVar12 = (uint)param_2;
  iVar3 = func_0x00101780((ulong)param_1,param_2,&UNK_00106586,longopts,0);
  if (iVar3 != -1) {
    if (iVar3 == 0x66) {
      if (operating_mode != 0) {
code_r0x00101e51:
        puVar10 = &UNK_00106d28;
        goto code_r0x00101e22;
      }
      operating_mode = 2;
      unaff_R15 = optarg;
      goto code_r0x00101a80;
    }
    if (0x66 < iVar3) {
      if (iVar3 == 0x7a) {
        line_delim = 0;
      }
      else {
        puVar10 = (undefined *)puVar8;
        if (iVar3 < 0x7b) {
          if (iVar3 != 0x6e) {
            if (iVar3 != 0x73) goto code_r0x00101e37;
            suppress_non_delimited = '\x01';
          }
        }
        else {
code_r0x00101b30:
          puVar8 = (undefined8 *)puVar10;
          if (iVar3 == 0x80) {
            output_delimiter_specified = 1;
            output_delimiter_length = 1;
            if (*optarg != '\0') {
              uVar7 = 0xffffffffffffffff;
              pcVar11 = optarg;
              do {
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar11 + (ulong)bVar13 * -2 + 1;
              } while (cVar1 != '\0');
              output_delimiter_length = ~uVar7 - 1;
            }
            *(undefined8 *)(puVar10 + -8) = 0x101c2c;
            output_delimiter_string = (undefined2 *)xstrdup();
          }
          else {
            if (iVar3 != 0x81) goto code_r0x00101e37;
            complement = '\x01';
          }
        }
      }
      goto code_r0x00101a80;
    }
    if (iVar3 < 100) {
      if (0x61 < iVar3) {
        if (operating_mode != 0) goto code_r0x00101e51;
        operating_mode = 1;
        unaff_R15 = optarg;
        goto code_r0x00101a80;
      }
      if (iVar3 == -0x83) {
        *(undefined8 *)((undefined *)puVar8 + -8) = 0;
        puVar10 = (undefined *)puVar8 + -0x10;
        *(undefined8 *)((undefined *)puVar8 + -0x10) = 0x106579;
        uVar12 = 0x10649b;
        *(undefined8 *)((undefined *)puVar8 + -0x18) = 0x101b28;
        version_etc(stdout,&UNK_0010649b,&UNK_00106515,Version,&UNK_0010656a,&UNK_0010655a);
        *(undefined8 *)((undefined *)puVar8 + -0x18) = 0x101b2f;
        iVar3 = func_0x00101980();
        goto code_r0x00101b30;
      }
      if (iVar3 != -0x82) goto code_r0x00101e37;
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x101e16;
      usage(0);
    }
    else {
      if (iVar3 != 100) goto code_r0x00101e37;
      if ((*optarg == '\0') || (optarg[1] == '\0')) {
        bVar2 = true;
        delim = *optarg;
        goto code_r0x00101a80;
      }
    }
    puVar10 = &UNK_00106d50;
    goto code_r0x00101e22;
  }
  puVar10 = &UNK_00106d80;
  if (operating_mode == 0) {
code_r0x00101e22:
    *(undefined8 *)((undefined *)puVar8 + -8) = 0x101e29;
    uVar6 = func_0x00101740(0,puVar10,5);
    uVar12 = 0;
    *(undefined8 *)((undefined *)puVar8 + -8) = 0x101e37;
    func_0x00101940(0,0,uVar6);
code_r0x00101e37:
    *(undefined8 *)((undefined *)puVar8 + -8) = 0x101e41;
    usage(1);
code_r0x00101e41:
    *(undefined8 *)((undefined *)puVar8 + -8) = 0x101e4c;
    set_fields(unaff_R15,(ulong)(uVar12 | 2));
  }
  else {
    if (bVar2) {
      puVar10 = &UNK_00106db8;
      if (operating_mode == 2) {
        if (suppress_non_delimited == '\0') {
          lVar9 = 0;
          if (complement == '\0') goto code_r0x00101cb8;
        }
        else {
          if (complement == '\0') {
            *(undefined8 *)((undefined *)puVar8 + -8) = 0x101c90;
            set_fields(unaff_R15,0,5);
            goto code_r0x00101ccc;
          }
        }
        *(undefined8 *)((undefined *)puVar8 + -8) = 0x101d7e;
        set_fields(unaff_R15,2,5);
        goto code_r0x00101ccc;
      }
      goto code_r0x00101e22;
    }
    if (suppress_non_delimited == '\0') {
      uVar12 = (uint)(operating_mode != 2) << 2;
      lVar9 = (ulong)(operating_mode != 2) << 2;
      if (complement == '\0') {
code_r0x00101cb8:
        *(undefined8 *)((undefined *)puVar8 + -8) = 0x101cc0;
        set_fields(unaff_R15,lVar9,5);
        if (bVar2) goto code_r0x00101ccc;
        goto code_r0x00101cc5;
      }
      goto code_r0x00101e41;
    }
    puVar10 = &UNK_00106e00;
    if (operating_mode != 2) goto code_r0x00101e22;
    if (complement == '\0') {
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x101e03;
      set_fields(unaff_R15,0,5);
    }
    else {
      *(undefined8 *)((undefined *)puVar8 + -8) = 0x101d5d;
      set_fields(unaff_R15,2,5);
    }
  }
code_r0x00101cc5:
  delim = '\t';
code_r0x00101ccc:
  if (output_delimiter_string == (undefined2 *)0x0) {
    dummy_7081._1_1_ = 0;
    output_delimiter_length = 1;
    dummy_7081._0_1_ = delim;
    output_delimiter_string = &dummy_7081;
  }
  if (optind == param_1) {
    puVar8[-1] = 0x101df1;
    uVar12 = cut_file(&UNK_00107052);
  }
  else {
    uVar12 = 1;
    while ((int)optind < (int)param_1) {
      uVar6 = param_2[(int)optind];
      puVar8[-1] = 0x101cfb;
      uVar4 = cut_file(uVar6);
      uVar12 = uVar12 & uVar4;
      optind = optind + 1;
    }
  }
  if (have_read_stdin != '\0') {
    puVar8[-1] = 0x101d8f;
    iVar3 = rpl_fclose(stdin);
    if (iVar3 == -1) {
      puVar8[-1] = 0x101d99;
      puVar5 = (uint *)func_0x001016a0();
      uVar4 = *puVar5;
      uVar12 = 0;
      puVar8[-1] = 0x101dae;
      func_0x00101940(0,(ulong)uVar4,&UNK_00107052);
    }
  }
  return CONCAT88(*puVar8,(ulong)(uVar12 ^ 1)) & (undefined  [16])0xffffffffffffffff;
}