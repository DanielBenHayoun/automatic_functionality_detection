
long print_name_with_quoting(long *param_1,byte param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  
  if (param_2 == 0) {
    lVar5 = *param_1;
    if (print_with_color == '\0') goto code_r0x001078d2;
    uVar9 = (uint)*(byte *)((long)param_1 + 0xb9);
    if ((color_symlink_as_referent == '\0') || (*(byte *)((long)param_1 + 0xb9) == 0)) {
      uVar6 = (ulong)*(uint *)(param_1 + 6);
    }
    else {
      uVar6 = (ulong)*(uint *)((long)param_1 + 0xac);
    }
code_r0x0010793f:
    bVar10 = *(bool *)(param_1 + 0x17);
    if (bVar10 == false) goto code_r0x0010794f;
code_r0x00107a92:
    uVar2 = (uint)uVar6 & 0xf000;
    if (uVar2 == 0x8000) {
      if (((uVar6 & 0x800) != 0) && (cVar1 = is_colored(0x10), cVar1 != '\0')) {
        lVar8 = 0x100;
        goto code_r0x001079a7;
      }
      uVar9 = (uint)uVar6;
      if (((uVar6 & 0x400) != 0) && (cVar1 = is_colored(0x11), cVar1 != '\0')) {
        lVar8 = 0x110;
        goto code_r0x001079a7;
      }
      cVar1 = is_colored(0x15);
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0x18) != '\0')) {
        lVar8 = 0x150;
        goto code_r0x001079a7;
      }
      if (((uVar9 & 0x49) != 0) && (cVar1 = is_colored(0xe), cVar1 != '\0')) {
        lVar8 = 0xe0;
        goto code_r0x001079a7;
      }
      if ((1 < (ulong)param_1[5]) && (cVar1 = is_colored(0x16), cVar1 != '\0')) {
        lVar8 = 0x160;
        goto code_r0x001079a7;
      }
      goto code_r0x00107b20;
    }
    if (uVar2 != 0x4000) {
      if (uVar2 != 0xa000) {
        lVar8 = 0x80;
        if ((((uVar2 != 0x1000) && (lVar8 = 0x90, uVar2 != 0xc000)) &&
            (lVar8 = 0xa0, uVar2 != 0x6000)) && (lVar8 = 0xd0, uVar2 == 0x2000)) {
          lVar8 = 0xb0;
        }
        goto code_r0x001079a7;
      }
      uVar6 = 7;
      goto code_r0x0010796f;
    }
    if (((uint)uVar6 & 0x202) == 0x202) {
      cVar1 = is_colored(0x14);
      lVar8 = 0x140;
      if (cVar1 != '\0') goto code_r0x001079a7;
    }
    uVar9 = (uint)uVar6;
    if ((uVar6 & 2) != 0) {
      cVar1 = is_colored(0x13);
      lVar8 = 0x130;
      if (cVar1 != '\0') goto code_r0x001079a7;
    }
    lVar8 = 0x60;
    if ((uVar9 & 0x200) != 0) {
      cVar1 = is_colored(0x12);
      lVar8 = (-(ulong)(cVar1 == '\0') & 0xffffffffffffff40) + 0x120;
    }
  }
  else {
    lVar5 = param_1[1];
    if (print_with_color == '\0') goto code_r0x001078d2;
    uVar6 = (ulong)*(uint *)((long)param_1 + 0xac);
    if (*(char *)((long)param_1 + 0xb9) == '\0') {
      cVar1 = is_colored(0xc);
      uVar9 = 0xffffffff;
      if (cVar1 == '\0') goto code_r0x0010793f;
      lVar8 = 0xc0;
      goto code_r0x001079a7;
    }
    bVar10 = *(bool *)(param_1 + 0x17);
    uVar9 = 0;
    if (bVar10 != false) goto code_r0x00107a92;
code_r0x0010794f:
    uVar2 = *(uint *)(filetype_indicator_11085 + (ulong)*(uint *)(param_1 + 0x15) * 4);
    uVar6 = (ulong)uVar2;
    bVar10 = uVar2 == 7;
    if (uVar2 == 5) {
code_r0x00107b20:
      uVar6 = func_0x00103400(lVar5);
      puVar7 = color_ext_list;
      while (puVar7 != (ulong *)0x0) {
        if ((*puVar7 <= uVar6) &&
           (iVar3 = c_strncasecmp((uVar6 - *puVar7) + lVar5,puVar7[1]), iVar3 == 0)) {
          puVar7 = puVar7 + 2;
          goto code_r0x001079b1;
        }
        puVar7 = (ulong *)puVar7[4];
      }
      lVar8 = 0x50;
    }
    else {
code_r0x0010796f:
      if ((uVar9 == 0) && (bVar10 != false)) {
        lVar8 = 0xd0;
        if (color_symlink_as_referent == '\0') {
          cVar1 = is_colored(0xd);
          lVar8 = (-(ulong)(cVar1 == '\0') & 0xffffffffffffffa0) + 0xd0;
        }
      }
      else {
        lVar8 = uVar6 << 4;
      }
    }
  }
code_r0x001079a7:
  puVar7 = (ulong *)(color_indicator + lVar8);
code_r0x001079b1:
  if (puVar7[1] == 0) {
    cVar1 = is_colored(4);
    if (cVar1 == '\0') {
code_r0x001078d2:
      uVar4 = quote_name(lVar5,filename_quoting_options,(ulong)*(uint *)((long)param_1 + 0xc4),0,
                         (ulong)(param_2 ^ 1),param_3,param_1[2]);
      process_signals();
      return uVar4;
    }
    puVar7 = (ulong *)0x0;
  }
  lVar5 = quote_name(lVar5,filename_quoting_options,(ulong)*(uint *)((long)param_1 + 0xc4),puVar7,
                     (ulong)(param_2 ^ 1),param_3,param_1[2]);
  process_signals();
  prep_non_filename_text();
  if (line_length == 0) {
    return lVar5;
  }
  if (param_4 / line_length == (lVar5 + -1 + param_4) / line_length) {
    return lVar5;
  }
  put_indicator(0x3201d0);
  return lVar5;
}

