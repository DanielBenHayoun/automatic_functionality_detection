
void base32_encode(byte *param_1,long param_2,undefined *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  do {
    if ((param_2 == 0) || (param_4 == 0)) {
      if (param_4 == 0) {
        return;
      }
      *param_3 = 0;
      return;
    }
    bVar2 = *param_1;
    *param_3 = b32str_3066[bVar2 >> 3];
    if (param_4 == 1) {
      return;
    }
    uVar3 = (uint)bVar2 * 4;
    if (param_2 == 1) {
      param_3[1] = b32str_3066[uVar3 & 0x1c];
      if (param_4 == 2) {
        return;
      }
      param_3[2] = 0x3d;
      if (param_4 == 3) {
        return;
      }
      param_3[3] = 0x3d;
      if (param_4 == 4) {
        return;
      }
code_r0x0010379b:
      param_3[4] = 0x3d;
      if (param_4 == 5) {
        return;
      }
code_r0x001037a5:
      param_3[5] = 0x3d;
      if (param_4 == 6) {
        return;
      }
      param_3[6] = 0x3d;
      if (param_4 == 7) {
        return;
      }
code_r0x001037b9:
      param_3[7] = 0x3d;
      if (param_4 == 8) {
        return;
      }
      param_2 = 0;
    }
    else {
      bVar2 = param_1[1];
      param_3[1] = b32str_3066[uVar3 + (bVar2 >> 6) & 0x1f];
      if (param_4 == 2) {
        return;
      }
      param_3[2] = b32str_3066[(uint)(bVar2 >> 1) & 0x1f];
      if (param_4 == 3) {
        return;
      }
      if (param_2 == 2) {
        param_3[3] = b32str_3066[(int)((uint)bVar2 * 0x10 & 0x1f)];
        if (param_4 == 4) {
          return;
        }
        goto code_r0x0010379b;
      }
      bVar1 = param_1[2];
      param_3[3] = b32str_3066[(uint)bVar2 * 0x10 + (uint)(bVar1 >> 4) & 0x1f];
      if (param_4 == 4) {
        return;
      }
      if (param_2 == 3) {
        param_3[4] = b32str_3066[(uint)bVar1 + (uint)bVar1 & 0x1e];
        if (param_4 == 5) {
          return;
        }
        goto code_r0x001037a5;
      }
      bVar2 = param_1[3];
      param_3[4] = b32str_3066[(uint)bVar1 + (uint)bVar1 + (uint)(bVar2 >> 7) & 0x1f];
      if (param_4 == 5) {
        return;
      }
      param_3[5] = b32str_3066[(uint)(bVar2 >> 2) & 0x1f];
      if (param_4 == 6) {
        return;
      }
      if (param_2 == 4) {
        param_3[6] = b32str_3066[(uint)bVar2 * 8 & 0x18];
        if (param_4 == 7) {
          return;
        }
        goto code_r0x001037b9;
      }
      bVar1 = param_1[4];
      param_3[6] = b32str_3066[(uint)bVar2 * 8 + (uint)(bVar1 >> 5) & 0x1f];
      if (param_4 == 7) {
        return;
      }
      param_3[7] = b32str_3066[(uint)bVar1 & 0x1f];
      if (param_4 == 8) {
        return;
      }
      param_2 = param_2 + -5;
      if (param_2 != 0) {
        param_1 = param_1 + 5;
      }
    }
    param_3 = param_3 + 8;
    param_4 = param_4 + -8;
  } while( true );
}

