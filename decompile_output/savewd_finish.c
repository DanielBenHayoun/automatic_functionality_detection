
/* WARNING: Possible PIC construction at 0x00105357: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00105389: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010543d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00105688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001055ee: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010568d) */
/* WARNING: Removing unreachable block (ram,0x00105442) */
/* WARNING: Removing unreachable block (ram,0x0010538e) */
/* WARNING: Removing unreachable block (ram,0x001056f0) */
/* WARNING: Removing unreachable block (ram,0x001053b6) */
/* WARNING: Removing unreachable block (ram,0x00105480) */
/* WARNING: Removing unreachable block (ram,0x001054c2) */
/* WARNING: Removing unreachable block (ram,0x001053d0) */
/* WARNING: Removing unreachable block (ram,0x00105414) */
/* WARNING: Removing unreachable block (ram,0x001056a0) */
/* WARNING: Removing unreachable block (ram,0x00105638) */
/* WARNING: Removing unreachable block (ram,0x00105673) */
/* WARNING: Removing unreachable block (ram,0x00105608) */
/* WARNING: Removing unreachable block (ram,0x001055b0) */
/* WARNING: Removing unreachable block (ram,0x001055d6) */
/* WARNING: Removing unreachable block (ram,0x00105560) */
/* WARNING: Removing unreachable block (ram,0x00105518) */
/* WARNING: Removing unreachable block (ram,0x001054d8) */
/* WARNING: Removing unreachable block (ram,0x00105446) */
/* WARNING: Removing unreachable block (ram,0x001055f3) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * savewd_finish(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char **ppcVar6;
  undefined1 *puVar7;
  code *extraout_RDX;
  uint *unaff_RBX;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  int iStack80;
  int iStack76;
  long lStack72;
  uint *puStack56;
  
  puStack56 = unaff_RBX;
  if (*param_1 < 5) {
    puVar5 = &UNK_00109344 + *(int *)(&UNK_00109344 + (ulong)*param_1 * 4);
    switch(*param_1) {
    case 1:
    case 2:
      puVar5 = (undefined *)func_0x001018b0((ulong)param_1[1]);
    default:
code_r0x00105138:
      *param_1 = 5;
      return (undefined8 *)puVar5;
    case 3:
      puVar5 = (undefined *)(ulong)param_1[1];
      if ((int)param_1[1] < 0) goto code_r0x00105138;
      func_0x00101890(&UNK_00109304,&UNK_001092c8,0xf7,__PRETTY_FUNCTION___4491);
      puStack56 = param_1;
    }
  }
  puVar7 = __PRETTY_FUNCTION___4491;
  puVar8 = (undefined8 *)&UNK_001092c8;
  iVar10 = 0x109314;
  func_0x00101890(&UNK_00109314,&UNK_001092c8,0xfb);
  iVar2 = iVar10 + -1;
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  iStack80 = 0;
  puVar9 = puVar8;
  if (-1 < iVar2) {
    iVar11 = iVar2;
    if (*(char *)puVar8[(long)iVar2] == '/') {
      ppcVar6 = (char **)(puVar8 + (long)iVar2 + -1);
      do {
        iVar11 = iVar11 + -1;
        if (iVar11 == -1) goto code_r0x00105212;
        pcVar1 = *ppcVar6;
        ppcVar6 = ppcVar6 + -1;
      } while (*pcVar1 == '/');
    }
    if (0 < iVar11) {
      puVar13 = (undefined8 *)0x0;
      puVar12 = puVar8;
      do {
        if (((iStack80 != 3) || (iStack76 < 1)) &&
           (puVar9 = (undefined8 *)&iStack80, uVar3 = (*extraout_RDX)(*puVar12,&iStack80,puVar7),
           (int)puVar13 < (int)uVar3)) {
          puVar13 = (undefined8 *)(ulong)uVar3;
        }
        if ((*(char *)puVar12[1] != '/') &&
           (puVar9 = puVar13, uVar3 = savewd_restore(&iStack80), (int)puVar13 < (int)uVar3)) {
          puVar13 = (undefined8 *)(ulong)uVar3;
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar8 + (ulong)(iVar11 - 1) + 1);
      goto code_r0x0010521d;
    }
  }
code_r0x00105212:
  puVar13 = (undefined8 *)0x0;
  iVar11 = 0;
code_r0x0010521d:
  savewd_finish(&iStack80);
  if (iVar11 < iVar10) {
    puVar12 = puVar8 + (long)iVar11;
    do {
      puVar9 = (undefined8 *)&iStack80;
      uVar3 = (*extraout_RDX)(*puVar12,&iStack80,puVar7);
      if ((int)puVar13 < (int)uVar3) {
        puVar13 = (undefined8 *)(ulong)uVar3;
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar8 + (ulong)(uint)(iVar2 - iVar11) + (long)iVar11 + 1);
  }
  if (lStack72 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101830();
    if (puVar9 == (undefined8 *)0x0) {
      func_0x00101a90();
      func_0x001017f0(0,&UNK_001093a8,5);
    }
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)PTR___fprintf_chk_0030bfa0)();
    return (undefined8 *)uVar4;
  }
  return puVar13;
}

