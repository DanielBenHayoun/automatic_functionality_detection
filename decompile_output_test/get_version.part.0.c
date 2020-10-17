
ulong get_version_part_0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = __xargmatch_internal(param_1,param_2,backup_args,backup_types,4,argmatch_die);
  return (ulong)*(uint *)(backup_types + lVar1 * 4);
}

