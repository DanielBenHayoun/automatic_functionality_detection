
void blake2b_update_part_3(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x60;
  uVar4 = 0x80 - *(long *)(param_1 + 0xe0);
  lVar3 = *(long *)(param_1 + 0xe0) + lVar1;
  if (uVar4 < param_3) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    func_0x00101a10(lVar3,param_2,uVar4);
    uVar2 = *(long *)(param_1 + 0x40) + 0x80;
    *(ulong *)(param_1 + 0x40) = uVar2;
    param_3 = param_3 - uVar4;
    param_2 = param_2 + uVar4;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (ulong)(uVar2 < 0x80);
    blake2b_compress(param_1,lVar1);
    if (0x80 < param_3) {
      uVar4 = param_3 - 0x81 >> 7;
      lVar5 = (uVar4 + 1) * 0x80 + param_2;
      lVar3 = param_2;
      do {
        uVar2 = *(long *)(param_1 + 0x40) + 0x80;
        *(ulong *)(param_1 + 0x40) = uVar2;
        param_2 = lVar3 + 0x80;
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (ulong)(uVar2 < 0x80);
        blake2b_compress(param_1,lVar3);
        lVar3 = param_2;
      } while (lVar5 != param_2);
      param_3 = (param_3 - 0x80) + uVar4 * -0x80;
    }
    lVar3 = *(long *)(param_1 + 0xe0) + lVar1;
  }
  func_0x00101a10(lVar3,param_2,param_3);
  *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + param_3;
  return;
}

