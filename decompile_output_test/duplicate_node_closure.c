
undefined8 duplicate_node_closure(long *param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack72;
  
  do {
    lVar8 = *param_1;
    lVar7 = param_1[5];
    lVar4 = param_2 * 0x10 + lVar8;
    if (*(char *)(lVar4 + 8) == '\x04') {
      lStack72 = *(long *)(param_1[3] + param_2 * 8);
      *(undefined8 *)(lVar7 + 8 + param_3 * 0x18) = 0;
      lVar8 = duplicate_node(param_1,lStack72,(ulong)param_5);
      if (lVar8 == -1) {
        return 0xc;
      }
      *(undefined8 *)(param_1[3] + param_3 * 8) = *(undefined8 *)(param_1[3] + param_2 * 8);
code_r0x001091f0:
      cVar3 = re_node_set_insert(param_3 * 0x18 + param_1[5],lVar8);
      param_3 = lVar8;
      param_2 = lStack72;
    }
    else {
      lVar1 = lVar7 + param_2 * 0x18;
      lVar2 = *(long *)(lVar1 + 8);
      if (lVar2 == 0) {
        *(undefined8 *)(param_1[3] + param_3 * 8) = *(undefined8 *)(param_1[3] + param_2 * 8);
        return 0;
      }
      lVar6 = param_3 * 0x18;
      lVar1 = **(long **)(lVar1 + 0x10);
      *(undefined8 *)(lVar7 + lVar6 + 8) = 0;
      if (lVar2 != 1) {
        lVar7 = param_1[2] + -1;
        lVar4 = lVar7 * 0x10 + lVar8;
        if (((*(byte *)(lVar4 + 10) & 4) != 0) && (0 < lVar7)) {
          lVar8 = lVar8 - lVar4;
          do {
            if ((*(long *)(param_1[4] + lVar7 * 8) == lVar1) &&
               (param_5 == (*(uint *)(lVar4 + 8) >> 8 & 0x3ff))) {
              cVar3 = re_node_set_insert();
              if (cVar3 == '\0') {
                return 0xc;
              }
              goto code_r0x001091c9;
            }
            lVar4 = lVar4 + lVar8 + -0x20 + param_1[2] * 0x10;
            lVar7 = lVar7 + -1;
          } while (((*(byte *)(lVar4 + 10) & 4) != 0) && (0 < lVar7));
        }
        lVar8 = duplicate_node(param_1,lVar1,(ulong)param_5);
        if (lVar8 == -1) {
          return 0xc;
        }
        cVar3 = re_node_set_insert(param_1[5] + lVar6,lVar8);
        if (cVar3 == '\0') {
          return 0xc;
        }
        uVar5 = duplicate_node_closure(param_1,lVar1,lVar8,param_4,(ulong)param_5);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
code_r0x001091c9:
        lStack72 = *(long *)(*(long *)(param_1[5] + 0x10 + param_2 * 0x18) + 8);
        lVar8 = duplicate_node(param_1,lStack72,(ulong)param_5);
        if (lVar8 == -1) {
          return 0xc;
        }
        goto code_r0x001091f0;
      }
      if ((param_2 == param_4) && (param_2 != param_3)) {
        cVar3 = re_node_set_insert(lVar7 + lVar6,lVar1);
        if (cVar3 == '\0') {
          return 0xc;
        }
        return 0;
      }
      param_5 = param_5 | *(uint *)(lVar4 + 8) >> 8 & 0x3ff;
      param_3 = duplicate_node(param_1,lVar1,(ulong)param_5);
      if (param_3 == -1) {
        return 0xc;
      }
      cVar3 = re_node_set_insert(lVar6 + param_1[5],param_3);
      param_2 = lVar1;
    }
    if (cVar3 == '\0') {
      return 0xc;
    }
  } while( true );
}

