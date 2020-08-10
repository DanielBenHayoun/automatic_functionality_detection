
ulong set_increment_size(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = increment_size == 0;
  if (!bVar2) {
    uVar1 = func_0x00101520(0,&UNK_00105a88,5);
    func_0x001016d0(0,0,uVar1);
  }
  increment_size = param_1;
  return (ulong)bVar2;
}

