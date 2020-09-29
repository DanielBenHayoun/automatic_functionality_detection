
ulong xmem_cd_iconv(uint *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  long extraout_RDX;
  uint *puVar8;
  uint *puVar9;
  long in_FS_OFFSET;
  uint uStack76;
  long lStack72;
  long lStack56;
  undefined *puStack24;
  undefined *puStack16;
  
  puStack16 = &UNK_00108956;
  uVar3 = mem_cd_iconv();
  if ((int)uVar3 < 0) {
    puStack16 = &UNK_00108965;
    piVar4 = (int *)func_0x00101610();
    if (*piVar4 == 0xc) {
      puStack16 = &UNK_0010896f;
      xalloc_die();
      puStack24 = &UNK_00108976;
      puStack16 = (undefined *)(ulong)uVar3;
      lVar5 = str_cd_iconv();
      if (lVar5 == 0) {
        puStack24 = &UNK_0010898d;
        piVar4 = (int *)func_0x00101610();
        if (*piVar4 == 0xc) {
          puStack24 = &UNK_00108997;
          xalloc_die();
          puStack24 = (undefined *)lVar5;
          lStack56 = str_iconv();
          if ((lStack56 != 0) || (piVar4 = (int *)func_0x00101610(), *piVar4 != 0xc)) {
            return lStack56;
          }
          xalloc_die();
          lStack72 = *(long *)(in_FS_OFFSET + 0x28);
          if (param_1 == (uint *)0x0) {
            param_1 = &uStack76;
          }
          puVar8 = param_2;
          puVar9 = param_1;
          uVar6 = func_0x00101710();
          if ((0xfffffffffffffffd < uVar6) && (extraout_RDX != 0)) {
            puVar9 = (uint *)0x0;
            cVar1 = hard_locale();
            if (cVar1 == '\0') {
              uVar6 = 1;
              *param_1 = (uint)*(byte *)param_2;
            }
          }
          if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
            return uVar6;
          }
          func_0x001016f0();
          uVar6 = 0;
          if (puVar9 != puVar8) {
            do {
              bVar2 = *(byte *)puVar9;
              bVar7 = *(byte *)puVar8;
              if ((byte)(bVar2 + 0xbf) < 0x1a) {
                bVar2 = bVar2 + 0x20;
              }
              if ((byte)(bVar7 + 0xbf) < 0x1a) {
                bVar7 = bVar7 + 0x20;
              }
              if (bVar2 == 0) break;
              puVar9 = (uint *)((long)puVar9 + 1);
              puVar8 = (uint *)((long)puVar8 + 1);
            } while (bVar2 == bVar7);
            uVar6 = (ulong)((uint)bVar2 - (uint)bVar7);
          }
          return uVar6;
        }
      }
      return lVar5;
    }
  }
  return (ulong)uVar3;
}

