
void sort_files(undefined8 param_1,undefined *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  
  uVar12 = cwd_n_used;
  if (sorted_file_alloc < (cwd_n_used >> 1) + cwd_n_used) {
    plVar10 = sorted_file;
    func_0x00103880(sorted_file);
    bVar2 = false;
    lVar11 = SUB168(ZEXT816(0x18) * ZEXT816(uVar12),0);
    if (SUB168(ZEXT816(0x18) * ZEXT816(uVar12) >> 0x40,0) != 0) goto code_r0x00105dc6;
    goto code_r0x00105d6b;
  }
  while( true ) {
    uVar12 = cwd_n_used;
    if (cwd_n_used != 0) {
      lVar11 = cwd_file + cwd_n_used * 200;
      lVar6 = cwd_file;
      plVar10 = sorted_file;
      do {
        *plVar10 = lVar6;
        lVar6 = lVar6 + 200;
        plVar10 = plVar10 + 1;
      } while (lVar11 != lVar6);
    }
    if (sort_type == -1) {
      return;
    }
    iVar5 = func_0x00103560(failed_strcoll);
    uVar4 = cwd_n_used;
    plVar10 = sorted_file;
    iVar3 = sort_type;
    if (iVar5 == 0) goto code_r0x00105d0e;
    if (sort_type != 3) break;
    param_2 = &UNK_00117857;
    plVar10 = (long *)&UNK_00117860;
    lVar11 = func_0x001034d0(&UNK_00117860,&UNK_00117857,0xeea,__PRETTY_FUNCTION___10745);
code_r0x00105dc6:
    bVar2 = true;
code_r0x00105d6b:
    if (lVar11 < 0) {
      bVar2 = true;
    }
    if (bVar2) {
      xalloc_die();
      puVar8 = (undefined4 *)func_0x001032a0();
      *puVar8 = 0;
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_strcoll_0031fed0)(plVar10,param_2);
      return;
    }
    sorted_file = (long *)xmalloc(uVar12 * 0x18);
    sorted_file_alloc = cwd_n_used * 3;
  }
  if (cwd_n_used != 0) {
    plVar1 = sorted_file + cwd_n_used;
    plVar7 = sorted_file;
    lVar11 = cwd_file;
    do {
      *plVar7 = lVar11;
      plVar7 = plVar7 + 1;
      lVar11 = lVar11 + 200;
    } while (plVar7 != plVar1);
  }
  iVar5 = 1;
code_r0x00105d0e:
  iVar9 = 0;
  if (iVar3 == 4) {
    iVar9 = time_type;
  }
  mpsort(plVar10,uVar4,
         *(undefined8 *)
          (sort_functions +
          ((ulong)directories_first +
          ((ulong)sort_reverse + ((long)iVar5 + (ulong)(uint)(iVar9 + iVar3) * 2) * 2) * 2) * 8));
  return;
}

