
void duplicate_node(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  
  lVar6 = param_2 * 0x10;
  lVar2 = re_dfa_add_node(param_1,*(undefined8 *)(*param_1 + lVar6),
                          *(undefined8 *)(*param_1 + 8 + lVar6));
  if (lVar2 != -1) {
    lVar1 = *param_1;
    uVar5 = (ushort)param_3 & 0x3ff;
    lVar4 = lVar2 * 0x10 + lVar1;
    uVar3 = *(uint *)(lVar4 + 8) & 0xfffc00ff;
    *(uint *)(lVar4 + 8) = uVar3 | (uint)uVar5 << 8;
    uVar3 = (*(uint *)(lVar1 + 8 + lVar6) >> 8 & 0x3ff | (uint)uVar5) << 8 | uVar3;
    *(uint *)(lVar4 + 8) = uVar3;
    *(byte *)(lVar4 + 10) = (byte)(uVar3 >> 0x10) | 4;
    *(long *)(param_1[4] + lVar2 * 8) = param_2;
  }
  return;
}

