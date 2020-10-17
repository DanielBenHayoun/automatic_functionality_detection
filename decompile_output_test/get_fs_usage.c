
ulong get_fs_usage(uint *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long extraout_RDX;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  long in_FS_OFFSET;
  uint uStack476;
  long lStack472;
  long *plStack456;
  long *plStack448;
  uint *puStack440;
  long lStack424;
  long lStack416;
  long lStack408;
  long lStack400;
  long lStack392;
  long lStack384;
  long lStack376;
  long lStack352;
  undefined auStack294 [262];
  long lStack32;
  
  plVar10 = &lStack424;
  plVar11 = &lStack424;
  plStack448 = &lStack424;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = param_1;
  if (statvfs_works_cache_2531 < 0) {
    iVar3 = func_0x00102260(&lStack424);
    if ((iVar3 != 0) || (iVar3 = func_0x00102090(auStack294,&UNK_00110b23), iVar3 < 0)) {
      statvfs_works_cache_2531 = 0;
      goto code_r0x0010ba0a;
    }
    statvfs_works_cache_2531 = 1;
code_r0x0010b9c3:
    iVar3 = func_0x00102430();
    uVar4 = 0xffffffff;
    plVar11 = plVar10;
    if (iVar3 < 0) goto code_r0x0010ba5b;
    if (lStack416 == 0) {
      lStack416 = lStack424;
    }
  }
  else {
    if (statvfs_works_cache_2531 != 0) goto code_r0x0010b9c3;
code_r0x0010ba0a:
    iVar3 = func_0x00102380();
    lStack416 = lStack352;
    if (iVar3 < 0) {
      uVar4 = 0xffffffff;
      goto code_r0x0010ba5b;
    }
  }
  *param_3 = lStack416;
  param_3[1] = lStack408;
  param_3[2] = lStack400;
  param_3[3] = lStack392;
  *(byte *)(param_3 + 4) = (byte)((ulong)lStack392 >> 0x3f);
  param_3[5] = lStack384;
  param_3[6] = lStack376;
  uVar4 = 0;
code_r0x0010ba5b:
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x001021f0();
  lStack472 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar8 == (uint *)0x0) {
    puVar8 = &uStack476;
  }
  puVar12 = puVar8;
  plStack456 = param_3;
  puStack440 = param_1;
  uVar5 = func_0x00102210();
  if ((0xfffffffffffffffd < uVar5) && (extraout_RDX != 0)) {
    puVar12 = (uint *)0x0;
    cVar2 = hard_locale();
    if (cVar2 == '\0') {
      uVar5 = 1;
      *puVar8 = (uint)*(byte *)plVar11;
    }
  }
  if (lStack472 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x001021f0();
    lVar6 = func_0x001021b0();
    uVar7 = lVar6 + 1;
    puVar8 = puVar12;
    uVar5 = 0;
    do {
      uVar9 = uVar5 + 1;
      if ((((*(char *)((long)puVar12 + uVar5) == '\\') && (uVar5 + 4 < uVar7)) &&
          ((byte)(*(char *)((long)puVar12 + uVar9) - 0x30U) < 4)) &&
         ((cVar2 = *(char *)((long)puVar12 + uVar5 + 2), (byte)(cVar2 - 0x30U) < 8 &&
          (cVar1 = *(char *)((long)puVar12 + uVar5 + 3), (byte)(cVar1 - 0x30U) < 8)))) {
        *(char *)puVar8 = cVar1 + 'P' + (cVar2 + *(char *)((long)puVar12 + uVar9) * '\b') * '\b';
        uVar9 = uVar5 + 4;
      }
      else {
        *(char *)puVar8 = *(char *)((long)puVar12 + uVar5);
      }
      puVar8 = (uint *)((long)puVar8 + 1);
      uVar5 = uVar9;
    } while (uVar9 < uVar7);
    return uVar7;
  }
  return uVar5;
}

