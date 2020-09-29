
char * imaxtostr(ulong param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  
  pcVar1 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  if ((long)param_1 < 0) {
    do {
      pcVar2 = pcVar1;
      uVar3 = (long)param_1 / 10;
      pcVar2[-1] = ((char)uVar3 * '\n' + '0') - (char)param_1;
      pcVar1 = pcVar2 + -1;
      param_1 = uVar3;
    } while (uVar3 != 0);
    pcVar2[-2] = '-';
    return pcVar2 + -2;
  }
  do {
    pcVar1 = pcVar1 + -1;
    uVar3 = param_1 / 10;
    *pcVar1 = (char)param_1 + (char)uVar3 * -10 + '0';
    param_1 = uVar3;
  } while (uVar3 != 0);
  return pcVar1;
}

