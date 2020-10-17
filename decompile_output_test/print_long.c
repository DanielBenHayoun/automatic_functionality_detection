
void print_long(ulong param_1,ulong param_2,undefined8 *param_3,ulong param_4,undefined8 param_5,
               ulong param_6)

{
  undefined uVar1;
  byte bVar2;
  ushort uVar3;
  undefined auVar4 [16];
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint *extraout_RDX;
  long extraout_RDX_00;
  ulong uVar10;
  long extraout_RDX_01;
  byte *extraout_RDX_02;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong unaff_R14;
  uint *puVar21;
  long lVar22;
  byte *pbVar23;
  long in_FS_OFFSET;
  undefined8 uStack72;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  iVar13 = (int)param_5;
  uVar7 = param_4;
  uVar11 = param_2;
  uVar19 = param_1;
  if (param_2 < param_1) {
    iVar14 = (int)param_6;
    uVar7 = (param_1 - 1) * (long)iVar14;
    uVar17 = param_1;
    unaff_R14 = uVar7;
    do {
      uVar17 = uVar17 - 1;
      auVar4 = ZEXT816(unaff_R14);
      uVar11 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(param_1),0)) + iVar13);
      if (input_swap == '\0') {
        uVar8 = *param_3;
      }
      else {
        puVar9 = (undefined *)((long)param_3 + 7);
        lVar5 = 0;
        do {
          uVar1 = *puVar9;
          puVar9 = puVar9 + -1;
          *(undefined *)((long)&uStack72 + lVar5) = uVar1;
          lVar5 = lVar5 + 1;
          uVar8 = uStack72;
        } while (lVar5 != 8);
      }
      param_3 = param_3 + 1;
      uVar19 = param_4;
      xprintf(param_4,uVar11,uVar8);
      unaff_R14 = unaff_R14 - (long)iVar14;
      param_6 = SUB168(auVar4 / ZEXT816(param_1),0) & 0xffffffff;
    } while (uVar17 != param_2);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar20 = 0;
  iVar14 = (int)param_5;
  uVar17 = uVar7;
  uVar12 = uVar11;
  iVar13 = iVar14;
  if (uVar11 < uVar19) {
    iVar15 = (int)param_6;
    uVar17 = (uVar19 - 1) * (long)iVar15;
    uVar18 = uVar19;
    unaff_R14 = uVar17;
    puVar21 = extraout_RDX;
    do {
      uVar18 = uVar18 - 1;
      auVar4 = ZEXT816(unaff_R14);
      uVar12 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar19),0)) + iVar14);
      if (input_swap == '\0') {
        uVar16 = *puVar21;
      }
      else {
        uVar17 = (ulong)*(byte *)((long)puVar21 + 2);
        uVar16 = CONCAT13(*(undefined *)puVar21,
                          CONCAT12(*(undefined *)((long)puVar21 + 1),
                                   CONCAT11(*(byte *)((long)puVar21 + 2),
                                            *(undefined *)((long)puVar21 + 3))));
      }
      puVar21 = puVar21 + 1;
      uVar20 = uVar7;
      xprintf(uVar7,uVar12,(ulong)uVar16);
      iVar13 = (int)param_5;
      unaff_R14 = unaff_R14 - (long)iVar15;
      param_6 = SUB168(auVar4 / ZEXT816(uVar19),0) & 0xffffffff;
    } while (uVar18 != uVar11);
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = uVar17;
  uVar11 = uVar20;
  iVar14 = iVar13;
  if (uVar12 < uVar20) {
    iVar15 = (int)param_6;
    lVar22 = 0;
    uVar18 = (uVar20 - 1) * (long)iVar15;
    lVar6 = uVar20 - uVar12;
    uVar19 = uVar18;
    do {
      auVar4 = ZEXT816(uVar19);
      uVar12 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar20),0)) + iVar13);
      if (input_swap == '\0') {
        uVar10 = (ulong)*(ushort *)(extraout_RDX_00 + lVar22 * 2);
      }
      else {
        uVar10 = (ulong)CONCAT11(*(undefined *)(extraout_RDX_00 + lVar22 * 2),
                                 *(undefined *)(extraout_RDX_00 + 1 + lVar22 * 2));
        uVar7 = unaff_R14 & 0xffff0000 | uVar10;
        unaff_R14 = uVar7;
      }
      lVar22 = lVar22 + 1;
      uVar11 = uVar17;
      xprintf(uVar17,uVar12,uVar10);
      iVar14 = (int)uVar18;
      uVar19 = uVar19 - (long)iVar15;
      param_6 = SUB168(auVar4 / ZEXT816(uVar20),0) & 0xffffffff;
    } while (lVar6 != lVar22);
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar19 = uVar7;
  uVar17 = uVar11;
  iVar13 = iVar14;
  if (uVar12 < uVar11) {
    iVar15 = (int)param_6;
    lVar22 = 0;
    uVar18 = (uVar11 - 1) * (long)iVar15;
    lVar6 = uVar11 - uVar12;
    uVar20 = uVar18;
    do {
      auVar4 = ZEXT816(uVar20);
      uVar12 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar11),0)) + iVar14);
      if (input_swap == '\0') {
        uVar3 = *(ushort *)(extraout_RDX_01 + lVar22 * 2);
      }
      else {
        uVar3 = CONCAT11(*(undefined *)(extraout_RDX_01 + lVar22 * 2),
                         *(undefined *)(extraout_RDX_01 + 1 + lVar22 * 2));
        uVar19 = unaff_R14 & 0xffff0000 | (ulong)uVar3;
        unaff_R14 = uVar19;
      }
      lVar22 = lVar22 + 1;
      uVar17 = uVar7;
      xprintf(uVar7,uVar12,(ulong)(uint)(int)(short)uVar3);
      iVar13 = (int)uVar18;
      uVar20 = uVar20 - (long)iVar15;
      param_6 = SUB168(auVar4 / ZEXT816(uVar11),0) & 0xffffffff;
    } while (lVar6 != lVar22);
  }
  if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x001018e0();
    if (uVar12 < uVar17) {
      iVar14 = (int)param_6;
      uVar7 = (uVar17 - 1) * (long)iVar14;
      pbVar23 = extraout_RDX_02;
      do {
        auVar4 = ZEXT816(uVar7);
        bVar2 = *pbVar23;
        uVar7 = uVar7 - (long)iVar14;
        pbVar23 = pbVar23 + 1;
        xprintf(uVar19,(ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar17),0)) + iVar13),
                (ulong)bVar2);
        param_6 = SUB168(auVar4 / ZEXT816(uVar17),0) & 0xffffffff;
      } while (pbVar23 != extraout_RDX_02 + (uVar17 - uVar12));
    }
    return;
  }
  return;
}

