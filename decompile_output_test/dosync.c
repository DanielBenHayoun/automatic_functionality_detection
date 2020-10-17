
undefined8 dosync(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  iVar2 = func_0x00101c80();
  if (iVar2 != 0) {
    puVar3 = (uint *)func_0x00101c70();
    uVar1 = *puVar3;
    if ((1 < uVar1 - 0x15) && (uVar1 != 9)) {
      uVar4 = func_0x00101d70(0,&UNK_00109584,5);
      func_0x00102020(0,(ulong)uVar1,uVar4,param_2);
      *puVar3 = uVar1;
      return 0xffffffff;
    }
    iVar2 = func_0x00102030(param_1 & 0xffffffff);
    if (iVar2 != 0) {
      uVar1 = *puVar3;
      if ((1 < uVar1 - 0x15) && (uVar1 != 9)) {
        uVar4 = func_0x00101d70(0,&UNK_00109599,5);
        func_0x00102020(0,(ulong)uVar1,uVar4,param_2);
        *puVar3 = uVar1;
        return 0xffffffff;
      }
      func_0x00101f40();
    }
  }
  return 0;
}

