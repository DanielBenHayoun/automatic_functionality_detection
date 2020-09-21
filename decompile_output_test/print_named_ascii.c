
void print_named_ascii(byte *param_1,byte *param_2,byte *param_3,undefined1 *param_4,
                      undefined8 *param_5,ulong param_6)

{
  undefined uVar1;
  ushort uVar2;
  undefined auVar3 [16];
  long lVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 *extraout_RDX;
  undefined *puVar8;
  undefined8 *extraout_RDX_00;
  undefined8 uVar9;
  uint *extraout_RDX_01;
  long extraout_RDX_02;
  ulong uVar10;
  long extraout_RDX_03;
  byte *extraout_RDX_04;
  byte *unaff_RBX;
  byte *unaff_RBP;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  ulong unaff_R12;
  byte *unaff_R13;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  byte *unaff_R14;
  undefined8 *unaff_R15;
  undefined8 *puVar22;
  uint *puVar23;
  byte *pbVar24;
  long in_FS_OFFSET;
  undefined8 uStack264;
  long lStack256;
  byte *pbStack240;
  byte *pbStack232;
  ulong uStack224;
  byte *pbStack216;
  byte *pbStack208;
  undefined8 *puStack200;
  byte *pbStack184;
  int iStack172;
  long lStack168;
  undefined8 uStack160;
  long lStack152;
  byte *pbStack136;
  byte *pbStack128;
  ulong uStack120;
  byte *pbStack112;
  byte *pbStack104;
  undefined8 *puStack96;
  byte *pbStack88;
  byte *pbStack80;
  byte bStack66;
  undefined uStack65;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack136 = unaff_RBX;
  pbVar13 = param_1;
  if (param_2 < param_1) {
    unaff_R13 = (byte *)((ulong)param_5 & 0xffffffff);
    unaff_R12 = SEXT48((int)param_6);
    pbStack88 = param_3 + (long)(param_1 + -(long)param_2);
    param_5 = (undefined8 *)((long)(param_1 + -1) * unaff_R12);
    pbStack80 = &bStack66;
    unaff_R15 = param_5;
    do {
      unaff_R14 = param_3 + 1;
      unaff_RBP = SUB168(ZEXT816(unaff_R15) / ZEXT816(param_1),0);
      bVar5 = (byte)((uint)*param_3 & 0x7f);
      pbVar7 = &UNK_0010acd8;
      if (bVar5 != 0x7f) {
        if (bVar5 < 0x21) {
          param_4 = charname;
          pbVar7 = charname + (ulong)((uint)*param_3 & 0x7f) * 4;
        }
        else {
          uStack65 = 0;
          pbVar7 = pbStack80;
          bStack66 = bVar5;
        }
      }
      pbVar13 = &UNK_0010acdc;
      param_2 = (byte *)(ulong)(uint)(((int)param_6 -
                                      SUB164(ZEXT816(unaff_R15) / ZEXT816(param_1),0)) +
                                     (int)unaff_R13);
      unaff_R15 = (undefined8 *)((long)unaff_R15 - unaff_R12);
      puStack96 = (undefined8 *)&UNK_001030c6;
      xprintf(&UNK_0010acdc,param_2,pbVar7);
      param_6 = (ulong)unaff_RBP & 0xffffffff;
      pbStack136 = param_1;
      param_3 = unaff_R14;
    } while (unaff_R14 != pbStack88);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack96 = (undefined8 *)&UNK_0010312c;
  func_0x001018e0();
  lStack152 = *(long *)(in_FS_OFFSET + 0x28);
  iStack172 = (int)param_5;
  pbStack240 = pbStack136;
  pbStack232 = unaff_RBP;
  pbVar7 = param_2;
  pbVar12 = pbVar13;
  pbStack184 = param_4;
  pbStack128 = unaff_RBP;
  uStack120 = unaff_R12;
  pbStack112 = unaff_R13;
  pbStack104 = unaff_R14;
  puStack96 = unaff_R15;
  if (param_2 < pbVar13) {
    lStack168 = (long)(int)param_6;
    pbVar11 = (byte *)((long)(pbVar13 + -1) * lStack168);
    pbVar24 = pbVar13;
    pbVar19 = (byte *)((long)(pbVar13 + -1) * lStack168);
    puVar22 = extraout_RDX;
    do {
      param_4 = pbVar11;
      unaff_R13 = pbVar24 + -1;
      unaff_R12 = SUB168(ZEXT816(pbVar19) / ZEXT816(pbVar13),0);
      pbVar7 = (byte *)(ulong)(uint)(((int)param_6 - SUB164(ZEXT816(pbVar19) / ZEXT816(pbVar13),0))
                                    + iStack172);
      if (input_swap == '\0') {
        uVar9 = *puVar22;
      }
      else {
        puVar8 = (undefined *)((long)puVar22 + 7);
        lVar6 = 0;
        do {
          uVar1 = *puVar8;
          puVar8 = puVar8 + -1;
          *(undefined *)((long)&uStack160 + lVar6) = uVar1;
          lVar6 = lVar6 + 1;
          uVar9 = uStack160;
        } while (lVar6 != 8);
      }
      unaff_R15 = puVar22 + 1;
      puStack200 = (undefined8 *)&UNK_0010319b;
      pbVar12 = pbStack184;
      xprintf(pbStack184,pbVar7,uVar9);
      unaff_R14 = pbVar19 + -lStack168;
      param_6 = unaff_R12 & 0xffffffff;
      pbVar11 = param_4;
      pbStack240 = pbVar13;
      pbStack232 = param_2;
      pbVar24 = unaff_R13;
      pbVar19 = unaff_R14;
      puVar22 = unaff_R15;
    } while (unaff_R13 != param_2);
  }
  if (lStack152 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack200 = (undefined8 *)&UNK_00103224;
  func_0x001018e0();
  lStack256 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = (int)param_5;
  pbVar13 = param_4;
  pbVar11 = pbVar7;
  pbVar24 = pbVar12;
  uStack224 = unaff_R12;
  pbStack216 = unaff_R13;
  pbStack208 = unaff_R14;
  puStack200 = unaff_R15;
  if (pbVar7 < pbVar12) {
    iVar15 = (int)param_6;
    pbVar13 = (byte *)((long)(pbVar12 + -1) * (long)iVar15);
    pbVar19 = pbVar12;
    pbVar20 = pbVar13;
    puVar22 = extraout_RDX_00;
    do {
      pbVar19 = pbVar19 + -1;
      pbVar11 = (byte *)(ulong)(uint)(((int)param_6 - SUB164(ZEXT816(pbVar20) / ZEXT816(pbVar12),0))
                                     + iVar14);
      if (input_swap == '\0') {
        uVar9 = *puVar22;
      }
      else {
        puVar8 = (undefined *)((long)puVar22 + 7);
        lVar6 = 0;
        do {
          uVar1 = *puVar8;
          puVar8 = puVar8 + -1;
          *(undefined *)((long)&uStack264 + lVar6) = uVar1;
          lVar6 = lVar6 + 1;
          uVar9 = uStack264;
        } while (lVar6 != 8);
      }
      puVar22 = puVar22 + 1;
      pbVar24 = param_4;
      xprintf(param_4,pbVar11,uVar9);
      unaff_R14 = pbVar20 + -(long)iVar15;
      param_6 = SUB168(ZEXT816(pbVar20) / ZEXT816(pbVar12),0) & 0xffffffff;
      pbVar20 = unaff_R14;
    } while (pbVar19 != pbVar7);
  }
  if (lStack256 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar19 = (byte *)0x0;
  iVar15 = (int)param_5;
  pbVar7 = pbVar13;
  pbVar12 = pbVar11;
  iVar14 = iVar15;
  if (pbVar11 < pbVar24) {
    iVar17 = (int)param_6;
    pbVar7 = (byte *)((long)(pbVar24 + -1) * (long)iVar17);
    pbVar20 = pbVar24;
    unaff_R14 = pbVar7;
    puVar23 = extraout_RDX_01;
    do {
      pbVar20 = pbVar20 + -1;
      auVar3 = ZEXT816(unaff_R14);
      pbVar12 = (byte *)(ulong)(uint)(((int)param_6 - SUB164(auVar3 / ZEXT816(pbVar24),0)) + iVar15)
      ;
      if (input_swap == '\0') {
        uVar18 = *puVar23;
      }
      else {
        pbVar7 = (byte *)(ulong)*(byte *)((long)puVar23 + 2);
        uVar18 = CONCAT13(*(undefined *)puVar23,
                          CONCAT12(*(undefined *)((long)puVar23 + 1),
                                   CONCAT11(*(byte *)((long)puVar23 + 2),
                                            *(undefined *)((long)puVar23 + 3))));
      }
      puVar23 = puVar23 + 1;
      pbVar19 = pbVar13;
      xprintf(pbVar13,pbVar12,(ulong)uVar18);
      iVar14 = (int)param_5;
      unaff_R14 = unaff_R14 + -(long)iVar17;
      param_6 = SUB168(auVar3 / ZEXT816(pbVar24),0) & 0xffffffff;
    } while (pbVar20 != pbVar11);
  }
  if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar13 = pbVar7;
  pbVar11 = pbVar19;
  iVar15 = iVar14;
  if (pbVar12 < pbVar19) {
    iVar17 = (int)param_6;
    pbVar24 = (byte *)0x0;
    uVar16 = (long)(pbVar19 + -1) * (long)iVar17;
    lVar4 = -(long)pbVar12;
    uVar21 = uVar16;
    do {
      auVar3 = ZEXT816(uVar21);
      pbVar12 = (byte *)(ulong)(uint)(((int)param_6 - SUB164(auVar3 / ZEXT816(pbVar19),0)) + iVar14)
      ;
      if (input_swap == '\0') {
        uVar10 = (ulong)*(ushort *)(extraout_RDX_02 + (long)pbVar24 * 2);
      }
      else {
        uVar10 = (ulong)CONCAT11(*(undefined *)(extraout_RDX_02 + (long)pbVar24 * 2),
                                 *(undefined *)(extraout_RDX_02 + 1 + (long)pbVar24 * 2));
        pbVar13 = (byte *)((ulong)unaff_R14 & 0xffff0000 | uVar10);
        unaff_R14 = pbVar13;
      }
      pbVar24 = pbVar24 + 1;
      pbVar11 = pbVar7;
      xprintf(pbVar7,pbVar12,uVar10);
      iVar15 = (int)uVar16;
      uVar21 = uVar21 - (long)iVar17;
      param_6 = SUB168(auVar3 / ZEXT816(pbVar19),0) & 0xffffffff;
    } while (pbVar19 + lVar4 != pbVar24);
  }
  if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar7 = pbVar13;
  pbVar24 = pbVar11;
  iVar14 = iVar15;
  if (pbVar12 < pbVar11) {
    iVar17 = (int)param_6;
    pbVar19 = (byte *)0x0;
    uVar16 = (long)(pbVar11 + -1) * (long)iVar17;
    lVar4 = -(long)pbVar12;
    uVar21 = uVar16;
    do {
      auVar3 = ZEXT816(uVar21);
      pbVar12 = (byte *)(ulong)(uint)(((int)param_6 - SUB164(auVar3 / ZEXT816(pbVar11),0)) + iVar15)
      ;
      if (input_swap == '\0') {
        uVar2 = *(ushort *)(extraout_RDX_03 + (long)pbVar19 * 2);
      }
      else {
        uVar2 = CONCAT11(*(undefined *)(extraout_RDX_03 + (long)pbVar19 * 2),
                         *(undefined *)(extraout_RDX_03 + 1 + (long)pbVar19 * 2));
        pbVar7 = (byte *)((ulong)unaff_R14 & 0xffff0000 | (ulong)uVar2);
        unaff_R14 = pbVar7;
      }
      pbVar19 = pbVar19 + 1;
      pbVar24 = pbVar13;
      xprintf(pbVar13,pbVar12,(ulong)(uint)(int)(short)uVar2);
      iVar14 = (int)uVar16;
      uVar21 = uVar21 - (long)iVar17;
      param_6 = SUB168(auVar3 / ZEXT816(pbVar11),0) & 0xffffffff;
    } while (pbVar11 + lVar4 != pbVar19);
  }
  if (lVar6 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x001018e0();
    if (pbVar12 < pbVar24) {
      iVar15 = (int)param_6;
      uVar21 = (long)(pbVar24 + -1) * (long)iVar15;
      pbVar13 = extraout_RDX_04;
      do {
        auVar3 = ZEXT816(uVar21);
        bVar5 = *pbVar13;
        uVar21 = uVar21 - (long)iVar15;
        pbVar13 = pbVar13 + 1;
        xprintf(pbVar7,(ulong)(uint)(((int)param_6 - SUB164(auVar3 / ZEXT816(pbVar24),0)) + iVar14),
                (ulong)bVar5);
        param_6 = SUB168(auVar3 / ZEXT816(pbVar24),0) & 0xffffffff;
      } while (pbVar13 != extraout_RDX_04 + (long)(pbVar24 + -(long)pbVar12));
    }
    return;
  }
  return;
}

