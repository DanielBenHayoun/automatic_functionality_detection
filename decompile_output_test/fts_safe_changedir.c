
ulong fts_safe_changedir(long param_1,ulong param_2,ulong param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  byte *pbVar6;
  byte *extraout_RDX;
  byte bVar8;
  ulong uVar7;
  uint *puVar9;
  byte *pbVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  byte bStack217;
  long lStack216;
  long lStack208;
  long lStack64;
  
  bVar14 = 0;
  param_3 = param_3 & 0xffffffff;
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar7 = (ulong)uVar1;
  bVar8 = (byte)(uVar7 >> 8);
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  bVar12 = false;
  bVar13 = param_4 == (uint *)0x0;
  iVar2 = (int)param_3;
  if (bVar13) {
code_r0x00107360:
    if ((uVar1 & 4) != 0) {
code_r0x00107365:
      if (((uVar1 & 0x200) != 0) && (-1 < iVar2)) {
        uVar7 = 0;
        func_0x00101b70(param_3);
        goto code_r0x00107375;
      }
      uVar7 = 0;
      goto code_r0x00107375;
    }
    if (iVar2 < 0) {
      bStack217 = 0;
      goto code_r0x001072f4;
    }
    bStack217 = 0;
    uVar11 = param_3;
  }
  else {
    pbVar6 = &UNK_0010c4a1;
    lVar5 = 3;
    puVar9 = param_4;
    pbVar10 = &UNK_0010c4a1;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar12 = *(byte *)puVar9 < *pbVar10;
      bVar13 = *(byte *)puVar9 == *pbVar10;
      puVar9 = (uint *)((long)puVar9 + 1);
      pbVar10 = pbVar10 + 1;
    } while (bVar13);
    if ((!bVar12 && !bVar13) != bVar12) goto code_r0x00107360;
    if ((uVar1 & 4) != 0) goto code_r0x00107365;
    if (-1 < iVar2) goto code_r0x001074ca;
    if ((uVar1 & 0x200) == 0) {
code_r0x001072ef:
      bStack217 = 1;
    }
    else {
      bStack217 = i_ring_empty(param_1 + 0x60);
      if (bStack217 == 0) {
        uVar3 = i_ring_pop(param_1 + 0x60);
        uVar11 = (ulong)uVar3;
        uVar1 = *(uint *)(param_1 + 0x48);
        bVar8 = (byte)((ulong)uVar1 >> 8);
        if (-1 < (int)uVar3) {
          param_3 = (ulong)uVar3;
          bStack217 = 1;
          if ((uVar1 & 2) == 0) goto code_r0x001073e0;
          goto code_r0x00107320;
        }
        goto code_r0x001072ef;
      }
    }
code_r0x001072f4:
    uVar1 = diropen_isra_6((ulong)*(uint *)(param_1 + 0x2c),(ulong)uVar1,param_4);
    uVar11 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      uVar7 = 0xffffffff;
      goto code_r0x00107375;
    }
    uVar1 = *(uint *)(param_1 + 0x48);
    bVar8 = (byte)((ulong)uVar1 >> 8);
  }
  if ((uVar1 & 2) == 0) {
    bVar12 = param_4 == (uint *)0x0;
    if (bVar12) goto code_r0x001073e0;
    pbVar6 = &UNK_0010c4a1;
    goto code_r0x001073c6;
  }
code_r0x00107320:
  iVar2 = func_0x00101c70(1,uVar11,&lStack216);
  if (iVar2 == 0) {
    if ((*(long *)(param_2 + 0x78) == lStack216) && (*(long *)(param_2 + 0x80) == lStack208)) {
      bVar8 = (byte)((ulong)*(uint *)(param_1 + 0x48) >> 8);
      goto code_r0x001073e0;
    }
    puVar4 = (undefined4 *)func_0x001019c0();
    *puVar4 = 2;
  }
  uVar7 = 0xffffffff;
code_r0x0010733f:
  if ((int)param_3 < 0) {
    param_4 = (uint *)func_0x001019c0();
    uVar1 = *param_4;
    param_3 = (ulong)uVar1;
    func_0x00101b70(uVar11);
    *param_4 = uVar1;
  }
code_r0x00107375:
  do {
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar7;
    }
    func_0x00101ad0();
    pbVar6 = extraout_RDX;
code_r0x001074ca:
    bVar8 = (byte)(uVar7 >> 8);
    bVar12 = (uVar7 & 2) == 0;
    bStack217 = 1;
    uVar11 = param_3;
    if (!bVar12) goto code_r0x00107320;
code_r0x001073c6:
    bVar13 = false;
    lVar5 = 3;
    puVar9 = param_4;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar13 = *(byte *)puVar9 < *pbVar6;
      bVar12 = *(byte *)puVar9 == *pbVar6;
      puVar9 = (uint *)((long)puVar9 + (ulong)bVar14 * -2 + 1);
      pbVar6 = pbVar6 + (ulong)bVar14 * -2 + 1;
    } while (bVar12);
    if ((!bVar13 && !bVar12) == bVar13) goto code_r0x00107320;
code_r0x001073e0:
    if ((bVar8 & 2) == 0) break;
    uVar7 = 0;
    param_2 = (ulong)((uint)bStack217 ^ 1);
    cwd_advance_fd(param_1,uVar11,param_2);
  } while( true );
  uVar1 = func_0x00101ca0();
  uVar7 = (ulong)uVar1;
  goto code_r0x0010733f;
}

