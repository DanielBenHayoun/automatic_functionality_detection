
/* WARNING: Could not reconcile some variable overlaps */

char * print_header(void)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined *unaff_RBP;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined8 uStack352;
  ulong uStack344;
  undefined *puStack336;
  undefined *puStack328;
  undefined auStack312 [280];
  long lStack32;
  
  output_position = 0;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  pad_across_to((ulong)chars_per_margin);
  print_white_space();
  uVar8 = page_number;
  if (page_number == 0) {
    uVar6 = func_0x00101c80(0,&UNK_0010be97,5);
    uVar12 = 1;
    func_0x00101ee0(1,0,uVar6);
  }
  else {
    uVar6 = func_0x00101c80(0,&UNK_0010beac,5);
    func_0x00101fa0(auStack312,1,0x114,uVar6,uVar8);
    iVar10 = header_width_available;
    iVar5 = gnu_mbswidth(auStack312,0);
    iVar10 = iVar10 - iVar5;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    uVar12 = 1;
    puStack336 = &UNK_0010beca;
    uVar8 = (ulong)(uint)(iVar10 - (iVar10 >> 1));
    uStack352 = file_text;
    uStack344 = uVar8;
    puStack328 = auStack312;
    func_0x00101eb0(1,&UNK_0010beb5,(ulong)chars_per_margin,&UNK_0010bee5,date_text,
                    (ulong)(uint)(iVar10 >> 1),&UNK_0010beca);
    print_a_header = 0;
    output_position = 0;
    unaff_RBP = auStack312;
    if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
      output_position = 0;
      print_a_header = 0;
      return (char *)0x0;
    }
  }
  func_0x00101cb0();
  pbVar1 = clump_buff;
  bVar2 = (byte)uVar12;
  uStack344 = *(ulong *)(in_FS_OFFSET + 0x28);
  iVar10 = chars_per_input_tab;
  puStack336 = (undefined *)uVar8;
  puStack328 = unaff_RBP;
  if (input_tab_char == bVar2) {
code_r0x00103365:
    uVar9 = iVar10 - input_position % iVar10;
    uVar8 = (ulong)uVar9;
    if (untabify_input == '\0') {
      *clump_buff = bVar2;
      uVar8 = 1;
joined_r0x001033e1:
      if ((int)uVar9 < 0) {
        if (input_position == 0) {
code_r0x00103420:
          input_position = 0;
          uVar8 = 0;
          goto code_r0x00103398;
        }
        iVar10 = -uVar9;
        goto code_r0x001033eb;
      }
    }
    else {
      if (uVar9 != 0) {
        pbVar1 = clump_buff + (ulong)(uVar9 - 1) + 1;
        pbVar11 = clump_buff;
        do {
          pbVar11 = pbVar11 + 1;
          *pbVar11 = 0x20;
          pbVar11 = pbVar11;
        } while (pbVar1 != pbVar11);
        goto joined_r0x001033e1;
      }
      uVar8 = 0;
    }
  }
  else {
    if (bVar2 == 9) {
      iVar10 = 8;
      goto code_r0x00103365;
    }
    plVar7 = (long *)func_0x00101f90();
    if ((*(byte *)(*plVar7 + 1 + (uVar12 & 0xff) * 2) & 0x40) != 0) {
      *pbVar1 = bVar2;
      uVar8 = 1;
      uVar9 = 1;
      goto code_r0x00103390;
    }
    if (use_esc_sequence != '\0') {
code_r0x00103438:
      *pbVar1 = 0x5c;
      func_0x00101fa0((long)&uStack352 + 4,1,4,&UNK_0010becc,uVar12 & 0xff);
      uVar9 = 4;
      pbVar1[1] = uStack352._4_1_;
      pbVar1[2] = uStack352._5_1_;
      pbVar1[3] = uStack352._6_1_;
      uVar8 = 4;
      goto code_r0x00103390;
    }
    if (use_cntrl_prefix != '\0') {
      if ((char)bVar2 < '\0') goto code_r0x00103438;
      *pbVar1 = 0x5e;
      pbVar1[1] = bVar2 ^ 0x40;
      uVar8 = 2;
      uVar9 = 2;
      goto code_r0x00103390;
    }
    if (bVar2 != 8) {
      *pbVar1 = bVar2;
      uVar8 = 1;
      uVar9 = 0;
      goto code_r0x00103390;
    }
    *pbVar1 = 8;
    if (input_position == 0) goto code_r0x00103420;
    iVar10 = 1;
    uVar8 = 1;
    uVar9 = 0xffffffff;
code_r0x001033eb:
    if (input_position <= iVar10) {
      input_position = 0;
      goto code_r0x00103398;
    }
  }
code_r0x00103390:
  input_position = uVar9 + input_position;
code_r0x00103398:
  uVar12 = uStack344 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar12 == 0) {
    return (char *)uVar8;
  }
  func_0x00101cb0();
  cVar4 = (char)uVar12;
  if (tabify_output != '\0') {
    if (cVar4 == ' ') {
      spaces_not_printed = spaces_not_printed + 1;
      return (char *)(ulong)spaces_not_printed;
    }
    if ((int)spaces_not_printed < 1) {
      plVar7 = (long *)func_0x00101f90();
      bVar2 = *(byte *)(*plVar7 + 1 + (uVar12 & 0xff) * 2);
    }
    else {
      print_white_space();
      plVar7 = (long *)func_0x00101f90();
      bVar2 = *(byte *)(*plVar7 + 1 + (uVar12 & 0xff) * 2);
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
    uVar6 = (*(code *)PTR___overflow_00310e68)(stdout,uVar12 & 0xff);
    return (char *)uVar6;
  }
  *(char **)(stdout + 0x28) = pcVar3 + 1;
  *pcVar3 = cVar4;
  return pcVar3;
}

