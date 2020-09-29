
long check_halt_state_context_isra_20(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = re_string_context_at(param_1,param_4,(ulong)*(uint *)(param_1 + 0xa0));
  if (0 < param_2) {
    lVar7 = 0;
    do {
      lVar4 = *(long *)(*param_3 + lVar7 * 8);
      lVar6 = lVar4 * 0x10 + **(long **)(param_1 + 0x98);
      uVar1 = *(uint *)(lVar6 + 8);
      uVar5 = uVar1 >> 8;
      if (*(char *)(lVar6 + 8) == '\x02') {
        if ((uVar1 & 0x3ff00) == 0) {
          return lVar4;
        }
        if ((uVar5 & 4) == 0) {
          uVar2 = uVar3 & 1;
          if ((uVar5 & 8) != 0) goto joined_r0x001094b8;
joined_r0x001094be:
          if ((((uVar5 & 0x20) == 0) || ((uVar3 & 2) != 0)) &&
             (((uVar1 & 0x8000) == 0 || ((uVar3 & 8) != 0)))) {
            return lVar4;
          }
        }
        else {
          if ((uVar3 & 1) != 0) {
            uVar2 = uVar5 & 8;
joined_r0x001094b8:
            if (uVar2 == 0) goto joined_r0x001094be;
          }
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != param_2);
  }
  return 0;
}

