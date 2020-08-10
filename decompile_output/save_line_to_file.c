
void save_line_to_file(long *param_1)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined auStack192 [136];
  long lStack56;
  undefined8 uStack48;
  undefined8 uStack40;
  
  lVar1 = func_0x00101df0(param_1[1],1,*param_1,output_stream);
  if (*param_1 != lVar1) {
    uStack40 = quotearg_style(4,output_filename);
    uStack48 = func_0x00101bf0(0,&UNK_00115fa9,5);
    puVar2 = (uint *)func_0x00101b20();
    func_0x00101e60(0,(ulong)*puVar2,uStack48,uStack40);
    output_stream = 0;
    cleanup_fatal();
    uVar5 = 0x4b;
    lStack56 = *(long *)(in_FS_OFFSET + 0x28);
    uVar3 = make_filename((ulong)files_created);
    output_filename = uVar3;
    if (files_created != 0xffffffff) goto code_r0x00103540;
    while( true ) {
      do {
        uVar3 = output_filename;
        uVar4 = quotearg_n_style_colon(0,3,output_filename);
        func_0x00101e60(0,(ulong)uVar5,&UNK_00116b41,uVar4);
        cleanup_fatal();
code_r0x00103540:
        func_0x00101ad0(0,caught_signals,auStack192);
        lVar1 = fopen_safer(uVar3,&UNK_00115fbc);
        output_stream = lVar1;
        puVar2 = (uint *)func_0x00101b20();
        uVar5 = *puVar2;
        files_created = (lVar1 != 0) + files_created;
        func_0x00101ad0(2,auStack192,0);
      } while (lVar1 == 0);
      bytes_written = 0;
      if (lStack56 == *(long *)(in_FS_OFFSET + 0x28)) break;
      func_0x00101c20();
    }
    bytes_written = 0;
    return;
  }
  bytes_written = bytes_written + *param_1;
  return;
}

