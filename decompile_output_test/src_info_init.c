
void src_info_init(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = hash_initialize(0x3d,0,triple_hash_no_name,triple_compare,triple_free);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}

