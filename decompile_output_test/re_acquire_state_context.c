
ulong * re_acquire_state_context(undefined4 *param_1,long *param_2,long param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  byte bStack84;
  
  lVar9 = *(long *)(param_3 + 8);
  if (lVar9 == 0) {
    *param_1 = 0;
  }
  else {
    uVar15 = (ulong)param_4 + lVar9;
    if (0 < lVar9) {
      plVar8 = *(long **)(param_3 + 0x10);
      plVar1 = plVar8 + lVar9;
      do {
        uVar15 = uVar15 + *plVar8;
        plVar8 = plVar8 + 1;
      } while (plVar1 != plVar8);
    }
    plVar1 = (long *)(param_2[8] + (param_2[0x11] & uVar15) * 0x18);
    lVar9 = *plVar1;
    if (0 < lVar9) {
      lVar14 = plVar1[2];
      lVar13 = 0;
      uVar12 = (ulong)param_4;
      do {
        puVar3 = *(ulong **)(lVar14 + lVar13 * 8);
        if ((((*puVar3 == uVar15) && (((uint)*(byte *)(puVar3 + 0xd) & 0xf) == (uint)uVar12)) &&
            (puVar3[10] != 0)) &&
           (cVar5 = re_node_set_compare_part_2(puVar3[10],param_3), cVar5 != '\0')) {
          return puVar3;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar9);
    }
    lVar9 = func_0x00101a70(0x70,1);
    if (lVar9 != 0) {
      iVar7 = re_node_set_init_copy();
      if (iVar7 == 0) {
        bStack84 = (byte)param_4;
        *(long *)(lVar9 + 0x50) = lVar9 + 8;
        lVar14 = *(long *)(param_3 + 8);
        *(byte *)(lVar9 + 0x68) = *(byte *)(lVar9 + 0x68) & 0xf0 | bStack84 & 0xf;
        if (0 < lVar14) {
          lVar13 = 0;
          lVar14 = 0;
          do {
            lVar10 = *(long *)(*(long *)(param_3 + 0x10) + lVar13 * 8) * 0x10 + *param_2;
            cVar5 = *(char *)(lVar10 + 8);
            uVar2 = *(uint *)(lVar10 + 8);
            uVar11 = uVar2 >> 8;
            if ((cVar5 != '\x01') || ((uVar2 & 0x3ff00) != 0)) {
              bVar6 = (byte)(((uint)(byte)(*(byte *)(lVar10 + 10) >> 4 |
                                          *(byte *)(lVar9 + 0x68) >> 5) & 1) << 5) |
                      *(byte *)(lVar9 + 0x68) & 0xdf;
              *(byte *)(lVar9 + 0x68) = bVar6;
              if (cVar5 == '\x02') {
                *(byte *)(lVar9 + 0x68) = bVar6 | 0x10;
              }
              else {
                if (cVar5 == '\x04') {
                  *(byte *)(lVar9 + 0x68) = bVar6 | 0x40;
                }
              }
              if ((uVar2 & 0x3ff00) != 0) {
                if (lVar9 + 8 == *(long *)(lVar9 + 0x50)) {
                  lVar14 = func_0x00101ac0(0x18);
                  *(long *)(lVar9 + 0x50) = lVar14;
                  if (lVar14 == 0) goto code_r0x0010897e;
                  iVar7 = re_node_set_init_copy();
                  if (iVar7 != 0) goto code_r0x00108986;
                  *(byte *)(lVar9 + 0x68) = *(byte *)(lVar9 + 0x68) | 0x80;
                  lVar14 = 0;
                }
                if ((uVar2 & 0x100) == 0) {
                  if ((uVar11 & 2) != 0) {
                    uVar4 = param_4 & 1;
                    goto joined_r0x001089aa;
                  }
code_r0x001089ac:
                  if ((((uVar11 & 0x10) == 0) || ((param_4 & 2) != 0)) &&
                     (((uVar2 & 0x4000) == 0 || ((param_4 & 4) != 0)))) goto code_r0x00108952;
                }
                else {
                  if ((param_4 & 1) != 0) {
                    uVar4 = uVar11 & 2;
joined_r0x001089aa:
                    if (uVar4 == 0) goto code_r0x001089ac;
                  }
                }
                if (-1 < lVar13 - lVar14) {
                  re_node_set_remove_at_isra_4_part_5();
                }
                lVar14 = lVar14 + 1;
              }
            }
code_r0x00108952:
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(long *)(param_3 + 8));
        }
        iVar7 = register_state(param_2,lVar9,uVar15);
        if (iVar7 == 0) {
          return (ulong *)lVar9;
        }
code_r0x0010897e:
        free_state(lVar9);
      }
      else {
        func_0x00101880(lVar9);
      }
    }
code_r0x00108986:
    *param_1 = 0xc;
  }
  return (ulong *)0;
}

