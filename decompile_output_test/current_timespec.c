
undefined  [16] current_timespec(void)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  undefined8 uStack40;
  undefined8 uStack32;
  long lStack16;
  
  bVar9 = 0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x00103370(0,&uStack40);
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT88(uStack32,uStack40);
  }
  func_0x00103420();
  pbVar1 = (byte *)func_0x00103700();
  uVar2 = 1;
  bVar6 = false;
  bVar8 = pbVar1 == (byte *)0x0;
  if (!bVar8) {
    lVar3 = 2;
    pbVar4 = pbVar1;
    pbVar5 = &UNK_00119f86;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar8 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + (ulong)bVar9 * -2 + 1;
      pbVar5 = pbVar5 + (ulong)bVar9 * -2 + 1;
    } while (bVar8);
    uVar2 = 0;
    bVar7 = false;
    bVar6 = (!bVar6 && !bVar8) == bVar6;
    if (!bVar6) {
      lVar3 = 6;
      pbVar4 = pbVar1;
      pbVar5 = &UNK_00119f88;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar7 = *pbVar4 < *pbVar5;
        bVar6 = *pbVar4 == *pbVar5;
        pbVar4 = pbVar4 + (ulong)bVar9 * -2 + 1;
        pbVar5 = pbVar5 + (ulong)bVar9 * -2 + 1;
      } while (bVar6);
      return CONCAT88(pbVar1,(ulong)((!bVar7 && !bVar6) != bVar7));
    }
  }
  return CONCAT88(pbVar1,uVar2);
}

