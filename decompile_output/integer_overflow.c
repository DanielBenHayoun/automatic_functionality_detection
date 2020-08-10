
ulong integer_overflow(void)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *extraout_RDX;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  char *pcVar9;
  char *pcStack80;
  ulong uStack72;
  ulong uStack64;
  long lStack56;
  
  uVar3 = func_0x00101c80(0,&UNK_0010be64,5);
  cVar5 = '\0';
  uVar6 = 1;
  func_0x00101ee0(1,0,uVar3);
  uStack64 = 0xffffffffffffffff;
  lStack56 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = xstrtoumax(extraout_RDX,&pcStack80,10,&uStack72,&UNK_0010bee5);
  uVar2 = (uint)uVar4;
  if ((uVar4 & 0xfffffffd) != 0) {
code_r0x00102c88:
    pcVar7 = (char *)(ulong)uVar2;
    xstrtol_fatal(pcVar7,(ulong)uVar6,(ulong)(uint)(int)cVar5,long_options,extraout_RDX);
    goto code_r0x00102ca0;
  }
  pcVar7 = pcStack80;
  if ((pcStack80 == extraout_RDX) || (uStack72 == 0)) {
code_r0x00102c58:
    uVar3 = 0;
  }
  else {
    cVar1 = *pcStack80;
    if (cVar1 == ':') {
      pcVar8 = pcStack80 + 1;
      pcVar7 = pcVar8;
      uVar2 = xstrtoumax(pcVar8,&pcStack80,10,&uStack64,&UNK_0010bee5);
      if (uVar2 != 0) goto code_r0x00102c88;
      if ((pcStack80 == pcVar8) || (uStack64 < uStack72)) goto code_r0x00102c58;
      cVar1 = *pcStack80;
    }
    if (cVar1 != '\0') goto code_r0x00102c58;
    first_page_number = uStack72;
    last_page_number = uStack64;
    uVar3 = 1;
  }
  if (lStack56 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
code_r0x00102ca0:
  func_0x00101cb0();
  pcVar8 = pcVar7;
  pcVar9 = extraout_RDX;
  uVar4 = func_0x00101ca0();
  if (uVar4 < 0x80000000) {
    col_sep_string = pcVar7;
    col_sep_length = (int)uVar4;
    return uVar4;
  }
  integer_overflow();
  uVar3 = func_0x00101c80(0,&UNK_0010be75,5);
  uVar3 = xdectoimax(pcVar8,1,0x7fffffff,&UNK_0010bee5,uVar3,0,pcVar7,pcVar9);
  columns = (int)uVar3;
  explicit_columns = 1;
  return uVar3;
}

