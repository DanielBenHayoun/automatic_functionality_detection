
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

undefined8 * savewd_restore(uint *param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  byte bVar9;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  undefined *puVar7;
  char **ppcVar8;
  undefined1 *puVar10;
  code *extraout_RDX;
  uint *unaff_RBX;
  uint *unaff_RBP;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  uint *puVar14;
  uint *unaff_R12;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long in_FS_OFFSET;
  int iStack120;
  int iStack116;
  long lStack112;
  uint *puStack96;
  uint *puStack88;
  uint *puStack80;
  uint *puStack48;
  uint uStack36;
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 < 5) {
    switch(*param_1) {
    default:
code_r0x00105003:
      uVar5 = 0;
      break;
    case 2:
      puStack48 = (uint *)&UNK_00105088;
      uVar5 = func_0x00101990((ulong)param_1[1]);
      if ((int)uVar5 != 0) {
        puStack48 = (uint *)&UNK_0010509c;
        unaff_RBP = (uint *)func_0x00101750();
        uVar3 = *unaff_RBP;
        puStack48 = (uint *)&UNK_001050aa;
        func_0x001018b0((ulong)param_1[1]);
        *param_1 = 4;
        param_1[1] = uVar3;
        goto code_r0x00105034;
      }
      *param_1 = 1;
      break;
    case 3:
      uVar3 = param_1[1];
      unaff_RBP = (uint *)(ulong)uVar3;
      if (uVar3 != 0) {
        unaff_R12 = &uStack36;
        if ((int)uVar3 < 1) goto code_r0x00105003;
        do {
          puStack48 = (uint *)&UNK_00105056;
          iVar2 = func_0x00101a20((ulong)uVar3,unaff_R12,0);
          if (-1 < iVar2) {
            bVar9 = (byte)((ulong)uStack36 >> 8);
            param_1[1] = 0xffffffff;
            if ((uStack36 & 0x7f) != 0) {
              puStack48 = (uint *)&UNK_00105071;
              func_0x00101720();
              bVar9 = (byte)((ulong)uStack36 >> 8);
            }
            uVar5 = (ulong)bVar9;
            goto code_r0x00105005;
          }
          puStack48 = (uint *)&UNK_00105045;
          piVar6 = (int *)func_0x00101750();
        } while (*piVar6 == 4);
        puStack48 = (uint *)&UNK_001050d8;
        func_0x00101890(&UNK_001092e8,&UNK_001092c8,0xd8,__PRETTY_FUNCTION___4477);
        goto code_r0x001050d8;
      }
      goto code_r0x001050fc;
    case 4:
      uVar3 = param_1[1];
      puStack48 = (uint *)&UNK_00105031;
      unaff_RBP = (uint *)func_0x00101750();
code_r0x00105034:
      unaff_R12 = (uint *)(ulong)uVar3;
      *unaff_RBP = uVar3;
      uVar5 = 0xffffffff;
    }
code_r0x00105005:
    if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (undefined8 *)uVar5;
    }
code_r0x001050d8:
    puStack48 = (uint *)&UNK_001050dd;
    func_0x00101830();
    unaff_RBX = param_1;
  }
  param_2 = 0x1092c8;
  puStack48 = (uint *)&UNK_001050fc;
  func_0x00101890(&UNK_00109314,&UNK_001092c8,0xe2,__PRETTY_FUNCTION___4477);
  param_1 = unaff_RBX;
code_r0x001050fc:
  puVar14 = (uint *)(ulong)param_2;
  puStack48 = (uint *)&UNK_00105103;
  func_0x00101770();
  puStack96 = param_1;
  puStack48 = param_1;
  if (*puVar14 < 5) {
    puVar7 = &UNK_00109344 + *(int *)(&UNK_00109344 + (ulong)*puVar14 * 4);
    switch(*puVar14) {
    case 1:
    case 2:
      puVar7 = (undefined *)func_0x001018b0((ulong)puVar14[1]);
    default:
code_r0x00105138:
      *puVar14 = 5;
      return (undefined8 *)puVar7;
    case 3:
      puVar7 = (undefined *)(ulong)puVar14[1];
      if ((int)puVar14[1] < 0) goto code_r0x00105138;
      func_0x00101890(&UNK_00109304,&UNK_001092c8,0xf7,__PRETTY_FUNCTION___4491);
      puStack96 = puVar14;
    }
  }
  puVar10 = __PRETTY_FUNCTION___4491;
  puVar11 = (undefined8 *)&UNK_001092c8;
  iVar13 = 0x109314;
  func_0x00101890(&UNK_00109314,&UNK_001092c8,0xfb);
  iVar2 = iVar13 + -1;
  lStack112 = *(long *)(in_FS_OFFSET + 0x28);
  iStack120 = 0;
  puVar12 = puVar11;
  puStack88 = unaff_RBP;
  puStack80 = unaff_R12;
  if (-1 < iVar2) {
    iVar15 = iVar2;
    if (*(char *)puVar11[(long)iVar2] == '/') {
      ppcVar8 = (char **)(puVar11 + (long)iVar2 + -1);
      do {
        iVar15 = iVar15 + -1;
        if (iVar15 == -1) goto code_r0x00105212;
        pcVar1 = *ppcVar8;
        ppcVar8 = ppcVar8 + -1;
      } while (*pcVar1 == '/');
    }
    if (0 < iVar15) {
      puVar17 = (undefined8 *)0x0;
      puVar16 = puVar11;
      do {
        if (((iStack120 != 3) || (iStack116 < 1)) &&
           (puVar12 = (undefined8 *)&iStack120, uVar3 = (*extraout_RDX)(*puVar16,&iStack120,puVar10)
           , (int)puVar17 < (int)uVar3)) {
          puVar17 = (undefined8 *)(ulong)uVar3;
        }
        if ((*(char *)puVar16[1] != '/') &&
           (puVar12 = puVar17, uVar3 = savewd_restore(&iStack120), (int)puVar17 < (int)uVar3)) {
          puVar17 = (undefined8 *)(ulong)uVar3;
        }
        puVar16 = puVar16 + 1;
      } while (puVar16 != puVar11 + (ulong)(iVar15 - 1) + 1);
      goto code_r0x0010521d;
    }
  }
code_r0x00105212:
  puVar17 = (undefined8 *)0x0;
  iVar15 = 0;
code_r0x0010521d:
  savewd_finish(&iStack120);
  if (iVar15 < iVar13) {
    puVar16 = puVar11 + (long)iVar15;
    do {
      puVar12 = (undefined8 *)&iStack120;
      uVar3 = (*extraout_RDX)(*puVar16,&iStack120,puVar10);
      if ((int)puVar17 < (int)uVar3) {
        puVar17 = (undefined8 *)(ulong)uVar3;
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != puVar11 + (ulong)(uint)(iVar2 - iVar15) + (long)iVar15 + 1);
  }
  if (lStack112 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101830();
    if (puVar12 == (undefined8 *)0x0) {
      func_0x00101a90();
      func_0x001017f0(0,&UNK_001093a8,5);
    }
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)PTR___fprintf_chk_0030bfa0)();
    return (undefined8 *)uVar4;
  }
  return puVar17;
}

