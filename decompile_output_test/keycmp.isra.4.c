
ulong keycmp_isra_4(ulong param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,
                   ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_5 < param_1) {
    puVar8 = (undefined8 *)(param_5 * 0x10 + *param_2);
    uVar1 = puVar8[1];
    if (param_3 <= param_6) {
      return (ulong)(uVar1 != 0);
    }
    puVar9 = (undefined8 *)(param_6 * 0x10 + *param_4);
    uVar4 = *puVar9;
    uVar7 = puVar9[1];
    if (uVar1 == 0) {
code_r0x00102dd8:
      return (ulong)-(uint)(uVar7 != 0);
    }
    if (uVar7 == 0) {
      uVar4 = 1;
    }
    else {
      uVar2 = *puVar8;
      if (ignore_case == '\0') {
        if (hard_LC_COLLATE != '\0') {
          uVar3 = memcoll(uVar2,uVar1,uVar4,uVar7);
          puVar5 = (uint *)func_0x00101670();
          if (*puVar5 != 0) {
            collate_error((ulong)*puVar5,uVar2,uVar1,uVar4,uVar7);
          }
          return (ulong)uVar3;
        }
        uVar6 = uVar7;
        if (uVar1 <= uVar7) {
          uVar6 = uVar1;
        }
        uVar4 = func_0x001017e0(uVar2,uVar4,uVar6);
      }
      else {
        uVar6 = uVar7;
        if (uVar1 <= uVar7) {
          uVar6 = uVar1;
        }
        uVar4 = memcasecmp(uVar2,uVar4,uVar6);
      }
      if ((int)uVar4 == 0) {
        if (uVar7 <= uVar1) {
          return (ulong)(uVar1 != uVar7);
        }
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    if (param_6 < param_3) {
      uVar7 = *(ulong *)(param_6 * 0x10 + *param_4 + 8);
      goto code_r0x00102dd8;
    }
    uVar4 = 0;
  }
  return uVar4;
}

