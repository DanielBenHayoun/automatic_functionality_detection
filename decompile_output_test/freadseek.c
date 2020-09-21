
ulong freadseek(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  long in_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  ulong uStack4160;
  undefined auStack4152 [4104];
  long lStack48;
  
  bVar14 = 0;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0;
  if (param_2 != 0) {
    lVar3 = freadahead();
    if (lVar3 != 0) {
      do {
        lVar4 = freadptr(param_1,&uStack4160);
        if ((lVar4 != 0) && (uStack4160 != 0)) {
          uVar6 = uStack4160;
          if (param_2 < uStack4160) {
            uVar6 = param_2;
          }
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar6;
          param_2 = param_2 - uVar6;
          if (param_2 == 0) goto code_r0x00106270;
          lVar3 = lVar3 - uVar6;
          if (lVar3 == 0) break;
        }
        iVar1 = func_0x001017f0(param_1);
        if (iVar1 == -1) goto code_r0x00106231;
        param_2 = param_2 - 1;
        if (param_2 == 0) goto code_r0x00106270;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = func_0x00101880(param_1);
    if (((int)uVar2 < 0) || (lVar3 = func_0x001017c0((ulong)uVar2,0,1), lVar3 < 0)) {
      do {
        uVar6 = 0x1000;
        if (param_2 < 0x1001) {
          uVar6 = param_2;
        }
        uVar5 = func_0x00101920(auStack4152,0x1000,1,uVar6,param_1);
        if (uVar5 < uVar6) goto code_r0x00106231;
        param_2 = param_2 - uVar6;
      } while (param_2 != 0);
code_r0x00106270:
      uVar6 = 0;
    }
    else {
      uVar6 = rpl_fseeko(param_1,param_2,1);
    }
  }
code_r0x00106243:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
  func_0x00101770();
  pbVar9 = (byte *)func_0x00101900();
  uVar7 = 1;
  bVar11 = false;
  bVar13 = pbVar9 == (byte *)0x0;
  if (!bVar13) {
    lVar3 = 2;
    pbVar8 = pbVar9;
    pbVar10 = &UNK_001078a0;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar11 = *pbVar8 < *pbVar10;
      bVar13 = *pbVar8 == *pbVar10;
      pbVar8 = pbVar8 + (ulong)bVar14 * -2 + 1;
      pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
    } while (bVar13);
    uVar7 = 0;
    bVar12 = false;
    bVar11 = (!bVar11 && !bVar13) == bVar11;
    if (!bVar11) {
      lVar3 = 6;
      pbVar8 = &UNK_001078a2;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar12 = *pbVar9 < *pbVar8;
        bVar11 = *pbVar9 == *pbVar8;
        pbVar9 = pbVar9 + (ulong)bVar14 * -2 + 1;
        pbVar8 = pbVar8 + (ulong)bVar14 * -2 + 1;
      } while (bVar11);
      return (ulong)((!bVar12 && !bVar11) != bVar12);
    }
  }
  return uVar7;
code_r0x00106231:
  iVar1 = func_0x001016e0(param_1);
  uVar6 = (ulong)-(uint)(iVar1 != 0);
  goto code_r0x00106243;
}

