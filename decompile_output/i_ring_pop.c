
char * i_ring_pop(long param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    func_0x00101990();
    pcVar4 = (char *)func_0x00101c40(0xe);
    if (pcVar4 != (char *)0x0) {
      if (*pcVar4 == '\0') {
        pcVar4 = "ASCII";
      }
      return pcVar4;
    }
    return &UNK_0010c2f0;
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  puVar1 = (uint *)(param_1 + (ulong)uVar2 * 4);
  uVar3 = (ulong)*puVar1;
  *puVar1 = *(uint *)(param_1 + 0x10);
  if (uVar2 != *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_1 + 0x14) = uVar2 + 3 & 3;
    return (char *)uVar3;
  }
  *(undefined *)(param_1 + 0x1c) = 1;
  return (char *)uVar3;
}

