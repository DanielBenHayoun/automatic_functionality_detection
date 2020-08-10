
/* WARNING: Could not reconcile some variable overlaps */

undefined8 main(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 *in_R10;
  long unaff_R14;
  long in_FS_OFFSET;
  byte bVar19;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 fVar20;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined auVar21 [16];
  uint uStack264;
  undefined4 uStack260;
  ushort auStack256 [4];
  undefined auStack248 [8];
  undefined2 uStack240;
  uint uStack232;
  undefined4 uStack228;
  ushort uStack224;
  undefined6 uStack222;
  undefined8 uStack216;
  ushort uStack208;
  undefined8 uStack200;
  ushort uStack192;
  float10 fStack184;
  undefined4 uStack164;
  long *plStack160;
  char *pcStack152;
  char *pcStack144;
  long lStack136;
  undefined8 *puStack128;
  float10 fStack120;
  float10 fStack104;
  undefined8 *puStack88;
  uint uStack80;
  long lStack64;
  
  bVar19 = 0;
  puVar15 = long_options;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  lVar8 = func_0x001017f0(6,&UNK_00108da1);
  locale_ok = lVar8 != 0;
  func_0x00101630(&UNK_0010801d,&UNK_00108075);
  func_0x00101610(&UNK_0010801d);
  atexit();
  equal_width = '\0';
  separator = "\n";
  pcVar17 = (char *)0x0;
code_r0x00101986:
  puVar14 = pcVar17;
  if (optind < (int)param_1) {
    while( true ) {
      iVar5 = optind;
      if (((*(char *)param_2[optind] == '-') &&
          ((cVar3 = ((char *)param_2[optind])[1], cVar3 == '.' || ((int)cVar3 - 0x30U < 10)))) ||
         (iVar4 = func_0x00101680((ulong)param_1,param_2,&UNK_0010808d,long_options,0), iVar4 == -1)
         ) goto code_r0x00101a03;
      pcVar17 = optarg;
      if (iVar4 == 0x66) goto code_r0x00101986;
      if (iVar4 < 0x67) {
        auStack248 = in_R10;
        puVar2 = param_2;
        fVar20 = in_ST0;
        if (iVar4 != -0x83) goto code_r0x001022c8;
        version_etc(stdout,&UNK_00107f9f,&UNK_00108019);
        func_0x00101870();
        pcVar17 = optarg;
        goto code_r0x00101986;
      }
      if (iVar4 == 0x73) break;
      if (iVar4 != 0x77) goto code_r0x00102373;
      equal_width = '\x01';
      if ((int)param_1 <= optind) goto code_r0x00101a03;
    }
    separator = optarg;
    pcVar17 = puVar14;
    goto code_r0x00101986;
  }
code_r0x00101a03:
  iVar5 = optind;
  uStack264 = param_1 - optind;
  if (uStack264 == 0) {
    uVar11 = func_0x00101640(0,&UNK_001080a3,5);
    func_0x00101840(0,0,uVar11);
    goto code_r0x00102373;
  }
  auStack248 = in_R10;
  if (3 < uStack264) goto code_r0x0010233f;
  if (puVar14 != (char *)0x0) {
    puVar15 = (undefined1 *)0x0;
    lVar8 = 0;
    do {
      if (puVar14[lVar8] == '%') {
        unaff_R14 = lVar8 + 1;
        if (puVar14[unaff_R14] != '%') goto code_r0x00101e30;
        lVar13 = 2;
      }
      else {
        if (puVar14[lVar8] == '\0') goto code_r0x00102296;
        lVar13 = 1;
      }
      lVar8 = lVar8 + lVar13;
      puVar15 = puVar15 + 1;
    } while( true );
  }
  unaff_R14 = 0;
  puVar15 = (undefined1 *)0x0;
code_r0x00101ad8:
  iVar5 = optind;
  uVar11 = param_2[(long)optind];
  _auStack248 = (float10)CONCAT28(uStack240,(long)optind * 8);
  uStack232 = (uint)uVar11;
  uStack228 = (undefined4)((ulong)uVar11 >> 0x20);
  cVar3 = all_digits_p(uVar11);
  iVar4 = iVar5;
  if (cVar3 == '\0') goto code_r0x00101b26;
  if (uStack264 != 1) {
    uStack216 = *(undefined8 *)((long)param_2 + (long)auStack248 + 8);
    cVar3 = all_digits_p(uStack216);
    if (cVar3 == '\0') goto code_r0x00101b26;
    if (uStack264 == 3) {
      iVar7 = func_0x00101740(&UNK_00108816,uStack216);
      if (iVar7 != 0) goto code_r0x00101b26;
      cVar3 = all_digits_p(*(undefined8 *)((long)param_2 + (long)auStack248 + 0x10));
      if (cVar3 == '\0') goto code_r0x00101b26;
    }
  }
  if ((equal_width != '\x01') && (puVar14 == (char *)0x0)) {
    lVar8 = -1;
    pcVar17 = separator;
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      cVar3 = *pcVar17;
      pcVar17 = pcVar17 + (ulong)bVar19 * -2 + 1;
    } while (cVar3 != '\0');
    if (lVar8 == -3) {
      puVar16 = &UNK_00108816;
      if (uStack264 != 1) {
        puVar16 = (undefined *)CONCAT44(uStack228,uStack232);
      }
      cVar3 = seq_fast(puVar16,param_2[(uStack264 - 1) + iVar5]);
      iVar4 = optind;
      if (cVar3 != '\0') goto code_r0x00101e05;
    }
  }
