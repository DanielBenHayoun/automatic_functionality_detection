
ulong check_node_accept_bytes_isra_31
                (long param_1,ulong *param_2,long param_3,long param_4,long param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint **ppuVar12;
  char cVar13;
  
  ppuVar12 = (uint **)(param_1 + param_3 * 0x10);
  cVar13 = *(char *)(ppuVar12 + 1);
  if (cVar13 == '\a') {
    pbVar1 = (byte *)(*(long *)(param_4 + 8) + param_5);
    bVar3 = *pbVar1;
    if ((0xc1 < bVar3) && (param_5 + 1 < *(long *)(param_4 + 0x58))) {
      bVar2 = *(byte *)(*(long *)(param_4 + 8) + 1 + param_5);
      if (bVar3 < 0xe0) {
        if ((byte)(bVar2 + 0x80) < 0x40) {
          return 2;
        }
      }
      else {
        if (bVar3 < 0xf0) {
          if ((bVar3 == 0xe0) && (bVar2 < 0xa0)) {
            return 0;
          }
          uVar10 = 3;
        }
        else {
          if (bVar3 < 0xf8) {
            if ((bVar3 == 0xf0) && (bVar2 < 0x90)) {
              return 0;
            }
            uVar10 = 4;
          }
          else {
            if (bVar3 < 0xfc) {
              if ((bVar3 == 0xf8) && (bVar2 < 0x88)) {
                return 0;
              }
              uVar10 = 5;
            }
            else {
              if (0xfd < bVar3) {
                return 0;
              }
              if ((bVar3 == 0xfc) && (bVar2 < 0x84)) {
                return 0;
              }
              uVar10 = 6;
            }
          }
        }
        if (param_5 + (int)uVar10 <= *(long *)(param_4 + 0x58)) {
          lVar8 = 1;
          while ((byte)(pbVar1[lVar8] + 0x80) < 0x40) {
            lVar8 = lVar8 + 1;
            if ((int)uVar10 <= lVar8) {
              return uVar10;
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(param_4 + 0x90) != 1) {
      uVar4 = re_string_char_size_at_part_0(param_4,param_5);
      uVar9 = (ulong)uVar4;
      if (cVar13 == '\x05') {
        if ((int)uVar4 < 2) {
          return 0;
        }
        if (((*param_2 & 0x40) == 0) && (*(char *)(*(long *)(param_4 + 8) + param_5) == '\n')) {
          return 0;
        }
        if ((*param_2 & 0x80) == 0) {
          return uVar9;
        }
        bVar3 = *(byte *)(*(long *)(param_4 + 8) + param_5);
      }
      else {
        if (cVar13 != '\x06') {
          return 0;
        }
        if ((int)uVar4 < 2) {
          return 0;
        }
        ppuVar12 = (uint **)*ppuVar12;
        puVar11 = ppuVar12[8];
        puVar7 = ppuVar12[5];
        if (((puVar11 != (uint *)0x0) || (ppuVar12[9] != (uint *)0x0)) || (puVar7 != (uint *)0x0)) {
          uVar4 = *(uint *)(*(long *)(param_4 + 0x10) + param_5 * 4);
          if (0 < (long)puVar7) {
            if (uVar4 != **ppuVar12) {
              puVar6 = (uint *)0x0;
              do {
                puVar6 = (uint *)((long)puVar6 + 1);
                if (puVar6 == puVar7) goto code_r0x0010df27;
              } while (uVar4 != (*ppuVar12)[(long)puVar6]);
            }
code_r0x0010df62:
            if ((*(byte *)(ppuVar12 + 4) & 1) != 0) {
              return 0;
            }
            return uVar9;
          }
code_r0x0010df27:
          if (0 < (long)ppuVar12[9]) {
            lVar8 = 0;
            do {
              iVar5 = func_0x00101bc0((ulong)uVar4,*(undefined8 *)(ppuVar12[3] + lVar8 * 2));
              if (iVar5 != 0) goto code_r0x0010df62;
              lVar8 = lVar8 + 1;
            } while (lVar8 < (long)ppuVar12[9]);
            puVar11 = ppuVar12[8];
          }
          if (0 < (long)puVar11) {
            puVar7 = (uint *)0x0;
            do {
              if (((int)ppuVar12[1][(long)puVar7] <= (int)uVar4) &&
                 ((int)uVar4 <= (int)ppuVar12[2][(long)puVar7])) goto code_r0x0010df62;
              puVar7 = (uint *)((long)puVar7 + 1);
            } while (puVar7 != puVar11);
          }
        }
        bVar3 = *(byte *)(ppuVar12 + 4) & 1;
      }
      if (bVar3 != 0) {
        return uVar9;
      }
    }
  }
  return 0;
}

