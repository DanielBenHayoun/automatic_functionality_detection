
void match_ctx_clean(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(long *)(param_1 + 0xe8)) {
    lVar4 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0xf8) + lVar4 * 8);
      if (0 < *(long *)(lVar1 + 0x20)) {
        lVar3 = 0;
        do {
          lVar2 = *(long *)(*(long *)(lVar1 + 0x28) + lVar3 * 8);
          lVar3 = lVar3 + 1;
          func_0x00101880(*(undefined8 *)(lVar2 + 0x20));
          func_0x00101880(lVar2);
        } while (*(long *)(lVar1 + 0x20) != lVar3 && lVar3 <= *(long *)(lVar1 + 0x20));
      }
      func_0x00101880(*(undefined8 *)(lVar1 + 0x28));
      if (*(long *)(lVar1 + 0x10) != 0) {
        func_0x00101880(*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10));
        func_0x00101880(*(undefined8 *)(lVar1 + 0x10));
      }
      lVar4 = lVar4 + 1;
      func_0x00101880(lVar1);
    } while (*(long *)(param_1 + 0xe8) != lVar4 && lVar4 <= *(long *)(param_1 + 0xe8));
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}

