
long mmalloca(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 < 0xffffffffffffffe0) {
    lVar1 = func_0x00101810(param_1 + 0x20);
    lVar3 = 0;
    if (lVar1 != 0) {
      uVar2 = lVar1 + 0x10U & 0xffffffffffffffe0;
      lVar3 = uVar2 + 0x10;
      *(char *)(uVar2 + 0xf) = (char)lVar3 - (char)lVar1;
    }
    return lVar3;
  }
  return 0;
}

