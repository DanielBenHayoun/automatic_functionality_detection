
undefined8 cdb_free(int *param_1)

{
  undefined in_AL;
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  
  if (*param_1 < 0) {
    return (undefined8)_in_AL;
  }
  uVar2 = func_0x00101f50();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  puVar3 = (uint *)&UNK_0010feb1;
  func_0x00101f10(&UNK_0010feb1,&UNK_0010fea0,0x40,__PRETTY_FUNCTION___5081);
  uVar1 = func_0x00101e60((ulong)*puVar3);
  if ((int)uVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cdb_free(puVar3);
    *puVar3 = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}

