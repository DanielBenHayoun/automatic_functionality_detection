
ulong digest_file_isra_1(byte *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  
  lVar5 = 2;
  bVar9 = &stack0xffffffffffffffe0 < (undefined *)0x8;
  bVar10 = (undefined *)register0x00000020 == (undefined *)0x28;
  pbVar6 = param_1;
  pbVar7 = &UNK_0010b322;
  do {
    if (lVar5 == 0) break;
    lVar5 = lVar5 + -1;
    bVar9 = *pbVar6 < *pbVar7;
    bVar10 = *pbVar6 == *pbVar7;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while (bVar10);
  *param_3 = 0;
  lVar5 = stdin;
  if ((!bVar9 && !bVar10) == bVar9) {
    have_read_stdin = 1;
    fadvise(stdin,2);
    iVar2 = sha512_stream(lVar5,param_2);
    if (iVar2 != 0) {
code_r0x00102d70:
      uVar3 = quotearg_n_style_colon(0,3,param_1);
      puVar4 = (uint *)func_0x001015d0();
      func_0x00101830(0,(ulong)*puVar4,&UNK_0010b255,uVar3);
      if (stdin == lVar5) {
        return 0;
      }
      rpl_fclose(lVar5);
      return 0;
    }
  }
  else {
    lVar5 = fopen_safer(param_1,&UNK_0010a762);
    bVar1 = ignore_missing;
    if (lVar5 == 0) {
      uVar8 = (ulong)ignore_missing;
      puVar4 = (uint *)func_0x001015d0();
      if ((bVar1 != 0) && (*puVar4 == 2)) {
        *param_3 = 1;
        return uVar8;
      }
      uVar3 = quotearg_n_style_colon(0,3,param_1);
      func_0x00101830(0,(ulong)*puVar4,&UNK_0010b255,uVar3);
      return 0;
    }
    fadvise(lVar5,2);
    iVar2 = sha512_stream(lVar5,param_2);
    if (iVar2 != 0) goto code_r0x00102d70;
    iVar2 = rpl_fclose(lVar5);
    if (iVar2 != 0) {
      uVar3 = quotearg_n_style_colon(0,3,param_1);
      puVar4 = (uint *)func_0x001015d0();
      func_0x00101830(0,(ulong)*puVar4,&UNK_0010b255,uVar3);
      return 0;
    }
  }
  return 1;
}

