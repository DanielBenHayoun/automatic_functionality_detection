
char * char_to_clump(byte param_1)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  byte bStack36;
  byte bStack35;
  byte bStack34;
  ulong uStack32;
  
  pbVar1 = clump_buff;
  uStack32 = *(ulong *)(in_FS_OFFSET + 0x28);
  iVar9 = chars_per_input_tab;
  if (input_tab_char == param_1) {
code_r0x00103365:
    uVar8 = iVar9 - input_position % iVar9;
    uVar7 = (ulong)uVar8;
    if (untabify_input == '\0') {
      *clump_buff = param_1;
      uVar7 = 1;
joined_r0x001033e1:
      if ((int)uVar8 < 0) {
        if (input_position == 0) {
code_r0x00103420:
          input_position = 0;
          uVar7 = 0;
          goto code_r0x00103398;
        }
        iVar9 = -uVar8;
        goto code_r0x001033eb;
      }
    }
    else {
      if (uVar8 != 0) {
        pbVar1 = clump_buff + (ulong)(uVar8 - 1) + 1;
        pbVar10 = clump_buff;
        do {
          pbVar10 = pbVar10 + 1;
          *pbVar10 = 0x20;
          pbVar10 = pbVar10;
        } while (pbVar1 != pbVar10);
        goto joined_r0x001033e1;
      }
      uVar7 = 0;
    }
  }
  else {
    if (param_1 == 9) {
      iVar9 = 8;
      goto code_r0x00103365;
    }
    plVar6 = (long *)func_0x00101f90();
    if ((*(byte *)(*plVar6 + 1 + (ulong)param_1 * 2) & 0x40) != 0) {
      *pbVar1 = param_1;
      uVar7 = 1;
      uVar8 = 1;
      goto code_r0x00103390;
    }
    if (use_esc_sequence != '\0') {
code_r0x00103438:
      *pbVar1 = 0x5c;
      func_0x00101fa0(&bStack36,1,4,&UNK_0010becc,(ulong)param_1);
      uVar8 = 4;
      pbVar1[1] = bStack36;
      pbVar1[2] = bStack35;
      pbVar1[3] = bStack34;
      uVar7 = 4;
      goto code_r0x00103390;
    }
    if (use_cntrl_prefix != '\0') {
      if ((char)param_1 < '\0') goto code_r0x00103438;
      *pbVar1 = 0x5e;
      pbVar1[1] = param_1 ^ 0x40;
      uVar7 = 2;
      uVar8 = 2;
      goto code_r0x00103390;
    }
    if (param_1 != 8) {
      *pbVar1 = param_1;
      uVar7 = 1;
      uVar8 = 0;
      goto code_r0x00103390;
    }
    *pbVar1 = 8;
    if (input_position == 0) goto code_r0x00103420;
    iVar9 = 1;
    uVar7 = 1;
    uVar8 = 0xffffffff;
code_r0x001033eb:
    if (input_position <= iVar9) {
      input_position = 0;
      goto code_r0x00103398;
    }
  }
code_r0x00103390:
  input_position = uVar8 + input_position;
code_r0x00103398:
  uVar11 = uStack32 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar11 == 0) {
    return (char *)uVar7;
  }
  func_0x00101cb0();
  cVar4 = (char)uVar11;
  if (tabify_output != '\0') {
    if (cVar4 == ' ') {
      spaces_not_printed = spaces_not_printed + 1;
      return (char *)(ulong)spaces_not_printed;
    }
    if ((int)spaces_not_printed < 1) {
      plVar6 = (long *)func_0x00101f90();
      bVar2 = *(byte *)(*plVar6 + 1 + (uVar11 & 0xff) * 2);
    }
    else {
      print_white_space();
      plVar6 = (long *)func_0x00101f90();
      bVar2 = *(byte *)(*plVar6 + 1 + (uVar11 & 0xff) * 2);
    }
    if ((bVar2 & 0x40) == 0) {
      if (cVar4 == '\b') {
        output_position = output_position + -1;
      }
    }
    else {
      output_position = output_position + 1;
    }
  }
  pcVar3 = *(char **)(stdout + 0x28);
  if (*(char **)(stdout + 0x30) <= pcVar3) {
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)PTR___overflow_00310e68)(stdout,uVar11 & 0xff);
    return (char *)uVar5;
  }
  *(char **)(stdout + 0x28) = pcVar3 + 1;
  *pcVar3 = cVar4;
  return pcVar3;
}

