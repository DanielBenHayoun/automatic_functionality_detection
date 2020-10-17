
void print_short(ulong param_1,ulong param_2,long param_3,ulong param_4,int param_5,ulong param_6)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  undefined auVar4 [16];
  long lVar5;
  ulong uVar6;
  long extraout_RDX;
  byte *extraout_RDX_00;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_R14;
  long lVar15;
  byte *pbVar16;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = param_4;
  uVar7 = param_1;
  iVar12 = param_5;
  if (param_2 < param_1) {
    iVar10 = (int)param_6;
    lVar15 = 0;
    uVar8 = (param_1 - 1) * (long)iVar10;
    lVar5 = param_1 - param_2;
    uVar13 = uVar8;
    do {
      auVar4 = ZEXT816(uVar13);
      param_2 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(param_1),0)) + param_5);
      if (input_swap == '\0') {
        uVar14 = (ulong)*(ushort *)(param_3 + lVar15 * 2);
      }
      else {
        uVar14 = (ulong)CONCAT11(*(undefined *)(param_3 + lVar15 * 2),
                                 *(undefined *)(param_3 + 1 + lVar15 * 2));
        uVar6 = unaff_R14 & 0xffff0000 | uVar14;
        unaff_R14 = uVar6;
      }
      lVar15 = lVar15 + 1;
      uVar7 = param_4;
      xprintf(param_4,param_2,uVar14);
      iVar12 = (int)uVar8;
      uVar13 = uVar13 - (long)iVar10;
      param_6 = SUB168(auVar4 / ZEXT816(param_1),0) & 0xffffffff;
    } while (lVar5 != lVar15);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = uVar6;
  uVar8 = uVar7;
  iVar10 = iVar12;
  if (param_2 < uVar7) {
    iVar11 = (int)param_6;
    lVar15 = 0;
    uVar9 = (uVar7 - 1) * (long)iVar11;
    lVar5 = uVar7 - param_2;
    uVar14 = uVar9;
    do {
      auVar4 = ZEXT816(uVar14);
      param_2 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar7),0)) + iVar12);
      if (input_swap == '\0') {
        uVar2 = *(ushort *)(extraout_RDX + lVar15 * 2);
      }
      else {
        uVar2 = CONCAT11(*(undefined *)(extraout_RDX + lVar15 * 2),
                         *(undefined *)(extraout_RDX + 1 + lVar15 * 2));
        uVar13 = unaff_R14 & 0xffff0000 | (ulong)uVar2;
        unaff_R14 = uVar13;
      }
      lVar15 = lVar15 + 1;
      uVar8 = uVar6;
      xprintf(uVar6,param_2,(ulong)(uint)(int)(short)uVar2);
      iVar10 = (int)uVar9;
      uVar14 = uVar14 - (long)iVar11;
      param_6 = SUB168(auVar4 / ZEXT816(uVar7),0) & 0xffffffff;
    } while (lVar5 != lVar15);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  if (param_2 < uVar8) {
    iVar12 = (int)param_6;
    uVar6 = (uVar8 - 1) * (long)iVar12;
    pbVar16 = extraout_RDX_00;
    do {
      auVar4 = ZEXT816(uVar6);
      bVar1 = *pbVar16;
      uVar6 = uVar6 - (long)iVar12;
      pbVar16 = pbVar16 + 1;
      xprintf(uVar13,(ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar8),0)) + iVar10),
              (ulong)bVar1);
      param_6 = SUB168(auVar4 / ZEXT816(uVar8),0) & 0xffffffff;
    } while (pbVar16 != extraout_RDX_00 + (uVar8 - param_2));
  }
  return;
}

