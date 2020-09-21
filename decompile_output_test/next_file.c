
/* WARNING: Possible PIC construction at 0x00102b41: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00102b46) */

long next_file(byte *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  
  bVar11 = 0;
  if (param_1 != (byte *)0x0) {
    if (prev_file_6959 == (byte *)0x0) {
      uVar2 = func_0x001015b0(&UNK_00105d8e,&UNK_00105d7a,0x155,__PRETTY_FUNCTION___6961);
      if (have_read_stdin == '\0') {
        return uVar2;
      }
      uVar2 = rpl_fclose(stdin);
      if ((int)uVar2 != 0) {
        puVar3 = (uint *)func_0x001014a0();
        func_0x001016d0(1,(ulong)*puVar3,&UNK_00105df2);
        uVar2 = stdout;
        uVar4 = func_0x00101520(0,&UNK_00105b78,5);
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)PTR_fputs_unlocked_00307f10)(uVar4,uVar2);
        return uVar2;
      }
      return uVar2;
    }
    bVar9 = false;
    bVar10 = (*param_1 & 0x20) == 0;
    if (!bVar10) {
      uVar2 = quotearg_n_style_colon(0,3,prev_file_6959);
      puVar3 = (uint *)func_0x001014a0();
      bVar9 = false;
      bVar10 = true;
      func_0x001016d0(0,(ulong)*puVar3,&UNK_00105dab,uVar2);
      exit_status = 1;
    }
    lVar5 = 2;
    pbVar6 = prev_file_6959;
    pbVar7 = &UNK_00105df2;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar9 = *pbVar6 < *pbVar7;
      bVar10 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + (ulong)bVar11 * -2 + 1;
      pbVar7 = pbVar7 + (ulong)bVar11 * -2 + 1;
    } while (bVar10);
    if ((!bVar9 && !bVar10) == bVar9) {
      func_0x001014e0();
    }
    else {
      iVar1 = rpl_fclose(param_1);
      if (iVar1 != 0) {
        uVar2 = quotearg_n_style_colon(0,3,prev_file_6959);
        puVar3 = (uint *)func_0x001014a0();
        func_0x001016d0(0,(ulong)*puVar3,&UNK_00105dab,uVar2);
        exit_status = 1;
      }
    }
  }
  pbVar6 = *file_list;
  do {
    bVar9 = pbVar6 == (byte *)0x0;
    file_list = file_list + 1;
    if (bVar9) {
      return 0;
    }
    bVar10 = false;
    lVar5 = 2;
    pbVar7 = pbVar6;
    pbVar8 = &UNK_00105df2;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar10 = *pbVar7 < *pbVar8;
      bVar9 = *pbVar7 == *pbVar8;
      pbVar7 = pbVar7 + (ulong)bVar11 * -2 + 1;
      pbVar8 = pbVar8 + (ulong)bVar11 * -2 + 1;
    } while (bVar9);
    if ((!bVar10 && !bVar9) == bVar10) {
      have_read_stdin = '\x01';
      lVar5 = stdin;
    }
    else {
      lVar5 = func_0x001016f0(pbVar6,&UNK_00105724);
    }
    if (lVar5 != 0) {
      prev_file_6959 = pbVar6;
      fadvise(lVar5,2);
      return lVar5;
    }
    uVar2 = quotearg_n_style_colon(0,3);
    puVar3 = (uint *)func_0x001014a0();
    func_0x001016d0(0,(ulong)*puVar3,&UNK_00105dab,uVar2);
    exit_status = 1;
    pbVar6 = *file_list;
  } while( true );
}

