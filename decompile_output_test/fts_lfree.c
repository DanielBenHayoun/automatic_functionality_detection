
void fts_lfree(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  do {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x18) != 0) {
      func_0x00101b60();
    }
    func_0x00101da0(param_1);
    param_1 = lVar1;
  } while (lVar1 != 0);
  return;
}

