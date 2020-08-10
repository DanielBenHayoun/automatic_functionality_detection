
void close_output_file(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined auStack200 [128];
  undefined auStack72 [24];
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (output_stream != (byte *)0x0) {
    if ((*output_stream & 0x20) != 0) goto code_r0x00103406;
    iVar2 = rpl_fclose();
    if (iVar2 != 0) goto code_r0x001033c6;
    if ((bytes_written == 0) && (elide_empty_files != '\0')) {
      func_0x00101ad0(0,caught_signals,auStack200);
      uVar4 = output_filename;
      iVar2 = func_0x00101b30(output_filename);
      puVar3 = (uint *)func_0x00101b20();
      uVar1 = *puVar3;
      files_created = files_created - (uint)(iVar2 == 0);
      func_0x00101ad0(2,auStack200,0);
      if (iVar2 != 0) {
        uVar4 = quotearg_n_style_colon(0,3,uVar4);
        func_0x00101e60(0,(ulong)uVar1,&UNK_00116b41,uVar4);
      }
    }
    else {
      if (suppress_count == '\0') {
        uVar4 = umaxtostr(bytes_written,auStack72);
        func_0x00101f00(stdout,1,&UNK_00117070,uVar4);
      }
    }
    output_stream = (byte *)0x0;
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00101c20();
code_r0x001033c6:
  uVar4 = quotearg_n_style_colon(0,3,output_filename);
  puVar3 = (uint *)func_0x00101b20();
  uVar6 = (ulong)*puVar3;
  puVar5 = &UNK_00116b41;
  do {
    func_0x00101e60(0,uVar6,puVar5,uVar4);
    output_stream = (byte *)0x0;
    cleanup_fatal();
code_r0x00103406:
    uVar4 = quotearg_style(4,output_filename);
    puVar5 = (undefined *)func_0x00101bf0(0,&UNK_00115fa9,5);
    uVar6 = 0;
  } while( true );
}

