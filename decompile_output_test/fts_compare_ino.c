
ulong fts_compare_ino(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  
  uVar1 = *(ulong *)(*param_2 + 0x80);
  bVar2 = uVar1 <= *(ulong *)(*param_1 + 0x80);
  if (bVar2) {
    return (ulong)(bVar2 && *(ulong *)(*param_1 + 0x80) != uVar1);
  }
  return 0xffffffff;
}

