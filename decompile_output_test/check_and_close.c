
undefined8 check_and_close(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  
  bVar10 = 0;
  uVar5 = 1;
  if (in_stream == (byte *)0x0) goto code_r0x001044e5;
  bVar8 = false;
  bVar9 = (*in_stream & 0x20) == 0;
  if (bVar9) {
    lVar4 = 2;
    pbVar6 = *(byte **)(file_list + -8);
    pbVar7 = &UNK_0010d139;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      bVar8 = *pbVar6 < *pbVar7;
      bVar9 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar9);
    if ((!bVar8 && !bVar9) != bVar8) {
      iVar1 = rpl_fclose(in_stream);
      if (iVar1 != 0) {
        uVar2 = quotearg_n_style_colon(0,3,input_filename);
        puVar3 = (uint *)func_0x001017f0();
        uVar5 = 0;
        func_0x00101aa0(0,(ulong)*puVar3,&UNK_0010c7e0,uVar2);
        goto code_r0x001044da;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = quotearg_n_style_colon(0,3,input_filename);
    uVar2 = func_0x001018b0(0,&UNK_0010ad5d,5);
    bVar8 = false;
    bVar9 = true;
    func_0x00101aa0(0,param_1 & 0xffffffff,uVar2,uVar5);
    lVar4 = 2;
    pbVar6 = *(byte **)(file_list + -8);
    pbVar7 = &UNK_0010d139;
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      bVar8 = *pbVar6 < *pbVar7;
      bVar9 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
      pbVar7 = pbVar7 + (ulong)bVar10 * -2 + 1;
    } while (bVar9);
    uVar5 = 0;
    if ((!bVar8 && !bVar9) != bVar8) {
      rpl_fclose(in_stream);
    }
  }
code_r0x001044da:
  in_stream = (byte *)0x0;
code_r0x001044e5:
  if ((*stdout & 0x20) != 0) {
    uVar5 = 0;
    uVar2 = func_0x001018b0(0,&UNK_0010ad6c,5);
    func_0x00101aa0(0,0,uVar2);
  }
  return uVar5;
}

