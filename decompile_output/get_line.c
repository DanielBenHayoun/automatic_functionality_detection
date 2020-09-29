
undefined8 get_line(byte *param_1,long *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong extraout_RDX;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  uint uVar19;
  byte *pbVar20;
  undefined *puVar21;
  
  lVar15 = (long)(param_3 + -1);
  lVar6 = *param_2;
  if (*(long *)(prevline + lVar15 * 8) == lVar6) {
    lVar10 = *(long *)(spareline + lVar15 * 8);
    *(long *)(spareline + lVar15 * 8) = lVar6;
    *param_2 = lVar10;
    if (lVar10 == 0) goto code_r0x0010351e;
code_r0x0010322b:
    *(undefined8 *)(lVar10 + 0x18) = 0;
  }
  else {
    lVar10 = lVar6;
    if (lVar6 != 0) goto code_r0x0010322b;
code_r0x0010351e:
    lVar10 = xcalloc(1,0x30);
    *param_2 = lVar10;
  }
  lVar6 = readlinebuffer_delim(lVar10,param_1,(ulong)(uint)(int)eolchar);
  if (lVar6 == 0) {
    if ((*param_1 & 0x20) != 0) {
      uVar11 = func_0x001016f0(0,&UNK_00107d75,5);
      puVar12 = (uint *)func_0x00101670();
      puVar16 = (ulong *)(ulong)*puVar12;
      uVar18 = 1;
      func_0x001018f0(1,puVar16,uVar11);
      uVar17 = *puVar16;
      uVar13 = puVar16[2];
      if (uVar17 == puVar16[1]) {
        if (uVar13 == 0) {
          if (uVar17 == 0) {
            uVar17 = 0x10;
          }
          bVar4 = false;
          lVar6 = SUB168(ZEXT816(8) * ZEXT816(uVar17),0);
          if (SUB168(ZEXT816(8) * ZEXT816(uVar17) >> 0x40,0) != 0) goto code_r0x001036b2;
          goto code_r0x001036a3;
        }
        if (uVar17 < 0xaaaaaaaaaaaaaaa) {
          uVar17 = uVar17 + 1 + (uVar17 >> 1);
        }
        else {
          do {
            lVar6 = xalloc_die();
code_r0x001036b2:
            bVar4 = true;
code_r0x001036a3:
          } while ((lVar6 < 0) || (bVar4));
        }
        puVar16[1] = uVar17;
        uVar13 = xrealloc();
        uVar17 = *puVar16;
        uVar3 = puVar16[1];
        puVar16[2] = uVar13;
        if (uVar17 < uVar3) {
          puVar14 = (undefined8 *)(uVar13 + uVar17 * 8);
          do {
            *puVar14 = 0;
            puVar14 = puVar14 + 1;
          } while (puVar14 != (undefined8 *)(uVar13 + uVar3 * 8));
        }
      }
      uVar11 = get_line(uVar18,uVar13 + uVar17 * 8,extraout_RDX & 0xffffffff);
      if ((char)uVar11 != '\0') {
        *puVar16 = *puVar16 + 1;
      }
      return uVar11;
    }
    if (lVar10 == 0) {
      return 0;
    }
    freeline_part_2(lVar10);
    return 0;
  }
  pbVar20 = *(byte **)(lVar10 + 0x10);
  *(long *)(line_no + lVar15 * 8) = *(long *)(line_no + lVar15 * 8) + 1;
  lVar6 = *(long *)(lVar10 + 8) + -1;
  pbVar1 = pbVar20 + lVar6;
  if (pbVar20 != pbVar1) {
    if (((int)tab < 0) || (tab == 10)) {
      if ((int)tab < 0) {
        plVar7 = (long *)func_0x00101990();
        lVar6 = *plVar7;
        do {
          pbVar8 = pbVar20 + 1;
          if (((*(byte *)(lVar6 + (ulong)*pbVar20 * 2) & 1) == 0) && (*pbVar20 != 10))
          goto code_r0x001032bc;
          pbVar20 = pbVar8;
        } while (pbVar1 != pbVar8);
      }
      else {
code_r0x00103343:
        extract_field(lVar10,pbVar20,lVar6);
      }
    }
    else {
      while( true ) {
        lVar6 = func_0x001017d0(pbVar20,(ulong)tab,pbVar1 + -(long)pbVar20);
        if (lVar6 == 0) break;
        extract_field(lVar10,pbVar20,lVar6 - (long)pbVar20);
        pbVar20 = (byte *)(lVar6 + 1);
      }
      extract_field(lVar10,pbVar20,pbVar1 + -(long)pbVar20);
    }
  }
code_r0x00103351:
  lVar6 = *(long *)(prevline + lVar15 * 8);
  if ((((lVar6 != 0) && (check_input_order != 2)) &&
      ((check_input_order == 1 || (seen_unpairable != '\0')))) &&
     ((*(char *)((long)&issued_disorder_warning + lVar15) == '\0' &&
      (iVar5 = keycmp_isra_4(*(undefined8 *)(lVar6 + 0x18),lVar6 + 0x28,
                             *(undefined8 *)(lVar10 + 0x18),lVar10 + 0x28), 0 < iVar5)))) {
    uVar17 = *(ulong *)(lVar10 + 8);
    lVar6 = *(long *)(lVar10 + 0x10);
    uVar19 = 0;
    if (uVar17 != 0) {
      if (*(char *)(lVar6 + -1 + uVar17) == '\n') {
        uVar19 = 0x7fffffff;
        if (uVar17 - 1 < 0x80000000) {
          uVar19 = (uint)(uVar17 - 1);
        }
      }
      else {
        uVar19 = 0x7fffffff;
        if (uVar17 < 0x80000000) {
          uVar19 = (uint)uVar17;
        }
      }
    }
    uVar11 = *(undefined8 *)(line_no + lVar15 * 8);
    uVar18 = *(undefined8 *)(g_names + lVar15 * 8);
    puVar21 = &UNK_00103429;
    uVar9 = func_0x001016f0(0,&UNK_00107d80,5);
    func_0x001018f0((ulong)(check_input_order == 1),0,uVar9,uVar18,uVar11,(ulong)uVar19,lVar6,
                    puVar21);
    *(undefined *)((long)&issued_disorder_warning + lVar15) = 1;
  }
  *(long *)(prevline + lVar15 * 8) = lVar10;
  return 1;
code_r0x001032bc:
  if (pbVar1 == pbVar8) goto code_r0x00103578;
  uVar17 = (ulong)pbVar20[1];
  bVar2 = *(byte *)(lVar6 + uVar17 * 2);
  while (((bVar2 & 1) == 0 && ((char)uVar17 != '\n'))) {
    pbVar8 = pbVar8 + 1;
    if (pbVar1 == pbVar8) goto code_r0x00103578;
    uVar17 = (ulong)*pbVar8;
    bVar2 = *(byte *)(lVar6 + uVar17 * 2);
  }
  extract_field(lVar10,pbVar20,pbVar8 + -(long)pbVar20);
  pbVar20 = pbVar8 + 1;
  if (pbVar1 == pbVar20) {
code_r0x00103340:
    lVar6 = 0;
    goto code_r0x00103343;
  }
  uVar17 = (ulong)pbVar8[1];
  lVar6 = *plVar7;
  bVar2 = *(byte *)(lVar6 + uVar17 * 2);
  while (((bVar2 & 1) != 0 || ((char)uVar17 == '\n'))) {
    pbVar20 = pbVar20 + 1;
    if (pbVar1 == pbVar20) goto code_r0x00103340;
    uVar17 = (ulong)*pbVar20;
    bVar2 = *(byte *)(lVar6 + uVar17 * 2);
  }
  pbVar8 = pbVar20 + 1;
  goto code_r0x001032bc;
code_r0x00103578:
  extract_field(lVar10,pbVar20,pbVar8 + -(long)pbVar20);
  goto code_r0x00103351;
}

