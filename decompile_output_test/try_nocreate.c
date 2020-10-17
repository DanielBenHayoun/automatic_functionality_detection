
ulong try_nocreate(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined auStack168 [152];
  long lStack16;
  
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = func_0x001018c0(1,param_1,auStack168);
  piVar3 = (int *)func_0x001017b0();
  if (iVar1 != 0) {
    if (*piVar3 != 0x4b) {
      uVar4 = (ulong)-(uint)(*piVar3 != 2);
      goto code_r0x0010483b;
    }
  }
  *piVar3 = 0x11;
  uVar4 = 0xffffffff;
code_r0x0010483b:
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x001018d0();
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR_mkdir_00309e28)();
  return uVar2;
}

