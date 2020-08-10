
void base2msbf_encode(char *param_1,long param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 != 0) {
    pcVar1 = param_1 + param_2;
    do {
      pcVar3 = param_3;
      cVar2 = *param_1;
      do {
        pcVar4 = pcVar3 + 1;
        *pcVar3 = '0' - (cVar2 >> 7);
        pcVar3 = pcVar4;
        cVar2 = cVar2 * '\x02';
      } while (param_3 + 8 != pcVar4);
      param_1 = param_1 + 1;
      param_3 = param_3 + 8;
    } while (pcVar1 != param_1);
  }
  return;
}

