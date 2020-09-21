
undefined8 re_node_set_merge(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if ((param_2 != 0) && (lVar11 = *(long *)(param_2 + 8), lVar11 != 0)) {
    lVar5 = param_1[1];
    if (*param_1 < lVar5 + lVar11 * 2) {
      lVar11 = lVar11 + *param_1;
      lVar5 = lVar11 * 0x10;
      lVar5 = func_0x00101b30(param_1[2],lVar5,lVar5);
      if (lVar5 == 0) {
        return 0xc;
      }
      param_1[2] = lVar5;
      *param_1 = lVar11 * 2;
      lVar5 = param_1[1];
      lVar11 = *(long *)(param_2 + 8);
    }
    if (lVar5 == 0) {
      param_1[1] = lVar11;
      func_0x00101a90(param_1[2],*(undefined8 *)(param_2 + 0x10),*(long *)(param_2 + 8) * 8);
    }
    else {
      lVar9 = lVar5 + lVar11 * 2;
      uVar7 = lVar11 - 1;
      lVar5 = lVar5 + -1;
      uVar10 = ~uVar7;
      uVar4 = uVar10;
      while (((long)uVar4 < 0 && (-1 < lVar5))) {
        lVar11 = *(long *)(*(long *)(param_2 + 0x10) + uVar7 * 8);
        plVar1 = (long *)(param_1[2] + lVar5 * 8);
        if (*plVar1 == lVar11) {
          uVar7 = uVar7 - 1;
          lVar5 = lVar5 + -1;
          uVar10 = ~uVar7;
          uVar4 = uVar10;
        }
        else {
          if (*plVar1 < lVar11) {
            uVar7 = uVar7 - 1;
            lVar9 = lVar9 + -1;
            *(long *)(param_1[2] + lVar9 * 8) = lVar11;
            uVar10 = ~uVar7;
            uVar4 = uVar7;
          }
          else {
            lVar5 = lVar5 + -1;
            uVar4 = uVar10;
          }
        }
      }
      if (-1 < (long)uVar7) {
        lVar9 = lVar9 - (uVar7 + 1);
        func_0x00101a90(param_1[2] + lVar9 * 8,*(undefined8 *)(param_2 + 0x10),(uVar7 + 1) * 8);
      }
      lVar5 = param_1[1];
      lVar11 = lVar5 + -1 + *(long *)(param_2 + 8) * 2;
      lVar8 = (lVar11 - lVar9) + 1;
      if (lVar8 != 0) {
        lVar2 = param_1[2];
        lVar6 = lVar5 + -1;
        param_1[1] = lVar5 + lVar8;
        do {
          while( true ) {
            lVar5 = *(long *)(lVar2 + lVar11 * 8);
            lVar3 = *(long *)(lVar2 + lVar6 * 8);
            plVar1 = (long *)(lVar2 + (lVar6 + lVar8) * 8);
            if (lVar3 < lVar5) break;
            lVar6 = lVar6 + -1;
            *plVar1 = lVar3;
            if (lVar6 < 0) {
              func_0x00101a90(lVar2,lVar2 + lVar9 * 8,lVar8 << 3);
              return 0;
            }
          }
          lVar11 = lVar11 + -1;
          lVar8 = lVar8 + -1;
          *plVar1 = lVar5;
        } while (lVar8 != 0);
      }
    }
    return 0;
  }
  return 0;
}

