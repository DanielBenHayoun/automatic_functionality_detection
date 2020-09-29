
void filemodestring(long param_1,undefined *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar3 = 0x2d;
  uVar5 = uVar1 & 0xf000;
  if ((((uVar5 != 0x8000) && (uVar3 = 100, uVar5 != 0x4000)) && (uVar3 = 0x62, uVar5 != 0x6000)) &&
     (((uVar3 = 99, uVar5 != 0x2000 && (uVar3 = 0x6c, uVar5 != 0xa000)) &&
      ((uVar3 = 0x70, uVar5 != 0x1000 && (uVar3 = 0x73, uVar5 != 0xc000)))))) {
    uVar3 = 0x3f;
  }
  *param_2 = uVar3;
  param_2[1] = (-((uVar1 & 0x100) == 0) & 0xbbU) + 0x72;
  param_2[2] = (-((uVar1 & 0x80) == 0) & 0xb6U) + 0x77;
  bVar2 = -((uVar1 & 0x40) == 0);
  if ((uVar1 & 0x800) == 0) {
    cVar4 = (bVar2 & 0xb5) + 0x78;
  }
  else {
    cVar4 = (bVar2 & 0xe0) + 0x73;
  }
  param_2[3] = cVar4;
  param_2[4] = (-((uVar1 & 0x20) == 0) & 0xbbU) + 0x72;
  param_2[5] = (-((uVar1 & 0x10) == 0) & 0xb6U) + 0x77;
  bVar2 = -((uVar1 & 8) == 0);
  if ((uVar1 & 0x400) == 0) {
    cVar4 = (bVar2 & 0xb5) + 0x78;
  }
  else {
    cVar4 = (bVar2 & 0xe0) + 0x73;
  }
  param_2[6] = cVar4;
  param_2[7] = (-((uVar1 & 4) == 0) & 0xbbU) + 0x72;
  param_2[8] = (-((uVar1 & 2) == 0) & 0xb6U) + 0x77;
  bVar2 = -((uVar1 & 1) == 0);
  if ((uVar1 & 0x200) != 0) {
    param_2[9] = (bVar2 & 0xe0) + 0x74;
    *(undefined2 *)(param_2 + 10) = 0x20;
    return;
  }
  param_2[9] = (bVar2 & 0xb5) + 0x78;
  *(undefined2 *)(param_2 + 10) = 0x20;
  return;
}

