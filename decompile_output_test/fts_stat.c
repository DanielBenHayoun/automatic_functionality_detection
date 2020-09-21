
ulong fts_stat(long param_1,long param_2,char param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  lVar1 = param_2 + 0x78;
  if ((((*(long *)(param_2 + 0x58) == 0) && ((*(uint *)(param_1 + 0x48) & 1) != 0)) ||
      ((*(uint *)(param_1 + 0x48) & 2) != 0)) || (param_3 != '\0')) {
    iVar2 = func_0x00101c20(1,*(undefined8 *)(param_2 + 0x30),lVar1);
    if (iVar2 == 0) goto code_r0x00106b8b;
    piVar4 = (int *)func_0x001019c0();
    iVar2 = *piVar4;
    if (iVar2 == 2) {
      iVar2 = func_0x00101ab0(1,*(undefined8 *)(param_2 + 0x30),lVar1);
      if (iVar2 == 0) {
        *piVar4 = 0;
        return 0xd;
      }
      iVar2 = *piVar4;
    }
  }
  else {
    iVar2 = func_0x00101b20(1,(ulong)*(uint *)(param_1 + 0x2c),*(undefined8 *)(param_2 + 0x30),lVar1
                            ,0x100);
    if (iVar2 == 0) {
code_r0x00106b8b:
      uVar3 = *(uint *)(param_2 + 0x90) & 0xf000;
      if (uVar3 != 0x4000) {
        if (uVar3 == 0xa000) {
          return 0xc;
        }
        return (ulong)(uVar3 == 0x8000) * 5 + 3;
      }
      uVar5 = *(ulong *)(param_2 + 0x88);
      if ((uVar5 < 2) || (*(long *)(param_2 + 0x58) < 1)) {
        uVar5 = 0xffffffffffffffff;
      }
      else {
        if ((*(byte *)(param_1 + 0x48) & 0x20) == 0) {
          uVar5 = uVar5 - 2;
        }
      }
      *(ulong *)(param_2 + 0x68) = uVar5;
      if (*(char *)(param_2 + 0x108) != '.') {
        return 1;
      }
      if ((*(char *)(param_2 + 0x109) != '\0') &&
         ((*(uint *)(param_2 + 0x108) & 0xffff00) != 0x2e00)) {
        return 1;
      }
      return (ulong)((-(uint)(*(long *)(param_2 + 0x58) == 0) & 0xfffffffc) + 5);
    }
    piVar4 = (int *)func_0x001019c0();
    iVar2 = *piVar4;
  }
  *(int *)(param_2 + 0x40) = iVar2;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  puVar6 = (undefined8 *)(param_2 + 0x80U & 0xfffffffffffffff8);
  uVar5 = (ulong)(((int)lVar1 - (int)puVar6) + 0x90U >> 3);
  while (uVar5 != 0) {
    uVar5 = uVar5 - 1;
    *puVar6 = 0;
    puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
  }
  return 10;
}

