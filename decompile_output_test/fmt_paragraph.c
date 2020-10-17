
void fmt_paragraph(void)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  
  iVar9 = max_width;
  puVar7 = word_limit;
  puVar1 = word_limit + -0x28;
  uVar3 = *(undefined4 *)(word_limit + 8);
  *(undefined8 *)(word_limit + 0x18) = 0;
  *(int *)(puVar7 + 8) = iVar9;
  iVar8 = goal_width;
  iVar6 = first_indent;
  iVar5 = other_indent;
  iVar4 = last_line_length;
  while ((undefined1 *)0x30911f < puVar1) {
    iVar14 = iVar5;
    if (puVar1 == unused_word_type) {
      iVar14 = iVar6;
    }
    lVar12 = 0x7fffffffffffffff;
    iVar14 = iVar14 + *(int *)(puVar1 + 8);
    puVar11 = puVar1;
    do {
      puVar11 = puVar11 + 0x28;
      lVar10 = 0;
      if ((puVar7 != puVar11) &&
         (lVar10 = (long)((iVar8 - iVar14) * 10), lVar10 = lVar10 * lVar10,
         puVar7 != *(undefined1 **)(puVar11 + 0x48))) {
        lVar13 = (long)((iVar14 - *(int *)(puVar11 + 0x3c)) * 10);
        lVar10 = lVar10 + (lVar13 * lVar13 >> 1);
      }
      lVar10 = lVar10 + *(long *)(puVar11 + 0x40);
      if ((puVar1 == unused_word_type) && (0 < iVar4)) {
        lVar13 = (long)((iVar14 - iVar4) * 10);
        lVar10 = lVar10 + (lVar13 * lVar13 >> 1);
      }
      if (lVar10 < lVar12) {
        *(undefined1 **)(puVar1 + 0x20) = puVar11;
        *(int *)(puVar1 + 0x14) = iVar14;
        lVar12 = lVar10;
      }
    } while ((puVar7 != puVar11) &&
            (iVar14 = iVar14 + *(int *)(puVar11 + 0x30) + *(int *)(puVar11 + 0xc), puVar11 = puVar11
            , iVar14 < iVar9));
    lVar10 = 0x1324;
    if (unused_word_type < puVar1) {
      bVar2 = puVar1[-0x18];
      if ((bVar2 & 2) == 0) {
        lVar10 = 0xce4;
        if ((((bVar2 & 4) == 0) && (lVar10 = 0x1324, (undefined1 *)0x309148 < puVar1)) &&
           ((puVar1[-0x40] & 8) != 0)) {
          lVar10 = SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(40000)) /
                          SEXT816((long)(*(int *)(puVar1 + -0x20) + 2)),0) + 0x1324;
        }
      }
      else {
        lVar10 = (ulong)(-(uint)((bVar2 & 8) == 0) & 0x58804) + 0x960;
      }
    }
    if ((puVar1[0x10] & 1) == 0) {
      if ((puVar1[0x10] & 8) != 0) {
        lVar10 = lVar10 + SUB168(((undefined  [16])0x0 << 0x40 | ZEXT816(0x57e4)) /
                                 SEXT816((long)(*(int *)(puVar1 + 8) + 2)),0);
      }
    }
    else {
      lVar10 = lVar10 + -0x640;
    }
    *(long *)(puVar1 + 0x18) = lVar12 + lVar10;
    puVar1 = puVar1 + -0x28;
  }
  *(undefined4 *)(puVar7 + 8) = uVar3;
  return;
}

