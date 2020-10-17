
ulong mulredc2(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
              undefined8 *param_6,ulong param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *extraout_RDX;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  bool bVar20;
  undefined8 uStack152;
  undefined8 uStack144;
  
  if (-1 < (long)param_2) {
    if (-1 < (long)param_4) {
      if (-1 < (long)param_6) {
        uVar7 = SUB168(ZEXT816(param_3) * ZEXT816(param_5) >> 0x40,0);
        lVar4 = SUB168(ZEXT816(param_3) * ZEXT816(param_5),0);
        uVar19 = -param_8 * lVar4;
        uVar8 = SUB168(ZEXT816(uVar19) * ZEXT816(param_7) >> 0x40,0);
        auVar3 = ZEXT816(uVar19) * ZEXT816(param_6);
        uVar19 = SUB168(auVar3,0);
        uVar11 = SUB168(ZEXT816(param_3) * ZEXT816(param_4),0) + (ulong)(lVar4 != 0);
        uVar12 = uVar11 + uVar8;
        uVar13 = uVar12 + uVar7;
        uVar14 = uVar13 + uVar19;
        uVar17 = SUB168(ZEXT816(param_3) * ZEXT816(param_4) >> 0x40,0) + (ulong)CARRY8(uVar11,uVar8)
                 + (ulong)CARRY8(uVar12,uVar7) + SUB168(auVar3 >> 0x40,0) +
                 (ulong)CARRY8(uVar13,uVar19);
        uVar19 = SUB168(ZEXT816(param_2) * ZEXT816(param_5),0);
        lVar4 = uVar19 + uVar14;
        uVar16 = SUB168(ZEXT816(param_2) * ZEXT816(param_5) >> 0x40,0) +
                 (ulong)CARRY8(uVar19,uVar14);
        uVar7 = -param_8 * lVar4;
        uVar19 = SUB168(ZEXT816(param_2) * ZEXT816(param_4),0);
        uVar11 = SUB168(ZEXT816(uVar7) * ZEXT816(param_7) >> 0x40,0);
        auVar3 = ZEXT816(uVar7) * ZEXT816(param_6);
        uVar7 = SUB168(auVar3,0);
        uVar12 = (ulong)(lVar4 != 0) + uVar19 + uVar17;
        uVar13 = uVar12 + uVar11;
        uVar14 = uVar13 + uVar16;
        uVar8 = uVar14 + uVar7;
        puVar9 = (undefined8 *)
                 (SUB168(ZEXT816(param_2) * ZEXT816(param_4) >> 0x40,0) +
                  (ulong)CARRY8(uVar19,uVar17) + (ulong)CARRY8(uVar12,uVar11) +
                  (ulong)CARRY8(uVar13,uVar16) + SUB168(auVar3 >> 0x40,0) +
                 (ulong)CARRY8(uVar14,uVar7));
        if ((param_6 < puVar9) || ((param_6 == puVar9 && (param_7 <= uVar8)))) {
          bVar20 = uVar8 < param_7;
          uVar8 = uVar8 - param_7;
          puVar9 = (undefined8 *)((long)puVar9 + (-(ulong)bVar20 - (long)param_6));
        }
        *(undefined8 **)param_1 = puVar9;
        return uVar8;
      }
      func_0x00101750(&UNK_0010b5f8,&UNK_0010b424,0x3e9,__PRETTY_FUNCTION___7119);
    }
    func_0x00101750(&UNK_0010b5d8,&UNK_0010b424,1000,__PRETTY_FUNCTION___7119);
  }
  puVar6 = __PRETTY_FUNCTION___7119;
  puVar9 = (undefined8 *)&UNK_0010b424;
  puVar15 = (undefined8 *)&UNK_0010b5b8;
  func_0x00101750(&UNK_0010b5b8,&UNK_0010b424,999);
  iVar10 = 0x40;
  uStack144 = *param_6;
  uVar5 = *puVar9;
  uVar18 = puVar9[1];
  uVar1 = *(undefined8 *)puVar6;
  uVar2 = ((undefined8 *)puVar6)[1];
  uStack152 = param_6[1];
  uVar19 = *extraout_RDX;
  do {
    if ((uVar19 & 1) != 0) {
      uStack144 = mulredc2(puVar15,uStack152,uStack144,uVar18,uVar5,uVar2,uVar1,param_5);
      uStack152 = *puVar15;
    }
    uVar19 = uVar19 >> 1;
    uVar5 = mulredc2(puVar15,uVar18,uVar5,uVar18,uVar5,uVar2,uVar1,param_5);
    iVar10 = iVar10 + -1;
    uVar18 = *puVar15;
  } while (iVar10 != 0);
  uVar19 = extraout_RDX[1];
  while (uVar19 != 0) {
    if ((uVar19 & 1) != 0) {
      uStack144 = mulredc2(puVar15,uStack152,uStack144,uVar18,uVar5,uVar2,uVar1,param_5);
      uStack152 = *puVar15;
    }
    uVar5 = mulredc2(puVar15,uVar18,uVar5,uVar18,uVar5,uVar2,uVar1,param_5);
    uVar19 = uVar19 >> 1;
    uVar18 = *puVar15;
  }
  *puVar15 = uStack152;
  return uStack144;
}

