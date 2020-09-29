
void strmode(ulong param_1,undefined *param_2)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  
  uVar2 = 0x2d;
  uVar4 = (uint)param_1 & 0xf000;
  if ((((uVar4 != 0x8000) && (uVar2 = 100, uVar4 != 0x4000)) && (uVar2 = 0x62, uVar4 != 0x6000)) &&
     (((uVar2 = 99, uVar4 != 0x2000 && (uVar2 = 0x6c, uVar4 != 0xa000)) &&
      ((uVar2 = 0x70, uVar4 != 0x1000 && (uVar2 = 0x73, uVar4 != 0xc000)))))) {
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
    return;
  }
  param_2[9] = (bVar1 & 0xb5) + 0x78;
  *(undefined2 *)(param_2 + 10) = 0x20;
  return;
}

