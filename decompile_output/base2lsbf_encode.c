
void base2lsbf_encode(byte *param_1,long param_2,char *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 != 0) {
    pbVar1 = param_1 + param_2;
    do {
      pcVar3 = param_3;
      bVar2 = *param_1;
      do {
        pcVar4 = pcVar3 + 1;
        *pcVar3 = (bVar2 & 1) + 0x30;
        pcVar3 = pcVar4;
        bVar2 = bVar2 >> 1;
      } while (param_3 + 8 != pcVar4);
      param_1 = param_1 + 1;
      param_3 = param_3 + 8;
    } while (pbVar1 != param_1);
  }
  return;
}

