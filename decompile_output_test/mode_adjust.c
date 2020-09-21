
void mode_adjust(undefined8 param_1,byte param_2,uint param_3,char *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  
  cVar5 = param_4[1];
  uVar2 = (uint)param_1 & 0xfff;
  if (cVar5 == '\0') {
    if (param_5 != (uint *)0x0) {
      *param_5 = 0;
    }
    return;
  }
  uVar7 = 0;
  do {
    uVar1 = *(uint *)(param_4 + 4);
    uVar3 = *(uint *)(param_4 + 8);
    uVar4 = ~*(uint *)(param_4 + 0xc) & ~-(uint)(param_2 == 0) & 0xc00;
    if (cVar5 == '\x02') {
      if ((uVar2 & 0x49 | (uint)param_2) != 0) {
        uVar3 = uVar3 | 0x49;
      }
    }
    else {
      if (cVar5 == '\x03') {
        uVar3 = uVar3 & uVar2;
        uVar6 = ~-(uint)((uVar3 & 0x124) == 0) & 0x124;
        if ((uVar3 & 0x92) != 0) {
          uVar6 = uVar6 | 0x92;
        }
        if ((uVar3 & 0x49) != 0) {
          uVar6 = uVar6 | 0x49;
        }
        uVar3 = uVar3 | uVar6;
      }
    }
    cVar5 = *param_4;
    uVar6 = ~uVar4;
    if (uVar1 == 0) {
      uVar3 = uVar3 & ~(uVar4 | param_3);
      if (cVar5 == '-') goto code_r0x001028e0;
      if (cVar5 != '=') goto code_r0x001027dd;
code_r0x0010288b:
      uVar7 = uVar7 | uVar6 & 0xfff;
      cVar5 = param_4[0x11];
      uVar2 = uVar2 & uVar4 | uVar3;
    }
    else {
      uVar3 = uVar3 & uVar6 & uVar1;
      if (cVar5 == '-') {
code_r0x001028e0:
        uVar7 = uVar7 | uVar3;
        uVar2 = uVar2 & ~uVar3;
      }
      else {
        if (cVar5 == '=') {
          uVar4 = uVar4 | ~uVar1;
          uVar6 = ~uVar4;
          goto code_r0x0010288b;
        }
code_r0x001027dd:
        if (cVar5 == '+') {
          uVar7 = uVar7 | uVar3;
          uVar2 = uVar2 | uVar3;
        }
      }
      cVar5 = param_4[0x11];
    }
    param_4 = param_4 + 0x10;
    if (cVar5 == '\0') {
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar7;
      }
      return;
    }
  } while( true );
}

