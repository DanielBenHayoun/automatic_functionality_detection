
ulong find_backup_file_name(undefined8 param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = backupfile_internal();
  if (lVar1 != 0) {
    return lVar1;
  }
  xalloc_die();
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    lVar1 = __xargmatch_internal();
    return (ulong)*(uint *)(backup_types + lVar1 * 4);
  }
  return 2;
}

