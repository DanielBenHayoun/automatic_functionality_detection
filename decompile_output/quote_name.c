
long quote_name(long *param_1,undefined8 param_2,ulong param_3,long param_4,char param_5,
               long param_6,long param_7)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  long *plVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 extraout_RDX;
  uint uVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  byte bStack8273;
  long *plStack8272;
  long alStack8264 [1025];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  plStack8272 = alStack8264;
  lVar7 = quote_name_buf_constprop_54(&plStack8272,param_1,param_2,param_3 & 0xffffffff);
  if ((bStack8273 != 0) && (param_5 != '\0')) {
    puVar11 = (undefined *)stdout[5];
    if (puVar11 < (undefined *)stdout[6]) {
      *(undefined **)(stdout + 5) = puVar11 + 1;
      *puVar11 = 0x20;
    }
    else {
      func_0x00103490(stdout,0x20);
    }
    dired_pos = dired_pos + 1;
  }
  if (param_4 != 0) {
    cVar4 = is_colored(4);
    if (cVar4 != '\0') {
      put_indicator(color_indicator);
      put_indicator(0x320070);
    }
    put_indicator(color_indicator);
    put_indicator(param_4);
    put_indicator(0x320070);
  }
  cVar4 = cwd_some_quoted;
  lVar14 = lVar7;
  if (param_7 == 0) {
    lVar18 = 0;
    cVar4 = '\0';
    if (param_6 != 0) goto code_r0x001075e0;
code_r0x0010779a:
    uVar15 = 1;
    plVar12 = stdout;
    func_0x001036d0((long)plStack8272 + lVar18,1,lVar14);
    dired_pos = dired_pos + lVar7;
  }
  else {
    cVar3 = align_variable_outer_quotes;
    if ((align_variable_outer_quotes == '\0') || (cVar3 = cwd_some_quoted, cwd_some_quoted == '\0'))
    {
      cVar4 = cVar3;
      lVar18 = 0;
    }
    else {
      if (bStack8273 == 0) {
        bVar1 = *(byte *)plStack8272;
        pbVar2 = (byte *)stdout[5];
        lVar14 = lVar7 + -2;
        if (pbVar2 < (byte *)stdout[6]) {
          lVar18 = 1;
          *(byte **)(stdout + 5) = pbVar2 + 1;
          *pbVar2 = bVar1;
        }
        else {
          func_0x00103490(stdout,(ulong)bVar1);
          lVar18 = 1;
        }
      }
      else {
        lVar18 = 0;
        cVar4 = '\0';
      }
    }
    uVar8 = file_escape(hostname,0);
    pcVar9 = (char *)file_escape(param_7,1);
    puVar11 = &UNK_00117bbb;
    if (*pcVar9 == '/') {
      puVar11 = &UNK_001178a1;
    }
    func_0x00103710(1,&UNK_00117887,uVar8,puVar11);
    func_0x00103880(uVar8);
    func_0x00103880(pcVar9);
    if (param_6 == 0) goto code_r0x0010779a;
code_r0x001075e0:
    if (dired != '\0') {
      plVar12 = *(long **)(param_6 + 0x18);
      if ((ulong)(*(long *)(param_6 + 0x20) - (long)plVar12) < 8) {
        _obstack_newchunk(param_6,8);
        plVar12 = *(long **)(param_6 + 0x18);
      }
      *plVar12 = dired_pos;
      *(long *)(param_6 + 0x18) = *(long *)(param_6 + 0x18) + 8;
    }
    uVar15 = 1;
    plVar12 = stdout;
    func_0x001036d0((long)plStack8272 + lVar18,1,lVar14);
    dired_pos = dired_pos + lVar7;
    if (dired != '\0') {
      plVar12 = *(long **)(param_6 + 0x18);
      if ((ulong)(*(long *)(param_6 + 0x20) - (long)plVar12) < 8) {
        uVar15 = 8;
        _obstack_newchunk(param_6);
        plVar12 = *(long **)(param_6 + 0x18);
      }
      *plVar12 = dired_pos;
      *(long *)(param_6 + 0x18) = *(long *)(param_6 + 0x18) + 8;
    }
  }
  if (param_7 != 0) {
    uVar15 = 1;
    plVar12 = stdout;
    func_0x001036d0(&UNK_0011789b,1,6);
    if (cVar4 != '\0') {
      bVar1 = *(byte *)((long)plStack8272 + lVar7 + -1);
      pbVar2 = (byte *)stdout[5];
      if (pbVar2 < (byte *)stdout[6]) {
        plVar12 = (long *)(pbVar2 + 1);
        *(long **)(stdout + 5) = plVar12;
        *pbVar2 = bVar1;
      }
      else {
        uVar15 = (uint)bVar1;
        func_0x00103490();
      }
    }
  }
  plVar16 = plStack8272;
  if ((plStack8272 != param_1) && (plStack8272 != alStack8264)) {
    func_0x00103880();
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)bStack8273 + lVar7;
  }
  func_0x00103420();
  if ((char)uVar15 == '\0') {
    lVar7 = *plVar16;
    if (print_with_color == '\0') goto code_r0x001078d2;
    uVar17 = (uint)*(byte *)((long)plVar16 + 0xb9);
    if ((color_symlink_as_referent == '\0') || (*(byte *)((long)plVar16 + 0xb9) == 0)) {
      uVar10 = (ulong)*(uint *)(plVar16 + 6);
    }
    else {
      uVar10 = (ulong)*(uint *)((long)plVar16 + 0xac);
    }
code_r0x0010793f:
    bVar19 = *(bool *)(plVar16 + 0x17);
    if (bVar19 == false) goto code_r0x0010794f;
code_r0x00107a92:
    uVar5 = (uint)uVar10 & 0xf000;
    if (uVar5 == 0x8000) {
      if (((uVar10 & 0x800) != 0) && (cVar4 = is_colored(0x10), cVar4 != '\0')) {
        lVar14 = 0x100;
        goto code_r0x001079a7;
      }
      uVar17 = (uint)uVar10;
      if (((uVar10 & 0x400) != 0) && (cVar4 = is_colored(0x11), cVar4 != '\0')) {
        lVar14 = 0x110;
        goto code_r0x001079a7;
      }
      cVar4 = is_colored(0x15);
      if ((cVar4 != '\0') && (*(byte *)(plVar16 + 0x18) != 0)) {
        lVar14 = 0x150;
        goto code_r0x001079a7;
      }
      if (((uVar17 & 0x49) != 0) && (cVar4 = is_colored(0xe), cVar4 != '\0')) {
        lVar14 = 0xe0;
        goto code_r0x001079a7;
      }
      if ((1 < (ulong)plVar16[5]) && (cVar4 = is_colored(0x16), cVar4 != '\0')) {
        lVar14 = 0x160;
        goto code_r0x001079a7;
      }
      goto code_r0x00107b20;
    }
    if (uVar5 != 0x4000) {
      if (uVar5 != 0xa000) {
        lVar14 = 0x80;
        if ((((uVar5 != 0x1000) && (lVar14 = 0x90, uVar5 != 0xc000)) &&
            (lVar14 = 0xa0, uVar5 != 0x6000)) && (lVar14 = 0xd0, uVar5 == 0x2000)) {
          lVar14 = 0xb0;
        }
        goto code_r0x001079a7;
      }
      uVar10 = 7;
      goto code_r0x0010796f;
    }
    if (((uint)uVar10 & 0x202) == 0x202) {
      cVar4 = is_colored(0x14);
      lVar14 = 0x140;
      if (cVar4 != '\0') goto code_r0x001079a7;
    }
    uVar17 = (uint)uVar10;
    if ((uVar10 & 2) != 0) {
      cVar4 = is_colored(0x13);
      lVar14 = 0x130;
      if (cVar4 != '\0') goto code_r0x001079a7;
    }
    lVar14 = 0x60;
    if ((uVar17 & 0x200) != 0) {
      cVar4 = is_colored(0x12);
      lVar14 = (-(ulong)(cVar4 == '\0') & 0xffffffffffffff40) + 0x120;
    }
  }
  else {
    lVar7 = plVar16[1];
    if (print_with_color == '\0') goto code_r0x001078d2;
    uVar10 = (ulong)*(uint *)((long)plVar16 + 0xac);
    if (*(byte *)((long)plVar16 + 0xb9) == 0) {
      cVar4 = is_colored(0xc);
      uVar17 = 0xffffffff;
      if (cVar4 == '\0') goto code_r0x0010793f;
      lVar14 = 0xc0;
      goto code_r0x001079a7;
    }
    bVar19 = *(bool *)(plVar16 + 0x17);
    uVar17 = 0;
    if (bVar19 != false) goto code_r0x00107a92;
code_r0x0010794f:
    uVar5 = *(uint *)(filetype_indicator_11085 + (ulong)*(uint *)(plVar16 + 0x15) * 4);
    uVar10 = (ulong)uVar5;
    bVar19 = uVar5 == 7;
    if (uVar5 == 5) {
code_r0x00107b20:
      uVar10 = func_0x00103400(lVar7);
      puVar13 = color_ext_list;
      while (puVar13 != (ulong *)0x0) {
        if ((*puVar13 <= uVar10) &&
           (iVar6 = c_strncasecmp((uVar10 - *puVar13) + lVar7,puVar13[1]), iVar6 == 0)) {
          puVar13 = puVar13 + 2;
          goto code_r0x001079b1;
        }
        puVar13 = (ulong *)puVar13[4];
      }
      lVar14 = 0x50;
    }
    else {
code_r0x0010796f:
      if ((uVar17 == 0) && (bVar19 != false)) {
        lVar14 = 0xd0;
        if (color_symlink_as_referent == '\0') {
          cVar4 = is_colored(0xd);
          lVar14 = (-(ulong)(cVar4 == '\0') & 0xffffffffffffffa0) + 0xd0;
        }
      }
      else {
        lVar14 = uVar10 << 4;
      }
    }
  }
code_r0x001079a7:
  puVar13 = (ulong *)(color_indicator + lVar14);
code_r0x001079b1:
  if (puVar13[1] == 0) {
    cVar4 = is_colored(4);
    if (cVar4 == '\0') {
code_r0x001078d2:
      uVar8 = quote_name(lVar7,filename_quoting_options,(ulong)*(uint *)((long)plVar16 + 0xc4),0,
                         (ulong)(uVar15 ^ 1) & 0xff,extraout_RDX,plVar16[2]);
      process_signals();
      return uVar8;
    }
    puVar13 = (ulong *)0x0;
  }
  lVar7 = quote_name(lVar7,filename_quoting_options,(ulong)*(uint *)((long)plVar16 + 0xc4),puVar13,
                     (ulong)(uVar15 ^ 1) & 0xff,extraout_RDX,plVar16[2]);
  process_signals();
  prep_non_filename_text();
  if (line_length == 0) {
    return lVar7;
  }
  if ((ulong)plVar12 / line_length == (ulong)(lVar7 + -1 + (long)plVar12) / line_length) {
    return lVar7;
  }
  put_indicator(0x3201d0);
  return lVar7;
}