code_r0x00101b26:
  iVar5 = iVar4;
  optind = iVar5 + 1;
  uStack264 = (uint)&fStack104;
  uStack260 = (undefined4)((ulong)&fStack104 >> 0x20);
  scan_arg(&fStack104,param_2[iVar5]);
  uStack200 = SUB108(fStack104,0);
  uStack192 = (ushort)((unkuint10)fStack104 >> 0x40);
  if (optind < (int)param_1) {
    optind = optind + 1;
    uStack232 = uStack80;
    _auStack248 = (float10)CONCAT28(uStack240,puStack88);
    scan_arg(CONCAT44(uStack260,uStack264));
    fStack184 = fStack104;
    if (optind < (int)param_1) {
      uStack164 = 0;
      if (fStack104 == (float10)0) {
        in_ST6 = in_ST5;
        in_ST7 = in_ST5;
        quote(param_2[(long)optind + -1]);
        puVar16 = &UNK_001087f0;
        goto code_r0x0010235b;
      }
      optind = optind + 1;
      plStack160 = (long *)((ulong)plStack160 & 0xffffffff00000000 | (ulong)uStack232);
      uStack232 = SUB104(_auStack248,0);
      uStack228 = (undefined4)((unkuint10)_auStack248 >> 0x20);
      _auStack248 = (float10)CONCAT64(stack0xffffffffffffff0c,uStack80);
      scan_arg(CONCAT44(uStack260,uStack264));
      auStack248 = (undefined8 *)CONCAT44(uStack228,uStack232);
      uVar18 = (ulong)auStack248._0_4_;
      uStack216 = SUB108(fStack104,0);
      uStack208 = (ushort)((unkuint10)fStack104 >> 0x40);
    }
    else {
      uVar18 = 0;
      uStack216 = SUB108(fStack104,0);
      uStack208 = (ushort)((unkuint10)fStack104 >> 0x40);
      fStack184 = (float10)1;
      uStack164 = 0;
      plStack160._0_4_ = uStack232;
    }
    uVar10 = (ulong)(uint)plStack160;
    cVar3 = '\0';
    fVar20 = (float10)0;
    if (((float10)CONCAT28(uStack192,uStack200) * fVar20 == fVar20) && ((uint)plStack160 == 0)) {
      uVar6 = uStack80 | (uint)uVar18;
      uVar10 = (ulong)uVar6;
      if (uVar6 == 0) goto code_r0x001022da;
      uVar10 = 0;
    }
  }
  else {
    uStack216 = uStack200;
    uStack208 = uStack192;
    if (uStack80 == 0) {
      auStack248 = (undefined8 *)0x1;
      uStack164 = 0;
      fStack184 = (float10)1;
      uStack200 = SUB108(fStack184,0);
      uStack192 = (ushort)((unkuint10)fStack184 >> 0x40);
      goto code_r0x001021f4;
    }
    uVar18 = 0;
    uVar10 = 0;
    auStack248 = (undefined8 *)0x1;
    uStack164 = 0;
    fStack184 = (float10)1;
    uStack200 = SUB108(fStack184,0);
    uStack192 = (ushort)((unkuint10)fStack184 >> 0x40);
  }
