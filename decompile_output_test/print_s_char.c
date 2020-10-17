
void print_s_char(ulong param_1,ulong param_2,char *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_2 < param_1) {
    uVar5 = (param_1 - 1) * (long)param_6;
    pcVar1 = param_3 + (param_1 - param_2);
    iVar6 = param_6;
    do {
      uVar3 = uVar5 / param_1;
      cVar2 = *param_3;
      uVar5 = uVar5 - (long)param_6;
      param_3 = param_3 + 1;
      iVar4 = (int)uVar3;
      xprintf(param_4,(ulong)(uint)((iVar6 - iVar4) + param_5),(ulong)(uint)(int)cVar2);
      iVar6 = iVar4;
    } while (param_3 != pcVar1);
  }
  return;
}

