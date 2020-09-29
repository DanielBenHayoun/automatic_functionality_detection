
ulong seen_file(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 uStack40;
  undefined8 uStack32;
  undefined8 uStack24;
  long lStack16;
  
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if (param_1 != 0) {
    uStack32 = param_3[1];
    uStack24 = *param_3;
    uStack40 = param_2;
    uVar1 = hash_lookup(param_1,&uStack40);
    uVar1 = uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
  func_0x00101590();
  if (param_1 < 10) {
    param_1 = 10;
  }
  param_1 = param_1 | 1;
  do {
    if (param_1 == 0xffffffffffffffff) {
      return 0xffffffffffffffff;
    }
    uVar1 = param_1 % 3;
    if (param_1 < 10) {
code_r0x00102de0:
      if (uVar1 != 0) {
        return param_1;
      }
    }
    else {
      if (uVar1 != 0) {
        lVar4 = 0x10;
        uVar3 = 9;
        uVar2 = 3;
        do {
          uVar2 = uVar2 + 2;
          uVar1 = param_1 % uVar2;
          uVar3 = uVar3 + lVar4;
          if (param_1 <= uVar3) goto code_r0x00102de0;
          lVar4 = lVar4 + 8;
        } while (uVar1 != 0);
      }
    }
    param_1 = param_1 + 2;
  } while( true );
}

