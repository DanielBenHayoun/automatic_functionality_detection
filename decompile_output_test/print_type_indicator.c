
ulong print_type_indicator(byte param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)get_type_indicator((ulong)param_1);
  cVar1 = (char)pcVar2;
  pcVar3 = pcVar2;
  if (cVar1 != '\0') {
    pcVar3 = *(char **)(stdout + 0x28);
    if (pcVar3 < *(char **)(stdout + 0x30)) {
      *(char **)(stdout + 0x28) = pcVar3 + 1;
      *pcVar3 = cVar1;
    }
    else {
      pcVar3 = (char *)func_0x00103490(stdout,(ulong)pcVar2 & 0xff);
    }
    dired_pos = dired_pos + 1;
  }
  return (ulong)pcVar3 & 0xffffffffffffff00 | (ulong)(cVar1 != '\0');
}

