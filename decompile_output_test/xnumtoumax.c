
ulong xnumtoumax(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                undefined8 param_6,uint param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  ulong uStack72;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = xstrtoumax(param_1,0,param_2 & 0xffffffff,&uStack72);
  uVar3 = uStack72;
  if (iVar1 == 0) {
    if ((param_3 <= uStack72) && (uStack72 <= param_4)) goto code_r0x00106af4;
    puVar4 = (uint *)func_0x001015b0();
    *puVar4 = (-(uint)(uVar3 < 0x40000000) & 0xffffffd7) + 0x4b;
  }
  else {
    puVar4 = (uint *)func_0x001015b0();
    if (iVar1 == 1) {
      *puVar4 = 0x4b;
    }
    else {
      if (iVar1 == 3) {
        *puVar4 = 0;
      }
    }
  }
  uVar2 = quote(param_1);
  uVar3 = (ulong)*puVar4;
  if (*puVar4 == 0x16) {
    uVar3 = 0;
  }
  if (param_7 == 0) {
    param_7 = 1;
  }
  func_0x00101810((ulong)param_7,uVar3,&UNK_00108040,param_6,uVar2);
code_r0x00106af4:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uStack72;
  }
  func_0x00101660();
  uVar2 = xnumtoumax();
  return uVar2;
}

