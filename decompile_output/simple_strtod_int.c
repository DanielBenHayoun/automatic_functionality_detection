
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 simple_strtod_int(char *param_1,char **param_2,float10 *param_3,char *param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*param_1 == '-') {
    param_1 = param_1 + 1;
    *param_4 = '\x01';
    *param_2 = param_1;
    if (param_1 == (char *)0x0) {
      uVar3 = 0;
      fVar6 = (float10)0;
code_r0x00102d37:
      iVar2 = func_0x001019e0(param_1,decimal_point,(long)decimal_point_length);
      if (iVar2 != 0) {
        return 3;
      }
      goto code_r0x00102d62;
    }
  }
  else {
    *param_4 = '\0';
    *param_2 = param_1;
  }
  fVar6 = (float10)0;
  bVar1 = false;
  uVar4 = 0;
  uVar3 = 0;
  fVar5 = (float10)_UNK_0010b1b4;
  do {
    if (9 < (byte)(*param_1 - 0x30U)) {
      if (!bVar1) goto code_r0x00102d37;
      break;
    }
    iVar2 = (int)*param_1 + -0x30;
    if (((float10)0 != fVar6) || (iVar2 != 0)) {
      uVar4 = uVar4 + 1;
    }
    if (0x12 < uVar4) {
      if (0x1b < uVar4) {
        return 2;
      }
      uVar3 = 1;
    }
    param_1 = param_1 + 1;
    *param_2 = param_1;
    bVar1 = true;
    fVar6 = (float10)iVar2 + fVar6 * fVar5;
  } while (param_1 != (char *)0x0);
code_r0x00102d62:
  if (*param_4 != '\0') {
    fVar6 = -fVar6;
  }
  *param_3 = fVar6;
  return uVar3;
}

