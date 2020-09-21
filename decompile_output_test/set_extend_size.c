
ulong set_extend_size(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = extend_size == 0;
  if (!bVar2) {
    uVar1 = func_0x00101520(0,&UNK_00105a58,5);
    func_0x001016d0(0,0,uVar1);
  }
  extend_size = param_1;
  return (ulong)bVar2;
}

