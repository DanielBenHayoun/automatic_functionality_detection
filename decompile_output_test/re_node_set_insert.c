
long * re_node_set_insert(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    *param_1 = 1;
    param_1[1] = 1;
    plVar1 = (long *)func_0x00101ac0(8);
    *(long **)(param_1 + 2) = plVar1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = param_2;
      return (long *)1;
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    lVar5 = param_1[1];
    plVar1 = (long *)param_1[2];
    if (lVar5 == 0) {
      *plVar1 = param_2;
      param_1[1] = param_1[1] + 1;
      plVar1 = (long *)0x1;
    }
    else {
      if (*param_1 == lVar5) {
        *param_1 = lVar5 * 2;
        plVar1 = (long *)func_0x00101b30(plVar1,lVar5 << 4);
        if (plVar1 == (long *)0x0) {
          return (long *)0;
        }
        *(long **)(param_1 + 2) = plVar1;
        lVar5 = param_1[1];
      }
      lVar4 = lVar5 * 8;
      if (*plVar1 == param_2 || *plVar1 < param_2) {
        lVar5 = plVar1[lVar5 + -1];
        while (param_2 < lVar5) {
          *(long *)((long)plVar1 + lVar4) = lVar5;
          lVar5 = *(long *)((long)plVar1 + lVar4 + -0x10);
          lVar4 = lVar4 + -8;
        }
      }
      else {
        if (0 < lVar5) {
          plVar2 = plVar1 + lVar5;
          do {
            plVar3 = plVar2 + -1;
            *plVar2 = plVar2[-1];
            plVar2 = plVar3;
          } while (plVar1 != plVar3);
          lVar4 = 0;
        }
      }
      *(long *)((long)plVar1 + lVar4) = param_2;
      plVar1 = (long *)0x1;
      param_1[1] = param_1[1] + 1;
    }
  }
  return plVar1;
}

