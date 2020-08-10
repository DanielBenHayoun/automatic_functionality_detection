
ulong get_type_indicator(char param_1,ulong param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_1 == '\0') {
    if (param_3 == 5) {
      return 0;
    }
    bVar3 = param_3 == 3 || param_3 == 9;
  }
  else {
    uVar1 = (uint)param_2 & 0xf000;
    if (uVar1 == 0x8000) {
      if (indicator_style != 3) {
        return 0;
      }
      return (ulong)(~-(uint)((param_2 & 0x49) == 0) & 0x2a);
    }
    bVar3 = uVar1 == 0x4000;
  }
  uVar2 = 0x2f;
  if ((bVar3) || (uVar2 = 0, indicator_style == 1)) {
    return uVar2;
  }
  if (param_1 == '\0') {
    if (param_3 == 6) {
      return 0x40;
    }
    if (param_3 == 1) {
      return 0x7c;
    }
    bVar3 = param_3 == 7;
  }
  else {
    uVar1 = (uint)param_2 & 0xf000;
    if (uVar1 == 0xa000) {
      return 0x40;
    }
    if (uVar1 == 0x1000) {
      return 0x7c;
    }
    bVar3 = uVar1 == 0xc000;
  }
  return (ulong)(-(uint)bVar3 & 0x3d);
}

