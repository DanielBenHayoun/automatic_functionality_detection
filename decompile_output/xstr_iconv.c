
ulong xstr_iconv(uint *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  ulong uVar4;
  byte bVar5;
  long extraout_RDX;
  uint *puVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  uint uStack60;
  long lStack56;
  long lStack40;
  
  lStack40 = str_iconv();
  if ((lStack40 != 0) || (piVar3 = (int *)func_0x00101610(), *piVar3 != 0xc)) {
    return lStack40;
  }
  xalloc_die();
  lStack56 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (uint *)0x0) {
    param_1 = &uStack60;
  }
  puVar6 = param_2;
  puVar7 = param_1;
  uVar4 = func_0x00101710();
  if ((0xfffffffffffffffd < uVar4) && (extraout_RDX != 0)) {
    puVar7 = (uint *)0x0;
    cVar1 = hard_locale();
    if (cVar1 == '\0') {
      uVar4 = 1;
      *param_1 = (uint)*(byte *)param_2;
    }
  }
  if (lStack56 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x001016f0();
  uVar4 = 0;
  if (puVar7 != puVar6) {
    do {
      bVar2 = *(byte *)puVar7;
      bVar5 = *(byte *)puVar6;
      if ((byte)(bVar2 + 0xbf) < 0x1a) {
        bVar2 = bVar2 + 0x20;
      }
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        bVar5 = bVar5 + 0x20;
      }
      if (bVar2 == 0) break;
      puVar7 = (uint *)((long)puVar7 + 1);
      puVar6 = (uint *)((long)puVar6 + 1);
    } while (bVar2 == bVar5);
    uVar4 = (ulong)((uint)bVar2 - (uint)bVar5);
  }
  return uVar4;
}

