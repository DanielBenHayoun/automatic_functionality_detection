
ulong re_string_context_at(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 < 0) {
code_r0x00109260:
    return (ulong)*(uint *)(param_1 + 0x70);
  }
  if (*(long *)(param_1 + 0x58) == param_2) {
    uVar4 = (ulong)((-(uint)((param_3 & 2) == 0) & 2) + 8);
  }
  else {
    if (1 < *(int *)(param_1 + 0x90)) {
      do {
        uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + param_2 * 4);
        if (uVar2 != 0xffffffff) {
          if ((*(char *)(param_1 + 0x8e) != '\0') &&
             ((iVar3 = func_0x00101ab0((ulong)uVar2), iVar3 != 0 || (uVar2 == 0x5f)))) {
            return 1;
          }
          if (uVar2 != 10) {
            return 0;
          }
          goto code_r0x0010929c;
        }
        param_2 = param_2 + -1;
      } while (param_2 != -1);
      goto code_r0x00109260;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + param_2);
    uVar4 = 1;
    if (((*(ulong *)(*(long *)(param_1 + 0x80) + ((long)(ulong)bVar1 >> 6) * 8) >>
          ((ulong)bVar1 & 0x1f) & 1) == 0) && (uVar4 = 0, bVar1 == 10)) {
code_r0x0010929c:
      return (ulong)((uint)(*(char *)(param_1 + 0x8d) != '\0') * 2);
    }
  }
  return uVar4;
}

