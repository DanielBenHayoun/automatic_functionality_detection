
void isaac_refill(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar3 = param_1[0x102];
  uVar4 = param_1[0x100];
  param_1[0x102] = lVar3 + 1;
  lVar3 = lVar3 + 1 + param_1[0x101];
  plVar1 = param_1;
  do {
    lVar6 = *plVar1;
    uVar4 = ~(uVar4 ^ uVar4 << 0x15) + plVar1[0x80];
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar4;
    *plVar1 = lVar3;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar3 >> 8) & 0x7f8)) + lVar6;
    *param_2 = lVar6;
    uVar4 = (uVar4 ^ uVar4 >> 5) + plVar1[0x81];
    lVar3 = plVar1[1];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar3 & 0x7f8)) + uVar4 + lVar6;
    plVar1[1] = lVar6;
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    param_2[1] = lVar3;
    lVar6 = plVar1[2];
    uVar4 = (uVar4 * 0x1000 ^ uVar4) + plVar1[0x82];
    lVar3 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar4 + lVar3;
    plVar1[2] = lVar3;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar3 >> 8) & 0x7f8)) + lVar6;
    param_2[2] = lVar6;
    lVar3 = plVar1[3];
    uVar4 = (uVar4 ^ uVar4 >> 0x21) + plVar1[0x83];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar3 & 0x7f8)) + uVar4 + lVar6;
    plVar2 = plVar1 + 4;
    plVar5 = param_2 + 4;
    plVar1[3] = lVar6;
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    param_2[3] = lVar3;
    plVar1 = plVar2;
    param_2 = plVar5;
  } while (plVar2 < param_1 + 0x80);
  do {
    lVar6 = *plVar2;
    uVar4 = ~(uVar4 ^ uVar4 << 0x15) + plVar2[-0x80];
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar4;
    *plVar2 = lVar3;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar3 >> 8) & 0x7f8)) + lVar6;
    *plVar5 = lVar6;
    uVar4 = (uVar4 ^ uVar4 >> 5) + plVar2[-0x7f];
    lVar3 = plVar2[1];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar3 & 0x7f8)) + uVar4 + lVar6;
    plVar2[1] = lVar6;
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    plVar5[1] = lVar3;
    lVar6 = plVar2[2];
    uVar4 = (uVar4 * 0x1000 ^ uVar4) + plVar2[-0x7e];
    lVar3 = *(long *)((long)param_1 + (ulong)((uint)lVar6 & 0x7f8)) + uVar4 + lVar3;
    plVar2[2] = lVar3;
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar3 >> 8) & 0x7f8)) + lVar6;
    plVar5[2] = lVar6;
    lVar3 = plVar2[3];
    uVar4 = (uVar4 ^ uVar4 >> 0x21) + plVar2[-0x7d];
    lVar6 = *(long *)((long)param_1 + (ulong)((uint)lVar3 & 0x7f8)) + uVar4 + lVar6;
    plVar1 = plVar2 + 4;
    plVar2[3] = lVar6;
    lVar3 = lVar3 + *(long *)((long)param_1 + (ulong)((uint)((ulong)lVar6 >> 8) & 0x7f8));
    plVar5[3] = lVar3;
    plVar2 = plVar1;
    plVar5 = plVar5 + 4;
  } while (plVar1 < param_1 + 0x100);
  param_1[0x100] = uVar4;
  param_1[0x101] = lVar3;
  return;
}

