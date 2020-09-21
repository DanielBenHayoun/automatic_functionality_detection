
ulong setup_dir_isra_4(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_1 & 0x102) == 0) {
    uVar2 = func_0x00101c20(0x20);
    *param_2 = uVar2;
    uVar1 = 0;
    if (uVar2 != 0) {
      cycle_check_init();
      return 1;
    }
  }
  else {
    uVar1 = hash_initialize(0x1f,0,AD_hash,AD_compare,PTR_free_0030efc8);
    *param_2 = uVar1;
    uVar1 = uVar1 & 0xffffffffffffff00 | (ulong)(uVar1 != 0);
  }
  return uVar1;
}

