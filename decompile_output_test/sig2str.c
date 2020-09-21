
ulong sig2str(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar3 = 0;
  puVar4 = numname_table;
  do {
    if (*(int *)puVar4 == param_1) {
      func_0x001019a0(param_2,uVar3 * 0xc + 0x3090a4,uVar3 * 3);
      return 0;
    }
    uVar5 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar5;
    puVar4 = (undefined1 *)((int *)puVar4 + 3);
  } while (uVar5 != 0x23);
  iVar1 = func_0x00101c90();
  iVar2 = func_0x00101ce0();
  if ((param_1 < iVar1) || (iVar2 < param_1)) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((iVar2 - iVar1 >> 1) + iVar1 < param_1) {
      *param_2 = 0x414d5452;
      *(undefined2 *)(param_2 + 1) = 0x58;
      iVar1 = iVar2;
    }
    else {
      *param_2 = 0x494d5452;
      *(undefined2 *)(param_2 + 1) = 0x4e;
    }
    uVar5 = param_1 - iVar1;
    uVar3 = (ulong)uVar5;
    if (uVar5 != 0) {
      func_0x00101d40((long)param_2 + 5,1,0xffffffffffffffff,&UNK_0010718c,(ulong)uVar5);
      return 0;
    }
  }
  return uVar3;
}

