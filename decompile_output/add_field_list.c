
void add_field_list(char *param_1)

{
  int **ppiVar1;
  char cVar2;
  int *piVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  
  do {
    pcVar9 = (char *)0x0;
    puVar4 = (undefined *)func_0x00101880(param_1,&UNK_00107d55);
    if (puVar4 != (undefined *)0x0) {
      pcVar9 = puVar4 + 1;
      *puVar4 = 0;
    }
    cVar2 = *param_1;
    if (cVar2 == '0') {
      if (param_1[1] != '\0') {
code_r0x00102c07:
        uVar5 = quote(param_1);
        uVar6 = func_0x001016f0(0,&UNK_00107d59,5);
        func_0x001018f0(1,0,uVar6,uVar5);
code_r0x00102c39:
        uVar5 = quote(param_1);
        uVar6 = func_0x001016f0(0,&UNK_00107d59,5);
        lVar8 = 1;
        func_0x001018f0(1,0,uVar6,uVar5);
        func_0x00101650(*(undefined8 *)(lVar8 + 0x28));
        *(undefined8 *)(lVar8 + 0x28) = 0;
        func_0x00101650(*(undefined8 *)(lVar8 + 0x10));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
      uVar5 = 0;
      iVar7 = 0;
    }
    else {
      if ((cVar2 < '0') || ('2' < cVar2)) {
        uVar5 = quote(param_1);
        uVar6 = func_0x001016f0(0,&UNK_00107350,5);
        func_0x001018f0(1,0,uVar6,uVar5);
        goto code_r0x00102c07;
      }
      if (param_1[1] != '.') goto code_r0x00102c39;
      iVar7 = (int)cVar2 + -0x30;
      uVar5 = string_to_join_field(param_1 + 2);
    }
    piVar3 = (int *)xmalloc(0x18);
    *piVar3 = iVar7;
    *(undefined8 *)(piVar3 + 2) = uVar5;
    *(undefined8 *)(piVar3 + 4) = 0;
    ppiVar1 = (int **)(outlist_end + 4);
    outlist_end = piVar3;
    *ppiVar1 = piVar3;
    param_1 = pcVar9;
    if (pcVar9 == (char *)0x0) {
      return;
    }
  } while( true );
}

