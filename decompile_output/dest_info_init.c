
void dest_info_init(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = hash_initialize(0x3d,0,triple_hash,triple_compare,triple_free);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}

