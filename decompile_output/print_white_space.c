
undefined * print_white_space(void)

{
  undefined *puVar1;
  int iVar2;
  undefined uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = spaces_not_printed + output_position;
  iVar2 = -output_position;
  uVar3 = output_tab_char;
  iVar6 = output_position;
  while (uVar4 = (ulong)(uint)(iVar7 + iVar2), output_tab_char = uVar3, 1 < iVar7 + iVar2) {
    uVar4 = (long)iVar6 / (long)chars_per_output_tab & 0xffffffff;
    iVar5 = (chars_per_output_tab - iVar6 % chars_per_output_tab) + iVar6;
    if (iVar7 < iVar5) break;
    puVar1 = *(undefined **)(stdout + 0x28);
    if (puVar1 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      func_0x00101cf0();
    }
    iVar2 = -iVar5;
    uVar3 = output_tab_char;
    iVar6 = iVar5;
  }
  do {
    iVar6 = iVar6 + 1;
    if (iVar7 < iVar6) {
      output_position = iVar7;
      spaces_not_printed = 0;
      return (undefined *)uVar4;
    }
    while (puVar1 = *(undefined **)(stdout + 0x28), puVar1 < *(undefined **)(stdout + 0x30)) {
      iVar6 = iVar6 + 1;
      *(undefined **)(stdout + 0x28) = puVar1 + 1;
      *puVar1 = 0x20;
      if (iVar7 < iVar6) {
        output_position = iVar7;
        spaces_not_printed = 0;
        return puVar1;
      }
    }
    uVar4 = func_0x00101cf0(stdout,0x20);
  } while( true );
}

