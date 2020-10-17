
void print_long_long(ulong param_1,ulong param_2,undefined8 *param_3,ulong param_4,
                    undefined8 param_5,ulong param_6)

{
  undefined uVar1;
  byte bVar2;
  ushort uVar3;
  undefined auVar4 [16];
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *extraout_RDX;
  undefined8 uVar10;
  uint *extraout_RDX_00;
  long extraout_RDX_01;
  ulong uVar11;
  long extraout_RDX_02;
  byte *extraout_RDX_03;
  ulong unaff_RBX;
  ulong unaff_RBP;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong unaff_R12;
  ulong unaff_R13;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong unaff_R14;
  undefined8 *unaff_R15;
  undefined8 *puVar21;
  uint *puVar22;
  long lVar23;
  byte *pbVar24;
  long in_FS_OFFSET;
  undefined8 uStack176;
  long lStack168;
  ulong uStack152;
  ulong uStack144;
  ulong uStack136;
  ulong uStack128;
  ulong uStack120;
  undefined8 *puStack112;
  ulong uStack96;
  int iStack84;
  long lStack80;
  undefined8 uStack72;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  iStack84 = (int)param_5;
  uStack152 = unaff_RBX;
  uStack144 = unaff_RBP;
  uVar8 = param_2;
  uVar13 = param_1;
  uStack96 = param_4;
  if (param_2 < param_1) {
    lStack80 = (long)(int)param_6;
    unaff_R14 = (param_1 - 1) * lStack80;
    param_4 = unaff_R14;
    unaff_R13 = param_1;
    unaff_R15 = param_3;
    do {
      unaff_R13 = unaff_R13 - 1;
      unaff_R12 = SUB168(ZEXT816(unaff_R14) / ZEXT816(param_1),0);
      uVar8 = (ulong)(uint)(((int)param_6 - SUB164(ZEXT816(unaff_R14) / ZEXT816(param_1),0)) +
                           iStack84);
      if (input_swap == '\0') {
        uVar10 = *unaff_R15;
      }
      else {
        puVar9 = (undefined *)((long)unaff_R15 + 7);
        lVar5 = 0;
        do {
          uVar1 = *puVar9;
          puVar9 = puVar9 + -1;
          *(undefined *)((long)&uStack72 + lVar5) = uVar1;
          lVar5 = lVar5 + 1;
          uVar10 = uStack72;
        } while (lVar5 != 8);
      }
      unaff_R15 = unaff_R15 + 1;
      puStack112 = (undefined8 *)&UNK_0010319b;
      uVar13 = uStack96;
      xprintf(uStack96,uVar8,uVar10);
      unaff_R14 = unaff_R14 - lStack80;
      param_6 = unaff_R12 & 0xffffffff;
      uStack152 = param_1;
      uStack144 = param_2;
    } while (unaff_R13 != param_2);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack112 = (undefined8 *)&UNK_00103224;
  func_0x001018e0();
  lStack168 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = (int)param_5;
  uVar7 = param_4;
  uVar12 = uVar8;
  uVar20 = uVar13;
  uStack136 = unaff_R12;
  uStack128 = unaff_R13;
  uStack120 = unaff_R14;
  puStack112 = unaff_R15;
  if (uVar8 < uVar13) {
    iVar15 = (int)param_6;
    uVar7 = (uVar13 - 1) * (long)iVar15;
    uVar18 = uVar13;
    uVar19 = uVar7;
    puVar21 = extraout_RDX;
    do {
      uVar18 = uVar18 - 1;
      uVar12 = (ulong)(uint)(((int)param_6 - SUB164(ZEXT816(uVar19) / ZEXT816(uVar13),0)) + iVar14);
      if (input_swap == '\0') {
        uVar10 = *puVar21;
      }
      else {
        puVar9 = (undefined *)((long)puVar21 + 7);
        lVar5 = 0;
        do {
          uVar1 = *puVar9;
          puVar9 = puVar9 + -1;
          *(undefined *)((long)&uStack176 + lVar5) = uVar1;
          lVar5 = lVar5 + 1;
          uVar10 = uStack176;
        } while (lVar5 != 8);
      }
      puVar21 = puVar21 + 1;
      uVar20 = param_4;
      xprintf(param_4,uVar12,uVar10);
      unaff_R14 = uVar19 - (long)iVar15;
      param_6 = SUB168(ZEXT816(uVar19) / ZEXT816(uVar13),0) & 0xffffffff;
      uVar19 = unaff_R14;
    } while (uVar18 != uVar8);
  }
  if (lStack168 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x001018e0();
    lVar5 = *(long *)(in_FS_OFFSET + 0x28);
    uVar18 = 0;
    iVar15 = (int)param_5;
    uVar8 = uVar7;
    uVar13 = uVar12;
    iVar14 = iVar15;
    if (uVar12 < uVar20) {
      iVar16 = (int)param_6;
      uVar8 = (uVar20 - 1) * (long)iVar16;
      uVar19 = uVar20;
      unaff_R14 = uVar8;
      puVar22 = extraout_RDX_00;
      do {
        uVar19 = uVar19 - 1;
        auVar4 = ZEXT816(unaff_R14);
        uVar13 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar20),0)) + iVar15);
        if (input_swap == '\0') {
          uVar17 = *puVar22;
        }
        else {
          uVar8 = (ulong)*(byte *)((long)puVar22 + 2);
          uVar17 = CONCAT13(*(undefined *)puVar22,
                            CONCAT12(*(undefined *)((long)puVar22 + 1),
                                     CONCAT11(*(byte *)((long)puVar22 + 2),
                                              *(undefined *)((long)puVar22 + 3))));
        }
        puVar22 = puVar22 + 1;
        uVar18 = uVar7;
        xprintf(uVar7,uVar13,(ulong)uVar17);
        iVar14 = (int)param_5;
        unaff_R14 = unaff_R14 - (long)iVar16;
        param_6 = SUB168(auVar4 / ZEXT816(uVar20),0) & 0xffffffff;
      } while (uVar19 != uVar12);
    }
    if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    func_0x001018e0();
    lVar5 = *(long *)(in_FS_OFFSET + 0x28);
    uVar7 = uVar8;
    uVar12 = uVar18;
    iVar15 = iVar14;
    if (uVar13 < uVar18) {
      iVar16 = (int)param_6;
      lVar23 = 0;
      uVar19 = (uVar18 - 1) * (long)iVar16;
      lVar6 = uVar18 - uVar13;
      uVar20 = uVar19;
      do {
        auVar4 = ZEXT816(uVar20);
        uVar13 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar18),0)) + iVar14);
        if (input_swap == '\0') {
          uVar11 = (ulong)*(ushort *)(extraout_RDX_01 + lVar23 * 2);
        }
        else {
          uVar11 = (ulong)CONCAT11(*(undefined *)(extraout_RDX_01 + lVar23 * 2),
                                   *(undefined *)(extraout_RDX_01 + 1 + lVar23 * 2));
          uVar7 = unaff_R14 & 0xffff0000 | uVar11;
          unaff_R14 = uVar7;
        }
        lVar23 = lVar23 + 1;
        uVar12 = uVar8;
        xprintf(uVar8,uVar13,uVar11);
        iVar15 = (int)uVar19;
        uVar20 = uVar20 - (long)iVar16;
        param_6 = SUB168(auVar4 / ZEXT816(uVar18),0) & 0xffffffff;
      } while (lVar6 != lVar23);
    }
    if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
      func_0x001018e0();
      lVar5 = *(long *)(in_FS_OFFSET + 0x28);
      uVar8 = uVar7;
      uVar20 = uVar12;
      iVar14 = iVar15;
      if (uVar13 < uVar12) {
        iVar16 = (int)param_6;
        lVar23 = 0;
        uVar19 = (uVar12 - 1) * (long)iVar16;
        lVar6 = uVar12 - uVar13;
        uVar18 = uVar19;
        do {
          auVar4 = ZEXT816(uVar18);
          uVar13 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar12),0)) + iVar15);
          if (input_swap == '\0') {
            uVar3 = *(ushort *)(extraout_RDX_02 + lVar23 * 2);
          }
          else {
            uVar3 = CONCAT11(*(undefined *)(extraout_RDX_02 + lVar23 * 2),
                             *(undefined *)(extraout_RDX_02 + 1 + lVar23 * 2));
            uVar8 = unaff_R14 & 0xffff0000 | (ulong)uVar3;
            unaff_R14 = uVar8;
          }
          lVar23 = lVar23 + 1;
          uVar20 = uVar7;
          xprintf(uVar7,uVar13,(ulong)(uint)(int)(short)uVar3);
          iVar14 = (int)uVar19;
          uVar18 = uVar18 - (long)iVar16;
          param_6 = SUB168(auVar4 / ZEXT816(uVar12),0) & 0xffffffff;
        } while (lVar6 != lVar23);
      }
      if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
        func_0x001018e0();
        if (uVar13 < uVar20) {
          iVar15 = (int)param_6;
          uVar7 = (uVar20 - 1) * (long)iVar15;
          pbVar24 = extraout_RDX_03;
          do {
            auVar4 = ZEXT816(uVar7);
            bVar2 = *pbVar24;
            uVar7 = uVar7 - (long)iVar15;
            pbVar24 = pbVar24 + 1;
            xprintf(uVar8,(ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar20),0)) + iVar14
                                       ),(ulong)bVar2);
            param_6 = SUB168(auVar4 / ZEXT816(uVar20),0) & 0xffffffff;
          } while (pbVar24 != extraout_RDX_03 + (uVar20 - uVar13));
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}