code_r0x00101bb0:
  iVar4 = (int)uVar10;
  in_R10 = auStack248;
  if (puVar14 == (char *)0x0) {
    if ((int)uVar18 <= iVar4) {
      uVar18 = uVar10 & 0xffffffff;
    }
    if ((uStack80 != 0x7fffffff) && (param_2 = puStack88, (int)uVar18 != 0x7fffffff))
    goto code_r0x0010213c;
    puVar14 = "%Lg";
  }
code_r0x00101bbd:
  do {
    if (fStack184 < (float10)0) {
      bVar1 = (float10)CONCAT28(uStack192,uStack200) < (float10)CONCAT28(uStack208,uStack216);
    }
    else {
      bVar1 = (float10)CONCAT28(uStack208,uStack216) < (float10)CONCAT28(uStack192,uStack200);
    }
    param_2 = puStack88;
    in_ST6 = in_ST5;
    in_ST7 = in_ST5;
    if (bVar1) goto code_r0x00101e05;
    plStack160 = &lStack136;
    uStack232 = (uint)uStack200;
    uStack228 = (undefined4)((ulong)uStack200 >> 0x20);
    uStack224 = uStack192;
    _auStack248 = (float10)1;
    while (in_ST6 = in_ST5, in_ST7 = in_ST5, iVar4 = func_0x00101800(1,puVar14), param_2 = puStack88
          , -1 < iVar4) {
      if (bVar1) {
code_r0x00101de9:
        iVar4 = func_0x00101720(&terminator,stdout);
        if (iVar4 != -1) goto code_r0x00101e05;
        break;
      }
      fVar20 = (float10)CONCAT28(uStack192,uStack200) + _auStack248 * fStack184;
      uStack264 = SUB104(fVar20,0);
      uStack260 = (undefined4)((unkuint10)fVar20 >> 0x20);
      auStack256[0] = (ushort)((unkuint10)fVar20 >> 0x40);
      if ((float10)0 <= fStack184) {
        bVar1 = (float10)CONCAT28(uStack208,uStack216) <
                (float10)((unkuint10)fVar20 & 0xffffffffffffffff | (unkuint10)auStack256[0] << 0x40)
        ;
      }
      else {
        bVar1 = fVar20 < (float10)CONCAT28(uStack208,uStack216);
      }
      in_ST5 = in_ST4;
      in_ST6 = in_ST4;
      in_ST7 = in_ST4;
      if (bVar1) {
        if (locale_ok != false) {
          func_0x001017f0(1,&UNK_00108120);
        }
        iVar4 = rpl_asprintf(plStack160,puVar14);
        param_2 = (undefined8 *)(long)iVar4;
        if (locale_ok != false) {
          func_0x001017f0(1,&UNK_00108da1);
        }
        if (iVar4 < 0) goto code_r0x0010233a;
        param_2 = (undefined8 *)((long)param_2 - unaff_R14);
        *(undefined *)(lStack136 + (long)param_2) = 0;
        cVar3 = xstrtold(puVar15 + lStack136,0,&fStack120,cl_strtold);
        if ((cVar3 == '\0') ||
           (in_ST6 = in_ST5, in_ST7 = in_ST5, fStack120 != (float10)CONCAT28(uStack208,uStack216)))
        {
          func_0x00101590(lStack136);
        }
        else {
          puStack128 = (undefined8 *)0x0;
          uVar12 = CONCAT62(uStack222,uStack224);
          uVar11 = CONCAT44(uStack228,uStack232);
          iVar4 = rpl_asprintf(&puStack128,puVar14);
          puStack88 = puStack128;
          if (iVar4 < 0) goto code_r0x0010233a;
          iVar5 = func_0x00101740(puStack128,lStack136,uVar11,uVar12);
          func_0x00101590(puStack88);
          func_0x00101590(lStack136);
          param_2 = puStack88;
          if (iVar5 != 0) goto code_r0x00101d24;
        }
        goto code_r0x00101de9;
      }
code_r0x00101d24:
      iVar4 = func_0x00101720(separator,stdout);
      param_2 = puStack88;
      if (iVar4 == -1) break;
      _auStack248 = (float10)1 + _auStack248;
      uStack232 = uStack264;
      uStack228 = uStack260;
      uStack224 = auStack256[0];
    }
    io_error();
code_r0x00102296:
    puVar14 = (undefined1 *)quote(puVar14);
    uVar11 = func_0x00101640(0,&UNK_001080c4,5);
    iVar4 = func_0x00101840(1,0,uVar11);
    auStack248 = in_R10;
    puVar2 = param_2;
    fVar20 = in_ST0;
code_r0x001022c8:
    puStack88 = puVar2;
    in_R10 = auStack248;
    param_2 = puStack88;
    in_ST0 = fVar20;
    if (iVar4 != -0x82) goto code_r0x00102373;
    cVar3 = '\0';
    uVar10 = usage();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
code_r0x001022da:
    if (fStack184 == (float10)1) {
      cVar3 = '\x01';
    }
    in_ST5 = in_ST4;
    if ((cVar3 == '\0') || ((float10)CONCAT28(uStack192,uStack200) < fVar20)) {
      uVar18 = 0;
      uStack80 = 0;
      goto code_r0x00101bb0;
    }
code_r0x001021f4:
    if (((float10)CONCAT28(uStack208,uStack216) < (float10)0) || (equal_width != '\0'))
    goto code_r0x0010227c;
    in_R10 = auStack248;
    if (puVar14 == (char *)0x0) {
      lVar8 = -1;
      uVar18 = 0;
      pcVar17 = separator;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        cVar3 = *pcVar17;
        pcVar17 = pcVar17 + (ulong)bVar19 * -2 + 1;
      } while (cVar3 != '\0');
      param_2 = puStack88;
      fVar20 = (float10)0;
      in_ST6 = in_ST5;
      if (lVar8 == -3) {
        do {
          uStack264 = (uint)auStack248;
          uStack260 = (undefined4)((ulong)auStack248 >> 0x20);
          _auStack248 = fVar20;
          iVar4 = rpl_asprintf(&pcStack152,&UNK_00108107);
          in_R10 = (undefined8 *)CONCAT44(uStack260,uStack264);
          in_ST7 = in_ST6;
          if (iVar4 < 0) {
code_r0x0010233a:
            xalloc_die();
            auStack248 = in_R10;
code_r0x0010233f:
            quote(param_2[(long)iVar5 + 3]);
            puVar16 = &UNK_001080b3;
code_r0x0010235b:
            uVar11 = func_0x00101640(0,puVar16,5);
            func_0x00101840(0,0,uVar11);
            in_R10 = auStack248;
code_r0x00102373:
            usage(1);
            auStack248 = in_R10;
          }
          else {
            in_ST6 = in_ST5;
            in_ST7 = in_ST5;
            if ((float10)CONCAT28(uStack208,uStack216) * _auStack248 == _auStack248) {
              iVar4 = rpl_asprintf(&pcStack144,&UNK_00108107);
              in_R10 = (undefined8 *)CONCAT44(uStack260,uStack264);
              if (iVar4 < 0) goto code_r0x0010233a;
            }
            else {
              pcStack144 = (char *)xstrdup(&UNK_00107f9b);
              in_R10 = (undefined8 *)CONCAT44(uStack260,uStack264);
            }
            if ((*pcStack152 == '-') || (*pcStack144 == '-')) goto code_r0x0010240b;
            uStack264 = (uint)in_R10;
            uStack260 = (undefined4)((ulong)in_R10 >> 0x20);
            cVar3 = seq_fast();
            if (cVar3 == '\0') goto code_r0x00102402;
code_r0x00101e05:
            auStack248 = in_R10;
            if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
              return 0;
            }
          }
          func_0x00101670();
          fVar20 = in_ST0;
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
        } while( true );
      }
      goto code_r0x0010222e;
    }
  } while( true );
