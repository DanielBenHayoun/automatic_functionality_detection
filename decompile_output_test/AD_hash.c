
ulong AD_hash(long param_1,ulong param_2)

{
  return *(ulong *)(param_1 + 8) % param_2;
}

