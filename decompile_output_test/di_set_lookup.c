
ulong di_set_lookup(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = map_device_isra_0(*param_1,param_1 + 2,param_2);
  if ((lVar1 != 0) && (lVar2 = map_inode_number_isra_1(param_1 + 1,param_3), lVar2 != -1)) {
    lVar1 = hash_lookup(lVar1,lVar2);
    return (ulong)(lVar1 != 0);
  }
  return 0xffffffff;
}

