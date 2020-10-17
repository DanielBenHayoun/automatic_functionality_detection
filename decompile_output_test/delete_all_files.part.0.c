
void delete_all_files_part_0(char param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  
  if (files_created == 0) {
    files_created = 0;
    return;
  }
  uVar4 = 0;
  do {
    while( true ) {
      uVar2 = make_filename((ulong)uVar4);
      iVar1 = func_0x00101b30();
      if ((iVar1 != 0) && (param_1 == '\0')) break;
      uVar4 = uVar4 + 1;
      if (files_created <= uVar4) {
        files_created = 0;
        return;
      }
    }
    uVar2 = quotearg_n_style_colon(0,3,uVar2);
    uVar4 = uVar4 + 1;
    puVar3 = (uint *)func_0x00101b20();
    func_0x00101e60(0,(ulong)*puVar3,&UNK_00116b41,uVar2);
  } while (uVar4 < files_created);
  files_created = 0;
  return;
}

