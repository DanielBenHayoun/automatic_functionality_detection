
ulong * memchr2(ulong *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  cVar5 = (char)param_3;
  cVar6 = (char)param_2;
  if (cVar6 == cVar5) {
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)PTR_memchr_00308ef8)(param_1,param_2 & 0xff,param_4);
    return (ulong *)uVar3;
  }
  if ((param_4 != 0) && (((ulong)param_1 & 7) != 0)) {
    cVar2 = *(char *)param_1;
    while( true ) {
      if ((cVar2 == cVar5) || (cVar2 == cVar6)) {
        return param_1;
      }
      param_1 = (ulong *)((long)param_1 + 1);
      param_4 = param_4 - 1;
      if ((param_4 == 0) || (((ulong)param_1 & 7) == 0)) break;
      cVar2 = *(char *)param_1;
    }
  }
  uVar8 = SEXT48((int)(((uint)param_2 & 0xff) << 8 | (uint)param_2 & 0xff));
  uVar9 = SEXT48((int)(((uint)param_3 & 0xff) << 8 | (uint)param_3 & 0xff));
  uVar8 = uVar8 | uVar8 << 0x10;
  uVar9 = uVar9 | uVar9 << 0x10;
  uVar8 = uVar8 | uVar8 << 0x20;
  uVar9 = uVar9 | uVar9 << 0x20;
  if (7 < param_4) {
    uVar7 = uVar8 ^ *param_1;
    uVar4 = *param_1 ^ uVar9;
    if (((~uVar4 & uVar4 + 0xfefefefefefefeff | uVar7 + 0xfefefefefefefeff & ~uVar7) &
        0x8080808080808080) != 0) goto code_r0x001038bd;
    param_4 = param_4 - 8;
    uVar10 = (uint)param_4;
    while ((param_1 = param_1 + 1, param_4 != (ulong)(uVar10 & 7) &&
           (uVar4 = *param_1 ^ uVar9, uVar7 = *param_1 ^ uVar8,
           ((uVar7 + 0xfefefefefefefeff & ~uVar7 | ~uVar4 & uVar4 + 0xfefefefefefefeff) &
           0x8080808080808080) == 0))) {
      param_4 = param_4 - 8;
    }
  }
  if (param_4 == 0) {
    return (ulong *)0;
  }
code_r0x001038bd:
  if ((*(char *)param_1 != cVar5) && (*(char *)param_1 != cVar6)) {
    puVar1 = (ulong *)((long)param_1 + param_4);
    do {
      param_1 = (ulong *)((long)param_1 + 1);
      if (param_1 == puVar1) {
        return (ulong *)0;
      }
    } while ((*(char *)param_1 != cVar6) && (*(char *)param_1 != cVar5));
  }
  return param_1;
}

