
ulong * _obstack_allocated_p(long param_1,ulong *param_2)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(param_1 + 8);
  if (puVar1 == (ulong *)0x0) {
    return puVar1;
  }
  while ((param_2 <= puVar1 || ((ulong *)*puVar1 < param_2))) {
    puVar1 = (ulong *)puVar1[1];
    if (puVar1 == (ulong *)0x0) {
      return (ulong *)0;
    }
  }
  return (ulong *)1;
}

