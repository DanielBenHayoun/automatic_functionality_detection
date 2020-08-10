
ulong get_version(undefined8 param_1,char *param_2)

{
  long lVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    lVar1 = __xargmatch_internal(param_1,param_2,backup_args,backup_types,4,argmatch_die);
    return (ulong)*(uint *)(backup_types + lVar1 * 4);
  }
  return 2;
}

