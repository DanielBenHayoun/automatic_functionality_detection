
char * umaxtostr(ulong param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)(param_2 + 0x14);
  *(undefined *)(param_2 + 0x14) = 0;
  do {
    pcVar1 = pcVar1 + -1;
    uVar2 = param_1 / 10;
    *pcVar1 = (char)param_1 + (char)uVar2 * -10 + '0';
    param_1 = uVar2;
  } while (uVar2 != 0);
  return pcVar1;
}

