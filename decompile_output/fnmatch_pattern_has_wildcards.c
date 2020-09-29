
undefined8 fnmatch_pattern_has_wildcards(byte *param_1,ulong param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  
  uVar2 = (ulong)*param_1;
code_r0x0010539e:
  pbVar3 = param_1 + 1;
  switch(uVar2) {
  case 0:
    return 0;
  case 0x21:
  case 0x2b:
  case 0x40:
    if ((param_2 & 0x20) == 0) break;
    pbVar1 = param_1 + 1;
    uVar2 = (ulong)*pbVar1;
    param_1 = pbVar3;
    if (*pbVar1 == 0x28) {
code_r0x001053bd:
      return 1;
    }
    goto code_r0x0010539e;
  case 0x28:
  case 0x29:
  case 0x2e:
  case 0x7b:
  case 0x7d:
    if ((param_2 & 0x8000000) != 0) {
      return 1;
    }
    break;
  case 0x2a:
  case 0x3f:
  case 0x5b:
    goto code_r0x001053bd;
  case 0x5c:
    if ((param_2 & 0x8000000) == 0) {
      if (((param_2 & 2) == 0) && (param_1[1] != 0)) {
        pbVar3 = param_1 + 2;
      }
      uVar2 = (ulong)*pbVar3;
      param_1 = pbVar3;
      goto code_r0x0010539e;
    }
  }
  uVar2 = (ulong)param_1[1];
  param_1 = pbVar3;
  goto code_r0x0010539e;
}

