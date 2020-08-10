
undefined8 u8_uctomb_aux(byte *param_1,uint param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_2 < 0x80) {
    return 0xfffffffe;
  }
  if (param_2 < 0x800) {
    if (param_3 < 2) {
      return 0xfffffffe;
    }
    uVar2 = 2;
  }
  else {
    if (param_2 < 0x10000) {
      if (param_2 - 0xd800 < 0x800) {
        return 0xffffffff;
      }
      if (param_3 < 3) {
        return 0xfffffffe;
      }
      uVar2 = 3;
    }
    else {
      if (0x10ffff < param_2) {
        return 0xffffffff;
      }
      if (param_3 < 4) {
        return 0xfffffffe;
      }
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 6 | 0x10000;
      param_1[3] = bVar1 & 0x3f | 0x80;
      uVar2 = 4;
    }
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 6 | 0x800;
    param_1[2] = bVar1 & 0x3f | 0x80;
  }
  *param_1 = (byte)(param_2 >> 6) | 0xc0;
  param_1[1] = (byte)param_2 & 0x3f | 0x80;
  return uVar2;
}

