
ulong check_dst_limits_calc_pos
                (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  
  lVar2 = *(long *)(param_1 + 0xd8) + param_2 * 0x28;
  lVar9 = *(long *)(lVar2 + 0x10);
  if (param_5 < lVar9) {
    return 0xffffffff;
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if (lVar2 < param_5) {
    return 1;
  }
  uVar10 = (uint)(lVar9 == param_5) | 2;
  if (lVar2 != param_5) {
    if (lVar9 != param_5) {
      return 0;
    }
    uVar10 = 1;
  }
  plVar4 = *(long **)(param_1 + 0x98);
  lVar2 = plVar4[6] + param_4 * 0x18;
  if (0 < *(long *)(lVar2 + 8)) {
    lVar9 = 0;
    uVar8 = 1 << ((byte)param_3 & 0x3f);
    do {
      while( true ) {
        lVar5 = *(long *)(*(long *)(lVar2 + 0x10) + lVar9 * 8);
        plVar11 = (long *)(lVar5 * 0x10 + *plVar4);
        cVar3 = *(char *)(plVar11 + 1);
        if (cVar3 != '\b') break;
        if (((uVar10 & 1) != 0) && (*plVar11 == param_3)) {
          return 0xffffffff;
        }
code_r0x00105af6:
        lVar9 = lVar9 + 1;
        if (*(long *)(lVar2 + 8) == lVar9 || *(long *)(lVar2 + 8) < lVar9) goto code_r0x00105c25;
      }
      if (cVar3 == '\t') {
        if (((uVar10 & 2) != 0) && (*plVar11 == param_3)) {
          return 0;
        }
        goto code_r0x00105af6;
      }
      if ((cVar3 != '\x04') || (param_6 == -1)) goto code_r0x00105af6;
      plVar11 = (long *)(param_6 * 0x28 + *(long *)(param_1 + 0xd8));
      do {
        if ((*plVar11 == lVar5) &&
           ((0x3f < param_3 || ((uVar8 & *(ushort *)((long)plVar11 + 0x22)) != 0)))) {
          lVar6 = **(long **)(plVar4[5] + 0x10 + lVar5 * 0x18);
          if (param_4 == lVar6) {
            return (ulong)-(uVar10 & 1);
          }
          iVar7 = check_dst_limits_calc_pos_1(param_1,(ulong)uVar10,param_3,lVar6,param_6);
          if (iVar7 == -1) {
            return 0xffffffff;
          }
          if ((iVar7 == 0) && ((uVar10 & 2) != 0)) {
            return 0;
          }
          if (param_3 < 0x40) {
            *(ushort *)((long)plVar11 + 0x22) = *(ushort *)((long)plVar11 + 0x22) & ~(ushort)uVar8;
          }
        }
        plVar1 = plVar11 + 4;
        plVar11 = plVar11 + 5;
      } while (*(char *)plVar1 != '\0');
      lVar9 = lVar9 + 1;
    } while (*(long *)(lVar2 + 8) != lVar9 && lVar9 <= *(long *)(lVar2 + 8));
  }
code_r0x00105c25:
  return (ulong)(uint)((int)uVar10 >> 1);
}