code_r0x00101e30:
  lVar13 = func_0x001016f0(puVar14 + unaff_R14,&UNK_001080e2);
  lVar8 = func_0x001016f0(puVar14 + unaff_R14 + lVar13,&UNK_00107f84);
  lVar8 = unaff_R14 + lVar13 + lVar8;
  if (puVar14[lVar8] == '.') {
    lVar13 = func_0x001016f0(puVar14 + lVar8 + 1,&UNK_00107f84);
    lVar8 = lVar8 + 1 + lVar13;
  }
  lVar13 = lVar8 + (ulong)(puVar14[lVar8] == 'L');
  pcVar17 = puVar14 + lVar13;
  uStack232 = (uint)pcVar17;
  uStack228 = (undefined4)((ulong)pcVar17 >> 0x20);
  cVar3 = *pcVar17;
  if (cVar3 != '\0') {
    _auStack248 = (float10)CONCAT64(stack0xffffffffffffff0c,(int)cVar3);
    lVar9 = func_0x001016a0(&UNK_001080fe,(ulong)(uint)(int)cVar3);
    lVar13 = lVar13 + 1;
    unaff_R14 = 0;
    if (lVar9 != 0) {
code_r0x00101ed0:
      if (puVar14[lVar13] == '%') {
        if (puVar14[lVar13 + 1] != '%') goto code_r0x0010249d;
        lVar9 = 2;
code_r0x00101ec9:
        lVar13 = lVar13 + lVar9;
        unaff_R14 = unaff_R14 + 1;
        goto code_r0x00101ed0;
      }
      if (puVar14[lVar13] != '\0') {
        lVar9 = 1;
        goto code_r0x00101ec9;
      }
      uVar11 = xmalloc(lVar13 + 2);
      lVar13 = func_0x00101760(uVar11,puVar14,lVar8);
      *(undefined *)(lVar13 + lVar8) = 0x4c;
      _auStack248 = (float10)CONCAT28(uStack240,lVar13);
      func_0x001015e0(lVar13 + 1 + lVar8,CONCAT44(uStack228,uStack232));
      if (equal_width == '\0') {
        puVar14 = (undefined1 *)auStack248;
        goto code_r0x00101ad8;
      }
      uVar11 = func_0x00101640(0,&UNK_001087a8,5);
      func_0x00101840(0,0,uVar11);
      usage(1);
code_r0x0010249d:
      puVar14 = (undefined1 *)quote(puVar14);
      uVar11 = func_0x00101640(0,&UNK_00108780,5);
      func_0x00101840(1,0,uVar11,puVar14);
    }
    puVar14 = (undefined1 *)quote(puVar14);
    uVar11 = func_0x00101640(0,&UNK_00108758,5);
    func_0x00101840(1,0,uVar11,puVar14,(ulong)auStack248._0_4_);
  }
  uVar11 = quote(puVar14);
  uVar12 = func_0x00101640(0,&UNK_001080e9,5);
  auVar21 = func_0x00101840(1,0,uVar12,uVar11);
  uVar11 = CONCAT44(uStack260,uStack264);
  uStack264 = SUB164(auVar21,0);
  uStack260 = SUB164(auVar21 >> 0x20,0);
  (*(code *)PTR___libc_start_main_0030afd8)
            (main,uVar11,auStack256,__libc_csu_init,__libc_csu_fini,SUB168(auVar21 >> 0x40,0),
             &uStack264);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
