
undefined8 print_factors(char *param_1)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  char *pcVar12;
  
  cVar1 = *param_1;
  while (cVar1 == ' ') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  pcVar12 = param_1 + 1;
  if (cVar1 == '+') {
    pcVar12 = param_1 + 2;
    param_1 = param_1 + 1;
  }
  iVar6 = 4;
  pcVar7 = param_1;
  do {
    cVar1 = *pcVar7;
    if (cVar1 == '\0') {
      if (iVar6 == 0) {
        iVar6 = (int)*param_1;
        if (*param_1 != '\0') {
          lVar8 = 0;
          uVar10 = 0;
          goto code_r0x001045e4;
        }
        lVar8 = 0;
        uVar10 = 0;
        goto code_r0x00104645;
      }
      if (iVar6 == 1) goto code_r0x0010461e;
      break;
    }
    iVar6 = 0;
    pcVar7 = pcVar7 + 1;
  } while ((int)cVar1 - 0x30U < 10);
  uVar4 = quote();
  puVar11 = &UNK_0010b678;
  goto code_r0x0010457b;
code_r0x001045e4:
  do {
    uVar2 = lVar8 * 2;
    uVar9 = lVar8 * 10;
    uVar3 = (uint)((ulong)lVar8 >> 0x20);
    lVar8 = uVar9 + (ulong)(iVar6 - 0x30);
    uVar9 = (ulong)(((uVar3 >> 0x1d) - ((int)uVar3 >> 0x1f)) + (uint)(uVar9 < uVar2) +
                   (uint)CARRY8(uVar9,(ulong)(iVar6 - 0x30)));
    uVar2 = uVar10 * 10;
    uVar10 = uVar9 + uVar2;
    if (CARRY8(uVar9,uVar2)) break;
    iVar6 = (int)*pcVar12;
    if (iVar6 == 0) {
      if (-1 < (long)uVar10) {
code_r0x00104645:
        if (dev_debug != '\0') {
          func_0x001018f0(&UNK_0010b650,1,0x24,stderr);
        }
        print_factors_single(uVar10,lVar8);
        return 1;
      }
      break;
    }
    pcVar12 = pcVar12 + 1;
  } while (uVar10 < 0x199999999999999a);
code_r0x0010461e:
  uVar4 = quote();
  puVar11 = &UNK_0010b47f;
code_r0x0010457b:
  uVar5 = func_0x001016c0(0,puVar11,5);
  func_0x001018b0(0,0,uVar5,uVar4);
  return 0;
}

