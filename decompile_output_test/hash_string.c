
ulong hash_string(byte *param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  bVar1 = *param_1;
  uVar3 = 0;
  while (bVar1 != 0) {
    uVar2 = (ulong)bVar1;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    uVar3 = (uVar3 * 0x1f + uVar2) % param_2;
  }
  return uVar3;
}

