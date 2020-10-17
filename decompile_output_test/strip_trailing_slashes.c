
undefined strip_trailing_slashes(char *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)last_component();
  if (*pcVar3 == '\0') {
    pcVar3 = param_1;
  }
  lVar2 = base_len(pcVar3);
  cVar1 = pcVar3[lVar2];
  pcVar3[lVar2] = '\0';
  return cVar1 != '\0';
}

