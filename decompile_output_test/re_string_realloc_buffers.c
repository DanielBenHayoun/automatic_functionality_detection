
undefined8 re_string_realloc_buffers(long param_1,ulong param_2)

{
  long lVar1;
  
  if (1 < *(int *)(param_1 + 0x90)) {
    if (0x1fffffffffffffff < param_2) {
      return 0xc;
    }
    lVar1 = func_0x00101e00(*(undefined8 *)(param_1 + 0x10),param_2 * 4);
    if (lVar1 == 0) {
      return 0xc;
    }
    *(long *)(param_1 + 0x10) = lVar1;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar1 = func_0x00101e00(*(long *)(param_1 + 0x18),param_2 * 8);
      if (lVar1 == 0) {
        return 0xc;
      }
      *(long *)(param_1 + 0x18) = lVar1;
    }
  }
  if (*(char *)(param_1 + 0x8b) != '\0') {
    lVar1 = func_0x00101e00(*(undefined8 *)(param_1 + 8),param_2);
    if (lVar1 == 0) {
      return 0xc;
    }
    *(long *)(param_1 + 8) = lVar1;
  }
  *(ulong *)(param_1 + 0x40) = param_2;
  return 0;
}

