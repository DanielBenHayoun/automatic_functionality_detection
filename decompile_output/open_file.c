
undefined8 open_file(byte *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  lVar4 = 2;
  bVar7 = &stack0xfffffffffffffff0 < (undefined *)0x8;
  bVar8 = (undefined *)register0x00000020 == (undefined *)0x18;
  pbVar5 = param_1;
  pbVar6 = &UNK_0010e539;
  do {
    if (lVar4 == 0) break;
    lVar4 = lVar4 + -1;
    bVar7 = *pbVar5 < *pbVar6;
    bVar8 = *pbVar5 == *pbVar6;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  } while (bVar8);
  if ((!bVar7 && !bVar8) == bVar7) {
    lVar1 = func_0x00101c80(0,&UNK_0010bed5,5);
    lVar4 = stdin;
    param_2[1] = lVar1;
    have_read_stdin = 1;
    *param_2 = lVar4;
  }
  else {
    *(byte **)(param_2 + 1) = param_1;
    lVar4 = fopen_safer(param_1,&UNK_0010c0ad);
    *param_2 = lVar4;
  }
  if (lVar4 != 0) {
    fadvise(lVar4,2);
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined *)((long)param_2 + 0x39) = 0;
    total_files = total_files + 1;
    return 1;
  }
  failed_opens = 1;
  if (ignore_failed_opens == '\0') {
    uVar2 = quotearg_n_style_colon(0,3,param_1);
    puVar3 = (uint *)func_0x00101bb0();
    func_0x00101ee0(0,(ulong)*puVar3,&UNK_0010d84a,uVar2);
    return 0;
  }
  failed_opens = 1;
  return 0;
}

