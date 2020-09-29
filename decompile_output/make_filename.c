
long make_filename(uint param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00101b60(filename_space,prefix);
  lVar2 = filename_space;
  lVar4 = suffix;
  uVar1 = digits;
  if (suffix != 0) {
    lVar3 = func_0x00101c10(prefix);
    func_0x00101f60(lVar2 + lVar3,1,0xffffffffffffffff,lVar4,(ulong)param_1);
    return filename_space;
  }
  lVar4 = func_0x00101c10(prefix);
  func_0x00101f60(lVar2 + lVar4,1,0xffffffffffffffff,&UNK_00115fa4,(ulong)uVar1,(ulong)param_1);
  return filename_space;
}

