
byte * make_printable_char(byte param_1)

{
  byte *pbVar1;
  long *plVar2;
  
  pbVar1 = (byte *)xmalloc(5);
  plVar2 = (long *)func_0x001018e0();
  if ((*(byte *)(*plVar2 + 1 + (ulong)param_1 * 2) & 0x40) != 0) {
    *pbVar1 = param_1;
    pbVar1[1] = 0;
    return pbVar1;
  }
  func_0x001018f0(pbVar1,1,5,&UNK_00107004,(ulong)param_1);
  return pbVar1;
}

