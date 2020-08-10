
byte * file_escape(byte *param_1,char param_2)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int iVar12;
  ulong *puVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined *puVar17;
  bool bVar18;
  
  lVar6 = func_0x00103400();
  bVar18 = SUB168(ZEXT816(3) * ZEXT816(lVar6 + 1U) >> 0x40,0) != 0;
  puVar17 = (undefined *)(ulong)bVar18;
  if (!bVar18) {
    pbVar7 = (byte *)xmalloc((lVar6 + 1U) * 3);
    pbVar16 = pbVar7;
code_r0x00105baf:
    do {
      bVar3 = *param_1;
      pbVar15 = pbVar16;
      while( true ) {
        if (bVar3 == 0) {
          *pbVar15 = 0;
          return pbVar7;
        }
        param_1 = param_1 + 1;
        if ((bVar3 == 0x2f) && (param_2 != '\0')) {
          *pbVar15 = 0x2f;
          pbVar16 = pbVar15 + 1;
          goto code_r0x00105baf;
        }
        if (RFC3986[(ulong)bVar3] == '\0') break;
        *pbVar15 = bVar3;
        bVar3 = *param_1;
        pbVar15 = pbVar15 + 1;
      }
      pbVar16 = pbVar15 + 3;
      func_0x00103870(pbVar15,1,0xffffffffffffffff,&UNK_00117850,(ulong)bVar3);
    } while( true );
  }
  xalloc_die();
  uVar14 = cwd_n_used;
  uVar8 = (cwd_n_used >> 1) + cwd_n_used;
  if (sorted_file_alloc < uVar8) {
    puVar13 = sorted_file;
    func_0x00103880(sorted_file);
    bVar18 = false;
    lVar6 = SUB168(ZEXT816(0x18) * ZEXT816(uVar14),0);
    if (SUB168(ZEXT816(0x18) * ZEXT816(uVar14) >> 0x40,0) != 0) goto code_r0x00105dc6;
    goto code_r0x00105d6b;
  }
  while( true ) {
    uVar14 = cwd_n_used;
    if (cwd_n_used != 0) {
      uVar1 = cwd_file + cwd_n_used * 200;
      uVar8 = cwd_file;
      puVar13 = sorted_file;
      do {
        *puVar13 = uVar8;
        uVar8 = uVar8 + 200;
        puVar13 = puVar13 + 1;
      } while (uVar1 != uVar8);
    }
    if (sort_type == -1) {
      return (byte *)uVar8;
    }
    iVar5 = func_0x00103560(failed_strcoll);
    uVar8 = cwd_n_used;
    puVar13 = sorted_file;
    iVar4 = sort_type;
    if (iVar5 == 0) goto code_r0x00105d0e;
    if (sort_type != 3) break;
    puVar17 = &UNK_00117857;
    puVar13 = (ulong *)&UNK_00117860;
    lVar6 = func_0x001034d0(&UNK_00117860,&UNK_00117857,0xeea,__PRETTY_FUNCTION___10745);
code_r0x00105dc6:
    bVar18 = true;
code_r0x00105d6b:
    if (lVar6 < 0) {
      bVar18 = true;
    }
    if (bVar18) {
      xalloc_die();
      puVar11 = (undefined4 *)func_0x001032a0();
      *puVar11 = 0;
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)PTR_strcoll_0031fed0)(puVar13,puVar17);
      return (byte *)uVar10;
    }
    sorted_file = (ulong *)xmalloc(uVar14 * 0x18);
    uVar8 = cwd_n_used * 3;
    sorted_file_alloc = uVar8;
  }
  if (cwd_n_used != 0) {
    puVar2 = sorted_file + cwd_n_used;
    puVar9 = sorted_file;
    uVar14 = cwd_file;
    do {
      *puVar9 = uVar14;
      puVar9 = puVar9 + 1;
      uVar14 = uVar14 + 200;
    } while (puVar9 != puVar2);
  }
  iVar5 = 1;
code_r0x00105d0e:
  iVar12 = 0;
  if (iVar4 == 4) {
    iVar12 = time_type;
  }
  uVar10 = mpsort(puVar13,uVar8,
                  *(undefined8 *)
                   (sort_functions +
                   ((ulong)directories_first +
                   ((ulong)sort_reverse + ((long)iVar5 + (ulong)(uint)(iVar12 + iVar4) * 2) * 2) * 2
                   ) * 8));
  return (byte *)uVar10;
}

