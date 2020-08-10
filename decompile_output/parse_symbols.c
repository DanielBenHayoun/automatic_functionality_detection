
ulong parse_symbols(char *param_1,char *param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  
  bVar13 = 0;
  uVar9 = 0;
  do {
    lVar4 = func_0x00101bd0();
    pcVar12 = param_2;
    pcVar8 = param_1;
    pcVar11 = param_2;
code_r0x0010567d:
    cVar1 = *pcVar12;
    cVar2 = *pcVar8;
    if (cVar1 != '\0') break;
    if (((cVar2 != ',') && (cVar2 != '\0')) || (uVar3 = *(uint *)(pcVar11 + 0xc), uVar3 == 0))
    goto code_r0x0010569b;
    uVar10 = uVar9 | uVar3;
    uVar9 = uVar3;
    if (param_3 == '\0') {
      uVar9 = uVar10;
    }
    if (lVar4 == 0) {
      return (ulong)uVar9;
    }
    param_1 = (char *)(lVar4 + 1);
  } while( true );
  pcVar12 = pcVar12 + 1;
  pcVar8 = pcVar8 + 1;
  if (cVar1 != cVar2) {
code_r0x0010569b:
    if (*pcVar11 == '\0') {
      if (lVar4 == 0) goto code_r0x00105715;
      lVar4 = lVar4 - (long)param_1;
      goto code_r0x001056cf;
    }
    pcVar12 = pcVar11 + 0x10;
    pcVar8 = param_1;
    pcVar11 = pcVar12;
  }
  goto code_r0x0010567d;
code_r0x001056cf:
  uVar5 = quotearg_n_style_mem(0,8,param_1,lVar4);
  uVar6 = func_0x00101b60(0,param_4,5);
  nl_error(0,0,&UNK_0010c79f,uVar6,uVar5);
  usage(1);
code_r0x00105715:
  uVar7 = 0xffffffffffffffff;
  pcVar12 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + (ulong)bVar13 * -2 + 1;
  } while (cVar1 != '\0');
  lVar4 = ~uVar7 - 1;
  goto code_r0x001056cf;
}

