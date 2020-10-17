
ulong exclude_fnmatch(undefined8 param_1,char *param_2,uint param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  code *pcVar5;
  bool bVar6;
  
  pcVar5 = fnmatch_no_wildcards;
  if ((param_3 & 0x10000000) != 0) {
    pcVar5 = (code *)PTR_fnmatch_00327fd8;
  }
  iVar1 = (*pcVar5)(param_1,param_2,(ulong)param_3);
  uVar2 = param_4 & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  if (((param_3 & 0x40000000) == 0) && (cVar3 = *param_2, cVar3 != '\0')) {
    do {
      pcVar4 = param_2;
      if (iVar1 == 0) {
        return 1;
      }
      while( true ) {
        bVar6 = cVar3 == '/';
        cVar3 = pcVar4[1];
        param_2 = pcVar4 + 1;
        if (bVar6) break;
        pcVar4 = pcVar4 + 1;
        if (cVar3 == '\0') {
          uVar2 = 0;
          goto code_r0x00105578;
        }
      }
      while (cVar3 == '/') {
        cVar3 = param_2[1];
        pcVar4 = param_2;
        param_2 = param_2 + 1;
      }
      iVar1 = (*pcVar5)(param_1,param_2,(ulong)param_3);
      cVar3 = pcVar4[1];
    } while (cVar3 != '\0');
    uVar2 = uVar2 & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
  }
code_r0x00105578:
  return uVar2 & 0xffffffff;
}

