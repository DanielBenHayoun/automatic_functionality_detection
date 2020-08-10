
int * string_to_join_field(char *param_1)

{
  int **ppiVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  long lStack24;
  long lStack16;
  
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar8 = param_1;
  iVar3 = xstrtoul(param_1,0,10,&lStack24,&UNK_00107d58);
  if (iVar3 == 1) {
    lStack24 = -2;
  }
  else {
    if ((iVar3 != 0) || (lStack24 == 0)) {
      uVar6 = quote(param_1);
      uVar7 = func_0x001016f0(0,&UNK_00107d3c,5);
      pcVar8 = (char *)0x1;
      func_0x001018f0(1,0,uVar7,uVar6);
      goto code_r0x00102b2b;
    }
    lStack24 = lStack24 + -1;
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int *)lStack24;
  }
code_r0x00102b2b:
  func_0x00101720();
  do {
    pcVar10 = (char *)0x0;
    puVar5 = (undefined *)func_0x00101880(pcVar8,&UNK_00107d55);
    if (puVar5 != (undefined *)0x0) {
      pcVar10 = puVar5 + 1;
      *puVar5 = 0;
    }
    cVar2 = *pcVar8;
    if (cVar2 == '0') {
      if (pcVar8[1] != '\0') {
code_r0x00102c07:
        uVar6 = quote(pcVar8);
        uVar7 = func_0x001016f0(0,&UNK_00107d59,5);
        func_0x001018f0(1,0,uVar7,uVar6);
code_r0x00102c39:
        uVar6 = quote(pcVar8);
        uVar7 = func_0x001016f0(0,&UNK_00107d59,5);
        lVar9 = 1;
        func_0x001018f0(1,0,uVar7,uVar6);
        func_0x00101650(*(undefined8 *)(lVar9 + 0x28));
        *(undefined8 *)(lVar9 + 0x28) = 0;
        uVar6 = func_0x00101650(*(undefined8 *)(lVar9 + 0x10));
        *(undefined8 *)(lVar9 + 0x10) = 0;
        return (int *)uVar6;
      }
      uVar6 = 0;
      iVar3 = 0;
    }
    else {
      if ((cVar2 < '0') || ('2' < cVar2)) {
        uVar6 = quote(pcVar8);
        uVar7 = func_0x001016f0(0,&UNK_00107350,5);
        func_0x001018f0(1,0,uVar7,uVar6);
        goto code_r0x00102c07;
      }
      if (pcVar8[1] != '.') goto code_r0x00102c39;
      iVar3 = (int)cVar2 + -0x30;
      uVar6 = string_to_join_field(pcVar8 + 2);
    }
    piVar4 = (int *)xmalloc(0x18);
    *piVar4 = iVar3;
    *(undefined8 *)(piVar4 + 2) = uVar6;
    *(undefined8 *)(piVar4 + 4) = 0;
    ppiVar1 = (int **)(outlist_end + 4);
    outlist_end = piVar4;
    *ppiVar1 = piVar4;
    pcVar8 = pcVar10;
    if (pcVar10 == (char *)0x0) {
      return piVar4;
    }
  } while( true );
}

