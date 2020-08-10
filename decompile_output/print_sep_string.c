
undefined * print_sep_string(void)

{
  undefined *puVar1;
  char *pcVar2;
  undefined uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  
  uVar5 = (ulong)spaces_not_printed;
  if (0 < (int)separators_not_printed) {
    pcVar12 = col_sep_string;
    iVar9 = col_sep_length;
code_r0x001030c0:
    pcVar7 = pcVar12;
    do {
      iVar8 = (int)pcVar7;
      pcVar2 = pcVar7;
      uVar4 = (uint)uVar5;
      while( true ) {
        if ((iVar9 + (int)pcVar12) - iVar8 < 1) {
          iVar8 = 0;
          if (-1 < iVar9) {
            iVar8 = iVar9;
          }
          iVar9 = (iVar9 + -1) - iVar8;
          pcVar12 = pcVar12 + iVar8;
          if (0 < (int)uVar4) {
            print_white_space();
          }
          separators_not_printed = separators_not_printed - 1;
          if ((int)separators_not_printed < 1) {
            return (undefined *)(ulong)separators_not_printed;
          }
          uVar5 = (ulong)spaces_not_printed;
          goto code_r0x001030c0;
        }
        cVar10 = *pcVar2;
        pcVar7 = pcVar2 + 1;
        if (cVar10 == ' ') break;
        if (0 < (int)uVar5) {
          print_white_space();
          cVar10 = *pcVar2;
        }
        pcVar2 = *(char **)(stdout + 0x28);
        if (pcVar2 < *(char **)(stdout + 0x30)) {
          *(char **)(stdout + 0x28) = pcVar2 + 1;
          *pcVar2 = cVar10;
        }
        else {
          func_0x00101cf0();
        }
        output_position = output_position + 1;
        uVar5 = (ulong)spaces_not_printed;
        iVar8 = (int)pcVar7;
        pcVar2 = pcVar7;
        uVar4 = spaces_not_printed;
      }
      spaces_not_printed = (int)uVar5 + 1;
      uVar5 = (ulong)spaces_not_printed;
    } while( true );
  }
  if ((int)spaces_not_printed < 1) {
    return (undefined *)uVar5;
  }
  iVar11 = spaces_not_printed + output_position;
  iVar9 = -output_position;
  uVar3 = output_tab_char;
  iVar8 = output_position;
  while (uVar5 = (ulong)(uint)(iVar11 + iVar9), output_tab_char = uVar3, 1 < iVar11 + iVar9) {
    uVar5 = (long)iVar8 / (long)chars_per_output_tab & 0xffffffff;
    iVar6 = (chars_per_output_tab - iVar8 % chars_per_output_tab) + iVar8;
    if (iVar11 < iVar6) break;
    puVar1 = *(undefined **)(stdout + 0x28);
    if (puVar1 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      func_0x00101cf0();
    }
    iVar9 = -iVar6;
    uVar3 = output_tab_char;
    iVar8 = iVar6;
  }
  do {
    iVar8 = iVar8 + 1;
    if (iVar11 < iVar8) {
      output_position = iVar11;
      spaces_not_printed = 0;
      return (undefined *)uVar5;
    }
    while (puVar1 = *(undefined **)(stdout + 0x28), puVar1 < *(undefined **)(stdout + 0x30)) {
      iVar8 = iVar8 + 1;
      *(undefined **)(stdout + 0x28) = puVar1 + 1;
      *puVar1 = 0x20;
      if (iVar11 < iVar8) {
        output_position = iVar11;
        spaces_not_printed = 0;
        return puVar1;
      }
    }
    uVar5 = func_0x00101cf0(stdout,0x20);
  } while( true );
}

