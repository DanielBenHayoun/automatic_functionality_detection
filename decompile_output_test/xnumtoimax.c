
long xnumtoimax(undefined8 param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6,uint param_7)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint *puVar6;
  long in_FS_OFFSET;
  long lStack72;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = xstrtoimax(param_1,0,param_2 & 0xffffffff,&lStack72);
  lVar1 = lStack72;
  if (iVar2 == 0) {
    if ((param_3 <= lStack72) && (lStack72 <= param_4)) goto code_r0x00104d46;
    puVar6 = (uint *)func_0x00101400();
    if (0x3fffffff < lVar1) goto code_r0x00104d05;
    uVar3 = 0x22;
    if (lVar1 < -0x40000000) {
      uVar3 = 0x4b;
    }
    *puVar6 = uVar3;
  }
  else {
    puVar6 = (uint *)func_0x00101400();
    if (iVar2 == 1) {
code_r0x00104d05:
      *puVar6 = 0x4b;
    }
    else {
      if (iVar2 == 3) {
        *puVar6 = 0;
      }
    }
  }
  uVar4 = quote(param_1);
  uVar5 = (ulong)*puVar6;
  if (*puVar6 == 0x16) {
    uVar5 = 0;
  }
  if (param_7 == 0) {
    param_7 = 1;
  }
  func_0x00101630((ulong)param_7,uVar5,&UNK_001060a4,param_6,uVar4);
code_r0x00104d46:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lStack72;
  }
  func_0x001014b0();
  uVar4 = xnumtoimax();
  return uVar4;
}

