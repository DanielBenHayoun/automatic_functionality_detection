
undefined8 decode_4(byte *param_1,ulong param_2,byte **param_3,long *param_4)

{
  char cVar1;
  char cVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  uVar4 = 0;
  if (((1 < param_2) && (-1 < (char)b64[*param_1])) && (cVar1 = b64[param_1[1]], -1 < cVar1)) {
    pbVar3 = *param_3;
    pbVar5 = pbVar3;
    if (*param_4 != 0) {
      pbVar5 = pbVar3 + 1;
      *pbVar3 = b64[*param_1] << 2 | cVar1 >> 4;
      *param_4 = *param_4 + -1;
    }
    if (param_2 == 2) goto code_r0x00103d06;
    if (param_1[2] == 0x3d) {
      if ((param_2 != 4) || (param_1[3] != 0x3d)) goto code_r0x00103d06;
    }
    else {
      cVar2 = b64[param_1[2]];
      if (cVar2 < '\0') {
code_r0x00103d06:
        *param_3 = pbVar5;
        return 0;
      }
      if (*param_4 != 0) {
        *pbVar5 = cVar1 << 4 | cVar2 >> 2;
        *param_4 = *param_4 + -1;
        pbVar5 = pbVar5 + 1;
      }
      if (param_2 == 3) goto code_r0x00103d06;
      if (param_1[3] == 0x3d) {
        if (param_2 != 4) goto code_r0x00103d06;
      }
      else {
        if ((char)b64[param_1[3]] < '\0') goto code_r0x00103d06;
        if (*param_4 != 0) {
          *pbVar5 = cVar2 << 6 | b64[param_1[3]];
          *param_4 = *param_4 + -1;
          pbVar5 = pbVar5 + 1;
        }
      }
    }
    *param_3 = pbVar5;
    uVar4 = 1;
  }
  return uVar4;
}

