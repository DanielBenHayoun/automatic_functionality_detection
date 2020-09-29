
ulong * re_acquire_state(undefined4 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  
  uVar9 = *(ulong *)(param_3 + 8);
  if (uVar9 == 0) {
    *param_1 = 0;
  }
  else {
    if (0 < (long)uVar9) {
      plVar5 = *(long **)(param_3 + 0x10);
      plVar1 = plVar5 + uVar9;
      do {
        uVar9 = uVar9 + *plVar5;
        plVar5 = plVar5 + 1;
      } while (plVar1 != plVar5);
    }
    plVar1 = (long *)(param_2[8] + (param_2[0x11] & uVar9) * 0x18);
    lVar6 = *plVar1;
    if (0 < lVar6) {
      lVar7 = plVar1[2];
      lVar10 = 0;
      do {
        puVar2 = *(ulong **)(lVar7 + lVar10 * 8);
        if ((*puVar2 == uVar9) &&
           (cVar3 = re_node_set_compare_part_2(puVar2 + 1,param_3), cVar3 != '\0')) {
          return puVar2;
        }
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
    }
    lVar6 = func_0x00101a70(0x70,1);
    if (lVar6 != 0) {
      iVar4 = re_node_set_init_copy(lVar6 + 8,param_3);
      if (iVar4 == 0) {
        lVar7 = *(long *)(param_3 + 8);
        *(long *)(lVar6 + 0x50) = lVar6 + 8;
        if (0 < lVar7) {
          plVar5 = *(long **)(param_3 + 0x10);
          lVar10 = *param_2;
          plVar1 = plVar5 + lVar7;
          do {
            while( true ) {
              lVar7 = *plVar5 * 0x10 + lVar10;
              cVar3 = *(char *)(lVar7 + 8);
              if (cVar3 == '\x01') break;
              bVar8 = (byte)(((uint)(byte)(*(byte *)(lVar7 + 10) >> 4 | *(byte *)(lVar6 + 0x68) >> 5
                                          ) & 1) << 5) | *(byte *)(lVar6 + 0x68) & 0xdf;
              *(byte *)(lVar6 + 0x68) = bVar8;
              if (cVar3 == '\x02') {
                *(byte *)(lVar6 + 0x68) = bVar8 | 0x10;
              }
              else {
                if (cVar3 == '\x04') {
                  *(byte *)(lVar6 + 0x68) = bVar8 | 0x40;
                }
                else {
                  if ((cVar3 == '\f') || ((*(uint *)(lVar7 + 8) & 0x3ff00) != 0))
                  goto code_r0x00108ba0;
                }
              }
code_r0x00108b5b:
              plVar5 = plVar5 + 1;
              if (plVar1 == plVar5) goto code_r0x00108bad;
            }
            if ((*(uint *)(lVar7 + 8) & 0x3ff00) == 0) goto code_r0x00108b5b;
            *(byte *)(lVar6 + 0x68) =
                 (byte)(((uint)(byte)(*(byte *)(lVar7 + 10) >> 4 | *(byte *)(lVar6 + 0x68) >> 5) & 1
                        ) << 5) | *(byte *)(lVar6 + 0x68) & 0xdf;
code_r0x00108ba0:
            plVar5 = plVar5 + 1;
            *(byte *)(lVar6 + 0x68) = *(byte *)(lVar6 + 0x68) | 0x80;
          } while (plVar1 != plVar5);
        }
code_r0x00108bad:
        iVar4 = register_state(param_2,lVar6,uVar9);
        if (iVar4 == 0) {
          return (ulong *)lVar6;
        }
        free_state(lVar6);
      }
      else {
        func_0x00101880(lVar6);
      }
    }
    *param_1 = 0xc;
  }
  return (ulong *)0;
}

