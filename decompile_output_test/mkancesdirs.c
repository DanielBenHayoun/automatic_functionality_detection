
char * mkancesdirs(char *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint uStack68;
  
  uStack68 = 0;
  pcVar7 = param_1;
  pcVar8 = param_1;
  pcVar9 = (char *)0x0;
code_r0x00105f20:
  do {
    cVar1 = *pcVar7;
    while( true ) {
      if (cVar1 == '\0') {
        return pcVar8 + -(long)param_1;
      }
      pcVar7 = pcVar7 + 1;
      cVar2 = *pcVar7;
      if (cVar2 == '/') break;
      if ((cVar1 != '/' || cVar2 == '\0') || (pcVar9 == (char *)0x0)) goto code_r0x00105f20;
      if (pcVar9 + -(long)pcVar8 == (char *)0x1) {
        if (*pcVar8 != '.') {
          *pcVar9 = '\0';
          goto code_r0x00105f70;
        }
      }
      else {
        *pcVar9 = '\0';
        if (((pcVar9 + -(long)pcVar8 == (char *)0x2) && (*pcVar8 == '.')) && (pcVar8[1] == '.')) {
          iVar3 = 0;
          uStack68 = 0;
          uVar6 = 0;
        }
        else {
code_r0x00105f70:
          iVar3 = (*param_3)(param_1,pcVar8,param_4);
          if (iVar3 < 0) {
            piVar5 = (int *)func_0x00101750();
            iVar3 = *piVar5;
            uVar6 = (ulong)uStack68;
          }
          else {
            uStack68 = (uint)(cVar1 == '/' && cVar2 != '\0');
            uVar6 = 1;
            iVar3 = 0;
          }
        }
        iVar4 = savewd_chdir(param_2,pcVar8,uVar6,0);
        if ((iVar4 == -1) || (*pcVar9 = '/', iVar4 != 0)) {
          if ((iVar3 != 0) && (piVar5 = (int *)func_0x00101750(), *piVar5 == 2)) {
            *piVar5 = iVar3;
          }
          return (char *)(long)iVar4;
        }
      }
      cVar1 = *pcVar7;
      pcVar8 = pcVar7;
    }
    if (cVar1 != '/') {
      pcVar9 = pcVar7;
    }
  } while( true );
}

