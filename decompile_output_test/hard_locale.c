
ulong hard_locale(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  
  bVar9 = 0;
  pbVar4 = (byte *)func_0x001013b0(param_1,0);
  uVar1 = 1;
  bVar6 = false;
  bVar8 = pbVar4 == (byte *)0x0;
  if (!bVar8) {
    lVar2 = 2;
    pbVar3 = pbVar4;
    pbVar5 = &UNK_001053e0;
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      bVar6 = *pbVar3 < *pbVar5;
      bVar8 = *pbVar3 == *pbVar5;
      pbVar3 = pbVar3 + (ulong)bVar9 * -2 + 1;
      pbVar5 = pbVar5 + (ulong)bVar9 * -2 + 1;
    } while (bVar8);
    uVar1 = 0;
    bVar7 = false;
    bVar6 = (!bVar6 && !bVar8) == bVar6;
    if (!bVar6) {
      lVar2 = 6;
      pbVar3 = &UNK_001053e2;
      do {
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        bVar7 = *pbVar4 < *pbVar3;
        bVar6 = *pbVar4 == *pbVar3;
        pbVar4 = pbVar4 + (ulong)bVar9 * -2 + 1;
        pbVar3 = pbVar3 + (ulong)bVar9 * -2 + 1;
      } while (bVar6);
      return (ulong)((!bVar7 && !bVar6) != bVar7);
    }
  }
  return uVar1;
}

