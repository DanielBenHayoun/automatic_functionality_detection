
ulong cycle_check(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  if (*(int *)(param_1 + 3) != 0x95f616) {
    func_0x00101b20(&UNK_0010c202,&UNK_0010c1f0,0x3c,__PRETTY_FUNCTION___3994);
    lVar6 = *(long *)(in_FS_OFFSET + 0x28);
    uVar4 = func_0x00101ce0();
    uVar5 = fd_safer((ulong)uVar4);
    if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar5;
    }
    func_0x00101ab0();
    pbVar8 = (byte *)func_0x00101c90();
    uVar5 = 1;
    bVar10 = false;
    bVar12 = pbVar8 == (byte *)0x0;
    if (!bVar12) {
      lVar6 = 2;
      pbVar7 = pbVar8;
      pbVar9 = &UNK_0010c22c;
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar10 = *pbVar7 < *pbVar9;
        bVar12 = *pbVar7 == *pbVar9;
        pbVar7 = pbVar7 + (ulong)bVar13 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
      } while (bVar12);
      uVar5 = 0;
      bVar11 = false;
      bVar10 = (!bVar10 && !bVar12) == bVar10;
      if (!bVar10) {
        lVar6 = 6;
        pbVar7 = &UNK_0010c22e;
        do {
          if (lVar6 == 0) break;
          lVar6 = lVar6 + -1;
          bVar11 = *pbVar8 < *pbVar7;
          bVar10 = *pbVar8 == *pbVar7;
          pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
          pbVar7 = pbVar7 + (ulong)bVar13 * -2 + 1;
        } while (bVar10);
        return (ulong)((!bVar11 && !bVar10) != bVar11);
      }
    }
    return uVar5;
  }
  uVar2 = param_1[2];
  lVar6 = param_2[1];
  if (uVar2 != 0) {
    if ((*param_1 != lVar6) || (*param_2 != param_1[1])) {
      uVar1 = uVar2 + 1;
      param_1[2] = uVar1;
      if ((uVar2 & uVar1) != 0) {
        return 0;
      }
      if (uVar1 != 0) goto code_r0x00108f38;
    }
    return 1;
  }
  param_1[2] = 1;
code_r0x00108f38:
  lVar3 = *param_2;
  *param_1 = lVar6;
  param_1[1] = lVar3;
  return 0;
}

