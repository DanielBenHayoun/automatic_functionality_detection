
void print_int(ulong param_1,ulong param_2,uint *param_3,ulong param_4,undefined8 param_5,
              ulong param_6)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  undefined auVar4 [16];
  long lVar5;
  ulong uVar6;
  long extraout_RDX;
  ulong uVar7;
  long extraout_RDX_00;
  byte *extraout_RDX_01;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_R14;
  long lVar18;
  byte *pbVar19;
  long in_FS_OFFSET;
  
  iVar14 = (int)param_5;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = 0;
  uVar6 = param_4;
  uVar8 = param_2;
  iVar11 = iVar14;
  if (param_2 < param_1) {
    iVar13 = (int)param_6;
    uVar6 = (param_1 - 1) * (long)iVar13;
    uVar16 = param_1;
    unaff_R14 = uVar6;
    do {
      uVar16 = uVar16 - 1;
      auVar4 = ZEXT816(unaff_R14);
      uVar8 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(param_1),0)) + iVar14);
      if (input_swap == '\0') {
        uVar15 = *param_3;
      }
      else {
        uVar6 = (ulong)*(byte *)((long)param_3 + 2);
        uVar15 = CONCAT13(*(undefined *)param_3,
                          CONCAT12(*(undefined *)((long)param_3 + 1),
                                   CONCAT11(*(byte *)((long)param_3 + 2),
                                            *(undefined *)((long)param_3 + 3))));
      }
      param_3 = param_3 + 1;
      uVar9 = param_4;
      xprintf(param_4,uVar8,(ulong)uVar15);
      iVar11 = (int)param_5;
      unaff_R14 = unaff_R14 - (long)iVar13;
      param_6 = SUB168(auVar4 / ZEXT816(param_1),0) & 0xffffffff;
    } while (uVar16 != param_2);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = uVar6;
  uVar10 = uVar9;
  iVar14 = iVar11;
  if (uVar8 < uVar9) {
    iVar13 = (int)param_6;
    lVar18 = 0;
    uVar12 = (uVar9 - 1) * (long)iVar13;
    lVar5 = uVar9 - uVar8;
    uVar17 = uVar12;
    do {
      auVar4 = ZEXT816(uVar17);
      uVar8 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar9),0)) + iVar11);
      if (input_swap == '\0') {
        uVar7 = (ulong)*(ushort *)(extraout_RDX + lVar18 * 2);
      }
      else {
        uVar7 = (ulong)CONCAT11(*(undefined *)(extraout_RDX + lVar18 * 2),
                                *(undefined *)(extraout_RDX + 1 + lVar18 * 2));
        uVar16 = unaff_R14 & 0xffff0000 | uVar7;
        unaff_R14 = uVar16;
      }
      lVar18 = lVar18 + 1;
      uVar10 = uVar6;
      xprintf(uVar6,uVar8,uVar7);
      iVar14 = (int)uVar12;
      uVar17 = uVar17 - (long)iVar13;
      param_6 = SUB168(auVar4 / ZEXT816(uVar9),0) & 0xffffffff;
    } while (lVar5 != lVar18);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = uVar16;
  uVar9 = uVar10;
  iVar11 = iVar14;
  if (uVar8 < uVar10) {
    iVar13 = (int)param_6;
    lVar18 = 0;
    uVar12 = (uVar10 - 1) * (long)iVar13;
    lVar5 = uVar10 - uVar8;
    uVar17 = uVar12;
    do {
      auVar4 = ZEXT816(uVar17);
      uVar8 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar10),0)) + iVar14);
      if (input_swap == '\0') {
        uVar2 = *(ushort *)(extraout_RDX_00 + lVar18 * 2);
      }
      else {
        uVar2 = CONCAT11(*(undefined *)(extraout_RDX_00 + lVar18 * 2),
                         *(undefined *)(extraout_RDX_00 + 1 + lVar18 * 2));
        uVar6 = unaff_R14 & 0xffff0000 | (ulong)uVar2;
        unaff_R14 = uVar6;
      }
      lVar18 = lVar18 + 1;
      uVar9 = uVar16;
      xprintf(uVar16,uVar8,(ulong)(uint)(int)(short)uVar2);
      iVar11 = (int)uVar12;
      uVar17 = uVar17 - (long)iVar13;
      param_6 = SUB168(auVar4 / ZEXT816(uVar10),0) & 0xffffffff;
    } while (lVar5 != lVar18);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  if (uVar8 < uVar9) {
    iVar14 = (int)param_6;
    uVar16 = (uVar9 - 1) * (long)iVar14;
    pbVar19 = extraout_RDX_01;
    do {
      auVar4 = ZEXT816(uVar16);
      bVar1 = *pbVar19;
      uVar16 = uVar16 - (long)iVar14;
      pbVar19 = pbVar19 + 1;
      xprintf(uVar6,(ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar9),0)) + iVar11),
              (ulong)bVar1);
      param_6 = SUB168(auVar4 / ZEXT816(uVar9),0) & 0xffffffff;
    } while (pbVar19 != extraout_RDX_01 + (uVar9 - uVar8));
  }
  return;
}

