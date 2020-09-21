
ulong check_dst_limits_calc_pos_1(long param_1,uint param_2,long param_3,long param_4,long param_5)

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
  long *plVar10;
  
  plVar4 = *(long **)(param_1 + 0x98);
  lVar2 = plVar4[6] + param_4 * 0x18;
  if (0 < *(long *)(lVar2 + 8)) {
    lVar9 = 0;
    uVar8 = 1 << ((byte)param_3 & 0x3f);
    do {
      while( true ) {
        lVar5 = *(long *)(*(long *)(lVar2 + 0x10) + lVar9 * 8);
        plVar10 = (long *)(lVar5 * 0x10 + *plVar4);
        cVar3 = *(char *)(plVar10 + 1);
        if (cVar3 != '\b') break;
        if (((param_2 & 1) != 0) && (*plVar10 == param_3)) {
          return 0xffffffff;
        }
code_r0x00107da6:
        lVar9 = lVar9 + 1;
        if (*(long *)(lVar2 + 8) == lVar9 || *(long *)(lVar2 + 8) < lVar9) goto code_r0x00107ed5;
      }
      if (cVar3 == '\t') {
        if (((param_2 & 2) != 0) && (*plVar10 == param_3)) {
          return 0;
        }
        goto code_r0x00107da6;
      }
      if ((cVar3 != '\x04') || (param_5 == -1)) goto code_r0x00107da6;
      plVar10 = (long *)(param_5 * 0x28 + *(long *)(param_1 + 0xd8));
      do {
        if ((*plVar10 == lVar5) &&
           ((0x3f < param_3 || ((uVar8 & *(ushort *)((long)plVar10 + 0x22)) != 0)))) {
          lVar6 = **(long **)(plVar4[5] + 0x10 + lVar5 * 0x18);
          if (param_4 == lVar6) {
            return (ulong)-(param_2 & 1);
          }
          iVar7 = check_dst_limits_calc_pos_1(param_1,(ulong)param_2,param_3,lVar6,param_5);
          if (iVar7 == -1) {
            return 0xffffffff;
          }
          if ((iVar7 == 0) && ((param_2 & 2) != 0)) {
            return 0;
          }
          if (param_3 < 0x40) {
            *(ushort *)((long)plVar10 + 0x22) = *(ushort *)((long)plVar10 + 0x22) & ~(ushort)uVar8;
          }
        }
        plVar1 = plVar10 + 4;
        plVar10 = plVar10 + 5;
      } while (*(char *)plVar1 != '\0');
      lVar9 = lVar9 + 1;
    } while (*(long *)(lVar2 + 8) != lVar9 && lVar9 <= *(long *)(lVar2 + 8));
  }
code_r0x00107ed5:
  return (ulong)(uint)((int)param_2 >> 1);
}

