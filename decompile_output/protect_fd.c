
undefined8 protect_fd(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  uVar1 = func_0x00101a10(&UNK_00107207,0);
  if ((param_1 != uVar1) && (uVar3 = 0, -1 < (int)uVar1)) {
    func_0x001018e0((ulong)uVar1);
    puVar2 = (undefined4 *)func_0x00101790();
    *puVar2 = 9;
  }
  return uVar3;
}

