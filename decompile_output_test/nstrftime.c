
void nstrftime(uint *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __strftime_internal();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00102850();
  *param_1 = *param_1 | 0x20;
  return;
}

