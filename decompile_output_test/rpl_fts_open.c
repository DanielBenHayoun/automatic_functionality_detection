
long * rpl_fts_open(long *param_1,uint param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  byte bStack66;
  long lStack64;
  
  if ((((param_2 & 0xfffff000) != 0) || ((param_2 & 0x204) == 0x204)) || ((param_2 & 0x12) == 0)) {
    puVar10 = (undefined4 *)func_0x001019c0();
    *puVar10 = 0x16;
    return (long *)0;
  }
  plVar5 = (long *)func_0x00101bc0(0x80,1);
  if (plVar5 == (long *)0x0) {
    return (long *)0;
  }
  plVar5[8] = param_3;
  if ((param_2 & 2) == 0) {
    lVar8 = *param_1;
    *(uint *)(plVar5 + 9) = param_2;
    *(undefined4 *)((long)plVar5 + 0x2c) = 0xffffff9c;
    if (lVar8 != 0) goto code_r0x001080be;
code_r0x0010831f:
    uVar11 = 0x1000;
  }
  else {
    lVar8 = *param_1;
    *(undefined4 *)((long)plVar5 + 0x2c) = 0xffffff9c;
    *(uint *)(plVar5 + 9) = param_2 & 0xfffffdff | 4;
    if (lVar8 == 0) goto code_r0x0010831f;
code_r0x001080be:
    uVar11 = 0;
    plVar13 = param_1;
    do {
      uVar6 = func_0x00101aa0();
      if (uVar11 < uVar6) {
        uVar11 = uVar6;
      }
      plVar13 = plVar13 + 1;
    } while (*plVar13 != 0);
    uVar11 = uVar11 + 1;
    if (uVar11 < 0x1000) {
      uVar11 = 0x1000;
    }
  }
  bStack66 = fts_palloc_isra_2(plVar5 + 4,plVar5 + 6,uVar11);
  if (bStack66 == 0) goto code_r0x001083a9;
  lVar8 = *param_1;
  if (lVar8 == 0) {
    lVar7 = 0;
    if (param_3 != 0) {
code_r0x00108150:
      bStack66 = (byte)(*(uint *)(plVar5 + 9) >> 10) & 1;
      goto code_r0x0010815d;
    }
code_r0x001083cc:
    lVar9 = 0;
code_r0x0010826c:
    lVar8 = fts_alloc(plVar5,&UNK_0010c049,0);
    *plVar5 = lVar8;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(plVar5 + 9);
      *(long *)(lVar8 + 0x10) = lVar9;
      *(undefined2 *)(lVar8 + 0x70) = 9;
      *(undefined8 *)(lVar8 + 0x58) = 1;
      cVar2 = setup_dir_isra_4((ulong)uVar1);
      if (cVar2 != '\0') {
        if ((*(uint *)(plVar5 + 9) & 0x204) == 0) {
          iVar4 = diropen_isra_6((ulong)*(uint *)((long)plVar5 + 0x2c),(ulong)*(uint *)(plVar5 + 9),
                                 &UNK_0010c4a2);
          *(int *)(plVar5 + 5) = iVar4;
          if (iVar4 < 0) {
            *(uint *)(plVar5 + 9) = *(uint *)(plVar5 + 9) | 4;
          }
        }
        i_ring_init(plVar5 + 0xc,0xffffffff);
        return plVar5;
      }
    }
code_r0x00108390:
    fts_lfree(lVar9);
    func_0x00101de0(lVar7);
  }
  else {
    lVar7 = fts_alloc(plVar5,&UNK_0010c049,0);
    if (lVar7 != 0) {
      lVar8 = *param_1;
      *(undefined8 *)(lVar7 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(lVar7 + 0x68) = 0xffffffffffffffff;
      if (param_3 != 0) goto code_r0x00108150;
code_r0x0010815d:
      if (lVar8 == 0) goto code_r0x001083cc;
      lStack64 = 0;
      uVar11 = 0;
      lVar12 = 0;
      do {
        uVar6 = func_0x00101aa0(lVar8);
        if (((2 < uVar6) && ((((byte)(param_2 >> 0xb) ^ 1) & 1) != 0)) &&
           (*(char *)(lVar8 + -1 + uVar6) == '/')) {
          do {
            if (*(char *)(lVar8 + -2 + uVar6) != '/') break;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 1);
        }
        lVar8 = fts_alloc(plVar5,lVar8,uVar6);
        lVar9 = lVar12;
        if (lVar8 == 0) goto code_r0x00108390;
        *(undefined8 *)(lVar8 + 0x58) = 0;
        *(long *)(lVar8 + 8) = lVar7;
        *(long *)(lVar8 + 0x30) = lVar8 + 0x108;
        lVar9 = lVar8;
        if ((lVar12 == 0) || (bStack66 == 0)) {
          uVar3 = fts_stat(plVar5,lVar8,0);
          *(undefined2 *)(lVar8 + 0x70) = uVar3;
          if (param_3 != 0) goto code_r0x001081e7;
          *(undefined8 *)(lVar8 + 0x10) = 0;
          if (lVar12 != 0) goto code_r0x00108378;
        }
        else {
          *(undefined8 *)(lVar8 + 0xa8) = 2;
          *(undefined2 *)(lVar8 + 0x70) = 0xb;
          if (param_3 == 0) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
code_r0x00108378:
            *(long *)(lStack64 + 0x10) = lVar8;
            lVar9 = lVar12;
          }
          else {
code_r0x001081e7:
            *(long *)(lVar8 + 0x10) = lVar12;
            lVar8 = lStack64;
          }
        }
        lStack64 = lVar8;
        uVar11 = uVar11 + 1;
        lVar8 = param_1[uVar11];
        lVar12 = lVar9;
      } while (lVar8 != 0);
      if ((param_3 != 0) && (1 < uVar11)) {
        lVar9 = fts_sort(plVar5,lVar9,uVar11);
      }
      goto code_r0x0010826c;
    }
  }
  func_0x00101de0(plVar5[4]);
code_r0x001083a9:
  func_0x00101de0(plVar5);
  return (long *)0;
}

