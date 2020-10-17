
ulong triple_hash_no_name(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}

