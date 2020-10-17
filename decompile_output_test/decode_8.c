
undefined8 decode_8(byte *param_1,ulong param_2,byte **param_3,long *param_4)

{
  char cVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_2 < 8) {
    return 0;
  }
  if ((char)b32[*param_1] < '\0') {
    return 0;
  }
  cVar1 = b32[param_1[1]];
  if (cVar1 < '\0') {
    return 0;
  }
  pbVar4 = *param_3;
  pbVar3 = pbVar4;
  if (*param_4 != 0) {
    pbVar3 = pbVar4 + 1;
    *pbVar4 = b32[*param_1] << 3 | cVar1 >> 2;
    *param_4 = *param_4 + -1;
  }
  if (param_1[2] == 0x3d) {
    if ((param_1[3] != 0x3d) || (param_1[4] != 0x3d)) goto code_r0x001035e6;
code_r0x001035f6:
    if (param_1[5] != 0x3d) goto code_r0x001035e6;
  }
  else {
    if (((char)b32[param_1[2]] < '\0') || (cVar2 = b32[param_1[3]], cVar2 < '\0'))
    goto code_r0x001035e6;
    pbVar4 = pbVar3;
    if (*param_4 != 0) {
      pbVar4 = pbVar3 + 1;
      *pbVar3 = cVar1 << 6 | b32[param_1[2]] * '\x02' | cVar2 >> 4;
      *param_4 = *param_4 + -1;
    }
    pbVar3 = pbVar4;
    if (param_1[4] == 0x3d) goto code_r0x001035f6;
    cVar1 = b32[param_1[4]];
    if (cVar1 < '\0') goto code_r0x001035e6;
    if (*param_4 != 0) {
      pbVar3 = pbVar4 + 1;
      *pbVar4 = cVar2 << 4 | cVar1 >> 1;
      *param_4 = *param_4 + -1;
    }
    if (param_1[5] != 0x3d) {
      if (((char)b32[param_1[5]] < '\0') || (cVar2 = b32[param_1[6]], cVar2 < '\0'))
      goto code_r0x001035e6;
      pbVar4 = pbVar3;
      if (*param_4 != 0) {
        pbVar4 = pbVar3 + 1;
        *pbVar3 = cVar1 << 7 | b32[param_1[5]] << 2 | cVar2 >> 3;
        *param_4 = *param_4 + -1;
      }
      pbVar3 = pbVar4;
      if (param_1[7] != 0x3d) {
        if ((char)b32[param_1[7]] < '\0') goto code_r0x001035e6;
        if (*param_4 != 0) {
          pbVar3 = pbVar4 + 1;
          *pbVar4 = cVar2 << 5 | b32[param_1[7]];
          *param_4 = *param_4 + -1;
        }
      }
      goto code_r0x001035d0;
    }
  }
  if ((param_1[6] == 0x3d) && (param_1[7] == 0x3d)) {
code_r0x001035d0:
    *param_3 = pbVar3;
    return 1;
  }
code_r0x001035e6:
  *param_3 = pbVar3;
  return 0;
}

