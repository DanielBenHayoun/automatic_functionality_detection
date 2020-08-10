
undefined8 open_next_file(void)

{
  undefined8 uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  
  bVar9 = 0;
  uVar4 = 1;
  do {
    input_filename = *file_list;
    if (input_filename == (byte *)0x0) {
      return uVar4;
    }
    lVar3 = 2;
    bVar7 = (byte **)0xfffffffffffffff7 < file_list;
    file_list = file_list + 1;
    bVar8 = file_list == (byte **)0x0;
    pbVar5 = input_filename;
    pbVar6 = &UNK_0010d139;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar7 = *pbVar5 < *pbVar6;
      bVar8 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (ulong)bVar9 * -2 + 1;
      pbVar6 = pbVar6 + (ulong)bVar9 * -2 + 1;
    } while (bVar8);
    if ((!bVar7 && !bVar8) == bVar7) {
      input_filename = (byte *)func_0x001018b0(0,&UNK_0010ad78,5);
      have_read_stdin = 1;
      in_stream = stdin;
    }
    else {
      in_stream = func_0x00101ac0(input_filename,&UNK_0010ad55);
      if (in_stream != 0) break;
      uVar1 = quotearg_n_style_colon(0,3,input_filename);
      puVar2 = (uint *)func_0x001017f0();
      uVar4 = 0;
      func_0x00101aa0(0,(ulong)*puVar2,&UNK_0010c7e0,uVar1);
    }
  } while (in_stream == 0);
  if ((limit_bytes_to_format != '\0') && (flag_dump_strings == '\0')) {
    func_0x00101a80(in_stream,0,2,0);
  }
  return uVar4;
}

