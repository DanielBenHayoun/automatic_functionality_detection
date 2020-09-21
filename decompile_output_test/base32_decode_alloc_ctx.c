
ulong base32_decode_alloc_ctx
                (byte *param_1,ulong param_2,ulong param_3,byte **param_4,byte **param_5)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long *plVar9;
  byte **extraout_RDX;
  ulong uVar10;
  long in_FS_OFFSET;
  
  uVar3 = *(ulong *)(in_FS_OFFSET + 0x28);
  pbVar4 = (byte *)((param_3 >> 3) * 5 + 5);
  uVar10 = param_2;
  pbVar8 = pbVar4;
  pbVar5 = (byte *)func_0x00101780();
  *param_4 = pbVar5;
  if (pbVar5 == (byte *)0x0) {
code_r0x00103c18:
    param_1 = pbVar8;
    param_2 = uVar10;
    uVar6 = 1;
  }
  else {
    uVar6 = base32_decode_ctx(param_1,param_2,param_3,pbVar5);
    if ((char)uVar6 == '\0') {
      param_1 = *param_4;
      func_0x00101590();
      *param_4 = (byte *)0x0;
      uVar6 = uVar6 & 0xff;
    }
    else {
      uVar10 = param_2;
      pbVar8 = param_1;
      if (param_5 == (byte **)0x0) goto code_r0x00103c18;
      *param_5 = pbVar4;
    }
  }
  plVar9 = (long *)(uVar3 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (plVar9 == (long *)0x0) {
    return uVar6;
  }
  func_0x00101660();
  uVar7 = 0;
  if (((1 < param_2) && (-1 < (char)b64[*param_1])) && (cVar1 = b64[param_1[1]], -1 < cVar1)) {
    pbVar4 = *extraout_RDX;
    pbVar8 = pbVar4;
    if (*plVar9 != 0) {
      pbVar8 = pbVar4 + 1;
      *pbVar4 = b64[*param_1] << 2 | cVar1 >> 4;
      *plVar9 = *plVar9 + -1;
    }
    if (param_2 == 2) goto code_r0x00103d06;
    if (param_1[2] == 0x3d) {
      if ((param_2 != 4) || (param_1[3] != 0x3d)) goto code_r0x00103d06;
    }
    else {
      cVar2 = b64[param_1[2]];
      if (cVar2 < '\0') {
code_r0x00103d06:
        *extraout_RDX = pbVar8;
        return 0;
      }
      if (*plVar9 != 0) {
        *pbVar8 = cVar1 << 4 | cVar2 >> 2;
        *plVar9 = *plVar9 + -1;
        pbVar8 = pbVar8 + 1;
      }
      if (param_2 == 3) goto code_r0x00103d06;
      if (param_1[3] == 0x3d) {
        if (param_2 != 4) goto code_r0x00103d06;
      }
      else {
        if ((char)b64[param_1[3]] < '\0') goto code_r0x00103d06;
        if (*plVar9 != 0) {
          *pbVar8 = cVar2 << 6 | b64[param_1[3]];
          *plVar9 = *plVar9 + -1;
          pbVar8 = pbVar8 + 1;
        }
      }
    }
    *extraout_RDX = pbVar8;
    uVar7 = 1;
  }
  return uVar7;
}

