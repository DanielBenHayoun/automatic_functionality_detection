
void clear_files(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (cwd_n_used != 0) {
    plVar1 = sorted_file + cwd_n_used;
    plVar3 = sorted_file;
    do {
      puVar2 = (undefined8 *)*plVar3;
      plVar3 = plVar3 + 1;
      func_0x00103880(*puVar2);
      func_0x00103880(puVar2[1]);
      func_0x00103880(puVar2[2]);
    } while (plVar3 != plVar1);
  }
  file_size_width = 0;
  minor_device_number_width = 0;
  major_device_number_width = 0;
  author_width = 0;
  group_width = 0;
  owner_width = 0;
  scontext_width = 0;
  nlink_width = 0;
  block_size_width = 0;
  inode_number_width = 0;
  any_has_acl = 0;
  cwd_some_quoted = 0;
  cwd_n_used = 0;
  return;
}

