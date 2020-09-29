
long * readlinebuffer_delim(long *param_1,byte *param_2,byte param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  pbVar7 = (byte *)param_1[2];
  pbVar6 = pbVar7 + *param_1;
  if ((*param_2 & 0x10) != 0) {
    return (long *)0;
  }
  uVar8 = SEXT14((char)param_3);
  pbVar5 = pbVar7;
  do {
    while( true ) {
      pbVar1 = *(byte **)(param_2 + 8);
      if (pbVar1 < *(byte **)(param_2 + 0x10)) {
        *(byte **)(param_2 + 8) = pbVar1 + 1;
        uVar3 = (uint)*pbVar1;
        bVar4 = *pbVar1;
      }
      else {
        uVar3 = func_0x00101750(param_2);
        if (uVar3 == 0xffffffff) {
          if (pbVar7 == pbVar5) {
            return (long *)0;
          }
          if ((*param_2 & 0x20) != 0) {
            return (long *)0;
          }
          uVar3 = uVar8;
          bVar4 = param_3;
          if (pbVar5[-1] == param_3) goto code_r0x00103586;
        }
        else {
          bVar4 = (byte)uVar3;
        }
      }
      if (pbVar5 != pbVar6) break;
      lVar2 = *param_1;
      pbVar7 = (byte *)x2realloc(pbVar7,param_1);
      pbVar1 = pbVar7 + lVar2;
      *(byte **)(param_1 + 2) = pbVar7;
      pbVar6 = pbVar7 + *param_1;
      *pbVar1 = bVar4;
      pbVar5 = pbVar1 + 1;
      if (uVar3 == uVar8) goto code_r0x00103586;
    }
    pbVar1 = pbVar5 + 1;
    *pbVar5 = bVar4;
    pbVar5 = pbVar1;
  } while (uVar3 != uVar8);
code_r0x00103586:
  *(byte **)(param_1 + 1) = pbVar5 + -(long)pbVar7;
  return param_1;
}

