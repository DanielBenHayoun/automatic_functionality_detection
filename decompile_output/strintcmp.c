
ulong strintcmp(byte *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar4 = (ulong)*param_1;
  bVar1 = *param_2;
  uVar9 = (ulong)bVar1;
  if (*param_1 == 0x2d) {
    do {
      param_1 = param_1 + 1;
      bVar6 = *param_1;
    } while (bVar6 == 0x30);
    uVar7 = (uint)bVar6 - 0x30;
    if (bVar1 != 0x2d) {
      if (uVar7 < 10) {
        return 0xffffffff;
      }
      while ((char)uVar9 == '0') {
        param_2 = param_2 + 1;
        uVar9 = (ulong)*param_2;
      }
      return (ulong)-(uint)((int)uVar9 - 0x30U < 10);
    }
    do {
      param_2 = param_2 + 1;
      bVar1 = *param_2;
    } while (bVar1 == 0x30);
    if (bVar6 == bVar1) {
      uVar5 = (uint)bVar6 - 0x30;
      do {
        uVar8 = (uint)bVar1;
        uVar3 = (uint)bVar6;
        if (9 < uVar7) goto code_r0x001052a1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        bVar1 = *param_2;
        bVar6 = *param_1;
        uVar5 = (uint)bVar1 - 0x30;
        uVar7 = uVar5;
      } while (bVar6 == bVar1);
      uVar7 = (uint)bVar6 - 0x30;
    }
    else {
      uVar5 = (uint)bVar1 - 0x30;
    }
    uVar8 = (uint)bVar1;
    uVar3 = (uint)bVar6;
    if (uVar7 < 10) {
      uVar9 = 0;
      do {
        lVar2 = uVar9 + 1;
        uVar9 = uVar9 + 1;
      } while ((uint)param_1[lVar2] - 0x30 < 10);
      if (9 < uVar5) {
        return (ulong)-(uint)(uVar9 != 0);
      }
    }
    else {
code_r0x001052a1:
      uVar9 = 0;
      if (9 < uVar5) {
        return 0;
      }
    }
    uVar4 = 0;
    do {
      lVar2 = uVar4 + 1;
      uVar4 = uVar4 + 1;
    } while ((uint)param_2[lVar2] - 0x30 < 10);
    if (uVar9 == uVar4) {
      if (uVar9 == 0) {
        return 0;
      }
      return (ulong)(uVar8 - uVar3);
    }
    return (ulong)((-(uint)(uVar9 < uVar4) & 2) - 1);
  }
  if (bVar1 == 0x2d) {
    do {
      param_2 = param_2 + 1;
    } while (*param_2 == 0x30);
    if ((uint)*param_2 - 0x30 < 10) {
      return 1;
    }
    while ((char)uVar4 == '0') {
      param_1 = param_1 + 1;
      uVar4 = (ulong)*param_1;
    }
    return (ulong)((int)uVar4 - 0x30U < 10);
  }
  while( true ) {
    uVar7 = (uint)uVar4;
    if ((char)uVar4 != '0') break;
    param_1 = param_1 + 1;
    uVar4 = (ulong)*param_1;
  }
  while( true ) {
    uVar5 = (uint)uVar9;
    if ((char)uVar9 != '0') break;
    param_2 = param_2 + 1;
    uVar9 = (ulong)*param_2;
  }
  uVar3 = uVar5 - 0x30;
  if ((char)uVar9 == (char)uVar4) {
    if (9 < uVar3) {
      return 0;
    }
    do {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      bVar1 = *param_2;
      bVar6 = *param_1;
      uVar7 = (uint)bVar6;
      uVar5 = (uint)bVar1;
      uVar3 = (uint)bVar1 - 0x30;
      if (bVar6 != bVar1) goto code_r0x00105308;
    } while (uVar3 < 10);
    uVar5 = (uint)bVar6;
  }
  else {
code_r0x00105308:
    bVar6 = (byte)uVar7;
    if (uVar7 - 0x30 < 10) {
      uVar9 = 0;
      do {
        lVar2 = uVar9 + 1;
        uVar9 = uVar9 + 1;
      } while ((uint)param_1[lVar2] - 0x30 < 10);
      if (9 < uVar3) {
        return (ulong)(uVar9 != 0);
      }
      goto code_r0x001051b0;
    }
  }
  uVar9 = 0;
  if (9 < uVar3) {
    return 0;
  }
code_r0x001051b0:
  uVar4 = 0;
  do {
    lVar2 = uVar4 + 1;
    uVar4 = uVar4 + 1;
  } while ((uint)param_2[lVar2] - 0x30 < 10);
  if (uVar9 == uVar4) {
    if (uVar9 == 0) {
      return 0;
    }
    return (ulong)(bVar6 - uVar5);
  }
  return (ulong)(-(uint)(uVar9 < uVar4) | 1);
}

