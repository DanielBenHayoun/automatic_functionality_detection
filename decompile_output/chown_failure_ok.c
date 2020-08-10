
ulong chown_failure_ok(long param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)func_0x001025a0();
  bVar1 = *piVar2 == 1 || *piVar2 == 0x16;
  _bVar1 = (ulong)piVar2 & 0xffffffffffffff00 | (ulong)bVar1;
  if (bVar1) {
    _bVar1 = (ulong)((uint)*(byte *)(param_1 + 0x1a) ^ 1);
  }
  return _bVar1;
}

