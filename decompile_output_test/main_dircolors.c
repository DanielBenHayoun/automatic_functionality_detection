
ulong dircolors(uint param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  bool bVar14;
  byte bVar15;
  
  bVar15 = 0;
  bVar14 = true;
  uVar11 = 0;
  set_program_name(*param_2);
  func_0x00101f40(6,&UNK_001062c5);
  func_0x00101d90(&UNK_00106279,&UNK_001062d9);
  func_0x00101d70(&UNK_00106279);
  atexit(close_stdout);
  while( true ) {
    uVar10 = (uint)uVar11;
    iVar1 = func_0x00101de0((ulong)param_1,param_2,&UNK_00106300,long_options,0);
    uVar2 = optind;
    cVar9 = (char)uVar11;
    if (iVar1 == -1) break;
    if (iVar1 == 0x62) {
code_r0x00102100:
      bVar14 = false;
    }
    else {
      if (iVar1 < 99) {
        if (iVar1 == -0x83) {
          version_etc(stdout,&UNK_001061d7,&UNK_00106275,Version,&UNK_001062f1,0);
          func_0x00101fa0();
          goto code_r0x00102100;
        }
        if (iVar1 != -0x82) goto code_r0x001023e8;
        usage(0);
        goto code_r0x001023af;
      }
      if (iVar1 == 99) {
        bVar14 = true;
      }
      else {
        if (iVar1 != 0x70) goto code_r0x001023e8;
        uVar11 = 1;
      }
    }
  }
  param_2 = param_2 + (int)optind;
  if ((bVar14 != true) && (cVar9 != '\0')) goto code_r0x00102416;
  if ((int)(uVar10 ^ 1) < (int)(param_1 - optind)) {
code_r0x001023af:
    if (cVar9 == '\0') {
      uVar11 = quote(param_2[1]);
      uVar5 = func_0x00101da0(0,&UNK_0010630f,5);
      func_0x00101f60(0,0,uVar5,uVar11);
    }
    else {
      uVar11 = quote(*param_2);
      uVar5 = func_0x00101da0(0,&UNK_0010630f,5);
      func_0x00101f60(0,0,uVar5,uVar11);
      uVar11 = func_0x00101da0(0,&UNK_001068a0,5);
      func_0x00101fc0(stderr,1,&UNK_00107ef0,uVar11);
    }
code_r0x001023e8:
    do {
      usage(1);
code_r0x001023f2:
      uVar11 = func_0x00101da0(0,&UNK_00106860,5);
      func_0x00101f60(1,0,uVar11);
code_r0x00102416:
      uVar11 = func_0x00101da0(0,&UNK_001067f8,5);
      func_0x00101f60(0,0,uVar11);
    } while( true );
  }
  if (cVar9 != '\0') {
    puVar12 = G_line;
    while (puVar12 + -0x1068e0 < (char *)0x10c4) {
      func_0x00101d60(puVar12);
      uVar6 = 0xffffffffffffffff;
      pcVar7 = puVar12;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar9 = *pcVar7;
        pcVar7 = pcVar7 + (ulong)bVar15 * -2 + 1;
      } while (cVar9 != '\0');
      puVar12 = puVar12 + ~uVar6;
    }
    goto code_r0x00102186;
  }
  if (bVar14 == true) {
    pcVar7 = (char *)func_0x00101d00(&UNK_00106304);
    if (pcVar7 == (char *)0x0) goto code_r0x001023f2;
    if (*pcVar7 == '\0') goto code_r0x001023f2;
    bVar14 = true;
    uVar11 = last_component(pcVar7);
    iVar1 = func_0x00101ec0(uVar11,&UNK_0010630b);
    if (iVar1 != 0) {
      iVar1 = func_0x00101ec0(uVar11,&UNK_0010630a);
      bVar14 = iVar1 == 0;
    }
  }
  _obstack_begin(lsc_obstack,0,0,PTR_malloc_00309fe0,PTR_free_00309fc0);
  if (param_1 == uVar2) {
    uVar2 = dc_parse_stream(0,0);
code_r0x00102224:
    uVar10 = uVar2;
    uVar6 = lsc_obstack._16_8_;
    if ((char)uVar10 != '\0') {
      lVar3 = lsc_obstack._24_8_ - lsc_obstack._16_8_;
      if (lsc_obstack._24_8_ == lsc_obstack._16_8_) {
        lsc_obstack[80] = lsc_obstack[80] | 2;
      }
      lsc_obstack._24_8_ = lsc_obstack._24_8_ + lsc_obstack._48_8_ & ~lsc_obstack._48_8_;
      if (lsc_obstack._32_8_ - lsc_obstack._8_8_ < lsc_obstack._24_8_ - lsc_obstack._8_8_) {
        lsc_obstack._24_8_ = lsc_obstack._32_8_;
      }
      puVar13 = &UNK_001062c3;
      puVar8 = &UNK_001062c6;
      lsc_obstack._16_8_ = lsc_obstack._24_8_;
      if (bVar14 == false) {
        puVar13 = &UNK_001062a2;
        puVar8 = &UNK_001062b7;
      }
      func_0x00101e90(puVar8,stdout);
      func_0x00101f20(uVar6,1,lVar3,stdout);
      func_0x00101e90(puVar13,stdout);
    }
  }
  else {
    uVar11 = *param_2;
    iVar1 = func_0x00101ec0(uVar11,&UNK_00107a0a);
    if ((iVar1 == 0) || (lVar3 = freopen_safer(uVar11,&UNK_001079b3,stdin), lVar3 != 0)) {
      uVar2 = dc_parse_stream(stdin,uVar11);
      iVar1 = rpl_fclose(stdin);
      if (iVar1 == 0) goto code_r0x00102224;
    }
    uVar11 = quotearg_n_style_colon(0,3,uVar11);
    puVar4 = (uint *)func_0x00101d20();
    func_0x00101f60(0,(ulong)*puVar4,&UNK_001079b9,uVar11);
  }
code_r0x00102186:
  return (ulong)(uVar10 ^ 1) & 0xff;
}