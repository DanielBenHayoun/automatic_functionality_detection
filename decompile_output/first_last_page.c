
ulong first_last_page(uint param_1,char param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  char *pcStack72;
  ulong uStack64;
  ulong uStack56;
  long lStack48;
  
  uStack56 = 0xffffffffffffffff;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = xstrtoumax(param_3,&pcStack72,10,&uStack64,&UNK_0010bee5);
  uVar2 = (uint)uVar3;
  if ((uVar3 & 0xfffffffd) != 0) {
code_r0x00102c88:
    pcVar5 = (char *)(ulong)uVar2;
    xstrtol_fatal(pcVar5,(ulong)param_1,(ulong)(uint)(int)param_2,long_options,param_3);
    goto code_r0x00102ca0;
  }
  pcVar5 = pcStack72;
  if ((pcStack72 == param_3) || (uStack64 == 0)) {
code_r0x00102c58:
    uVar4 = 0;
  }
  else {
    cVar1 = *pcStack72;
    if (cVar1 == ':') {
      pcVar6 = pcStack72 + 1;
      pcVar5 = pcVar6;
      uVar2 = xstrtoumax(pcVar6,&pcStack72,10,&uStack56,&UNK_0010bee5);
      if (uVar2 != 0) goto code_r0x00102c88;
      if ((pcStack72 == pcVar6) || (uStack56 < uStack64)) goto code_r0x00102c58;
      cVar1 = *pcStack72;
    }
    if (cVar1 != '\0') goto code_r0x00102c58;
    first_page_number = uStack64;
    last_page_number = uStack56;
    uVar4 = 1;
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
code_r0x00102ca0:
  func_0x00101cb0();
  pcVar6 = pcVar5;
  uVar3 = func_0x00101ca0();
  if (uVar3 < 0x80000000) {
    col_sep_string = pcVar5;
    col_sep_length = (int)uVar3;
    return uVar3;
  }
  integer_overflow();
  uVar4 = func_0x00101c80(0,&UNK_0010be75,5);
  uVar4 = xdectoimax(pcVar6,1,0x7fffffff,&UNK_0010bee5,uVar4,0,pcVar5,param_3);
  columns = (int)uVar4;
  explicit_columns = 1;
  return uVar4;
}

