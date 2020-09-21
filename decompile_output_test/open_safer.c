
ulong open_safer(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  
  bVar11 = 0;
  uVar4 = 0;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 & 0x40) != 0) {
    uVar4 = param_3 & 0xffffffff;
  }
  uVar1 = func_0x00101d00(param_1,param_2,uVar4);
  uVar2 = fd_safer((ulong)uVar1);
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  func_0x00101ad0();
  pbVar6 = (byte *)func_0x00101cc0();
  uVar2 = 1;
  bVar8 = false;
  bVar10 = pbVar6 == (byte *)0x0;
  if (!bVar10) {
    lVar3 = 2;
    pbVar5 = pbVar6;
    pbVar7 = &UNK_0010c52c;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar8 = *pbVar5 < *pbVar7;
      bVar10 = *pbVar5 == *pbVar7;
      pbVar5 = pbVar5 + (ulong)bVar11 * -2 + 1;
      pbVar7 = pbVar7 + (ulong)bVar11 * -2 + 1;
    } while (bVar10);
    uVar2 = 0;
    bVar9 = false;
    bVar8 = (!bVar8 && !bVar10) == bVar8;
    if (!bVar8) {
      lVar3 = 6;
      pbVar5 = &UNK_0010c52e;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar9 = *pbVar6 < *pbVar5;
        bVar8 = *pbVar6 == *pbVar5;
        pbVar6 = pbVar6 + (ulong)bVar11 * -2 + 1;
        pbVar5 = pbVar5 + (ulong)bVar11 * -2 + 1;
      } while (bVar8);
      return (ulong)((!bVar9 && !bVar8) != bVar9);
    }
  }
  return uVar2;
}

