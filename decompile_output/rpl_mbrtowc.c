
ulong rpl_mbrtowc(uint *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  long in_FS_OFFSET;
  uint uStack52;
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (uint *)0x0) {
    param_1 = &uStack52;
  }
  puVar8 = param_1;
  uVar3 = func_0x001012d0();
  if ((0xfffffffffffffffd < uVar3) && (param_3 != 0)) {
    puVar8 = (uint *)0x0;
    cVar2 = hard_locale();
    if (cVar2 == '\0') {
      uVar3 = 1;
      *param_1 = (uint)*param_2;
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
  func_0x001012b0();
  lVar4 = func_0x00101230();
  uVar1 = *puVar8;
  uVar5 = rpl_fclose(puVar8);
  if ((uVar1 & 0x20) != 0) {
    if ((int)uVar5 == 0) {
      puVar6 = (undefined4 *)func_0x00101200();
      *puVar6 = 0;
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  if (((int)uVar5 != 0) && (uVar5 = 0xffffffff, lVar4 == 0)) {
    piVar7 = (int *)func_0x00101200();
    return (ulong)-(uint)(*piVar7 != 9);
  }
  return uVar5;
}

