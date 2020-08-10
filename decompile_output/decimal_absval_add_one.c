
char * decimal_absval_add_one(long param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  
  cVar2 = *(char *)(param_1 + 1);
  pcVar1 = (char *)(param_1 + 1 + (ulong)(cVar2 == '-'));
  lVar4 = func_0x001013e0(pcVar1);
  pcVar1[-1] = '0';
  cVar3 = (pcVar1 + lVar4)[-1];
  pcVar6 = pcVar1 + lVar4 + -1;
  while (cVar3 == '9') {
    *pcVar6 = '0';
    pcVar6 = pcVar6 + -1;
    cVar3 = *pcVar6;
  }
  pcVar5 = pcVar6;
  if (pcVar1 <= pcVar6) {
    pcVar5 = pcVar1;
  }
  *pcVar6 = cVar3 + '\x01';
  if (cVar2 == '-') {
    pcVar5[-1] = '-';
    pcVar5 = pcVar5 + -1;
  }
  return pcVar5;
}

