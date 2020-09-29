
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

undefined8 * savewd_chdir(uint *param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar12;
  undefined8 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  ulong uVar9;
  undefined *puVar10;
  char **ppcVar11;
  undefined1 *puVar13;
  code *extraout_RDX;
  uint *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int iStack160;
  int iStack156;
  long lStack152;
  uint *puStack136;
  uint *puStack128;
  uint *puStack120;
  undefined8 uStack112;
  ulong uStack104;
  uint *puStack88;
  uint uStack76;
  long lStack72;
  uint *puStack64;
  uint *puStack56;
  uint *puStack48;
  
  uStack104 = (ulong)param_3;
  if (param_4 == (uint *)0x0) {
    puStack64 = (uint *)0xffffffff;
    if ((param_3 & 1) != 0) {
      puStack48 = (uint *)&UNK_00104e5f;
      uVar3 = func_0x001017c0(param_2,(ulong)((param_3 & 1) << 0x11 | 0x10900));
      goto code_r0x00104d45;
    }
  }
  else {
    puStack48 = (uint *)&UNK_00104d36;
    uVar3 = func_0x001017c0(param_2,(ulong)((param_3 & 1) << 0x11 | 0x10900));
    *param_4 = uVar3;
    puStack48 = (uint *)&UNK_00104d40;
    puVar14 = (uint *)func_0x00101750();
    param_4[1] = *puVar14;
code_r0x00104d45:
    puStack64 = (uint *)(ulong)uVar3;
    if ((int)uVar3 < 0) {
      puStack48 = (uint *)&UNK_00104d8d;
      piVar8 = (int *)func_0x00101750();
      if (*piVar8 != 0xd) {
        return (undefined8 *)0xffffffff;
      }
    }
    else {
      uStack104 = (ulong)(param_3 & 2);
      if ((param_3 & 2) != 0) {
code_r0x00104d4f:
        bVar21 = param_4 == (uint *)0x0;
        uStack104 = 0;
code_r0x00104d58:
        if ((-1 < (int)uVar3) && (bVar21)) {
          puStack48 = (uint *)&UNK_00104d65;
          puVar7 = (undefined4 *)func_0x00101750();
          uVar1 = *puVar7;
          puStack48 = (uint *)&UNK_00104d72;
          func_0x001018b0((ulong)uVar3);
          *puVar7 = uVar1;
        }
        return (undefined8 *)uStack104;
      }
    }
  }
  uVar3 = (uint)puStack64;
  uVar4 = *param_1;
  if (uVar4 < 6) {
    uVar9 = 1 << ((byte)uVar4 & 0x3f);
    if ((uVar9 & 0x36) != 0) {
code_r0x00104de4:
      if ((int)uVar3 < 0) {
code_r0x00104e18:
        puStack48 = (uint *)&UNK_00104e20;
        uVar4 = func_0x00101820(param_2);
        uStack104 = (ulong)uVar4;
        if (uVar4 != 0) {
          return (undefined8 *)uStack104;
        }
      }
      else {
code_r0x00104de8:
        puStack48 = (uint *)&UNK_00104def;
        uVar4 = func_0x00101990(puStack64);
        uStack104 = (ulong)uVar4;
        if (uVar4 != 0) {
          bVar21 = param_4 == (uint *)0x0;
          goto code_r0x00104d58;
        }
      }
      switch(*param_1) {
      default:
        puStack48 = (uint *)&UNK_00104f8a;
        func_0x00101890(&UNK_00109314,&UNK_001092c8,0x9f,__PRETTY_FUNCTION___4461);
        goto code_r0x00104f8a;
      case 1:
        *param_1 = 2;
      case 2:
      case 4:
      case 5:
        goto code_r0x00104d4f;
      case 3:
        goto code_r0x00104eb0;
      }
    }
    if ((uVar9 & 8) != 0) {
      if ((int)param_1[1] < 0) goto code_r0x00104f19;
      if (-1 < (int)uVar3) goto code_r0x00104de8;
      goto code_r0x00104e18;
    }
    if (uVar4 == 0) {
      puStack48 = (uint *)&UNK_00104dcf;
      uVar4 = open_safer(&UNK_00108cac,0);
      if ((int)uVar4 < 0) goto code_r0x00104ee0;
      *param_1 = 1;
      param_1[1] = uVar4;
      goto code_r0x00104de4;
    }
  }
code_r0x00104f8a:
  uVar3 = 0x1092c8;
  puStack136 = (uint *)&UNK_00109314;
  puStack48 = (uint *)&UNK_00104fa9;
  func_0x00101890(&UNK_00109314,&UNK_001092c8,99,__PRETTY_FUNCTION___4446);
  lStack72 = *(long *)(in_FS_OFFSET + 0x28);
  puVar14 = puStack64;
  puStack128 = param_4;
  puStack56 = param_4;
  puStack48 = param_1;
  if (*puStack136 < 5) {
    switch(*puStack136) {
    default:
code_r0x00105003:
      uVar9 = 0;
      break;
    case 2:
      puStack88 = (uint *)&UNK_00105088;
      uVar9 = func_0x00101990((ulong)puStack136[1]);
      if ((int)uVar9 != 0) {
        puStack88 = (uint *)&UNK_0010509c;
        puStack128 = (uint *)func_0x00101750();
        uVar3 = *puStack128;
        puStack88 = (uint *)&UNK_001050aa;
        func_0x001018b0((ulong)puStack136[1]);
        *puStack136 = 4;
        puStack136[1] = uVar3;
        goto code_r0x00105034;
      }
      *puStack136 = 1;
      break;
    case 3:
      uVar4 = puStack136[1];
      puStack128 = (uint *)(ulong)uVar4;
      if (uVar4 != 0) {
        param_1 = &uStack76;
        if ((int)uVar4 < 1) goto code_r0x00105003;
        do {
          puStack88 = (uint *)&UNK_00105056;
          iVar5 = func_0x00101a20((ulong)uVar4,param_1,0);
          if (-1 < iVar5) {
            bVar12 = (byte)((ulong)uStack76 >> 8);
            puStack136[1] = 0xffffffff;
            if ((uStack76 & 0x7f) != 0) {
              puStack88 = (uint *)&UNK_00105071;
              func_0x00101720();
              bVar12 = (byte)((ulong)uStack76 >> 8);
            }
            uVar9 = (ulong)bVar12;
            goto code_r0x00105005;
          }
          puStack88 = (uint *)&UNK_00105045;
          piVar8 = (int *)func_0x00101750();
        } while (*piVar8 == 4);
        puStack88 = (uint *)&UNK_001050d8;
        func_0x00101890(&UNK_001092e8,&UNK_001092c8,0xd8,__PRETTY_FUNCTION___4477);
        goto code_r0x001050d8;
      }
      goto code_r0x001050fc;
    case 4:
      uVar3 = puStack136[1];
      puStack88 = (uint *)&UNK_00105031;
      puStack128 = (uint *)func_0x00101750();
code_r0x00105034:
      *puStack128 = uVar3;
      uVar9 = 0xffffffff;
      param_1 = (uint *)(ulong)uVar3;
    }
code_r0x00105005:
    if (lStack72 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (undefined8 *)uVar9;
    }
code_r0x001050d8:
    puStack88 = (uint *)&UNK_001050dd;
    func_0x00101830();
    puVar14 = puStack136;
  }
  uVar3 = 0x1092c8;
  puStack88 = (uint *)&UNK_001050fc;
  func_0x00101890(&UNK_00109314,&UNK_001092c8,0xe2,__PRETTY_FUNCTION___4477);
  puStack136 = puVar14;
code_r0x001050fc:
  puVar14 = (uint *)(ulong)uVar3;
  puStack88 = (uint *)&UNK_00105103;
  func_0x00101770();
  puStack88 = puStack136;
  if (*puVar14 < 5) {
    puVar10 = &UNK_00109344 + *(int *)(&UNK_00109344 + (ulong)*puVar14 * 4);
    switch(*puVar14) {
    case 1:
    case 2:
      puVar10 = (undefined *)func_0x001018b0((ulong)puVar14[1]);
    default:
code_r0x00105138:
      *puVar14 = 5;
      return (undefined8 *)puVar10;
    case 3:
      puVar10 = (undefined *)(ulong)puVar14[1];
      if ((int)puVar14[1] < 0) goto code_r0x00105138;
      func_0x00101890(&UNK_00109304,&UNK_001092c8,0xf7,__PRETTY_FUNCTION___4491);
      puStack136 = puVar14;
    }
  }
  puVar13 = __PRETTY_FUNCTION___4491;
  puVar15 = (undefined8 *)&UNK_001092c8;
  iVar17 = 0x109314;
  func_0x00101890(&UNK_00109314,&UNK_001092c8,0xfb);
  iVar5 = iVar17 + -1;
  lStack152 = *(long *)(in_FS_OFFSET + 0x28);
  iStack160 = 0;
  puVar16 = puVar15;
  puStack120 = param_1;
  uStack112 = param_2;
  if (-1 < iVar5) {
    iVar18 = iVar5;
    if (*(char *)puVar15[(long)iVar5] == '/') {
      ppcVar11 = (char **)(puVar15 + (long)iVar5 + -1);
      do {
        iVar18 = iVar18 + -1;
        if (iVar18 == -1) goto code_r0x00105212;
        pcVar2 = *ppcVar11;
        ppcVar11 = ppcVar11 + -1;
      } while (*pcVar2 == '/');
    }
    if (0 < iVar18) {
      puVar20 = (undefined8 *)0x0;
      puVar19 = puVar15;
      do {
        if (((iStack160 != 3) || (iStack156 < 1)) &&
           (puVar16 = (undefined8 *)&iStack160, uVar3 = (*extraout_RDX)(*puVar19,&iStack160,puVar13)
           , (int)puVar20 < (int)uVar3)) {
          puVar20 = (undefined8 *)(ulong)uVar3;
        }
        if ((*(char *)puVar19[1] != '/') &&
           (puVar16 = puVar20, uVar3 = savewd_restore(&iStack160), (int)puVar20 < (int)uVar3)) {
          puVar20 = (undefined8 *)(ulong)uVar3;
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar15 + (ulong)(iVar18 - 1) + 1);
      goto code_r0x0010521d;
    }
  }
code_r0x00105212:
  puVar20 = (undefined8 *)0x0;
  iVar18 = 0;
code_r0x0010521d:
  savewd_finish(&iStack160);
  if (iVar18 < iVar17) {
    puVar19 = puVar15 + (long)iVar18;
    do {
      puVar16 = (undefined8 *)&iStack160;
      uVar3 = (*extraout_RDX)(*puVar19,&iStack160,puVar13);
      if ((int)puVar20 < (int)uVar3) {
        puVar20 = (undefined8 *)(ulong)uVar3;
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar15 + (ulong)(uint)(iVar5 - iVar18) + (long)iVar18 + 1);
  }
  if (lStack152 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101830();
    if (puVar16 == (undefined8 *)0x0) {
      func_0x00101a90();
      func_0x001017f0(0,&UNK_001093a8,5);
    }
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)PTR___fprintf_chk_0030bfa0)();
    return (undefined8 *)uVar6;
  }
  return puVar20;
code_r0x00104eb0:
  if (param_1[1] == 0) goto code_r0x00104d4f;
  puStack48 = (uint *)&UNK_00104edc;
  func_0x00101890(&UNK_001092d5,&UNK_001092c8,0x9b,__PRETTY_FUNCTION___4461);
code_r0x00104ee0:
  puStack48 = (uint *)&UNK_00104ee5;
  puVar14 = (uint *)func_0x00101750();
  uVar4 = *puVar14;
  if ((uVar4 == 0xd) || (uVar4 == 0x74)) {
    *param_1 = 3;
    param_1[1] = 0xffffffff;
code_r0x00104f19:
    puStack48 = (uint *)&UNK_00104f1e;
    uVar4 = func_0x00101ac0();
    param_1[1] = uVar4;
    if (uVar4 != 0) {
      bVar21 = true;
      uStack104 = 0xfffffffe;
      if (0 < (int)uVar4) goto code_r0x00104d58;
      *param_1 = 4;
      puStack48 = (uint *)&UNK_00104f4a;
      puVar14 = (uint *)func_0x00101750();
      param_1[1] = *puVar14;
    }
  }
  else {
    *param_1 = 4;
    param_1[1] = uVar4;
  }
  goto code_r0x00104de4;
}

