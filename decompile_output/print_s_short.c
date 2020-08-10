
void print_s_short(ulong param_1,ulong param_2,long param_3,ulong param_4,int param_5,ulong param_6)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  undefined auVar4 [16];
  long lVar5;
  ulong uVar6;
  byte *extraout_RDX;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong unaff_R14;
  long lVar12;
  byte *pbVar13;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = param_4;
  uVar7 = param_1;
  iVar8 = param_5;
  if (param_2 < param_1) {
    iVar10 = (int)param_6;
    lVar12 = 0;
    uVar9 = (param_1 - 1) * (long)iVar10;
    lVar5 = param_1 - param_2;
    uVar11 = uVar9;
    do {
      auVar4 = ZEXT816(uVar11);
      param_2 = (ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(param_1),0)) + param_5);
      if (input_swap == '\0') {
        uVar2 = *(ushort *)(param_3 + lVar12 * 2);
      }
      else {
        uVar2 = CONCAT11(*(undefined *)(param_3 + lVar12 * 2),
                         *(undefined *)(param_3 + 1 + lVar12 * 2));
        uVar6 = unaff_R14 & 0xffff0000 | (ulong)uVar2;
        unaff_R14 = uVar6;
      }
      lVar12 = lVar12 + 1;
      uVar7 = param_4;
      xprintf(param_4,param_2,(ulong)(uint)(int)(short)uVar2);
      iVar8 = (int)uVar9;
      uVar11 = uVar11 - (long)iVar10;
      param_6 = SUB168(auVar4 / ZEXT816(param_1),0) & 0xffffffff;
    } while (lVar5 != lVar12);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001018e0();
  if (param_2 < uVar7) {
    iVar10 = (int)param_6;
    uVar11 = (uVar7 - 1) * (long)iVar10;
    pbVar13 = extraout_RDX;
    do {
      auVar4 = ZEXT816(uVar11);
      bVar1 = *pbVar13;
      uVar11 = uVar11 - (long)iVar10;
      pbVar13 = pbVar13 + 1;
      xprintf(uVar6,(ulong)(uint)(((int)param_6 - SUB164(auVar4 / ZEXT816(uVar7),0)) + iVar8),
              (ulong)bVar1);
      param_6 = SUB168(auVar4 / ZEXT816(uVar7),0) & 0xffffffff;
    } while (pbVar13 != extraout_RDX + (uVar7 - param_2));
  }
  return;
}

