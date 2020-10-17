
ulong path_prefix(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    return (ulong)(*(char *)(param_2 + 1) != '/');
  }
  if ((cVar1 == '/') && (*(char *)(param_1 + 2) == '\0')) {
    return (ulong)(*(char *)(param_2 + 1) == '/');
  }
  bVar2 = cVar1 != *(char *)(param_2 + 1) || *(char *)(param_2 + 1) == '\0';
  _bVar2 = (ulong)bVar2;
  if (bVar2) {
    return 0;
  }
  pcVar4 = (char *)(param_1 + 1);
  pcVar3 = (char *)(param_2 + 1);
  while( true ) {
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
    if (*pcVar4 == '\0') {
      return (ulong)(*pcVar3 == '/' || *pcVar3 == '\0');
    }
    if (*pcVar3 == '\0') break;
    if (*pcVar4 != *pcVar3) {
      return _bVar2;
    }
  }
  return _bVar2;
}

