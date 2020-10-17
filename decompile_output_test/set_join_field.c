
int * set_join_field(long *param_1,long param_2)

{
  int **ppiVar1;
  char cVar2;
  undefined in_AL;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long in_FS_OFFSET;
  long lStack48;
  
  lVar11 = *param_1;
  if ((lVar11 == -1) || (lVar11 == param_2)) {
    *param_1 = param_2;
    return (int *)_in_AL;
  }
  uVar4 = func_0x001016f0(0,&UNK_00107328,5);
  pcVar9 = (char *)0x1;
  func_0x001018f0(1,0,uVar4,lVar11 + 1,param_2 + 1);
  lVar11 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar10 = pcVar9;
  iVar3 = xstrtoul();
  if (iVar3 == 1) {
    lVar5 = -2;
  }
  else {
    if ((iVar3 != 0) || (lStack48 == 0)) {
      uVar4 = quote(pcVar9);
      uVar8 = func_0x001016f0(0,&UNK_00107d3c,5);
      pcVar10 = (char *)0x1;
      func_0x001018f0(1,0,uVar8,uVar4);
      goto code_r0x00102b2b;
    }
    lVar5 = lStack48 + -1;
  }
  if (lVar11 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int *)lVar5;
  }
code_r0x00102b2b:
  func_0x00101720();
  do {
    pcVar9 = (char *)0x0;
    puVar7 = (undefined *)func_0x00101880(pcVar10,&UNK_00107d55);
    if (puVar7 != (undefined *)0x0) {
      pcVar9 = puVar7 + 1;
      *puVar7 = 0;
    }
    cVar2 = *pcVar10;
    if (cVar2 == '0') {
      if (pcVar10[1] != '\0') {
code_r0x00102c07:
        uVar4 = quote(pcVar10);
        uVar8 = func_0x001016f0(0,&UNK_00107d59,5);
        func_0x001018f0(1,0,uVar8,uVar4);
code_r0x00102c39:
        uVar4 = quote(pcVar10);
        uVar8 = func_0x001016f0(0,&UNK_00107d59,5);
        lVar11 = 1;
        func_0x001018f0(1,0,uVar8,uVar4);
        func_0x00101650(*(undefined8 *)(lVar11 + 0x28));
        *(undefined8 *)(lVar11 + 0x28) = 0;
        uVar4 = func_0x00101650(*(undefined8 *)(lVar11 + 0x10));
        *(undefined8 *)(lVar11 + 0x10) = 0;
        return (int *)uVar4;
      }
      uVar4 = 0;
      iVar3 = 0;
    }
    else {
      if ((cVar2 < '0') || ('2' < cVar2)) {
        uVar4 = quote(pcVar10);
        uVar8 = func_0x001016f0(0,&UNK_00107350,5);
        func_0x001018f0(1,0,uVar8,uVar4);
        goto code_r0x00102c07;
      }
      if (pcVar10[1] != '.') goto code_r0x00102c39;
      iVar3 = (int)cVar2 + -0x30;
      uVar4 = string_to_join_field(pcVar10 + 2);
    }
    piVar6 = (int *)xmalloc(0x18);
    *piVar6 = iVar3;
    *(undefined8 *)(piVar6 + 2) = uVar4;
    *(undefined8 *)(piVar6 + 4) = 0;
    ppiVar1 = (int **)(outlist_end + 4);
    outlist_end = piVar6;
    *ppiVar1 = piVar6;
    pcVar10 = pcVar9;
    if (pcVar9 == (char *)0x0) {
      return piVar6;
    }
  } while( true );
}

