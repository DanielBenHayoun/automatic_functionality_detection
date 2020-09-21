
undefined8
check_subexp_matching_top_isra_18(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (0 < *param_2) {
    lVar8 = 0;
    do {
      while( true ) {
        lVar2 = *(long *)(*param_3 + lVar8 * 8);
        puVar5 = (ulong *)(lVar2 * 0x10 + *plVar1);
        if (((*(char *)(puVar5 + 1) == '\b') && (uVar3 = *puVar5, (long)uVar3 < 0x40)) &&
           (((ulong)plVar1[0x14] >> (uVar3 & 0x1f) & 1) != 0)) break;
        lVar8 = lVar8 + 1;
        if (*param_2 <= lVar8) {
          return 0;
        }
      }
      lVar9 = *(long *)(param_1 + 0xe8);
      lVar7 = *(long *)(param_1 + 0xf8);
      if (lVar9 == *(long *)(param_1 + 0xf0)) {
        lVar4 = lVar9 * 2;
        lVar7 = func_0x00101e00(lVar7,lVar9 << 4);
        if (lVar7 == 0) {
          return 0xc;
        }
        *(long *)(param_1 + 0xf8) = lVar7;
        lVar9 = *(long *)(param_1 + 0xe8);
        *(long *)(param_1 + 0xf0) = lVar4;
      }
      puVar6 = (undefined8 *)func_0x00101d30(1,0x30);
      *(undefined8 **)(lVar7 + lVar9 * 8) = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        return 0xc;
      }
      lVar8 = lVar8 + 1;
      *(long *)(param_1 + 0xe8) = lVar9 + 1;
      lVar9 = *param_2;
      puVar6[1] = lVar2;
      *puVar6 = param_4;
    } while (lVar8 < lVar9);
  }
  return 0;
}

