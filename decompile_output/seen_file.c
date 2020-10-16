
ulong seen_file(ulong param_1,undefined *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
  undefined **ppuVar6;
  long in_FS_OFFSET;
  undefined *puStack40;
  undefined8 uStack32;
  undefined8 uStack24;
  long lStack16;
  
  ppuVar6 = &puStack40;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  if (param_1 != 0) {
    uStack32 = param_3[1];
    uStack24 = *param_3;
    puStack40 = param_2;
    uVar4 = hash_lookup();
    uVar4 = uVar4 & 0xffffffffffffff00 | (ulong)(uVar4 != 0);
    param_2 = (undefined *)ppuVar6;
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  func_0x00103420();
  uVar2 = 0x2d;
  uVar5 = (uint)param_1 & 0xf000;
  if ((((uVar5 != 0x8000) && (uVar2 = 100, uVar5 != 0x4000)) && (uVar2 = 0x62, uVar5 != 0x6000)) &&
     (((uVar2 = 99, uVar5 != 0x2000 && (uVar2 = 0x6c, uVar5 != 0xa000)) &&
      ((uVar2 = 0x70, uVar5 != 0x1000 && (uVar2 = 0x73, uVar5 != 0xc000)))))) {
    uVar2 = 0x3f;
  }
  *param_2 = uVar2;
  param_2[1] = (-((param_1 & 0x100) == 0) & 0xbbU) + 0x72;
  param_2[2] = (-((param_1 & 0x80) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 0x40) == 0);
  if ((param_1 & 0x800) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  param_2[3] = cVar3;
  param_2[4] = (-((param_1 & 0x20) == 0) & 0xbbU) + 0x72;
  param_2[5] = (-((param_1 & 0x10) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 8) == 0);
  if ((param_1 & 0x400) == 0) {
    cVar3 = (bVar1 & 0xb5) + 0x78;
  }
  else {
    cVar3 = (bVar1 & 0xe0) + 0x73;
  }
  param_2[6] = cVar3;
  param_2[7] = (-((param_1 & 4) == 0) & 0xbbU) + 0x72;
  param_2[8] = (-((param_1 & 2) == 0) & 0xb6U) + 0x77;
  bVar1 = -((param_1 & 1) == 0);
  if ((param_1 & 0x200) != 0) {
    param_2[9] = (bVar1 & 0xe0) + 0x74;
    *(undefined2 *)(param_2 + 10) = 0x20;
    return 0x20;
  }
  param_2[9] = (bVar1 & 0xb5) + 0x78;
  *(undefined2 *)(param_2 + 10) = 0x20;
  return 0x20;
}

