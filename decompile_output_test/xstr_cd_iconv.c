
ulong xstr_cd_iconv(uint *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  byte bVar6;
  long extraout_RDX;
  uint *puVar7;
  uint *puVar8;
  long in_FS_OFFSET;
  uint uStack68;
  long lStack64;
  long lStack48;
  undefined *puStack16;
  
  puStack16 = &UNK_00108976;
  lVar3 = str_cd_iconv();
  if (lVar3 == 0) {
    puStack16 = &UNK_0010898d;
    piVar4 = (int *)func_0x00101610();
    if (*piVar4 == 0xc) {
      puStack16 = &UNK_00108997;
      xalloc_die();
      puStack16 = (undefined *)lVar3;
      lStack48 = str_iconv();
      if ((lStack48 != 0) || (piVar4 = (int *)func_0x00101610(), *piVar4 != 0xc)) {
        return lStack48;
      }
      xalloc_die();
      lStack64 = *(long *)(in_FS_OFFSET + 0x28);
      if (param_1 == (uint *)0x0) {
        param_1 = &uStack68;
      }
      puVar7 = param_2;
      puVar8 = param_1;
      uVar5 = func_0x00101710();
      if ((0xfffffffffffffffd < uVar5) && (extraout_RDX != 0)) {
        puVar8 = (uint *)0x0;
        cVar1 = hard_locale();
        if (cVar1 == '\0') {
          uVar5 = 1;
          *param_1 = (uint)*(byte *)param_2;
        }
      }
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar5;
      }
      func_0x001016f0();
      uVar5 = 0;
      if (puVar8 != puVar7) {
        do {
          bVar2 = *(byte *)puVar8;
          bVar6 = *(byte *)puVar7;
          if ((byte)(bVar2 + 0xbf) < 0x1a) {
            bVar2 = bVar2 + 0x20;
          }
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 + 0x20;
          }
          if (bVar2 == 0) break;
          puVar8 = (uint *)((long)puVar8 + 1);
          puVar7 = (uint *)((long)puVar7 + 1);
        } while (bVar2 == bVar6);
        uVar5 = (ulong)((uint)bVar2 - (uint)bVar6);
      }
      return uVar5;
    }
  }
  return lVar3;
}

