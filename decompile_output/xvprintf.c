
ulong xvprintf(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  uVar1 = rpl_vprintf();
  if ((int)uVar1 < 0) {
    iVar2 = func_0x001014a0(stdout);
    if (iVar2 == 0) {
      uVar3 = func_0x001014f0(0,&UNK_00109820,5);
      puVar4 = (uint *)func_0x00101450();
      func_0x001016b0((ulong)exit_failure,(ulong)*puVar4,uVar3);
    }
  }
  return (ulong)uVar1;
}

