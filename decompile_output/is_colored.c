
ulong is_colored(uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  uVar2 = 0;
  uVar1 = *(ulong *)(color_indicator + (ulong)param_1 * 0x10);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      return (ulong)(**(byte **)(color_indicator + (ulong)param_1 * 0x10 + 8) != 0x30);
    }
    bVar6 = uVar1 < 2;
    bVar7 = uVar1 == 2;
    uVar2 = 1;
    if (bVar7) {
      lVar3 = 2;
      pbVar4 = *(byte **)(color_indicator + (ulong)param_1 * 0x10 + 8);
      pbVar5 = &UNK_00117844;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar6 = *pbVar4 < *pbVar5;
        bVar7 = *pbVar4 == *pbVar5;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while (bVar7);
      uVar2 = (ulong)((!bVar6 && !bVar7) != bVar6);
    }
  }
  return uVar2;
}

