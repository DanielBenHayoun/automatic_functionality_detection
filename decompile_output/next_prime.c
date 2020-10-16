
ulong next_prime(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
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
code_r0x0010d7c0:
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
          if (param_1 <= uVar3) goto code_r0x0010d7c0;
          lVar4 = lVar4 + 8;
        } while (uVar1 != 0);
      }
    }
    param_1 = param_1 + 2;
  } while( true );
}

