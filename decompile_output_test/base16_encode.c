
void base16_encode(byte *param_1,long param_2,undefined *param_3)

{
  byte bVar1;
  undefined uVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = param_1 + param_2;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = base16[(uint)bVar1 & 0xf];
      *param_3 = base16[bVar1 >> 4];
      param_3[1] = uVar2;
      param_3 = param_3 + 2;
    } while (param_1 != pbVar3);
  }
  return;
}

