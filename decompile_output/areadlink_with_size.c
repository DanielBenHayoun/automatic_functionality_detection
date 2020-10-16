
long areadlink_with_size(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  uVar5 = param_2 + 1;
  if (0x400 < param_2) {
    uVar5 = 0x401;
  }
  do {
    lVar1 = func_0x00103888(uVar5);
    while( true ) {
      if (lVar1 == 0) {
        return 0;
      }
      uVar2 = func_0x00103360(param_1,lVar1,uVar5);
      if (((long)uVar2 < 0) && (piVar3 = (int *)func_0x001032a0(), *piVar3 != 0x22)) {
        func_0x00103880(lVar1);
        return 0;
      }
      if (uVar2 < uVar5) {
        *(undefined *)(lVar1 + uVar2) = 0;
        return lVar1;
      }
      func_0x00103880(lVar1);
      if (0x3fffffffffffffff < uVar5) break;
      uVar5 = uVar5 * 2;
      lVar1 = func_0x00103888(uVar5);
    }
    if (0x7ffffffffffffffe < uVar5) {
      puVar4 = (undefined4 *)func_0x001032a0();
      *puVar4 = 0xc;
      return 0;
    }
    uVar5 = 0x7fffffffffffffff;
  } while( true );
}

