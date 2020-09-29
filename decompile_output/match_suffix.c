
char * match_suffix(char **param_1)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar4 = *param_1;
  cVar3 = *pcVar4;
  if (cVar3 == '\0') {
    return (char *)0;
  }
  bVar1 = false;
  pcVar2 = (char *)0x0;
  do {
    if (bVar1) {
      if (((0x39 < (int)cVar3 - 0x41U) ||
          (bVar1 = false, (1 << ((byte)((int)cVar3 - 0x41U) & 0x3f) & 0x3ffffff03ffffffU) == 0)) &&
         (bVar1 = false, cVar3 != '~')) {
        pcVar2 = (char *)0x0;
      }
code_r0x0010d1d1:
      *param_1 = pcVar4 + 1;
      cVar3 = pcVar4[1];
    }
    else {
      if (cVar3 == '.') {
        bVar1 = true;
        if (pcVar2 == (char *)0x0) {
          pcVar2 = pcVar4;
        }
        goto code_r0x0010d1d1;
      }
      if (cVar3 < '[') {
        if (('@' < cVar3) || ((byte)(cVar3 - 0x30U) < 10)) goto code_r0x0010d1d1;
      }
      else {
        if ((byte)(cVar3 + 0x9fU) < 0x1a) goto code_r0x0010d1d1;
      }
      if (cVar3 != '~') {
        pcVar2 = (char *)0x0;
      }
      *param_1 = pcVar4 + 1;
      cVar3 = pcVar4[1];
    }
    pcVar4 = pcVar4 + 1;
    if (cVar3 == '\0') {
      return pcVar2;
    }
  } while( true );
}

