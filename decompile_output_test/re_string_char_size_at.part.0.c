
ulong re_string_char_size_at_part_0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_2 + 1;
  if (lVar1 < *(long *)(param_1 + 0x30)) {
    if (*(int *)(*(long *)(param_1 + 0x10) + lVar1 * 4) == -1) {
      uVar3 = 2;
      do {
        uVar2 = uVar3 & 0xffffffff;
        if (uVar3 == *(long *)(param_1 + 0x30) - param_2) {
          return uVar2;
        }
        uVar3 = uVar3 + 1;
      } while (*(int *)(*(long *)(param_1 + 0x10) + lVar1 * 4 + -8 + uVar3 * 4) == -1);
      return uVar2;
    }
  }
  return 1;
}

