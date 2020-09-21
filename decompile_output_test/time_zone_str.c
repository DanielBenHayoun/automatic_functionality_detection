
long time_zone_str(int param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  
  uVar3 = param_1 / 0xe10 >> 0x1f;
  iVar4 = func_0x00102b50(param_2,1,0xffffffffffffffff,&UNK_00112ffc,
                          (ulong)((param_1 >> 0x1f & 2U) + 0x2b),
                          (ulong)((uVar3 ^ param_1 / 0xe10) - uVar3));
  uVar3 = param_1 % 0xe10;
  if (uVar3 != 0) {
    puVar1 = (undefined *)(param_2 + iVar4);
    *puVar1 = 0x3a;
    uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    puVar1[1] = (char)(uVar3 / 600) + '0';
    puVar5 = puVar1 + 3;
    uVar6 = uVar3 % 0x3c;
    puVar1[2] = (char)((ulong)uVar3 / 0x3c) + (char)(((ulong)uVar3 / 0x3c) / 10) * -10 + '0';
    if (uVar6 != 0) {
      puVar1[3] = 0x3a;
      cVar2 = (char)(uVar6 / 10);
      puVar1[4] = cVar2 + '0';
      puVar5 = puVar1 + 6;
      puVar1[5] = (char)uVar6 + cVar2 * -10 + '0';
    }
    *puVar5 = 0;
  }
  return param_2;
}

