
void base64_encode(byte *param_1,long param_2,undefined *param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  
  if (((param_4 & 3) == 0) && (lVar5 = (param_4 >> 2) * 3, lVar5 == param_2)) {
    pbVar1 = param_1 + lVar5;
    if (lVar5 != 0) {
      do {
        bVar2 = *param_1;
        pbVar7 = param_1 + 3;
        *param_3 = b64c[bVar2 >> 2];
        bVar3 = param_1[1];
        param_3[1] = b64c[(uint)bVar2 * 0x10 + (uint)(bVar3 >> 4) & 0x3f];
        uVar4 = b64c[(uint)param_1[2] & 0x3f];
        param_3[2] = b64c[(uint)(param_1[2] >> 6) + (uint)bVar3 * 4 & 0x3f];
        param_3[3] = uVar4;
        param_3 = param_3 + 4;
        param_1 = pbVar7;
      } while (pbVar1 != pbVar7);
      return;
    }
  }
  else {
    while ((param_2 != 0 && (param_4 != 0))) {
      bVar2 = *param_1;
      *param_3 = b64c[bVar2 >> 2];
      if (param_4 == 1) {
        return;
      }
      uVar6 = (uint)bVar2 * 0x10;
      if (param_2 == 1) {
        param_3[1] = b64c[uVar6 & 0x30];
        if (param_4 == 2) {
          return;
        }
        param_3[2] = 0x3d;
        if (param_4 == 3) {
          return;
        }
code_r0x00103e6c:
        param_3[3] = 0x3d;
        if (param_4 == 4) {
          return;
        }
        param_2 = 0;
      }
      else {
        bVar2 = param_1[1];
        param_3[1] = b64c[uVar6 + (bVar2 >> 4) & 0x3f];
        if (param_4 == 2) {
          return;
        }
        uVar6 = (uint)bVar2 * 4;
        if (param_2 == 2) {
          param_3[2] = b64c[uVar6 & 0x3c];
          if (param_4 == 3) {
            return;
          }
          goto code_r0x00103e6c;
        }
        bVar2 = param_1[2];
        param_3[2] = b64c[uVar6 + (bVar2 >> 6) & 0x3f];
        if (param_4 == 3) {
          return;
        }
        param_3[3] = b64c[(uint)bVar2 & 0x3f];
        if (param_4 == 4) {
          return;
        }
        param_2 = param_2 + -3;
        if (param_2 != 0) {
          param_1 = param_1 + 3;
        }
      }
      param_3 = param_3 + 4;
      param_4 = param_4 - 4;
    }
    if (param_4 != 0) {
      *param_3 = 0;
      return;
    }
  }
  return;
}

