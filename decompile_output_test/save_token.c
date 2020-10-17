
void save_token(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = param_1[6];
  lVar2 = param_1[5];
  if (lVar1 == lVar2) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
  }
  uVar3 = param_1[7];
  uVar4 = lVar1 + param_1[9] & ~param_1[9];
  param_1[6] = uVar4;
  if (uVar3 - param_1[4] < uVar4 - param_1[4]) {
    param_1[6] = uVar3;
    uVar4 = uVar3;
  }
  param_1[5] = uVar4;
  plVar5 = (long *)param_1[0x11];
  if ((ulong)(param_1[0x12] - (long)plVar5) < 8) {
    _obstack_newchunk(param_1 + 0xe,8);
    plVar5 = (long *)param_1[0x11];
  }
  *plVar5 = lVar2;
  plVar5 = (long *)param_1[0x1c];
  param_1[0x11] = param_1[0x11] + 8;
  if ((ulong)(param_1[0x1d] - (long)plVar5) < 8) {
    _obstack_newchunk(param_1 + 0x19,8);
    plVar5 = (long *)param_1[0x1c];
  }
  *plVar5 = (lVar1 - lVar2) + -1;
  param_1[0x1c] = param_1[0x1c] + 8;
  *param_1 = *param_1 + 1;
  return;
}

