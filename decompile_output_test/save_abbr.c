
undefined8 save_abbr(long *param_1,char *param_2)

{
  char *pcVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar1 = *(char **)(param_2 + 0x30);
  if ((pcVar1 != (char *)0x0) && ((pcVar1 < param_2 || (param_2 + 0x38 <= pcVar1)))) {
    pcVar6 = (char *)((long)param_1 + 9);
    if (*pcVar1 == '\0') {
      pcVar6 = "";
    }
    else {
      while (iVar3 = func_0x00102960(pcVar6,pcVar1), iVar3 != 0) {
        while( true ) {
          if ((*pcVar6 == '\0') &&
             (((char *)((long)param_1 + 9) != pcVar6 || (*(char *)(param_1 + 1) == '\0')))) {
            lVar4 = func_0x00102840(pcVar1);
            if (~(ulong)(pcVar6 + -(long)(char *)((long)param_1 + 9)) < lVar4 + 1U) {
              puVar5 = (undefined4 *)func_0x00102780();
              *puVar5 = 0xc;
              return 0;
            }
            if (pcVar6 + -(long)(char *)((long)param_1 + 9) + lVar4 + 1U < (char *)0x77) {
              func_0x00102970(pcVar6,pcVar1);
              pcVar6[lVar4 + 1] = '\0';
            }
            else {
              lVar4 = tzalloc(pcVar1);
              *param_1 = lVar4;
              if (lVar4 == 0) {
                return 0;
              }
              *(undefined *)(lVar4 + 8) = 0;
              pcVar6 = (char *)(lVar4 + 9);
            }
            goto code_r0x0010d437;
          }
          lVar4 = func_0x00102840(pcVar6);
          pcVar6 = pcVar6 + lVar4 + 1;
          if ((*pcVar6 != '\0') || (plVar2 = (long *)*param_1, plVar2 == (long *)0x0)) break;
          pcVar6 = (char *)((long)plVar2 + 9);
          iVar3 = func_0x00102960(pcVar6,pcVar1);
          param_1 = plVar2;
          if (iVar3 == 0) goto code_r0x0010d437;
        }
      }
    }
code_r0x0010d437:
    *(char **)(param_2 + 0x30) = pcVar6;
  }
  return 1;
}

