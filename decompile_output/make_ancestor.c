
ulong make_ancestor(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (*(char *)(param_3 + 0x14) != '\0') {
    puVar3 = (undefined4 *)func_0x00101750();
    *puVar3 = 0x5f;
  }
  if ((*(uint *)(param_3 + 8) & 0xc0) == 0) {
    uVar2 = func_0x00101790(param_2,0x1ff);
  }
  else {
    func_0x001018f0((ulong)*(uint *)(param_3 + 8) & 0xffffffffffffff3f);
    uVar2 = func_0x00101790(param_2,0x1ff);
    puVar3 = (undefined4 *)func_0x00101750();
    uVar1 = *puVar3;
    func_0x001018f0((ulong)*(uint *)(param_3 + 8));
    *puVar3 = uVar1;
  }
  uVar4 = (ulong)uVar2;
  if ((uVar2 == 0) &&
     (uVar4 = (ulong)(*(uint *)(param_3 + 8) >> 8 & 1), *(long *)(param_3 + 0x18) != 0)) {
    announce_mkdir_part_4(param_1,param_3);
  }
  return uVar4;
}

