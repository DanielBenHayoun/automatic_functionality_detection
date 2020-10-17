
void build_upper_buffer(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[0xb];
  if (param_1[8] == lVar4 || param_1[8] < lVar4) {
    lVar4 = param_1[8];
  }
  lVar3 = param_1[6];
  if (lVar3 < lVar4) {
    plVar1 = (long *)func_0x00101860();
    do {
      uVar2 = (ulong)*(byte *)(*param_1 + lVar3 + param_1[5]);
      if (param_1[0xf] != 0) {
        uVar2 = (ulong)*(byte *)(param_1[0xf] + uVar2);
      }
      *(undefined *)(param_1[1] + lVar3) = (char)*(undefined4 *)(*plVar1 + uVar2 * 4);
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
  }
  param_1[6] = lVar3;
  param_1[7] = lVar3;
  return;
}

