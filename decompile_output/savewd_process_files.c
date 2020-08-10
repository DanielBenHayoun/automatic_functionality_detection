
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

undefined8 * savewd_process_files(int param_1,undefined8 *param_2,code *param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char **ppcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  int iStack72;
  int iStack68;
  long lStack64;
  
  iVar2 = param_1 + -1;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  iStack72 = 0;
  puVar6 = param_2;
  if (-1 < iVar2) {
    iVar7 = iVar2;
    if (*(char *)param_2[(long)iVar2] == '/') {
      ppcVar5 = (char **)(param_2 + (long)iVar2 + -1);
      do {
        iVar7 = iVar7 + -1;
        if (iVar7 == -1) goto code_r0x00105212;
        pcVar1 = *ppcVar5;
        ppcVar5 = ppcVar5 + -1;
      } while (*pcVar1 == '/');
    }
    if (0 < iVar7) {
      puVar9 = (undefined8 *)0x0;
      puVar8 = param_2;
      do {
        if (((iStack72 != 3) || (iStack68 < 1)) &&
           (puVar6 = (undefined8 *)&iStack72, uVar3 = (*param_3)(*puVar8,&iStack72,param_4),
           (int)puVar9 < (int)uVar3)) {
          puVar9 = (undefined8 *)(ulong)uVar3;
        }
        if ((*(char *)puVar8[1] != '/') &&
           (puVar6 = puVar9, uVar3 = savewd_restore(&iStack72), (int)puVar9 < (int)uVar3)) {
          puVar9 = (undefined8 *)(ulong)uVar3;
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != param_2 + (ulong)(iVar7 - 1) + 1);
      goto code_r0x0010521d;
    }
  }
code_r0x00105212:
  puVar9 = (undefined8 *)0x0;
  iVar7 = 0;
code_r0x0010521d:
  savewd_finish(&iStack72);
  if (iVar7 < param_1) {
    puVar8 = param_2 + (long)iVar7;
    do {
      puVar6 = (undefined8 *)&iStack72;
      uVar3 = (*param_3)(*puVar8,&iStack72,param_4);
      if ((int)puVar9 < (int)uVar3) {
        puVar9 = (undefined8 *)(ulong)uVar3;
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != param_2 + (ulong)(uint)(iVar2 - iVar7) + (long)iVar7 + 1);
  }
  if (lStack64 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101830();
    if (puVar6 == (undefined8 *)0x0) {
      func_0x00101a90();
      func_0x001017f0(0,&UNK_001093a8,5);
    }
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)PTR___fprintf_chk_0030bfa0)();
    return (undefined8 *)uVar4;
  }
  return puVar9;
}

