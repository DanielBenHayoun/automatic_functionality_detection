
ulong cached_umask(void)

{
  ulong uVar1;
  
  if (mask_7898 != 0xffffffff) {
    return (ulong)mask_7898;
  }
  mask_7898 = func_0x00102b50(0);
  uVar1 = (ulong)mask_7898;
  func_0x00102b50((ulong)mask_7898);
  return uVar1;
}

