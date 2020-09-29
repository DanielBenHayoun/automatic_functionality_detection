
undefined8 cdb_advance_fd(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = func_0x00101e60((ulong)*param_1,param_2,0x10900);
  if ((int)uVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    cdb_free(param_1);
    *param_1 = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}

