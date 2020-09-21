
ulong rpl_mbrtowc(uint *param_1,byte *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  uint uStack52;
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (uint *)0x0) {
    param_1 = &uStack52;
  }
  puVar4 = param_1;
  uVar3 = func_0x00102870();
  if ((0xfffffffffffffffd < uVar3) && (param_3 != 0)) {
    puVar4 = (uint *)0x0;
    cVar1 = hard_locale();
    if (cVar1 == '\0') {
      uVar3 = 1;
      *param_1 = (uint)*param_2;
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
  func_0x00102850();
  if (puVar4 != (uint *)0x0) {
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)PTR_setenv_00317e00)(&UNK_0011178e,puVar4,1);
    return uVar2;
  }
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR_unsetenv_00317f70)(&UNK_0011178e);
  return uVar2;
}

