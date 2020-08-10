
ulong relpath(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  undefined8 uStack72;
  undefined8 auStack64 [2];
  
  cVar5 = param_1[1];
  uVar9 = 0;
  if ((param_2[1] == '/') == (cVar5 == '/')) {
    cVar14 = *param_2;
    if (cVar14 == '\0') {
      return 0;
    }
    bVar4 = cVar14 != *param_1 || *param_1 == '\0';
    uVar9 = (ulong)bVar4;
    if (bVar4) {
      return 0;
    }
    iVar13 = 0;
    lVar11 = 0;
    cVar3 = param_2[1];
    while( true ) {
      cVar1 = cVar3;
      iVar15 = (int)lVar11 + 1;
      if (cVar14 == '/') {
        iVar13 = iVar15;
      }
      if (cVar1 == '\0') {
        if (cVar5 == '/') goto code_r0x001023e7;
        goto code_r0x001023d5;
      }
      if ((cVar5 != cVar1) || (cVar5 == '\0')) break;
      cVar5 = param_1[lVar11 + 2];
      lVar2 = lVar11 + 2;
      lVar11 = lVar11 + 1;
      cVar3 = param_2[lVar2];
      cVar14 = cVar1;
    }
    if (cVar1 == '/') {
code_r0x001023d5:
      if (cVar5 == '\0') goto code_r0x001023e7;
    }
    iVar15 = iVar13;
    if (iVar13 != 0) {
code_r0x001023e7:
      param_2 = param_2 + iVar15;
      cVar5 = *param_2;
      if (cVar5 == '/') {
        cVar5 = param_2[1];
        param_2 = param_2 + 1;
      }
      pcVar12 = param_1 + iVar15 + (param_1[iVar15] == '/');
      uStack72 = param_4;
      auStack64[0] = param_3;
      if (cVar5 == '\0') {
        if (*pcVar12 == '\0') {
          pcVar12 = ".";
        }
        uVar6 = buffer_or_output(pcVar12,auStack64,&uStack72);
      }
      else {
        uVar6 = buffer_or_output(&UNK_001074dc,auStack64,&uStack72);
        cVar5 = *param_2;
        while (cVar5 != '\0') {
          while (cVar5 != '/') {
            param_2 = param_2 + 1;
            cVar5 = *param_2;
            if (cVar5 == '\0') goto code_r0x001024c0;
          }
          param_2 = param_2 + 1;
          uVar7 = buffer_or_output(&UNK_001074db,auStack64,&uStack72);
          uVar6 = uVar6 | uVar7;
          cVar5 = *param_2;
        }
code_r0x001024c0:
        if (*pcVar12 != '\0') {
          uVar7 = buffer_or_output(&UNK_001075fe,auStack64,&uStack72);
          uVar8 = buffer_or_output(pcVar12,auStack64,&uStack72);
          uVar6 = uVar6 | uVar7 | uVar8;
        }
      }
      if ((char)uVar6 != '\0') {
        uVar10 = func_0x00101550(0,&UNK_001074df,5);
        func_0x00101720(0,0x24,&UNK_0010750d,uVar10);
      }
      return (ulong)(uVar6 ^ 1);
    }
  }
  return uVar9;
}

