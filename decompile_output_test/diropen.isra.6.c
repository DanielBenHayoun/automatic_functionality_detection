
/* WARNING: Removing unreachable block (ram,0x00109078) */
/* WARNING: Removing unreachable block (ram,0x0010a518) */

ulong diropen_isra_6(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  if ((param_2 & 0x200) != 0) {
    lVar5 = *(long *)(in_FS_OFFSET + 0x28);
    puVar6 = (uint *)0x0;
    uVar2 = func_0x00101ac0(param_1,param_3);
    uVar3 = fd_safer((ulong)uVar2);
    if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
    func_0x00101ad0();
    uVar2 = openat_safer();
    if (-1 < (int)uVar2) {
      lVar5 = func_0x00101d30((ulong)uVar2);
      if (lVar5 == 0) {
        puVar4 = (undefined4 *)func_0x001019c0();
        uVar1 = *puVar4;
        func_0x00101b70((ulong)uVar2);
        *puVar4 = uVar1;
        return 0;
      }
      *puVar6 = uVar2;
      return lVar5;
    }
    return 0;
  }
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = func_0x00101d00(param_3,(ulong)((param_2 & 0x10) << 0xd | 0x90900),0);
  uVar3 = fd_safer((ulong)uVar2);
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
  func_0x00101ad0();
  pbVar8 = (byte *)func_0x00101cc0();
  uVar3 = 1;
  bVar10 = false;
  bVar12 = pbVar8 == (byte *)0x0;
  if (!bVar12) {
    lVar5 = 2;
    pbVar7 = pbVar8;
    pbVar9 = &UNK_0010c52c;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar10 = *pbVar7 < *pbVar9;
      bVar12 = *pbVar7 == *pbVar9;
      pbVar7 = pbVar7 + (ulong)bVar13 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
    } while (bVar12);
    uVar3 = 0;
    bVar11 = false;
    bVar10 = (!bVar10 && !bVar12) == bVar10;
    if (!bVar10) {
      lVar5 = 6;
      pbVar7 = &UNK_0010c52e;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar11 = *pbVar8 < *pbVar7;
        bVar10 = *pbVar8 == *pbVar7;
        pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
        pbVar7 = pbVar7 + (ulong)bVar13 * -2 + 1;
      } while (bVar10);
      return (ulong)((!bVar11 && !bVar10) != bVar11);
    }
  }
  return uVar3;
}

