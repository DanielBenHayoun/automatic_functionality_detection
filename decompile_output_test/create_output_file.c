
void create_output_file(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined auStack168 [136];
  long lStack32;
  
  uVar5 = 0x4b;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = make_filename((ulong)files_created);
  output_filename = uVar1;
  if (files_created != 0xffffffff) goto code_r0x00103540;
  while( true ) {
    do {
      uVar1 = output_filename;
      uVar2 = quotearg_n_style_colon(0,3,output_filename);
      func_0x00101e60(0,(ulong)uVar5,&UNK_00116b41,uVar2);
      cleanup_fatal();
code_r0x00103540:
      func_0x00101ad0(0,caught_signals,auStack168);
      lVar3 = fopen_safer(uVar1,&UNK_00115fbc);
      output_stream = lVar3;
      puVar4 = (uint *)func_0x00101b20();
      uVar5 = *puVar4;
      files_created = (lVar3 != 0) + files_created;
      func_0x00101ad0(2,auStack168,0);
    } while (lVar3 == 0);
    bytes_written = 0;
    if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) break;
    func_0x00101c20();
  }
  bytes_written = 0;
  return;
}

