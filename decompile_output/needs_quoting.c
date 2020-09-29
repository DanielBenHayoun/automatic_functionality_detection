
byte * needs_quoting(byte *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int iVar13;
  ulong *puVar14;
  byte *pbVar15;
  ulong unaff_RBP;
  byte *pbVar16;
  byte *pbVar17;
  char cVar18;
  undefined *puVar19;
  undefined8 in_R9;
  long in_FS_OFFSET;
  bool bVar20;
  byte abStack34 [2];
  long lStack32;
  
  cVar18 = '\x02';
  pbVar15 = abStack34;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = quotearg_buffer(pbVar15,2,param_1,0xffffffffffffffff);
  if (*param_1 == abStack34[0]) {
    pbVar15 = param_1;
    uVar7 = func_0x00103400();
    uVar7 = uVar7 & 0xffffffffffffff00 | (ulong)(uVar7 != uVar6);
  }
  else {
    uVar7 = 1;
    uVar6 = unaff_RBP;
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (byte *)uVar7;
  }
  func_0x00103420();
  lVar8 = func_0x00103400();
  bVar20 = SUB168(ZEXT816(3) * ZEXT816(lVar8 + 1U) >> 0x40,0) != 0;
  puVar19 = (undefined *)(ulong)bVar20;
  if (!bVar20) {
    pbVar9 = (byte *)xmalloc((lVar8 + 1U) * 3);
    pbVar17 = pbVar9;
code_r0x00105baf:
    do {
      bVar3 = *pbVar15;
      pbVar16 = pbVar17;
      while( true ) {
        if (bVar3 == 0) {
          *pbVar16 = 0;
          return pbVar9;
        }
        pbVar15 = pbVar15 + 1;
        if ((bVar3 == 0x2f) && (cVar18 != '\0')) {
          *pbVar16 = 0x2f;
          pbVar17 = pbVar16 + 1;
          goto code_r0x00105baf;
        }
        if (RFC3986[(ulong)bVar3] == '\0') break;
        *pbVar16 = bVar3;
        bVar3 = *pbVar15;
        pbVar16 = pbVar16 + 1;
      }
      pbVar17 = pbVar16 + 3;
      func_0x00103870(pbVar16,1,0xffffffffffffffff,&UNK_00117850,(ulong)bVar3,in_R9,param_1,uVar6);
    } while( true );
  }
  xalloc_die();
  uVar7 = cwd_n_used;
  uVar6 = (cwd_n_used >> 1) + cwd_n_used;
  if (sorted_file_alloc < uVar6) {
    puVar14 = sorted_file;
    func_0x00103880(sorted_file);
    bVar20 = false;
    lVar8 = SUB168(ZEXT816(0x18) * ZEXT816(uVar7),0);
    if (SUB168(ZEXT816(0x18) * ZEXT816(uVar7) >> 0x40,0) != 0) goto code_r0x00105dc6;
    goto code_r0x00105d6b;
  }
  while( true ) {
    uVar7 = cwd_n_used;
    if (cwd_n_used != 0) {
      uVar1 = cwd_file + cwd_n_used * 200;
      uVar6 = cwd_file;
      puVar14 = sorted_file;
      do {
        *puVar14 = uVar6;
        uVar6 = uVar6 + 200;
        puVar14 = puVar14 + 1;
      } while (uVar1 != uVar6);
    }
    if (sort_type == -1) {
      return (byte *)uVar6;
    }
    iVar5 = func_0x00103560(failed_strcoll);
    uVar6 = cwd_n_used;
    puVar14 = sorted_file;
    iVar4 = sort_type;
    if (iVar5 == 0) goto code_r0x00105d0e;
    if (sort_type != 3) break;
    puVar19 = &UNK_00117857;
    puVar14 = (ulong *)&UNK_00117860;
    lVar8 = func_0x001034d0(&UNK_00117860,&UNK_00117857,0xeea,__PRETTY_FUNCTION___10745);
code_r0x00105dc6:
    bVar20 = true;
code_r0x00105d6b:
    if (lVar8 < 0) {
      bVar20 = true;
    }
    if (bVar20) {
      xalloc_die();
      puVar12 = (undefined4 *)func_0x001032a0();
      *puVar12 = 0;
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*(code *)PTR_strcoll_0031fed0)(puVar14,puVar19);
      return (byte *)uVar11;
    }
    sorted_file = (ulong *)xmalloc(uVar7 * 0x18);
    uVar6 = cwd_n_used * 3;
    sorted_file_alloc = uVar6;
  }
  if (cwd_n_used != 0) {
    puVar2 = sorted_file + cwd_n_used;
    puVar10 = sorted_file;
    uVar7 = cwd_file;
    do {
      *puVar10 = uVar7;
      puVar10 = puVar10 + 1;
      uVar7 = uVar7 + 200;
    } while (puVar10 != puVar2);
  }
  iVar5 = 1;
code_r0x00105d0e:
  iVar13 = 0;
  if (iVar4 == 4) {
    iVar13 = time_type;
  }
  uVar11 = mpsort(puVar14,uVar6,
                  *(undefined8 *)
                   (sort_functions +
                   ((ulong)directories_first +
                   ((ulong)sort_reverse + ((long)iVar5 + (ulong)(uint)(iVar13 + iVar4) * 2) * 2) * 2
                   ) * 8));
  return (byte *)uVar11;
}