code_r0x0010227c:
  uVar18 = 0;
  uVar10 = 0;
  uStack80 = 0;
  goto code_r0x00101bb0;
code_r0x00102402:
  in_R10 = (undefined8 *)CONCAT44(uStack260,uStack264);
code_r0x0010240b:
  uStack264 = (uint)in_R10;
  uStack260 = (undefined4)((ulong)in_R10 >> 0x20);
  func_0x00101590(pcStack152);
  func_0x00101590(pcStack144);
  iVar4 = 0;
  uStack80 = 0;
  uVar18 = 0;
  auStack248 = (undefined8 *)CONCAT44(uStack260,uStack264);
code_r0x0010213c:
  puStack88 = param_2;
  if (equal_width == '\0') {
code_r0x0010222e:
    func_0x001018d0(format_buf_6939,1,0x1c,&UNK_00108118,uVar18);
    puVar14 = format_buf_6939;
    in_R10 = auStack248;
    goto code_r0x00101bbd;
  }
  iVar7 = (int)uVar18;
  in_R10 = (undefined8 *)((long)auStack248 + (long)(iVar7 - iVar4));
  puStack88 = (undefined8 *)((long)param_2 + (long)(int)(iVar7 - uStack80));
  if (uStack80 == 0) {
    if (iVar7 == 0) goto code_r0x00102178;
    puStack88 = (undefined8 *)((long)puStack88 + 1);
  }
  else {
    if (iVar7 == 0) {
      puStack88 = (undefined8 *)((long)puStack88 + -1);
      goto code_r0x00102178;
    }
  }
  if (iVar4 == 0) {
    in_R10 = (undefined8 *)((long)in_R10 + 1);
  }
code_r0x00102178:
  puVar14 = "%Lg";
  if (in_R10 < puStack88) {
    in_R10 = puStack88;
  }
  if (in_R10 < (undefined8 *)0x80000000) {
    func_0x001018d0(format_buf_6939,1,0x1c,&UNK_0010810d,(ulong)in_R10 & 0xffffffff);
    puVar14 = format_buf_6939;
  }
  goto code_r0x00101bbd;
}

